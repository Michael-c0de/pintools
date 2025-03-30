#include "pin.H"
#include "libdft_api.h"
#include <iostream>
#include <iomanip>

/* 全局配置 */
constexpr tag_t TAINT_MAGIC = 0xBAD; // 污点标签
constexpr int ADDR_WIDTH = 16;        // 地址显示宽度（0x + 14位十六进制）
constexpr int LOC_WIDTH = 20;         // 位置描述宽度

/* 标记特定内存为污点源 */
VOID MarkTaintedMemory(ADDRINT addr, UINT32 size) {
    for(UINT32 i = 0; i < size; i++) {
        tagmap_setb(addr + i, TAINT_MAGIC);
    }
    std::cout << "[TAINT] "
              << std::setw(LOC_WIDTH) << std::left << "MARK" 
              << " addr=0x" << std::setw(ADDR_WIDTH) << std::hex << addr 
              << " size=" << std::setw(4) << std::dec << size 
              << std::endl;
}

/* 检查操作数是否被污染 */
VOID CheckTaint(ADDRINT addr, const char* context, ADDRINT ip) {
    if(tagmap_getb(addr) == TAINT_MAGIC) {
        std::cout << "[ALERT] "
                  << std::setw(LOC_WIDTH) << std::left << context 
                  << " addr=0x" << std::setw(ADDR_WIDTH) << std::hex << addr
                  << " inst=0x" << std::setw(ADDR_WIDTH) << ip 
                  << std::endl;
    }
}

/* 指令插桩逻辑 */
VOID InstrumentInstruction(INS ins, VOID* v) {
    if(INS_IsMemoryRead(ins)) {
        INS_InsertCall(
            ins, IPOINT_BEFORE, (AFUNPTR)CheckTaint,
            IARG_MEMORYREAD_EA,
            IARG_PTR, "MEM_READ",
            IARG_INST_PTR,
            IARG_END
        );
    }
    
    if(INS_IsMemoryWrite(ins)) {
        INS_InsertCall(
            ins, IPOINT_BEFORE, (AFUNPTR)CheckTaint,
            IARG_MEMORYWRITE_EA,
            IARG_PTR, "MEM_WRITE",
            IARG_INST_PTR,
            IARG_END
        );
    }
}

/* 主函数 */
int main(int argc, char* argv[]) {
    PIN_Init(argc, argv);
    
    if(libdft_init() != 0) {
        std::cerr << "[ERROR] Failed to init libdft\n";
        return 1;
    }

    // 在每个指令前插桩，检查操作数是否携带污点标记
    INS_AddInstrumentFunction(InstrumentInstruction, nullptr);

    // 示例：标记内存区域为污点源
    MarkTaintedMemory(0x0624160, 20); 

    PIN_StartProgram();
    return 0;
}