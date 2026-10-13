/* download_upgrade — recovered function prototypes
 * OTA package downloader (recovery slot)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef DOWNLOAD_UPGRADE_H
#define DOWNLOAD_UPGRADE_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 0040121c */
undefined4 _ftext(void);  /* @ 00401270 */
void __uClibc_main(void);  /* @ 00403a30 */
void _fini(void);  /* @ 00403a50 */

/* ---- get ---- */
undefined4 get_upgrade_file(undefined4 param_1,undefined4 param_2);  /* @ 00401d70 */
int get_sharemem(undefined4 param_1,undefined4 param_2);  /* @ 004027c4 */
void get_cur_time_ms(void);  /* @ 004029c4 */
int get_filename_by_time(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00402f20 */
void get_event_mmap(void);  /* @ 004031c4 */
int get_cur_ms(void);  /* @ 00403980 */

/* ---- system ---- */
void system_cmd(undefined4 param_1);  /* @ 004023ec */
int system_cmd_withret_timeout(int param_1,int param_2,int param_3,uint param_4);  /* @ 0040241c */
void system(void);  /* @ 00404430 */

/* ---- yi ---- */
undefined4 yi_insmod_ko(int param_1);  /* @ 00402b1c */
undefined4 yi_insmod_with_param(int param_1,int param_2);  /* @ 00402bb4 */
undefined4 yi_insmod_with_openfile(int param_1,int param_2);  /* @ 00402c84 */
undefined4 yi_insmod_with_param_openfile(int param_1,int param_2,int param_3);  /* @ 00402db4 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00401ad0 */
undefined4 md5_check_file(undefined4 param_1,undefined4 param_2);  /* @ 00401cb0 */
void memset_s(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4);  /* @ 00401ef8 */
void memcpy_s(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4);  /* @ 00401f14 */
undefined4 InitLogClient(int *param_1);  /* @ 00401f30 */
void dump_string(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 0040204c */
void dump_mem(int param_1,int param_2,int param_3,int param_4);  /* @ 00402264 */
undefined4 gen_nonce(uint param_1,char *param_2,uint param_3);  /* @ 0040260c */
undefined4 filesize(undefined4 param_1);  /* @ 004026e0 */
int init_mqueue(int *param_1,undefined4 param_2);  /* @ 00402740 */
undefined4 mqueue_send(int param_1,undefined4 param_2,int param_3);  /* @ 00402798 */
int create_sharemem(undefined4 param_1,int param_2);  /* @ 004028b8 */
void rm_enter(int *param_1);  /* @ 00402960 */
void ms_sleep(uint param_1);  /* @ 00402a34 */
void calc_timecost_init(void);  /* @ 00402a9c */
int calc_timecost_result(void);  /* @ 00402ab0 */
undefined4 mymktime(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6);  /* @ 00403210 */
undefined4 trans_json(int param_1,int param_2,int param_3);  /* @ 004032b0 */
undefined4 trans_json_ex(byte *param_1,int param_2,int param_3);  /* @ 00403390 */
undefined4 malloc_s(int param_1,int param_2,undefined4 param_3,int param_4);  /* @ 0040370c */
void free_s(int param_1,int param_2,undefined4 param_3,undefined4 param_4);  /* @ 0040379c */
void write_log(void);  /* @ 004037dc */
int base64_decode(char *param_1,byte *param_2);  /* @ 004037e4 */
void putchar(void);  /* @ 004043a0 */
void popen(void);  /* @ 004043b0 */
void printf(void);  /* @ 004043c0 */
void pclose(void);  /* @ 004043d0 */
void snprintf(void);  /* @ 004043e0 */
void usleep(void);  /* @ 004043f0 */
void getpid(void);  /* @ 00404400 */
void puts(void);  /* @ 00404420 */
void sleep(void);  /* @ 00404450 */
void vsnprintf(void);  /* @ 00404460 */
void socket(void);  /* @ 00404480 */
void select(void);  /* @ 00404490 */
void mmap(void);  /* @ 004044b0 */
void rename(void);  /* @ 004044c0 */
void mktime(void);  /* @ 00404500 */
void strstr(void);  /* @ 00404510 */
void sendto(void);  /* @ 00404530 */
void sscanf(void);  /* @ 00404540 */
void fread(void);  /* @ 00404550 */
void gettimeofday(void);  /* @ 00404560 */
void fopen(void);  /* @ 00404570 */
void localtime(void);  /* @ 00404580 */
void memset(void);  /* @ 00404590 */
void time(void);  /* @ 004045c0 */
void strcmp(void);  /* @ 004045d0 */
void sprintf(void);  /* @ 004045e0 */
void access(void);  /* @ 004045f0 */
void atoi(void);  /* @ 00404600 */
void fileno(void);  /* @ 00404610 */
void strlen(void);  /* @ 00404620 */
void open(void);  /* @ 00404630 */
void mq_open(void);  /* @ 00404640 */
void close(void);  /* @ 00404650 */
void vfprintf(void);  /* @ 00404660 */
void free(void);  /* @ 00404670 */

#endif /* DOWNLOAD_UPGRADE_H */
