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
#ifndef _UAPI__LINUX_OMAPFB_H__
#define _UAPI__LINUX_OMAPFB_H__
#include <linux/fb.h>
#include <linux/ioctl.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#define OMAP_IOW(num, dtype) _IOW('O', num, dtype)
#define OMAP_IOR(num, dtype) _IOR('O', num, dtype)
#define OMAP_IOWR(num, dtype) _IOWR('O', num, dtype)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP_IO(num) _IO('O', num)
#define OMAPFB_MIRROR OMAP_IOW(31, int)
#define OMAPFB_SYNC_GFX OMAP_IO(37)
#define OMAPFB_VSYNC OMAP_IO(38)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_SET_UPDATE_MODE OMAP_IOW(40, int)
#define OMAPFB_GET_CAPS OMAP_IOR(42, struct omapfb_caps)
#define OMAPFB_GET_UPDATE_MODE OMAP_IOW(43, int)
#define OMAPFB_LCD_TEST OMAP_IOW(45, int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_CTRL_TEST OMAP_IOW(46, int)
#define OMAPFB_UPDATE_WINDOW_OLD OMAP_IOW(47, struct omapfb_update_window_old)
#define OMAPFB_SET_COLOR_KEY OMAP_IOW(50, struct omapfb_color_key)
#define OMAPFB_GET_COLOR_KEY OMAP_IOW(51, struct omapfb_color_key)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_SETUP_PLANE OMAP_IOW(52, struct omapfb_plane_info)
#define OMAPFB_QUERY_PLANE OMAP_IOW(53, struct omapfb_plane_info)
#define OMAPFB_UPDATE_WINDOW OMAP_IOW(54, struct omapfb_update_window)
#define OMAPFB_SETUP_MEM OMAP_IOW(55, struct omapfb_mem_info)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_QUERY_MEM OMAP_IOW(56, struct omapfb_mem_info)
#define OMAPFB_WAITFORVSYNC OMAP_IO(57)
#define OMAPFB_MEMORY_READ OMAP_IOR(58, struct omapfb_memory_read)
#define OMAPFB_GET_OVERLAY_COLORMODE OMAP_IOR(59, struct omapfb_ovl_colormode)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_WAITFORGO OMAP_IO(60)
#define OMAPFB_GET_VRAM_INFO OMAP_IOR(61, struct omapfb_vram_info)
#define OMAPFB_SET_TEARSYNC OMAP_IOW(62, struct omapfb_tearsync_info)
#define OMAPFB_GET_DISPLAY_INFO OMAP_IOR(63, struct omapfb_display_info)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_CAPS_GENERIC_MASK 0x00000fff
#define OMAPFB_CAPS_LCDC_MASK 0x00fff000
#define OMAPFB_CAPS_PANEL_MASK 0xff000000
#define OMAPFB_CAPS_MANUAL_UPDATE 0x00001000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_CAPS_TEARSYNC 0x00002000
#define OMAPFB_CAPS_PLANE_RELOCATE_MEM 0x00004000
#define OMAPFB_CAPS_PLANE_SCALE 0x00008000
#define OMAPFB_CAPS_WINDOW_PIXEL_DOUBLE 0x00010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_CAPS_WINDOW_SCALE 0x00020000
#define OMAPFB_CAPS_WINDOW_OVERLAY 0x00040000
#define OMAPFB_CAPS_WINDOW_ROTATE 0x00080000
#define OMAPFB_CAPS_SET_BACKLIGHT 0x01000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_FORMAT_MASK 0x00ff
#define OMAPFB_FORMAT_FLAG_DOUBLE 0x0100
#define OMAPFB_FORMAT_FLAG_TEARSYNC 0x0200
#define OMAPFB_FORMAT_FLAG_FORCE_VSYNC 0x0400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_FORMAT_FLAG_ENABLE_OVERLAY 0x0800
#define OMAPFB_FORMAT_FLAG_DISABLE_OVERLAY 0x1000
#define OMAPFB_MEMTYPE_SDRAM 0
#define OMAPFB_MEMTYPE_SRAM 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAPFB_MEMTYPE_MAX 1
#define OMAPFB_MEM_IDX_ENABLED 0x80
#define OMAPFB_MEM_IDX_MASK 0x7f
enum omapfb_color_format {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OMAPFB_COLOR_RGB565 = 0,
 OMAPFB_COLOR_YUV422,
 OMAPFB_COLOR_YUV420,
 OMAPFB_COLOR_CLUT_8BPP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OMAPFB_COLOR_CLUT_4BPP,
 OMAPFB_COLOR_CLUT_2BPP,
 OMAPFB_COLOR_CLUT_1BPP,
 OMAPFB_COLOR_RGB444,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OMAPFB_COLOR_YUY422,
 OMAPFB_COLOR_ARGB16,
 OMAPFB_COLOR_RGB24U,
 OMAPFB_COLOR_RGB24P,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OMAPFB_COLOR_ARGB32,
 OMAPFB_COLOR_RGBA32,
 OMAPFB_COLOR_RGBX32,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct omapfb_update_window {
 __u32 x, y;
 __u32 width, height;
 __u32 format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 out_x, out_y;
 __u32 out_width, out_height;
 __u32 reserved[8];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct omapfb_update_window_old {
 __u32 x, y;
 __u32 width, height;
 __u32 format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum omapfb_plane {
 OMAPFB_PLANE_GFX = 0,
 OMAPFB_PLANE_VID1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OMAPFB_PLANE_VID2,
};
enum omapfb_channel_out {
 OMAPFB_CHANNEL_OUT_LCD = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OMAPFB_CHANNEL_OUT_DIGIT,
};
struct omapfb_plane_info {
 __u32 pos_x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 pos_y;
 __u8 enabled;
 __u8 channel_out;
 __u8 mirror;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 mem_idx;
 __u32 out_width;
 __u32 out_height;
 __u32 reserved2[12];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct omapfb_mem_info {
 __u32 size;
 __u8 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved[3];
};
struct omapfb_caps {
 __u32 ctrl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 plane_color;
 __u32 wnd_color;
};
enum omapfb_color_key_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OMAPFB_COLOR_KEY_DISABLED = 0,
 OMAPFB_COLOR_KEY_GFX_DST,
 OMAPFB_COLOR_KEY_VID_SRC,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct omapfb_color_key {
 __u8 channel_out;
 __u32 background;
 __u32 trans_key;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 key_type;
};
enum omapfb_update_mode {
 OMAPFB_UPDATE_DISABLED = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OMAPFB_AUTO_UPDATE,
 OMAPFB_MANUAL_UPDATE
};
struct omapfb_memory_read {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 x;
 __u16 y;
 __u16 w;
 __u16 h;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t buffer_size;
 void __user *buffer;
};
struct omapfb_ovl_colormode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 overlay_idx;
 __u8 mode_idx;
 __u32 bits_per_pixel;
 __u32 nonstd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct fb_bitfield red;
 struct fb_bitfield green;
 struct fb_bitfield blue;
 struct fb_bitfield transp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct omapfb_vram_info {
 __u32 total;
 __u32 free;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 largest_free_block;
 __u32 reserved[5];
};
struct omapfb_tearsync_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 enabled;
 __u8 reserved1[3];
 __u16 line;
 __u16 reserved2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct omapfb_display_info {
 __u16 xres;
 __u16 yres;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 width;
 __u32 height;
 __u32 reserved[5];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
