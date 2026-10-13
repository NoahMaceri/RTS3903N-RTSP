/* rmm — recovered function prototypes
 * Media pipeline: ISP/H.264/AAC capture, QR scan, motion detect, fshare ring
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef RMM_H
#define RMM_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 004024bc */
void _ftext(void);  /* @ 00402510 */
int main(int param_1,int *param_2);  /* @ 0040440c */
void _fini(void);  /* @ 004221b0 */

/* ---- aacdecoder ---- */
void aacDecoder_Fill(void);  /* @ 00426090 */
void aacDecoder_DecodeFrame(void);  /* @ 00426140 */
void aacDecoder_Open(void);  /* @ 004261c0 */
void aacDecoder_GetStreamInfo(void);  /* @ 004264d0 */
void aacDecoder_Close(void);  /* @ 004265c0 */

/* ---- cb ---- */
void cb_full(void);  /* @ 00402590 */
void cb_empty(void);  /* @ 004025b8 */
void cb_info(int param_1,code *param_2);  /* @ 0040bcd4 */
void cb_datalen(void);  /* @ 0040bd44 */
uint cb_write(int *param_1,int param_2,uint param_3);  /* @ 0040bd98 */
uint cb_read(int *param_1,int param_2,uint param_3);  /* @ 0040befc */
void cb_init(int *param_1,int param_2);  /* @ 0040c010 */
void cb_deinit(int *param_1);  /* @ 0040c138 */

/* ---- fshare ---- */
undefined4 fshare_create(void);  /* @ 004128e8 */
undefined4 fshare_write(undefined4 param_1,undefined4 *param_2);  /* @ 00412ebc */
undefined4 fshare_read(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5);  /* @ 004132a0 */
undefined4 fshare_read_newest(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5);  /* @ 0041351c */
undefined4 fshare_wait(int param_1);  /* @ 004137b0 */

/* ---- media ---- */
undefined4 media_ai_get_aacstream(void);  /* @ 00408138 */
void media_rtl_get_videostream(uint *param_1);  /* @ 00408cbc */
undefined4 media_rtl_send_ao_beep(int param_1);  /* @ 00409c3c */
int media_rtl_set_color2grey(void);  /* @ 0040ace0 */
int media_venc_set_color2grey(undefined4 param_1);  /* @ 0040ae74 */
int media_rtl_set_flip(uint param_1);  /* @ 0040af20 */
int media_rtl_set_ldc(undefined4 param_1,undefined4 param_2);  /* @ 0040afec */
int media_rtl_set_3dnr(void);  /* @ 0040b0f8 */
undefined4 media_rtl_init(undefined4 param_1,int param_2);  /* @ 0040bc4c */

/* ---- modet ---- */
void modet_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5,int param_6,int param_7,int param_8);  /* @ 0040d6e4 */
undefined4 modet_isBiggerMove(undefined4 param_1,int param_2,undefined4 param_3,int param_4);  /* @ 0040db34 */
undefined4 * modet_process(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);  /* @ 0040dc4c */

/* ---- mq ---- */
void mq_send(void);  /* @ 00426290 */
void mq_receive(void);  /* @ 004265f0 */
void mq_open(void);  /* @ 00426670 */

/* ---- pthread ---- */
void pthread_detach(void);  /* @ 00425e40 */
void pthread_mutex_lock(void);  /* @ 00425ec0 */
void pthread_self(void);  /* @ 00425f20 */
void pthread_mutex_unlock(void);  /* @ 004260b0 */
void pthread_once(void);  /* @ 00426240 */
void pthread_create(void);  /* @ 00426440 */
void pthread_mutex_init(void);  /* @ 00426500 */

