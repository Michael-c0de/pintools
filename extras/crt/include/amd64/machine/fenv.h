/*-
 * Copyright (c) 2004-2005 David Schultz <das (at) FreeBSD.ORG>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _AMD64_FENV_H_
#define _AMD64_FENV_H_

#include <sys/types.h>

__BEGIN_DECLS

/*
 * Each symbol representing a floating point exception expands to an integer
 * constant expression with values, such that bitwise-inclusive ORs of _all
 * combinations_ of the constants result in distinct values.
 *
 * We use such values that allow direct bitwise operations on FPU/SSE registers.
 */
#define FE_INVALID    0x01
#define FE_DENORMAL   0x02
#define FE_DIVBYZERO  0x04
#define FE_OVERFLOW   0x08
#define FE_UNDERFLOW  0x10
#define FE_INEXACT    0x20

/*
 * The following symbol is simply the bitwise-inclusive OR of all floating-point
 * exception constants defined above.
 */
#define FE_ALL_EXCEPT   (FE_INVALID | FE_DENORMAL | FE_DIVBYZERO | \
                         FE_OVERFLOW | FE_UNDERFLOW | FE_INEXACT)

/*
 * Each symbol representing the rounding direction, expands to an integer
 * constant expression whose value is distinct non-negative value.
 *
 * We use such values that allow direct bitwise operations on FPU/SSE registers.
 */
#define FE_TONEAREST  0x000
#define FE_DOWNWARD   0x400
#define FE_UPWARD     0x800
#define FE_TOWARDZERO 0xc00

/*
 * fenv_t represents the entire floating-point environment.
 */
typedef struct {
  struct {
    __uint32_t __control;   /* Control word register */
    __uint32_t __status;    /* Status word register */
    __uint32_t __tag;       /* Tag word register */
    __uint32_t __others[4]; /* EIP, Pointer Selector, etc */
  } __x87;
  __uint32_t __mxcsr;       /* Control, status register */
} fenv_t;

/*
 * fexcept_t represents the floating-point status flags collectively, including
 * any status the implementation associates with the flags.
 *
 * A floating-point status flag is a system variable whose value is set (but
 * never cleared) when a floating-point exception is raised, which occurs as a
 * side effect of exceptional floating-point arithmetic to provide auxiliary
 * information.
 *
 * A floating-point control mode is a system variable whose value may be set by
 * the user to affect the subsequent behavior of floating-point arithmetic.
 */
typedef __uint32_t fexcept_t;

__END_DECLS

#endif /* !_AMD64_FENV_H_ */
