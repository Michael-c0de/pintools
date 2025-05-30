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
#ifndef _UAPI_ASM_X86_KVM_PARA_H
#define _UAPI_ASM_X86_KVM_PARA_H
#include <linux/types.h>
#include <asm/hyperv.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CPUID_SIGNATURE 0x40000000
#define KVM_CPUID_FEATURES 0x40000001
#define KVM_FEATURE_CLOCKSOURCE 0
#define KVM_FEATURE_NOP_IO_DELAY 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_FEATURE_MMU_OP 2
#define KVM_FEATURE_CLOCKSOURCE2 3
#define KVM_FEATURE_ASYNC_PF 4
#define KVM_FEATURE_STEAL_TIME 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_FEATURE_PV_EOI 6
#define KVM_FEATURE_PV_UNHALT 7
#define KVM_FEATURE_CLOCKSOURCE_STABLE_BIT 24
#define MSR_KVM_WALL_CLOCK 0x11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSR_KVM_SYSTEM_TIME 0x12
#define KVM_MSR_ENABLED 1
#define MSR_KVM_WALL_CLOCK_NEW 0x4b564d00
#define MSR_KVM_SYSTEM_TIME_NEW 0x4b564d01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSR_KVM_ASYNC_PF_EN 0x4b564d02
#define MSR_KVM_STEAL_TIME 0x4b564d03
#define MSR_KVM_PV_EOI_EN 0x4b564d04
struct kvm_steal_time {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 steal;
 __u32 version;
 __u32 flags;
 __u32 pad[12];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KVM_STEAL_ALIGNMENT_BITS 5
#define KVM_STEAL_VALID_BITS ((-1ULL << (KVM_STEAL_ALIGNMENT_BITS + 1)))
#define KVM_STEAL_RESERVED_MASK (((1 << KVM_STEAL_ALIGNMENT_BITS) - 1 ) << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_MAX_MMU_OP_BATCH 32
#define KVM_ASYNC_PF_ENABLED (1 << 0)
#define KVM_ASYNC_PF_SEND_ALWAYS (1 << 1)
#define KVM_MMU_OP_WRITE_PTE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_MMU_OP_FLUSH_TLB 2
#define KVM_MMU_OP_RELEASE_PT 3
struct kvm_mmu_op_header {
 __u32 op;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 pad;
};
struct kvm_mmu_op_write_pte {
 struct kvm_mmu_op_header header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 pte_phys;
 __u64 pte_val;
};
struct kvm_mmu_op_flush_tlb {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvm_mmu_op_header header;
};
struct kvm_mmu_op_release_pt {
 struct kvm_mmu_op_header header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 pt_phys;
};
#define KVM_PV_REASON_PAGE_NOT_PRESENT 1
#define KVM_PV_REASON_PAGE_READY 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_vcpu_pv_apf_data {
 __u32 reason;
 __u8 pad[60];
 __u32 enabled;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KVM_PV_EOI_BIT 0
#define KVM_PV_EOI_MASK (0x1 << KVM_PV_EOI_BIT)
#define KVM_PV_EOI_ENABLED KVM_PV_EOI_MASK
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_PV_EOI_DISABLED 0x0
#endif
