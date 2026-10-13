/* cloud — recovered function prototypes
 * Cloud control-plane client (drives cloudAPI, handles server commands)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef CLOUD_H
#define CLOUD_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 00400e20 */
undefined4 _ftext(undefined4 param_1,int *param_2);  /* @ 00400e70 */
undefined4 main(int param_1,int param_2);  /* @ 00401160 */
void __uClibc_main(void);  /* @ 0040de50 */
void _fini(void);  /* @ 0040de70 */

/* ---- cloud ---- */
undefined4 cloud_report_alarm_upload_status(int param_1,int param_2,int param_3);  /* @ 00401a58 */
int cloud_set_time(undefined4 param_1);  /* @ 00401c24 */
undefined4 cloud_set_region(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 00401d04 */
undefined4 cloud_set_bind_result(undefined4 param_1);  /* @ 00401e00 */
undefined4 cloud_set_tnp(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00401e6c */
undefined4 cloud_finish_sync_info_from_server(void);  /* @ 00401f78 */
undefined4 cloud_save_api_server(void);  /* @ 00401fdc */
undefined4 cloud_clear_api_server(void);  /* @ 00402040 */
undefined4 cloud_set_tz_offset(undefined4 param_1);  /* @ 004020a4 */
undefined4 cloud_set_cloud_storage_state(undefined4 param_1);  /* @ 00402114 */
undefined4 cloud_set_cloud_storage_mode(undefined4 param_1);  /* @ 0040218c */
undefined4 cloud_set_cloud_image_state(undefined4 param_1);  /* @ 00402204 */
undefined4 cloud_set_video_backup_state(char *param_1);  /* @ 0040227c */
undefined4 cloud_set_babycry_occur(void);  /* @ 00402364 */
undefined4 cloud_set_abnormal_sound_occur(void);  /* @ 004023d8 */
undefined4 cloud_cap_pic(undefined4 param_1);  /* @ 00402730 */
undefined4 cloud_make_video(undefined4 param_1,int param_2);  /* @ 004027ac */
undefined4 cloud_send_shortrec_msg(undefined4 param_1,undefined4 param_2);  /* @ 0040537c */
void cloud_set_prev_motion_state(int param_1);  /* @ 0040686c */
undefined4 cloud_update_upgradefirmware_status(int param_1);  /* @ 00407738 */

/* ---- mq ---- */
void mq_receive(void);  /* @ 004132f0 */
void mq_send(void);  /* @ 00413360 */
void mq_open(void);  /* @ 004135d0 */

/* ---- pthread ---- */
void pthread_create(void);  /* @ 00413260 */
void pthread_detach(void);  /* @ 004133c0 */
void pthread_self(void);  /* @ 00413540 */

/* ---- send ---- */
int send_apmode_result(int param_1);  /* @ 004016e4 */
void send_vc_capture_end_msg(void);  /* @ 004066fc */
void send_vc_record_end_msg(void);  /* @ 004067b4 */

/* ---- webapi ---- */
undefined4 webapi_do_tnp_on_line(void);  /* @ 00402cd8 */
int webapi_do_check_region(void);  /* @ 00402fac */
undefined4 webapi_do_reset_by_specified_server(undefined4 param_1,int param_2);  /* @ 004032ac */
undefined4 webapi_do_bindkey(void);  /* @ 0040356c */
undefined4 webapi_do_event_update (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6,undefined4 param_7);  /* @ 004037d4 */
int webapi_do_event_upload(int param_1,int param_2);  /* @ 00403ad8 */
undefined4 webapi_do_log_upload(void);  /* @ 00403d24 */
undefined4 webapi_do_login(void);  /* @ 00403e3c */
undefined4 webapi_do_check_did(void);  /* @ 004047a4 */

/* ---- yi ---- */
void yi_push_rcd_file(void);  /* @ 00405040 */
void yi_motion_push(int param_1);  /* @ 00405428 */
void yi_push_voicecmd_file(int param_1);  /* @ 00405f58 */
void yi_proc(void);  /* @ 00406fcc */
undefined4 yi_sync_time(void);  /* @ 004082bc */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 004013b0 */
uint strhex2byte(int param_1,byte *param_2);  /* @ 00401590 */
void msg_proc(void);  /* @ 0040244c */
void do_update_ex(undefined4 param_1,undefined4 param_2);  /* @ 00402988 */
undefined4 report_tnp_on_line_status(undefined4 param_1);  /* @ 00406c54 */
void do_need_update(void);  /* @ 00406ee4 */
void sync_time(void);  /* @ 00408550 */
undefined4 sys_init(void);  /* @ 00408634 */
void aec_dec(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004087cc */
undefined4 cJSON_GetIntObjItem(undefined4 param_1,undefined4 param_2,undefined4 *param_3);  /* @ 0040b02c */
undefined4 cJSON_GetStrObjItem(undefined4 param_1,undefined4 param_2);  /* @ 0040b0a0 */
void putchar(void);  /* @ 00413220 */
void strcpy(void);  /* @ 00413230 */
void popen(void);  /* @ 00413240 */
void printf(void);  /* @ 00413250 */
void pclose(void);  /* @ 00413280 */
void snprintf(void);  /* @ 00413290 */
void usleep(void);  /* @ 004132b0 */
void getpid(void);  /* @ 004132c0 */
void memcpy(void);  /* @ 004132d0 */
void perror(void);  /* @ 004132e0 */
void puts(void);  /* @ 00413300 */
void system(void);  /* @ 00413310 */
void malloc(void);  /* @ 00413320 */
void remove(void);  /* @ 00413330 */
void sleep(void);  /* @ 00413340 */
void vsnprintf(void);  /* @ 00413350 */
void sem_post(void);  /* @ 00413380 */
void socket(void);  /* @ 00413390 */
void select(void);  /* @ 004133a0 */
void mmap(void);  /* @ 004133b0 */
void strrchr(void);  /* @ 004133d0 */
void atof(void);  /* @ 004133e0 */
void sem_init(void);  /* @ 004133f0 */
void mktime(void);  /* @ 00413400 */
void strstr(void);  /* @ 00413410 */
void rand(void);  /* @ 00413420 */
void signal(void);  /* @ 00413430 */
void strncmp(void);  /* @ 00413440 */
void pow(void);  /* @ 00413450 */
void strncpy(void);  /* @ 00413460 */
void sendto(void);  /* @ 00413470 */
void memcmp(void);  /* @ 00413480 */
void sscanf(void);  /* @ 00413490 */
void fread(void);  /* @ 004134a0 */
void gettimeofday(void);  /* @ 004134b0 */
void fopen(void);  /* @ 004134c0 */
void localtime(void);  /* @ 004134d0 */
void memset(void);  /* @ 004134e0 */
void srand(void);  /* @ 004134f0 */
void fclose(void);  /* @ 00413500 */
void time(void);  /* @ 00413510 */
void strcmp(void);  /* @ 00413520 */
void sprintf(void);  /* @ 00413530 */
void fwrite(void);  /* @ 00413550 */
void access(void);  /* @ 00413560 */
void exit(void);  /* @ 00413570 */
void atoi(void);  /* @ 00413580 */
void fileno(void);  /* @ 00413590 */
void strlen(void);  /* @ 004135a0 */
void open(void);  /* @ 004135b0 */
void strchr(void);  /* @ 004135c0 */
void close(void);  /* @ 004135e0 */
void vfprintf(void);  /* @ 004135f0 */
void free(void);  /* @ 00413600 */

#endif /* CLOUD_H */
