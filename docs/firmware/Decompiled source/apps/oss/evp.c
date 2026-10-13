/* oss — "evp" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== EVP_sha256 @ 0047c9d4 size=96

undefined4 EVP_sha256(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3080);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x658);
}



// ==== EVP_sha384 @ 0047ca34 size=96

undefined4 EVP_sha384(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3074);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x65c);
}



// ==== EVP_sha512 @ 0047ca94 size=96

undefined4 EVP_sha512(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3068);
  return *(undefined4 *)(PTR_DAT_0056098c + 0x660);
}



// ==== EVP_CIPHER_MD_CTX_init @ 0047caf4 size=88

void EVP_CIPHER_MD_CTX_init(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x305c);
  return;
}



// ==== EVP_MD_CTX_cleanup @ 0047cf0c size=96

undefined4 EVP_MD_CTX_cleanup(void)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2f64);
  return 0;
}



// ==== EVP_CIPHER_CTX_init @ 0047cf6c size=132

void EVP_CIPHER_CTX_init(undefined4 *param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2f50);
  if (param_1 != (undefined4 *)0x0) {
    *(undefined1 *)((int)param_1 + 5) = 0xff;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// ==== EVP_CIPHER_CTX_cleanup @ 0047cff0 size=128

undefined4 EVP_CIPHER_CTX_cleanup(undefined4 *param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2f3c);
  if (param_1 != (undefined4 *)0x0) {
    *(undefined1 *)((int)param_1 + 5) = 0xff;
    *param_1 = 0;
  }
  return 1;
}



// ==== EVP_DigestInit @ 0047e8ac size=608

undefined4 EVP_DigestInit(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2ce8);
  iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x3fdc,3);
  if (iVar1 == 0) {
    *param_1 = 0;
    (*(code *)PTR_CyaSSL_MD5_Init_00561180)(param_1 + 8);
  }
  else {
    iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2cd8,6);
    if (iVar1 == 0) {
      *param_1 = 2;
      (*(code *)PTR_CyaSSL_SHA256_Init_00561184)(param_1 + 8);
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2cd0,6);
      if (iVar1 == 0) {
        *param_1 = 5;
        (*(code *)PTR_CyaSSL_SHA384_Init_00561188)(param_1 + 8);
      }
      else {
        iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2cc8,6);
        if (iVar1 == 0) {
          *param_1 = 4;
          (*(code *)PTR_CyaSSL_SHA512_Init_0056118c)(param_1 + 8);
        }
        else {
          iVar1 = (*(code *)PTR_strncmp_005615d4)(param_2,PTR_DAT_00560f88 + -0x2cc0,3);
          if (iVar1 != 0) {
            return 0xffffff53;
          }
          *param_1 = 1;
          (*(code *)PTR_CyaSSL_SHA_Init_00561120)(param_1 + 8);
        }
      }
    }
  }
  return 1;
}



// ==== EVP_DigestUpdate @ 0047eb0c size=452

undefined4 EVP_DigestUpdate(char *param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2cbc);
  if (*param_1 == '\0') {
    (*(code *)PTR_CyaSSL_MD5_Update_00561190)(param_1 + 8,param_2,param_3);
  }
  else if (*param_1 == '\x01') {
    (*(code *)PTR_CyaSSL_SHA_Update_00561124)(param_1 + 8,param_2,param_3);
  }
  else if (*param_1 == '\x02') {
    (*(code *)PTR_CyaSSL_SHA256_Update_00561194)(param_1 + 8,param_2,param_3);
  }
  else if (*param_1 == '\x05') {
    (*(code *)PTR_CyaSSL_SHA384_Update_00561198)(param_1 + 8,param_2,param_3);
  }
  else {
    if (*param_1 != '\x04') {
      return 0xffffff53;
    }
    (*(code *)PTR_CyaSSL_SHA512_Update_0056119c)(param_1 + 8,param_2,param_3);
  }
  return 1;
}



// ==== EVP_DigestFinal_ex @ 0047eef8 size=136

undefined4 EVP_DigestFinal_ex(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x2c98);
  uVar1 = (*(code *)PTR_CyaSSL_EVP_DigestFinal_005611b0)(param_1,param_2,param_3);
  return uVar1;
}



