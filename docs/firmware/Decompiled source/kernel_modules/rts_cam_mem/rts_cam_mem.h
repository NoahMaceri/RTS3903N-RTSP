/* rts_cam_mem — recovered function prototypes
 * /dev/rtsmem DMA memory allocator
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef RTS_CAM_MEM_H
#define RTS_CAM_MEM_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- rts ---- */
int rts_get_mem_info(void);  /* @ 00010110 */
void rts_put_mem_info(void);  /* @ 0001013c */
int rts_isp_mem_probe(int param_1);  /* @ 00011020 */
undefined4 rts_isp_mem_remove(int param_1);  /* @ 00011318 */
void rts_dma_contig_cleanup_ctx(undefined4 *param_1);  /* @ 00013c98 */
undefined4 * rts_dma_contig_init_ctx(undefined4 *param_1);  /* @ 00013e04 */

/* ---- rtscam ---- */
int rtscam_mem_get_total_size(int param_1);  /* @ 00011794 */
undefined4 rtscam_mem_find(int param_1,int param_2);  /* @ 000117c0 */
bool rtscam_vma_is_io(int param_1);  /* @ 000117f8 */
undefined4 rtscam_mem_set_info(int param_1,int param_2,char *param_3);  /* @ 00011808 */
int rtscam_mem_alloc(int param_1,int param_2,undefined4 *param_3,undefined4 param_4);  /* @ 00011964 */
void rtscam_mem_put_bitmap(int param_1);  /* @ 00011b2c */
int rtscam_mem_get_bitmap(int param_1);  /* @ 00011b4c */
void rtscam_put_sg_buf(int param_1);  /* @ 00011cd4 */
int rtscam_mem_get_left_size(int param_1);  /* @ 00011ddc */
void rtscam_mem_free(int param_1,int param_2,int param_3,int param_4);  /* @ 00011e2c */
void rtscam_mem_free_V2(int param_1,int param_2);  /* @ 00011fcc */
int rtscam_mem_convert_v2d(int param_1,uint param_2);  /* @ 000120ac */
int rtscam_mem_convert_d2v(int param_1,uint param_2);  /* @ 0001216c */
int rtscam_mem_enum(int param_1,int param_2);  /* @ 00012238 */
undefined4 rtscam_mem_release(undefined4 *param_1);  /* @ 000122b0 */
undefined4 rtscam_mem_init(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5);  /* @ 000123ac */
bool rtscam_vaddr_is_io(undefined4 param_1);  /* @ 00012514 */
int rtscam_get_user_pages(uint param_1,int param_2,uint param_3,int param_4,undefined4 param_5);  /* @ 0001259c */
undefined4 * rtscam_get_sg_buf(undefined4 *param_1,uint param_2,uint param_3,int param_4);  /* @ 00012730 */
int rtscam_mem_get_used_size(int param_1);  /* @ 00012bb0 */
int rtscam_mem_realloc(int param_1,int param_2,uint *param_3,undefined4 param_4);  /* @ 00012bf8 */
undefined4 rtscam_mem_check(int param_1,uint param_2,int param_3,int *param_4);  /* @ 00012d8c */
int rtscam_mem_mmap(int param_1,int *param_2,int param_3,int param_4,int param_5);  /* @ 00012ea8 */

/* ---- misc ---- */
void init_module(void);  /* @ 00014500 */
void cleanup_module(void);  /* @ 00014518 */

#endif /* RTS_CAM_MEM_H */
