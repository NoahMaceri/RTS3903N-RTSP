/* recbackup — recovered function prototypes
 * SD-card recording backup manager
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef RECBACKUP_H
#define RECBACKUP_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00401070 */
undefined4 main(void);  /* @ 004010c0 */
void _fini(void);  /* @ 00405e10 */

/* ---- pthread ---- */
void pthread_cond_signal(void);  /* @ 00406d00 */
void pthread_create(void);  /* @ 00406d30 */
void pthread_kill(void);  /* @ 00406f20 */
void pthread_sigmask(void);  /* @ 00406f80 */
void pthread_cond_init(void);  /* @ 00406f90 */
void pthread_mutex_unlock(void);  /* @ 00407050 */
void pthread_mutex_destroy(void);  /* @ 00407090 */
void pthread_mutex_lock(void);  /* @ 004070a0 */
void pthread_cond_wait(void);  /* @ 004070b0 */
void pthread_cond_destroy(void);  /* @ 004070e0 */
void pthread_mutex_init(void);  /* @ 00407100 */

/* ---- sem ---- */
void sem_timedwait(void);  /* @ 00406d70 */
void sem_destroy(void);  /* @ 00406dc0 */
void sem_post(void);  /* @ 00406e40 */
void sem_init(void);  /* @ 00406ef0 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 004013a0 */
undefined4 recordevent_init_read(undefined4 param_1);  /* @ 004015cc */
int create_file(int param_1,int param_2);  /* @ 0040193c */
int do_copy(void);  /* @ 00401c9c */
void recordbak_pause(void);  /* @ 00402aa0 */
int recordbak_resume(void);  /* @ 00402ce4 */
void umount_cifs(void);  /* @ 00402d88 */
undefined4 XiaoMi(char *param_1);  /* @ 00402e34 */
undefined8 get_dir_size(undefined4 param_1);  /* @ 0040322c */
undefined4 try_clean_disk(void);  /* @ 004032ec */
void pause_bak(void);  /* @ 00403560 */
bool mount_cifs(undefined4 param_1);  /* @ 00403608 */
undefined4 send_mq_msg(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4, undefined4 param_5);  /* @ 004039a0 */
void mount_fail(void);  /* @ 00403abc */
undefined4 check_disk_space(void);  /* @ 00403c3c */
void resume_bak(void);  /* @ 00404158 */
void __PLT_HEAD(void);  /* @ 00406cc0 */
void putchar(void);  /* @ 00406ce0 */
void clock_gettime(void);  /* @ 00406cf0 */
void popen(void);  /* @ 00406d10 */
void printf(void);  /* @ 00406d20 */
void sigemptyset(void);  /* @ 00406d40 */
void pclose(void);  /* @ 00406d50 */
void snprintf(void);  /* @ 00406d60 */
void usleep(void);  /* @ 00406d80 */
void getpid(void);  /* @ 00406d90 */
void memcpy(void);  /* @ 00406da0 */
void puts(void);  /* @ 00406db0 */
void system(void);  /* @ 00406dd0 */
void malloc(void);  /* @ 00406de0 */
void remove(void);  /* @ 00406df0 */
void sleep(void);  /* @ 00406e00 */
void vsnprintf(void);  /* @ 00406e10 */
void mq_send(void);  /* @ 00406e20 */
void statfs(void);  /* @ 00406e30 */
void socket(void);  /* @ 00406e50 */
void select(void);  /* @ 00406e60 */
void readdir(void);  /* @ 00406e70 */
void lseek(void);  /* @ 00406e80 */
void sigaddset(void);  /* @ 00406e90 */
void mmap(void);  /* @ 00406ea0 */
void rename(void);  /* @ 00406eb0 */
void strrchr(void);  /* @ 00406ec0 */
void write(void);  /* @ 00406ed0 */
void fstat(void);  /* @ 00406ee0 */
void mktime(void);  /* @ 00406f00 */
void strstr(void);  /* @ 00406f10 */
void flock(void);  /* @ 00406f30 */
void signal(void);  /* @ 00406f40 */
void read(void);  /* @ 00406f50 */
void strncpy(void);  /* @ 00406f60 */
void sendto(void);  /* @ 00406f70 */
void sigaction(void);  /* @ 00406fa0 */
void fread(void);  /* @ 00406fb0 */
void gettimeofday(void);  /* @ 00406fc0 */
void fopen(void);  /* @ 00406fd0 */
void localtime(void);  /* @ 00406fe0 */
void memset(void);  /* @ 00406ff0 */
void ftw(void);  /* @ 00407000 */
void fclose(void);  /* @ 00407010 */
void time(void);  /* @ 00407020 */
void opendir(void);  /* @ 00407030 */
void strcmp(void);  /* @ 00407040 */
void pselect(void);  /* @ 00407060 */
void localtime_r(void);  /* @ 00407070 */
void access(void);  /* @ 00407080 */
void __errno_location(void);  /* @ 004070c0 */
void atoi(void);  /* @ 004070d0 */
void fileno(void);  /* @ 004070f0 */
void strlen(void);  /* @ 00407110 */
void open(void);  /* @ 00407120 */
void atoll(void);  /* @ 00407130 */
void closedir(void);  /* @ 00407140 */
void fcntl(void);  /* @ 00407150 */
void mq_open(void);  /* @ 00407160 */
void mkdir(void);  /* @ 00407170 */
void close(void);  /* @ 00407180 */
void vfprintf(void);  /* @ 00407190 */
void free(void);  /* @ 004071a0 */

#endif /* RECBACKUP_H */
