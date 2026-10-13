/* reboot_by_watchdog — recovered function prototypes
 * Watchdog-backed reboot helper (localbin)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef REBOOT_BY_WATCHDOG_H
#define REBOOT_BY_WATCHDOG_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 00400850 */
undefined4 _ftext(void);  /* @ 004008a0 */
void __uClibc_main(void);  /* @ 004011f0 */
void _fini(void);  /* @ 00401210 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400a00 */
void putchar(void);  /* @ 004015e0 */
void ioctl(void);  /* @ 004015f0 */
void popen(void);  /* @ 00401600 */
void printf(void);  /* @ 00401610 */
void strerror(void);  /* @ 00401620 */
void pclose(void);  /* @ 00401630 */
void snprintf(void);  /* @ 00401640 */
void getpid(void);  /* @ 00401650 */
void puts(void);  /* @ 00401660 */
void vsnprintf(void);  /* @ 00401670 */
void socket(void);  /* @ 00401680 */
void select(void);  /* @ 00401690 */
void strstr(void);  /* @ 004016a0 */
void sendto(void);  /* @ 004016b0 */
void fread(void);  /* @ 004016c0 */
void gettimeofday(void);  /* @ 004016d0 */
void localtime(void);  /* @ 004016e0 */
void memset(void);  /* @ 004016f0 */
void time(void);  /* @ 00401700 */
void access(void);  /* @ 00401710 */
void __errno_location(void);  /* @ 00401720 */
void fileno(void);  /* @ 00401730 */
void strlen(void);  /* @ 00401740 */
void open(void);  /* @ 00401750 */
void vfprintf(void);  /* @ 00401760 */

#endif /* REBOOT_BY_WATCHDOG_H */
