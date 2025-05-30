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
#ifndef __LINUX_KVM_H
#define __LINUX_KVM_H
#include <linux/types.h>
#include <linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ioctl.h>
#include <asm/kvm.h>
#define KVM_API_VERSION 12
#define KVM_TRC_SHIFT 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRC_ENTRYEXIT (1 << KVM_TRC_SHIFT)
#define KVM_TRC_HANDLER (1 << (KVM_TRC_SHIFT + 1))
#define KVM_TRC_VMENTRY (KVM_TRC_ENTRYEXIT + 0x01)
#define KVM_TRC_VMEXIT (KVM_TRC_ENTRYEXIT + 0x02)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRC_PAGE_FAULT (KVM_TRC_HANDLER + 0x01)
#define KVM_TRC_HEAD_SIZE 12
#define KVM_TRC_CYCLE_SIZE 8
#define KVM_TRC_EXTRA_MAX 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRC_INJ_VIRQ (KVM_TRC_HANDLER + 0x02)
#define KVM_TRC_REDELIVER_EVT (KVM_TRC_HANDLER + 0x03)
#define KVM_TRC_PEND_INTR (KVM_TRC_HANDLER + 0x04)
#define KVM_TRC_IO_READ (KVM_TRC_HANDLER + 0x05)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRC_IO_WRITE (KVM_TRC_HANDLER + 0x06)
#define KVM_TRC_CR_READ (KVM_TRC_HANDLER + 0x07)
#define KVM_TRC_CR_WRITE (KVM_TRC_HANDLER + 0x08)
#define KVM_TRC_DR_READ (KVM_TRC_HANDLER + 0x09)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRC_DR_WRITE (KVM_TRC_HANDLER + 0x0A)
#define KVM_TRC_MSR_READ (KVM_TRC_HANDLER + 0x0B)
#define KVM_TRC_MSR_WRITE (KVM_TRC_HANDLER + 0x0C)
#define KVM_TRC_CPUID (KVM_TRC_HANDLER + 0x0D)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRC_INTR (KVM_TRC_HANDLER + 0x0E)
#define KVM_TRC_NMI (KVM_TRC_HANDLER + 0x0F)
#define KVM_TRC_VMMCALL (KVM_TRC_HANDLER + 0x10)
#define KVM_TRC_HLT (KVM_TRC_HANDLER + 0x11)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRC_CLTS (KVM_TRC_HANDLER + 0x12)
#define KVM_TRC_LMSW (KVM_TRC_HANDLER + 0x13)
#define KVM_TRC_APIC_ACCESS (KVM_TRC_HANDLER + 0x14)
#define KVM_TRC_TDP_FAULT (KVM_TRC_HANDLER + 0x15)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRC_GTLB_WRITE (KVM_TRC_HANDLER + 0x16)
#define KVM_TRC_STLB_WRITE (KVM_TRC_HANDLER + 0x17)
#define KVM_TRC_STLB_INVAL (KVM_TRC_HANDLER + 0x18)
#define KVM_TRC_PPC_INSTR (KVM_TRC_HANDLER + 0x19)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_user_trace_setup {
 __u32 buf_size;
 __u32 buf_nr;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __KVM_DEPRECATED_MAIN_W_0x06   _IOW(KVMIO, 0x06, struct kvm_user_trace_setup)
