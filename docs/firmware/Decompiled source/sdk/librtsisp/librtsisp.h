/* librtsisp — recovered function prototypes
 * ISP control: 8051 MCU mailbox, 3A, tuning, GPIO
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LIBRTSISP_H
#define LIBRTSISP_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 000124dc */
void _fini(void);  /* @ 00019fb0 */

/* ---- rts ---- */
undefined4 processEntry rts_hw_id_init(void);  /* @ 00012560 */
int rts_isp_get_ae_window_num(int *param_1);  /* @ 00012770 */
undefined4 rts_isp_get_ae_histogram_num(void);  /* @ 000129b4 */
int rts_isp_get_awb_window_num(int *param_1);  /* @ 000129bc */
undefined4 rts_isp_get_af_window_num(undefined4 *param_1);  /* @ 000129f8 */
int rts_isp_get_3a_version(undefined4 param_1,int param_2);  /* @ 00012a14 */
void rts_isp_get_ae_gain(undefined4 param_1,undefined2 *param_2);  /* @ 00012af8 */
undefined4 rts_isp_set_ae_gain(undefined4 param_1,ushort *param_2);  /* @ 00012b94 */
void rts_isp_get_ae_weight(undefined4 param_1,undefined4 param_2);  /* @ 00012c3c */
void rts_isp_set_ae_weight(undefined4 param_1,undefined4 param_2);  /* @ 00012c5c */
int rts_isp_get_ae_statis(undefined4 param_1,undefined1 *param_2);  /* @ 00012c7c */
int rts_isp_get_ae_target_delta(undefined4 param_1,undefined1 *param_2);  /* @ 000130ec */
void rts_isp_set_ae_target_delta(undefined4 param_1,undefined1 param_2);  /* @ 00013158 */
void rts_isp_set_ae_gain_max(undefined4 param_1,uint param_2);  /* @ 000131a4 */
void rts_isp_get_ae_gain_max(undefined4 param_1,undefined2 *param_2);  /* @ 000131fc */
void rts_isp_set_ae_min_fps(undefined4 param_1,undefined1 param_2);  /* @ 00013270 */
void rts_isp_get_ae_min_fps(undefined4 param_1,undefined1 *param_2);  /* @ 000132bc */
void rts_isp_get_awb_statis(undefined4 param_1,uint *param_2);  /* @ 00013324 */
int rts_isp_get_awb_ct_gain(undefined4 param_1,uint param_2,undefined1 *param_3);  /* @ 0001369c */
void rts_isp_set_awb_auto_gain_adjustment(undefined4 param_1,int param_2);  /* @ 00013720 */
void rts_isp_get_awb_auto_gain_adjustment(undefined4 param_1,undefined2 *param_2);  /* @ 000137e4 */
int rts_isp_get_af_statis(undefined4 param_1,uint *param_2);  /* @ 000138b8 */
undefined4 rts_wq_lock_ctrl(int param_1,undefined4 param_2);  /* @ 00013cb4 */
int rts_isp_v4l2_open(int param_1);  /* @ 00013dd0 */
undefined4 rts_isp_v4l2_close(int param_1);  /* @ 00013e98 */
void rts_isp_ctrl_open(void);  /* @ 00013edc */
undefined4 rts_isp_ctrl_close(int param_1);  /* @ 00013f00 */
void rts_isp_soc_open(undefined4 param_1);  /* @ 00013f44 */
undefined4 rts_isp_soc_close(int param_1);  /* @ 00013f68 */
int rts_isp_soc_detach(void);  /* @ 00013fac */
int rts_isp_soc_attach(void);  /* @ 00014030 */
undefined4 rts_exec_vendor_cmd(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 000140b4 */
void rts_isp_mem_open(undefined4 param_1);  /* @ 00014160 */
void rts_isp_mem_close(int param_1);  /* @ 00014184 */
undefined4 rts_isp_mem_alloc(int param_1,int *param_2);  /* @ 000141ac */
undefined4 rts_isp_mem_free(int param_1,int *param_2);  /* @ 0001432c */
undefined4 rts_isp_mem_realloc(int param_1,int *param_2,int param_3);  /* @ 000143c4 */
undefined4 rts_isp_mem_set_info(int param_1,undefined4 param_2,int param_3);  /* @ 0001458c */
undefined4 rts_isp_alloc_dma(int param_1);  /* @ 00014654 */
undefined4 rts_isp_free_dma(int param_1);  /* @ 000146e0 */
undefined4 rts_isp_realloc_dma(int param_1,undefined4 param_2);  /* @ 0001476c */
undefined4 rts_isp_set_dma_info(undefined4 param_1,undefined4 param_2);  /* @ 00014808 */
undefined4 rts_isp_mem_sync_device(undefined4 param_1);  /* @ 00014898 */
undefined4 rts_isp_mem_sync_cpu(undefined4 param_1);  /* @ 00014950 */
undefined4 rts_dma_memcpy(uint param_1,uint param_2,uint param_3);  /* @ 00014a08 */
undefined * rts_memcpy(undefined *param_1,int param_2,int param_3);  /* @ 00014c28 */
int rts_reg_isp_open(int *param_1);  /* @ 00014da4 */
undefined4 rts_reg_h264_open(int *param_1);  /* @ 00014fc4 */
undefined4 rts_reg_mjpg_open(int *param_1);  /* @ 000151d8 */
undefined4 rts_reg_close(int *param_1);  /* @ 000153f0 */
undefined4 rts_reg_mjpg_reset(int *param_1);  /* @ 00015504 */
undefined4 rts_reg_read_reg(int *param_1,uint param_2);  /* @ 0001558c */
void rts_reg_write_reg(int *param_1,uint param_2,undefined4 param_3);  /* @ 0001569c */
void rts_reg_set_reg_bit(int param_1,uint param_2,uint param_3);  /* @ 000157c0 */
void rts_reg_clr_reg_bit(int param_1,uint param_2,uint param_3);  /* @ 000158f4 */
undefined4 rts_reg_get_handle(undefined4 *param_1);  /* @ 00015a2c */
undefined4 rts_reg_get_size(int param_1);  /* @ 00015a8c */
undefined4 rts_upload_fw(int param_1,int param_2);  /* @ 00015aec */
undefined4 rts_get_fw_size(void);  /* @ 00015bd0 */
undefined4 rts_dump_fw(int param_1,int param_2);  /* @ 00015c68 */
undefined4 rts_load_fw(void);  /* @ 00015d4c */
undefined4 rts_isp_get_video_phy_addr(int param_1,undefined4 param_2);  /* @ 00015dd8 */
void rts_wq_lock_allocation(undefined4 param_1);  /* @ 00015e2c */
void rts_wq_lock_deallocate(undefined4 param_1);  /* @ 00015e54 */
undefined4 rts_wq_lock_init(undefined4 param_1,undefined4 param_2);  /* @ 00015e7c */
undefined4 rts_wq_lock_set_name(undefined4 param_1,int param_2);  /* @ 00015f70 */
void rts_wq_lock_wait(undefined4 param_1);  /* @ 00016084 */
void rts_wq_lock_post(undefined4 param_1);  /* @ 000160ac */
bool rts_isp_check_dma_buffer(int *param_1);  /* @ 000160d4 */
undefined4 rts_reg_osd2_open(int *param_1);  /* @ 00016104 */
void rts_isp_pause(undefined4 param_1);  /* @ 00016330 */
void rts_isp_resume(undefined4 param_1);  /* @ 00016354 */
void rts_reg_h264_done(int *param_1);  /* @ 00016378 */
void rts_reg_mjpg_done(int *param_1);  /* @ 000163d8 */
void rts_reg_osd2_done(int *param_1);  /* @ 00016438 */
undefined4 rts_reg_handle_sigio(int *param_1);  /* @ 00016498 */
undefined4 rts_isp_get_hz(void);  /* @ 000165dc */
undefined4 rts_isp_enable_ldc(undefined4 param_1,int param_2,int param_3);  /* @ 00016670 */
undefined4 rts_isp_disable_ldc(undefined4 param_1);  /* @ 00016728 */
undefined4 rts_isp_get_ldc_state(undefined4 param_1);  /* @ 000167c4 */
uint rts_isp_get_ldc(undefined4 param_1);  /* @ 00016860 */
int rts_isp_set_ldc(undefined4 param_1,int param_2);  /* @ 000168a0 */
void rts_isp_release_grid_bitmap(undefined4 *param_1);  /* @ 000169c0 */
undefined4 rts_isp_init_grid_bitmap(int *param_1,int param_2);  /* @ 00016a14 */
undefined4 rts_isp_check_grid(int param_1,uint param_2);  /* @ 00016b4c */
undefined4 rts_isp_check_grid_bitmap(uint *param_1,uint param_2);  /* @ 00016b7c */
undefined4 rts_isp_check_rect(int *param_1);  /* @ 00016bec */
int rts_isp_transfer_grid_bitmap (undefined4 param_1,undefined1 param_2,undefined2 param_3,int *param_4, undefined4 param_5);  /* @ 00016c30 */
void rts_isp_cvrt_grid_to_bytes(undefined4 *param_1,undefined *param_2,uint param_3);  /* @ 00016da8 */
void rts_isp_cvrt_bytes_to_grid(short *param_1,uint param_2,int *param_3);  /* @ 00016f20 */
void rts_isp_cvrt_rect_to_bytes(undefined4 *param_1,undefined *param_2,uint param_3);  /* @ 000170a8 */
void rts_isp_cvrt_bytes_to_rect(short *param_1,uint param_2,int *param_3);  /* @ 00017210 */
undefined4 rts_isp_check_i2c_parm(uint *param_1);  /* @ 000173a0 */
undefined4 rts_isp_get_cmd_data_limit(uint param_1);  /* @ 00017434 */
undefined4 __rts_isp_exec_isp_cmd (int param_1,undefined2 param_2,undefined1 param_3,char param_4,undefined2 param_5, undefined2 param_6,int param_7);  /* @ 00017490 */
undefined4 __rts_isp_exec_ext_cmds(int param_1,int *param_2);  /* @ 00017584 */
int rts_isp_get_api_version(undefined4 param_1,undefined1 *param_2);  /* @ 00017810 */
undefined4 rts_isp_check_api_version(undefined4 param_1,uint param_2);  /* @ 00017884 */
void rts_isp_exec_isp_cmd (undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4);  /* @ 00017b54 */
int rts_isp_read_xmem(undefined4 param_1,ushort *param_2);  /* @ 00017c28 */
int rts_isp_write_xmem(undefined4 param_1,ushort *param_2);  /* @ 00017d0c */
void rts_isp_read_i2c(undefined4 param_1,undefined1 *param_2);  /* @ 00017df0 */
int rts_isp_write_i2c(undefined4 param_1,uint *param_2);  /* @ 00017e70 */
undefined4 rts_isp_read_sensor_reg(undefined4 param_1,undefined2 *param_2);  /* @ 00017f30 */
undefined4 rts_isp_write_sensor_reg(undefined4 param_1,undefined2 *param_2);  /* @ 00017fb8 */
void rts_isp_get_snr_fmt(undefined4 param_1,uint *param_2);  /* @ 00018040 */
void rts_isp_get_scale_coeff(undefined4 param_1,undefined1 param_2,uint *param_3);  /* @ 000180d0 */
void rts_isp_get_zoom_start(undefined4 param_1,undefined1 param_2,uint *param_3);  /* @ 00018158 */
void rts_isp_get_device_des(undefined4 param_1,undefined1 *param_2);  /* @ 000181e0 */
int rts_isp_get_fw_version(undefined4 param_1,byte *param_2);  /* @ 00018288 */
void rts_isp_exec_ext_cmds(undefined4 param_1,uint *param_2);  /* @ 00018438 */
undefined4 rts_isp_set_isp_func(undefined4 param_1,int param_2);  /* @ 000185e4 */
undefined4 rts_isp_get_isp_func(undefined4 param_1,int param_2);  /* @ 00018638 */
void rts_isp_set_dehaze(undefined4 param_1,int param_2);  /* @ 0001868c */
byte rts_isp_get_dehaze(undefined4 param_1);  /* @ 00018710 */
undefined4 rts_isp_set_raw(undefined4 param_1,undefined1 param_2,uint param_3);  /* @ 00018758 */
int rts_isp_get_gray_mode(undefined4 param_1,uint *param_2);  /* @ 000187b0 */
undefined4 rts_isp_set_gray_mode(undefined4 param_1,byte param_2);  /* @ 0001881c */
int rts_isp_request_gpio(undefined4 param_1,uint param_2);  /* @ 00018880 */
int rts_isp_free_gpio(undefined4 param_1,uint param_2);  /* @ 00018918 */
int rts_isp_get_gpio_use_status(undefined4 param_1,byte param_2,uint *param_3);  /* @ 000189b0 */
int rts_isp_get_gpio_direction(undefined4 param_1,byte param_2,uint *param_3);  /* @ 00018a2c */
undefined4 rts_isp_set_gpio_direction(undefined4 param_1,byte param_2,uint param_3);  /* @ 00018aa8 */
int rts_isp_get_gpio_value(undefined4 param_1,byte param_2,uint *param_3);  /* @ 00018b18 */
undefined4 rts_isp_set_gpio_value(undefined4 param_1,byte param_2,uint param_3);  /* @ 00018b94 */
int rts_isp_get_streamid(undefined4 param_1);  /* @ 00018c04 */
undefined4 rts_isp_set_crop_window(undefined4 param_1,undefined1 param_2,int param_3);  /* @ 00018c94 */
void rts_isp_get_iq_table_attr(undefined4 param_1,undefined1 *param_2);  /* @ 00018d28 */
void rts_isp_set_wdr_mode(undefined4 param_1,undefined1 param_2);  /* @ 00018db8 */
uint rts_isp_get_wdr_mode(undefined4 param_1);  /* @ 00018e04 */
void rts_isp_set_wdr_level(undefined4 param_1,int param_2);  /* @ 00018e54 */
uint rts_isp_get_wdr_level(undefined4 param_1);  /* @ 00018eb8 */
void rts_isp_set_tpnr_level(undefined4 param_1,int param_2);  /* @ 00018f08 */
uint rts_isp_get_tpnr_level(undefined4 param_1);  /* @ 00018f6c */
void rts_isp_set_ir_mode(undefined4 param_1,undefined1 param_2);  /* @ 00018fbc */
uint rts_isp_get_ir_mode(undefined4 param_1);  /* @ 00019008 */
undefined4 rts_isp_set_in_out_door_mode(undefined4 param_1,uint param_2);  /* @ 00019058 */
uint rts_isp_get_in_out_door_mode(undefined4 param_1);  /* @ 000190b8 */
uint rts_isp_get_stream_count(void);  /* @ 00019108 */
uint rts_isp_get_smart_ir_mode(undefined4 param_1);  /* @ 00019188 */
undefined4 rts_isp_set_smart_ir_mode(undefined4 param_1,uint param_2);  /* @ 000191d8 */
uint rts_isp_get_smart_ir_manual_level(undefined4 param_1);  /* @ 00019238 */
undefined4 rts_isp_set_smart_ir_manual_level(undefined4 param_1,uint param_2);  /* @ 00019288 */
void rts_isp_set_dynamic_fps(undefined4 param_1,undefined1 param_2);  /* @ 000192e8 */
uint rts_isp_get_dynamic_fps(undefined4 param_1);  /* @ 00019334 */
int rts_isp_get_fov_mode(undefined4 param_1,undefined1 param_2,uint *param_3);  /* @ 00019384 */
void rts_isp_set_fov_mode(undefined4 param_1,undefined1 param_2,int param_3);  /* @ 000193f8 */
void rts_isp_set_noise_recuction_level(undefined4 param_1,char param_2);  /* @ 00019458 */
void rts_isp_get_noise_recuction_level(undefined4 param_1,int param_2);  /* @ 0001952c */
void rts_isp_set_detail_enhancement_level(undefined4 param_1,char param_2);  /* @ 000195cc */
void rts_isp_get_detail_enhancement_level(undefined4 param_1,int param_2);  /* @ 000196a0 */
undefined4 rts_isp_get_color_range_desc(undefined4 param_1,uint *param_2);  /* @ 00019740 */
undefined4 rts_isp_cvrt_point_res(undefined4 param_1,undefined4 *param_2,int *param_3,int *param_4);  /* @ 00019820 */
undefined * rts_isp_get_supported_snr_name(undefined4 param_1);  /* @ 00019a48 */
uint rts_isp_get_daynight_statis(undefined4 param_1);  /* @ 00019aec */
undefined4 rts_isp_enable_temporal_denoise(undefined4 param_1,undefined4 param_2);  /* @ 00019b40 */
undefined4 rts_isp_get_temporal_denoise_state(undefined4 param_1);  /* @ 00019bc8 */
undefined2 * rts_get_hw_id(undefined2 *param_1);  /* @ 00019c50 */

#endif /* LIBRTSISP_H */
