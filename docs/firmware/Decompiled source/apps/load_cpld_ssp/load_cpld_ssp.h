/* load_cpld_ssp — recovered function prototypes
 * Reads hardware string, insmods GPIO/motor kernel drivers
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LOAD_CPLD_SSP_H
#define LOAD_CPLD_SSP_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 0040069c */
int main(void);  /* @ 004010cc */
void __uClibc_main(void);  /* @ 004011f0 */
void _fini(void);  /* @ 00401210 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 004006f0 */
void popen(void);  /* @ 00401440 */
void printf(void);  /* @ 00401450 */
void pclose(void);  /* @ 00401460 */
void munmap(void);  /* @ 00401470 */
void memcpy(void);  /* @ 00401480 */
void puts(void);  /* @ 00401490 */
void select(void);  /* @ 004014a0 */
void lseek(void);  /* @ 004014b0 */
void mmap(void);  /* @ 004014c0 */
void write(void);  /* @ 004014d0 */
void fread(void);  /* @ 004014e0 */
void memset(void);  /* @ 004014f0 */
void sprintf(void);  /* @ 00401500 */
void access(void);  /* @ 00401510 */
void fileno(void);  /* @ 00401520 */
void strlen(void);  /* @ 00401530 */
void open(void);  /* @ 00401540 */
void close(void);  /* @ 00401550 */

#endif /* LOAD_CPLD_SSP_H */
