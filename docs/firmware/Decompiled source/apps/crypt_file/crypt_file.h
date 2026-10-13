/* crypt_file — recovered function prototypes
 * AES-128-ECB file encryptor for event media
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef CRYPT_FILE_H
#define CRYPT_FILE_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 004008e0 */
void _ftext(void);  /* @ 00400930 */
int main(int param_1,undefined4 *param_2);  /* @ 00400960 */
void __uClibc_main(void);  /* @ 00405070 */
void _fini(void);  /* @ 00405090 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400bc0 */
undefined4 crypt_file(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5);  /* @ 00400f94 */
undefined4 AesSetKey(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);  /* @ 00404354 */
undefined4 AesSetIV(int param_1,int param_2);  /* @ 00404490 */
undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 00404804 */
void CYASSL_MSG(undefined4 param_1);  /* @ 00404dd0 */
void fprintf(void);  /* @ 00405060 */
void putchar(void);  /* @ 00407e60 */
void strcpy(void);  /* @ 00407e70 */
void printf(void);  /* @ 00407e80 */
void snprintf(void);  /* @ 00407e90 */
void getpid(void);  /* @ 00407ea0 */
void puts(void);  /* @ 00407ec0 */
void system(void);  /* @ 00407ed0 */
void vsnprintf(void);  /* @ 00407ee0 */
void socket(void);  /* @ 00407ef0 */
void basename(void);  /* @ 00407f00 */
void unlink(void);  /* @ 00407f10 */
void sendto(void);  /* @ 00407f20 */
void fread(void);  /* @ 00407f30 */
void gettimeofday(void);  /* @ 00407f40 */
void fopen(void);  /* @ 00407f50 */
void localtime(void);  /* @ 00407f60 */
void memset(void);  /* @ 00407f70 */
void fclose(void);  /* @ 00407f80 */
void time(void);  /* @ 00407f90 */
void strcmp(void);  /* @ 00407fa0 */
void sprintf(void);  /* @ 00407fb0 */
void stat(void);  /* @ 00407fc0 */
void fwrite(void);  /* @ 00407fd0 */
void strlen(void);  /* @ 00407fe0 */
void vfprintf(void);  /* @ 00407ff0 */

#endif /* CRYPT_FILE_H */
