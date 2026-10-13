/* log_server — recovered function prototypes
 * Log collector / uploader
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LOG_SERVER_H
#define LOG_SERVER_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 00400834 */
undefined4 _ftext(void);  /* @ 00400880 */
void __uClibc_main(void);  /* @ 00401290 */
void _fini(void);  /* @ 004012b0 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400c40 */
void popen(void);  /* @ 004016a0 */
void printf(void);  /* @ 004016b0 */
void strerror(void);  /* @ 004016c0 */
void pclose(void);  /* @ 004016d0 */
void snprintf(void);  /* @ 004016e0 */
void puts(void);  /* @ 004016f0 */
void recvfrom(void);  /* @ 00401700 */
void socket(void);  /* @ 00401710 */
void select(void);  /* @ 00401720 */
void fflush(void);  /* @ 00401730 */
void fprintf(void);  /* @ 00401740 */
void bind(void);  /* @ 00401750 */
void strstr(void);  /* @ 00401760 */
void strncmp(void);  /* @ 00401770 */
void strncpy(void);  /* @ 00401780 */
void unlink(void);  /* @ 00401790 */
void fread(void);  /* @ 004017a0 */
void gettimeofday(void);  /* @ 004017b0 */
void fopen(void);  /* @ 004017c0 */
void localtime(void);  /* @ 004017d0 */
void memset(void);  /* @ 004017e0 */
void ftell(void);  /* @ 004017f0 */
void fclose(void);  /* @ 00401800 */
void rewind(void);  /* @ 00401810 */
void __errno_location(void);  /* @ 00401820 */
void fileno(void);  /* @ 00401830 */
void strlen(void);  /* @ 00401840 */
void close(void);  /* @ 00401850 */

#endif /* LOG_SERVER_H */