#define __KVM_DEPRECATED_MAIN_0x07 _IO(KVMIO, 0x07)
#define __KVM_DEPRECATED_MAIN_0x08 _IO(KVMIO, 0x08)
#define __KVM_DEPRECATED_VM_R_0x70 _IOR(KVMIO, 0x70, struct kvm_assigned_irq)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_breakpoint {
 __u32 enabled;
 __u32 padding;
 __u64 address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_debug_guest {
 __u32 enabled;
 __u32 pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvm_breakpoint breakpoints[4];
 __u32 singlestep;
};
#define __KVM_DEPRECATED_VCPU_W_0x87 _IOW(KVMIO, 0x87, struct kvm_debug_guest)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_memory_region {
 __u32 slot;
 __u32 flags;
 __u64 guest_phys_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 memory_size;
};
struct kvm_userspace_memory_region {
 __u32 slot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 flags;
 __u64 guest_phys_addr;
 __u64 memory_size;
 __u64 userspace_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KVM_MEM_LOG_DIRTY_PAGES (1UL << 0)
#define KVM_MEM_READONLY (1UL << 1)
struct kvm_irq_level {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 __u32 irq;
 __s32 status;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 level;
};
struct kvm_irqchip {
 __u32 chip_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 pad;
 union {
 char dummy[512];
#ifdef __KVM_HAVE_PIT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvm_pic_state pic;
#endif
#ifdef __KVM_HAVE_IOAPIC
 struct kvm_ioapic_state ioapic;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
 } chip;
};
struct kvm_pit_config {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 flags;
 __u32 pad[15];
};
#define KVM_PIT_SPEAKER_DUMMY 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_EXIT_UNKNOWN 0
#define KVM_EXIT_EXCEPTION 1
#define KVM_EXIT_IO 2
#define KVM_EXIT_HYPERCALL 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_EXIT_DEBUG 4
#define KVM_EXIT_HLT 5
#define KVM_EXIT_MMIO 6
#define KVM_EXIT_IRQ_WINDOW_OPEN 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_EXIT_SHUTDOWN 8
#define KVM_EXIT_FAIL_ENTRY 9
#define KVM_EXIT_INTR 10
#define KVM_EXIT_SET_TPR 11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_EXIT_TPR_ACCESS 12
#define KVM_EXIT_S390_SIEIC 13
#define KVM_EXIT_S390_RESET 14
#define KVM_EXIT_DCR 15
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_EXIT_NMI 16
#define KVM_EXIT_INTERNAL_ERROR 17
#define KVM_EXIT_OSI 18
#define KVM_EXIT_PAPR_HCALL 19
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_EXIT_S390_UCONTROL 20
#define KVM_EXIT_WATCHDOG 21
#define KVM_EXIT_S390_TSCH 22
#define KVM_EXIT_EPR 23
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_INTERNAL_ERROR_EMULATION 1
#define KVM_INTERNAL_ERROR_SIMUL_EX 2
#define KVM_INTERNAL_ERROR_DELIVERY_EV 3
struct kvm_run {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 request_interrupt_window;
 __u8 padding1[7];
 __u32 exit_reason;
 __u8 ready_for_interrupt_injection;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 if_flag;
 __u8 padding2[2];
 __u64 cr8;
 __u64 apic_base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __KVM_S390
 __u64 psw_mask;
 __u64 psw_addr;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct {
 __u64 hardware_exit_reason;
 } hw;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __u64 hardware_entry_failure_reason;
 } fail_entry;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 exception;
 __u32 error_code;
 } ex;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_EXIT_IO_IN 0
#define KVM_EXIT_IO_OUT 1
 __u8 direction;
 __u8 size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 port;
 __u32 count;
 __u64 data_offset;
 } io;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 struct kvm_debug_exit_arch arch;
 } debug;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 phys_addr;
 __u8 data[8];
 __u32 len;
 __u8 is_write;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } mmio;
 struct {
 __u64 nr;
 __u64 args[6];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 ret;
 __u32 longmode;
 __u32 pad;
 } hypercall;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __u64 rip;
 __u32 is_write;
 __u32 pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } tpr_access;
 struct {
 __u8 icptcode;
 __u16 ipa;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 ipb;
 } s390_sieic;
