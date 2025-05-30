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
#ifndef __LINUX_MATROXFB_H__
#define __LINUX_MATROXFB_H__
#include <asm/ioctl.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/videodev2.h>
#include <linux/fb.h>
struct matroxioc_output_mode {
 __u32 output;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MATROXFB_OUTPUT_PRIMARY 0x0000
#define MATROXFB_OUTPUT_SECONDARY 0x0001
#define MATROXFB_OUTPUT_DFP 0x0002
 __u32 mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MATROXFB_OUTPUT_MODE_PAL 0x0001
#define MATROXFB_OUTPUT_MODE_NTSC 0x0002
#define MATROXFB_OUTPUT_MODE_MONITOR 0x0080
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MATROXFB_SET_OUTPUT_MODE _IOW('n',0xFA,size_t)
#define MATROXFB_GET_OUTPUT_MODE _IOWR('n',0xFA,size_t)
#define MATROXFB_OUTPUT_CONN_PRIMARY (1 << MATROXFB_OUTPUT_PRIMARY)
#define MATROXFB_OUTPUT_CONN_SECONDARY (1 << MATROXFB_OUTPUT_SECONDARY)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MATROXFB_OUTPUT_CONN_DFP (1 << MATROXFB_OUTPUT_DFP)
#define MATROXFB_SET_OUTPUT_CONNECTION _IOW('n',0xF8,size_t)
#define MATROXFB_GET_OUTPUT_CONNECTION _IOR('n',0xF8,size_t)
#define MATROXFB_GET_AVAILABLE_OUTPUTS _IOR('n',0xF9,size_t)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MATROXFB_GET_ALL_OUTPUTS _IOR('n',0xFB,size_t)
enum matroxfb_ctrl_id {
 MATROXFB_CID_TESTOUT = V4L2_CID_PRIVATE_BASE,
 MATROXFB_CID_DEFLICKER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MATROXFB_CID_LAST
};
#endif
