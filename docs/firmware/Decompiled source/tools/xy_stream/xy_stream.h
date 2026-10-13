/* xy_stream — recovered function prototypes
 * Streaming test / helper tool
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef XY_STREAM_H
#define XY_STREAM_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 004015b8 */
undefined4 main(undefined4 param_1,int param_2);  /* @ 00401600 */
void __uClibc_main(void);  /* @ 00403d70 */
void _fini(void);  /* @ 00403d90 */

/* ---- aacdecoder ---- */
void aacDecoder_Fill(void);  /* @ 004048c0 */
void aacDecoder_DecodeFrame(void);  /* @ 00404900 */
void aacDecoder_Open(void);  /* @ 00404950 */
void aacDecoder_GetStreamInfo(void);  /* @ 00404af0 */
void aacDecoder_Close(void);  /* @ 00404b40 */

/* ---- init ---- */
void init_stream_info(int param_1);  /* @ 00402610 */
int init_main_stream(undefined4 *param_1,undefined4 *param_2);  /* @ 004028c8 */
int init_sub_stream(undefined4 *param_1,int param_2);  /* @ 00402bac */
int init_raw_stream(undefined4 *param_1,int param_2);  /* @ 00402df8 */
int init_aac_audio_server(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00402f78 */

/* ---- rts ---- */
void rts_queue_empty(void);  /* @ 004047b0 */
void rts_av_enable_chn(void);  /* @ 004047e0 */
void rts_av_new_buffer(void);  /* @ 004047f0 */
void rts_av_stop_recv(void);  /* @ 00404800 */
void rts_av_disable_chn(void);  /* @ 00404820 */
void rts_av_delete_buffer(void);  /* @ 00404830 */
void rts_av_bind(void);  /* @ 00404840 */
void rts_av_set_buffer_callback(void);  /* @ 00404850 */
void rts_av_set_aec_ctrl(void);  /* @ 00404860 */
void rts_av_get_chn_status(void);  /* @ 00404870 */
void rts_av_start_send(void);  /* @ 00404890 */
void rts_free(void);  /* @ 004048a0 */
void rts_av_send(void);  /* @ 004048d0 */
void rts_av_create_h264_chn(void);  /* @ 004048e0 */
void rts_av_poll(void);  /* @ 00404910 */
void rts_av_get_buffer(void);  /* @ 00404920 */
void rts_av_stop_send(void);  /* @ 00404930 */
void rts_av_set_profile(void);  /* @ 00404940 */
void rts_av_create_audio_mixer_chn(void);  /* @ 00404960 */
void rts_av_release(void);  /* @ 00404980 */
void rts_av_create_isp_chn(void);  /* @ 00404990 */
void rts_av_get_isp_ctrl(void);  /* @ 004049a0 */
void rts_av_query_aec_ctrl(void);  /* @ 004049b0 */
void rts_set_log_mask(void);  /* @ 004049c0 */
void rts_av_destroy_chn(void);  /* @ 004049d0 */
void rts_log(void);  /* @ 00404a10 */
void rts_queue_init(void);  /* @ 00404a20 */
void rts_av_init(void);  /* @ 00404a30 */
void rts_av_create_mjpeg_chn(void);  /* @ 00404a50 */
void rts_av_create_audio_aec_chn(void);  /* @ 00404a60 */
void __rts_malloc(void);  /* @ 00404a70 */
void rts_av_put_buffer(void);  /* @ 00404a80 */
void rts_av_create_audio_capture_chn(void);  /* @ 00404aa0 */
void rts_av_recv(void);  /* @ 00404ad0 */
void rts_av_create_audio_resample_chn(void);  /* @ 00404ae0 */
void rts_av_release_aec_ctrl(void);  /* @ 00404b00 */
void rts_av_create_osd_chn(void);  /* @ 00404b30 */
void rts_queue_clear(void);  /* @ 00404b50 */
void RTS_IS_ERR(void);  /* @ 00404b60 */
void rts_av_set_buffer_profile(void);  /* @ 00404b70 */
void rts_av_set_isp_ctrl(void);  /* @ 00404b80 */
void rts_queue_pop(void);  /* @ 00404b90 */
void rts_queue_push_back(void);  /* @ 00404ba0 */
void rts_av_start_recv(void);  /* @ 00404bb0 */
void rts_queue_destroy(void);  /* @ 00404bc0 */
void rts_av_create_audio_encode_chn(void);  /* @ 00404be0 */
void rts_av_create_audio_playback_chn(void);  /* @ 00404c00 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00401d70 */
void Snapshot(void);  /* @ 00402090 */
undefined4 ai_get_lpcmstream(void);  /* @ 00402134 */
undefined4 ai_get_aacstream(undefined4 param_1);  /* @ 00402248 */
void release_stream(int param_1);  /* @ 00402630 */
undefined4 main_stream_recv(int param_1);  /* @ 004026e8 */
undefined4 sub_stream_recv(int param_1);  /* @ 00402778 */
undefined4 raw_stream_recv(int param_1);  /* @ 00402854 */
undefined4 apply_capture_aac(void);  /* @ 00402f14 */
undefined4 stop_capture_aac(void);  /* @ 00402f58 */
undefined4 send_aac_frame(undefined4 param_1,int param_2,undefined4 param_3,uint *param_4);  /* @ 00403704 */
undefined4 stop_aac_audio_server(void);  /* @ 00403a88 */
undefined4 msg_proc(void);  /* @ 00403c2c */
undefined4 rmm_init_jpeg(void);  /* @ 00403c34 */
undefined4 save_mjpeg(undefined4 param_1,undefined4 param_2);  /* @ 00403c3c */
void printf(void);  /* @ 004047a0 */
void fread(void);  /* @ 004047c0 */
void feof(void);  /* @ 004047d0 */
void free(void);  /* @ 00404810 */
void memcpy(void);  /* @ 00404880 */
void usleep(void);  /* @ 004048b0 */
void memset(void);  /* @ 004048f0 */
void strcpy(void);  /* @ 00404970 */
void fwrite(void);  /* @ 004049e0 */
void puts(void);  /* @ 004049f0 */
void fopen(void);  /* @ 00404a00 */
void snprintf(void);  /* @ 00404a40 */
void pthread_create(void);  /* @ 00404a90 */
void fseek(void);  /* @ 00404ab0 */
void fclose(void);  /* @ 00404ac0 */
void sleep(void);  /* @ 00404b10 */
void signal(void);  /* @ 00404b20 */
void strcmp(void);  /* @ 00404bd0 */
void ftell(void);  /* @ 00404bf0 */

#endif /* XY_STREAM_H */
