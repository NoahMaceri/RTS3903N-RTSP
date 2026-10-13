/* checkdisk — recovered function prototypes
 * SD filesystem check tool
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef CHECKDISK_H
#define CHECKDISK_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 004009dc */
undefined4 _ftext(void);  /* @ 00400a30 */
void __uClibc_main(void);  /* @ 004023c0 */
void _fini(void);  /* @ 004023e0 */

/* ---- get ---- */
uint get_tfcard_size_v2(void);  /* @ 00401294 */
undefined4 get_fs_type(void);  /* @ 004018f8 */
int get_cluster_size(void);  /* @ 00401ae8 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400f60 */
int do_fat_check(void);  /* @ 00401350 */
undefined4 check_partion_vfat(void);  /* @ 004016f8 */
undefined4 check_partion_exfat(void);  /* @ 00401764 */
void putchar(void);  /* @ 00402e40 */
void ioctl(void);  /* @ 00402e50 */
void popen(void);  /* @ 00402e60 */
void printf(void);  /* @ 00402e70 */
void strerror(void);  /* @ 00402e80 */
void pclose(void);  /* @ 00402e90 */
void snprintf(void);  /* @ 00402ea0 */
void munmap(void);  /* @ 00402eb0 */
void getpid(void);  /* @ 00402ec0 */
void puts(void);  /* @ 00402ed0 */
void system(void);  /* @ 00402ee0 */
void vsnprintf(void);  /* @ 00402ef0 */
void socket(void);  /* @ 00402f00 */
void select(void);  /* @ 00402f10 */
void lseek(void);  /* @ 00402f20 */
void mmap(void);  /* @ 00402f30 */
void write(void);  /* @ 00402f40 */
void strstr(void);  /* @ 00402f50 */
void strncmp(void);  /* @ 00402f60 */
void strncpy(void);  /* @ 00402f70 */
void sendto(void);  /* @ 00402f80 */
void memcmp(void);  /* @ 00402f90 */
void fread(void);  /* @ 00402fa0 */
void gettimeofday(void);  /* @ 00402fb0 */
void localtime(void);  /* @ 00402fc0 */
void memset(void);  /* @ 00402fd0 */
void time(void);  /* @ 00402fe0 */
void mount(void);  /* @ 00402ff0 */
void sprintf(void);  /* @ 00403000 */
void umount(void);  /* @ 00403010 */
void pread(void);  /* @ 00403020 */
void __errno_location(void);  /* @ 00403030 */
void fileno(void);  /* @ 00403040 */
void strlen(void);  /* @ 00403050 */
void open(void);  /* @ 00403060 */
void atoll(void);  /* @ 00403070 */
void close(void);  /* @ 00403080 */
void vfprintf(void);  /* @ 00403090 */

#endif /* CHECKDISK_H */
