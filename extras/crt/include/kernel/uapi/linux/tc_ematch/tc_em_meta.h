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
#ifndef __LINUX_TC_EM_META_H
#define __LINUX_TC_EM_META_H
#include <linux/types.h>
#include <linux/pkt_cls.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 TCA_EM_META_UNSPEC,
 TCA_EM_META_HDR,
 TCA_EM_META_LVALUE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCA_EM_META_RVALUE,
 __TCA_EM_META_MAX
};
#define TCA_EM_META_MAX (__TCA_EM_META_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tcf_meta_val {
 __u16 kind;
 __u8 shift;
 __u8 op;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TCF_META_TYPE_MASK (0xf << 12)
#define TCF_META_TYPE(kind) (((kind) & TCF_META_TYPE_MASK) >> 12)
#define TCF_META_ID_MASK 0x7ff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCF_META_ID(kind) ((kind) & TCF_META_ID_MASK)
enum {
 TCF_META_TYPE_VAR,
 TCF_META_TYPE_INT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __TCF_META_TYPE_MAX
};
#define TCF_META_TYPE_MAX (__TCF_META_TYPE_MAX - 1)
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_VALUE,
 TCF_META_ID_RANDOM,
 TCF_META_ID_LOADAVG_0,
 TCF_META_ID_LOADAVG_1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_LOADAVG_2,
 TCF_META_ID_DEV,
 TCF_META_ID_PRIORITY,
 TCF_META_ID_PROTOCOL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_PKTTYPE,
 TCF_META_ID_PKTLEN,
 TCF_META_ID_DATALEN,
 TCF_META_ID_MACLEN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_NFMARK,
 TCF_META_ID_TCINDEX,
 TCF_META_ID_RTCLASSID,
 TCF_META_ID_RTIIF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_SK_FAMILY,
 TCF_META_ID_SK_STATE,
 TCF_META_ID_SK_REUSE,
 TCF_META_ID_SK_BOUND_IF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_SK_REFCNT,
 TCF_META_ID_SK_SHUTDOWN,
 TCF_META_ID_SK_PROTO,
 TCF_META_ID_SK_TYPE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_SK_RCVBUF,
 TCF_META_ID_SK_RMEM_ALLOC,
 TCF_META_ID_SK_WMEM_ALLOC,
 TCF_META_ID_SK_OMEM_ALLOC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_SK_WMEM_QUEUED,
 TCF_META_ID_SK_RCV_QLEN,
 TCF_META_ID_SK_SND_QLEN,
 TCF_META_ID_SK_ERR_QLEN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_SK_FORWARD_ALLOCS,
 TCF_META_ID_SK_SNDBUF,
 TCF_META_ID_SK_ALLOCS,
 __TCF_META_ID_SK_ROUTE_CAPS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_SK_HASH,
 TCF_META_ID_SK_LINGERTIME,
 TCF_META_ID_SK_ACK_BACKLOG,
 TCF_META_ID_SK_MAX_ACK_BACKLOG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_SK_PRIO,
 TCF_META_ID_SK_RCVLOWAT,
 TCF_META_ID_SK_RCVTIMEO,
 TCF_META_ID_SK_SNDTIMEO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCF_META_ID_SK_SENDMSG_OFF,
 TCF_META_ID_SK_WRITE_PENDING,
 TCF_META_ID_VLAN_TAG,
 TCF_META_ID_RXHASH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __TCF_META_ID_MAX
};
#define TCF_META_ID_MAX (__TCF_META_ID_MAX - 1)
struct tcf_meta_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tcf_meta_val left;
 struct tcf_meta_val right;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
