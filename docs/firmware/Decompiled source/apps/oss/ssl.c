/* oss — "ssl" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== SSL_new @ 00470c88 size=272

int SSL_new(int param_1)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4748);
  if (param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (*(code *)PTR_CyaSSL_Malloc_00560f78)(0xa40);
    if (local_10 != 0) {
      local_c = (*(code *)PTR_InitSSL_00560fa8)(local_10,param_1);
      if (local_c < 0) {
        (*(code *)PTR_FreeSSL_00560fac)(local_10);
        local_10 = 0;
      }
    }
    (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x4748,local_c);
  }
  return local_10;
}



// ==== SSL_set_fd @ 00470e34 size=188

undefined4 SSL_set_fd(int param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4734);
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x13c) = param_2;
  *(int *)(param_1 + 0x150) = param_1 + 0x138;
  *(int *)(param_1 + 0x154) = param_1 + 0x13c;
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x4734,1);
  return 1;
}



// ==== SSL_get_fd @ 0047110c size=140

undefined4 SSL_get_fd(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4728);
  (*(code *)PTR_FUN_00560fa0)(PTR_DAT_00560f88 + -0x4728,*(undefined4 *)(param_1 + 0x138));
  return *(undefined4 *)(param_1 + 0x138);
}



// ==== SSL_want_read @ 00471cc8 size=128

bool SSL_want_read(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4624);
  return *(int *)(param_1 + 4) == -0x143;
}



// ==== SSL_want_write @ 00471d48 size=128

bool SSL_want_write(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x4614);
  return *(int *)(param_1 + 4) == -0x147;
}



// ==== SSL_pending @ 004729f0 size=100

undefined4 SSL_pending(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x44cc);
  return *(undefined4 *)(param_1 + 0x4b0);
}



// ==== SSL_CTX_check_private_key @ 004766e0 size=96

undefined4 SSL_CTX_check_private_key(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3d24);
  return 1;
}



// ==== SSL_CTX_use_RSAPrivateKey_file @ 00476c58 size=136

undefined4 SSL_CTX_use_RSAPrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3c1c);
  uVar1 = (*(code *)PTR_CyaSSL_CTX_use_PrivateKey_file_0056108c)(param_1,param_2,param_3);
  return uVar1;
}



// ==== SSL_get_session @ 00476fc8 size=148

undefined4 SSL_get_session(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3b9c);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_FUN_00561094)(param_1,0);
  }
  return uVar1;
}



// ==== SSL_set_session @ 0047705c size=152

undefined4 SSL_set_session(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3b8c);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)PTR_FUN_00561098)(param_1,param_2);
  }
  return uVar1;
}



// ==== SSL_library_init @ 004772c4 size=136

undefined4 SSL_library_init(void)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3b30);
  iVar1 = (*(code *)PTR_CyaSSL_Init_00560f94)();
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== SSL_CTX_set_session_cache_mode @ 0047734c size=156

undefined4 SSL_CTX_set_session_cache_mode(int param_1,int param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3b1c);
  if (param_2 == 0x1e) {
    *(undefined1 *)(param_1 + 0x147) = 1;
  }
  if (param_2 == 0x22) {
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  return 1;
}



// ==== SSL_set_bio @ 0047a7c0 size=192

void SSL_set_bio(int param_1,int param_2,int param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x32f8);
  (*(code *)PTR_CyaSSL_set_rfd_005610ec)(param_1,*(undefined4 *)(param_2 + 0x10));
  (*(code *)PTR_CyaSSL_set_wfd_005610f0)(param_1,*(undefined4 *)(param_3 + 0x10));
  *(int *)(param_1 + 0x148) = param_2;
  *(int *)(param_1 + 0x14c) = param_3;
  return;
}



// ==== SSL_set_accept_state @ 0047aa28 size=240

void SSL_set_accept_state(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x32ec);
  *(undefined1 *)(param_1 + 0x4cc) = 0;
  (*(code *)PTR_InitSuites_00561020)
            (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),1,0,
             *(undefined1 *)(param_1 + 0x4e0),*(undefined1 *)(param_1 + 0x4e1),
             *(undefined1 *)(param_1 + 0x4e2),*(undefined1 *)(param_1 + 0x4e3),
             *(undefined1 *)(param_1 + 0x4cc));
  return;
}



// ==== SSL_CTX_set_options @ 0047abcc size=100

undefined4 SSL_CTX_set_options(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x32d4);
  return param_2;
}



// ==== SSL_CTX_set_mode @ 0047f518 size=128

int SSL_CTX_set_mode(int param_1,int param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2c48);
  if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x14f) = 1;
  }
  return param_2;
}



// ==== SSL_get_peer_certificate @ 0047f684 size=128

int SSL_get_peer_certificate(int param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2c34);
  if (*(int *)(param_1 + 0x69c) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x590;
  }
  return param_1;
}



// ==== SSL_get_current_cipher_suite @ 004815a8 size=140

undefined2 SSL_get_current_cipher_suite(int param_1)

{
  undefined2 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2834);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT11(*(undefined1 *)(param_1 + 0x4c6),*(undefined1 *)(param_1 + 0x4c7));
  }
  return uVar1;
}



// ==== SSL_ResourceFree @ 004c27cc size=1008

void SSL_ResourceFree(int param_1)

{
  (*(code *)PTR_FUN_00561400)(param_1);
  (*(code *)PTR_FreeArrays_00560fe0)(param_1,0);
  (*(code *)PTR_FreeRng_005611ec)(*(undefined4 *)(param_1 + 0x158));
  if (*(int *)(param_1 + 0x158) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x158));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x47c) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x47c));
  }
  if (*(int *)(param_1 + 0x474) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x474));
  }
  if (*(int *)(param_1 + 0x46c) != 0) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x46c));
  }
  if ((*(char *)(param_1 + 0x4c3) != '\0') || (*(char *)(param_1 + 0x4cc) == '\x01')) {
    if (*(int *)(param_1 + 0x464) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x464));
    }
    if (*(int *)(param_1 + 0x45c) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x45c));
    }
  }
  if ((*(char *)(param_1 + 0x4c0) != '\0') && (*(int *)(param_1 + 0x444) != 0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x444));
  }
  if ((*(char *)(param_1 + 0x4c1) != '\0') && (*(int *)(param_1 + 0x454) != 0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x454));
  }
  if ((*(char *)(param_1 + 0x4c2) != '\0') && (*(int *)(param_1 + 0x44c) != 0)) {
    (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x44c));
  }
  if (*(int *)(param_1 + 0x570) != 0) {
    (*(code *)PTR_FreeRsaKey_00561070)(*(undefined4 *)(param_1 + 0x570));
    if (*(int *)(param_1 + 0x570) != 0) {
      (*(code *)PTR_CyaSSL_Free_00560f84)(*(int *)(param_1 + 0x570));
    }
  }
  if (*(char *)(param_1 + 0x495) != '\0') {
    (*(code *)PTR_FUN_00561404)(param_1,1);
  }
  if (*(char *)(param_1 + 0x4ad) != '\0') {
    (*(code *)PTR_FUN_00561408)(param_1);
  }
  (*(code *)PTR_FreeX509_005611c0)(param_1 + 0x590);
  (*(code *)PTR_CyaSSL_BIO_free_00561100)(*(undefined4 *)(param_1 + 0x148));
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x14c)) {
    (*(code *)PTR_CyaSSL_BIO_free_00561100)(*(undefined4 *)(param_1 + 0x14c));
  }
  return;
}



