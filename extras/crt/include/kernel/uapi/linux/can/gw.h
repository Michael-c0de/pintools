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
#ifndef CAN_GW_H
#define CAN_GW_H
#include <linux/types.h>
#include <linux/can.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rtcanmsg {
 __u8 can_family;
 __u8 gwtype;
 __u16 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 CGW_TYPE_UNSPEC,
 CGW_TYPE_CAN_CAN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __CGW_TYPE_MAX
};
#define CGW_TYPE_MAX (__CGW_TYPE_MAX - 1)
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CGW_UNSPEC,
 CGW_MOD_AND,
 CGW_MOD_OR,
 CGW_MOD_XOR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CGW_MOD_SET,
 CGW_CS_XOR,
 CGW_CS_CRC8,
 CGW_HANDLED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CGW_DROPPED,
 CGW_SRC_IF,
 CGW_DST_IF,
 CGW_FILTER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CGW_DELETED,
 CGW_LIM_HOPS,
 __CGW_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CGW_MAX (__CGW_MAX - 1)
#define CGW_FLAGS_CAN_ECHO 0x01
#define CGW_FLAGS_CAN_SRC_TSTAMP 0x02
#define CGW_FLAGS_CAN_IIF_TX_OK 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CGW_MOD_FUNCS 4
#define CGW_MOD_ID 0x01
#define CGW_MOD_DLC 0x02
#define CGW_MOD_DATA 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CGW_FRAME_MODS 3
#define MAX_MODFUNCTIONS (CGW_MOD_FUNCS * CGW_FRAME_MODS)
struct cgw_frame_mod {
 struct can_frame cf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 modtype;
} __attribute__((packed));
#define CGW_MODATTR_LEN sizeof(struct cgw_frame_mod)
struct cgw_csum_xor {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s8 from_idx;
 __s8 to_idx;
 __s8 result_idx;
 __u8 init_xor_val;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct cgw_csum_crc8 {
 __s8 from_idx;
 __s8 to_idx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s8 result_idx;
 __u8 init_crc_val;
 __u8 final_xor_val;
 __u8 crctab[256];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 profile;
 __u8 profile_data[20];
} __attribute__((packed));
#define CGW_CS_XOR_LEN sizeof(struct cgw_csum_xor)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CGW_CS_CRC8_LEN sizeof(struct cgw_csum_crc8)
enum {
 CGW_CRC8PRF_UNSPEC,
 CGW_CRC8PRF_1U8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CGW_CRC8PRF_16U8,
 CGW_CRC8PRF_SFFID_XOR,
 __CGW_CRC8PRF_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CGW_CRC8PRF_MAX (__CGW_CRC8PRF_MAX - 1)
#endif