/* ---- rts ---- */
int rts_amixer_init(undefined4 param_1);  /* @ 00411bc8 */
void rts_av_set_callback(void);  /* @ 00425e70 */
void rts_queue_empty(void);  /* @ 00425e80 */
void rts_av_unbind(void);  /* @ 00425f10 */
void rts_av_enable_chn(void);  /* @ 00425f50 */
void rts_av_new_buffer(void);  /* @ 00425f80 */
void rts_av_stop_recv(void);  /* @ 00425f90 */
void rts_av_disable_chn(void);  /* @ 00425fc0 */
void rts_av_delete_buffer(void);  /* @ 00425fd0 */
void rts_av_bind(void);  /* @ 00425fe0 */
void rts_av_set_buffer_callback(void);  /* @ 00425ff0 */
void rts_av_get_isp_daynight_statis(void);  /* @ 00426000 */
void rts_av_set_aec_ctrl(void);  /* @ 00426010 */
void rts_av_get_chn_status(void);  /* @ 00426040 */
void rts_av_start_send(void);  /* @ 00426060 */
void rts_free(void);  /* @ 00426070 */
void rts_av_send(void);  /* @ 004260c0 */
void rts_av_create_h264_chn(void);  /* @ 00426100 */
void rts_av_poll(void);  /* @ 00426160 */
void rts_av_get_buffer(void);  /* @ 00426170 */
void rts_av_stop_send(void);  /* @ 00426190 */
void rts_av_get_profile(void);  /* @ 004261a0 */
void rts_av_set_profile(void);  /* @ 004261b0 */
void rts_av_create_audio_mixer_chn(void);  /* @ 004261d0 */
void rts_av_set_h264_ctrl(void);  /* @ 004261f0 */
void rts_av_release(void);  /* @ 00426200 */
void rts_av_create_isp_chn(void);  /* @ 00426230 */
void rts_av_get_h264_ctrl(void);  /* @ 00426250 */
void rts_av_get_isp_ctrl(void);  /* @ 00426260 */
void rts_av_query_aec_ctrl(void);  /* @ 00426270 */
void rts_av_query_h264_ctrl(void);  /* @ 004262a0 */
void rts_av_destroy_chn(void);  /* @ 004262e0 */
void rts_log(void);  /* @ 00426340 */
void rts_queue_init(void);  /* @ 00426350 */
void rts_av_request_h264_key_frame(void);  /* @ 00426360 */
void rts_av_init(void);  /* @ 00426370 */
void rts_av_release_h264_ctrl(void);  /* @ 004263a0 */
void rts_av_create_mjpeg_chn(void);  /* @ 004263b0 */
void rts_av_create_audio_aec_chn(void);  /* @ 004263d0 */
void __rts_malloc(void);  /* @ 004263e0 */
void rts_av_put_buffer(void);  /* @ 00426400 */
void rts_av_create_audio_capture_chn(void);  /* @ 00426460 */
void rts_av_recv(void);  /* @ 004264b0 */
void rts_av_create_audio_resample_chn(void);  /* @ 004264c0 */
void rts_av_release_aec_ctrl(void);  /* @ 00426530 */
void rts_av_create_osd_chn(void);  /* @ 004265b0 */
void rts_queue_clear(void);  /* @ 004265d0 */
void RTS_IS_ERR(void);  /* @ 004265e0 */
void rts_av_set_buffer_profile(void);  /* @ 00426610 */
void rts_av_set_isp_ctrl(void);  /* @ 00426620 */
void rts_queue_pop(void);  /* @ 00426630 */
void rts_av_is_idle(void);  /* @ 00426640 */
void rts_queue_push_back(void);  /* @ 00426660 */
void rts_av_start_recv(void);  /* @ 00426680 */
void rts_queue_destroy(void);  /* @ 00426690 */
void rts_av_create_audio_encode_chn(void);  /* @ 004266e0 */
void rts_av_create_audio_playback_chn(void);  /* @ 00426700 */

/* ---- sem ---- */
void sem_post(void);  /* @ 00425e60 */
void sem_wait(void);  /* @ 004262c0 */
void sem_init(void);  /* @ 00426300 */

