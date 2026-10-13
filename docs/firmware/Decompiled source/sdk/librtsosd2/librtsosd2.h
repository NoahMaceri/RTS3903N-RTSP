/* librtsosd2 — recovered function prototypes
 * On-screen-display (OSD2) overlay
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LIBRTSOSD2_H
#define LIBRTSOSD2_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00011778 */
void _fini(void);  /* @ 00015ce0 */

/* ---- dump ---- */
void __dump_blk_cmd(undefined *param_1,undefined *param_2);  /* @ 00011c88 */
void __dump_frame_cmd(int param_1);  /* @ 000121dc */
undefined4 __dump_color_table_reg(undefined4 param_1);  /* @ 000137ac */

/* ---- init ---- */
int __init_osd2_blocks(undefined4 param_1,int param_2);  /* @ 000125e4 */
void __init_osd2_pameters(int param_1);  /* @ 000126c4 */
undefined4 __init_osd2_color_table(int param_1,undefined4 *param_2);  /* @ 000127f0 */

/* ---- osd2 ---- */
undefined4 osd2_alloc_dma(undefined *param_1,int *param_2);  /* @ 00011b14 */
int osd2_encode_frame(undefined4 *param_1);  /* @ 0001383c */
undefined4 osd2_dump_register(undefined4 param_1);  /* @ 00014304 */
undefined4 osd2_dump_color_table(int *param_1);  /* @ 0001490c */
undefined4 osd2_set_default_color_table(int *param_1);  /* @ 00014a24 */
undefined4 osd2_set_color_table (int *param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5, undefined1 param_6,byte param_7);  /* @ 00014b24 */
uint osd2_get_color_table (int *param_1,int param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5, byte param_6);  /* @ 00014ce0 */
undefined4 osd2_ewl_release(int *param_1);  /* @ 00014f9c */
int osd2_ewl_init(void);  /* @ 0001501c */
void osd2_ewl_read_reg(int *param_1);  /* @ 00015154 */
void osd2_ewl_write_reg(int *param_1);  /* @ 000151c4 */
undefined4 osd2_ewl_reserve_hw(int *param_1);  /* @ 00015238 */
void osd2_ewl_release_hw(int *param_1);  /* @ 00015384 */
void osd2_ewl_start_hw(int *param_1);  /* @ 00015418 */
undefined4 osd2_ewl_check_done(int param_1);  /* @ 000154c4 */
undefined4 osd2_ewl_make_rdy(undefined *param_1);  /* @ 0001555c */
undefined4 osd2_ewl_wait_hw_ready(undefined4 *param_1);  /* @ 00015624 */
undefined4 osd2_ewl_set_epoll_hook(undefined *param_1,undefined *param_2,undefined4 param_3);  /* @ 000158c4 */
undefined4 osd2_ewl_use_sigio(undefined *param_1,undefined *param_2);  /* @ 00015948 */

/* ---- rts ---- */
undefined4 rts_osd2_release(int *param_1);  /* @ 000128fc */
int rts_osd2_init(int *param_1,int *param_2);  /* @ 000129d0 */
undefined4 rts_osd2_update(int param_1,int param_2);  /* @ 00012c98 */
int rts_osd2_config_block(int param_1,undefined *param_2,uint *param_3);  /* @ 00012cf4 */
undefined4 rts_osd2_query_block(undefined *param_1,undefined *param_2,undefined4 param_3,undefined *param_4);  /* @ 00013274 */
undefined4 rts_osd2_enable_block(undefined *param_1,undefined *param_2);  /* @ 00013380 */
undefined4 rts_osd2_disable_block(undefined *param_1,undefined *param_2);  /* @ 000134e0 */
undefined4 rts_osd2_set_attr(undefined *param_1,undefined *param_2,int *param_3);  /* @ 00013588 */
undefined4 rts_osd2_get_attr(undefined *param_1,undefined *param_2,int param_3);  /* @ 000136c4 */
int rts_osd2_encode(undefined4 *param_1,int *param_2);  /* @ 00013948 */
undefined4 rts_osd2_set_color_table (undefined *param_1,undefined *param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5,undefined1 param_6,undefined1 param_7);  /* @ 00013ba4 */
undefined4 rts_osd2_get_color_table (undefined *param_1,undefined *param_2,undefined1 param_3,undefined1 param_4, undefined1 param_5,undefined1 param_6);  /* @ 00013c8c */
undefined4 rts_osd2_get_blk_max_num(void);  /* @ 00013d6c */
void rts_osd2_set_adma_copy(undefined *param_1,undefined *param_2);  /* @ 00013d74 */
undefined4 rts_osd2_get_adma_copy(undefined *param_1);  /* @ 00013e10 */
void rts_osd2_set_epoll_hook(undefined4 *param_1);  /* @ 00013e5c */
void rts_osd2_check_done(undefined4 *param_1);  /* @ 00013ee4 */
void rts_osd2_make_rdy(undefined4 *param_1);  /* @ 00013f6c */
void rts_osd2_use_sigio(undefined4 *param_1);  /* @ 00013ff4 */
void rts_osd2_set_register(int param_1,undefined *param_2,int param_3);  /* @ 00014080 */
uint rts_osd2_get_register(int param_1,undefined *param_2);  /* @ 000141e4 */
void rts_osd2_set_cmd(int param_1,undefined4 param_2,int param_3);  /* @ 000144b0 */
uint rts_osd2_get_cmd(int param_1,undefined4 param_2);  /* @ 00014620 */
void rts_dump_frame_cmd(undefined4 param_1);  /* @ 00014730 */
void rts_dump_blk_cmd(undefined4 param_1);  /* @ 000147e8 */

/* ---- write ---- */
undefined4 __write_each_blk_info_cmd(undefined *param_1,undefined *param_2);  /* @ 00011da4 */
int __write_enable_blk_info_cmd(int param_1);  /* @ 00012048 */
undefined4 __write_frame_info_cmd(int param_1,undefined4 *param_2);  /* @ 00012234 */
undefined4 __write_color_table_info_cmd(int param_1);  /* @ 0001239c */

/* ---- misc ---- */
void processEntry entry(void);  /* @ 000117f0 */
uint __make_attribute(uint param_1);  /* @ 00011d30 */
undefined4 __get_color_mode_val(int param_1);  /* @ 00011d38 */
int __check_blk_valid_num(int param_1);  /* @ 000124c0 */
undefined4 __alloc_osd2_dma_buf(undefined *param_1);  /* @ 00012700 */
void __free_osd2_dma_buf(int param_1);  /* @ 000127c4 */

#endif /* LIBRTSOSD2_H */
