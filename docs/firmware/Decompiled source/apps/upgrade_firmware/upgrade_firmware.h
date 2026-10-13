/* upgrade_firmware — recovered function prototypes
 * OTA update orchestration
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef UPGRADE_FIRMWARE_H
#define UPGRADE_FIRMWARE_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 004008c4 */
undefined4 _ftext(int param_1,undefined4 *param_2);  /* @ 00400910 */
void __uClibc_main(void);  /* @ 004019c0 */
void _fini(void);  /* @ 004019e0 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400b80 */
undefined4 md5_check_file(undefined4 param_1,undefined4 param_2);  /* @ 00400d60 */
void putchar(void);  /* @ 00402020 */
void popen(void);  /* @ 00402030 */
void printf(void);  /* @ 00402040 */
void pclose(void);  /* @ 00402050 */
void snprintf(void);  /* @ 00402060 */
void usleep(void);  /* @ 00402070 */
void getpid(void);  /* @ 00402080 */
void memcpy(void);  /* @ 00402090 */
void puts(void);  /* @ 004020a0 */
void system(void);  /* @ 004020b0 */
void sleep(void);  /* @ 004020c0 */
void vsnprintf(void);  /* @ 004020d0 */
void mq_send(void);  /* @ 004020e0 */
void socket(void);  /* @ 004020f0 */
void select(void);  /* @ 00402100 */
void mmap(void);  /* @ 00402110 */
void strstr(void);  /* @ 00402120 */
void sendto(void);  /* @ 00402130 */
void fread(void);  /* @ 00402140 */
void gettimeofday(void);  /* @ 00402150 */
void localtime(void);  /* @ 00402160 */
void memset(void);  /* @ 00402170 */
void time(void);  /* @ 00402180 */
void strcmp(void);  /* @ 00402190 */
void fileno(void);  /* @ 004021a0 */
void strlen(void);  /* @ 004021b0 */
void open(void);  /* @ 004021c0 */
void mq_open(void);  /* @ 004021d0 */
void close(void);  /* @ 004021e0 */
void vfprintf(void);  /* @ 004021f0 */

#endif /* UPGRADE_FIRMWARE_H */
