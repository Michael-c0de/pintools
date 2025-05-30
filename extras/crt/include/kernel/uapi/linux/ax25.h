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
#ifndef AX25_KERNEL_H
#define AX25_KERNEL_H
#include <linux/socket.h>
#define AX25_MTU 256
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_MAX_DIGIS 8
#define AX25_WINDOW 1
#define AX25_T1 2
#define AX25_N2 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_T3 4
#define AX25_T2 5
#define AX25_BACKOFF 6
#define AX25_EXTSEQ 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_PIDINCL 8
#define AX25_IDLE 9
#define AX25_PACLEN 10
#define AX25_IAMDIGI 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_KILL 99
#define SIOCAX25GETUID (SIOCPROTOPRIVATE+0)
#define SIOCAX25ADDUID (SIOCPROTOPRIVATE+1)
#define SIOCAX25DELUID (SIOCPROTOPRIVATE+2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIOCAX25NOUID (SIOCPROTOPRIVATE+3)
#define SIOCAX25OPTRT (SIOCPROTOPRIVATE+7)
#define SIOCAX25CTLCON (SIOCPROTOPRIVATE+8)
#define SIOCAX25GETINFOOLD (SIOCPROTOPRIVATE+9)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIOCAX25ADDFWD (SIOCPROTOPRIVATE+10)
#define SIOCAX25DELFWD (SIOCPROTOPRIVATE+11)
#define SIOCAX25DEVCTL (SIOCPROTOPRIVATE+12)
#define SIOCAX25GETINFO (SIOCPROTOPRIVATE+13)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_SET_RT_IPMODE 2
#define AX25_NOUID_DEFAULT 0
#define AX25_NOUID_BLOCK 1
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char ax25_call[7];
} ax25_address;
struct sockaddr_ax25 {
 __kernel_sa_family_t sax25_family;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ax25_address sax25_call;
 int sax25_ndigis;
};
#define sax25_uid sax25_ndigis
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct full_sockaddr_ax25 {
 struct sockaddr_ax25 fsa_ax25;
 ax25_address fsa_digipeater[AX25_MAX_DIGIS];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ax25_routes_struct {
 ax25_address port_addr;
 ax25_address dest_addr;
 unsigned char digi_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ax25_address digi_addr[AX25_MAX_DIGIS];
};
struct ax25_route_opt_struct {
 ax25_address port_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ax25_address dest_addr;
 int cmd;
 int arg;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ax25_ctl_struct {
 ax25_address port_addr;
 ax25_address source_addr;
 ax25_address dest_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int cmd;
 unsigned long arg;
 unsigned char digi_count;
 ax25_address digi_addr[AX25_MAX_DIGIS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ax25_info_struct_deprecated {
 unsigned int n2, n2count;
 unsigned int t1, t1timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int t2, t2timer;
 unsigned int t3, t3timer;
 unsigned int idle, idletimer;
 unsigned int state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int rcv_q, snd_q;
};
struct ax25_info_struct {
 unsigned int n2, n2count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int t1, t1timer;
 unsigned int t2, t2timer;
 unsigned int t3, t3timer;
 unsigned int idle, idletimer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int state;
 unsigned int rcv_q, snd_q;
 unsigned int vs, vr, va, vs_max;
 unsigned int paclen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int window;
};
struct ax25_fwd_struct {
 ax25_address port_from;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ax25_address port_to;
};
#endif
