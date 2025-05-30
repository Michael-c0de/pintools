/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_PTRACE_H
#define _UAPI_LINUX_PTRACE_H
#include <linux/types.h>
#define PTRACE_TRACEME 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_PEEKTEXT 1
#define PTRACE_PEEKDATA 2
#define PTRACE_PEEKUSR 3
#define PTRACE_POKETEXT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_POKEDATA 5
#define PTRACE_POKEUSR 6
#define PTRACE_CONT 7
#define PTRACE_KILL 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_SINGLESTEP 9
#define PTRACE_ATTACH 16
#define PTRACE_DETACH 17
#define PTRACE_SYSCALL 24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_SETOPTIONS 0x4200
#define PTRACE_GETEVENTMSG 0x4201
#define PTRACE_GETSIGINFO 0x4202
#define PTRACE_SETSIGINFO 0x4203
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_GETREGSET 0x4204
#define PTRACE_SETREGSET 0x4205
#define PTRACE_SEIZE 0x4206
#define PTRACE_INTERRUPT 0x4207
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_LISTEN 0x4208
#define PTRACE_PEEKSIGINFO 0x4209
struct ptrace_peeksiginfo_args {
 __u64 off;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 flags;
 __s32 nr;
};
#define PTRACE_GETSIGMASK 0x420a
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_SETSIGMASK 0x420b
#define PTRACE_PEEKSIGINFO_SHARED (1 << 0)
#define PTRACE_EVENT_FORK 1
#define PTRACE_EVENT_VFORK 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_EVENT_CLONE 3
#define PTRACE_EVENT_EXEC 4
#define PTRACE_EVENT_VFORK_DONE 5
#define PTRACE_EVENT_EXIT 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_EVENT_SECCOMP 7
#define PTRACE_EVENT_STOP 128
#define PTRACE_O_TRACESYSGOOD 1
#define PTRACE_O_TRACEFORK (1 << PTRACE_EVENT_FORK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_O_TRACEVFORK (1 << PTRACE_EVENT_VFORK)
#define PTRACE_O_TRACECLONE (1 << PTRACE_EVENT_CLONE)
#define PTRACE_O_TRACEEXEC (1 << PTRACE_EVENT_EXEC)
#define PTRACE_O_TRACEVFORKDONE (1 << PTRACE_EVENT_VFORK_DONE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_O_TRACEEXIT (1 << PTRACE_EVENT_EXIT)
#define PTRACE_O_TRACESECCOMP (1 << PTRACE_EVENT_SECCOMP)
#define PTRACE_O_EXITKILL (1 << 20)
#define PTRACE_O_MASK (0x000000ff | PTRACE_O_EXITKILL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/ptrace.h>
#endif
