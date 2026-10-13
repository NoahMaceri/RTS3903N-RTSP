/* rts_cam_lock — recovered function prototypes
 * /dev/rtslock arbitration (counting semaphores)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef RTS_CAM_LOCK_H
#define RTS_CAM_LOCK_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- rtscam ---- */
undefined4 rtscam_lock_alloc(int param_1,int param_2);  /* @ 000101b8 */
undefined4 rtscam_lock_free(int param_1,undefined4 param_2);  /* @ 000102bc */
undefined4 rtscam_lock_set_num(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00010374 */
undefined4 rtscam_lock_set_name(int param_1,undefined4 *param_2);  /* @ 0001041c */
undefined4 rtscam_lock_wait(int param_1,undefined4 param_2);  /* @ 000104d4 */
undefined4 rtscam_lock_post(int param_1,undefined4 param_2);  /* @ 000105e4 */
int rtscam_allocate_wait_queue(undefined4 param_1);  /* @ 00010840 */
undefined4 rtscam_release_wait_queue(int *param_1);  /* @ 000108cc */
undefined4 rtscam_init_wait_queue(int param_1,int param_2);  /* @ 000109ac */
int rtscam_wait_timeout(int param_1,int param_2);  /* @ 000109d4 */
undefined4 rtscam_wait(int param_1);  /* @ 00010b98 */
undefined4 rtscam_post(int *param_1);  /* @ 00010bac */

/* ---- misc ---- */
undefined4 init_module(void);  /* @ 00010c50 */
void cleanup_module(void);  /* @ 00010dbc */

#endif /* RTS_CAM_LOCK_H */
