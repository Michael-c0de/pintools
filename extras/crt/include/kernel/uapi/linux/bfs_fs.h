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
#ifndef _LINUX_BFS_FS_H
#define _LINUX_BFS_FS_H
#include <linux/types.h>
#define BFS_BSIZE_BITS 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BFS_BSIZE (1<<BFS_BSIZE_BITS)
#define BFS_MAGIC 0x1BADFACE
#define BFS_ROOT_INO 2
#define BFS_INODES_PER_BLOCK 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BFS_VDIR 2L
#define BFS_VREG 1L
struct bfs_inode {
 __le16 i_ino;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 i_unused;
 __le32 i_sblock;
 __le32 i_eblock;
 __le32 i_eoffset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 i_vtype;
 __le32 i_mode;
 __le32 i_uid;
 __le32 i_gid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 i_nlink;
 __le32 i_atime;
 __le32 i_mtime;
 __le32 i_ctime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 i_padding[4];
};
#define BFS_NAMELEN 14
#define BFS_DIRENT_SIZE 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BFS_DIRS_PER_BLOCK 32
struct bfs_dirent {
 __le16 ino;
 char name[BFS_NAMELEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct bfs_super_block {
 __le32 s_magic;
 __le32 s_start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 s_end;
 __le32 s_from;
 __le32 s_to;
 __s32 s_bfrom;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 s_bto;
 char s_fsname[6];
 char s_volume[6];
 __u32 s_padding[118];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define BFS_OFF2INO(offset)   ((((offset) - BFS_BSIZE) / sizeof(struct bfs_inode)) + BFS_ROOT_INO)
#define BFS_INO2OFF(ino)   ((__u32)(((ino) - BFS_ROOT_INO) * sizeof(struct bfs_inode)) + BFS_BSIZE)
#define BFS_NZFILESIZE(ip)   ((le32_to_cpu((ip)->i_eoffset) + 1) - le32_to_cpu((ip)->i_sblock) * BFS_BSIZE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BFS_FILESIZE(ip)   ((ip)->i_sblock == 0 ? 0 : BFS_NZFILESIZE(ip))
#define BFS_FILEBLOCKS(ip)   ((ip)->i_sblock == 0 ? 0 : (le32_to_cpu((ip)->i_eblock) + 1) - le32_to_cpu((ip)->i_sblock))
#define BFS_UNCLEAN(bfs_sb, sb)   ((le32_to_cpu(bfs_sb->s_from) != -1) && (le32_to_cpu(bfs_sb->s_to) != -1) && !(sb->s_flags & MS_RDONLY))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
