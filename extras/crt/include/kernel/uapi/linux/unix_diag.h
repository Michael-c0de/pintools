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
#ifndef __UNIX_DIAG_H__
#define __UNIX_DIAG_H__
#include <linux/types.h>
struct unix_diag_req {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 sdiag_family;
 __u8 sdiag_protocol;
 __u16 pad;
 __u32 udiag_states;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 udiag_ino;
 __u32 udiag_show;
 __u32 udiag_cookie[2];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UDIAG_SHOW_NAME 0x00000001
#define UDIAG_SHOW_VFS 0x00000002
#define UDIAG_SHOW_PEER 0x00000004
#define UDIAG_SHOW_ICONS 0x00000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UDIAG_SHOW_RQLEN 0x00000010
#define UDIAG_SHOW_MEMINFO 0x00000020
struct unix_diag_msg {
 __u8 udiag_family;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 udiag_type;
 __u8 udiag_state;
 __u8 pad;
 __u32 udiag_ino;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 udiag_cookie[2];
};
enum {
 UNIX_DIAG_NAME,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UNIX_DIAG_VFS,
 UNIX_DIAG_PEER,
 UNIX_DIAG_ICONS,
 UNIX_DIAG_RQLEN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UNIX_DIAG_MEMINFO,
 UNIX_DIAG_SHUTDOWN,
 __UNIX_DIAG_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UNIX_DIAG_MAX (__UNIX_DIAG_MAX - 1)
struct unix_diag_vfs {
 __u32 udiag_vfs_ino;
 __u32 udiag_vfs_dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct unix_diag_rqlen {
 __u32 udiag_rqueue;
 __u32 udiag_wqueue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
