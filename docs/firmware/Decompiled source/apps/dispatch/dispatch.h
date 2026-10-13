/* dispatch — recovered function prototypes
 * Central mqueue router; onboarding + device state machine
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef DISPATCH_H
#define DISPATCH_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00401188 */
void main(void);  /* @ 004011d0 */
void _fini(void);  /* @ 00411fa0 */

/* ---- get ---- */
void get_tmp_did(void);  /* @ 00403b38 */
undefined4 get_productinfo(void);  /* @ 00403c44 */
undefined4 get_config(void);  /* @ 00408b78 */

/* ---- h601r ---- */
undefined4 h601r_stop(void);  /* @ 0040ad3c */
undefined4 h601r_get_position(undefined4 *param_1);  /* @ 0040ad90 */
undefined4 h601r_cruise_start(void);  /* @ 0040cbc4 */

/* ---- mq ---- */
void mq_receive(void);  /* @ 004154c0 */
void mq_send(void);  /* @ 00415530 */
void mq_open(void);  /* @ 004158a0 */

/* ---- pthread ---- */
void pthread_create(void);  /* @ 00415420 */
void pthread_detach(void);  /* @ 004155c0 */
void pthread_mutex_unlock(void);  /* @ 004157c0 */
void pthread_self(void);  /* @ 004157e0 */
void pthread_mutex_lock(void);  /* @ 00415810 */
void pthread_mutex_init(void);  /* @ 00415850 */

/* ---- ptz ---- */
undefined4 ptz_get_position(undefined4 param_1);  /* @ 0040b808 */
undefined4 ptz_stop(void);  /* @ 0040ba6c */
undefined4 ptz_cruise_start(void);  /* @ 0040c4f4 */

/* ---- sem ---- */
void sem_wait(void);  /* @ 00415540 */
void sem_post(void);  /* @ 00415550 */
void sem_init(void);  /* @ 00415620 */

/* ---- send ---- */
int send_connectting_msg(undefined4 param_1);  /* @ 00402870 */
int send_pwdwrong_msg(undefined4 param_1);  /* @ 0040290c */
int send_success_msg(undefined4 param_1);  /* @ 004029a8 */
int send_bind_fail_msg(undefined4 param_1);  /* @ 00402a44 */
int send_wrong_device_msg(undefined4 param_1);  /* @ 00402ae0 */
int send_bind_timeout_msg(undefined4 param_1);  /* @ 00402b7c */
int send_connected_msg(undefined4 param_1);  /* @ 00402c18 */
int send_reset_msg(undefined4 param_1);  /* @ 00402cb4 */
int send_reboot_msg(undefined4 param_1);  /* @ 00402d50 */
int send_saveconfig_msg(undefined4 param_1);  /* @ 00403a9c */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00401a10 */
void schedule_power_onoff(int *param_1,int param_2);  /* @ 00401d44 */
void choose_server(undefined4 param_1);  /* @ 00404154 */
void link_audio_file(void);  /* @ 00404848 */
undefined4 save_config(void);  /* @ 004083dc */
undefined4 set_default(void);  /* @ 0040881c */
undefined4 dispatch_report_cloud_alarm_status(undefined4 param_1);  /* @ 0040a60c */
undefined4 modify_ptz_running_stat(void);  /* @ 0040ad04 */
undefined4 set_motor_dir_speed(int param_1);  /* @ 0040b6d8 */
undefined4 ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 (uint param_1,char *param_2,uint param_3);  /* @ 00410b78 */
int ssp_uart_init(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5);  /* @ 0041130c */
undefined4 ssp_uart_send_cmd(int param_1,uint *param_2,uint param_3,uint param_4);  /* @ 0041195c */
void __PLT_HEAD(void);  /* @ 004153a0 */
void putchar(void);  /* @ 004153c0 */
void strcpy(void);  /* @ 004153d0 */
void asctime(void);  /* @ 004153e0 */
void ioctl(void);  /* @ 004153f0 */
void popen(void);  /* @ 00415400 */
void printf(void);  /* @ 00415410 */
void strerror(void);  /* @ 00415430 */
void pclose(void);  /* @ 00415440 */
void snprintf(void);  /* @ 00415450 */
void munmap(void);  /* @ 00415460 */
void usleep(void);  /* @ 00415480 */
void getpid(void);  /* @ 00415490 */
void prctl(void);  /* @ 004154a0 */
void memcpy(void);  /* @ 004154b0 */
void puts(void);  /* @ 004154d0 */
void tcflush(void);  /* @ 004154e0 */
void system(void);  /* @ 004154f0 */
void malloc(void);  /* @ 00415500 */
void sleep(void);  /* @ 00415510 */
void vsnprintf(void);  /* @ 00415520 */
void settimeofday(void);  /* @ 00415560 */
void socket(void);  /* @ 00415570 */
void select(void);  /* @ 00415580 */
void readdir(void);  /* @ 00415590 */
void lseek(void);  /* @ 004155a0 */
void mmap(void);  /* @ 004155b0 */
void gmtime_r(void);  /* @ 004155d0 */
void strtol(void);  /* @ 004155e0 */
void cfsetispeed(void);  /* @ 004155f0 */
void write(void);  /* @ 00415600 */
void cfsetospeed(void);  /* @ 00415610 */
void mktime(void);  /* @ 00415630 */
void strstr(void);  /* @ 00415640 */
void rand(void);  /* @ 00415650 */
void signal(void);  /* @ 00415660 */
void read(void);  /* @ 00415670 */
void strncmp(void);  /* @ 00415680 */
void pow(void);  /* @ 00415690 */
void strncpy(void);  /* @ 004156a0 */
void unlink(void);  /* @ 004156b0 */
void sendto(void);  /* @ 004156c0 */
void sscanf(void);  /* @ 004156d0 */
void statvfs(void);  /* @ 004156e0 */
void fread(void);  /* @ 004156f0 */
void symlink(void);  /* @ 00415700 */
void gettimeofday(void);  /* @ 00415710 */
void fopen(void);  /* @ 00415720 */
void localtime(void);  /* @ 00415730 */
void memset(void);  /* @ 00415740 */
void srand(void);  /* @ 00415750 */
void fclose(void);  /* @ 00415760 */
void inet_ntoa(void);  /* @ 00415770 */
void tcgetattr(void);  /* @ 00415780 */
void time(void);  /* @ 00415790 */
void opendir(void);  /* @ 004157a0 */
void strcmp(void);  /* @ 004157b0 */
void sprintf(void);  /* @ 004157d0 */
void fwrite(void);  /* @ 004157f0 */
void access(void);  /* @ 00415800 */
void __errno_location(void);  /* @ 00415820 */
void atoi(void);  /* @ 00415830 */
void fileno(void);  /* @ 00415840 */
void strlen(void);  /* @ 00415860 */
void open(void);  /* @ 00415870 */
void strchr(void);  /* @ 00415880 */
void closedir(void);  /* @ 00415890 */
void tcsetattr(void);  /* @ 004158b0 */
void mkdir(void);  /* @ 004158c0 */
void close(void);  /* @ 004158d0 */
void vfprintf(void);  /* @ 004158e0 */
void free(void);  /* @ 004158f0 */

#endif /* DISPATCH_H */
