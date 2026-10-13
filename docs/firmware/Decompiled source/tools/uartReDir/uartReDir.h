/* uartReDir — recovered function prototypes
 * UART redirect / console helper
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef UARTREDIR_H
#define UARTREDIR_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 00400554 */
undefined4 main(int param_1,int param_2);  /* @ 00400780 */
void __uClibc_main(void);  /* @ 00400970 */
void _fini(void);  /* @ 00400990 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 004005a0 */
void ioctl(void);  /* @ 00400a60 */
void printf(void);  /* @ 00400a70 */
void perror(void);  /* @ 00400a80 */
void puts(void);  /* @ 00400a90 */
void strcmp(void);  /* @ 00400aa0 */
void ttyname(void);  /* @ 00400ab0 */
void open(void);  /* @ 00400ac0 */
void close(void);  /* @ 00400ad0 */

#endif /* UARTREDIR_H */
