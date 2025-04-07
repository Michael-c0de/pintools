#include "pin.H"
#include "libdft_api.h"
#include <iostream>
#include <iomanip>

/* 全局配置 */
constexpr tag_t TAINT_MAGIC = 0xBAD; // 污点标签
constexpr int ADDR_WIDTH = 16;       // 地址显示宽度（0x + 14位十六进制）
constexpr int LOC_WIDTH = 20;        // 位置描述宽度
using namespace std;

FILE *dft_log;

/* 标记特定内存为污点源 */
VOID MarkTaintedMemory(ADDRINT addr, UINT32 size)
{
    for (UINT32 i = 0; i < size; i++)
    {
        tagmap_setb(addr + i, TAINT_MAGIC);
    }
    fprintf(dft_log, "[MEM] %p is marked\n", addr);
}

/* 检查操作数是否被污染 */
VOID CheckMemTaint(ADDRINT addr, const char *context, ADDRINT ip)
{
    tag_t tag = tagmap_getb(addr); // libdft 获取内存标签（检查首字节）
    if (tag == TAINT_MAGIC)
    {
        fprintf(dft_log, "[%s] %p is tainted with tag %d @ %p\n", context, addr, tag, ip);
    }
}

VOID CheckMarkMemTaint(ADDRINT ip)
{
    // 0060fdfc
    if (ip == 0x0401C38)
    {
        // 示例：标记内存区域为污点源
        MarkTaintedMemory(0x060fdfc, 4);
    }
}

// 插桩每条指令
VOID Instruction(INS ins, VOID *v)
{
    INS_InsertCall(
        ins, IPOINT_BEFORE, (AFUNPTR)CheckMarkMemTaint,
        IARG_INST_PTR,
        IARG_END);

    if (INS_IsMemoryRead(ins))
    {
        INS_InsertCall(
            ins, IPOINT_BEFORE, (AFUNPTR)CheckMemTaint,
            IARG_MEMORYREAD_EA,
            IARG_PTR, "MEM_READ",
            IARG_INST_PTR,
            IARG_END);
    }

    if (INS_IsMemoryWrite(ins))
    {
        INS_InsertCall(
            ins, IPOINT_BEFORE, (AFUNPTR)CheckMemTaint,
            IARG_MEMORYWRITE_EA,
            IARG_PTR, "MEM_WRITE",
            IARG_INST_PTR,
            IARG_END);
    }
}

// This function is called when the application exits
VOID Fini(INT32 code, VOID *v)
{
    fprintf(dft_log, "#eof\n");
    fclose(dft_log);
}

/* 主函数 */
int main(int argc, char *argv[])
{

    dft_log = fopen("dft_log.out", "w");

    PIN_Init(argc, argv);

    if (libdft_init() != 0)
    {
        std::cerr << "[ERROR] Failed to init libdft\n";
        return 1;
    }

    // 在每个指令前插桩，检查操作数是否携带污点标记
    INS_AddInstrumentFunction(Instruction, nullptr);

    // Register Fini to be called when the application exits
    PIN_AddFiniFunction(Fini, 0);

    PIN_StartProgram();

    return 0;
}