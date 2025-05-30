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
#ifndef _NFNETLINK_LOG_H
#define _NFNETLINK_LOG_H
#include <linux/types.h>
#include <linux/netfilter/nfnetlink.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nfulnl_msg_types {
 NFULNL_MSG_PACKET,
 NFULNL_MSG_CONFIG,
 NFULNL_MSG_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfulnl_msg_packet_hdr {
 __be16 hw_protocol;
 __u8 hook;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 _pad;
};
struct nfulnl_msg_packet_hw {
 __be16 hw_addrlen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 _pad;
 __u8 hw_addr[8];
};
struct nfulnl_msg_packet_timestamp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __aligned_be64 sec;
 __aligned_be64 usec;
};
enum nfulnl_attr_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFULA_UNSPEC,
 NFULA_PACKET_HDR,
 NFULA_MARK,
 NFULA_TIMESTAMP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFULA_IFINDEX_INDEV,
 NFULA_IFINDEX_OUTDEV,
 NFULA_IFINDEX_PHYSINDEV,
 NFULA_IFINDEX_PHYSOUTDEV,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFULA_HWADDR,
 NFULA_PAYLOAD,
 NFULA_PREFIX,
 NFULA_UID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFULA_SEQ,
 NFULA_SEQ_GLOBAL,
 NFULA_GID,
 NFULA_HWTYPE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFULA_HWHEADER,
 NFULA_HWLEN,
 __NFULA_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFULA_MAX (__NFULA_MAX - 1)
enum nfulnl_msg_config_cmds {
 NFULNL_CFG_CMD_NONE,
 NFULNL_CFG_CMD_BIND,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFULNL_CFG_CMD_UNBIND,
 NFULNL_CFG_CMD_PF_BIND,
 NFULNL_CFG_CMD_PF_UNBIND,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nfulnl_msg_config_cmd {
 __u8 command;
} __attribute__ ((packed));
struct nfulnl_msg_config_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 copy_range;
 __u8 copy_mode;
 __u8 _pad;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nfulnl_attr_config {
 NFULA_CFG_UNSPEC,
 NFULA_CFG_CMD,
 NFULA_CFG_MODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFULA_CFG_NLBUFSIZ,
 NFULA_CFG_TIMEOUT,
 NFULA_CFG_QTHRESH,
 NFULA_CFG_FLAGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __NFULA_CFG_MAX
};
#define NFULA_CFG_MAX (__NFULA_CFG_MAX -1)
#define NFULNL_COPY_NONE 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFULNL_COPY_META 0x01
#define NFULNL_COPY_PACKET 0x02
#define NFULNL_CFG_F_SEQ 0x0001
#define NFULNL_CFG_F_SEQ_GLOBAL 0x0002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
