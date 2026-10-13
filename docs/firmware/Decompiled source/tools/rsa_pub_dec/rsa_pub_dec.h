/* rsa_pub_dec — recovered function prototypes
 * RSA public-key header decryptor for OTA packages
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef RSA_PUB_DEC_H
#define RSA_PUB_DEC_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
void _init(void);  /* @ 004007d0 */
undefined4 main(int param_1,int param_2);  /* @ 00400820 */
void __uClibc_main(void);  /* @ 00400e30 */
void _fini(void);  /* @ 00400e50 */

/* ---- err ---- */
void ERR_get_error(void);  /* @ 00401140 */
void ERR_error_string(void);  /* @ 004011b0 */
void ERR_load_crypto_strings(void);  /* @ 00401210 */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00400aa0 */
void BIO_new_mem_buf(void);  /* @ 00401150 */
void memset(void);  /* @ 00401160 */
void malloc(void);  /* @ 00401170 */
void RSA_public_decrypt(void);  /* @ 00401180 */
void fclose(void);  /* @ 00401190 */
void perror(void);  /* @ 004011a0 */
void ftell(void);  /* @ 004011c0 */
void printf(void);  /* @ 004011d0 */
void fwrite(void);  /* @ 004011e0 */
void exit(void);  /* @ 004011f0 */
void fread(void);  /* @ 00401200 */
void PEM_read_bio_RSA_PUBKEY(void);  /* @ 00401220 */
void free(void);  /* @ 00401230 */
void puts(void);  /* @ 00401240 */
void fopen(void);  /* @ 00401250 */
void PEM_read_bio_RSAPrivateKey(void);  /* @ 00401260 */
void fseek(void);  /* @ 00401270 */

#endif /* RSA_PUB_DEC_H */
