/* rts_camera_soc — recovered function prototypes
 * Camera SoC glue / ISP register bridge
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef RTS_CAMERA_SOC_H
#define RTS_CAMERA_SOC_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- rtscam ---- */
undefined4 rtscam_soc_start_clock(int param_1);  /* @ 000100e4 */
undefined4 rtscam_soc_stop_clock(int param_1);  /* @ 00010110 */
undefined4 rtscam_soc_get_ctrl(int param_1,int *param_2,int param_3);  /* @ 0001013c */
undefined4 rtscam_soc_put_ctrl(void);  /* @ 000101a8 */
void rtscam_soc_exec_vcmd(undefined4 param_1,undefined4 *param_2);  /* @ 00010254 */
void rtscam_soc_set_fps(int *param_1,int param_2);  /* @ 00011850 */
uint rtscam_soc_get_dynamic_fps(int param_1);  /* @ 000118c8 */
int rtscam_soc_submit_buffer(int *param_1,int param_2);  /* @ 000119e0 */
uint rtscam_soc_probe(int param_1);  /* @ 000126c0 */
undefined4 rtscam_soc_free_mcu_gpio(uint param_1);  /* @ 00012c44 */
undefined4 rtscam_soc_init_capture_buffers(int *param_1);  /* @ 00012cd8 */
int rtscam_soc_get_device_des(undefined4 param_1,undefined1 *param_2);  /* @ 00013664 */
int rtscam_soc_get_frmival_desc(int param_1,byte *param_2);  /* @ 00013708 */
int rtscam_soc_get_vs_format_desc(undefined4 param_1,undefined1 *param_2);  /* @ 00013898 */
int rtscam_soc_get_isp_processing_desc(undefined4 param_1,undefined1 *param_2);  /* @ 00013940 */
int rtscam_soc_get_camera_desc(undefined4 param_1,undefined1 *param_2);  /* @ 00013958 */
int rtscam_soc_get_ext_controls_desc(undefined4 param_1,undefined1 *param_2);  /* @ 00013970 */
int rtscam_soc_get_hclk_desc(undefined4 param_1,undefined1 *param_2);  /* @ 00013988 */
int rtscam_soc_get_fw_version(undefined4 param_1,byte *param_2);  /* @ 00013a18 */
int rtscam_soc_get_snr_power(undefined4 param_1,undefined1 *param_2);  /* @ 00013bcc */
int rtscam_soc_get_api_version(undefined4 param_1,undefined1 *param_2);  /* @ 00013c50 */
int rtscam_soc_get_snr_power_seq(undefined4 param_1,byte *param_2,byte *param_3);  /* @ 00013ccc */
void rtscam_soc_prepare_snr_pwron(undefined4 param_1);  /* @ 00013dbc */
int rtscam_soc_get_sensor_id(undefined4 param_1,void *param_2,uint param_3);  /* @ 00013e00 */
void rtscam_soc_start_preview(int *param_1);  /* @ 00013ec8 */
void rtscam_soc_stop_preview(int *param_1);  /* @ 00013f20 */
void rtscam_soc_pause_video(int *param_1);  /* @ 00013f70 */
void rtscam_soc_resume_video(int *param_1);  /* @ 00013fc0 */
void rtscam_soc_set_format(int *param_1);  /* @ 00014010 */
int rtscam_soc_get_3dnr_mode(undefined4 param_1,uint *param_2);  /* @ 00014064 */
int rtscam_soc_get_td_buf(int param_1,ushort *param_2);  /* @ 000140d4 */
void rtscam_soc_ctrl_query_ctrl (undefined4 param_1,short param_2,ushort param_3,undefined1 param_4, undefined1 param_5,undefined4 param_6);  /* @ 000142e4 */
int rtscam_soc_query_ctrl (int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4, undefined1 param_5,undefined4 param_6);  /* @ 0001433c */
void rtscam_soc_get_snr_fmt(undefined4 param_1,undefined2 *param_2);  /* @ 00014418 */
void rtscam_soc_get_isp_func(undefined4 param_1,undefined1 *param_2);  /* @ 00014494 */
void rtscam_soc_set_isp_func(undefined4 param_1,undefined1 param_2);  /* @ 00014500 */
undefined4 __rtscam_soc_s_stream(int *param_1,int param_2);  /* @ 00014738 */
undefined4 rtscam_soc_s_stream(int *param_1,int param_2);  /* @ 00014c68 */
undefined4 rtscam_soc_get_gpio_use_status(undefined4 param_1,byte param_2,int param_3);  /* @ 00014dfc */
undefined4 rtscam_soc_request_mcu_gpio(undefined4 param_1);  /* @ 00014f04 */
undefined4 rtscam_soc_get_gpio_direction(undefined4 param_1,byte param_2,int param_3);  /* @ 00015d64 */
uint rtscam_soc_get_mcu_gpio_direction(undefined1 param_1);  /* @ 00015dc8 */
undefined4 rtscam_soc_set_gpio_direction(undefined4 param_1,byte param_2,char param_3);  /* @ 00015e38 */
undefined4 rtscam_soc_set_mcu_gpio_direction(byte param_1,char param_2);  /* @ 00015eb0 */
undefined4 rtscam_soc_get_gpio_value(undefined4 param_1,byte param_2,int param_3);  /* @ 00015f00 */
uint rtscam_soc_get_mcu_gpio_value(undefined1 param_1);  /* @ 00015f64 */
undefined4 rtscam_soc_set_gpio_value(undefined4 param_1,byte param_2,char param_3);  /* @ 00015fd4 */
undefined4 rtscam_soc_set_mcu_gpio_value(byte param_1,char param_2);  /* @ 0001604c */
void rtscam_soc_set_dynamic_fps(int *param_1,undefined1 param_2);  /* @ 0001609c */
undefined * rtscam_soc_attach(undefined4 *param_1);  /* @ 00016138 */
undefined4 rtscam_soc_detach(undefined4 *param_1);  /* @ 00016e50 */
undefined4 rtscam_soc_remove(int param_1);  /* @ 000178e0 */

/* ---- misc ---- */
int __enable_td(undefined4 param_1);  /* @ 00014550 */
int __disable_td(undefined4 param_1);  /* @ 00014664 */
uint __compare_api_version(byte *param_1,byte param_2,byte param_3);  /* @ 000160f4 */
void init_module(void);  /* @ 00017a00 */
void cleanup_module(void);  /* @ 00017a18 */

#endif /* RTS_CAMERA_SOC_H */
