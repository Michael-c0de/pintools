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
#ifndef _UAPI__LINUX_BRIDGE_NETFILTER_H
#define _UAPI__LINUX_BRIDGE_NETFILTER_H
#include <linux/netfilter.h>
#include <linux/if_ether.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/if_vlan.h>
#include <linux/if_pppox.h>
#define NF_BR_PRE_ROUTING 0
#define NF_BR_LOCAL_IN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_BR_FORWARD 2
#define NF_BR_LOCAL_OUT 3
#define NF_BR_POST_ROUTING 4
#define NF_BR_BROUTING 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_BR_NUMHOOKS 6
#endif
