/*
 * Copyright (C) 2004-2021 Intel Corporation.
 * SPDX-License-Identifier: MIT
 */

#include <stdio.h>
#include "pin.H"

FILE *trace;
std::vector<ADDRINT> callStack;
std::map<ADDRINT, std::string> funcMap;

VOID HandleCall(ADDRINT funcAddr) { 
    fprintf(trace, "%s was called\n", funcMap[funcAddr].c_str()); }

VOID HandleRet(ADDRINT funcAddr) { fprintf(trace, "ret from %s\n", funcMap[funcAddr].c_str()); }

// Pin calls this function every time a new instruction is encountered
VOID InstrumentRoutine(RTN rtn, VOID *v)
{
    RTN_Open(rtn);
    // 获取addr -> funcname映射对
    ADDRINT rtnAddr = RTN_Address(rtn);
    funcMap[rtnAddr] = RTN_Name(rtn);

    // 函数入口插桩
    RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)HandleCall, IARG_ADDRINT, rtnAddr, IARG_END);
    // 函数返回插桩
    RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)HandleRet, IARG_ADDRINT, rtnAddr, IARG_END);

    RTN_Close(rtn);
}

// This function is called when the application exits
VOID Fini(INT32 code, VOID *v)
{
    fprintf(trace, "#eof\n");
    fclose(trace);
}

/* ===================================================================== */
/* Print Help Message                                                    */
/* ===================================================================== */

INT32 Usage()
{
    PIN_ERROR("This Pintool prints the IPs of every instruction executed\n" + KNOB_BASE::StringKnobSummary() + "\n");
    return -1;
}

/* ===================================================================== */
/* Main                                                                  */
/* ===================================================================== */

int main(int argc, char *argv[])
{
    trace = fopen("ftrace.out", "w");
    PIN_InitSymbols();

    // Initialize pin
    if (PIN_Init(argc, argv))
        return Usage();

    // Register Instruction to be called to instrument instructions
    RTN_AddInstrumentFunction(InstrumentRoutine, 0);

    // Register Fini to be called when the application exits
    PIN_AddFiniFunction(Fini, 0);

    // Start the program, never returns
    PIN_StartProgram();

    return 0;
}