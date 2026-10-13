/* rts_cam — recovered function prototypes
 * Camera core driver
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef RTS_CAM_H
#define RTS_CAM_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- rtscam ---- */
uint rtscam_usercopy(undefined4 param_1,uint param_2,undefined1 *param_3,code *param_4);  /* @ 00010340 */
void rtscam_get_timestamp(undefined4 *param_1);  /* @ 00010630 */
undefined4 rtscam_register_format(int param_1,undefined1 *param_2);  /* @ 000106c4 */
undefined4 rtscam_register_frame_stepwise (int param_1,uint param_2,int *param_3,undefined4 *param_4,undefined4 *param_5);  /* @ 00010830 */
undefined4 rtscam_register_frame_discrete(int param_1,uint param_2,int *param_3);  /* @ 000109d8 */
undefined4 rtscam_clr_frame(int param_1);  /* @ 00010b88 */
undefined4 rtscam_clr_format(int param_1);  /* @ 00010bf8 */
int rtscam_check_stream_format(int param_1);  /* @ 00010cd0 */
undefined4 rtscam_check_user_format (undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6);  /* @ 00010df4 */
undefined4 rtscam_try_user_format(undefined4 param_1,int param_2,int param_3,int param_4);  /* @ 00010f38 */
undefined4 rtscam_set_user_format(int param_1,uint param_2,int param_3,int param_4);  /* @ 00010fb4 */
int rtscam_set_user_frmival(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00011154 */
undefined4 rtscam_get_max_frame_size(int param_1,int *param_2);  /* @ 000111d4 */
undefined4 rtscam_devdata(int param_1);  /* @ 00011270 */
void rtscam_ge_device_alloc(void);  /* @ 00011458 */
void rtscam_ge_device_release(int param_1);  /* @ 00011474 */
void rtscam_ge_kill_fasync(int param_1);  /* @ 00011494 */
int rtscam_ge_register_device(int *param_1);  /* @ 00011848 */
void rtscam_ge_unregister_device(int param_1);  /* @ 00011c74 */
undefined4 rtscam_get_video_buffer(int param_1,uint param_2);  /* @ 00011d20 */
void rtscam_buf_cleanup(void);  /* @ 00011d58 */
undefined4 rtscam_buf_start_streaming(void);  /* @ 00011d60 */
undefined4 rtscam_buf_stop_stream(void);  /* @ 00011d68 */
undefined4 rtscam_get_phy_addr(int param_1,undefined4 *param_2);  /* @ 00011d70 */
int rtscam_queue_setup(int param_1,int param_2,uint *param_3,undefined4 *param_4,int *param_5, undefined4 *param_6);  /* @ 00011e2c */
void rtscam_buf_wait_prepare(int param_1);  /* @ 00011f4c */
void rtscam_buf_wait_finish(int param_1);  /* @ 00011f64 */
undefined4 rtscam_video_unregister_device(undefined4 param_1);  /* @ 00012060 */
int rtscam_video_register_device(int *param_1);  /* @ 000125d4 */
undefined4 rtscam_push_back_ready_buffer(int param_1,int param_2);  /* @ 00012b00 */
void rtscam_buffer_wq_handle(int param_1);  /* @ 00012b9c */
undefined4 rtscam_buf_init(int param_1);  /* @ 00012bc0 */
undefined4 rtscam_buf_prepare(int param_1);  /* @ 00012bd4 */
undefined4 rtscam_buf_finish(int param_1);  /* @ 00012bec */
undefined4 rtscam_convert_addr_from_vm_to_phy(int param_1,int param_2,undefined4 *param_3);  /* @ 00012c04 */
int rtscam_video_do_ctrl_ioctl(int param_1,uint param_2,undefined4 *param_3);  /* @ 00012d84 */
void rtscam_init_capture_buffer(int *param_1);  /* @ 00012f60 */
undefined4 rtscam_set_buffer_state(int param_1,uint param_2);  /* @ 00012ff8 */
int * rtscam_pop_ready_buffer(int param_1);  /* @ 00013020 */
int rtscam_submit_buffer(int *param_1,int param_2);  /* @ 00013060 */
void rtscam_buf_queue(int param_1);  /* @ 0001311c */
void rtscam_clr_ready_buffer(int param_1);  /* @ 000131bc */
void rtscam_delay_buffer(int param_1,int param_2);  /* @ 00013224 */
void rtscam_buffer_done(int param_1,int param_2,undefined4 param_3);  /* @ 000132e0 */
void rtscam_clr_delayed_buffer(int param_1);  /* @ 000133f0 */
uint rtscam_get_le_value(int param_1,undefined4 param_2,int param_3);  /* @ 00014620 */
void rtscam_set_le_value(int param_1,int param_2,int param_3);  /* @ 00014724 */
undefined4 rtscam_ctrl_add_info(int param_1,void *param_2);  /* @ 000149a4 */
void rtscam_ctrl_clr_info(int param_1);  /* @ 00014a8c */
void rtscam_ctrl_clr_mapping(int param_1);  /* @ 00014acc */
undefined4 rtscam_ctrl_add_mapping(int param_1,int param_2);  /* @ 00014b80 */
int rtscam_find_ctrl(int param_1,uint param_2,int *param_3);  /* @ 00014e0c */
int __rtscam_query_v4l2_ctrl(undefined4 param_1,int param_2,int param_3,undefined4 *param_4);  /* @ 000153a8 */
undefined4 rtscam_query_v4l2_ctrl(int param_1,undefined4 *param_2);  /* @ 000155f4 */
int rtscam_ctrl_get(undefined4 param_1,uint param_2);  /* @ 000156cc */
void rtscam_get_ctrl(undefined4 param_1,undefined4 *param_2);  /* @ 000158ec */
void rtscam_set_ctrl(undefined4 param_1,undefined4 *param_2);  /* @ 00015960 */
int rtscam_get_ext_ctrls(int param_1,int param_2);  /* @ 000159e0 */
void rtscam_set_ext_ctrls(undefined4 param_1,int param_2);  /* @ 00015a00 */
void rtscam_try_ext_ctrls(undefined4 param_1,int param_2);  /* @ 00015a34 */
int rtscam_video_init_ctrl(int param_1);  /* @ 00015a6c */
undefined4 rtscam_video_release_ctrl(int param_1);  /* @ 00015b34 */
void rtscam_set_user_fps(uint *param_1,uint param_2,uint param_3);  /* @ 00015c90 */
void rtscam_exec_sensor_frmival_setting(int *param_1,int param_2);  /* @ 00015db8 */
void __rtscam_update_sensor_fps(int param_1,uint param_2);  /* @ 00015e54 */
undefined4 rtscam_release_sensor_fps(int param_1);  /* @ 00016038 */
void rtscam_adjust_sensor_fps(int param_1,int param_2,undefined4 param_3,uint param_4);  /* @ 000160a8 */
int rtscam_skip_frame(int param_1);  /* @ 00016280 */
void rtscam_disable_snr_fps_max(int param_1);  /* @ 00016360 */
void rtscam_process_dynamic_sensor_fps(int param_1);  /* @ 000163bc */
void rtscam_enable_snr_fps_max(uint *param_1);  /* @ 00016448 */
undefined4 rtscam_init_sensor_fps(uint *param_1,byte *param_2,uint param_3);  /* @ 000164e0 */
void rtscam_set_sensor_frmival(undefined4 *param_1,undefined4 param_2);  /* @ 000166b4 */
undefined4 rtscam_register_frmival_discrete(int param_1,int param_2,int *param_3);  /* @ 00016804 */
undefined4 rtscam_clr_frmival(char *param_1);  /* @ 0001691c */

/* ---- misc ---- */
uint rts_test_bit(int param_1,uint param_2);  /* @ 0001023c */
void rts_clear_bit(int param_1,uint param_2);  /* @ 00010258 */
void find_format_by_fourcc(int param_1,int param_2);  /* @ 0001069c */
void find_frame(int param_1,int param_2,int param_3);  /* @ 000109a4 */
int Camera(int param_1,uint param_2,int *param_3);  /* @ 000138c4 */
int get_video_frmival(undefined4 param_1,uint param_2,uint param_3,uint param_4);  /* @ 000166c8 */
int init_module(void);  /* @ 00016950 */
void cleanup_module(void);  /* @ 00016a34 */

#endif /* RTS_CAM_H */