/* ---- send ---- */
int send_motion_start_msg(undefined4 param_1);  /* @ 00404e00 */
int send_motion_flowwith_start_msg(undefined4 param_1);  /* @ 00404ec4 */
int send_wait_msg(undefined4 param_1);  /* @ 00404f88 */
int send_reboot_msg(undefined4 param_1);  /* @ 00405020 */
int send_abnormal_sound_detect_msg(undefined4 param_1);  /* @ 0040625c */
int send_capture_finish_msg(undefined4 param_1);  /* @ 00406568 */
int send_wifi_conf_msg(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00406fac */
int send_do_speaking_msg(undefined4 param_1);  /* @ 004083f4 */
int send_stop_speaking_msg(undefined4 param_1);  /* @ 00408490 */
undefined4 send_pcm_to_playback(undefined4 param_1,undefined4 param_2);  /* @ 00408534 */

/* ---- set ---- */
void set_light_switch(uint param_1);  /* @ 00405660 */
int set_grey_attr(undefined4 param_1,int param_2);  /* @ 0040ab94 */
int set_isp_attr(undefined4 param_1,int param_2);  /* @ 0040ad28 */

/* ---- zbar ---- */
void zbar_image_free_data(void);  /* @ 00402608 */
undefined4 zbar_proc(void);  /* @ 00407168 */
void _zbar_image_scanner_recycle_syms(int param_1,int param_2);  /* @ 00414f34 */
int zbar_scan_image(undefined4 *param_1,int *param_2);  /* @ 00415edc */
void _zbar_qr_destroy(int param_1);  /* @ 0041aa60 */
undefined4 _zbar_qr_decode(int param_1,undefined4 param_2,int param_3);  /* @ 0041dbb0 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00404c20 */
void daynight_switch_func(void);  /* @ 004050bc */
undefined4 trans_info(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);  /* @ 00405344 */
undefined4 rmm_ptz_direction_ctrl(undefined4 param_1);  /* @ 00405534 */
void abnormal_sound_detection_func(void);  /* @ 00406320 */
int raw_video_resize(undefined4 param_1,undefined4 param_2);  /* @ 00408c14 */
undefined4 parse_decode_aac_frame(uint *param_1,int param_2);  /* @ 00409af0 */
int init_raw_stream(int param_1);  /* @ 00409ddc */
undefined4 motrk_getLastImg(void);  /* @ 0040c42c */
uint wave_fifo_put(int param_1,uint param_2);  /* @ 00411628 */
undefined4 try_adjust_buf(int *param_1,int *param_2,int param_3);  /* @ 00412784 */
void ms_sleep(uint param_1);  /* @ 00414514 */
void qr_handler(undefined4 *param_1,uint *param_2);  /* @ 004152fc */
void dump_stats(int *param_1);  /* @ 00415b94 */
undefined4 qr_code_data_list_extract_text(int *param_1,undefined4 param_2,int param_3);  /* @ 0041e2cc */
void __PLT_HEAD(void);  /* @ 00425e20 */
void printf(void);  /* @ 00425e50 */
void exit(void);  /* @ 00425e90 */
void realloc(void);  /* @ 00425ea0 */
void memmove(void);  /* @ 00425eb0 */
void strstr(void);  /* @ 00425ed0 */
void clock_gettime(void);  /* @ 00425ee0 */
void fread(void);  /* @ 00425ef0 */
void close(void);  /* @ 00425f00 */
void strchr(void);  /* @ 00425f30 */
void calloc(void);  /* @ 00425f40 */
void strncmp(void);  /* @ 00425f60 */
void strrchr(void);  /* @ 00425f70 */
void strerror(void);  /* @ 00425fa0 */
void free(void);  /* @ 00425fb0 */
void mmap(void);  /* @ 00426020 */
void fprintf(void);  /* @ 00426030 */
void memcpy(void);  /* @ 00426050 */
void usleep(void);  /* @ 00426080 */
void pclose(void);  /* @ 004260a0 */
void localtime(void);  /* @ 004260d0 */
void qsort(void);  /* @ 004260e0 */
void prctl(void);  /* @ 004260f0 */
void fileno(void);  /* @ 00426110 */
void putchar(void);  /* @ 00426120 */
void memset(void);  /* @ 00426130 */
void __assert(void);  /* @ 00426150 */
void popen(void);  /* @ 00426180 */
void sin(void);  /* @ 004261e0 */
void system(void);  /* @ 00426210 */
void sendto(void);  /* @ 00426220 */
void iconv_close(void);  /* @ 00426280 */
void atoi(void);  /* @ 004262b0 */
void iconv_open(void);  /* @ 004262d0 */
void fwrite(void);  /* @ 004262f0 */
void puts(void);  /* @ 00426310 */
void vsnprintf(void);  /* @ 00426320 */
void fopen(void);  /* @ 00426330 */
void snprintf(void);  /* @ 00426380 */
void access(void);  /* @ 00426390 */
void getpid(void);  /* @ 004263c0 */
void vfprintf(void);  /* @ 00426410 */
void socket(void);  /* @ 00426420 */
void cos(void);  /* @ 00426430 */
void gettimeofday(void);  /* @ 00426450 */
void time(void);  /* @ 00426470 */
void fseek(void);  /* @ 00426480 */
void memcmp(void);  /* @ 00426490 */
void fclose(void);  /* @ 004264a0 */
void ioctl(void);  /* @ 004264e0 */
void syscall(void);  /* @ 004264f0 */
void log10(void);  /* @ 00426510 */
void sqrt(void);  /* @ 00426520 */
void open(void);  /* @ 00426540 */
void sprintf(void);  /* @ 00426550 */
void sleep(void);  /* @ 00426560 */
void signal(void);  /* @ 00426570 */
void select(void);  /* @ 00426590 */
void strlen(void);  /* @ 004265a0 */
void nice(void);  /* @ 00426600 */
void rename(void);  /* @ 00426650 */
void floor(void);  /* @ 004266a0 */
void __errno_location(void);  /* @ 004266b0 */
void malloc(void);  /* @ 004266c0 */
void strcmp(void);  /* @ 004266d0 */
void ftell(void);  /* @ 004266f0 */

#endif /* RMM_H */
