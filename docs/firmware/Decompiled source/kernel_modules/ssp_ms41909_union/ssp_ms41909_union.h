/* ssp_ms41909_union — recovered function prototypes
 * Stepper-motor GPIO driver variant
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef SSP_MS41909_UNION_H
#define SSP_MS41909_UNION_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- ssp ---- */
undefined4 ssp_gpio_request(int param_1,undefined4 param_2);  /* @ 00010548 */
void ssp_gpio_free(int param_1);  /* @ 000105ac */
undefined4 ssp_gpio_direction_output(int param_1);  /* @ 000105dc */
void ssp_gpio_set_value(int param_1,int param_2);  /* @ 0001063c */

/* ---- misc ---- */
int init_module(void);  /* @ 00010e20 */
void cleanup_module(void);  /* @ 00011598 */

#endif /* SSP_MS41909_UNION_H */
