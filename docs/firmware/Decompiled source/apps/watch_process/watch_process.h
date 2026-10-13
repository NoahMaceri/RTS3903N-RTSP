/* watch_process — recovered function prototypes
 * Daemon supervisor; restarts dead daemons, reboots on rmm death
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef WATCH_PROCESS_H
#define WATCH_PROCESS_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 004009a8 */
undefined4 _ftext(void);  /* @ 004009f0 */
void __uClibc_main(void);  /* @ 004018e0 */
void _fini(void);  /* @ 00401900 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400f20 */
void putchar(void);  /* @ 00401dc0 */
void ioctl(void);  /* @ 00401dd0 */
void popen(void);  /* @ 00401de0 */
void printf(void);  /* @ 00401df0 */
void pclose(void);  /* @ 00401e00 */
void snprintf(void);  /* @ 00401e10 */
void usleep(void);  /* @ 00401e20 */
void getpid(void);  /* @ 00401e30 */
void puts(void);  /* @ 00401e40 */
void system(void);  /* @ 00401e50 */
void malloc(void);  /* @ 00401e60 */
void sleep(void);  /* @ 00401e70 */
void vsnprintf(void);  /* @ 00401e80 */
void socket(void);  /* @ 00401e90 */
void select(void);  /* @ 00401ea0 */
void mmap(void);  /* @ 00401eb0 */
void fseek(void);  /* @ 00401ec0 */
void strstr(void);  /* @ 00401ed0 */
void strncmp(void);  /* @ 00401ee0 */
void sendto(void);  /* @ 00401ef0 */
void sscanf(void);  /* @ 00401f00 */
void fread(void);  /* @ 00401f10 */
void gettimeofday(void);  /* @ 00401f20 */
void fopen(void);  /* @ 00401f30 */
void localtime(void);  /* @ 00401f40 */
void memset(void);  /* @ 00401f50 */
void ftell(void);  /* @ 00401f60 */
void fclose(void);  /* @ 00401f70 */
void time(void);  /* @ 00401f80 */
void access(void);  /* @ 00401f90 */
void atoi(void);  /* @ 00401fa0 */
void fileno(void);  /* @ 00401fb0 */
void strlen(void);  /* @ 00401fc0 */
void open(void);  /* @ 00401fd0 */
void close(void);  /* @ 00401fe0 */
void vfprintf(void);  /* @ 00401ff0 */
void free(void);  /* @ 00402000 */

#endif /* WATCH_PROCESS_H */
