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
#ifndef _NF_CONNTRACK_SCTP_H
#define _NF_CONNTRACK_SCTP_H
#include <linux/netfilter/nf_conntrack_tuple_common.h>
enum sctp_conntrack {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SCTP_CONNTRACK_NONE,
 SCTP_CONNTRACK_CLOSED,
 SCTP_CONNTRACK_COOKIE_WAIT,
 SCTP_CONNTRACK_COOKIE_ECHOED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SCTP_CONNTRACK_ESTABLISHED,
 SCTP_CONNTRACK_SHUTDOWN_SENT,
 SCTP_CONNTRACK_SHUTDOWN_RECD,
 SCTP_CONNTRACK_SHUTDOWN_ACK_SENT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SCTP_CONNTRACK_MAX
};
struct ip_ct_sctp {
 enum sctp_conntrack state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 vtag[IP_CT_DIR_MAX];
};
#endif
