/* wifi_conf — recovered function prototypes
 * Wi-Fi provisioning helper (localbin)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef WIFI_CONF_H
#define WIFI_CONF_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00400660 */
int main(int param_1,int param_2);  /* @ 004006b0 */
void _fini(void);  /* @ 004019a0 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400750 */
void __PLT_HEAD(void);  /* @ 00401b80 */
void snprintf(void);  /* @ 00401ba0 */
void usleep(void);  /* @ 00401bb0 */
void perror(void);  /* @ 00401bc0 */
void puts(void);  /* @ 00401bd0 */
void mmap(void);  /* @ 00401be0 */
void chmod(void);  /* @ 00401bf0 */
void strncat(void);  /* @ 00401c00 */
void fopen(void);  /* @ 00401c10 */
void memset(void);  /* @ 00401c20 */
void fclose(void);  /* @ 00401c30 */
void strcmp(void);  /* @ 00401c40 */
void fwrite(void);  /* @ 00401c50 */
void strlen(void);  /* @ 00401c60 */
void open(void);  /* @ 00401c70 */
void close(void);  /* @ 00401c80 */

#endif /* WIFI_CONF_H */
