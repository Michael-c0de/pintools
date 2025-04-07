/*
 * Copyright (C) 2004-2021 Intel Corporation.
 * SPDX-License-Identifier: MIT
 */

#include <stdio.h>
#include "pin.H"

FILE *trace;

// This function is called when the application exits
VOID Fini(INT32 code, VOID *v)
{
    fprintf(trace, "#eof\n");
    fclose(trace);
}

VOID ImageLoad(IMG img, VOID *v)
{
    fprintf(trace, "[LOAD] %s\t (id = %llu, low = %llu, high = %llu, entry = %llu)\n",
            IMG_Name(img).c_str(),
            IMG_Id(img), IMG_LowAddress(img), IMG_HighAddress(img), IMG_EntryAddress(img));
}

VOID ImageUnload(IMG img, VOID *v)
{
    fprintf(trace, "[UNLOAD] %s\t (id = %llu)\n",
            IMG_Name(img).c_str(),
            IMG_Id(img));
}

/* ===================================================================== */
/* Print Help Message                                                    */
/* ===================================================================== */

INT32 Usage()
{
    PIN_ERROR("This Pintool prints the IPs of every instruction executed\n" + KNOB_BASE::StringKnobSummary() + "\n");
    return -1;
}

int main(int argc, char *argv[])
{
    trace = fopen("./imgtrace", "w");
    // Initialize pin
    if (PIN_Init(argc, argv))
        return Usage();
    IMG_AddInstrumentFunction(ImageLoad, 0);
    IMG_AddUnloadFunction(ImageUnload, 0);
    // Register Fini to be called when the application exits
    PIN_AddFiniFunction(Fini, 0);

    // Start the program, never returns
    PIN_StartProgram();

    return 0;
}
