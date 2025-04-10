#include <windows.h>
#include <tlhelp32.h>
#include <iostream>
#include <string>

// 检查是否存在指定的调试器进程
bool IsDebuggerProcessRunning() {
    const char* debuggerNames[] = { "ollydbg.exe", "x64dbg.exe", "ida.exe", "windbg.exe","pin.exe" };

    // 创建进程快照
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) {
        return false;
    }

    PROCESSENTRY32 pe32;
    pe32.dwSize = sizeof(PROCESSENTRY32);

    // 遍历进程列表
    if (Process32First(hSnapshot, &pe32)) {
        do {
            // 遍历已知的调试器名称
            for (const auto& debuggerName : debuggerNames) {
                // 将进程名转换为小写以进行匹配
                std::string processName = pe32.szExeFile;
                for (auto& c : processName) c = tolower(c);

                if (processName == debuggerName) {
                    CloseHandle(hSnapshot);
                    return true;  // 找到匹配的调试器进程
                }
            }
        } while (Process32Next(hSnapshot, &pe32));
    }

    CloseHandle(hSnapshot);
    return false;  // 未找到调试器进程
}

int main() {
    if (IsDebuggerProcessRunning()) {
        std::cout << "Debugger process detected! Exiting...\n";
        ExitProcess(1);  // 检测到调试器，退出程序
    } else {
        std::cout << "No debugger detected.\n";
    }

    // 正常程序逻辑
    std::cout << "Program is running.\n";
    return 0;
}

