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
#ifndef __GFS2_ONDISK_DOT_H__
#define __GFS2_ONDISK_DOT_H__
#include <linux/types.h>
#define GFS2_MAGIC 0x01161970
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_BASIC_BLOCK 512
#define GFS2_BASIC_BLOCK_SHIFT 9
#define GFS2_MOUNT_LOCK 0
#define GFS2_LIVE_LOCK 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_TRANS_LOCK 2
#define GFS2_RENAME_LOCK 3
#define GFS2_CONTROL_LOCK 4
#define GFS2_MOUNTED_LOCK 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_FORMAT_NONE 0
#define GFS2_FORMAT_SB 100
#define GFS2_FORMAT_RG 200
#define GFS2_FORMAT_RB 300
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_FORMAT_DI 400
#define GFS2_FORMAT_IN 500
#define GFS2_FORMAT_LF 600
#define GFS2_FORMAT_JD 700
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_FORMAT_LH 800
#define GFS2_FORMAT_LD 900
#define GFS2_FORMAT_LB 1000
#define GFS2_FORMAT_EA 1600
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_FORMAT_ED 1700
#define GFS2_FORMAT_QC 1400
#define GFS2_FORMAT_RI 1100
#define GFS2_FORMAT_DE 1200
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_FORMAT_QU 1500
#define GFS2_FORMAT_FS 1801
#define GFS2_FORMAT_MULTI 1900
struct gfs2_inum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 no_formal_ino;
 __be64 no_addr;
};
#define GFS2_METATYPE_NONE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_METATYPE_SB 1
#define GFS2_METATYPE_RG 2
#define GFS2_METATYPE_RB 3
#define GFS2_METATYPE_DI 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_METATYPE_IN 5
#define GFS2_METATYPE_LF 6
#define GFS2_METATYPE_JD 7
#define GFS2_METATYPE_LH 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_METATYPE_LD 9
#define GFS2_METATYPE_LB 12
#define GFS2_METATYPE_EA 10
#define GFS2_METATYPE_ED 11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_METATYPE_QC 14
struct gfs2_meta_header {
 __be32 mh_magic;
 __be32 mh_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 __pad0;
 __be32 mh_format;
 union {
 __be32 mh_jid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 __pad1;
 };
};
#define GFS2_SB_ADDR 128
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_SB_LOCK 0
#define GFS2_LOCKNAME_LEN 64
struct gfs2_sb {
 struct gfs2_meta_header sb_header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 sb_fs_format;
 __be32 sb_multihost_format;
 __u32 __pad0;
 __be32 sb_bsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 sb_bsize_shift;
 __u32 __pad1;
 struct gfs2_inum sb_master_dir;
 struct gfs2_inum __pad2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct gfs2_inum sb_root_dir;
 char sb_lockproto[GFS2_LOCKNAME_LEN];
 char sb_locktable[GFS2_LOCKNAME_LEN];
 struct gfs2_inum __pad3;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct gfs2_inum __pad4;
#define GFS2_HAS_UUID 1
 __u8 sb_uuid[16];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gfs2_rindex {
 __be64 ri_addr;
 __be32 ri_length;
 __u32 __pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 ri_data0;
 __be32 ri_data;
 __be32 ri_bitbytes;
 __u8 ri_reserved[64];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define GFS2_NBBY 4
#define GFS2_BIT_SIZE 2
#define GFS2_BIT_MASK 0x00000003
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_BLKST_FREE 0
#define GFS2_BLKST_USED 1
#define GFS2_BLKST_UNLINKED 2
#define GFS2_BLKST_DINODE 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_RGF_JOURNAL 0x00000001
#define GFS2_RGF_METAONLY 0x00000002
#define GFS2_RGF_DATAONLY 0x00000004
#define GFS2_RGF_NOALLOC 0x00000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_RGF_TRIMMED 0x00000010
struct gfs2_rgrp_lvb {
 __be32 rl_magic;
 __be32 rl_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 rl_free;
 __be32 rl_dinodes;
 __be64 rl_igeneration;
 __be32 rl_unlinked;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 __pad;
};
struct gfs2_rgrp {
 struct gfs2_meta_header rg_header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 rg_flags;
 __be32 rg_free;
 __be32 rg_dinodes;
 __be32 __pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 rg_igeneration;
 __u8 rg_reserved[80];
};
struct gfs2_quota {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 qu_limit;
 __be64 qu_warn;
 __be64 qu_value;
 __u8 qu_reserved[64];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define GFS2_MAX_META_HEIGHT 10
#define GFS2_DIR_MAX_DEPTH 17
#define DT2IF(dt) (((dt) << 12) & S_IFMT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IF2DT(sif) (((sif) & S_IFMT) >> 12)
enum {
 gfs2fl_Jdata = 0,
 gfs2fl_ExHash = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 gfs2fl_Unused = 2,
 gfs2fl_EaIndirect = 3,
 gfs2fl_Directio = 4,
 gfs2fl_Immutable = 5,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 gfs2fl_AppendOnly = 6,
 gfs2fl_NoAtime = 7,
 gfs2fl_Sync = 8,
 gfs2fl_System = 9,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 gfs2fl_TopLevel = 10,
 gfs2fl_TruncInProg = 29,
 gfs2fl_InheritDirectio = 30,
 gfs2fl_InheritJdata = 31,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define GFS2_DIF_JDATA 0x00000001
#define GFS2_DIF_EXHASH 0x00000002
#define GFS2_DIF_UNUSED 0x00000004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_DIF_EA_INDIRECT 0x00000008
#define GFS2_DIF_DIRECTIO 0x00000010
#define GFS2_DIF_IMMUTABLE 0x00000020
#define GFS2_DIF_APPENDONLY 0x00000040
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_DIF_NOATIME 0x00000080
#define GFS2_DIF_SYNC 0x00000100
#define GFS2_DIF_SYSTEM 0x00000200
#define GFS2_DIF_TOPDIR 0x00000400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_DIF_TRUNC_IN_PROG 0x20000000
#define GFS2_DIF_INHERIT_DIRECTIO 0x40000000
#define GFS2_DIF_INHERIT_JDATA 0x80000000
struct gfs2_dinode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct gfs2_meta_header di_header;
 struct gfs2_inum di_num;
 __be32 di_mode;
 __be32 di_uid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 di_gid;
 __be32 di_nlink;
 __be64 di_size;
 __be64 di_blocks;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 di_atime;
 __be64 di_mtime;
 __be64 di_ctime;
 __be32 di_major;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 di_minor;
 __be64 di_goal_meta;
 __be64 di_goal_data;
 __be64 di_generation;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 di_flags;
 __be32 di_payload_format;
 __u16 __pad1;
 __be16 di_height;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 __pad2;
 __u16 __pad3;
 __be16 di_depth;
 __be32 di_entries;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct gfs2_inum __pad4;
 __be64 di_eattr;
 __be32 di_atime_nsec;
 __be32 di_mtime_nsec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 di_ctime_nsec;
 __u8 di_reserved[44];
};
#define GFS2_FNAMESIZE 255
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_DIRENT_SIZE(name_len) ((sizeof(struct gfs2_dirent) + (name_len) + 7) & ~7)
struct gfs2_dirent {
 struct gfs2_inum de_inum;
 __be32 de_hash;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 de_rec_len;
 __be16 de_name_len;
 __be16 de_type;
 __u8 __pad[14];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gfs2_leaf {
 struct gfs2_meta_header lf_header;
 __be16 lf_depth;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 lf_entries;
 __be32 lf_dirent_format;
 __be64 lf_next;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 lf_reserved[64];
 struct {
 __be64 lf_inode;
 __be32 lf_dist;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 lf_nsec;
 __be64 lf_sec;
 __u8 lf_reserved2[40];
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
};
#define GFS2_EA_MAX_NAME_LEN 255
#define GFS2_EA_MAX_DATA_LEN 65536
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_EATYPE_UNUSED 0
#define GFS2_EATYPE_USR 1
#define GFS2_EATYPE_SYS 2
#define GFS2_EATYPE_SECURITY 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_EATYPE_LAST 3
#define GFS2_EATYPE_VALID(x) ((x) <= GFS2_EATYPE_LAST)
#define GFS2_EAFLAG_LAST 0x01
struct gfs2_ea_header {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 ea_rec_len;
 __be32 ea_data_len;
 __u8 ea_name_len;
 __u8 ea_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 ea_flags;
 __u8 ea_num_ptrs;
 __u32 __pad;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_LOG_HEAD_UNMOUNT 0x00000001
struct gfs2_log_header {
 struct gfs2_meta_header lh_header;
 __be64 lh_sequence;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 lh_flags;
 __be32 lh_tail;
 __be32 lh_blkno;
 __be32 lh_hash;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define GFS2_LOG_DESC_METADATA 300
#define GFS2_LOG_DESC_REVOKE 301
#define GFS2_LOG_DESC_JDATA 302
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gfs2_log_descriptor {
 struct gfs2_meta_header ld_header;
 __be32 ld_type;
 __be32 ld_length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 ld_data1;
 __be32 ld_data2;
 __u8 ld_reserved[32];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFS2_INUM_QUANTUM 1048576
struct gfs2_inum_range {
 __be64 ir_start;
 __be64 ir_length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gfs2_statfs_change {
 __be64 sc_total;
 __be64 sc_free;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 sc_dinodes;
};
#define GFS2_QCF_USER 0x00000001
struct gfs2_quota_change {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 qc_change;
 __be32 qc_flags;
 __be32 qc_id;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gfs2_quota_lvb {
 __be32 qb_magic;
 __u32 __pad;
 __be64 qb_limit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be64 qb_warn;
 __be64 qb_value;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
