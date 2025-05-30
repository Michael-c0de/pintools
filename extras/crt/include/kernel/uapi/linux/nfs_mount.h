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
#ifndef _LINUX_NFS_MOUNT_H
#define _LINUX_NFS_MOUNT_H
#include <linux/in.h>
#include <linux/nfs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/nfs2.h>
#include <linux/nfs3.h>
#define NFS_MOUNT_VERSION 6
#define NFS_MAX_CONTEXT_LEN 256
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nfs_mount_data {
 int version;
 int fd;
 struct nfs2_fh old_root;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int flags;
 int rsize;
 int wsize;
 int timeo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int retrans;
 int acregmin;
 int acregmax;
 int acdirmin;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int acdirmax;
 struct sockaddr_in addr;
 char hostname[NFS_MAXNAMLEN + 1];
 int namlen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int bsize;
 struct nfs3_fh root;
 int pseudoflavor;
 char context[NFS_MAX_CONTEXT_LEN + 1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define NFS_MOUNT_SOFT 0x0001
#define NFS_MOUNT_INTR 0x0002
#define NFS_MOUNT_SECURE 0x0004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_MOUNT_POSIX 0x0008
#define NFS_MOUNT_NOCTO 0x0010
#define NFS_MOUNT_NOAC 0x0020
#define NFS_MOUNT_TCP 0x0040
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_MOUNT_VER3 0x0080
#define NFS_MOUNT_KERBEROS 0x0100
#define NFS_MOUNT_NONLM 0x0200
#define NFS_MOUNT_BROKEN_SUID 0x0400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_MOUNT_NOACL 0x0800
#define NFS_MOUNT_STRICTLOCK 0x1000
#define NFS_MOUNT_SECFLAVOUR 0x2000
#define NFS_MOUNT_NORDIRPLUS 0x4000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_MOUNT_UNSHARED 0x8000
#define NFS_MOUNT_FLAGMASK 0xFFFF
#define NFS_MOUNT_LOOKUP_CACHE_NONEG 0x10000
#define NFS_MOUNT_LOOKUP_CACHE_NONE 0x20000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_MOUNT_NORESVPORT 0x40000
#define NFS_MOUNT_LEGACY_INTERFACE 0x80000
#define NFS_MOUNT_LOCAL_FLOCK 0x100000
#define NFS_MOUNT_LOCAL_FCNTL 0x200000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
