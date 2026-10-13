/* librtstream — recovered function prototypes
 * Core Realtek AV engine: units/channels/pipes, single epoll loop
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LIBRTSTREAM_H
#define LIBRTSTREAM_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00018ff4 */
void _fini(void);  /* @ 000392c0 */
undefined4 __start_resample(int param_1);  /* @ 000400f0 */
void _fini(void);  /* @ 000492c0 */

/* ---- alloc ---- */
undefined4 alloc_af_ctrl(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 0001a180 */
undefined4 alloc_awb_ctrl(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0001ca64 */
undefined4 alloc_ae_ctrl(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0001e1a0 */
void alloc_h1_ctrl(void);  /* @ 0001f9a0 */
undefined4 __alloc_h1_buffer(int param_1);  /* @ 00024ae8 */
undefined4 alloc_dma_memory(int param_1,int param_2);  /* @ 000268e0 */
undefined4 alloc_af_ctrl(void);  /* @ 0002a180 */
undefined4 alloc_mjpeg_ctrl(void);  /* @ 0002a6a0 */
undefined4 alloc_awb_ctrl(void);  /* @ 0002ca64 */
undefined4 alloc_ae_ctrl(void);  /* @ 0002e1a0 */
undefined4 alloc_h1_ctrl(void);  /* @ 0002f9a0 */
undefined4 __alloc_h1_buffer(uint *param_1);  /* @ 00034ae8 */
undefined4 alloc_mjpeg_ctrl(undefined4 param_1);  /* @ 0003a6a0 */

/* ---- check ---- */
undefined4 __check_poll_fd(undefined *param_1,undefined4 *param_2);  /* @ 0001f6f4 */
undefined4 __check_loop_task(undefined *param_1,undefined *param_2);  /* @ 0001f7ac */
undefined4 check_v4l2_profile(undefined *param_1,undefined4 *param_2);  /* @ 00026b98 */
undefined4 __check_awb_initialized(undefined *param_1);  /* @ 0002c874 */
undefined4 __check_ae_initialized(undefined *param_1);  /* @ 0002dfb0 */
undefined4 __check_h1_initialized(undefined *param_1);  /* @ 0002f640 */
undefined4 __check_h1_profile(int *param_1);  /* @ 00031e1c */
undefined4 __check_mjpeg_initialized(undefined *param_1);  /* @ 00039ed0 */
undefined4 __check_resample_ready(int param_1);  /* @ 000402ec */
undefined4 __check_amixer_ready(int param_1);  /* @ 0004298c */

/* ---- cleanup ---- */
undefined4 __cleanup_aec(int param_1);  /* @ 0003c014 */
undefined4 __cleanup_resample(int param_1);  /* @ 000408cc */
undefined4 __cleanup_amixer(int param_1);  /* @ 000438f0 */

/* ---- convert ---- */
undefined4 convert_rotation_coordinate(int *param_1,int *param_2,int param_3,int param_4,uint param_5);  /* @ 00027d30 */
undefined4 convert_rotation_rect(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4);  /* @ 00027da0 */
undefined4 convert_rotation_grid(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4);  /* @ 00027f00 */

/* ---- free ---- */
void __free_task_lk(int param_1);  /* @ 0001a218 */
undefined4 __free_h1_buffer(undefined4 param_1,int param_2,int param_3);  /* @ 000256b0 */
undefined4 free_dma_memory(int param_1,undefined4 *param_2);  /* @ 00026a1c */
undefined4 free_v4l2_buffers(undefined4 param_1,int param_2,int param_3);  /* @ 00027a68 */
undefined4 __free_transfer_buffers(int param_1);  /* @ 000323f8 */
undefined4 __free_out_buffers(int param_1);  /* @ 0003252c */
undefined4 __free_outbuf_shared(int param_1);  /* @ 00033664 */
undefined4 __free_h1_buffer(undefined *param_1);  /* @ 000356b0 */

/* ---- get ---- */
undefined4 get_af_ctrl(void);  /* @ 0001a5cc */
undefined * __get_unit_id_str(int param_1);  /* @ 0001b140 */
void get_awb_ctrl(void);  /* @ 0001d390 */
undefined4 get_ae_ctrl(void);  /* @ 0001ec24 */
void get_h1_ctrl(void);  /* @ 0001ff68 */
undefined4 get_h1_roi(void);  /* @ 000206c8 */
void get_mjpeg_ctrl(void);  /* @ 0002a318 */
undefined4 get_af_ctrl(int param_1);  /* @ 0002a5cc */
undefined4 __get_isp_snr_crop(int param_1,undefined4 *param_2);  /* @ 0002b2bc */
undefined4 __get_awb_ctrl(int param_1);  /* @ 0002c3d0 */
undefined4 get_awb_ctrl(int param_1);  /* @ 0002d390 */
undefined4 get_ae_ctrl(int param_1);  /* @ 0002ec24 */
int get_h1_ctrl(int param_1);  /* @ 0002ff68 */
int get_h1_roi(int param_1);  /* @ 000306c8 */
undefined4 __get_h1_epoll_fd(undefined *param_1,int param_2);  /* @ 0003269c */
undefined4 __get_jpgenc_epoll_fd(undefined *param_1,int param_2);  /* @ 0003839c */
undefined4 get_mjpeg_ctrl(int param_1);  /* @ 0003a318 */
undefined4 __get_aec_profile(int param_1,undefined4 *param_2);  /* @ 0003aaf0 */
undefined4 __get_resample_profile(int param_1,undefined4 *param_2);  /* @ 0003fc80 */
undefined4 __get_resample_attr(int param_1,undefined *param_2);  /* @ 000407cc */
undefined4 __get_amixer_profile(int param_1,undefined4 *param_2);  /* @ 00042170 */

/* ---- h1 ---- */
undefined4 h1_ctrl_changed(void);  /* @ 000219a0 */
void h1_ctrl_changed(int param_1);  /* @ 000319a0 */
undefined4 h1_fd(undefined *param_1);  /* @ 00031cc4 */
undefined4 __h1_epoll_finish(undefined *param_1,undefined *param_2);  /* @ 00034784 */
void __h1_epoll_cb(int param_1);  /* @ 000348a8 */
void __h1_timeout(int param_1);  /* @ 000349ac */

/* ---- init ---- */
undefined4 __init_unit_manager(void);  /* @ 00019160 */
undefined4 __init_context(void);  /* @ 000191b0 */
undefined4 __init_aec(int param_1);  /* @ 0003bce4 */
undefined4 __init_resample(undefined *param_1);  /* @ 00040998 */
undefined4 __init_amixer(int param_1);  /* @ 00042410 */

/* ---- jpgenc ---- */
undefined4 __jpgenc_epoll_finish(undefined *param_1,undefined *param_2);  /* @ 00039754 */
void __jpgenc_epoll_cb(int param_1);  /* @ 00039878 */
void __jpgenc_timeout(int param_1);  /* @ 0003997c */

/* ---- query ---- */
undefined4 query_v4l2_frmival(undefined4 param_1,undefined4 param_2,int *param_3);  /* @ 00026f90 */
undefined4 query_v4l2_resolution(undefined4 param_1,undefined4 *param_2);  /* @ 000271cc */
undefined4 query_v4l2_format(undefined4 param_1,int *param_2);  /* @ 000273dc */
undefined4 query_v4l2_ability(undefined4 param_1,undefined4 *param_2);  /* @ 0002757c */
int query_isp_ability(undefined4 param_1,undefined4 *param_2);  /* @ 000275b0 */

/* ---- recycle ---- */
void __recycle_h1_buffer(int param_1,undefined *param_2);  /* @ 00031f30 */
void __recycle_h1_transbuf(int param_1,undefined *param_2);  /* @ 000320cc */
void __recycle_h1_buffer_and_free(undefined *param_1,undefined *param_2);  /* @ 00032268 */

/* ---- refresh ---- */
undefined4 refresh_af_statis(void);  /* @ 0001a738 */
undefined4 refresh_awb_statis(int param_1,int *param_2);  /* @ 0001d514 */
int refresh_ae_statis(undefined4 param_1,int param_2);  /* @ 0001eda8 */
undefined4 __refresh_af_statis(int param_1);  /* @ 00029e50 */
void refresh_af_statis(int param_1);  /* @ 0002a738 */
undefined4 __refresh_awb_statis(int param_1);  /* @ 0002c6c4 */
void refresh_awb_statis(int param_1);  /* @ 0002d514 */
undefined4 __refresh_ae_statis(int param_1);  /* @ 0002ddd0 */
void refresh_ae_statis(int param_1);  /* @ 0002eda8 */

/* ---- register ---- */
undefined4 __register_isp(void);  /* @ 00019264 */
undefined4 __register_h1encoder(void);  /* @ 0001936c */
undefined4 __register_osdenc(void);  /* @ 000194a0 */
undefined4 __register_mjpeg(void);  /* @ 000195c0 */
undefined4 __register_aec(void);  /* @ 000196dc */
undefined4 __register_encoder(void);  /* @ 0001981c */
undefined4 __register_resample(void);  /* @ 00019928 */
undefined4 __register_capture(void);  /* @ 00019a54 */
undefined4 __register_decoder(void);  /* @ 00019b58 */
undefined4 __register_playback(void);  /* @ 00019c4c */
undefined4 __register_amixer(void);  /* @ 00019d58 */

/* ---- rts ---- */
undefined4 rts_isp_get_attr(void);  /* @ 000192d0 */
void rts_isp_get_profile(undefined4 param_1,int param_2);  /* @ 0001933c */
undefined4 rts_isp_start(void);  /* @ 000193c8 */
void rts_isp_stop(undefined4 param_1,int param_2,int param_3);  /* @ 0001947c */
undefined4 rts_isp_check_ready(void);  /* @ 00019508 */
void rts_isp_run(void);  /* @ 00019568 */
void rts_isp_set_profile(void);  /* @ 000196d4 */
undefined4 rts_isp_query_ability(void);  /* @ 00019890 */
void rts_isp_init(void);  /* @ 00019a44 */
void rts_isp_cleanup(void);  /* @ 00019b50 */
undefined4 rts_isp_set_attr(void);  /* @ 00019bdc */
undefined4 rts_av_get_isp_daynight_statis(void);  /* @ 00019dd4 */
void rts_av_to_af_t(void);  /* @ 0001a034 */
undefined4 rts_av_query_isp_af(void);  /* @ 0001a850 */
undefined4 rts_av_release_isp_af(void);  /* @ 0001a928 */
undefined4 rts_av_get_isp_af(void);  /* @ 0001a954 */
undefined4 rts_av_set_isp_af(void);  /* @ 0001a9dc */
undefined4 rts_av_refresh_isp_af_statis(int *param_1,int param_2);  /* @ 0001aa64 */
undefined4 rts_av_register_unit(int *param_1);  /* @ 0001ad6c */
undefined4 rts_av_unregister_unit(undefined4 param_1);  /* @ 0001b024 */
undefined4 rts_av_get_unit_id(undefined *param_1);  /* @ 0001b0c4 */
undefined4 rts_av_get_isp_ctrl(undefined *param_1);  /* @ 0001b60c */
undefined4 rts_av_set_isp_ctrl(void);  /* @ 0001b724 */
undefined4 rts_av_get_unit_type(undefined4 *param_1);  /* @ 0001b980 */
undefined4 rts_av_get_input_limit(undefined *param_1);  /* @ 0001b9fc */
void rts_av_set_input_limit(undefined *param_1,undefined *param_2);  /* @ 0001ba8c */
undefined4 rts_av_check_ready(undefined *param_1);  /* @ 0001bb10 */
undefined4 rts_av_get_isp_fov_mode(void);  /* @ 0001bb24 */
undefined4 rts_av_get_unit_attr(int param_1);  /* @ 0001bbdc */
undefined4 rts_av_set_isp_fov_mode(int param_1);  /* @ 0001bbe0 */
undefined4 rts_av_set_unit_attr(undefined *param_1,int param_2);  /* @ 0001bc08 */
undefined4 rts_av_set_isp_dynamic_fps(void);  /* @ 0001bc9c */
undefined4 rts_av_get_unit_profile(undefined *param_1,int param_2);  /* @ 0001bd04 */
undefined4 rts_av_get_isp_dynamic_fps(undefined *param_1,int param_2);  /* @ 0001bd18 */
undefined4 rts_av_query_isp_ability(void);  /* @ 0001bd90 */
undefined4 rts_av_get_unit_input_profile(undefined *param_1,int param_2);  /* @ 0001bde4 */
undefined4 rts_av_pop_input_buffer_lk(undefined *param_1,int *param_2);  /* @ 0001bf2c */
undefined4 rts_av_release_isp_ability(void);  /* @ 0001bf64 */
undefined4 rts_av_get_isp_snr_crop(void);  /* @ 0001bf90 */
undefined4 rts_av_set_isp_snr_crop(void);  /* @ 0001c020 */
undefined4 rts_av_push_back_output_buffer_lk(undefined *param_1,undefined *param_2);  /* @ 0001c0e8 */
undefined4 rts_av_get_supported_snr_name(void);  /* @ 0001c234 */
void rts_av_get_supported_modules(void);  /* @ 0001c2ac */
undefined4 rts_av_exec_cmd(int param_1);  /* @ 0001c2c4 */
int rts_av_query_ability(int param_1,int *param_2);  /* @ 0001c2f0 */
void rts_av_release_ability(int *param_1);  /* @ 0001c398 */
undefined4 rts_av_get_unit_owner(int param_1);  /* @ 0001c550 */
undefined4 rts_av_check_unit_is_runnable(undefined *param_1);  /* @ 0001c568 */
undefined4 rts_av_run_unit(undefined *param_1);  /* @ 0001c6f8 */
undefined4 rts_av_to_awb_t(int param_1);  /* @ 0001c928 */
void rts_av_update_unit_profile(undefined *param_1,undefined *param_2);  /* @ 0001d1e0 */
void rts_av_set_unit_profile(undefined4 param_1,undefined4 param_2);  /* @ 0001d2bc */
void rts_av_set_unit_owner(int param_1,int param_2);  /* @ 0001d2dc */
void rts_av_set_unit_rotation(int param_1,uint param_2);  /* @ 0001d4c0 */
undefined4 rts_av_get_unit_rotation(int param_1);  /* @ 0001d4e0 */
undefined4 rts_av_register_attribute(undefined *param_1,undefined4 *param_2);  /* @ 0001d4f8 */
undefined4 * rts_av_find_attribute(undefined *param_1,int param_2);  /* @ 0001d5dc */
int rts_av_query_isp_awb(void);  /* @ 0001d62c */
uint rts_av_unit_plug(undefined *param_1,int param_2,int param_3);  /* @ 0001d6f0 */
uint rts_av_release_isp_awb(int param_1,int param_2,int param_3);  /* @ 0001d704 */
void rts_av_get_isp_awb(void);  /* @ 0001d730 */
uint rts_av_set_isp_awb(int param_1,undefined4 param_2,int param_3);  /* @ 0001d7b8 */
undefined4 rts_av_refresh_isp_awb_statis(void);  /* @ 0001d840 */
undefined4 rts_av_get_isp_awb_ct_gain(void);  /* @ 0001d8c8 */
void rts_av_unit_unplug(undefined *param_1,int param_2);  /* @ 0001d9ec */
undefined4 rts_av_check_and_run_unit(undefined *param_1);  /* @ 0001dc30 */
undefined4 rts_av_trigger_unit(undefined *param_1);  /* @ 0001dda8 */
undefined4 rts_av_check_is_unit_src_recursive(int param_1,int param_2);  /* @ 0001de6c */
int rts_av_set_unit_callback(undefined *param_1,undefined *param_2,int param_3);  /* @ 0001df58 */
void rts_av_set_unit_priv(undefined *param_1,undefined *param_2);  /* @ 0001e064 */
undefined4 rts_av_get_unit_priv(undefined *param_1);  /* @ 0001e0e0 */
undefined4 rts_av_get_unit_status(undefined *param_1);  /* @ 0001e15c */
void rts_av_enable_unit(undefined *param_1);  /* @ 0001e1d8 */
undefined4 rts_av_disable_unit(undefined *param_1);  /* @ 0001e2a0 */
undefined4 rts_av_delete_unit(int param_1);  /* @ 0001e348 */
undefined4 rts_av_get_unit_input_count(undefined *param_1);  /* @ 0001e6bc */
undefined4 rts_av_get_unit_output_count(undefined *param_1);  /* @ 0001e778 */
void rts_av_get_unit_input(undefined *param_1);  /* @ 0001e834 */
void rts_av_get_unit_output(undefined *param_1);  /* @ 0001e8c0 */
int rts_av_find_src_by_id(int param_1,int param_2);  /* @ 0001e94c */
bool rts_av_is_changeable(undefined *param_1);  /* @ 0001ea38 */
undefined4 rts_av_is_unit_idle(undefined *param_1);  /* @ 0001ead8 */
undefined4 rts_av_set_unit_poll_fd(undefined *param_1,undefined *param_2,uint param_3);  /* @ 0001ec04 */
undefined4 rts_av_set_unit_event_trigger(undefined *param_1,undefined *param_2);  /* @ 0001ecb4 */
int rts_av_new_unit(undefined4 param_1,int param_2);  /* @ 0001ed44 */
undefined4 rts_av_query_isp_ae(undefined4 param_1,int param_2);  /* @ 0001eec0 */
undefined4 rts_av_release_isp_ae(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0001ef98 */
int rts_av_get_isp_ae(void);  /* @ 0001efc4 */
undefined4 rts_av_set_isp_ae(void);  /* @ 0001f04c */
void rts_av_refresh_isp_ae_statis(void);  /* @ 0001f0d4 */
undefined4 rts_av_get_unit_event_trigger(undefined *param_1);  /* @ 0001f0e8 */
undefined4 rts_av_unit_keep_active(undefined *param_1);  /* @ 0001f164 */
undefined4 rts_av_keep_unit_active(undefined *param_1);  /* @ 0001f220 */
undefined4 rts_av_unit_send(int param_1);  /* @ 0001f318 */
void rts_av_get_unit_loop(undefined *param_1);  /* @ 0001f42c */
undefined4 rts_av_get_unit_buffer_obj(undefined *param_1);  /* @ 0001f4b4 */
int * rts_av_loop_open(int param_1);  /* @ 0001f860 */
void rts_av_loop_close(int *param_1);  /* @ 0001f9a8 */
undefined4 rts_av_loop_end(int *param_1);  /* @ 0001fb9c */
undefined4 rts_av_add_poll_fd(int *param_1,int *param_2);  /* @ 0001fc94 */
undefined4 rts_av_del_poll_fd(undefined *param_1);  /* @ 0001ff78 */
undefined4 rts_av_mod_poll_fd(int *param_1);  /* @ 000200f8 */
undefined4 rts_av_add_task(int param_1,undefined *param_2);  /* @ 00020378 */
undefined4 rts_av_del_task(undefined *param_1);  /* @ 000204ac */
undefined4 rts_av_loop_run_lk(int *param_1);  /* @ 0002057c */
undefined4 rts_av_add_poll_fd_lk(undefined4 param_1,undefined4 param_2);  /* @ 000208f4 */
undefined4 rts_av_del_poll_fd_lk(undefined4 param_1);  /* @ 0002096c */
undefined4 rts_av_mod_poll_fd_lk(undefined4 param_1);  /* @ 000209dc */
undefined4 rts_av_add_task_lk(undefined4 param_1,undefined4 param_2);  /* @ 00020a4c */
undefined4 rts_av_del_task_lk(undefined4 param_1);  /* @ 00020ac4 */
void rts_av_get_cur_time(void);  /* @ 00020b40 */
longlong rts_av_get_time(int *param_1);  /* @ 00020b8c */
undefined4 rts_av_check_valid_stepwise_value(uint param_1,uint param_2,uint param_3,uint param_4);  /* @ 00020c00 */
uint rts_av_make_valid_stepwise_value(uint param_1,uint param_2,uint param_3,uint param_4);  /* @ 00020c40 */
uint rts_av_get_h264_mediainfo(uint param_1,uint param_2,uint param_3,uint param_4);  /* @ 00020c44 */
int rts_av_get_reverse_rotation(int param_1);  /* @ 00020c8c */
int rts_av_overlay_rotation(int param_1,int param_2);  /* @ 00020cac */
undefined4 rts_av_get_h264_profile(undefined4 param_1,int param_2);  /* @ 00020ce8 */
undefined4 rts_av_rotate_coordinate(int param_1,int param_2,int param_3,int *param_4,int *param_5);  /* @ 00020d5c */
undefined4 rts_av_cmp_profile(uint *param_1,uint *param_2);  /* @ 00020dbc */
void rts_av_obj_init(undefined *param_1,undefined *param_2);  /* @ 00020e60 */
void rts_av_set_h264_ctrl(int param_1,int param_2);  /* @ 00020e68 */
void rts_av_get_h264_ctrl(void);  /* @ 00020ef0 */
void rts_av_obj_release(int *param_1);  /* @ 00020f14 */
void rts_av_request_h264_key_frame(void);  /* @ 00020f78 */
undefined4 rts_av_obj_set_name(int param_1);  /* @ 00020f8c */
undefined4 rts_av_query_h264_roi(void);  /* @ 00020fc0 */
undefined4 rts_av_release_h264_roi(undefined4 param_1);  /* @ 0002106c */
undefined4 rts_av_set_h264_roi(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00021074 */
int rts_av_obj_get_name(int param_1);  /* @ 0002109c */
void rts_av_get_h264_roi(undefined4 param_1,int param_2,undefined4 param_3);  /* @ 000210fc */
undefined * rts_av_obj_get(undefined *param_1);  /* @ 0002117c */
int rts_av_release_h264_roi_map(int param_1);  /* @ 00021184 */
int rts_av_set_h264_roi_map(int param_1);  /* @ 0002118c */
void rts_av_obj_put(undefined *param_1);  /* @ 00021290 */
void rts_av_query_h264_roi_map(void);  /* @ 00021508 */
undefined4 rts_av_get_api_abi(void);  /* @ 00021568 */
undefined4 rts_av_init(void);  /* @ 00021580 */
undefined4 rts_av_get_h264_roi_map(void);  /* @ 000215ac */
undefined4 rts_av_release(void);  /* @ 0002163c */
uint rts_h1encoder_get_profile(void);  /* @ 0002187c */
void rts_h1encoder_get_attr(void);  /* @ 00021a78 */
void rts_h1encoder_set_attr(void);  /* @ 00021b00 */
undefined4 rts_av_wait(undefined *param_1);  /* @ 00021b24 */
undefined4 rts_av_post(undefined *param_1);  /* @ 00021bfc */
undefined4 rts_av_create_chn(undefined4 param_1,undefined4 param_2);  /* @ 00021c9c */
void rts_av_create_isp_chn(int param_1);  /* @ 00021d14 */
void rts_av_create_h264_chn(int param_1);  /* @ 00021da4 */
void rts_av_create_mjpeg_chn(int param_1);  /* @ 00021e34 */
void rts_av_create_osd_chn(void);  /* @ 00021ec4 */
void rts_av_create_audio_playback_chn(int param_1);  /* @ 00021efc */
void rts_av_create_audio_capture_chn(int param_1);  /* @ 00021f8c */
void rts_av_create_audio_encode_chn(undefined4 param_1,undefined4 param_2);  /* @ 0002201c */
void rts_av_create_audio_decode_chn(void);  /* @ 0002205c */
void rts_av_create_audio_resample_chn(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00022080 */
void rts_av_create_audio_mixer_chn(void);  /* @ 000220c4 */
void rts_av_create_audio_aec_chn(void);  /* @ 000220e8 */
undefined4 rts_av_destroy_chn(undefined4 param_1);  /* @ 0002210c */
undefined4 rts_av_get_id(undefined4 param_1);  /* @ 00022194 */
undefined4 rts_av_get_type(undefined4 param_1);  /* @ 00022228 */
undefined4 rts_av_enable_chn(undefined4 param_1);  /* @ 000222bc */
undefined4 rts_av_disable_chn(undefined4 param_1);  /* @ 00022384 */
undefined4 rts_av_get_chn_status(undefined4 param_1);  /* @ 00022450 */
undefined4 rts_av_bind(undefined4 param_1,undefined4 param_2);  /* @ 00022504 */
undefined4 rts_av_unbind(undefined4 param_1,undefined4 param_2);  /* @ 00022618 */
undefined4 rts_av_get_src_count(undefined4 param_1);  /* @ 000226e4 */
undefined4 rts_av_get_dst_count(undefined4 param_1);  /* @ 00022778 */
undefined4 rts_av_get_bind_by_src(undefined4 param_1,undefined4 param_2);  /* @ 0002280c */
void rts_h1encoder_start(void);  /* @ 000228e8 */
undefined4 rts_av_get_bind_by_dst(undefined4 param_1,undefined4 param_2);  /* @ 00022904 */
undefined4 rts_av_start_recv(undefined4 param_1);  /* @ 000229fc */
undefined4 rts_av_stop_recv(undefined4 param_1);  /* @ 00022ad4 */
undefined4 rts_av_start_send(undefined4 param_1);  /* @ 00022b74 */
undefined4 rts_av_stop_send(undefined4 param_1);  /* @ 00022c4c */
undefined4 rts_av_poll(undefined4 param_1);  /* @ 00022cec */
undefined4 rts_av_recv(int *param_1,int *param_2);  /* @ 00022d90 */
undefined4 rts_av_send(undefined *param_1,undefined *param_2);  /* @ 00022e9c */
undefined4 rts_av_set_callback(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00022f94 */
undefined4 rts_av_get_profile(undefined *param_1,undefined *param_2);  /* @ 00023038 */
undefined4 rts_h1encoder_stop(undefined4 param_1,undefined4 param_2);  /* @ 000230ac */
undefined4 rts_av_set_profile(undefined *param_1,undefined *param_2);  /* @ 00023120 */
bool rts_av_is_idle(undefined4 param_1);  /* @ 00023218 */
undefined4 rts_av_list_chns(void);  /* @ 000232bc */
undefined4 rts_h1encoder_check_ready(void);  /* @ 000232e4 */
undefined4 rts_h1encoder_post_connect(undefined4 param_1,int param_2);  /* @ 00023418 */
void rts_av_get_isp_attr(undefined4 param_1,undefined4 param_2);  /* @ 0002351c */
void rts_av_get_h264_attr(undefined4 param_1,undefined4 param_2);  /* @ 00023544 */
void rts_av_get_mjpeg_attr(undefined4 param_1,undefined4 param_2);  /* @ 0002356c */
void rts_av_get_audio_capture_attr(undefined4 param_1,int param_2);  /* @ 00023594 */
void rts_av_get_audio_playback_attr(undefined4 param_1,int param_2);  /* @ 00023628 */
undefined4 rts_av_get_audio_encode_attr(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);  /* @ 000236bc */
undefined4 rts_av_get_audio_resample_attr (undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);  /* @ 00023754 */
undefined4 rts_h1encoder_init(void);  /* @ 00023920 */
void rts_av_set_audio_encode_attr(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00023984 */
void rts_av_set_audio_resample_attr (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 000239c8 */
undefined4 rts_av_set_audio_mixer_droppable(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00023a10 */
undefined4 rts_av_find_unit_by_chnno(undefined4 param_1);  /* @ 00023b5c */
undefined4 rts_h1encoder_cleanup(undefined4 param_1);  /* @ 00023b84 */
undefined4 rts_av_check_chn_id(undefined4 param_1,uint param_2);  /* @ 00023bd0 */
undefined4 rts_h1encoder_set_profile(void);  /* @ 00023c10 */
undefined4 rts_av_do_cmd(undefined *param_1,undefined *param_2,int param_3);  /* @ 00023cdc */
undefined4 rts_h1encoder_run(void);  /* @ 00023df4 */
undefined4 * rts_av_new_stream(void);  /* @ 000241dc */
undefined4 rts_av_stream_add_tail(int param_1,int param_2);  /* @ 00024344 */
undefined4 rts_av_stream_del(int param_1,int param_2);  /* @ 000243b4 */
undefined4 rts_av_apply(int *param_1);  /* @ 000244dc */
undefined4 rts_av_cancel(int *param_1);  /* @ 00024580 */
undefined4 rts_av_delete_stream(int *param_1);  /* @ 00024688 */
undefined4 rts_h1encoder_pre_disconnect(int *param_1);  /* @ 00024690 */
undefined4 rts_av_connect(undefined *param_1,int param_2,int param_3);  /* @ 000248cc */
undefined4 rts_av_disconnect(int param_1,int param_2,int param_3);  /* @ 00024a8c */
undefined4 rts_av_get_stream_status(undefined4 *param_1);  /* @ 00024be4 */
undefined4 rts_av_stream_get_handler(int param_1,undefined4 param_2);  /* @ 00024bfc */
void rts_av_stream_put_handler(undefined *param_1);  /* @ 00024dac */
undefined4 rts_av_trigger_stream(undefined *param_1,undefined *param_2);  /* @ 00024e8c */
undefined4 rts_av_get_stream_loop(undefined *param_1);  /* @ 00024f44 */
undefined * rts_av_get_stream_buffer_obj(undefined *param_1);  /* @ 00024fc0 */
undefined4 rts_av_get_pipe_src(undefined4 *param_1);  /* @ 00025040 */
undefined4 rts_av_get_pipe_dst(undefined *param_1);  /* @ 000250bc */
undefined4 rts_av_pipe_push_back(undefined *param_1,undefined *param_2);  /* @ 00025138 */
undefined4 rts_av_pipe_pop(undefined *param_1);  /* @ 00025360 */
undefined4 rts_av_pipe_poll(undefined *param_1);  /* @ 00025414 */
undefined4 rts_av_pipe_flush(undefined *param_1);  /* @ 000254ac */
undefined4 rts_av_get_tr_profile(int param_1,int param_2);  /* @ 00025580 */
undefined4 rts_h1encoder_alloc_buffer(int param_1,int param_2);  /* @ 0002559c */
undefined4 rts_av_set_tr_profile(undefined *param_1,int param_2);  /* @ 00025664 */
void rts_h1encoder_free_buffer(undefined4 param_1,int param_2);  /* @ 000257c8 */
void rts_av_set_pipe_id(undefined *param_1,undefined *param_2);  /* @ 0002582c */
void rts_h1encoder_get_h264_info(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00025874 */
undefined4 rts_av_get_pipe_id(undefined *param_1);  /* @ 000258a8 */
undefined4 rts_h1encoder_exec_cmd(int param_1,int param_2,undefined4 param_3,int param_4);  /* @ 0002590c */
void rts_av_set_pipe_flags(undefined *param_1,undefined *param_2);  /* @ 00025924 */
void rts_av_clr_pipe_flags(undefined *param_1,uint param_2);  /* @ 000259a8 */
undefined4 rts_av_get_pipe_flags(undefined *param_1);  /* @ 00025a2c */
void rts_av_pipe_clear(undefined *param_1);  /* @ 00025aa8 */
void rts_av_delete_pipe(int *param_1);  /* @ 00025b64 */
void rts_av_set_h264_color_conversion(int param_1);  /* @ 00025bbc */
void rts_av_osdenc_check_ready(void);  /* @ 00025c10 */
int * rts_av_new_pipe(int param_1,int param_2);  /* @ 00025c68 */
int * rts_av_osdenc_init(int param_1,int param_2);  /* @ 00025c78 */
void rts_av_osdenc_cleanup(void);  /* @ 00025e00 */
void rts_av_osdenc_start(void);  /* @ 00025e8c */
undefined4 rts_av_delete_buffer(undefined4 *param_1);  /* @ 00025ec0 */
undefined4 rts_av_uninit_buffer(undefined4 *param_1);  /* @ 00025fdc */
int rts_av_get_buffer(int param_1);  /* @ 00026030 */
undefined4 rts_av_put_buffer(int param_1);  /* @ 0002609c */
undefined4 rts_av_get_buffer_refs(int param_1);  /* @ 00026150 */
undefined4 rts_av_set_buffer_offset(int *param_1,uint param_2);  /* @ 00026168 */
int rts_av_new_buffer(int param_1);  /* @ 000261d8 */
int rts_av_osdenc_stop(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00026210 */
undefined4 rts_av_init_buffer(int param_1,int param_2,undefined4 param_3,undefined4 param_4);  /* @ 000262f0 */
undefined4 rts_av_set_buffer_callback(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00026374 */
undefined4 rts_av_set_buffer_source(undefined *param_1,undefined *param_2);  /* @ 000263a8 */
undefined4 rts_av_get_buffer_source(undefined *param_1);  /* @ 00026428 */
void rts_av_set_buffer_ts (undefined *param_1,undefined4 param_2,undefined4 param_3,undefined *param_4);  /* @ 000264a4 */
undefined8 rts_av_get_buffer_ts(undefined *param_1);  /* @ 00026524 */
undefined4 rts_av_set_buffer_profile(undefined *param_1,int param_2);  /* @ 000265a4 */
undefined4 rts_av_osdenc_get_profile(int param_1);  /* @ 00026640 */
undefined4 rts_av_get_buffer_profile(int param_1,int param_2);  /* @ 00026680 */
undefined4 rts_av_osdenc_exec_cmd(undefined4 param_1);  /* @ 000266d4 */
void rts_av_create_auto_recycle_buffer(int *param_1,int param_2);  /* @ 00026764 */
void rts_av_osdenc_run(void);  /* @ 000267e8 */
void rts_av_set_buffer_observer(undefined *param_1,undefined *param_2);  /* @ 00026864 */
undefined4 rts_av_osdenc_set_profile(void);  /* @ 00026ab8 */
undefined4 rts_av_sync_dma_device(int param_1);  /* @ 00026ad8 */
undefined4 rts_av_sync_dma_cpu(int param_1);  /* @ 00026b38 */
void rts_av_to_osdenc_t(void);  /* @ 00026e18 */
void rts_av_to_osdenc_attr(void);  /* @ 00026f08 */
void rts_av_set_osdenc_attr_owner(void);  /* @ 00026f3c */
undefined4 rts_av_alloc_osdenc_attr(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00027058 */
undefined4 rts_av_set_osdenc_fps(undefined4 param_1,undefined4 *param_2);  /* @ 000271d8 */
undefined4 rts_av_update_osdenc_flick_info(void);  /* @ 00027304 */
undefined4 rts_av_get_osdenc_attr_single(void);  /* @ 00027484 */
void rts_av_set_osdenc_attr_single(void);  /* @ 00027698 */
undefined4 rts_av_query_osd2(void);  /* @ 000278c8 */
undefined4 rts_av_set_osd2_single(void);  /* @ 0002796c */
void rts_av_get_osd2_single(undefined4 param_1,int param_2,int param_3);  /* @ 000279f4 */
undefined4 rts_av_set_osd2(undefined4 param_1,int param_2,int param_3);  /* @ 00027a7c */
void rts_av_get_osd2(void);  /* @ 00027b6c */
int rts_av_resume_osd2_single(void);  /* @ 00027c5c */
undefined4 rts_av_pause_osd2_single (undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);  /* @ 00027d7c */
undefined4 rts_av_set_osd2_color_table(void);  /* @ 00027e9c */
undefined4 rts_video_alloc_grid_bitmap(int *param_1,int param_2);  /* @ 00028000 */
undefined4 rts_av_get_osd2_color_table(int *param_1,int param_2);  /* @ 0002800c */
void rts_video_free_grid_bitmap(int *param_1);  /* @ 00028108 */
void rts_av_release_osd2(int *param_1,int param_2,undefined4 param_3,int param_4);  /* @ 0002816c */
void rts_video_cvrt_grid_from_isp(undefined4 *param_1,undefined4 *param_2);  /* @ 000281a8 */
void rts_jpgencoder_post_connect(undefined4 param_1,int param_2,int param_3);  /* @ 000281dc */
void rts_video_cvrt_grid_to_isp(undefined4 *param_1,undefined4 *param_2);  /* @ 000282a0 */
void rts_video_cvrt_rect_from_isp(undefined4 *param_1,undefined4 *param_2);  /* @ 00028398 */
void rts_video_cvrt_rect_to_isp(undefined4 *param_1,undefined4 *param_2);  /* @ 00028480 */
undefined4 rts_video_cvrt_blk_type_from_isp(int param_1);  /* @ 00028568 */
undefined4 rts_video_cvrt_blk_type_to_isp(int param_1);  /* @ 00028590 */
undefined4 rts_av_rotate_rect(int param_1,int param_2,int param_3,uint *param_4);  /* @ 000285b8 */
undefined4 rts_av_rotate_bitmap(int param_1,uint param_2,int param_3,int param_4,int param_5);  /* @ 00028658 */
void rts_jpgencoder_start(undefined4 param_1,int param_2,undefined4 param_3,int param_4);  /* @ 000287d8 */
undefined4 rts_av_rotate_grid(uint param_1,uint param_2,int param_3,uint *param_4);  /* @ 00028958 */
undefined4 rts_av_check_rect(uint param_1,uint param_2,uint *param_3);  /* @ 00028ad8 */
undefined4 rts_set_isp_bitmap(int param_1,int param_2,int param_3);  /* @ 00028b90 */
undefined4 rts_clear_isp_bitmap(int param_1,int param_2,int param_3);  /* @ 00028bf4 */
undefined4 rts_get_isp_bitmap(int param_1,int param_2,int param_3);  /* @ 00028c58 */
undefined4 rts_jpgencoder_check_ready(void);  /* @ 00028c7c */
undefined4 rts_set_all_isp_bitmap(int param_1,undefined4 param_2);  /* @ 00028ca4 */
undefined4 rts_clear_all_isp_bitmap(int param_1,undefined4 param_2);  /* @ 00028cec */
undefined4 rts_jpgencoder_run(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00028cf4 */
undefined4 rts_av_cvrt_point_res(undefined *param_1,int param_2,int param_3);  /* @ 00028d34 */
void rts_jpgencoder_set_attr(undefined4 param_1,int param_2);  /* @ 00029118 */
void rts_jpgencoder_get_attr(void);  /* @ 000291e0 */
undefined4 rts_isp_get_attr(undefined4 param_1,undefined4 *param_2);  /* @ 000292d0 */
undefined4 rts_isp_get_profile(undefined4 param_1,undefined4 *param_2);  /* @ 0002933c */
undefined4 rts_jpgencoder_set_profile(void);  /* @ 00029374 */
undefined4 rts_isp_start(void);  /* @ 000293c8 */
undefined4 rts_isp_stop(void);  /* @ 0002947c */
undefined4 rts_jpgencoder_pre_disconnect(void);  /* @ 000294e8 */
undefined4 rts_isp_check_ready(void);  /* @ 00029508 */
undefined4 rts_isp_run(undefined4 param_1);  /* @ 00029568 */
undefined4 rts_jpgencoder_stop(void);  /* @ 000295a8 */
void rts_jpgencoder_get_profile(void);  /* @ 00029674 */
undefined4 rts_isp_set_profile(undefined4 param_1,undefined4 *param_2);  /* @ 000296d4 */
undefined4 rts_isp_query_ability(int param_1,int param_2);  /* @ 00029890 */
undefined4 rts_isp_init(int param_1);  /* @ 00029a44 */
undefined4 rts_jpgencoder_exec_cmd(void);  /* @ 00029ab8 */
undefined4 rts_isp_cleanup(int param_1);  /* @ 00029b50 */
undefined4 rts_isp_set_attr(int param_1,int *param_2);  /* @ 00029bdc */
undefined4 rts_jpgencoder_init(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00029c3c */
undefined4 rts_av_get_isp_daynight_statis(void);  /* @ 00029dd4 */
void rts_jpgencoder_cleanup(void);  /* @ 00029e44 */
int rts_av_to_af_t(int param_1);  /* @ 0002a034 */
void rts_av_query_mjpeg_ctrl(void);  /* @ 0002a7fc */
void rts_av_release_mjpeg_ctrl(void);  /* @ 0002a844 */
undefined4 rts_av_get_mjpeg_ctrl(int *param_1);  /* @ 0002a84c */
undefined4 rts_av_query_isp_af(int *param_1);  /* @ 0002a850 */
undefined4 rts_av_set_mjpeg_ctrl(void);  /* @ 0002a8d4 */
void rts_av_release_isp_af(int param_1);  /* @ 0002a928 */
void rts_av_get_isp_af(undefined *param_1);  /* @ 0002a954 */
void rts_av_set_isp_af(undefined *param_1);  /* @ 0002a9dc */
void rts_av_refresh_isp_af_statis(undefined *param_1);  /* @ 0002aa64 */
undefined4 rts_av_get_isp_ctrl(uint param_1,uint param_2);  /* @ 0002b60c */
undefined4 rts_av_set_isp_ctrl(uint param_1,int param_2);  /* @ 0002b724 */
undefined4 rts_av_get_isp_fov_mode(undefined4 param_1,undefined4 param_2);  /* @ 0002bb24 */
undefined4 rts_av_set_isp_fov_mode(undefined4 param_1,undefined4 param_2);  /* @ 0002bbe0 */
undefined4 rts_av_set_isp_dynamic_fps(undefined1 param_1);  /* @ 0002bc9c */
undefined4 rts_av_get_isp_dynamic_fps(void);  /* @ 0002bd18 */
undefined4 rts_av_query_isp_ability(undefined *param_1,undefined4 *param_2);  /* @ 0002bd90 */
void rts_av_release_isp_ability(int param_1);  /* @ 0002bf64 */
undefined4 rts_av_get_isp_snr_crop(int param_1);  /* @ 0002bf90 */
undefined4 rts_av_set_isp_snr_crop(int *param_1);  /* @ 0002c020 */
undefined4 rts_av_query_aec_ctrl(void);  /* @ 0002c0e8 */
undefined4 rts_av_set_aec_ctrl(void);  /* @ 0002c18c */
undefined4 rts_av_get_supported_snr_name(void);  /* @ 0002c234 */
undefined * rts_av_get_supported_modules(void);  /* @ 0002c2ac */
int rts_av_release_aec_ctrl(undefined4 param_1);  /* @ 0002c2e8 */
int rts_av_to_awb_t(int param_1);  /* @ 0002c928 */
undefined4 rts_audio_init(void);  /* @ 0002ca80 */
void rts_audio_cleanup(void);  /* @ 0002cb34 */
void rts_audio_start(void);  /* @ 0002cbcc */
undefined4 rts_audio_stop(void);  /* @ 0002ce70 */
undefined4 rts_audio_check_ready(undefined4 param_1,int param_2);  /* @ 0002cf14 */
undefined4 rts_audio_pop_idle(void);  /* @ 0002d014 */
undefined4 rts_audio_get_attr(void);  /* @ 0002d0b4 */
undefined4 rts_audio_set_attr(void);  /* @ 0002d13c */
undefined4 rts_audio_get_profile(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0002d448 */
void rts_audio_set_profile(undefined4 param_1,int param_2);  /* @ 0002d4e0 */
void rts_audio_xrun(void);  /* @ 0002d5d8 */
undefined4 rts_av_query_isp_awb(int *param_1);  /* @ 0002d62c */
void rts_av_release_isp_awb(int param_1);  /* @ 0002d704 */
void rts_av_get_isp_awb(undefined *param_1);  /* @ 0002d730 */
void rts_av_set_isp_awb(undefined *param_1);  /* @ 0002d7b8 */
void rts_av_refresh_isp_awb_statis(undefined *param_1);  /* @ 0002d840 */
int rts_av_get_isp_awb_ct_gain(byte param_1,ushort *param_2);  /* @ 0002d8c8 */
int rts_audio_calc_block_align(byte param_1,ushort *param_2);  /* @ 0002d8e0 */
int rts_audio_calc_ts_delta(undefined4 param_1,ushort *param_2);  /* @ 0002d8f0 */
int rts_audio_calc_volume(void);  /* @ 0002d924 */
undefined4 rts_audio_is_end(void);  /* @ 0002da80 */
void rts_audio_default_profile(void);  /* @ 0002db2c */
undefined4 rts_fifo_free(void);  /* @ 0002db60 */
undefined4 rts_fifo_reset(void);  /* @ 0002dbc8 */
undefined4 rts_fifo_alloc(void);  /* @ 0002dbe0 */
void rts_fifo_size(undefined4 param_1,int param_2);  /* @ 0002dc9c */
void rts_fifo_space(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0002dcac */
undefined4 rts_fifo_drain(void);  /* @ 0002dcf0 */
void rts_fifo_generic_write(void);  /* @ 0002dd84 */
void rts_fifo_generic_read(undefined *param_1);  /* @ 0002de88 */
void rts_fifo_realloc2(int param_1);  /* @ 0002df48 */
undefined4 rts_audio_encode_init(void);  /* @ 0002e050 */
void rts_audio_encode_stop(int param_1);  /* @ 0002e0e4 */
undefined4 rts_audio_encode_cleanup(void);  /* @ 0002e1a4 */
undefined4 rts_audio_encode_start(void);  /* @ 0002e238 */
undefined4 rts_audio_encode_check_ready(void);  /* @ 0002e484 */
undefined4 rts_audio_encode_set_attr(undefined4 param_1);  /* @ 0002e59c */
undefined4 rts_audio_encode_run(void);  /* @ 0002e8d0 */
void rts_audio_encode_get_profile(undefined4 param_1,int param_2);  /* @ 0002edd8 */
undefined4 rts_av_query_isp_ae(int *param_1);  /* @ 0002eec0 */
undefined4 rts_audio_encode_set_profile(void);  /* @ 0002ef34 */
void rts_av_release_isp_ae(int param_1);  /* @ 0002ef98 */
void rts_av_get_isp_ae(undefined *param_1);  /* @ 0002efc4 */
void rts_av_set_isp_ae(undefined *param_1);  /* @ 0002f04c */
void rts_av_refresh_isp_ae_statis(undefined *param_1);  /* @ 0002f0d4 */
void rts_audio_encode_query_ability(int param_1);  /* @ 0002f0e4 */
undefined4 rts_audio_encode_get_attr(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0002f434 */
undefined4 rts_av_query_audio_encode_ability(void);  /* @ 0002f530 */
undefined1 rts_av_release_audio_encode_ability(void);  /* @ 0002f708 */
void rts_audio_fifo_free(undefined4 param_1,int param_2,int param_3);  /* @ 0002f7c8 */
void rts_audio_fifo_alloc(void);  /* @ 0002f830 */
undefined4 rts_audio_fifo_read(undefined4 param_1);  /* @ 0002f9d0 */
undefined4 rts_audio_fifo_drain(undefined4 param_1,undefined4 param_2);  /* @ 0002fa78 */
undefined4 rts_audio_fifo_reset(undefined4 param_1,int param_2);  /* @ 0002fb04 */
undefined4 rts_audio_fifo_size(void);  /* @ 0002fb48 */
undefined4 rts_audio_fifo_space(void);  /* @ 0002fb50 */
undefined4 rts_audio_fifo_write(void);  /* @ 0002fb60 */
undefined4 rts_audio_tfilter_new(void);  /* @ 00030a60 */
undefined4 rts_audio_tfilter_free(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00030b50 */
undefined4 rts_audio_tfilter_reset(void);  /* @ 00030b78 */
undefined4 rts_audio_tfilter_update(undefined4 param_1,undefined4 param_2);  /* @ 00030b80 */
void rts_audio_capture_run(void);  /* @ 00030c20 */
void rts_av_get_h264_mediainfo(undefined4 param_1,int param_2);  /* @ 00030c44 */
undefined4 rts_av_get_h264_profile(undefined4 param_1,undefined4 *param_2);  /* @ 00030ce8 */
void rts_av_query_h264_ctrl(undefined4 param_1,int param_2);  /* @ 00030dbc */
void rts_av_release_h264_ctrl(void);  /* @ 00030e60 */
void rts_av_set_h264_ctrl(undefined *param_1);  /* @ 00030e68 */
void rts_audio_capture_init(void);  /* @ 00030ee0 */
void rts_av_get_h264_ctrl(undefined *param_1);  /* @ 00030ef0 */
void rts_av_request_h264_key_frame(undefined4 param_1);  /* @ 00030f78 */
void rts_audio_decode_get_profile (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00030f80 */
void rts_av_query_h264_roi(undefined4 param_1,int param_2);  /* @ 00030fc0 */
void rts_av_release_h264_roi(void);  /* @ 0003106c */
void rts_av_set_h264_roi(undefined *param_1);  /* @ 00031074 */
void rts_audio_decode_start(int param_1);  /* @ 00031088 */
void rts_av_get_h264_roi(undefined *param_1);  /* @ 000310fc */
void rts_av_release_h264_roi_map(void);  /* @ 00031184 */
undefined4 rts_av_set_h264_roi_map(int *param_1);  /* @ 0003118c */
undefined4 rts_audio_decode_run(undefined4 param_1,int param_2,int param_3);  /* @ 0003123c */
void rts_av_query_h264_roi_map(undefined4 param_1,int param_2);  /* @ 00031508 */
void rts_audio_decode_set_profile(undefined4 param_1,undefined4 param_2);  /* @ 00031580 */
undefined4 rts_av_get_h264_roi_map(undefined *param_1,undefined4 *param_2);  /* @ 000315ac */
void rts_audio_decode_stop(void);  /* @ 000317c4 */
int rts_audio_decode_init(void);  /* @ 00031840 */
undefined4 rts_h1encoder_get_profile(undefined4 param_1,undefined4 *param_2);  /* @ 0003187c */
undefined4 rts_audio_decode_check_ready(void);  /* @ 00031900 */
void rts_audio_decode_cleanup(void);  /* @ 000319d0 */
undefined4 rts_h1encoder_get_attr(int param_1,int param_2);  /* @ 00031a78 */
undefined4 rts_h1encoder_set_attr(int param_1,uint *param_2);  /* @ 00031b00 */
undefined4 rts_audio_playback_check_ready(int param_1);  /* @ 00031ed0 */
undefined4 rts_audio_playback_run(int param_1);  /* @ 00031ed8 */
void rts_audio_playback_init(void);  /* @ 000320b8 */
int rts_h1encoder_start(int param_1);  /* @ 000328e8 */
undefined4 rts_h1encoder_stop(void);  /* @ 000330ac */
undefined4 rts_h1encoder_check_ready(void);  /* @ 000332e4 */
undefined4 rts_h1encoder_post_connect(int param_1,int param_2);  /* @ 00033418 */
undefined4 rts_h1encoder_init(int param_1);  /* @ 00033920 */
void rts_audio_resample_init(void);  /* @ 00033ae8 */
void rts_audio_resample_free(undefined4 param_1);  /* @ 00033b40 */
undefined4 rts_h1encoder_cleanup(int param_1);  /* @ 00033b84 */
void rts_audio_check_argument(void);  /* @ 00033be0 */
undefined4 rts_h1encoder_set_profile(int param_1,undefined *param_2);  /* @ 00033c10 */
undefined4 rts_audio_set_in_param(undefined4 param_1,int param_2,int param_3);  /* @ 00033c54 */
void rts_audio_set_out_param(void);  /* @ 00033d28 */
undefined4 rts_h1encoder_run(int param_1);  /* @ 00033df4 */
undefined4 rts_audio_get_outsize(int param_1);  /* @ 00033dfc */
undefined4 rts_audio_resample_process(void);  /* @ 00033ed4 */
undefined4 rts_h1encoder_pre_disconnect(int param_1);  /* @ 00034690 */
undefined4 rts_h1encoder_alloc_buffer(int param_1);  /* @ 0003559c */
undefined4 rts_h1encoder_free_buffer(int param_1);  /* @ 000357c8 */
undefined4 rts_h1encoder_get_h264_info(int param_1,uint *param_2);  /* @ 00035874 */
undefined4 rts_h1encoder_exec_cmd(int param_1,uint *param_2);  /* @ 0003590c */
void rts_av_set_h264_color_conversion(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00035bbc */
undefined4 rts_av_osdenc_check_ready(void);  /* @ 00035c10 */
undefined4 rts_av_osdenc_init(int param_1);  /* @ 00035c78 */
undefined4 rts_av_osdenc_cleanup(int param_1);  /* @ 00035e00 */
undefined4 rts_av_osdenc_start(int param_1);  /* @ 00035e8c */
undefined4 rts_av_osdenc_stop(int param_1);  /* @ 00036210 */
undefined4 rts_audio_free_codec_context(int param_1,int param_2);  /* @ 00036350 */
undefined4 rts_audio_create_codec_context(void);  /* @ 000363c0 */
void rts_audio_codec_decode(void);  /* @ 00036524 */
void rts_audio_codec_encode(void);  /* @ 0003656c */
void rts_audio_codec_check_encode_id(void);  /* @ 000365b4 */
void rts_audio_codec_check_decode_id(void);  /* @ 000365f4 */
undefined4 rts_av_osdenc_get_profile(int param_1,undefined *param_2);  /* @ 00036640 */
undefined4 rts_audio_cvrt_codec_id_to_fmt (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 0003667c */
undefined4 rts_audio_check_encode_param(void);  /* @ 000366b4 */
undefined4 rts_av_osdenc_exec_cmd(int param_1,int *param_2);  /* @ 000366d4 */
void rts_pcm_decode_init(void);  /* @ 00036790 */
undefined4 rts_av_osdenc_run(int param_1);  /* @ 000367e8 */
undefined4 rts_pcm_decode_frame(undefined4 param_1);  /* @ 000368ec */
undefined4 rts_av_osdenc_set_profile(int param_1,int *param_2);  /* @ 00036ab8 */
undefined4 rts_pcm_decode_close(int param_1);  /* @ 00036aec */
void rts_pcm_encode_init(int param_1,undefined4 param_2,int param_3);  /* @ 00036ccc */
undefined4 rts_pcm_encode_frame(int param_1);  /* @ 00036d78 */
int rts_av_to_osdenc_t(int param_1);  /* @ 00036e18 */
int rts_av_to_osdenc_attr(void);  /* @ 00036f08 */
void rts_av_set_osdenc_attr_owner(int param_1,undefined4 param_2);  /* @ 00036f3c */
void rts_pcm_encode_close(void);  /* @ 00037030 */
void rts_pcm_check_aulaw(void);  /* @ 00037038 */
undefined4 rts_av_alloc_osdenc_attr(undefined4 param_1);  /* @ 00037058 */
void rts_g726_encode_init(void);  /* @ 000371c8 */
void rts_av_set_osdenc_fps(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 000371d8 */
undefined4 rts_av_update_osdenc_flick_info(int param_1);  /* @ 00037304 */
undefined4 rts_g726_encode_frame (undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6,int param_7);  /* @ 000373e4 */
undefined4 rts_av_get_osdenc_attr_single(int param_1,int param_2);  /* @ 00037484 */
undefined4 rts_av_set_osdenc_attr_single(int param_1,undefined *param_2);  /* @ 00037698 */
void rts_av_query_osd2(undefined4 param_1,int param_2);  /* @ 000378c8 */
void rts_av_set_osd2_single(undefined *param_1);  /* @ 0003796c */
void rts_av_get_osd2_single(undefined *param_1);  /* @ 000379f4 */
undefined4 rts_av_set_osd2(int *param_1);  /* @ 00037a7c */
undefined4 rts_av_get_osd2(int *param_1);  /* @ 00037b6c */
void rts_av_resume_osd2_single(undefined *param_1,undefined4 param_2);  /* @ 00037c5c */
void rts_g726_encode_close(int param_1,int param_2,undefined4 param_3);  /* @ 00037d40 */
void rts_av_pause_osd2_single(undefined *param_1,undefined4 param_2);  /* @ 00037d7c */
void rts_g726_encode_check(int param_1,undefined4 param_2);  /* @ 00037d88 */
void rts_aac_encode_check(void);  /* @ 00037e40 */
void rts_av_set_osd2_color_table (undefined *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);  /* @ 00037e9c */
void rts_aac_encode_init(undefined4 param_1);  /* @ 00037ef4 */
void rts_av_get_osd2_color_table (undefined *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4);  /* @ 0003800c */
void rts_aac_encode_frame(undefined4 param_1,int param_2,int param_3);  /* @ 000380d0 */
void rts_av_release_osd2(void);  /* @ 0003816c */
undefined4 rts_jpgencoder_post_connect(int param_1,int param_2);  /* @ 000381dc */
undefined4 rts_aac_encode_close(void);  /* @ 00038304 */
void rts_isp_get_ae_gain(undefined *param_1,int param_2);  /* @ 000385e0 */
undefined4 rts_jpgencoder_start(int param_1);  /* @ 000387d8 */
undefined4 rts_jpgencoder_check_ready(void);  /* @ 00038c7c */
undefined4 rts_jpgencoder_run(int param_1);  /* @ 00038cf4 */
undefined4 rts_jpgencoder_set_attr(int param_1,uint *param_2);  /* @ 00039118 */
undefined4 rts_jpgencoder_get_attr(int param_1,int param_2);  /* @ 000391e0 */
undefined4 rts_jpgencoder_set_profile(int param_1,int *param_2);  /* @ 00039374 */
undefined4 rts_jpgencoder_pre_disconnect(int param_1);  /* @ 000394e8 */
undefined4 rts_jpgencoder_stop(int param_1);  /* @ 000395a8 */
undefined4 rts_jpgencoder_get_profile(int param_1,undefined4 *param_2);  /* @ 00039674 */
undefined4 rts_jpgencoder_exec_cmd(int param_1,int *param_2);  /* @ 00039ab8 */
undefined4 rts_jpgencoder_init(int param_1);  /* @ 00039c3c */
undefined4 rts_jpgencoder_cleanup(int param_1);  /* @ 00039e44 */
void rts_av_query_mjpeg_ctrl(undefined4 param_1,undefined4 param_2);  /* @ 0003a7fc */
void rts_av_release_mjpeg_ctrl(void);  /* @ 0003a844 */
void rts_av_get_mjpeg_ctrl(undefined *param_1);  /* @ 0003a84c */
void rts_av_set_mjpeg_ctrl(undefined *param_1);  /* @ 0003a8d4 */
void rts_av_query_aec_ctrl(undefined4 param_1,int param_2);  /* @ 0003c0e8 */
undefined4 rts_av_set_aec_ctrl(undefined4 *param_1);  /* @ 0003c18c */
void rts_av_release_aec_ctrl(void);  /* @ 0003c2e8 */
int rts_audio_set_params(undefined4 *param_1);  /* @ 0003c5e4 */
undefined4 rts_audio_init(int param_1);  /* @ 0003ca80 */
undefined4 rts_audio_cleanup(int param_1);  /* @ 0003cb34 */
undefined4 rts_audio_start(int param_1);  /* @ 0003cbcc */
undefined4 rts_audio_stop(int param_1);  /* @ 0003ce70 */
undefined4 rts_audio_check_ready(int param_1);  /* @ 0003cf14 */
undefined4 rts_audio_pop_idle(undefined *param_1);  /* @ 0003d014 */
undefined4 rts_audio_get_attr(int param_1,int param_2);  /* @ 0003d0b4 */
undefined4 rts_audio_set_attr(int param_1,int param_2);  /* @ 0003d13c */
undefined4 rts_audio_get_profile(int param_1,undefined4 *param_2);  /* @ 0003d448 */
undefined4 rts_audio_set_profile(int param_1,int *param_2);  /* @ 0003d4e0 */
undefined4 rts_audio_xrun(int param_1);  /* @ 0003d5d8 */
int rts_audio_calc_block_align(int param_1,uint param_2);  /* @ 0003d8e0 */
uint rts_audio_calc_ts_delta(int param_1,uint param_2);  /* @ 0003d8f0 */
undefined4 rts_audio_calc_volume(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 0003d924 */
bool rts_audio_is_end(undefined4 *param_1);  /* @ 0003da80 */
undefined4 * rts_audio_default_profile(undefined4 *param_1);  /* @ 0003db2c */
void rts_fifo_free(int *param_1);  /* @ 0003db60 */
void rts_fifo_reset(undefined4 *param_1);  /* @ 0003dbc8 */
int * rts_fifo_alloc(int param_1);  /* @ 0003dbe0 */
int rts_fifo_size(int param_1);  /* @ 0003dc9c */
int rts_fifo_space(int *param_1);  /* @ 0003dcac */
void rts_fifo_drain(int *param_1,int param_2);  /* @ 0003dcf0 */
int rts_fifo_generic_write(uint *param_1,int param_2,int param_3,code *param_4);  /* @ 0003dd84 */
undefined4 rts_fifo_generic_read(int param_1,int param_2,int param_3,code *param_4);  /* @ 0003de88 */
undefined4 rts_fifo_realloc2(int *param_1,uint param_2);  /* @ 0003df48 */
undefined4 rts_audio_encode_init(int param_1);  /* @ 0003e050 */
undefined4 rts_audio_encode_stop(int param_1);  /* @ 0003e0e4 */
undefined4 rts_audio_encode_cleanup(int param_1);  /* @ 0003e1a4 */
undefined4 rts_audio_encode_start(int param_1);  /* @ 0003e238 */
undefined4 rts_audio_encode_check_ready(int param_1);  /* @ 0003e484 */
undefined4 rts_audio_encode_set_attr(int param_1,int *param_2);  /* @ 0003e59c */
undefined4 rts_audio_encode_run(undefined *param_1);  /* @ 0003e8d0 */
undefined4 rts_audio_encode_get_profile(int param_1,undefined4 *param_2);  /* @ 0003edd8 */
undefined4 rts_audio_encode_set_profile(int param_1,int *param_2);  /* @ 0003ef34 */
undefined4 rts_audio_encode_query_ability(int param_1,undefined4 *param_2);  /* @ 0003f0e4 */
undefined4 rts_audio_encode_get_attr(int param_1,undefined4 *param_2);  /* @ 0003f434 */
undefined4 rts_av_query_audio_encode_ability(undefined *param_1,undefined4 *param_2);  /* @ 0003f530 */
void rts_av_release_audio_encode_ability(int param_1);  /* @ 0003f708 */
void rts_audio_fifo_free(int *param_1);  /* @ 0003f7c8 */
int * rts_audio_fifo_alloc(int param_1,int param_2,int param_3);  /* @ 0003f830 */
undefined4 rts_audio_fifo_realloc(undefined4 *param_1,undefined4 param_2);  /* @ 0003f914 */
int rts_audio_fifo_read(undefined4 *param_1,undefined4 param_2,int param_3);  /* @ 0003f9d0 */
undefined4 rts_audio_fifo_drain(undefined4 *param_1,int param_2);  /* @ 0003fa78 */
void rts_audio_fifo_reset(undefined4 *param_1);  /* @ 0003fb04 */
undefined4 rts_audio_fifo_size(int param_1);  /* @ 0003fb48 */
int rts_audio_fifo_space(int param_1);  /* @ 0003fb50 */
int rts_audio_fifo_write(undefined4 *param_1,undefined4 param_2,int param_3);  /* @ 0003fb60 */
void rts_audio_tfilter_new(double param_1,double param_2);  /* @ 00040a60 */
void rts_audio_tfilter_free(int param_1);  /* @ 00040b50 */
void rts_audio_tfilter_reset(int param_1);  /* @ 00040b78 */
undefined8 rts_audio_tfilter_update (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00040b80 */
undefined4 rts_audio_capture_run(int param_1);  /* @ 00040c20 */
undefined4 rts_audio_capture_init(int param_1);  /* @ 00040ee0 */
undefined4 rts_audio_decode_get_profile(int param_1,undefined4 *param_2);  /* @ 00040f80 */
undefined4 rts_audio_decode_start(int param_1);  /* @ 00041088 */
undefined4 rts_audio_decode_run(int param_1);  /* @ 0004123c */
undefined4 rts_audio_decode_set_profile(int param_1,uint *param_2);  /* @ 00041580 */
undefined4 rts_audio_decode_stop(int param_1);  /* @ 000417c4 */
undefined4 rts_audio_decode_init(undefined *param_1);  /* @ 00041840 */
undefined4 rts_audio_decode_check_ready(int param_1);  /* @ 00041900 */
undefined4 rts_audio_decode_cleanup(int param_1);  /* @ 000419d0 */
undefined4 rts_audio_playback_check_ready(void);  /* @ 00041ed0 */
undefined4 rts_audio_playback_run(int param_1);  /* @ 00041ed8 */
undefined4 rts_audio_playback_init(int param_1);  /* @ 000420b8 */
void rts_audio_resample_init(void);  /* @ 00043ae8 */
void rts_audio_resample_free(int *param_1);  /* @ 00043b40 */
undefined4 rts_audio_check_argument(int param_1,uint param_2,int param_3);  /* @ 00043be0 */
int rts_audio_set_in_param(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00043c54 */
int rts_audio_set_out_param(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00043d28 */
int rts_audio_get_outsize(int param_1,int param_2);  /* @ 00043dfc */
undefined4 rts_audio_resample_process(int *param_1,int param_2,int *param_3,int param_4,int *param_5);  /* @ 00043ed4 */
void rts_audio_free_codec_context(int *param_1);  /* @ 00046350 */
undefined4 * rts_audio_create_codec_context(int param_1,int param_2,int *param_3);  /* @ 000463c0 */
undefined4 rts_audio_codec_decode(int *param_1,int param_2,int param_3);  /* @ 00046524 */
undefined4 rts_audio_codec_encode(int *param_1,int param_2,int param_3);  /* @ 0004656c */
undefined4 rts_audio_codec_check_encode_id(int param_1);  /* @ 000465b4 */
undefined4 rts_audio_codec_check_decode_id(int param_1);  /* @ 000465f4 */
int rts_audio_cvrt_fmt_to_codec_id(int param_1);  /* @ 00046640 */
undefined4 rts_audio_cvrt_codec_id_to_fmt(int param_1);  /* @ 0004667c */
undefined4 rts_audio_check_encode_param(int *param_1);  /* @ 000466b4 */
undefined4 rts_pcm_decode_init(undefined4 *param_1);  /* @ 00046790 */
int rts_pcm_decode_frame(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);  /* @ 000468ec */
undefined4 rts_pcm_decode_close(int param_1);  /* @ 00046aec */
undefined4 rts_pcm_encode_init(undefined4 *param_1);  /* @ 00046ccc */
int rts_pcm_encode_frame(undefined4 *param_1,int *param_2,undefined4 *param_3);  /* @ 00046d78 */
undefined4 rts_pcm_encode_close(void);  /* @ 00047030 */
undefined4 rts_pcm_check_aulaw(undefined *param_1);  /* @ 00047038 */
undefined4 rts_g726_encode_init(undefined *param_1);  /* @ 000471c8 */
int rts_g726_encode_frame(undefined *param_1,int *param_2,undefined4 *param_3);  /* @ 000473e4 */
undefined4 rts_g726_encode_close(int param_1);  /* @ 00047d40 */
undefined4 rts_g726_encode_check(undefined *param_1);  /* @ 00047d88 */
undefined4 rts_aac_encode_check(undefined *param_1);  /* @ 00047e40 */
undefined4 rts_aac_encode_init(int param_1);  /* @ 00047ef4 */
int rts_aac_encode_frame(int param_1,int *param_2,undefined4 *param_3);  /* @ 000480d0 */
undefined4 rts_aac_encode_close(int param_1);  /* @ 00048304 */

/* ---- rtstream ---- */
void rtstream(undefined4 *param_1,undefined4 *param_2);  /* @ 0001ab3c */
undefined4 rtstream_0003e710(int param_1,undefined *param_2);  /* @ 0003e710 */
undefined4 rtstream_00042af0(int param_1);  /* @ 00042af0 */

/* ---- set ---- */
void set_af_ctrl(undefined4 param_1,int param_2);  /* @ 0001a428 */
void set_awb_ctrl(void);  /* @ 0001cd70 */
undefined4 set_ae_ctrl(void);  /* @ 0001e540 */
undefined4 set_h264_bind_isp_flag(void);  /* @ 0001f914 */
undefined4 set_h1_ctrl(undefined4 param_1);  /* @ 0001fbc8 */
undefined4 set_h1_roi(void);  /* @ 000202a0 */
void set_h1_ctrl_owner(void);  /* @ 000208c8 */
void set_h1_roi_map(void);  /* @ 00021334 */
undefined4 set_h1_observer(void);  /* @ 000216e8 */
undefined4 __set_isp_buffer_number(undefined4 *param_1,int param_2);  /* @ 00028ed0 */
void __set_af_attr_buffer(undefined *param_1);  /* @ 00029f00 */
void set_mjpeg_ctrl(undefined4 param_1);  /* @ 0002a08c */
undefined4 set_af_ctrl(int param_1);  /* @ 0002a428 */
undefined4 set_mjpeg_ctrl_owner(void);  /* @ 0002a538 */
void __set_awb_attr_buffer(undefined *param_1);  /* @ 0002c764 */
int set_awb_ctrl(int param_1);  /* @ 0002cd70 */
undefined4 set_ae_ctrl(int param_1);  /* @ 0002e540 */
void set_h264_bind_isp_flag(int param_1,int param_2);  /* @ 0002f914 */
int set_h1_ctrl(int param_1);  /* @ 0002fbc8 */
int set_h1_roi(int param_1);  /* @ 000302a0 */
undefined4 set_h1_ctrl_owner(int param_1,int param_2,undefined4 param_3,undefined4 param_4);  /* @ 000308c8 */
undefined4 set_h1_roi_map(undefined *param_1);  /* @ 00031334 */
void set_h1_observer(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 000316e8 */
void __set_video_full_range(int param_1,undefined *param_2);  /* @ 00033364 */
undefined4 set_mjpeg_ctrl(int param_1);  /* @ 0003a08c */
void set_mjpeg_ctrl_owner(int param_1,int param_2);  /* @ 0003a538 */
undefined4 __set_aec_profile(undefined *param_1,int *param_2);  /* @ 0003af50 */
undefined4 __set_resample_profile(int param_1,int *param_2);  /* @ 0003fd88 */
undefined4 __set_resample_attr(undefined *param_1,undefined *param_2);  /* @ 0003ff58 */
undefined4 __set_amixer_profile(int param_1,int *param_2);  /* @ 00042278 */

/* ---- speex ---- */
undefined4 speex_resampler_destroy(int param_1);  /* @ 000355b8 */
void speex_resampler_process_int(void);  /* @ 00035644 */
undefined4 speex_resampler_process_float(int param_1,uint *param_2);  /* @ 00035878 */
undefined4 speex_resampler_process_interleaved_float(void);  /* @ 00035b68 */
void speex_resampler_get_rate(void);  /* @ 00035d88 */
void speex_resampler_set_rate_frac(void);  /* @ 00035d9c */
undefined4 speex_resampler_set_rate(void);  /* @ 00035ed8 */
undefined4 speex_resampler_get_ratio(void);  /* @ 00035f0c */
void speex_resampler_set_quality(void);  /* @ 00035f20 */
void speex_resampler_init_frac(void);  /* @ 00035f70 */
undefined4 speex_resampler_init(void);  /* @ 00036164 */
undefined4 speex_resampler_get_quality(void);  /* @ 000361a4 */
undefined4 speex_resampler_set_input_stride(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 000361b0 */
undefined4 speex_resampler_get_input_stride(undefined4 param_1);  /* @ 000361b8 */
undefined4 speex_resampler_set_output_stride(undefined4 param_1,int param_2);  /* @ 000361c4 */
undefined4 speex_resampler_get_output_stride(void);  /* @ 000361cc */
undefined4 speex_resampler_get_input_latency(void);  /* @ 000361d8 */
undefined4 speex_resampler_get_output_latency(void);  /* @ 000361e4 */
undefined4 speex_resampler_skip_zeros(int param_1);  /* @ 00036218 */
undefined4 speex_resampler_reset_mem(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00036254 */
void speex_resampler_strerror(void);  /* @ 000362d4 */
void speex_alloc(undefined4 param_1);  /* @ 00044b60 */
undefined4 speex_realloc(int param_1);  /* @ 00044e1c */
void speex_resampler_destroy(int param_1);  /* @ 000455b8 */
bool speex_resampler_process_int (int param_1,int param_2,undefined2 *param_3,uint *param_4,int param_5,int *param_6);  /* @ 00045644 */
void speex_resampler_process_float(void);  /* @ 00045878 */
bool speex_resampler_process_interleaved_float (int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5);  /* @ 00045b68 */
bool speex_resampler_process_interleaved_int (int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5);  /* @ 00045c78 */
void speex_resampler_get_rate(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);  /* @ 00045d88 */
undefined4 speex_resampler_set_rate_frac(int *param_1,int param_2,uint param_3,int param_4,int param_5);  /* @ 00045d9c */
void speex_resampler_set_rate(void);  /* @ 00045ed8 */
void speex_resampler_get_ratio(int param_1,undefined4 *param_2,undefined4 *param_3);  /* @ 00045f0c */
undefined4 speex_resampler_set_quality(int param_1,uint param_2);  /* @ 00045f20 */
undefined4 * speex_resampler_init_frac (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, uint param_6,int *param_7);  /* @ 00045f70 */
void speex_resampler_init(void);  /* @ 00046164 */
void speex_resampler_get_quality(int param_1,undefined4 *param_2);  /* @ 000461a4 */
void speex_resampler_set_input_stride(int param_1,undefined4 param_2);  /* @ 000461b0 */
void speex_resampler_get_input_stride(int param_1,undefined4 *param_2);  /* @ 000461b8 */
void speex_resampler_set_output_stride(int param_1,undefined4 param_2);  /* @ 000461c4 */
void speex_resampler_get_output_stride(int param_1,undefined4 *param_2);  /* @ 000461cc */
uint speex_resampler_get_input_latency(int param_1);  /* @ 000461d8 */
uint speex_resampler_get_output_latency(int param_1);  /* @ 000461e4 */
void speex_resampler_skip_zeros(int param_1);  /* @ 00046218 */
undefined4 speex_resampler_reset_mem(int param_1);  /* @ 00046254 */
undefined * speex_resampler_strerror(uint param_1);  /* @ 000462d4 */

/* ---- to ---- */
void to_af_ctrl(void);  /* @ 0001a14c */
undefined4 to_awb_ctrl(void);  /* @ 0001ca30 */
undefined4 to_ae_ctrl(void);  /* @ 0001e16c */
undefined4 to_h1_t(int param_1,int param_2);  /* @ 0001f790 */
void to_h264_ctrl(void);  /* @ 0001f8ac */
undefined4 to_h264_roi(void);  /* @ 0001f8e0 */
void to_h1_roi_map(void);  /* @ 0001f96c */
undefined4 to_mjpeg_t(int param_1);  /* @ 00029f84 */
void to_mjpeg_ctrl(undefined4 param_1);  /* @ 0002a058 */
int to_af_ctrl(void);  /* @ 0002a14c */
int to_awb_ctrl(void);  /* @ 0002ca30 */
int to_ae_t(int param_1);  /* @ 0002e064 */
int to_ae_ctrl(void);  /* @ 0002e16c */
int to_h1_t(int param_1);  /* @ 0002f790 */
int to_h264_ctrl(void);  /* @ 0002f8ac */
int to_h264_roi(void);  /* @ 0002f8e0 */
int to_h1_roi_map(void);  /* @ 0002f96c */
int to_mjpeg_t(int param_1);  /* @ 00039f84 */
int to_mjpeg_ctrl(void);  /* @ 0003a058 */

/* ---- misc ---- */
undefined4 processEntry entry(void);  /* @ 00019070 */
undefined4 __release_unit_manager(void);  /* @ 000190ac */
undefined4 __release_context(void);  /* @ 00019104 */
bool __compare_task(int *param_1,int param_2);  /* @ 0001a040 */
undefined4 __resume_unit(undefined *param_1);  /* @ 0001aabc */
undefined4 __uninit_buffer(undefined *param_1);  /* @ 0001ac08 */
undefined4 profile(undefined *param_1,int param_2,int param_3);  /* @ 0001cd78 */
void __poll_task(int param_1,uint param_2);  /* @ 0001dd10 */
undefined4 __del_poll_fd(int *param_1,undefined *param_2);  /* @ 0001f558 */
uint __create_chn(undefined *param_1,int param_2);  /* @ 00021730 */
void __stream_keep_active(int param_1);  /* @ 00023e60 */
void __del_handler(int param_1);  /* @ 00023f8c */
void __trigger_event_lk(int param_1);  /* @ 00024088 */
void __find_handler(int param_1,int param_2);  /* @ 00024104 */
undefined4 __find_pipe(int param_1,int param_2,int param_3);  /* @ 0002480c */
undefined4 update_v4l2_profile(undefined *param_1,undefined4 *param_2);  /* @ 00026e38 */
int req_v4l2_buffers(undefined *param_1,int param_2,int param_3,undefined *param_4);  /* @ 00027b74 */
undefined4 mirror(undefined4 param_1,undefined4 *param_2,int param_3);  /* @ 0002abf0 */
undefined4 compute_max_peak(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 00031aa0 */
void __osdenc_epoll_cb(int param_1);  /* @ 00036400 */
undefined4 __exec_aec_cmd(int param_1,int *param_2);  /* @ 0003a9dc */
undefined4 __pre_disconnect_aec(int param_1,int param_2);  /* @ 0003abf8 */
undefined4 __post_connect_aec(int param_1,undefined *param_2);  /* @ 0003ad18 */
undefined4 __process_aec_ns(undefined *param_1);  /* @ 0003b180 */
void audio_fd(int param_1,undefined *param_2);  /* @ 0003c3e8 */
undefined4 __process_encode_input(void);  /* @ 0003eba4 */
undefined4 __stop_resample(int param_1);  /* @ 00040398 */
void compute_max_peak(ushort *param_1,uint param_2,int param_3,int param_4,int param_5);  /* @ 00041aa0 */
undefined4 __update_amixer_scale(undefined *param_1);  /* @ 0004253c */
undefined4 __amixer_pre_disconnect(int param_1,undefined *param_2);  /* @ 00042710 */
uint __is_droppable(undefined *param_1);  /* @ 00042888 */
bool client(undefined *param_1);  /* @ 00042908 */
bool client_00042a38(undefined *param_1);  /* @ 00042a38 */

#endif /* LIBRTSTREAM_H */
