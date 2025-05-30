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
#ifndef _UAPI__SVM_H
#define _UAPI__SVM_H
#define SVM_EXIT_READ_CR0 0x000
#define SVM_EXIT_READ_CR3 0x003
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_READ_CR4 0x004
#define SVM_EXIT_READ_CR8 0x008
#define SVM_EXIT_WRITE_CR0 0x010
#define SVM_EXIT_WRITE_CR3 0x013
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_WRITE_CR4 0x014
#define SVM_EXIT_WRITE_CR8 0x018
#define SVM_EXIT_READ_DR0 0x020
#define SVM_EXIT_READ_DR1 0x021
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_READ_DR2 0x022
#define SVM_EXIT_READ_DR3 0x023
#define SVM_EXIT_READ_DR4 0x024
#define SVM_EXIT_READ_DR5 0x025
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_READ_DR6 0x026
#define SVM_EXIT_READ_DR7 0x027
#define SVM_EXIT_WRITE_DR0 0x030
#define SVM_EXIT_WRITE_DR1 0x031
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_WRITE_DR2 0x032
#define SVM_EXIT_WRITE_DR3 0x033
#define SVM_EXIT_WRITE_DR4 0x034
#define SVM_EXIT_WRITE_DR5 0x035
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_WRITE_DR6 0x036
#define SVM_EXIT_WRITE_DR7 0x037
#define SVM_EXIT_EXCP_BASE 0x040
#define SVM_EXIT_INTR 0x060
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_NMI 0x061
#define SVM_EXIT_SMI 0x062
#define SVM_EXIT_INIT 0x063
#define SVM_EXIT_VINTR 0x064
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_CR0_SEL_WRITE 0x065
#define SVM_EXIT_IDTR_READ 0x066
#define SVM_EXIT_GDTR_READ 0x067
#define SVM_EXIT_LDTR_READ 0x068
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_TR_READ 0x069
#define SVM_EXIT_IDTR_WRITE 0x06a
#define SVM_EXIT_GDTR_WRITE 0x06b
#define SVM_EXIT_LDTR_WRITE 0x06c
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_TR_WRITE 0x06d
#define SVM_EXIT_RDTSC 0x06e
#define SVM_EXIT_RDPMC 0x06f
#define SVM_EXIT_PUSHF 0x070
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_POPF 0x071
#define SVM_EXIT_CPUID 0x072
#define SVM_EXIT_RSM 0x073
#define SVM_EXIT_IRET 0x074
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_SWINT 0x075
#define SVM_EXIT_INVD 0x076
#define SVM_EXIT_PAUSE 0x077
#define SVM_EXIT_HLT 0x078
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_INVLPG 0x079
#define SVM_EXIT_INVLPGA 0x07a
#define SVM_EXIT_IOIO 0x07b
#define SVM_EXIT_MSR 0x07c
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_TASK_SWITCH 0x07d
#define SVM_EXIT_FERR_FREEZE 0x07e
#define SVM_EXIT_SHUTDOWN 0x07f
#define SVM_EXIT_VMRUN 0x080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_VMMCALL 0x081
#define SVM_EXIT_VMLOAD 0x082
#define SVM_EXIT_VMSAVE 0x083
#define SVM_EXIT_STGI 0x084
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_CLGI 0x085
#define SVM_EXIT_SKINIT 0x086
#define SVM_EXIT_RDTSCP 0x087
#define SVM_EXIT_ICEBP 0x088
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_WBINVD 0x089
#define SVM_EXIT_MONITOR 0x08a
#define SVM_EXIT_MWAIT 0x08b
#define SVM_EXIT_MWAIT_COND 0x08c
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVM_EXIT_XSETBV 0x08d
#define SVM_EXIT_NPF 0x400
#define SVM_EXIT_ERR -1
#define SVM_EXIT_REASONS   { SVM_EXIT_READ_CR0, "read_cr0" },   { SVM_EXIT_READ_CR3, "read_cr3" },   { SVM_EXIT_READ_CR4, "read_cr4" },   { SVM_EXIT_READ_CR8, "read_cr8" },   { SVM_EXIT_WRITE_CR0, "write_cr0" },   { SVM_EXIT_WRITE_CR3, "write_cr3" },   { SVM_EXIT_WRITE_CR4, "write_cr4" },   { SVM_EXIT_WRITE_CR8, "write_cr8" },   { SVM_EXIT_READ_DR0, "read_dr0" },   { SVM_EXIT_READ_DR1, "read_dr1" },   { SVM_EXIT_READ_DR2, "read_dr2" },   { SVM_EXIT_READ_DR3, "read_dr3" },   { SVM_EXIT_WRITE_DR0, "write_dr0" },   { SVM_EXIT_WRITE_DR1, "write_dr1" },   { SVM_EXIT_WRITE_DR2, "write_dr2" },   { SVM_EXIT_WRITE_DR3, "write_dr3" },   { SVM_EXIT_WRITE_DR5, "write_dr5" },   { SVM_EXIT_WRITE_DR7, "write_dr7" },   { SVM_EXIT_EXCP_BASE + DB_VECTOR, "DB excp" },   { SVM_EXIT_EXCP_BASE + BP_VECTOR, "BP excp" },   { SVM_EXIT_EXCP_BASE + UD_VECTOR, "UD excp" },   { SVM_EXIT_EXCP_BASE + PF_VECTOR, "PF excp" },   { SVM_EXIT_EXCP_BASE + NM_VECTOR, "NM excp" },   { SVM_EXIT_EXCP_BASE + MC_VECTOR, "MC excp" },   { SVM_EXIT_INTR, "interrupt" },   { SVM_EXIT_NMI, "nmi" },   { SVM_EXIT_SMI, "smi" },   { SVM_EXIT_INIT, "init" },   { SVM_EXIT_VINTR, "vintr" },   { SVM_EXIT_CPUID, "cpuid" },   { SVM_EXIT_INVD, "invd" },   { SVM_EXIT_HLT, "hlt" },   { SVM_EXIT_INVLPG, "invlpg" },   { SVM_EXIT_INVLPGA, "invlpga" },   { SVM_EXIT_IOIO, "io" },   { SVM_EXIT_MSR, "msr" },   { SVM_EXIT_TASK_SWITCH, "task_switch" },   { SVM_EXIT_SHUTDOWN, "shutdown" },   { SVM_EXIT_VMRUN, "vmrun" },   { SVM_EXIT_VMMCALL, "hypercall" },   { SVM_EXIT_VMLOAD, "vmload" },   { SVM_EXIT_VMSAVE, "vmsave" },   { SVM_EXIT_STGI, "stgi" },   { SVM_EXIT_CLGI, "clgi" },   { SVM_EXIT_SKINIT, "skinit" },   { SVM_EXIT_WBINVD, "wbinvd" },   { SVM_EXIT_MONITOR, "monitor" },   { SVM_EXIT_MWAIT, "mwait" },   { SVM_EXIT_XSETBV, "xsetbv" },   { SVM_EXIT_NPF, "npf" }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
