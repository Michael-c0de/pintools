# 基于Pin的二进制分析

#### 1. 环境

插桩工具已在win11下预编译好，若要在本地编译，需要clang和make。
clang：通过https://github.com/llvm/llvm-project/releases安装，或者直接使用VS提供的版本（前提是安装LLVM支持

make：通过cygwin64安装



#### 2. 编译

```shell
cd .\source\tools\ins-trace\
make TARGET=ia32    // for 32
make TARGET=intel64 // for 64

```



#### 3. 功能

（以下功能都支持ia32/intel64）

##### 3.1 程序执行信息记录

1. 指令执行记录ins-trace
2. 内存访问记录mem-rw-trace
3. 函数执行记录func-trace
4. 模块加载记录img-trace

##### 3.2 动态污点分析

动态污点分析功能迁移自[AngoraFuzzer/libdft64: libdft for Intel Pin 3.x and 64 bit platform. (Dynamic taint tracking, taint analysis)](https://github.com/AngoraFuzzer/libdft64)，对其稍加修改，即可支持32位程序。

`source\tools\libdft_src` 和 `source\tools\libdft32_src` 是libdft依赖库，已经预编译好，无需任何修改。

以下是一个目标程序的例子，记 `src` 为污点源，其地址为`00624160`

```c
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *src = "11111111111111111111111111111\n";
    char sink[20];

    printf("src = %p, sink = %p\n", src, sink);
    char *m1 = src;
    char *m2 = m1;
    char *m3 = m2;
    memcpy(sink, src, 20);
    sink[2] += 1;

    sink[10] += 1;

    sink[14] += 1;

    return 0;
}
```



定制污点分析工具需要指定污点源和监控点.

污点源标记：在`source\tools\dta\mytest.cpp`.中，手动标记污点源`  MarkTaintedMemory(0x0624160, 20); `

监控：在每条指令前插桩，监测被读/写的地址是否携带污点标签。

```c
PS C:\Users\16795\Desktop\pintools> .\pin32.bat -t .\source\tools\dta\obj-ia32\mytest.dll -- .\a32.exe
[TAINT] MARK                 addr=0x624160           size=20  
src = 00624160, sink = 00D9FC7C
[ALERT] MEM_READ             addr=0x624160           inst=0x6122e7
[ALERT] MEM_WRITE            addr=0xd9fc7c           inst=0x6122e9
[ALERT] MEM_READ             addr=0x624164           inst=0x6122e7
[ALERT] MEM_WRITE            addr=0xd9fc80           inst=0x6122e9
[ALERT] MEM_READ             addr=0x624168           inst=0x6122e7
[ALERT] MEM_WRITE            addr=0xd9fc84           inst=0x6122e9
[ALERT] MEM_READ             addr=0x62416c           inst=0x6122e7
[ALERT] MEM_WRITE            addr=0xd9fc88           inst=0x6122e9
[ALERT] MEM_READ             addr=0x624170           inst=0x6122e7
[ALERT] MEM_WRITE            addr=0xd9fc8c           inst=0x6122e9
[ALERT] MEM_READ             addr=0xd9fc7e           inst=0x611064
[ALERT] MEM_WRITE            addr=0xd9fc7e           inst=0x61106b
[ALERT] MEM_READ             addr=0xd9fc86           inst=0x61106e
[ALERT] MEM_WRITE            addr=0xd9fc86           inst=0x611075
[ALERT] MEM_READ             addr=0xd9fc8a           inst=0x611078
[ALERT] MEM_WRITE            addr=0xd9fc8a           inst=0x61107f
```



**污点分析需定制mytest.cpp**，修改后请在 `source\tools\dta` 目录下运行 `make TARGET=ia32 clean` 或 `make TARGET=intel64 clean` 删除缓存，再另行编译。



##### 3.4 pintools分析对抗

pintools插桩会显著降低程序性能，`attack\main.cpp`通过测算目标函数执行时间检测是否存在插桩。当函数执行时间明显超出正常范围时，报告潜在的插桩。

```bash
PS C:\Users\16795\Desktop\pintools> .\pin32.bat -t .\source\tools\ins-trace\obj-ia32\ins-trace.dll -- .\attack\debugger_check.exe
2750
Possible performance anomaly detected (instrumentation?)!
```

