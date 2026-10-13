/* librtscamkit — recovered function prototypes
 * Camera kit: thread pool, buffer and helper routines
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LIBRTSCAMKIT_H
#define LIBRTSCAMKIT_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00011bb4 */
void _fini(void);  /* @ 00017320 */

/* ---- rts ---- */
undefined4 processEntry rts_log_destroy(void);  /* @ 00011c30 */
undefined4 rts_log_init(void);  /* @ 00011cb8 */
undefined4 rts_is_integer(char *param_1);  /* @ 00011fa4 */
undefined4 rts_get_file_size(int param_1);  /* @ 00012068 */
undefined4 rts_save_raw_data(int param_1,int param_2,int param_3);  /* @ 00012110 */
undefined4 rts_save_yuv_image(int param_1,int param_2,int param_3,undefined *param_4,int param_5);  /* @ 00012250 */
void rts_dump_trace(void);  /* @ 00012478 */
uint rts_test_bit(undefined *param_1,int param_2,undefined *param_3);  /* @ 000125ac */
void rts_set_bit(undefined *param_1,int param_2,undefined *param_3);  /* @ 000126f8 */
void rts_clear_bit(undefined *param_1,int param_2,undefined *param_3);  /* @ 0001284c */
void rts_change_bit(undefined *param_1,int param_2,undefined *param_3);  /* @ 000129a4 */
uint rts_get_bits_val(int param_1,int param_2,int param_3,uint param_4);  /* @ 00012b14 */
void rts_set_bits_val(int param_1,int param_2,uint param_3,uint param_4,uint param_5);  /* @ 00012d18 */
void rts_negate_bits(byte *param_1,int param_2);  /* @ 00012f0c */
void rts_buffer_test_bit(undefined4 *param_1,undefined *param_2);  /* @ 00012fa4 */
void rts_buffer_set_bit(undefined4 *param_1,undefined *param_2);  /* @ 00013038 */
void rts_buffer_clear_bit(undefined4 *param_1,undefined *param_2);  /* @ 000130cc */
void rts_buffer_change_bit(undefined4 *param_1,undefined *param_2);  /* @ 00013160 */
void rts_buffer_get_bits_val(undefined4 *param_1,undefined *param_2,undefined4 param_3);  /* @ 000131f4 */
void rts_buffer_set_bits_val (undefined4 *param_1,undefined *param_2,undefined4 param_3,undefined *param_4);  /* @ 00013290 */
void rts_buffer_negate(undefined4 *param_1);  /* @ 00013338 */
void rts_get_realtime_time(void);  /* @ 000133c8 */
void rts_get_monotonic_time(void);  /* @ 0001342c */
void rts_get_monotonic_raw_time(void);  /* @ 00013490 */
int rts_memweight(uint *param_1,undefined *param_2);  /* @ 000134f4 */
int rts_memweight_v2(int param_1,undefined *param_2,uint param_3);  /* @ 00013638 */
undefined4 rts_alloc_buffer(int *param_1,undefined *param_2);  /* @ 0001372c */
undefined4 rts_alloc_bitmap(undefined4 *param_1,undefined *param_2);  /* @ 00013814 */
void rts_free_buffer(int *param_1);  /* @ 00013930 */
void rts_free_bitmap(undefined4 *param_1);  /* @ 00013980 */
ushort rts_pollin(undefined4 param_1,undefined4 param_2);  /* @ 000139c4 */
void rts_delay(undefined4 param_1,undefined4 param_2);  /* @ 00013a1c */
undefined * rts_strerrno(uint param_1);  /* @ 00013ac0 */
uint RTS_IS_ERR(uint param_1);  /* @ 00013e28 */
void rts_log(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00013ec8 */
undefined4 rts_set_log_ident(int param_1);  /* @ 00014060 */
undefined4 rts_set_log_mask(uint param_1);  /* @ 00014138 */
undefined4 rts_get_log_mask(void);  /* @ 00014268 */
undefined4 rts_clr_log_mask(void);  /* @ 00014280 */
undefined4 rts_set_log_file(char *param_1);  /* @ 000142e4 */
undefined4 rts_set_log_callback(undefined4 param_1);  /* @ 00014420 */
uint rts_set_log_level(uint param_1);  /* @ 00014484 */
undefined4 rts_get_log_level(void);  /* @ 0001453c */
undefined4 rts_clr_log_level(void);  /* @ 00014554 */
undefined4 rts_check_log_priority(uint param_1);  /* @ 000145bc */
undefined4 rts_set_log_enable(uint param_1,int param_2);  /* @ 000145cc */
uint rts_get_log_enable(uint param_1);  /* @ 000146a4 */
void rts_dump_data(int param_1,uint param_2,uint param_3);  /* @ 0001470c */
void rts_semaphore_deallocate(undefined4 param_1);  /* @ 000148b8 */
int rts_semaphore_wait(undefined4 param_1,undefined2 param_2);  /* @ 000148d8 */
int rts_semaphore_post(undefined4 param_1,undefined2 param_2);  /* @ 00014984 */
void rts_semaphore_initialize(undefined4 param_1,undefined4 param_2);  /* @ 00014a30 */
undefined4 rts_init_queue(undefined *param_1);  /* @ 00014cf4 */
int rts_queue_init(void);  /* @ 00014da4 */
bool rts_queue_empty(undefined *param_1);  /* @ 00014e08 */
undefined4 rts_queue_push_back(undefined *param_1,undefined *param_2);  /* @ 000150f8 */
undefined4 rts_queue_pop(undefined *param_1);  /* @ 000151d4 */
void rts_queue_add(undefined *param_1,undefined *param_2);  /* @ 000152c8 */
void rts_queue_rm(undefined *param_1);  /* @ 00015370 */
void rts_queue_del(undefined *param_1,undefined *param_2);  /* @ 00015490 */
undefined4 rts_queue_insert(undefined *param_1,undefined *param_2,undefined4 param_3,undefined *param_4);  /* @ 00015540 */
undefined4 rts_queue_insert_at(undefined *param_1,undefined *param_2,int param_3);  /* @ 0001562c */
undefined4 rts_queue_swap(undefined *param_1,undefined *param_2,undefined4 param_3);  /* @ 00015764 */
undefined4 rts_queue_check(undefined *param_1,undefined *param_2);  /* @ 0001586c */
void rts_queue_clear(undefined *param_1,code *param_2);  /* @ 00015934 */
undefined4 rts_destroy_queue(undefined *param_1);  /* @ 00015a20 */
void rts_queue_destroy(int param_1);  /* @ 00015b80 */
void rts_queue_lock(int param_1);  /* @ 00015bdc */
void rts_queue_unlock(int param_1);  /* @ 00015c60 */
undefined4 rts_queue_count(undefined *param_1);  /* @ 00015ce4 */
void rts_queue_enumerate(int param_1);  /* @ 00015d60 */
void rts_pthreadpool_destroy(int param_1);  /* @ 000160b0 */
undefined4 rts_pthreadpool_add_task_ex(int param_1,int param_2,int param_3,undefined *param_4,uint param_5);  /* @ 0001626c */
void rts_pthreadpool_add_task(void);  /* @ 0001640c */
void rts_thread_count(undefined *param_1);  /* @ 00016444 */
int rts_task_count(int param_1);  /* @ 00016498 */
undefined4 rts_pthreadpool_set_limit(undefined *param_1,undefined *param_2);  /* @ 00016538 */
int rts_pthreadpool_init(int param_1);  /* @ 0001658c */
undefined4 rts_pthreadpool_del_task(int param_1,undefined *param_2,int param_3);  /* @ 00016838 */
undefined4 rts_pthreadpool_del_tasks (undefined *param_1,undefined *param_2,undefined4 param_3,code *param_4,code *param_5);  /* @ 00016a10 */
undefined4 __rts_malloc(undefined4 param_1);  /* @ 00016c30 */
void rts_free(int param_1);  /* @ 00016c90 */
undefined4 __rts_calloc(int param_1,int param_2);  /* @ 00016cf8 */
int __rts_realloc(int param_1,undefined4 param_2);  /* @ 00016d60 */
undefined4 rts_get_bit_per_pixel(int param_1);  /* @ 00016e00 */
int rts_cvrt_pix_fmt_to_v4l2(uint param_1);  /* @ 00016ee0 */
undefined4 rts_cvrt_pix_fmt_from_v4l2(uint param_1);  /* @ 00016f70 */

/* ---- misc ---- */
void binary_semaphore_getval(undefined4 param_1,undefined4 param_2);  /* @ 00014a64 */
int * __find_node(int param_1,int param_2);  /* @ 00014fc8 */
void __delete_task(int param_1);  /* @ 00015df0 */
undefined4 thread_run(int param_1);  /* @ 00015e68 */
void __new_task(undefined4 param_1,undefined4 param_2);  /* @ 00016028 */
void __join_thread(undefined4 param_1);  /* @ 00016094 */
void show_mem_used(void);  /* @ 00016c20 */
void show_mem_info(void);  /* @ 00016c28 */

#endif /* LIBRTSCAMKIT_H */
