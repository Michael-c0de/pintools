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
#ifndef _ATMLEC_H_
#define _ATMLEC_H_
#include <linux/atmapi.h>
#include <linux/atmioc.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/atm.h>
#include <linux/if_ether.h>
#include <linux/types.h>
#define ATMLEC_CTRL _IO('a', ATMIOC_LANE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATMLEC_DATA _IO('a', ATMIOC_LANE+1)
#define ATMLEC_MCAST _IO('a', ATMIOC_LANE+2)
#define MAX_LEC_ITF 48
typedef enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 l_set_mac_addr,
 l_del_mac_addr,
 l_svc_setup,
 l_addr_delete,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 l_topology_change,
 l_flush_complete,
 l_arp_update,
 l_narp_req,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 l_config,
 l_flush_tran_id,
 l_set_lecid,
 l_arp_xmt,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 l_rdesc_arp_xmt,
 l_associate_req,
 l_should_bridge
} atmlec_msg_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATMLEC_MSG_TYPE_MAX l_should_bridge
struct atmlec_config_msg {
 unsigned int maximum_unknown_frame_count;
 unsigned int max_unknown_frame_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short max_retry_count;
 unsigned int aging_time;
 unsigned int forward_delay_time;
 unsigned int arp_response_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int flush_timeout;
 unsigned int path_switching_delay;
 unsigned int lane_version;
 int mtu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int is_proxy;
};
struct atmlec_msg {
 atmlec_msg_type type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int sizeoftlvs;
 union {
 struct {
 unsigned char mac_addr[ETH_ALEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char atm_addr[ATM_ESA_LEN];
 unsigned int flag;
 unsigned int targetless_le_arp;
 unsigned int no_source_le_narp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } normal;
 struct atmlec_config_msg config;
 struct {
 __u16 lec_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 tran_id;
 unsigned char mac_addr[ETH_ALEN];
 unsigned char atm_addr[ATM_ESA_LEN];
 } proxy;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } content;
} __ATM_API_ALIGN;
struct atmlec_ioc {
 int dev_num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char atm_addr[ATM_ESA_LEN];
 unsigned char receive;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
