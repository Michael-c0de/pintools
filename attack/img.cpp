#include <windows.h>
#include <psapi.h>
#include <stdio.h>

#define NT_SUCCESS(Status) ((NTSTATUS)(Status) >= 0)

// ���� NtQueryVirtualMemory ԭ��
typedef NTSTATUS(WINAPI* _NtQueryVirtualMemory)(
    HANDLE ProcessHandle,
    PVOID BaseAddress,
    int MemoryInformationClass,
    PVOID MemoryInformation,
    SIZE_T MemoryInformationLength,
    PSIZE_T ReturnLength
);

#define MemorySectionName 2

void PrintMemorySectionName(HANDLE hProcess, PVOID addr) {
    static _NtQueryVirtualMemory NtQueryVirtualMemory = nullptr;

    if (!NtQueryVirtualMemory) {
        HMODULE ntdll = GetModuleHandleA("ntdll.dll");
        NtQueryVirtualMemory = (_NtQueryVirtualMemory)GetProcAddress(ntdll, "NtQueryVirtualMemory");
        if (!NtQueryVirtualMemory) {
            printf("[-] Failed to resolve NtQueryVirtualMemory\n");
            return;
        }
    }

    WCHAR buffer[MAX_PATH];
    SIZE_T returnLen = 0;
    NTSTATUS status = NtQueryVirtualMemory(
        hProcess,
        addr,
        MemorySectionName,
        buffer,
        sizeof(buffer),
        &returnLen
    );

    if (NT_SUCCESS(status)) {
        wprintf(L"[+] Section: %s at 0x%p\n", buffer, addr);
    } else {
        printf("[?] No section name found at 0x%p (status = 0x%08X)\n", addr, status);
    }
}


bool IsLikelyManualMapped(HMODULE hModule) {
    // ����ڴ��е�ģ���Ƿ������Ч�� PE ͷ
    IMAGE_DOS_HEADER* dosHeader = (IMAGE_DOS_HEADER*)hModule;
    if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE) {
        return true;  // û�� MZ ͷ���ܿ������ֶ�ӳ��
    }

    IMAGE_NT_HEADERS* ntHeader = (IMAGE_NT_HEADERS*)((BYTE*)hModule + dosHeader->e_lfanew);
    if (ntHeader->Signature != IMAGE_NT_SIGNATURE) {
        return true;  // û�� PE ͷ
    }

    return false; // ���������ǺϷ���ģ��
}

void ScanMemoryForManualMappedModules() {
    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);

    MEMORY_BASIC_INFORMATION mbi;
    BYTE* addr = 0;
    HANDLE hProcess = GetCurrentProcess();

    printf("[+] Scanning memory for manually mapped modules...\n");

    while (addr < sysInfo.lpMaximumApplicationAddress) {
        if (VirtualQuery(addr, &mbi, sizeof(mbi))) {
            if (mbi.State == MEM_COMMIT && mbi.Type == MEM_IMAGE) {
                if (IsLikelyManualMapped((HMODULE)mbi.BaseAddress)) {
                    printf("[-] Suspicious module at: 0x%p\n", mbi.BaseAddress);
                    PrintMemorySectionName(hProcess, mbi.BaseAddress);
                }
            }
            addr += mbi.RegionSize;
        } else {
            break;
        }
    }
}


int main() {
    ScanMemoryForManualMappedModules();
    return 0;
}
