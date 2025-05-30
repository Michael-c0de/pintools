/*
 * Copyright (C) 2010-2023 Intel Corporation.
 * SPDX-License-Identifier: MIT
 */

#ifdef PIN_G_FPSTATE_IA32E_PH
#error duplicate inclusion of fpstate_ia32e
#else
#define PIN_G_FPSTATE_IA32E_PH
/*! @file
  Contains declarations of types related to the fp state on Intel64
 */

/*! @ingroup CONTEXT
 * The memory layout written by FXSAVE and read by FXRSTOR.
 * It is the legacy part of the FP state
 */
typedef UTIL::FXSAVE_INTEL64_PROMOTED FXSAVE;

/*! @ingroup CONTEXT
 * Header of the XSAVE area
 */
struct XSAVE_HEADER
{
    XSAVE_HEADER() {}
    UINT64 _xstate_bv;
    UINT64 _xcomp_bv;
    UINT64 _reserved[6];
};

/*! @ingroup CONTEXT
 * Size of the reserved bytes between the XSTATE and the VSTATE parts of the FP state area,
 * as defined by the xsave layout in the SDM.
 */
const size_t VSTATE_PADDING = 128;

/*! @ingroup CONTEXT
 * The memory layout written by XSAVE and read by XRSTOR,
 * and used to hold the floating point part of the context
 * within the CONTEXT structure.
 */
struct FPSTATE
{
    // fxsave_legacy is applicable on all supported CPUs
    FXSAVE fxsave_legacy; //                                                    512  bytes at offset 0

    // The following are only applicable on processors that support XSAVE
    struct XSTATE
    {
        XSAVE_HEADER _extendedHeader; //                                        64   bytes at offset 512
        UINT8 _ymmUpper[16 * 16];     // upper 128 bits of ymm0-ymm15                 256  bytes at offset 576
    } _xstate;

    // The following is only applicable on processors that support AVX512
    // So far there are 832 bytes of data but the next bulk of data begins at offset 1088.
    UINT8 _reserved[VSTATE_PADDING]; //                                         128  bytes at offset 832

    // The _vstate is comprised of five parts.
    //   1. BND registers BND0-BND3
    //   2. BND control and status registers
    //   3. The Opmask registers k0-k7
    //   4. The upper 256 bits of zmm0-zmm15
    //   5. zmm16-zmm31 (512 bits each)
    struct VSTATE
    {
        UINT8 _bndRegs[64];       // BND registers BND0-BND3.                 64   bytes at offset 960
        UINT8 _bndCSR[64];        // BND control and status registers.        64   bytes at offset 1024
        UINT64 _kmasks[8];        // 8 64-bit k (mask) registers              64   bytes at offset 1088
        UINT8 _zmmUpper[16 * 32]; // upper 256 bits of zmm0-zmm15             512  bytes at offset 1152
        UINT8 _zmms[16 * 64];     // 16 512-bit zmm registers (zmm16-zmm31)   1024 bytes at offset 1664
    } _vstate;

    // Total of 2688 bytes.
};

/*! @ingroup CONTEXT
 *  Size of Pin's (full) FP state structure.
 *  It is larger than the size of the structure used by the fxsave instruction (see FXSAVE).
 *  It may be larger than the size of the structure used by the xsave instruction, depending on the features enabled in the
 *  xstate_bv field in the extended header.
 */
const size_t FPSTATE_SIZE = sizeof(FPSTATE);

/*! @ingroup CONTEXT
 *  This is the alignment that the structure used to save the FPSTATE
 *  The alignment required by xsave is 64, the alignment required by
 *  fxsave is 16 - so we use the larger
 */
const size_t FPSTATE_ALIGNMENT = 64;

#endif // PIN_G_FPSTATE_IA32E_PH
