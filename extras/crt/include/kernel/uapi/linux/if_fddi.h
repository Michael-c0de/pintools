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
#ifndef _UAPI_LINUX_IF_FDDI_H
#define _UAPI_LINUX_IF_FDDI_H
#include <linux/types.h>
#define FDDI_K_ALEN 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FDDI_K_8022_HLEN 16
#define FDDI_K_SNAP_HLEN 21
#define FDDI_K_8022_ZLEN 16
#define FDDI_K_SNAP_ZLEN 21
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FDDI_K_8022_DLEN 4475
#define FDDI_K_SNAP_DLEN 4470
#define FDDI_K_LLC_ZLEN 13
#define FDDI_K_LLC_LEN 4491
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FDDI_FC_K_VOID 0x00
#define FDDI_FC_K_NON_RESTRICTED_TOKEN 0x80
#define FDDI_FC_K_RESTRICTED_TOKEN 0xC0
#define FDDI_FC_K_SMT_MIN 0x41
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FDDI_FC_K_SMT_MAX 0x4F
#define FDDI_FC_K_MAC_MIN 0xC1
#define FDDI_FC_K_MAC_MAX 0xCF
#define FDDI_FC_K_ASYNC_LLC_MIN 0x50
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FDDI_FC_K_ASYNC_LLC_DEF 0x54
#define FDDI_FC_K_ASYNC_LLC_MAX 0x5F
#define FDDI_FC_K_SYNC_LLC_MIN 0xD0
#define FDDI_FC_K_SYNC_LLC_MAX 0xD7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FDDI_FC_K_IMPLEMENTOR_MIN 0x60
#define FDDI_FC_K_IMPLEMENTOR_MAX 0x6F
#define FDDI_FC_K_RESERVED_MIN 0x70
#define FDDI_FC_K_RESERVED_MAX 0x7F
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FDDI_EXTENDED_SAP 0xAA
#define FDDI_UI_CMD 0x03
struct fddi_8022_1_hdr {
 __u8 dsap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 ssap;
 __u8 ctrl;
} __attribute__((packed));
struct fddi_8022_2_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 dsap;
 __u8 ssap;
 __u8 ctrl_1;
 __u8 ctrl_2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
#define FDDI_K_OUI_LEN 3
struct fddi_snap_hdr {
 __u8 dsap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 ssap;
 __u8 ctrl;
 __u8 oui[FDDI_K_OUI_LEN];
 __be16 ethertype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct fddihdr {
 __u8 fc;
 __u8 daddr[FDDI_K_ALEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 saddr[FDDI_K_ALEN];
 union
 {
 struct fddi_8022_1_hdr llc_8022_1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct fddi_8022_2_hdr llc_8022_2;
 struct fddi_snap_hdr llc_snap;
 } hdr;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