#define KVM_S390_RESET_POR 1
#define KVM_S390_RESET_CLEAR 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_S390_RESET_SUBSYSTEM 4
#define KVM_S390_RESET_CPU_INIT 8
#define KVM_S390_RESET_IPL 16
 __u64 s390_reset_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __u64 trans_exc_code;
 __u32 pgm_code;
 } s390_ucontrol;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __u32 dcrn;
 __u32 data;
 __u8 is_write;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } dcr;
 struct {
 __u32 suberror;
 __u32 ndata;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 data[16];
 } internal;
 struct {
 __u64 gprs[32];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } osi;
 struct {
 __u64 nr;
 __u64 ret;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 args[9];
 } papr_hcall;
 struct {
 __u16 subchannel_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 subchannel_nr;
 __u32 io_int_parm;
 __u32 io_int_word;
 __u32 ipb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 dequeued;
 } s390_tsch;
 struct {
 __u32 epr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } epr;
 char padding[256];
 };
 __u64 kvm_valid_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 kvm_dirty_regs;
 union {
 struct kvm_sync_regs regs;
 char padding[1024];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } s;
};
struct kvm_coalesced_mmio_zone {
 __u64 addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 size;
 __u32 pad;
};
struct kvm_coalesced_mmio {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 phys_addr;
 __u32 len;
 __u32 pad;
 __u8 data[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_coalesced_mmio_ring {
 __u32 first, last;
 struct kvm_coalesced_mmio coalesced_mmio[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KVM_COALESCED_MMIO_MAX   ((PAGE_SIZE - sizeof(struct kvm_coalesced_mmio_ring)) /   sizeof(struct kvm_coalesced_mmio))
struct kvm_translation {
 __u64 linear_address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 physical_address;
 __u8 valid;
 __u8 writeable;
 __u8 usermode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pad[5];
};
struct kvm_interrupt {
 __u32 irq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_dirty_log {
 __u32 slot;
 __u32 padding1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 void __user *dirty_bitmap;
 __u64 padding2;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_signal_mask {
 __u32 len;
 __u8 sigset[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_tpr_access_ctl {
 __u32 enabled;
 __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 reserved[8];
};
struct kvm_vapic_addr {
 __u64 vapic_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KVM_MP_STATE_RUNNABLE 0
#define KVM_MP_STATE_UNINITIALIZED 1
#define KVM_MP_STATE_INIT_RECEIVED 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_MP_STATE_HALTED 3
#define KVM_MP_STATE_SIPI_RECEIVED 4
struct kvm_mp_state {
 __u32 mp_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_s390_psw {
 __u64 mask;
 __u64 addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KVM_S390_SIGP_STOP 0xfffe0000u
#define KVM_S390_PROGRAM_INT 0xfffe0001u
#define KVM_S390_SIGP_SET_PREFIX 0xfffe0002u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_S390_RESTART 0xfffe0003u
#define KVM_S390_MCHK 0xfffe1000u
#define KVM_S390_INT_VIRTIO 0xffff2603u
#define KVM_S390_INT_SERVICE 0xffff2401u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_S390_INT_EMERGENCY 0xffff1201u
#define KVM_S390_INT_EXTERNAL_CALL 0xffff1202u
#define KVM_S390_INT_IO(ai,cssid,ssid,schid)   (((schid)) |   ((ssid) << 16) |   ((cssid) << 18) |   ((ai) << 26))
#define KVM_S390_INT_IO_MIN 0x00000000u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_S390_INT_IO_MAX 0xfffdffffu
struct kvm_s390_interrupt {
 __u32 type;
 __u32 parm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 parm64;
};
#define KVM_GUESTDBG_ENABLE 0x00000001
#define KVM_GUESTDBG_SINGLESTEP 0x00000002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_guest_debug {
 __u32 control;
 __u32 pad;
 struct kvm_guest_debug_arch arch;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 kvm_ioeventfd_flag_nr_datamatch,
 kvm_ioeventfd_flag_nr_pio,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kvm_ioeventfd_flag_nr_deassign,
 kvm_ioeventfd_flag_nr_virtio_ccw_notify,
 kvm_ioeventfd_flag_nr_max,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_IOEVENTFD_FLAG_DATAMATCH (1 << kvm_ioeventfd_flag_nr_datamatch)
#define KVM_IOEVENTFD_FLAG_PIO (1 << kvm_ioeventfd_flag_nr_pio)
#define KVM_IOEVENTFD_FLAG_DEASSIGN (1 << kvm_ioeventfd_flag_nr_deassign)
#define KVM_IOEVENTFD_FLAG_VIRTIO_CCW_NOTIFY   (1 << kvm_ioeventfd_flag_nr_virtio_ccw_notify)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_IOEVENTFD_VALID_FLAG_MASK ((1 << kvm_ioeventfd_flag_nr_max) - 1)
struct kvm_ioeventfd {
 __u64 datamatch;
 __u64 addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 len;
 __s32 fd;
 __u32 flags;
 __u8 pad[36];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_enable_cap {
 __u32 cap;
 __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 args[4];
 __u8 pad[64];
};
struct kvm_ppc_pvinfo {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 flags;
 __u32 hcall[4];
 __u8 pad[108];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_PPC_PAGE_SIZES_MAX_SZ 8
struct kvm_ppc_one_page_size {
 __u32 page_shift;
 __u32 pte_enc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_ppc_one_seg_page_size {
 __u32 page_shift;
 __u32 slb_enc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvm_ppc_one_page_size enc[KVM_PPC_PAGE_SIZES_MAX_SZ];
};
#define KVM_PPC_PAGE_SIZES_REAL 0x00000001
#define KVM_PPC_1T_SEGMENTS 0x00000002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_ppc_smmu_info {
 __u64 flags;
 __u32 slb_size;
 __u32 pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvm_ppc_one_seg_page_size sps[KVM_PPC_PAGE_SIZES_MAX_SZ];
};
#define KVM_PPC_PVINFO_FLAGS_EV_IDLE (1<<0)
#define KVMIO 0xAE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_VM_S390_UCONTROL 1
#define KVM_VM_PPC_HV 1
#define KVM_VM_PPC_PR 2
#define KVM_S390_SIE_PAGE_OFFSET 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GET_API_VERSION _IO(KVMIO, 0x00)
#define KVM_CREATE_VM _IO(KVMIO, 0x01)
#define KVM_GET_MSR_INDEX_LIST _IOWR(KVMIO, 0x02, struct kvm_msr_list)
#define KVM_S390_ENABLE_SIE _IO(KVMIO, 0x06)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CHECK_EXTENSION _IO(KVMIO, 0x03)
#define KVM_GET_VCPU_MMAP_SIZE _IO(KVMIO, 0x04)
#define KVM_GET_SUPPORTED_CPUID _IOWR(KVMIO, 0x05, struct kvm_cpuid2)
#define KVM_TRACE_ENABLE __KVM_DEPRECATED_MAIN_W_0x06
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRACE_PAUSE __KVM_DEPRECATED_MAIN_0x07
#define KVM_TRACE_DISABLE __KVM_DEPRECATED_MAIN_0x08
#define KVM_GET_EMULATED_CPUID _IOWR(KVMIO, 0x09, struct kvm_cpuid2)
#define KVM_CAP_IRQCHIP 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_HLT 1
#define KVM_CAP_MMU_SHADOW_CACHE_CONTROL 2
#define KVM_CAP_USER_MEMORY 3
#define KVM_CAP_SET_TSS_ADDR 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_VAPIC 6
#define KVM_CAP_EXT_CPUID 7
#define KVM_CAP_CLOCKSOURCE 8
#define KVM_CAP_NR_VCPUS 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_NR_MEMSLOTS 10
#define KVM_CAP_PIT 11
#define KVM_CAP_NOP_IO_DELAY 12
#define KVM_CAP_PV_MMU 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_MP_STATE 14
#define KVM_CAP_COALESCED_MMIO 15
#define KVM_CAP_SYNC_MMU 16
#define KVM_CAP_DEVICE_ASSIGNMENT 17
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_IOMMU 18
#ifdef __KVM_HAVE_MSI
#define KVM_CAP_DEVICE_MSI 20
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_DESTROY_MEMORY_REGION_WORKS 21
#ifdef __KVM_HAVE_USER_NMI
#define KVM_CAP_USER_NMI 22
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __KVM_HAVE_GUEST_DEBUG
#define KVM_CAP_SET_GUEST_DEBUG 23
#endif
#ifdef __KVM_HAVE_PIT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_REINJECT_CONTROL 24
#endif
#define KVM_CAP_IRQ_ROUTING 25
#define KVM_CAP_IRQ_INJECT_STATUS 26
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_DEVICE_DEASSIGNMENT 27
#ifdef __KVM_HAVE_MSIX
#define KVM_CAP_DEVICE_MSIX 28
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_ASSIGN_DEV_IRQ 29
#define KVM_CAP_JOIN_MEMORY_REGIONS_WORKS 30
#ifdef __KVM_HAVE_MCE
#define KVM_CAP_MCE 31
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define KVM_CAP_IRQFD 32
#ifdef __KVM_HAVE_PIT
#define KVM_CAP_PIT2 33
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define KVM_CAP_SET_BOOT_CPU_ID 34
#ifdef __KVM_HAVE_PIT_STATE2
#define KVM_CAP_PIT_STATE2 35
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define KVM_CAP_IOEVENTFD 36
#define KVM_CAP_SET_IDENTITY_MAP_ADDR 37
#ifdef __KVM_HAVE_XEN_HVM
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_XEN_HVM 38
#endif
#define KVM_CAP_ADJUST_CLOCK 39
#define KVM_CAP_INTERNAL_ERROR_DATA 40
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __KVM_HAVE_VCPU_EVENTS
#define KVM_CAP_VCPU_EVENTS 41
#endif
#define KVM_CAP_S390_PSW 42
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_PPC_SEGSTATE 43
#define KVM_CAP_HYPERV 44
#define KVM_CAP_HYPERV_VAPIC 45
#define KVM_CAP_HYPERV_SPIN 46
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_PCI_SEGMENT 47
#define KVM_CAP_PPC_PAIRED_SINGLES 48
#define KVM_CAP_INTR_SHADOW 49
#ifdef __KVM_HAVE_DEBUGREGS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_DEBUGREGS 50
#endif
#define KVM_CAP_X86_ROBUST_SINGLESTEP 51
#define KVM_CAP_PPC_OSI 52
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_PPC_UNSET_IRQ 53
#define KVM_CAP_ENABLE_CAP 54
#ifdef __KVM_HAVE_XSAVE
#define KVM_CAP_XSAVE 55
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifdef __KVM_HAVE_XCRS
#define KVM_CAP_XCRS 56
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_PPC_GET_PVINFO 57
#define KVM_CAP_PPC_IRQ_LEVEL 58
#define KVM_CAP_ASYNC_PF 59
#define KVM_CAP_TSC_CONTROL 60
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_GET_TSC_KHZ 61
#define KVM_CAP_PPC_BOOKE_SREGS 62
#define KVM_CAP_SPAPR_TCE 63
#define KVM_CAP_PPC_SMT 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_PPC_RMA 65
#define KVM_CAP_MAX_VCPUS 66
#define KVM_CAP_PPC_HIOR 67
#define KVM_CAP_PPC_PAPR 68
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_SW_TLB 69
#define KVM_CAP_ONE_REG 70
#define KVM_CAP_S390_GMAP 71
#define KVM_CAP_TSC_DEADLINE_TIMER 72
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_S390_UCONTROL 73
#define KVM_CAP_SYNC_REGS 74
#define KVM_CAP_PCI_2_3 75
#define KVM_CAP_KVMCLOCK_CTRL 76
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_SIGNAL_MSI 77
#define KVM_CAP_PPC_GET_SMMU_INFO 78
#define KVM_CAP_S390_COW 79
#define KVM_CAP_PPC_ALLOC_HTAB 80
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __KVM_HAVE_READONLY_MEM
#define KVM_CAP_READONLY_MEM 81
#endif
#define KVM_CAP_IRQFD_RESAMPLE 82
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_PPC_BOOKE_WATCHDOG 83
#define KVM_CAP_PPC_HTAB_FD 84
#define KVM_CAP_S390_CSS_SUPPORT 85
#define KVM_CAP_PPC_EPR 86
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_ARM_PSCI 87
#define KVM_CAP_ARM_SET_DEVICE_ADDR 88
#define KVM_CAP_DEVICE_CTRL 89
#define KVM_CAP_IRQ_MPIC 90
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_PPC_RTAS 91
#define KVM_CAP_IRQ_XICS 92
#define KVM_CAP_ARM_EL1_32BIT 93
#define KVM_CAP_SPAPR_MULTITCE 94
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_CAP_EXT_EMUL_CPUID 95
#define KVM_CAP_HYPERV_TIME 96
#ifdef KVM_CAP_IRQ_ROUTING
struct kvm_irq_routing_irqchip {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 irqchip;
 __u32 pin;
};
struct kvm_irq_routing_msi {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 address_lo;
 __u32 address_hi;
 __u32 data;
 __u32 pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KVM_IRQ_ROUTING_IRQCHIP 1
#define KVM_IRQ_ROUTING_MSI 2
struct kvm_irq_routing_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 gsi;
 __u32 type;
 __u32 flags;
 __u32 pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct kvm_irq_routing_irqchip irqchip;
 struct kvm_irq_routing_msi msi;
 __u32 pad[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } u;
};
struct kvm_irq_routing {
 __u32 nr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 flags;
 struct kvm_irq_routing_entry entries[0];
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef KVM_CAP_MCE
struct kvm_x86_mce {
 __u64 status;
 __u64 addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 misc;
 __u64 mcg_status;
 __u8 bank;
 __u8 pad1[7];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 pad2[3];
};
#endif
#ifdef KVM_CAP_XEN_HVM
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_xen_hvm_config {
 __u32 flags;
 __u32 msr;
 __u64 blob_addr_32;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 blob_addr_64;
 __u8 blob_size_32;
 __u8 blob_size_64;
 __u8 pad2[30];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
#define KVM_IRQFD_FLAG_DEASSIGN (1 << 0)
#define KVM_IRQFD_FLAG_RESAMPLE (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_irqfd {
 __u32 fd;
 __u32 gsi;
 __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 resamplefd;
 __u8 pad[16];
};
struct kvm_clock_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 clock;
 __u32 flags;
 __u32 pad[9];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_MMU_FSL_BOOKE_NOHV 0
#define KVM_MMU_FSL_BOOKE_HV 1
struct kvm_config_tlb {
 __u64 params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 array;
 __u32 mmu_type;
 __u32 array_len;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_dirty_tlb {
 __u64 bitmap;
 __u32 num_dirty;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REG_ARCH_MASK 0xff00000000000000ULL
#define KVM_REG_GENERIC 0x0000000000000000ULL
#define KVM_REG_PPC 0x1000000000000000ULL
#define KVM_REG_X86 0x2000000000000000ULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REG_IA64 0x3000000000000000ULL
#define KVM_REG_ARM 0x4000000000000000ULL
#define KVM_REG_S390 0x5000000000000000ULL
#define KVM_REG_ARM64 0x6000000000000000ULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REG_MIPS 0x7000000000000000ULL
#define KVM_REG_SIZE_SHIFT 52
#define KVM_REG_SIZE_MASK 0x00f0000000000000ULL
#define KVM_REG_SIZE_U8 0x0000000000000000ULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REG_SIZE_U16 0x0010000000000000ULL
#define KVM_REG_SIZE_U32 0x0020000000000000ULL
#define KVM_REG_SIZE_U64 0x0030000000000000ULL
#define KVM_REG_SIZE_U128 0x0040000000000000ULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REG_SIZE_U256 0x0050000000000000ULL
#define KVM_REG_SIZE_U512 0x0060000000000000ULL
#define KVM_REG_SIZE_U1024 0x0070000000000000ULL
struct kvm_reg_list {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 n;
 __u64 reg[0];
};
struct kvm_one_reg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 id;
 __u64 addr;
};
struct kvm_msi {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 address_lo;
 __u32 address_hi;
 __u32 data;
 __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pad[16];
};
struct kvm_arm_device_addr {
 __u64 id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 addr;
};
#define KVM_CREATE_DEVICE_TEST 1
struct kvm_create_device {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 type;
 __u32 fd;
 __u32 flags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_device_attr {
 __u32 flags;
 __u32 group;
 __u64 attr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 addr;
};
#define KVM_DEV_TYPE_FSL_MPIC_20 1
#define KVM_DEV_TYPE_FSL_MPIC_42 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_DEV_TYPE_XICS 3
#define KVM_DEV_TYPE_VFIO 4
#define KVM_DEV_VFIO_GROUP 1
#define KVM_DEV_VFIO_GROUP_ADD 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_DEV_VFIO_GROUP_DEL 2
#define KVM_DEV_TYPE_ARM_VGIC_V2 5
#define KVM_SET_MEMORY_REGION _IOW(KVMIO, 0x40, struct kvm_memory_region)
#define KVM_CREATE_VCPU _IO(KVMIO, 0x41)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GET_DIRTY_LOG _IOW(KVMIO, 0x42, struct kvm_dirty_log)
#define KVM_SET_MEMORY_ALIAS _IOW(KVMIO, 0x43, struct kvm_memory_alias)
#define KVM_SET_NR_MMU_PAGES _IO(KVMIO, 0x44)
#define KVM_GET_NR_MMU_PAGES _IO(KVMIO, 0x45)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_SET_USER_MEMORY_REGION _IOW(KVMIO, 0x46,   struct kvm_userspace_memory_region)
#define KVM_SET_TSS_ADDR _IO(KVMIO, 0x47)
#define KVM_SET_IDENTITY_MAP_ADDR _IOW(KVMIO, 0x48, __u64)
struct kvm_s390_ucas_mapping {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 user_addr;
 __u64 vcpu_addr;
 __u64 length;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_S390_UCAS_MAP _IOW(KVMIO, 0x50, struct kvm_s390_ucas_mapping)
#define KVM_S390_UCAS_UNMAP _IOW(KVMIO, 0x51, struct kvm_s390_ucas_mapping)
#define KVM_S390_VCPU_FAULT _IOW(KVMIO, 0x52, unsigned long)
#define KVM_CREATE_IRQCHIP _IO(KVMIO, 0x60)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_IRQ_LINE _IOW(KVMIO, 0x61, struct kvm_irq_level)
#define KVM_GET_IRQCHIP _IOWR(KVMIO, 0x62, struct kvm_irqchip)
#define KVM_SET_IRQCHIP _IOR(KVMIO, 0x63, struct kvm_irqchip)
#define KVM_CREATE_PIT _IO(KVMIO, 0x64)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GET_PIT _IOWR(KVMIO, 0x65, struct kvm_pit_state)
#define KVM_SET_PIT _IOR(KVMIO, 0x66, struct kvm_pit_state)
#define KVM_IRQ_LINE_STATUS _IOWR(KVMIO, 0x67, struct kvm_irq_level)
#define KVM_REGISTER_COALESCED_MMIO   _IOW(KVMIO, 0x67, struct kvm_coalesced_mmio_zone)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_UNREGISTER_COALESCED_MMIO   _IOW(KVMIO, 0x68, struct kvm_coalesced_mmio_zone)
#define KVM_ASSIGN_PCI_DEVICE _IOR(KVMIO, 0x69,   struct kvm_assigned_pci_dev)
#define KVM_SET_GSI_ROUTING _IOW(KVMIO, 0x6a, struct kvm_irq_routing)
#define KVM_ASSIGN_IRQ __KVM_DEPRECATED_VM_R_0x70
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_ASSIGN_DEV_IRQ _IOW(KVMIO, 0x70, struct kvm_assigned_irq)
#define KVM_REINJECT_CONTROL _IO(KVMIO, 0x71)
#define KVM_DEASSIGN_PCI_DEVICE _IOW(KVMIO, 0x72,   struct kvm_assigned_pci_dev)
#define KVM_ASSIGN_SET_MSIX_NR _IOW(KVMIO, 0x73,   struct kvm_assigned_msix_nr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_ASSIGN_SET_MSIX_ENTRY _IOW(KVMIO, 0x74,   struct kvm_assigned_msix_entry)
#define KVM_DEASSIGN_DEV_IRQ _IOW(KVMIO, 0x75, struct kvm_assigned_irq)
#define KVM_IRQFD _IOW(KVMIO, 0x76, struct kvm_irqfd)
#define KVM_CREATE_PIT2 _IOW(KVMIO, 0x77, struct kvm_pit_config)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_SET_BOOT_CPU_ID _IO(KVMIO, 0x78)
#define KVM_IOEVENTFD _IOW(KVMIO, 0x79, struct kvm_ioeventfd)
#define KVM_XEN_HVM_CONFIG _IOW(KVMIO, 0x7a, struct kvm_xen_hvm_config)
#define KVM_SET_CLOCK _IOW(KVMIO, 0x7b, struct kvm_clock_data)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GET_CLOCK _IOR(KVMIO, 0x7c, struct kvm_clock_data)
#define KVM_GET_PIT2 _IOR(KVMIO, 0x9f, struct kvm_pit_state2)
#define KVM_SET_PIT2 _IOW(KVMIO, 0xa0, struct kvm_pit_state2)
#define KVM_PPC_GET_PVINFO _IOW(KVMIO, 0xa1, struct kvm_ppc_pvinfo)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_SET_TSC_KHZ _IO(KVMIO, 0xa2)
#define KVM_GET_TSC_KHZ _IO(KVMIO, 0xa3)
#define KVM_ASSIGN_SET_INTX_MASK _IOW(KVMIO, 0xa4,   struct kvm_assigned_pci_dev)
#define KVM_SIGNAL_MSI _IOW(KVMIO, 0xa5, struct kvm_msi)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_PPC_GET_SMMU_INFO _IOR(KVMIO, 0xa6, struct kvm_ppc_smmu_info)
#define KVM_PPC_ALLOCATE_HTAB _IOWR(KVMIO, 0xa7, __u32)
#define KVM_CREATE_SPAPR_TCE _IOW(KVMIO, 0xa8, struct kvm_create_spapr_tce)
#define KVM_ALLOCATE_RMA _IOR(KVMIO, 0xa9, struct kvm_allocate_rma)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_PPC_GET_HTAB_FD _IOW(KVMIO, 0xaa, struct kvm_get_htab_fd)
#define KVM_ARM_SET_DEVICE_ADDR _IOW(KVMIO, 0xab, struct kvm_arm_device_addr)
#define KVM_PPC_RTAS_DEFINE_TOKEN _IOW(KVMIO, 0xac, struct kvm_rtas_token_args)
#define KVM_CREATE_DEVICE _IOWR(KVMIO, 0xe0, struct kvm_create_device)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_SET_DEVICE_ATTR _IOW(KVMIO, 0xe1, struct kvm_device_attr)
#define KVM_GET_DEVICE_ATTR _IOW(KVMIO, 0xe2, struct kvm_device_attr)
#define KVM_HAS_DEVICE_ATTR _IOW(KVMIO, 0xe3, struct kvm_device_attr)
#define KVM_RUN _IO(KVMIO, 0x80)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GET_REGS _IOR(KVMIO, 0x81, struct kvm_regs)
#define KVM_SET_REGS _IOW(KVMIO, 0x82, struct kvm_regs)
#define KVM_GET_SREGS _IOR(KVMIO, 0x83, struct kvm_sregs)
#define KVM_SET_SREGS _IOW(KVMIO, 0x84, struct kvm_sregs)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_TRANSLATE _IOWR(KVMIO, 0x85, struct kvm_translation)
#define KVM_INTERRUPT _IOW(KVMIO, 0x86, struct kvm_interrupt)
#define KVM_DEBUG_GUEST __KVM_DEPRECATED_VCPU_W_0x87
#define KVM_GET_MSRS _IOWR(KVMIO, 0x88, struct kvm_msrs)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_SET_MSRS _IOW(KVMIO, 0x89, struct kvm_msrs)
#define KVM_SET_CPUID _IOW(KVMIO, 0x8a, struct kvm_cpuid)
#define KVM_SET_SIGNAL_MASK _IOW(KVMIO, 0x8b, struct kvm_signal_mask)
#define KVM_GET_FPU _IOR(KVMIO, 0x8c, struct kvm_fpu)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_SET_FPU _IOW(KVMIO, 0x8d, struct kvm_fpu)
#define KVM_GET_LAPIC _IOR(KVMIO, 0x8e, struct kvm_lapic_state)
#define KVM_SET_LAPIC _IOW(KVMIO, 0x8f, struct kvm_lapic_state)
#define KVM_SET_CPUID2 _IOW(KVMIO, 0x90, struct kvm_cpuid2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GET_CPUID2 _IOWR(KVMIO, 0x91, struct kvm_cpuid2)
#define KVM_TPR_ACCESS_REPORTING _IOWR(KVMIO, 0x92, struct kvm_tpr_access_ctl)
#define KVM_SET_VAPIC_ADDR _IOW(KVMIO, 0x93, struct kvm_vapic_addr)
#define KVM_S390_INTERRUPT _IOW(KVMIO, 0x94, struct kvm_s390_interrupt)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_S390_STORE_STATUS_NOADDR (-1ul)
#define KVM_S390_STORE_STATUS_PREFIXED (-2ul)
#define KVM_S390_STORE_STATUS _IOW(KVMIO, 0x95, unsigned long)
#define KVM_S390_SET_INITIAL_PSW _IOW(KVMIO, 0x96, struct kvm_s390_psw)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_S390_INITIAL_RESET _IO(KVMIO, 0x97)
#define KVM_GET_MP_STATE _IOR(KVMIO, 0x98, struct kvm_mp_state)
#define KVM_SET_MP_STATE _IOW(KVMIO, 0x99, struct kvm_mp_state)
#define KVM_NMI _IO(KVMIO, 0x9a)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_SET_GUEST_DEBUG _IOW(KVMIO, 0x9b, struct kvm_guest_debug)
#define KVM_X86_SETUP_MCE _IOW(KVMIO, 0x9c, __u64)
#define KVM_X86_GET_MCE_CAP_SUPPORTED _IOR(KVMIO, 0x9d, __u64)
#define KVM_X86_SET_MCE _IOW(KVMIO, 0x9e, struct kvm_x86_mce)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_IA64_VCPU_GET_STACK _IOR(KVMIO, 0x9a, void *)
#define KVM_IA64_VCPU_SET_STACK _IOW(KVMIO, 0x9b, void *)
#define KVM_GET_VCPU_EVENTS _IOR(KVMIO, 0x9f, struct kvm_vcpu_events)
#define KVM_SET_VCPU_EVENTS _IOW(KVMIO, 0xa0, struct kvm_vcpu_events)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GET_DEBUGREGS _IOR(KVMIO, 0xa1, struct kvm_debugregs)
#define KVM_SET_DEBUGREGS _IOW(KVMIO, 0xa2, struct kvm_debugregs)
#define KVM_ENABLE_CAP _IOW(KVMIO, 0xa3, struct kvm_enable_cap)
#define KVM_GET_XSAVE _IOR(KVMIO, 0xa4, struct kvm_xsave)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_SET_XSAVE _IOW(KVMIO, 0xa5, struct kvm_xsave)
#define KVM_GET_XCRS _IOR(KVMIO, 0xa6, struct kvm_xcrs)
#define KVM_SET_XCRS _IOW(KVMIO, 0xa7, struct kvm_xcrs)
#define KVM_DIRTY_TLB _IOW(KVMIO, 0xaa, struct kvm_dirty_tlb)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_GET_ONE_REG _IOW(KVMIO, 0xab, struct kvm_one_reg)
#define KVM_SET_ONE_REG _IOW(KVMIO, 0xac, struct kvm_one_reg)
#define KVM_KVMCLOCK_CTRL _IO(KVMIO, 0xad)
#define KVM_ARM_VCPU_INIT _IOW(KVMIO, 0xae, struct kvm_vcpu_init)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_ARM_PREFERRED_TARGET _IOR(KVMIO, 0xaf, struct kvm_vcpu_init)
#define KVM_GET_REG_LIST _IOWR(KVMIO, 0xb0, struct kvm_reg_list)
#define KVM_DEV_ASSIGN_ENABLE_IOMMU (1 << 0)
#define KVM_DEV_ASSIGN_PCI_2_3 (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_DEV_ASSIGN_MASK_INTX (1 << 2)
struct kvm_assigned_pci_dev {
 __u32 assigned_dev_id;
 __u32 busnr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 devfn;
 __u32 flags;
 __u32 segnr;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 reserved[11];
 };
};
#define KVM_DEV_IRQ_HOST_INTX (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_DEV_IRQ_HOST_MSI (1 << 1)
#define KVM_DEV_IRQ_HOST_MSIX (1 << 2)
#define KVM_DEV_IRQ_GUEST_INTX (1 << 8)
#define KVM_DEV_IRQ_GUEST_MSI (1 << 9)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_DEV_IRQ_GUEST_MSIX (1 << 10)
#define KVM_DEV_IRQ_HOST_MASK 0x00ff
#define KVM_DEV_IRQ_GUEST_MASK 0xff00
struct kvm_assigned_irq {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 assigned_dev_id;
 __u32 host_irq;
 __u32 guest_irq;
 __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 __u32 reserved[12];
 };
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_assigned_msix_nr {
 __u32 assigned_dev_id;
 __u16 entry_nr;
 __u16 padding;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define KVM_MAX_MSIX_PER_DEV 256
struct kvm_assigned_msix_entry {
 __u32 assigned_dev_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 gsi;
 __u16 entry;
 __u16 padding[3];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
