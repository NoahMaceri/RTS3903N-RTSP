/* arp_test — recovered function prototypes
 * ARP probe / network bring-up check
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef ARP_TEST_H
#define ARP_TEST_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 0040085c */
undefined4 _ftext(void);  /* @ 004008b0 */
void __uClibc_main(void);  /* @ 00401880 */
void _fini(void);  /* @ 004018a0 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400bc0 */
int arp_send(void);  /* @ 00400e84 */
int send_arp_status_msg(undefined4 param_1,int param_2);  /* @ 00401298 */
void putchar(void);  /* @ 00401ce0 */
void ioctl(void);  /* @ 00401cf0 */
void printf(void);  /* @ 00401d00 */
void recv(void);  /* @ 00401d10 */
void inet_pton(void);  /* @ 00401d20 */
void snprintf(void);  /* @ 00401d30 */
void usleep(void);  /* @ 00401d40 */
void getpid(void);  /* @ 00401d50 */
void perror(void);  /* @ 00401d60 */
void puts(void);  /* @ 00401d70 */
void sleep(void);  /* @ 00401d80 */
void vsnprintf(void);  /* @ 00401d90 */
void mq_send(void);  /* @ 00401da0 */
void socket(void);  /* @ 00401db0 */
void select(void);  /* @ 00401dc0 */
void mmap(void);  /* @ 00401dd0 */
void sendto(void);  /* @ 00401de0 */
void gettimeofday(void);  /* @ 00401df0 */
void localtime(void);  /* @ 00401e00 */
void memset(void);  /* @ 00401e10 */
void time(void);  /* @ 00401e20 */
void strlen(void);  /* @ 00401e30 */
void open(void);  /* @ 00401e40 */
void fcntl(void);  /* @ 00401e50 */
void mq_open(void);  /* @ 00401e60 */
void close(void);  /* @ 00401e70 */
void vfprintf(void);  /* @ 00401e80 */

#endif /* ARP_TEST_H */
