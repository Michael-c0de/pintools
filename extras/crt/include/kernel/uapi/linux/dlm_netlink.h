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
#ifndef _DLM_NETLINK_H
#define _DLM_NETLINK_H
#include <linux/types.h>
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DLM_STATUS_WAITING = 1,
 DLM_STATUS_GRANTED = 2,
 DLM_STATUS_CONVERT = 3,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DLM_LOCK_DATA_VERSION 1
struct dlm_lock_data {
 __u16 version;
 __u32 lockspace_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nodeid;
 int ownpid;
 __u32 id;
 __u32 remid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 xid;
 __s8 status;
 __s8 grmode;
 __s8 rqmode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long timestamp;
 int resource_namelen;
 char resource_name[DLM_RESNAME_MAXLEN];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 DLM_CMD_UNSPEC = 0,
 DLM_CMD_HELLO,
 DLM_CMD_TIMEOUT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __DLM_CMD_MAX,
};
#define DLM_CMD_MAX (__DLM_CMD_MAX - 1)
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DLM_TYPE_UNSPEC = 0,
 DLM_TYPE_LOCK,
 __DLM_TYPE_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DLM_TYPE_MAX (__DLM_TYPE_MAX - 1)
#define DLM_GENL_VERSION 0x1
#define DLM_GENL_NAME "DLM"
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
