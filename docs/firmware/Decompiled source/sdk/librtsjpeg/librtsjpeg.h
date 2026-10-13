/* librtsjpeg — recovered function prototypes
 * JPEG / MJPEG encode
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LIBRTSJPEG_H
#define LIBRTSJPEG_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 000112dc */
undefined4 start_asic_enc_frame(undefined4 *param_1);  /* @ 0001265c */
void _fini(void);  /* @ 000140c0 */

/* ---- ewl ---- */
undefined4 ewl_read_reg(int param_1);  /* @ 00011520 */
void ewl_write_reg(int param_1);  /* @ 00011554 */
void ewl_reset_hw(int param_1);  /* @ 00011588 */
undefined4 ewl_reserve_hw(int param_1);  /* @ 000115bc */
void ewl_release_hw(int param_1);  /* @ 00011698 */
void ewl_start_hw(undefined *param_1);  /* @ 000116f4 */
undefined4 ewl_wait_hw_ready(int param_1);  /* @ 000118c0 */
void ewl_malloc(undefined4 param_1);  /* @ 00011c48 */
void ewl_free(int param_1);  /* @ 00011c6c */
undefined4 ewl_release(int *param_1);  /* @ 00011c94 */
void ewl_calloc(undefined4 param_1,undefined4 param_2);  /* @ 00011d34 */
int * ewl_init(void);  /* @ 00011d58 */

/* ---- jpg ---- */
undefined4 jpg_ewl_check_done(undefined4 param_1);  /* @ 00011804 */
undefined4 jpg_ewl_make_rdy(int param_1);  /* @ 00011840 */
undefined4 jpg_ewl_set_epoll_hook(undefined *param_1,undefined *param_2,undefined4 param_3);  /* @ 00011b34 */
undefined4 jpg_ewl_use_sigio(undefined *param_1,undefined *param_2);  /* @ 00011bb8 */

/* ---- rtsjpgenc ---- */
void rtsjpgenc_set_register(int param_1,int param_2,int param_3);  /* @ 00011f20 */
uint rtsjpgenc_get_register(int param_1,int param_2);  /* @ 00012014 */
undefined4 rtsjpgenc_init(int *param_1);  /* @ 0001239c */
undefined4 rtsjpgenc_release(undefined4 *param_1);  /* @ 0001246c */
undefined4 rtsjpgenc_set_config(int param_1,uint *param_2);  /* @ 000124e8 */
int rtsjpgenc_encode(undefined4 *param_1,uint *param_2);  /* @ 000138ec */
undefined4 rtsjpgenc_get_coding_ctrl(int param_1,byte *param_2);  /* @ 00013ab8 */
undefined4 rtsjpgenc_set_coding_ctrl(int param_1,byte *param_2);  /* @ 00013b30 */
void rtsjpgenc_set_epoll_hook(undefined4 *param_1);  /* @ 00013be8 */
void rtsjpgenc_check_done(undefined4 *param_1);  /* @ 00013c70 */
void rtsjpgenc_make_rdy(undefined4 *param_1);  /* @ 00013cf8 */
void rtsjpgenc_use_sigio(undefined4 *param_1);  /* @ 00013d80 */

/* ---- misc ---- */
void processEntry entry(void);  /* @ 00011360 */
ushort clip_word(ushort param_1,ushort param_2,ushort param_3);  /* @ 000120c0 */
uint calc_qtable_item(uint param_1);  /* @ 000120f8 */
void write_jpeg_qtable(undefined4 param_1,undefined1 param_2);  /* @ 00012160 */
void read_jpeg_qtable(undefined4 param_1,undefined1 param_2);  /* @ 000121d4 */
void init_jpeg_table(undefined4 param_1);  /* @ 0001223c */
void set_jpgenc_component(int param_1);  /* @ 000122f0 */
undefined4 init_dft_parameters(int param_1);  /* @ 00012334 */
void check_asic_enc_regs(undefined4 *param_1);  /* @ 00012bac */
undefined4 check_frame(int param_1);  /* @ 000136a4 */
int encode_frame(undefined4 *param_1);  /* @ 00013774 */

#endif /* LIBRTSJPEG_H */
