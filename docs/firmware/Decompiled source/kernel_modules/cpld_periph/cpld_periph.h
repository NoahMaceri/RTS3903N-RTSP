/* cpld_periph — recovered function prototypes
 * GPIO peripheral driver (LEDs/IR-cut/button; NOT a CPLD)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef CPLD_PERIPH_H
#define CPLD_PERIPH_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- cpld ---- */
undefined4 cpld_proc_write(undefined4 param_1,char *param_2,undefined4 param_3);  /* @ 00010040 */
undefined4 cpld_gpio_request(int param_1);  /* @ 000100d8 */
void cpld_gpio_free(int param_1);  /* @ 000100fc */
undefined4 cpld_gpio_direction_output(int param_1);  /* @ 00010120 */
undefined4 cpld_gpio_direction_input(int param_1);  /* @ 0001017c */
undefined4 cpld_gpio_get_value(int param_1);  /* @ 000101a0 */
void cpld_gpio_set_value(int param_1);  /* @ 000101c4 */

/* ---- misc ---- */
undefined4 init_module(void);  /* @ 00010888 */
void cleanup_module(void);  /* @ 00010fac */

#endif /* CPLD_PERIPH_H */
