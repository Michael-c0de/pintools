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
#ifndef _UAPI_IP_SET_H
#define _UAPI_IP_SET_H
#include <linux/types.h>
#define IPSET_PROTOCOL 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPSET_MAX_COMMENT_SIZE 255
#define IPSET_MAXNAMELEN 32
enum ipset_cmd {
 IPSET_CMD_NONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_CMD_PROTOCOL,
 IPSET_CMD_CREATE,
 IPSET_CMD_DESTROY,
 IPSET_CMD_FLUSH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_CMD_RENAME,
 IPSET_CMD_SWAP,
 IPSET_CMD_LIST,
 IPSET_CMD_SAVE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_CMD_ADD,
 IPSET_CMD_DEL,
 IPSET_CMD_TEST,
 IPSET_CMD_HEADER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_CMD_TYPE,
 IPSET_MSG_MAX,
 IPSET_CMD_RESTORE = IPSET_MSG_MAX,
 IPSET_CMD_HELP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_CMD_VERSION,
 IPSET_CMD_QUIT,
 IPSET_CMD_MAX,
 IPSET_CMD_COMMIT = IPSET_CMD_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 IPSET_ATTR_UNSPEC,
 IPSET_ATTR_PROTOCOL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_SETNAME,
 IPSET_ATTR_TYPENAME,
 IPSET_ATTR_SETNAME2 = IPSET_ATTR_TYPENAME,
 IPSET_ATTR_REVISION,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_FAMILY,
 IPSET_ATTR_FLAGS,
 IPSET_ATTR_DATA,
 IPSET_ATTR_ADT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_LINENO,
 IPSET_ATTR_PROTOCOL_MIN,
 IPSET_ATTR_REVISION_MIN = IPSET_ATTR_PROTOCOL_MIN,
 __IPSET_ATTR_CMD_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IPSET_ATTR_CMD_MAX (__IPSET_ATTR_CMD_MAX - 1)
enum {
 IPSET_ATTR_IP = IPSET_ATTR_UNSPEC + 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_IP_FROM = IPSET_ATTR_IP,
 IPSET_ATTR_IP_TO,
 IPSET_ATTR_CIDR,
 IPSET_ATTR_PORT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_PORT_FROM = IPSET_ATTR_PORT,
 IPSET_ATTR_PORT_TO,
 IPSET_ATTR_TIMEOUT,
 IPSET_ATTR_PROTO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_CADT_FLAGS,
 IPSET_ATTR_CADT_LINENO = IPSET_ATTR_LINENO,
 IPSET_ATTR_CADT_MAX = 16,
 IPSET_ATTR_GC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_HASHSIZE,
 IPSET_ATTR_MAXELEM,
 IPSET_ATTR_NETMASK,
 IPSET_ATTR_PROBES,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_RESIZE,
 IPSET_ATTR_SIZE,
 IPSET_ATTR_ELEMENTS,
 IPSET_ATTR_REFERENCES,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_MEMSIZE,
 __IPSET_ATTR_CREATE_MAX,
};
#define IPSET_ATTR_CREATE_MAX (__IPSET_ATTR_CREATE_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 IPSET_ATTR_ETHER = IPSET_ATTR_CADT_MAX + 1,
 IPSET_ATTR_NAME,
 IPSET_ATTR_NAMEREF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_IP2,
 IPSET_ATTR_CIDR2,
 IPSET_ATTR_IP2_TO,
 IPSET_ATTR_IFACE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_BYTES,
 IPSET_ATTR_PACKETS,
 IPSET_ATTR_COMMENT,
 __IPSET_ATTR_ADT_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IPSET_ATTR_ADT_MAX (__IPSET_ATTR_ADT_MAX - 1)
enum {
 IPSET_ATTR_IPADDR_IPV4 = IPSET_ATTR_UNSPEC + 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ATTR_IPADDR_IPV6,
 __IPSET_ATTR_IPADDR_MAX,
};
#define IPSET_ATTR_IPADDR_MAX (__IPSET_ATTR_IPADDR_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum ipset_errno {
 IPSET_ERR_PRIVATE = 4096,
 IPSET_ERR_PROTOCOL,
 IPSET_ERR_FIND_TYPE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ERR_MAX_SETS,
 IPSET_ERR_BUSY,
 IPSET_ERR_EXIST_SETNAME2,
 IPSET_ERR_TYPE_MISMATCH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ERR_EXIST,
 IPSET_ERR_INVALID_CIDR,
 IPSET_ERR_INVALID_NETMASK,
 IPSET_ERR_INVALID_FAMILY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ERR_TIMEOUT,
 IPSET_ERR_REFERENCED,
 IPSET_ERR_IPADDR_IPV4,
 IPSET_ERR_IPADDR_IPV6,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ERR_COUNTER,
 IPSET_ERR_COMMENT,
 IPSET_ERR_TYPE_SPECIFIC = 4352,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum ipset_cmd_flags {
 IPSET_FLAG_BIT_EXIST = 0,
 IPSET_FLAG_EXIST = (1 << IPSET_FLAG_BIT_EXIST),
 IPSET_FLAG_BIT_LIST_SETNAME = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_FLAG_LIST_SETNAME = (1 << IPSET_FLAG_BIT_LIST_SETNAME),
 IPSET_FLAG_BIT_LIST_HEADER = 2,
 IPSET_FLAG_LIST_HEADER = (1 << IPSET_FLAG_BIT_LIST_HEADER),
 IPSET_FLAG_BIT_SKIP_COUNTER_UPDATE = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_FLAG_SKIP_COUNTER_UPDATE =
 (1 << IPSET_FLAG_BIT_SKIP_COUNTER_UPDATE),
 IPSET_FLAG_BIT_SKIP_SUBCOUNTER_UPDATE = 4,
 IPSET_FLAG_SKIP_SUBCOUNTER_UPDATE =
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 (1 << IPSET_FLAG_BIT_SKIP_SUBCOUNTER_UPDATE),
 IPSET_FLAG_BIT_MATCH_COUNTERS = 5,
 IPSET_FLAG_MATCH_COUNTERS = (1 << IPSET_FLAG_BIT_MATCH_COUNTERS),
 IPSET_FLAG_BIT_RETURN_NOMATCH = 7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_FLAG_RETURN_NOMATCH = (1 << IPSET_FLAG_BIT_RETURN_NOMATCH),
 IPSET_FLAG_CMD_MAX = 15,
};
enum ipset_cadt_flags {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_FLAG_BIT_BEFORE = 0,
 IPSET_FLAG_BEFORE = (1 << IPSET_FLAG_BIT_BEFORE),
 IPSET_FLAG_BIT_PHYSDEV = 1,
 IPSET_FLAG_PHYSDEV = (1 << IPSET_FLAG_BIT_PHYSDEV),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_FLAG_BIT_NOMATCH = 2,
 IPSET_FLAG_NOMATCH = (1 << IPSET_FLAG_BIT_NOMATCH),
 IPSET_FLAG_BIT_WITH_COUNTERS = 3,
 IPSET_FLAG_WITH_COUNTERS = (1 << IPSET_FLAG_BIT_WITH_COUNTERS),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_FLAG_BIT_WITH_COMMENT = 4,
 IPSET_FLAG_WITH_COMMENT = (1 << IPSET_FLAG_BIT_WITH_COMMENT),
 IPSET_FLAG_CADT_MAX = 15,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum ipset_adt {
 IPSET_ADD,
 IPSET_DEL,
 IPSET_TEST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_ADT_MAX,
 IPSET_CREATE = IPSET_ADT_MAX,
 IPSET_CADT_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef __u16 ip_set_id_t;
#define IPSET_INVALID_ID 65535
enum ip_set_dim {
 IPSET_DIM_ZERO = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_DIM_ONE,
 IPSET_DIM_TWO,
 IPSET_DIM_THREE,
 IPSET_DIM_MAX = 6,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_BIT_RETURN_NOMATCH = 7,
};
enum ip_set_kopt {
 IPSET_INV_MATCH = (1 << IPSET_DIM_ZERO),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_DIM_ONE_SRC = (1 << IPSET_DIM_ONE),
 IPSET_DIM_TWO_SRC = (1 << IPSET_DIM_TWO),
 IPSET_DIM_THREE_SRC = (1 << IPSET_DIM_THREE),
 IPSET_RETURN_NOMATCH = (1 << IPSET_BIT_RETURN_NOMATCH),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 IPSET_COUNTER_NONE = 0,
 IPSET_COUNTER_EQ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IPSET_COUNTER_NE,
 IPSET_COUNTER_LT,
 IPSET_COUNTER_GT,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ip_set_counter_match {
 __u8 op;
 __u64 value;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SO_IP_SET 83
union ip_set_name_index {
 char name[IPSET_MAXNAMELEN];
 ip_set_id_t index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IP_SET_OP_GET_BYNAME 0x00000006
struct ip_set_req_get_set {
 unsigned int op;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int version;
 union ip_set_name_index set;
};
#define IP_SET_OP_GET_BYINDEX 0x00000007
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP_SET_OP_GET_FNAME 0x00000008
struct ip_set_req_get_set_family {
 unsigned int op;
 unsigned int version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int family;
 union ip_set_name_index set;
};
#define IP_SET_OP_VERSION 0x00000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ip_set_req_version {
 unsigned int op;
 unsigned int version;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
