/* mtd_img — recovered function prototypes
 * Raw MTD partition writer used by OTA (no hash/CRC verify)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef MTD_IMG_H
#define MTD_IMG_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 00400770 */
undefined4 _ftext(int param_1,undefined4 *param_2);  /* @ 004007c0 */
void __uClibc_main(void);  /* @ 00400ce0 */
void _fini(void);  /* @ 00400d00 */

/* ---- mtd ---- */
void mtd_get_dev_info(void);  /* @ 00400ee0 */
void mtd_dev_present(void);  /* @ 00400f00 */
void mtd_erase(void);  /* @ 00400f20 */
void mtd_write_img(void);  /* @ 00400f70 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400ab0 */
void putchar(void);  /* @ 00400e80 */
void strcpy(void);  /* @ 00400e90 */
void printf(void);  /* @ 00400ea0 */
void snprintf(void);  /* @ 00400eb0 */
void atol(void);  /* @ 00400ec0 */
void fflush(void);  /* @ 00400ed0 */
void fprintf(void);  /* @ 00400ef0 */
void memset(void);  /* @ 00400f10 */
void libmtd_open(void);  /* @ 00400f30 */
void fwrite(void);  /* @ 00400f40 */
void libmtd_close(void);  /* @ 00400f50 */
void open(void);  /* @ 00400f60 */
void close(void);  /* @ 00400f80 */

#endif /* MTD_IMG_H */
