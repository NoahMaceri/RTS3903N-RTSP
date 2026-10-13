/* mp4record — recovered function prototypes
 * Event MP4 / clip recorder
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef MP4RECORD_H
#define MP4RECORD_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00400d88 */
void _ftext(void);  /* @ 00400dd0 */
undefined4 main(void);  /* @ 00400e30 */
void _fini(void);  /* @ 00408f30 */

/* ---- fshare ---- */
undefined4 fshare_create(void);  /* @ 00403b78 */
undefined4 fshare_open(void);  /* @ 00403e68 */
undefined4 fshare_read(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5);  /* @ 00404530 */
undefined4 fshare_read_newest(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5);  /* @ 004047ac */
undefined4 fshare_wait(int param_1);  /* @ 00404a40 */

/* ---- mq ---- */
void mq_receive(void);  /* @ 00409e30 */
void mq_send(void);  /* @ 00409e70 */
void mq_open(void);  /* @ 0040a030 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00401170 */
undefined4 thread_short_record(short *param_1);  /* @ 00401f60 */
int send_mp4rcd_heartbeat_msg(undefined4 param_1);  /* @ 004023b8 */
int send_mp4rcd_costtime_msg(undefined4 param_1,undefined4 param_2);  /* @ 00402454 */
undefined4 record_file(void);  /* @ 004024f4 */
void recordevent_add_file_info(undefined4 param_1,undefined4 param_2);  /* @ 0040329c */
undefined4 mmap_init(undefined4 param_1,undefined4 param_2);  /* @ 00403300 */
undefined4 try_adjust_buf(int *param_1,int *param_2,int param_3);  /* @ 00403a14 */
void ms_sleep(uint param_1);  /* @ 0040562c */
void __PLT_HEAD(void);  /* @ 00409d60 */
void putchar(void);  /* @ 00409d80 */
void clock_gettime(void);  /* @ 00409d90 */
void strcpy(void);  /* @ 00409da0 */
void printf(void);  /* @ 00409db0 */
void pthread_create(void);  /* @ 00409dc0 */
void snprintf(void);  /* @ 00409dd0 */
void memmem(void);  /* @ 00409de0 */
void usleep(void);  /* @ 00409df0 */
void getpid(void);  /* @ 00409e00 */
void qsort(void);  /* @ 00409e10 */
void memcpy(void);  /* @ 00409e20 */
void puts(void);  /* @ 00409e40 */
void remove(void);  /* @ 00409e50 */
void vsnprintf(void);  /* @ 00409e60 */
void socket(void);  /* @ 00409e80 */
void select(void);  /* @ 00409e90 */
void readdir(void);  /* @ 00409ea0 */
void lseek(void);  /* @ 00409eb0 */
void mmap(void);  /* @ 00409ec0 */
void pthread_detach(void);  /* @ 00409ed0 */
void rename(void);  /* @ 00409ee0 */
void calloc(void);  /* @ 00409ef0 */
void write(void);  /* @ 00409f00 */
void mktime(void);  /* @ 00409f10 */
void signal(void);  /* @ 00409f20 */
void sendto(void);  /* @ 00409f30 */
void realloc(void);  /* @ 00409f40 */
void sscanf(void);  /* @ 00409f50 */
void gettimeofday(void);  /* @ 00409f60 */
void localtime(void);  /* @ 00409f70 */
void memset(void);  /* @ 00409f80 */
void time(void);  /* @ 00409f90 */
void opendir(void);  /* @ 00409fa0 */
void localtime_r(void);  /* @ 00409fb0 */
void stat(void);  /* @ 00409fc0 */
void access(void);  /* @ 00409fd0 */
void __errno_location(void);  /* @ 00409fe0 */
void strlen(void);  /* @ 00409ff0 */
void open(void);  /* @ 0040a000 */
void closedir(void);  /* @ 0040a010 */
void fcntl(void);  /* @ 0040a020 */
void mkdir(void);  /* @ 0040a040 */
void close(void);  /* @ 0040a050 */
void vfprintf(void);  /* @ 0040a060 */
void free(void);  /* @ 0040a070 */

#endif /* MP4RECORD_H */
