#include <windows.h>
#include <iostream>
#include <string>
#include <psapi.h>

void func()
{
    // Execute a function that is supposed to be fast
    volatile int i = 0;
    for (int j = 0; j < 1000000; ++j)
    {
        i += j;
    }
}

bool CheckForTimingAnomalies()
{
    DWORD start_time = GetTickCount();

    func();
    DWORD end_time = GetTickCount();
    DWORD time_taken = end_time - start_time;

    printf("%d\n", time_taken);
    if (time_taken > 50)
    {
        return true;
    }
    return false;
}

int main()
{
    if (CheckForTimingAnomalies())
    {
        std::cout << "Possible performance anomaly detected (instrumentation?)!" << std::endl;
    }
    else
    {
        std::cout << "No performance anomaly detected!" << std::endl;
    }

    return 0;
}
