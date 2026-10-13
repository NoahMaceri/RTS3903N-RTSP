/* cloudAPI — recovered function prototypes
 * Cloud HTTP/TLS API worker (static libcurl + CyaSSL), HMAC-SHA1 signing
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef CLOUDAPI_H
#define CLOUDAPI_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 004033ac */
void _ftext(void);  /* @ 00403400 */
void main(int param_1,int param_2);  /* @ 0040376c */
void _fini(void);  /* @ 004995d0 */

/* ---- bio ---- */
undefined * BIO_f_buffer(void);  /* @ 0043c72c */
undefined4 BIO_set_write_buffer_size(undefined4 param_1,undefined4 param_2);  /* @ 0043c798 */
undefined * BIO_f_ssl(void);  /* @ 0043c7fc */
undefined1 * BIO_new_socket(undefined4 param_1,undefined1 param_2);  /* @ 0043c868 */
bool BIO_eof(int param_1);  /* @ 0043c94c */
undefined4 BIO_set_ssl(int param_1,undefined4 param_2,undefined1 param_3);  /* @ 0043c9c8 */
undefined4 BIO_free_all(int param_1);  /* @ 0043ce28 */
int BIO_read(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043cec8 */
int BIO_write(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043d044 */
int BIO_push(int param_1,int param_2);  /* @ 0043d1c0 */
undefined4 BIO_flush(void);  /* @ 0043d23c */

/* ---- cyassl ---- */
void CYASSL_MSG(undefined4 param_1);  /* @ 00431d20 */
undefined4 CyaSSL_Malloc(undefined4 param_1);  /* @ 00432020 */
void CyaSSL_Free(undefined4 param_1);  /* @ 004320c0 */
undefined4 CyaSSL_Realloc(undefined4 param_1,undefined4 param_2);  /* @ 00432148 */
int CyaSSL_CTX_new(int param_1);  /* @ 00432344 */
void CyaSSL_CTX_free(int param_1);  /* @ 004324dc */
void CyaSSL_free(int param_1);  /* @ 00432688 */
undefined1 CyaSSL_get_using_nonblock(int param_1);  /* @ 00432a88 */
undefined1 CyaSSL_dtls(int param_1);  /* @ 00432b14 */
void CyaSSL_set_using_nonblock(int param_1,int param_2);  /* @ 00432b44 */
undefined4 CyaSSL_negotiate(int param_1);  /* @ 00432c20 */
int CyaSSL_write(int param_1,int param_2,int param_3);  /* @ 00432d2c */
undefined4 CyaSSL_read(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043300c */
undefined4 CyaSSL_get_error(int param_1,int param_2);  /* @ 00433428 */
int CyaSSL_ERR_error_string(undefined4 param_1,int param_2);  /* @ 004336b8 */
void CyaSSL_ERR_error_string_n(undefined4 param_1,int param_2,uint param_3);  /* @ 00433758 */
int CyaSSL_GetMacSecret(int param_1,int param_2);  /* @ 00433930 */
int CyaSSL_CertManagerNew(void);  /* @ 004339c8 */
void CyaSSL_CertManagerFree(int param_1);  /* @ 00433adc */
undefined4 CyaSSL_CertManagerUnloadCAs(int param_1);  /* @ 00433bb0 */
uint CyaSSL_CertPemToDer(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5);  /* @ 00433ca4 */
uint CyaSSL_KeyPemToDer(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5);  /* @ 00433fa4 */
void CyaSSL_ERR_print_errors_fp(undefined4 param_1,undefined4 param_2);  /* @ 00434244 */
undefined4 CyaSSL_SetMinVersion(int param_1,int param_2);  /* @ 00434470 */
undefined4 CyaSSL_SetVersion(int param_1,int param_2);  /* @ 004345c8 */
int CyaSSL_Init(void);  /* @ 004352d0 */
int CyaSSL_CertManagerVerifyBuffer(int param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 0043710c */
undefined4 CyaSSL_CertManagerEnableOCSP(int param_1);  /* @ 00437308 */
undefined4 CyaSSL_CertManagerDisableOCSP(int param_1);  /* @ 00437394 */
int CyaSSL_CTX_load_verify_locations(int param_1,int param_2,int param_3);  /* @ 00437744 */
undefined4 CyaSSL_CertManagerVerify(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00437a34 */
undefined4 CyaSSL_CertManagerLoadCA(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00437d44 */
undefined4 CyaSSL_CertManagerEnableCRL(int param_1);  /* @ 00437ec4 */
undefined4 CyaSSL_CertManagerDisableCRL(int param_1);  /* @ 00437f50 */
undefined4 CyaSSL_CTX_der_load_verify_locations(int param_1,int param_2,undefined4 param_3);  /* @ 00438030 */
bool CyaSSL_CTX_use_certificate_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00438104 */
bool CyaSSL_CTX_use_PrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 004381b4 */
bool CyaSSL_CTX_use_certificate_chain_file(undefined4 param_1,undefined4 param_2);  /* @ 00438264 */
bool CyaSSL_use_certificate_file(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 00438314 */
bool CyaSSL_use_PrivateKey_file(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 004383d0 */
bool CyaSSL_use_certificate_chain_file(undefined4 *param_1,undefined4 param_2);  /* @ 0043848c */
undefined4 CyaSSL_use_RSAPrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 004385d0 */
void CyaSSL_CTX_set_verify(int param_1,uint param_2,undefined4 param_3);  /* @ 00438658 */
void CyaSSL_set_verify(int param_1,uint param_2,undefined4 param_3);  /* @ 00438724 */
void CyaSSL_SetCertCbCtx(int param_1,undefined4 param_2);  /* @ 004387f0 */
undefined4 CyaSSL_SetServerID(int param_1,int param_2,int param_3,int param_4);  /* @ 004389e4 */
bool CyaSSL_CTX_set_cipher_list(int param_1,undefined4 param_2);  /* @ 00438cd8 */
bool CyaSSL_set_cipher_list(int param_1,undefined4 param_2);  /* @ 00438d68 */
undefined4 CyaSSL_connect(int param_1);  /* @ 00438eb4 */
undefined4 CyaSSL_accept(int param_1);  /* @ 00439774 */
undefined4 CyaSSL_Cleanup(void);  /* @ 0043a040 */
bool CyaSSL_check_domain_name(int param_1,undefined4 param_2);  /* @ 0043b400 */
undefined4 CyaSSL_set_compression(void);  /* @ 0043b54c */
undefined4 CyaSSL_writev(undefined4 param_1,int param_2,int param_3);  /* @ 0043b5ac */
undefined4 CyaSSL_CTX_load_verify_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 0043b7c0 */
undefined4 CyaSSL_CTX_use_certificate_buffer (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0043b8b8 */
undefined4 CyaSSL_CTX_use_PrivateKey_buffer (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0043b95c */
undefined4 CyaSSL_CTX_use_certificate_chain_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043ba04 */
undefined4 CyaSSL_use_certificate_buffer (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0043baa8 */
undefined4 CyaSSL_use_PrivateKey_buffer (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0043bb58 */
undefined4 CyaSSL_use_certificate_chain_buffer(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043bc0c */
undefined4 CyaSSL_CTX_UnloadCAs(int param_1);  /* @ 0043be90 */
undefined4 CyaSSL_add_all_algorithms(void);  /* @ 0043bf28 */
undefined4 CyaSSL_set_rfd(int param_1,undefined4 param_2);  /* @ 0043c520 */
undefined4 CyaSSL_set_wfd(int param_1,undefined4 param_2);  /* @ 0043c5a0 */
undefined1 * CyaSSL_BIO_new(undefined1 *param_1);  /* @ 0043ca4c */
undefined4 CyaSSL_BIO_free(int param_1);  /* @ 0043cce0 */
void CyaSSL_CTX_set_default_passwd_cb_userdata(int param_1,undefined4 param_2);  /* @ 0043d29c */
void CyaSSL_CTX_set_default_passwd_cb(int param_1,undefined4 param_2);  /* @ 0043d304 */
int CyaSSL_EVP_BytesToKey (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4, undefined4 param_5,int param_6,int param_7,int param_8);  /* @ 0043d404 */
void CyaSSL_MD5_Init(undefined4 param_1);  /* @ 0043d994 */
void CyaSSL_MD5_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043da04 */
void CyaSSL_MD5_Final(undefined4 param_1,undefined4 param_2);  /* @ 0043da84 */
void CyaSSL_SHA_Init(undefined4 param_1);  /* @ 0043dafc */
void CyaSSL_SHA_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043db6c */
void CyaSSL_SHA_Final(undefined4 param_1,undefined4 param_2);  /* @ 0043dbec */
void CyaSSL_SHA256_Init(undefined4 param_1);  /* @ 0043ddcc */
void CyaSSL_SHA256_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043de3c */
void CyaSSL_SHA256_Final(undefined4 param_1,undefined4 param_2);  /* @ 0043debc */
void CyaSSL_SHA384_Init(undefined4 param_1);  /* @ 0043df34 */
void CyaSSL_SHA384_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043dfa4 */
void CyaSSL_SHA384_Final(undefined4 param_1,undefined4 param_2);  /* @ 0043e024 */
void CyaSSL_SHA512_Init(undefined4 param_1);  /* @ 0043e09c */
void CyaSSL_SHA512_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043e10c */
void CyaSSL_SHA512_Final(undefined4 param_1,undefined4 param_2);  /* @ 0043e18c */
undefined4 CyaSSL_EVP_md5(void);  /* @ 0043e204 */
undefined4 CyaSSL_EVP_sha1(void);  /* @ 0043e264 */
undefined4 CyaSSL_EVP_aes_128_cbc(void);  /* @ 0043e43c */
undefined4 CyaSSL_EVP_aes_192_cbc(void);  /* @ 0043e49c */
undefined4 CyaSSL_EVP_aes_256_cbc(void);  /* @ 0043e4fc */
undefined4 CyaSSL_EVP_aes_128_ctr(void);  /* @ 0043e55c */
undefined4 CyaSSL_EVP_aes_192_ctr(void);  /* @ 0043e5bc */
undefined4 CyaSSL_EVP_aes_256_ctr(void);  /* @ 0043e61c */
undefined4 CyaSSL_EVP_des_cbc(void);  /* @ 0043e67c */
undefined4 CyaSSL_EVP_des_ede3_cbc(void);  /* @ 0043e6dc */
undefined4 CyaSSL_EVP_rc4(void);  /* @ 0043e73c */
undefined4 CyaSSL_EVP_enc_null(void);  /* @ 0043e79c */
int CyaSSL_EVP_CipherInit(int *param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 0043e960 */
undefined4 CyaSSL_EVP_CIPHER_CTX_key_length(undefined4 *param_1);  /* @ 0043f7a4 */
bool CyaSSL_EVP_CIPHER_CTX_set_key_length(undefined4 *param_1,undefined4 param_2);  /* @ 0043f820 */
undefined4 CyaSSL_EVP_Cipher(int param_1,int param_2,int param_3);  /* @ 0043f8a8 */
undefined4 CyaSSL_StoreExternalIV(int param_1);  /* @ 0043fc8c */
undefined4 CyaSSL_SetInternalIV(int param_1);  /* @ 0043ff14 */
undefined4 CyaSSL_EVP_DigestFinal(char *param_1,undefined4 param_2,undefined4 *param_3);  /* @ 004405c0 */
void CyaSSL_FreeX509(undefined4 param_1);  /* @ 00440ff4 */
undefined4 CyaSSL_X509_get_next_altname(int param_1);  /* @ 00441064 */
undefined1 CyaSSL_X509_get_isCA(int param_1);  /* @ 004411f8 */
undefined4 CyaSSL_X509_ext_isSet_by_NID(int param_1,int param_2);  /* @ 00441294 */
undefined4 CyaSSL_X509_ext_get_critical_by_NID(int param_1,int param_2);  /* @ 004413bc */
undefined1 CyaSSL_X509_get_isSet_pathLength(int param_1);  /* @ 004414e4 */
undefined4 CyaSSL_X509_get_pathLength(int param_1);  /* @ 00441580 */
undefined2 CyaSSL_X509_get_keyUsage(int param_1);  /* @ 00441620 */
int CyaSSL_X509_get_authorityKeyID(int param_1,int param_2,int *param_3);  /* @ 004416c0 */
int CyaSSL_X509_get_subjectKeyID(int param_1,int param_2,int *param_3);  /* @ 00441830 */
undefined4 CyaSSL_X509_NAME_entry_count(int param_1);  /* @ 004419a0 */
undefined4 CyaSSL_X509_NAME_get_text_by_NID(undefined4 param_1,int param_2);  /* @ 00441a3c */
int CyaSSL_X509_NAME_oneline(undefined4 *param_1,int param_2,undefined4 param_3);  /* @ 00441ce4 */
undefined4 CyaSSL_X509_get_signature_type(int param_1);  /* @ 00441e4c */
undefined4 CyaSSL_X509_get_signature(int param_1,int param_2,int *param_3);  /* @ 00441ec8 */
undefined4 CyaSSL_X509_get_serial_number(int param_1,int param_2,int *param_3);  /* @ 00441fc0 */
undefined4 CyaSSL_X509_get_der(int param_1,undefined4 *param_2);  /* @ 004420b4 */
undefined4 CyaSSL_X509_version(undefined4 *param_1);  /* @ 00442154 */
int CyaSSL_X509_notBefore(int param_1);  /* @ 004421d0 */
int CyaSSL_X509_notAfter(int param_1);  /* @ 0044224c */
int CyaSSL_X509_d2i(int *param_1,int param_2,int param_3);  /* @ 004422c8 */
undefined4 CyaSSL_X509_d2i_fp(undefined4 *param_1,int param_2);  /* @ 00442480 */
int CyaSSL_X509_load_certificate(int param_1,int param_2);  /* @ 00442654 */
int CyaSSL_get_current_cipher(int param_1);  /* @ 00442f24 */
undefined * CyaSSL_CIPHER_get_name(int *param_1);  /* @ 00442fa0 */
undefined4 CyaSSL_get_cipher(undefined4 param_1);  /* @ 00443218 */
undefined * CyaSSL_BIO_s_mem(void);  /* @ 00443410 */
int CyaSSL_X509_STORE_add_cert(int param_1,int param_2);  /* @ 004437f8 */
void CyaSSL_X509_STORE_free(int param_1);  /* @ 00443a38 */
undefined4 CyaSSL_X509_STORE_CTX_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 00443bcc */
undefined4 CyaSSL_SESSION_get_timeout(int param_1);  /* @ 00444948 */
undefined4 CyaSSL_SESSION_get_time(int param_1);  /* @ 004449ac */
undefined4 CyaSSL_cmp_peer_cert_to_file(int *param_1,int param_2);  /* @ 00444a90 */
undefined4 CyaSSL_RAND_seed(void);  /* @ 00444db4 */
undefined * CyaSSL_BN_CTX_new(void);  /* @ 00444fe0 */
void CyaSSL_BN_CTX_init(void);  /* @ 00445040 */
void CyaSSL_BN_CTX_free(void);  /* @ 00445098 */
int CyaSSL_BN_new(void);  /* @ 00445164 */
void CyaSSL_BN_free(int param_1);  /* @ 004452fc */
void CyaSSL_BN_clear_free(undefined4 param_1);  /* @ 004453f4 */
undefined4 CyaSSL_BN_sub(int param_1,int param_2,int param_3);  /* @ 00445464 */
undefined4 CyaSSL_BN_mod(int param_1,int param_2,int param_3);  /* @ 00445568 */
undefined4 CyaSSL_BN_value_one(void);  /* @ 00445670 */
undefined4 CyaSSL_BN_num_bytes(int param_1);  /* @ 00445734 */
undefined4 CyaSSL_BN_num_bits(int param_1);  /* @ 004457dc */
bool CyaSSL_BN_is_zero(int param_1);  /* @ 00445884 */
undefined4 CyaSSL_BN_is_one(int param_1);  /* @ 0044591c */
undefined4 CyaSSL_BN_is_odd(int param_1);  /* @ 004459e0 */
undefined4 CyaSSL_BN_cmp(int param_1,int param_2);  /* @ 00445aa4 */
undefined4 CyaSSL_BN_bn2bin(int param_1,int param_2);  /* @ 00445b78 */
int CyaSSL_BN_bin2bn(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00445cd0 */
undefined4 CyaSSL_BN_mask_bits(void);  /* @ 00445dd4 */
undefined4 CyaSSL_BN_rand(int param_1,uint param_2);  /* @ 00445e38 */
undefined4 CyaSSL_BN_is_bit_set(void);  /* @ 00446080 */
undefined4 CyaSSL_BN_hex2bn(int *param_1,int param_2);  /* @ 004460e4 */
int CyaSSL_BN_dup(int param_1);  /* @ 004462e4 */
undefined4 CyaSSL_BN_copy(void);  /* @ 0044644c */
undefined4 CyaSSL_BN_set_word(void);  /* @ 004464b0 */
undefined4 CyaSSL_BN_dec2bn(void);  /* @ 00446514 */
undefined4 CyaSSL_BN_bn2dec(void);  /* @ 00446578 */
int CyaSSL_RSA_new(void);  /* @ 00446660 */
void CyaSSL_RSA_free(undefined4 *param_1);  /* @ 00446858 */
undefined4 CyaSSL_RSA_generate_key_ex(int param_1,undefined4 param_2);  /* @ 00446f98 */
undefined4 CyaSSL_RSA_blinding_on(void);  /* @ 0044711c */
undefined4 CyaSSL_RSA_public_encrypt(void);  /* @ 00447180 */
undefined4 CyaSSL_RSA_private_decrypt(void);  /* @ 004471ec */
undefined4 CyaSSL_RSA_size(undefined4 *param_1);  /* @ 00447258 */
undefined4 CyaSSL_RSA_sign(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5, undefined4 *param_6);  /* @ 004472f0 */
undefined4 CyaSSL_RSA_public_decrypt(void);  /* @ 0044764c */
undefined4 CyaSSL_RsaGenAdd(int param_1);  /* @ 004476b8 */
void CyaSSL_HMAC_Init(int param_1,int param_2,int param_3,int param_4);  /* @ 00447998 */
void CyaSSL_HMAC_Update(int param_1,int param_2,undefined4 param_3);  /* @ 00447bf4 */
void CyaSSL_HMAC_Final(int param_1,int param_2,undefined4 *param_3);  /* @ 00447cb0 */
void CyaSSL_HMAC_cleanup(void);  /* @ 00447e0c */
undefined4 CyaSSL_get_digestbynid(int param_1);  /* @ 00447e64 */
undefined4 CyaSSL_EVP_PKEY_get1_RSA(void);  /* @ 00447f44 */
undefined4 CyaSSL_EVP_PKEY_get1_DSA(void);  /* @ 00447fa4 */
int CyaSSL_EVP_X_STATE(int param_1);  /* @ 00448004 */
undefined4 CyaSSL_EVP_X_STATE_LEN(int param_1);  /* @ 004480dc */
void CyaSSL_3des_iv(int param_1,int param_2,int param_3);  /* @ 004481b0 */
void CyaSSL_aes_ctr_iv(int param_1,int param_2,int param_3);  /* @ 004482b0 */
undefined4 CyaSSL_ripemd160(void);  /* @ 004483b0 */
undefined4 CyaSSL_EVP_MD_size(int param_1);  /* @ 0044840c */
undefined4 CyaSSL_EVP_CIPHER_CTX_iv_length(int param_1);  /* @ 004485cc */
void CyaSSL_OPENSSL_free(int param_1);  /* @ 0044876c */
undefined4 CyaSSL_PEM_write_bio_RSAPrivateKey(void);  /* @ 004487f0 */
undefined4 CyaSSL_PEM_write_bio_DSAPrivateKey(void);  /* @ 0044885c */
undefined4 CyaSSL_PEM_read_bio_PrivateKey(void);  /* @ 004488c8 */
int CyaSSL_RSA_LoadDer(int param_1,int param_2,int param_3);  /* @ 00448934 */
undefined4 CyaSSL_DeriveTlsKeys (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);  /* @ 00449788 */
undefined4 CyaSSL_MakeTlsMasterSecret (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);  /* @ 004499c8 */
undefined4 CyaSSL_GetHmacType(int param_1);  /* @ 00449e80 */
undefined4 CyaSSL_SetTlsHmacInner (int param_1,int param_2,undefined2 param_3,undefined1 param_4,undefined4 param_5);  /* @ 00449f48 */
undefined * CyaSSL_ERR_reason_error_string(int param_1);  /* @ 0048e720 */

/* ---- des ---- */
undefined4 DES_key_sched(undefined4 param_1,undefined4 param_2);  /* @ 00440ac8 */
void DES_cbc_encrypt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6);  /* @ 00440b4c */
void DES_ncbc_encrypt(undefined4 param_1,int param_2,int param_3,undefined4 param_4, undefined4 param_5,int param_6);  /* @ 00440c50 */
undefined4 Des_SetKey(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004519d8 */
undefined4 Des_CbcEncrypt(undefined4 param_1,int param_2,int param_3,uint param_4);  /* @ 00452484 */
undefined4 Des_CbcDecrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 0045258c */
void Des_SetIV(int param_1,int param_2);  /* @ 00452a24 */
int Des_CbcDecryptWithKey (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 00452ad8 */

/* ---- des3 ---- */
int Des3_SetKey(int param_1,int param_2,undefined4 param_3,int param_4);  /* @ 00451a70 */
undefined4 Des3_CbcEncrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 00452718 */
undefined4 Des3_CbcDecrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 00452830 */
undefined4 Des3_SetIV(int param_1,int param_2);  /* @ 00452b90 */
int Des3_CbcDecryptWithKey (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 00452c54 */

/* ---- evp ---- */
undefined4 EVP_sha256(void);  /* @ 0043e2c4 */
undefined4 EVP_sha384(void);  /* @ 0043e324 */
undefined4 EVP_sha512(void);  /* @ 0043e384 */
void EVP_CIPHER_MD_CTX_init(void);  /* @ 0043e3e4 */
undefined4 EVP_MD_CTX_cleanup(void);  /* @ 0043e7fc */
void EVP_CIPHER_CTX_init(undefined4 *param_1);  /* @ 0043e85c */
undefined4 EVP_CIPHER_CTX_cleanup(undefined4 *param_1);  /* @ 0043e8e0 */
undefined4 EVP_DigestInit(undefined1 *param_1,undefined4 param_2);  /* @ 0044019c */
undefined4 EVP_DigestUpdate(char *param_1,undefined4 param_2,undefined4 param_3);  /* @ 004403fc */
undefined4 EVP_DigestFinal_ex(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 004407e8 */

/* ---- initssl ---- */
void InitSSL_Method(undefined1 *param_1,undefined2 param_2);  /* @ 004822ac */
undefined4 InitSSL_Ctx(undefined4 *param_1,undefined2 *param_2);  /* @ 004822fc */
int InitSSL(undefined4 *param_1,int *param_2);  /* @ 004834b4 */

/* ---- maketlsv1 ---- */
undefined1 * MakeTLSv1(undefined1 *param_1);  /* @ 004496a4 */
undefined1 * MakeTLSv1_1(undefined1 *param_1);  /* @ 004496f0 */
undefined1 * MakeTLSv1_2(undefined1 *param_1);  /* @ 0044973c */

/* ---- mp ---- */
int mp_init_multi(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);  /* @ 00475ef8 */
undefined4 mp_init(undefined4 *param_1);  /* @ 00476234 */
void mp_clear(int *param_1);  /* @ 0047630c */
int mp_unsigned_bin_size(undefined4 param_1);  /* @ 0047640c */
int mp_count_bits(int *param_1);  /* @ 00476494 */
int mp_to_unsigned_bin(undefined4 param_1,int param_2);  /* @ 0047665c */
int mp_copy(int *param_1,int *param_2);  /* @ 00476854 */
int mp_read_unsigned_bin(int *param_1,byte *param_2,int param_3);  /* @ 004774a8 */
int mp_exptmod(undefined4 param_1,int param_2,int *param_3,undefined4 param_4);  /* @ 00477ad8 */
undefined4 mp_invmod(undefined4 param_1,int *param_2,undefined4 param_3);  /* @ 00477f1c */
undefined4 mp_cmp(int param_1,int param_2);  /* @ 004793b8 */
undefined4 mp_cmp_d(int *param_1,uint param_2);  /* @ 0047949c */
int mp_mod(undefined4 param_1,int param_2,undefined4 param_3);  /* @ 004795f0 */
undefined4 mp_add(int param_1,int param_2,int param_3);  /* @ 00479e74 */
undefined4 mp_sub(int param_1,int param_2,int param_3);  /* @ 0047a45c */
int mp_mulmod(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0047ca90 */
undefined4 mp_mul(int *param_1,int *param_2,int *param_3);  /* @ 0047cc80 */
int mp_set_int(int *param_1,uint param_2);  /* @ 004801b8 */
int mp_add_d(int *param_1,uint param_2,int *param_3);  /* @ 004803f8 */
int mp_sub_d(int *param_1,uint param_2,int *param_3);  /* @ 0048077c */
int mp_prime_is_prime(undefined4 param_1,int param_2,undefined4 *param_3);  /* @ 00481670 */
int mp_lcm(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 004818dc */
int mp_gcd(int *param_1,int *param_2,int param_3);  /* @ 00481afc */

/* ---- sha1 ---- */
void SHA1_Init(undefined4 param_1);  /* @ 0043dc64 */
void SHA1_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043dcd4 */
void SHA1_Final(undefined4 param_1,undefined4 param_2);  /* @ 0043dd54 */

/* ---- ssl ---- */
int SSL_new(int param_1);  /* @ 00432578 */
undefined4 SSL_set_fd(int param_1,undefined4 param_2);  /* @ 00432724 */
undefined4 SSL_get_fd(int param_1);  /* @ 004329fc */
bool SSL_want_read(int param_1);  /* @ 004335b8 */
bool SSL_want_write(int param_1);  /* @ 00433638 */
undefined4 SSL_pending(int param_1);  /* @ 004342e0 */
undefined4 SSL_CTX_check_private_key(void);  /* @ 00437fd0 */
undefined4 SSL_CTX_use_RSAPrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00438548 */
undefined4 SSL_get_session(int param_1);  /* @ 004388b8 */
undefined4 SSL_set_session(undefined4 param_1,int param_2);  /* @ 0043894c */
undefined4 SSL_library_init(void);  /* @ 00438bb4 */
undefined4 SSL_CTX_set_session_cache_mode(int param_1,int param_2);  /* @ 00438c3c */
void SSL_set_bio(int param_1,int param_2,int param_3);  /* @ 0043c0b0 */
void SSL_set_accept_state(int param_1);  /* @ 0043c318 */
undefined4 SSL_CTX_set_options(undefined4 param_1,undefined4 param_2);  /* @ 0043c4bc */
int SSL_CTX_set_mode(int param_1,int param_2);  /* @ 00440e08 */
int SSL_get_peer_certificate(int param_1);  /* @ 00440f74 */
undefined2 SSL_get_current_cipher_suite(int param_1);  /* @ 00442e98 */
void SSL_ResourceFree(int param_1);  /* @ 004840bc */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00405db0 */
undefined4 devlog(void);  /* @ 0040e030 */
undefined4 xiaomi(void);  /* @ 0040e190 */
undefined4 * domain(undefined4 param_1,int *param_2,char param_3,char *param_4,char *param_5,int param_6);  /* @ 0041c748 */
int compress(int param_1,int param_2,int *param_3,char *param_4);  /* @ 00420d88 */
int anonymous(int param_1,int *param_2,char *param_3,undefined1 *param_4);  /* @ 0042505c */
int d41d8cd98f00b204e9800998ecf8427e(int *param_1,char param_2,undefined4 param_3,int param_4);  /* @ 0042b7dc */
int InitRng(int param_1);  /* @ 0042f794 */
undefined4 RNG_GenerateBlock(int param_1,int param_2,uint param_3);  /* @ 0042f990 */
undefined4 FreeRng(int param_1);  /* @ 0042fc50 */
undefined4 InitSha256(undefined4 *param_1);  /* @ 00430348 */
int Sha256Update(int *param_1,int param_2,int param_3);  /* @ 00431564 */
int Sha256Final(uint *param_1,undefined4 param_2);  /* @ 00431714 */
int Sha256Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00431a40 */
int AddCA(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5);  /* @ 00434d58 */
int CyaSSLv3_client_method(void);  /* @ 00438df8 */
int SSLv3_server_method(void);  /* @ 004396b0 */
undefined * GetSessionClient(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043a368 */
undefined4 RSA_generate_key(void);  /* @ 0043c620 */
int X509_get_issuer_name(int param_1);  /* @ 00441130 */
int X509_get_subject_name(int param_1);  /* @ 00441194 */
undefined4 RAND_bytes(undefined4 param_1,undefined4 param_2);  /* @ 00444e84 */
void InitCyaSSL_BigNum(undefined4 *param_1);  /* @ 004450f0 */
int CyaSSLv23_client_method(void);  /* @ 0044a458 */
int HmacSetKey(int param_1,undefined4 param_2);  /* @ 0044a980 */
int HmacUpdate(int param_1);  /* @ 0044b0a0 */
int HmacFinal(int param_1);  /* @ 0044b29c */
undefined4 InitRsaKey(int param_1,undefined4 param_2);  /* @ 0044b830 */
undefined4 FreeRsaKey(int param_1);  /* @ 0044b8d8 */
int RsaPublicEncrypt(undefined4 param_1,uint param_2,undefined4 param_3,int param_4, undefined4 param_5,undefined4 param_6);  /* @ 0044c3a0 */
int RsaPrivateDecryptInline (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0044c508 */
int RsaSSL_VerifyInline(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0044c790 */
int RsaSSL_Sign(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6);  /* @ 0044ca18 */
undefined4 RsaEncryptSize(undefined4 param_1);  /* @ 0044cb84 */
int MakeRsaKey(int param_1,int param_2,uint param_3,int param_4);  /* @ 0044d0bc */
undefined4 AesSetKey(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);  /* @ 00450444 */
undefined4 AesSetIV(int param_1,int param_2);  /* @ 00450580 */
int AesCbcDecryptWithKey (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 00450644 */
undefined4 AesCbcEncrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 004507dc */
undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 004508f4 */
void AesCtrEncrypt(int param_1,byte *param_2,byte *param_3,uint param_4);  /* @ 00450ab0 */
undefined4 InitSha(undefined4 *param_1);  /* @ 00452efc */
undefined4 ShaUpdate(int *param_1,int param_2,int param_3);  /* @ 00456ca0 */
undefined4 ShaFinal(uint *param_1,undefined4 param_2);  /* @ 00456e34 */
int ShaHash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00457128 */
undefined4 InitSha512(undefined4 *param_1);  /* @ 004575ec */
int Sha512Update(int *param_1,int param_2,int param_3);  /* @ 0045e510 */
int Sha512Final(uint *param_1,undefined4 param_2);  /* @ 0045e6c0 */
int Sha512Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0045e9e4 */
undefined4 InitSha384(undefined4 *param_1);  /* @ 0045eb28 */
int Sha384Update(int *param_1,int param_2,int param_3);  /* @ 00465a4c */
int Sha384Final(uint *param_1,undefined4 param_2);  /* @ 00465bfc */
int Sha384Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00465f20 */
undefined4 InitMutex(undefined4 param_1);  /* @ 00466070 */
undefined4 FreeMutex(undefined4 param_1);  /* @ 004660e8 */
undefined4 LockMutex(undefined4 param_1);  /* @ 0046615c */
undefined4 UnLockMutex(undefined4 param_1);  /* @ 004661d0 */
uint GetMyVersion(int param_1,int *param_2,uint *param_3);  /* @ 00466748 */
undefined4 GetExplicitVersion(int param_1,int *param_2,undefined4 *param_3);  /* @ 0046695c */
undefined4 GetAlgoId(int param_1,int *param_2,int *param_3,undefined4 param_4);  /* @ 00466d38 */
undefined4 RsaPrivateKeyDecode(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);  /* @ 00466f3c */
int ToTraditional(int param_1,undefined4 param_2);  /* @ 004671dc */
undefined4 ToTraditionalEnc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00467bc4 */
undefined4 RsaPublicKeyDecode(int param_1,int *param_2,int param_3,undefined4 param_4);  /* @ 004681c0 */
void InitDecodedCert(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00468744 */
void FreeDecodedCert(int *param_1);  /* @ 00468bac */
int DecodeToKey(int param_1,undefined4 param_2);  /* @ 0046b790 */
int EncodeSignature(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0046c598 */
undefined4 DecodeAltNames(int param_1,undefined4 param_2,int param_3);  /* @ 0046d5b8 */
undefined4 DecodeBasicCaConstraint(int param_1,uint param_2,int param_3);  /* @ 0046db84 */
undefined4 DecodeCrlDist(int param_1,uint param_2,int param_3);  /* @ 0046de2c */
undefined4 DecodeAuthInfo(int param_1,uint param_2,int param_3);  /* @ 0046e234 */
int DecodeAuthKeyId(int param_1,undefined4 param_2,int param_3);  /* @ 0046e45c */
int DecodeSubjKeyId(int param_1,undefined4 param_2,int param_3);  /* @ 0046e6ec */
undefined4 DecodeKeyUsage(int param_1,undefined4 param_2,int param_3);  /* @ 0046e918 */
undefined4 DecodeExtKeyUsage(int param_1,uint param_2,int param_3);  /* @ 0046eb14 */
undefined4 DecodeNameConstraints(int param_1,uint param_2,int param_3);  /* @ 0046f004 */
undefined4 DecodeCertExtensions(int param_1);  /* @ 0046f238 */
int ParseCert(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0046fa58 */
int ParseCertRelative(int *param_1,int param_2,int param_3,undefined4 param_4);  /* @ 0046fc4c */
undefined4 * MakeSigner(void);  /* @ 004701d4 */
void FreeSigner(int param_1,undefined4 param_2);  /* @ 00470280 */
void FreeSignerTable(int param_1,int param_2,undefined4 param_3);  /* @ 004703b4 */
int SetSerialNumber(char *param_1,uint param_2,undefined1 *param_3);  /* @ 00470568 */
int GetNameHash(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);  /* @ 004710a0 */
undefined4 Base64_Decode(int param_1,uint param_2,int param_3,uint *param_4);  /* @ 004712d0 */
undefined4 Base64_Encode(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004721d4 */
undefined4 Base16_Decode(char *param_1,uint param_2,char *param_3,uint *param_4);  /* @ 004722d0 */
void Arc4SetKey(undefined1 *param_1,int param_2,uint param_3);  /* @ 004725a0 */
void Arc4Process(byte *param_1,byte *param_2,byte *param_3,int param_4);  /* @ 004727dc */
void InitMd5(undefined4 *param_1);  /* @ 0047297c */
void Md5Update(int *param_1,int param_2,int param_3);  /* @ 0047447c */
void Md5Final(uint *param_1,undefined4 param_2);  /* @ 004745d4 */
undefined4 Md5Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00474824 */
int PBKDF1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6,int param_7,int param_8);  /* @ 00474ab4 */
int PBKDF2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6,int param_7,int param_8);  /* @ 00474de4 */
int PKCS12_PBKDF(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7 ,int param_8,undefined4 param_9);  /* @ 00475198 */
undefined4 IsAtLeastTLSv1_2(int param_1);  /* @ 0048200c */
void c32to24(undefined4 param_1,undefined1 *param_2);  /* @ 004820a0 */
void FreeSSL_Ctx(int param_1);  /* @ 004826fc */
void InitSuites(int *param_1,undefined2 param_2,char param_3);  /* @ 00482c84 */
void InitX509(undefined4 *param_1,undefined1 param_2);  /* @ 0048315c */
void FreeX509(int param_1);  /* @ 004832b4 */
void FreeArrays(int param_1,int param_2);  /* @ 00483fe0 */
void FreeHandshakeResources(int param_1);  /* @ 004844ac */
void FreeSSL(undefined4 *param_1);  /* @ 00484658 */
undefined1 * MakeSSLv3(undefined1 *param_1);  /* @ 004846f8 */
undefined4 LowResTimer(void);  /* @ 00484740 */
undefined4 SendBuffered(int *param_1);  /* @ 00485028 */
undefined4 CopyDecodedToX509(int *param_1,int *param_2);  /* @ 00486fdc */
int DoHandShakeMsgType(int param_1,int param_2,int *param_3,byte param_4,int param_5,uint param_6);  /* @ 004892a4 */
int ProcessReply(int param_1);  /* @ 0048b668 */
int SendChangeCipher(int param_1);  /* @ 0048c0f4 */
int SendFinished(int param_1);  /* @ 0048d248 */
int SendCertificate(int param_1);  /* @ 0048d5ac */
int SendCertificateRequest(int param_1);  /* @ 0048da24 */
int SendData(int param_1,int param_2,int param_3);  /* @ 0048dd3c */
int ReceiveData(int param_1,undefined4 param_2,int param_3,int param_4);  /* @ 0048e184 */
int SendAlert(int param_1,int param_2,undefined4 param_3);  /* @ 0048e4d0 */
void SetErrorString(undefined4 param_1,undefined4 param_2);  /* @ 0048edc8 */
undefined * GetCipherNames(void);  /* @ 0048ee48 */
undefined4 GetCipherNamesSize(void);  /* @ 0048ee80 */
int SetCipherList(undefined4 *param_1,char *param_2);  /* @ 0048eea8 */
int SendClientHello(int param_1);  /* @ 0048f480 */
bool VerifyClientSuite(int param_1);  /* @ 00490480 */
uint SendClientKeyExchange(int param_1);  /* @ 00490a2c */
int SendCertificateVerify(int param_1);  /* @ 00490fb8 */
int SendServerHello(int param_1);  /* @ 00491630 */
undefined4 SendServerKeyExchange(void);  /* @ 004919d4 */
undefined4 VerifyServerSuite(int param_1,ushort param_2);  /* @ 00491a04 */
int MatchSuite(int param_1,int param_2);  /* @ 00491ee4 */
int SendServerHelloDone(int param_1);  /* @ 004930ec */
int EmbedReceive(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);  /* @ 00493888 */
int EmbedSend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);  /* @ 00493b74 */
undefined4 SetCipherSpecs(int param_1);  /* @ 00493f50 */
undefined4 SetKeysSide(int param_1,int param_2);  /* @ 00494f00 */
undefined4 StoreKeys(int param_1,int param_2);  /* @ 0049503c */
int DeriveKeys(int param_1);  /* @ 00495268 */
undefined4 MakeMasterSecret(int param_1);  /* @ 00495ac0 */
undefined * CTaoCryptGetErrorString(int param_1);  /* @ 00495b60 */
undefined4 ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 (uint param_1,char *param_2,uint param_3);  /* @ 004982cc */
undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4);  /* @ 004989e0 */
void __PLT_HEAD(void);  /* @ 004add60 */
void clock_gettime(void);  /* @ 004add80 */
void strcpy(void);  /* @ 004add90 */
void strtok_r(void);  /* @ 004adda0 */
void printf(void);  /* @ 004addb0 */
void recv(void);  /* @ 004addc0 */
void connect(void);  /* @ 004addd0 */
void strerror(void);  /* @ 004adde0 */
void geteuid(void);  /* @ 004addf0 */
void inet_pton(void);  /* @ 004ade00 */
void stat64(void);  /* @ 004ade10 */
void __xpg_basename(void);  /* @ 004ade20 */
void memmove(void);  /* @ 004ade30 */
void snprintf(void);  /* @ 004ade40 */
void getenv(void);  /* @ 004ade50 */
void qsort(void);  /* @ 004ade60 */
void fgets(void);  /* @ 004ade70 */
void __xpg_strerror_r(void);  /* @ 004ade80 */
void fcntl64(void);  /* @ 004ade90 */
void memcpy(void);  /* @ 004adea0 */
void puts(void);  /* @ 004adeb0 */
void tolower(void);  /* @ 004adec0 */
void system(void);  /* @ 004aded0 */
void siglongjmp(void);  /* @ 004adef0 */
void strtoll(void);  /* @ 004adf00 */
void strtoul(void);  /* @ 004adf10 */
void socket(void);  /* @ 004adf20 */
void fflush(void);  /* @ 004adf30 */
void strncasecmp(void);  /* @ 004adf40 */
void send(void);  /* @ 004adf50 */
void freeaddrinfo(void);  /* @ 004adf60 */
void gmtime_r(void);  /* @ 004adf70 */
void alarm(void);  /* @ 004adf80 */
void strtol(void);  /* @ 004adf90 */
void __sigsetjmp(void);  /* @ 004adfa0 */
void strrchr(void);  /* @ 004adfb0 */
void calloc(void);  /* @ 004adfc0 */
void fprintf(void);  /* @ 004adfd0 */
void bind(void);  /* @ 004adfe0 */
void if_nametoindex(void);  /* @ 004adff0 */
void setsockopt(void);  /* @ 004ae000 */
void fseek(void);  /* @ 004ae010 */
void memchr(void);  /* @ 004ae020 */
void strstr(void);  /* @ 004ae030 */
void rand(void);  /* @ 004ae040 */
void strncmp(void);  /* @ 004ae050 */
void strncpy(void);  /* @ 004ae060 */
void strcasecmp(void);  /* @ 004ae070 */
void memcmp(void);  /* @ 004ae090 */
void sscanf(void);  /* @ 004ae0a0 */
void sigaction(void);  /* @ 004ae0b0 */
void strdup(void);  /* @ 004ae0d0 */
void gettimeofday(void);  /* @ 004ae0e0 */
void fopen(void);  /* @ 004ae0f0 */
void localtime(void);  /* @ 004ae100 */
void memset(void);  /* @ 004ae110 */
void ftell(void);  /* @ 004ae120 */
void srand(void);  /* @ 004ae130 */
void fclose(void);  /* @ 004ae140 */
void time(void);  /* @ 004ae150 */
void poll(void);  /* @ 004ae160 */
void getpwuid_r(void);  /* @ 004ae170 */
void strcmp(void);  /* @ 004ae180 */
void sprintf(void);  /* @ 004ae190 */
void getpeername(void);  /* @ 004ae1a0 */
void getifaddrs(void);  /* @ 004ae1b0 */
void fputc(void);  /* @ 004ae1c0 */
void getsockopt(void);  /* @ 004ae1d0 */
void freeifaddrs(void);  /* @ 004ae1e0 */
void getaddrinfo(void);  /* @ 004ae1f0 */
void stat(void);  /* @ 004ae200 */
void fwrite(void);  /* @ 004ae210 */
void rewind(void);  /* @ 004ae220 */
void __errno_location(void);  /* @ 004ae230 */
void exit(void);  /* @ 004ae240 */
void inet_ntop(void);  /* @ 004ae250 */
void atoi(void);  /* @ 004ae260 */
void strlen(void);  /* @ 004ae270 */
void strchr(void);  /* @ 004ae290 */
void fputs(void);  /* @ 004ae2a0 */
void close(void);  /* @ 004ae2b0 */
void __fputc_unlocked(void);  /* @ 004ae2d0 */
void getsockname(void);  /* @ 004ae2e0 */
void fopen64(void);  /* @ 004ae2f0 */

#endif /* CLOUDAPI_H */
