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
#ifndef _UAPI_LINUX_NVME_H
#define _UAPI_LINUX_NVME_H
#include <linux/types.h>
struct nvme_id_power_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 max_power;
 __u8 rsvd2;
 __u8 flags;
 __le32 entry_lat;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 exit_lat;
 __u8 read_tput;
 __u8 read_lat;
 __u8 write_tput;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 write_lat;
 __u8 rsvd16[16];
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_PS_FLAGS_MAX_POWER_SCALE = 1 << 0,
 NVME_PS_FLAGS_NON_OP_STATE = 1 << 1,
};
struct nvme_id_ctrl {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 vid;
 __le16 ssvid;
 char sn[20];
 char mn[40];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char fr[8];
 __u8 rab;
 __u8 ieee[3];
 __u8 mic;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 mdts;
 __u8 rsvd78[178];
 __le16 oacs;
 __u8 acl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 aerl;
 __u8 frmw;
 __u8 lpa;
 __u8 elpe;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 npss;
 __u8 rsvd264[248];
 __u8 sqes;
 __u8 cqes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 rsvd514[2];
 __le32 nn;
 __le16 oncs;
 __le16 fuses;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 fna;
 __u8 vwc;
 __le16 awun;
 __le16 awupf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 rsvd530[1518];
 struct nvme_id_power_state psd[32];
 __u8 vs[1024];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 NVME_CTRL_ONCS_COMPARE = 1 << 0,
 NVME_CTRL_ONCS_WRITE_UNCORRECTABLE = 1 << 1,
 NVME_CTRL_ONCS_DSM = 1 << 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nvme_lbaf {
 __le16 ms;
 __u8 ds;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 rp;
};
struct nvme_id_ns {
 __le64 nsze;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 ncap;
 __le64 nuse;
 __u8 nsfeat;
 __u8 nlbaf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 flbas;
 __u8 mc;
 __u8 dpc;
 __u8 dps;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 rsvd30[98];
 struct nvme_lbaf lbaf[16];
 __u8 rsvd192[192];
 __u8 vs[3712];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 NVME_NS_FEAT_THIN = 1 << 0,
 NVME_LBAF_RP_BEST = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_LBAF_RP_BETTER = 1,
 NVME_LBAF_RP_GOOD = 2,
 NVME_LBAF_RP_DEGRADED = 3,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nvme_smart_log {
 __u8 critical_warning;
 __u8 temperature[2];
 __u8 avail_spare;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 spare_thresh;
 __u8 percent_used;
 __u8 rsvd6[26];
 __u8 data_units_read[16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 data_units_written[16];
 __u8 host_reads[16];
 __u8 host_writes[16];
 __u8 ctrl_busy_time[16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 power_cycles[16];
 __u8 power_on_hours[16];
 __u8 unsafe_shutdowns[16];
 __u8 media_errors[16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 num_err_log_entries[16];
 __u8 rsvd192[320];
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SMART_CRIT_SPARE = 1 << 0,
 NVME_SMART_CRIT_TEMPERATURE = 1 << 1,
 NVME_SMART_CRIT_RELIABILITY = 1 << 2,
 NVME_SMART_CRIT_MEDIA = 1 << 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SMART_CRIT_VOLATILE_MEMORY = 1 << 4,
};
struct nvme_lba_range_type {
 __u8 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 attributes;
 __u8 rsvd2[14];
 __u64 slba;
 __u64 nlb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 guid[16];
 __u8 rsvd48[16];
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_LBART_TYPE_FS = 0x01,
 NVME_LBART_TYPE_RAID = 0x02,
 NVME_LBART_TYPE_CACHE = 0x03,
 NVME_LBART_TYPE_SWAP = 0x04,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_LBART_ATTRIB_TEMP = 1 << 0,
 NVME_LBART_ATTRIB_HIDE = 1 << 1,
};
enum nvme_opcode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 nvme_cmd_flush = 0x00,
 nvme_cmd_write = 0x01,
 nvme_cmd_read = 0x02,
 nvme_cmd_write_uncor = 0x04,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 nvme_cmd_compare = 0x05,
 nvme_cmd_dsm = 0x09,
};
struct nvme_common_command {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 opcode;
 __u8 flags;
 __u16 command_id;
 __le32 nsid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 cdw2[2];
 __le64 metadata;
 __le64 prp1;
 __le64 prp2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 cdw10[6];
};
struct nvme_rw_command {
 __u8 opcode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 flags;
 __u16 command_id;
 __le32 nsid;
 __u64 rsvd2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 metadata;
 __le64 prp1;
 __le64 prp2;
 __le64 slba;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 length;
 __le16 control;
 __le32 dsmgmt;
 __le32 reftag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 apptag;
 __le16 appmask;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_RW_LR = 1 << 15,
 NVME_RW_FUA = 1 << 14,
 NVME_RW_DSM_FREQ_UNSPEC = 0,
 NVME_RW_DSM_FREQ_TYPICAL = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_RW_DSM_FREQ_RARE = 2,
 NVME_RW_DSM_FREQ_READS = 3,
 NVME_RW_DSM_FREQ_WRITES = 4,
 NVME_RW_DSM_FREQ_RW = 5,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_RW_DSM_FREQ_ONCE = 6,
 NVME_RW_DSM_FREQ_PREFETCH = 7,
 NVME_RW_DSM_FREQ_TEMP = 8,
 NVME_RW_DSM_LATENCY_NONE = 0 << 4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_RW_DSM_LATENCY_IDLE = 1 << 4,
 NVME_RW_DSM_LATENCY_NORM = 2 << 4,
 NVME_RW_DSM_LATENCY_LOW = 3 << 4,
 NVME_RW_DSM_SEQ_REQ = 1 << 6,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_RW_DSM_COMPRESSED = 1 << 7,
};
struct nvme_dsm_cmd {
 __u8 opcode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 flags;
 __u16 command_id;
 __le32 nsid;
 __u64 rsvd2[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 prp1;
 __le64 prp2;
 __le32 nr;
 __le32 attributes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rsvd12[4];
};
enum {
 NVME_DSMGMT_IDR = 1 << 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_DSMGMT_IDW = 1 << 1,
 NVME_DSMGMT_AD = 1 << 2,
};
struct nvme_dsm_range {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 cattr;
 __le32 nlb;
 __le64 slba;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nvme_admin_opcode {
 nvme_admin_delete_sq = 0x00,
 nvme_admin_create_sq = 0x01,
 nvme_admin_get_log_page = 0x02,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 nvme_admin_delete_cq = 0x04,
 nvme_admin_create_cq = 0x05,
 nvme_admin_identify = 0x06,
 nvme_admin_abort_cmd = 0x08,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 nvme_admin_set_features = 0x09,
 nvme_admin_get_features = 0x0a,
 nvme_admin_async_event = 0x0c,
 nvme_admin_activate_fw = 0x10,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 nvme_admin_download_fw = 0x11,
 nvme_admin_format_nvm = 0x80,
 nvme_admin_security_send = 0x81,
 nvme_admin_security_recv = 0x82,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 NVME_QUEUE_PHYS_CONTIG = (1 << 0),
 NVME_CQ_IRQ_ENABLED = (1 << 1),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SQ_PRIO_URGENT = (0 << 1),
 NVME_SQ_PRIO_HIGH = (1 << 1),
 NVME_SQ_PRIO_MEDIUM = (2 << 1),
 NVME_SQ_PRIO_LOW = (3 << 1),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_FEAT_ARBITRATION = 0x01,
 NVME_FEAT_POWER_MGMT = 0x02,
 NVME_FEAT_LBA_RANGE = 0x03,
 NVME_FEAT_TEMP_THRESH = 0x04,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_FEAT_ERR_RECOVERY = 0x05,
 NVME_FEAT_VOLATILE_WC = 0x06,
 NVME_FEAT_NUM_QUEUES = 0x07,
 NVME_FEAT_IRQ_COALESCE = 0x08,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_FEAT_IRQ_CONFIG = 0x09,
 NVME_FEAT_WRITE_ATOMIC = 0x0a,
 NVME_FEAT_ASYNC_EVENT = 0x0b,
 NVME_FEAT_SW_PROGRESS = 0x0c,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_FWACT_REPL = (0 << 3),
 NVME_FWACT_REPL_ACTV = (1 << 3),
 NVME_FWACT_ACTV = (2 << 3),
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nvme_identify {
 __u8 opcode;
 __u8 flags;
 __u16 command_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 nsid;
 __u64 rsvd2[2];
 __le64 prp1;
 __le64 prp2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 cns;
 __u32 rsvd11[5];
};
struct nvme_features {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 opcode;
 __u8 flags;
 __u16 command_id;
 __le32 nsid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 rsvd2[2];
 __le64 prp1;
 __le64 prp2;
 __le32 fid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 dword11;
 __u32 rsvd12[4];
};
struct nvme_create_cq {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 opcode;
 __u8 flags;
 __u16 command_id;
 __u32 rsvd1[5];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 prp1;
 __u64 rsvd8;
 __le16 cqid;
 __le16 qsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 cq_flags;
 __le16 irq_vector;
 __u32 rsvd12[4];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nvme_create_sq {
 __u8 opcode;
 __u8 flags;
 __u16 command_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rsvd1[5];
 __le64 prp1;
 __u64 rsvd8;
 __le16 sqid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 qsize;
 __le16 sq_flags;
 __le16 cqid;
 __u32 rsvd12[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nvme_delete_queue {
 __u8 opcode;
 __u8 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 command_id;
 __u32 rsvd1[9];
 __le16 qid;
 __u16 rsvd10;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rsvd11[5];
};
struct nvme_abort_cmd {
 __u8 opcode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 flags;
 __u16 command_id;
 __u32 rsvd1[9];
 __le16 sqid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 cid;
 __u32 rsvd11[5];
};
struct nvme_download_firmware {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 opcode;
 __u8 flags;
 __u16 command_id;
 __u32 rsvd1[5];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le64 prp1;
 __le64 prp2;
 __le32 numd;
 __le32 offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rsvd12[4];
};
struct nvme_format_cmd {
 __u8 opcode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 flags;
 __u16 command_id;
 __le32 nsid;
 __u64 rsvd2[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 cdw10;
 __u32 rsvd11[5];
};
struct nvme_command {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct nvme_common_command common;
 struct nvme_rw_command rw;
 struct nvme_identify identify;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nvme_features features;
 struct nvme_create_cq create_cq;
 struct nvme_create_sq create_sq;
 struct nvme_delete_queue delete_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nvme_download_firmware dlfw;
 struct nvme_format_cmd format;
 struct nvme_dsm_cmd dsm;
 struct nvme_abort_cmd abort;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
};
enum {
 NVME_SC_SUCCESS = 0x0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_INVALID_OPCODE = 0x1,
 NVME_SC_INVALID_FIELD = 0x2,
 NVME_SC_CMDID_CONFLICT = 0x3,
 NVME_SC_DATA_XFER_ERROR = 0x4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_POWER_LOSS = 0x5,
 NVME_SC_INTERNAL = 0x6,
 NVME_SC_ABORT_REQ = 0x7,
 NVME_SC_ABORT_QUEUE = 0x8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_FUSED_FAIL = 0x9,
 NVME_SC_FUSED_MISSING = 0xa,
 NVME_SC_INVALID_NS = 0xb,
 NVME_SC_CMD_SEQ_ERROR = 0xc,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_LBA_RANGE = 0x80,
 NVME_SC_CAP_EXCEEDED = 0x81,
 NVME_SC_NS_NOT_READY = 0x82,
 NVME_SC_CQ_INVALID = 0x100,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_QID_INVALID = 0x101,
 NVME_SC_QUEUE_SIZE = 0x102,
 NVME_SC_ABORT_LIMIT = 0x103,
 NVME_SC_ABORT_MISSING = 0x104,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_ASYNC_LIMIT = 0x105,
 NVME_SC_FIRMWARE_SLOT = 0x106,
 NVME_SC_FIRMWARE_IMAGE = 0x107,
 NVME_SC_INVALID_VECTOR = 0x108,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_INVALID_LOG_PAGE = 0x109,
 NVME_SC_INVALID_FORMAT = 0x10a,
 NVME_SC_BAD_ATTRIBUTES = 0x180,
 NVME_SC_WRITE_FAULT = 0x280,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_READ_ERROR = 0x281,
 NVME_SC_GUARD_CHECK = 0x282,
 NVME_SC_APPTAG_CHECK = 0x283,
 NVME_SC_REFTAG_CHECK = 0x284,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NVME_SC_COMPARE_FAILED = 0x285,
 NVME_SC_ACCESS_DENIED = 0x286,
};
struct nvme_completion {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 result;
 __u32 rsvd;
 __le16 sq_head;
 __le16 sq_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 command_id;
 __le16 status;
};
struct nvme_user_io {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 opcode;
 __u8 flags;
 __u16 control;
 __u16 nblocks;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 rsvd;
 __u64 metadata;
 __u64 addr;
 __u64 slba;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 dsmgmt;
 __u32 reftag;
 __u16 apptag;
 __u16 appmask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nvme_admin_cmd {
 __u8 opcode;
 __u8 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 rsvd1;
 __u32 nsid;
 __u32 cdw2;
 __u32 cdw3;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 metadata;
 __u64 addr;
 __u32 metadata_len;
 __u32 data_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 cdw10;
 __u32 cdw11;
 __u32 cdw12;
 __u32 cdw13;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 cdw14;
 __u32 cdw15;
 __u32 timeout_ms;
 __u32 result;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define NVME_IOCTL_ID _IO('N', 0x40)
#define NVME_IOCTL_ADMIN_CMD _IOWR('N', 0x41, struct nvme_admin_cmd)
#define NVME_IOCTL_SUBMIT_IO _IOW('N', 0x42, struct nvme_user_io)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
