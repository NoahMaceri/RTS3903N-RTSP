/* rtsx-icr — recovered function prototypes
 * ICR / card-reader support
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef RTSX_ICR_H
#define RTSX_ICR_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- rtsx ---- */
undefined4 rtsx_icr_ocp_register_set (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 000105e0 */
int rtsx_icr_ocp_register_get(undefined4 param_1,undefined4 param_2,char *param_3);  /* @ 0001078c */
undefined4 rtsx_icr_resp_type(undefined4 *param_1,uint param_2);  /* @ 00010c84 */
void rtsx_icr_remove_card(int param_1);  /* @ 00010d0c */
void rtsx_icr_insert_card(int param_1);  /* @ 00010d74 */
void __rtsx_icr_add_cmd(int param_1,int param_2,uint param_3,uint param_4,byte param_5);  /* @ 00010fd8 */
void rtsx_icr_send_cmd(int param_1);  /* @ 000110b4 */
undefined4 rtsx_icr_reg_read(undefined4 *param_1,ushort param_2,undefined1 *param_3);  /* @ 0001118c */
int rtsx_icr_wait_cmd(undefined4 *param_1,undefined4 param_2);  /* @ 000113c8 */
int rtsx_icr_ip_register_get(undefined4 param_1,undefined4 param_2,char *param_3);  /* @ 00011828 */
undefined4 rtsx_icr_reg_write(undefined4 *param_1,ushort param_2,uint param_3,uint param_4);  /* @ 0001192c */
undefined4 rtsx_icr_ip_register_set (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00011a08 */
int rtsx_icr_check_resp(undefined4 *param_1,uint *param_2);  /* @ 00011f58 */
void rtsx_icr_pp_read(void);  /* @ 00012324 */
void rtsx_icr_pp_write(void);  /* @ 000128f4 */
int rtsx_icr_transfer_data(int *param_1,int param_2);  /* @ 00012908 */
undefined4 rtsx_icr_transfer_stop(int param_1);  /* @ 00012f18 */
undefined4 rtsx_icr_set_bus_width(undefined4 *param_1,uint param_2);  /* @ 000131f8 */
int rtsx_icr_set_timing(undefined4 *param_1,char param_2);  /* @ 00013250 */
void rtsx_icr_set_clock(int param_1,uint param_2);  /* @ 0001343c */
void rtsx_icr_add_debugfs(undefined4 *param_1);  /* @ 00014854 */

/* ---- misc ---- */
void dump_reg_range(undefined4 *param_1,int param_2,int param_3);  /* @ 0001125c */
void sdmmc_request(int param_1,int param_2);  /* @ 0001426c */
void init_module(void);  /* @ 000150a0 */
void cleanup_module(void);  /* @ 000150b8 */

#endif /* RTSX_ICR_H */
