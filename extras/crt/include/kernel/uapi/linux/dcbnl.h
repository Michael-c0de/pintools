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
#ifndef __LINUX_DCBNL_H__
#define __LINUX_DCBNL_H__
#include <linux/types.h>
#define IEEE_8021QAZ_MAX_TCS 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IEEE_8021QAZ_TSA_STRICT 0
#define IEEE_8021QAZ_TSA_CB_SHAPER 1
#define IEEE_8021QAZ_TSA_ETS 2
#define IEEE_8021QAZ_TSA_VENDOR 255
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ieee_ets {
 __u8 willing;
 __u8 ets_cap;
 __u8 cbs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 tc_tx_bw[IEEE_8021QAZ_MAX_TCS];
 __u8 tc_rx_bw[IEEE_8021QAZ_MAX_TCS];
 __u8 tc_tsa[IEEE_8021QAZ_MAX_TCS];
 __u8 prio_tc[IEEE_8021QAZ_MAX_TCS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 tc_reco_bw[IEEE_8021QAZ_MAX_TCS];
 __u8 tc_reco_tsa[IEEE_8021QAZ_MAX_TCS];
 __u8 reco_prio_tc[IEEE_8021QAZ_MAX_TCS];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ieee_maxrate {
 __u64 tc_maxrate[IEEE_8021QAZ_MAX_TCS];
};
struct ieee_pfc {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pfc_cap;
 __u8 pfc_en;
 __u8 mbc;
 __u16 delay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 requests[IEEE_8021QAZ_MAX_TCS];
 __u64 indications[IEEE_8021QAZ_MAX_TCS];
};
#define CEE_DCBX_MAX_PGS 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CEE_DCBX_MAX_PRIO 8
struct cee_pg {
 __u8 willing;
 __u8 error;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pg_en;
 __u8 tcs_supported;
 __u8 pg_bw[CEE_DCBX_MAX_PGS];
 __u8 prio_pg[CEE_DCBX_MAX_PGS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct cee_pfc {
 __u8 willing;
 __u8 error;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pfc_en;
 __u8 tcs_supported;
};
#define IEEE_8021QAZ_APP_SEL_ETHERTYPE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IEEE_8021QAZ_APP_SEL_STREAM 2
#define IEEE_8021QAZ_APP_SEL_DGRAM 3
#define IEEE_8021QAZ_APP_SEL_ANY 4
struct dcb_app {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 selector;
 __u8 priority;
 __u16 protocol;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dcb_peer_app_info {
 __u8 willing;
 __u8 error;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dcbmsg {
 __u8 dcb_family;
 __u8 cmd;
 __u16 dcb_pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum dcbnl_commands {
 DCB_CMD_UNDEFINED,
 DCB_CMD_GSTATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CMD_SSTATE,
 DCB_CMD_PGTX_GCFG,
 DCB_CMD_PGTX_SCFG,
 DCB_CMD_PGRX_GCFG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CMD_PGRX_SCFG,
 DCB_CMD_PFC_GCFG,
 DCB_CMD_PFC_SCFG,
 DCB_CMD_SET_ALL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CMD_GPERM_HWADDR,
 DCB_CMD_GCAP,
 DCB_CMD_GNUMTCS,
 DCB_CMD_SNUMTCS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CMD_PFC_GSTATE,
 DCB_CMD_PFC_SSTATE,
 DCB_CMD_BCN_GCFG,
 DCB_CMD_BCN_SCFG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CMD_GAPP,
 DCB_CMD_SAPP,
 DCB_CMD_IEEE_SET,
 DCB_CMD_IEEE_GET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CMD_GDCBX,
 DCB_CMD_SDCBX,
 DCB_CMD_GFEATCFG,
 DCB_CMD_SFEATCFG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CMD_CEE_GET,
 DCB_CMD_IEEE_DEL,
 __DCB_CMD_ENUM_MAX,
 DCB_CMD_MAX = __DCB_CMD_ENUM_MAX - 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum dcbnl_attrs {
 DCB_ATTR_UNDEFINED,
 DCB_ATTR_IFNAME,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_STATE,
 DCB_ATTR_PFC_STATE,
 DCB_ATTR_PFC_CFG,
 DCB_ATTR_NUM_TC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_PG_CFG,
 DCB_ATTR_SET_ALL,
 DCB_ATTR_PERM_HWADDR,
 DCB_ATTR_CAP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_NUMTCS,
 DCB_ATTR_BCN,
 DCB_ATTR_APP,
 DCB_ATTR_IEEE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_DCBX,
 DCB_ATTR_FEATCFG,
 DCB_ATTR_CEE,
 __DCB_ATTR_ENUM_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_MAX = __DCB_ATTR_ENUM_MAX - 1,
};
enum ieee_attrs {
 DCB_ATTR_IEEE_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_IEEE_ETS,
 DCB_ATTR_IEEE_PFC,
 DCB_ATTR_IEEE_APP_TABLE,
 DCB_ATTR_IEEE_PEER_ETS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_IEEE_PEER_PFC,
 DCB_ATTR_IEEE_PEER_APP,
 DCB_ATTR_IEEE_MAXRATE,
 __DCB_ATTR_IEEE_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DCB_ATTR_IEEE_MAX (__DCB_ATTR_IEEE_MAX - 1)
enum ieee_attrs_app {
 DCB_ATTR_IEEE_APP_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_IEEE_APP,
 __DCB_ATTR_IEEE_APP_MAX
};
#define DCB_ATTR_IEEE_APP_MAX (__DCB_ATTR_IEEE_APP_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum cee_attrs {
 DCB_ATTR_CEE_UNSPEC,
 DCB_ATTR_CEE_PEER_PG,
 DCB_ATTR_CEE_PEER_PFC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_CEE_PEER_APP_TABLE,
 DCB_ATTR_CEE_TX_PG,
 DCB_ATTR_CEE_RX_PG,
 DCB_ATTR_CEE_PFC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_CEE_APP_TABLE,
 DCB_ATTR_CEE_FEAT,
 __DCB_ATTR_CEE_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DCB_ATTR_CEE_MAX (__DCB_ATTR_CEE_MAX - 1)
enum peer_app_attr {
 DCB_ATTR_CEE_PEER_APP_UNSPEC,
 DCB_ATTR_CEE_PEER_APP_INFO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_ATTR_CEE_PEER_APP,
 __DCB_ATTR_CEE_PEER_APP_MAX
};
#define DCB_ATTR_CEE_PEER_APP_MAX (__DCB_ATTR_CEE_PEER_APP_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum cee_attrs_app {
 DCB_ATTR_CEE_APP_UNSPEC,
 DCB_ATTR_CEE_APP,
 __DCB_ATTR_CEE_APP_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DCB_ATTR_CEE_APP_MAX (__DCB_ATTR_CEE_APP_MAX - 1)
enum dcbnl_pfc_up_attrs {
 DCB_PFC_UP_ATTR_UNDEFINED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_PFC_UP_ATTR_0,
 DCB_PFC_UP_ATTR_1,
 DCB_PFC_UP_ATTR_2,
 DCB_PFC_UP_ATTR_3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_PFC_UP_ATTR_4,
 DCB_PFC_UP_ATTR_5,
 DCB_PFC_UP_ATTR_6,
 DCB_PFC_UP_ATTR_7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_PFC_UP_ATTR_ALL,
 __DCB_PFC_UP_ATTR_ENUM_MAX,
 DCB_PFC_UP_ATTR_MAX = __DCB_PFC_UP_ATTR_ENUM_MAX - 1,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum dcbnl_pg_attrs {
 DCB_PG_ATTR_UNDEFINED,
 DCB_PG_ATTR_TC_0,
 DCB_PG_ATTR_TC_1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_PG_ATTR_TC_2,
 DCB_PG_ATTR_TC_3,
 DCB_PG_ATTR_TC_4,
 DCB_PG_ATTR_TC_5,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_PG_ATTR_TC_6,
 DCB_PG_ATTR_TC_7,
 DCB_PG_ATTR_TC_MAX,
 DCB_PG_ATTR_TC_ALL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_PG_ATTR_BW_ID_0,
 DCB_PG_ATTR_BW_ID_1,
 DCB_PG_ATTR_BW_ID_2,
 DCB_PG_ATTR_BW_ID_3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_PG_ATTR_BW_ID_4,
 DCB_PG_ATTR_BW_ID_5,
 DCB_PG_ATTR_BW_ID_6,
 DCB_PG_ATTR_BW_ID_7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_PG_ATTR_BW_ID_MAX,
 DCB_PG_ATTR_BW_ID_ALL,
 __DCB_PG_ATTR_ENUM_MAX,
 DCB_PG_ATTR_MAX = __DCB_PG_ATTR_ENUM_MAX - 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum dcbnl_tc_attrs {
 DCB_TC_ATTR_PARAM_UNDEFINED,
 DCB_TC_ATTR_PARAM_PGID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_TC_ATTR_PARAM_UP_MAPPING,
 DCB_TC_ATTR_PARAM_STRICT_PRIO,
 DCB_TC_ATTR_PARAM_BW_PCT,
 DCB_TC_ATTR_PARAM_ALL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __DCB_TC_ATTR_PARAM_ENUM_MAX,
 DCB_TC_ATTR_PARAM_MAX = __DCB_TC_ATTR_PARAM_ENUM_MAX - 1,
};
enum dcbnl_cap_attrs {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CAP_ATTR_UNDEFINED,
 DCB_CAP_ATTR_ALL,
 DCB_CAP_ATTR_PG,
 DCB_CAP_ATTR_PFC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CAP_ATTR_UP2TC,
 DCB_CAP_ATTR_PG_TCS,
 DCB_CAP_ATTR_PFC_TCS,
 DCB_CAP_ATTR_GSP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_CAP_ATTR_BCN,
 DCB_CAP_ATTR_DCBX,
 __DCB_CAP_ATTR_ENUM_MAX,
 DCB_CAP_ATTR_MAX = __DCB_CAP_ATTR_ENUM_MAX - 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DCB_CAP_DCBX_HOST 0x01
#define DCB_CAP_DCBX_LLD_MANAGED 0x02
#define DCB_CAP_DCBX_VER_CEE 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DCB_CAP_DCBX_VER_IEEE 0x08
#define DCB_CAP_DCBX_STATIC 0x10
enum dcbnl_numtcs_attrs {
 DCB_NUMTCS_ATTR_UNDEFINED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_NUMTCS_ATTR_ALL,
 DCB_NUMTCS_ATTR_PG,
 DCB_NUMTCS_ATTR_PFC,
 __DCB_NUMTCS_ATTR_ENUM_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_NUMTCS_ATTR_MAX = __DCB_NUMTCS_ATTR_ENUM_MAX - 1,
};
enum dcbnl_bcn_attrs{
 DCB_BCN_ATTR_UNDEFINED = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_BCN_ATTR_RP_0,
 DCB_BCN_ATTR_RP_1,
 DCB_BCN_ATTR_RP_2,
 DCB_BCN_ATTR_RP_3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_BCN_ATTR_RP_4,
 DCB_BCN_ATTR_RP_5,
 DCB_BCN_ATTR_RP_6,
 DCB_BCN_ATTR_RP_7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_BCN_ATTR_RP_ALL,
 DCB_BCN_ATTR_BCNA_0,
 DCB_BCN_ATTR_BCNA_1,
 DCB_BCN_ATTR_ALPHA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_BCN_ATTR_BETA,
 DCB_BCN_ATTR_GD,
 DCB_BCN_ATTR_GI,
 DCB_BCN_ATTR_TMAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_BCN_ATTR_TD,
 DCB_BCN_ATTR_RMIN,
 DCB_BCN_ATTR_W,
 DCB_BCN_ATTR_RD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_BCN_ATTR_RU,
 DCB_BCN_ATTR_WRTT,
 DCB_BCN_ATTR_RI,
 DCB_BCN_ATTR_C,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_BCN_ATTR_ALL,
 __DCB_BCN_ATTR_ENUM_MAX,
 DCB_BCN_ATTR_MAX = __DCB_BCN_ATTR_ENUM_MAX - 1,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum dcb_general_attr_values {
 DCB_ATTR_VALUE_UNDEFINED = 0xff
};
#define DCB_APP_IDTYPE_ETHTYPE 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DCB_APP_IDTYPE_PORTNUM 0x01
enum dcbnl_app_attrs {
 DCB_APP_ATTR_UNDEFINED,
 DCB_APP_ATTR_IDTYPE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_APP_ATTR_ID,
 DCB_APP_ATTR_PRIORITY,
 __DCB_APP_ATTR_ENUM_MAX,
 DCB_APP_ATTR_MAX = __DCB_APP_ATTR_ENUM_MAX - 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DCB_FEATCFG_ERROR 0x01
#define DCB_FEATCFG_ENABLE 0x02
#define DCB_FEATCFG_WILLING 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DCB_FEATCFG_ADVERTISE 0x08
enum dcbnl_featcfg_attrs {
 DCB_FEATCFG_ATTR_UNDEFINED,
 DCB_FEATCFG_ATTR_ALL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_FEATCFG_ATTR_PG,
 DCB_FEATCFG_ATTR_PFC,
 DCB_FEATCFG_ATTR_APP,
 __DCB_FEATCFG_ATTR_ENUM_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCB_FEATCFG_ATTR_MAX = __DCB_FEATCFG_ATTR_ENUM_MAX - 1,
};
#endif
