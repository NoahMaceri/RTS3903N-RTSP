/* cloudAPI — "ssl" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== SSL_new @ 00432578 size=272

int SSL_new(int param_1)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x178);
  if (param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0xa40);
    if (local_10 != 0) {
      local_c = (*(code *)PTR_InitSSL_004be668)(local_10,param_1);
      if (local_c < 0) {
        (*(code *)PTR_FreeSSL_004be66c)(local_10);
        local_10 = 0;
      }
    }
    (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x178,local_c);
  }
  return local_10;
}



// ==== SSL_set_fd @ 00432724 size=188

undefined4 SSL_set_fd(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x18c);
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x13c) = param_2;
  *(int *)(param_1 + 0x150) = param_1 + 0x138;
  *(int *)(param_1 + 0x154) = param_1 + 0x13c;
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x18c,1);
  return 1;
}



// ==== SSL_get_fd @ 004329fc size=140

undefined4 SSL_get_fd(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x198);
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x198,*(undefined4 *)(param_1 + 0x138));
  return *(undefined4 *)(param_1 + 0x138);
}



// ==== SSL_want_read @ 004335b8 size=128

bool SSL_want_read(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x29c);
  return *(int *)(param_1 + 4) == -0x143;
}



// ==== SSL_want_write @ 00433638 size=128

bool SSL_want_write(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x2ac);
  return *(int *)(param_1 + 4) == -0x147;
}



// ==== SSL_pending @ 004342e0 size=100

undefined4 SSL_pending(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x3f4);
  return *(undefined4 *)(param_1 + 0x4b0);
}



// ==== SSL_CTX_check_private_key @ 00437fd0 size=96

undefined4 SSL_CTX_check_private_key(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xb9c);
  return 1;
}



// ==== SSL_CTX_use_RSAPrivateKey_file @ 00438548 size=136

undefined4 SSL_CTX_use_RSAPrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xca4);
  uVar1 = (*(code *)PTR_CyaSSL_CTX_use_PrivateKey_file_004be74c)(param_1,param_2,param_3);
  return uVar1;
}



// ==== SSL_get_session @ 004388b8 size=148

undefined4 SSL_get_session(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xd24);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_FUN_004be754)(param_1,0);
  }
  return uVar1;
}



// ==== SSL_set_session @ 0043894c size=152

undefined4 SSL_set_session(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xd34);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_FUN_004be758)(param_1,param_2);
  }
  return uVar1;
}



// ==== SSL_library_init @ 00438bb4 size=136

undefined4 SSL_library_init(void)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xd90);
  iVar1 = (*(code *)PTR_CyaSSL_Init_004be654)();
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== SSL_CTX_set_session_cache_mode @ 00438c3c size=156

undefined4 SSL_CTX_set_session_cache_mode(int param_1,int param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xda4);
  if (param_2 == 0x1e) {
    *(undefined1 *)(param_1 + 0x147) = 1;
  }
  if (param_2 == 0x22) {
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  return 1;
}



// ==== SSL_set_bio @ 0043c0b0 size=192

void SSL_set_bio(int param_1,int param_2,int param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x15c8);
  (*(code *)PTR_CyaSSL_set_rfd_004be7ac)(param_1,*(undefined4 *)(param_2 + 0x10));
  (*(code *)PTR_CyaSSL_set_wfd_004be7b0)(param_1,*(undefined4 *)(param_3 + 0x10));
  *(int *)(param_1 + 0x148) = param_2;
  *(int *)(param_1 + 0x14c) = param_3;
  return;
}



// ==== SSL_set_accept_state @ 0043c318 size=240

void SSL_set_accept_state(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x15d4);
  *(undefined1 *)(param_1 + 0x4cc) = 0;
  (*(code *)PTR_InitSuites_004be6e0)
            (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),1,0,
             *(undefined1 *)(param_1 + 0x4e0),*(undefined1 *)(param_1 + 0x4e1),
             *(undefined1 *)(param_1 + 0x4e2),*(undefined1 *)(param_1 + 0x4e3),
             *(undefined1 *)(param_1 + 0x4cc));
  return;
}



// ==== SSL_CTX_set_options @ 0043c4bc size=100

undefined4 SSL_CTX_set_options(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x15ec);
  return param_2;
}



// ==== SSL_CTX_set_mode @ 00440e08 size=128

int SSL_CTX_set_mode(int param_1,int param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c78);
  if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x14f) = 1;
  }
  return param_2;
}



// ==== SSL_get_peer_certificate @ 00440f74 size=128

int SSL_get_peer_certificate(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c8c);
  if (*(int *)(param_1 + 0x69c) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x590;
  }
  return param_1;
}



// ==== SSL_get_current_cipher_suite @ 00442e98 size=140

undefined2 SSL_get_current_cipher_suite(int param_1)

{
  undefined2 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x208c);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT11(*(undefined1 *)(param_1 + 0x4c6),*(undefined1 *)(param_1 + 0x4c7));
  }
  return uVar1;
}



// ==== SSL_ResourceFree @ 004840bc size=1008

void SSL_ResourceFree(int param_1)

{
  (*(code *)PTR_FUN_004beac4)(param_1);
  (*(code *)PTR_FreeArrays_004be6a0)(param_1,0);
  (*(code *)PTR_FreeRng_004be8ac)(*(undefined4 *)(param_1 + 0x158));
  if (*(int *)(param_1 + 0x158) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x158));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x47c) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x47c));
  }
  if (*(int *)(param_1 + 0x474) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x474));
  }
  if (*(int *)(param_1 + 0x46c) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x46c));
  }
  if ((*(char *)(param_1 + 0x4c3) != '\0') || (*(char *)(param_1 + 0x4cc) == '\x01')) {
    if (*(int *)(param_1 + 0x464) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x464));
    }
    if (*(int *)(param_1 + 0x45c) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x45c));
    }
  }
  if ((*(char *)(param_1 + 0x4c0) != '\0') && (*(int *)(param_1 + 0x444) != 0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x444));
  }
  if ((*(char *)(param_1 + 0x4c1) != '\0') && (*(int *)(param_1 + 0x454) != 0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x454));
  }
  if ((*(char *)(param_1 + 0x4c2) != '\0') && (*(int *)(param_1 + 0x44c) != 0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x44c));
  }
  if (*(int *)(param_1 + 0x570) != 0) {
    (*(code *)PTR_FreeRsaKey_004be730)(*(undefined4 *)(param_1 + 0x570));
    if (*(int *)(param_1 + 0x570) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x570));
    }
  }
  if (*(char *)(param_1 + 0x495) != '\0') {
    (*(code *)PTR_FUN_004beac8)(param_1,1);
  }
  if (*(char *)(param_1 + 0x4ad) != '\0') {
    (*(code *)PTR_FUN_004beacc)(param_1);
  }
  (*(code *)PTR_FreeX509_004be880)(param_1 + 0x590);
  (*(code *)PTR_CyaSSL_BIO_free_004be7c0)(*(undefined4 *)(param_1 + 0x148));
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x14c)) {
    (*(code *)PTR_CyaSSL_BIO_free_004be7c0)(*(undefined4 *)(param_1 + 0x14c));
  }
  return;
}



