/* cloudAPI — "evp" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== EVP_sha256 @ 0043e2c4 size=96

undefined4 EVP_sha256(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1840);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a98);
}



// ==== EVP_sha384 @ 0043e324 size=96

undefined4 EVP_sha384(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x184c);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a94);
}



// ==== EVP_sha512 @ 0043e384 size=96

undefined4 EVP_sha512(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1858);
  return *(undefined4 *)(PTR_clock_gettime_004be64c + -0x1a90);
}



// ==== EVP_CIPHER_MD_CTX_init @ 0043e3e4 size=88

void EVP_CIPHER_MD_CTX_init(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1864);
  return;
}



// ==== EVP_MD_CTX_cleanup @ 0043e7fc size=96

undefined4 EVP_MD_CTX_cleanup(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x195c);
  return 0;
}



// ==== EVP_CIPHER_CTX_init @ 0043e85c size=132

void EVP_CIPHER_CTX_init(undefined4 *param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1970);
  if (param_1 != (undefined4 *)0x0) {
    *(undefined1 *)((int)param_1 + 5) = 0xff;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// ==== EVP_CIPHER_CTX_cleanup @ 0043e8e0 size=128

undefined4 EVP_CIPHER_CTX_cleanup(undefined4 *param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1984);
  if (param_1 != (undefined4 *)0x0) {
    *(undefined1 *)((int)param_1 + 5) = 0xff;
    *param_1 = 0;
  }
  return 1;
}



// ==== EVP_DigestInit @ 0044019c size=608

undefined4 EVP_DigestInit(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1bd8);
  iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x8e4,3);
  if (iVar1 == 0) {
    *param_1 = 0;
    (*(code *)PTR_CyaSSL_MD5_Init_004be840)(param_1 + 8);
  }
  else {
    iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x1be8,6);
    if (iVar1 == 0) {
      *param_1 = 2;
      (*(code *)PTR_CyaSSL_SHA256_Init_004be844)(param_1 + 8);
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x1bf0,6);
      if (iVar1 == 0) {
        *param_1 = 5;
        (*(code *)PTR_CyaSSL_SHA384_Init_004be848)(param_1 + 8);
      }
      else {
        iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x1bf8,6);
        if (iVar1 == 0) {
          *param_1 = 4;
          (*(code *)PTR_CyaSSL_SHA512_Init_004be84c)(param_1 + 8);
        }
        else {
          iVar1 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004be644 + 0x1c00,3);
          if (iVar1 != 0) {
            return 0xffffff53;
          }
          *param_1 = 1;
          (*(code *)PTR_CyaSSL_SHA_Init_004be7e0)(param_1 + 8);
        }
      }
    }
  }
  return 1;
}



// ==== EVP_DigestUpdate @ 004403fc size=452

undefined4 EVP_DigestUpdate(char *param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c04);
  if (*param_1 == '\0') {
    (*(code *)PTR_CyaSSL_MD5_Update_004be850)(param_1 + 8,param_2,param_3);
  }
  else if (*param_1 == '\x01') {
    (*(code *)PTR_CyaSSL_SHA_Update_004be7e4)(param_1 + 8,param_2,param_3);
  }
  else if (*param_1 == '\x02') {
    (*(code *)PTR_CyaSSL_SHA256_Update_004be854)(param_1 + 8,param_2,param_3);
  }
  else if (*param_1 == '\x05') {
    (*(code *)PTR_CyaSSL_SHA384_Update_004be858)(param_1 + 8,param_2,param_3);
  }
  else {
    if (*param_1 != '\x04') {
      return 0xffffff53;
    }
    (*(code *)PTR_CyaSSL_SHA512_Update_004be85c)(param_1 + 8,param_2,param_3);
  }
  return 1;
}



// ==== EVP_DigestFinal_ex @ 004407e8 size=136

undefined4 EVP_DigestFinal_ex(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c28);
  uVar1 = (*(code *)PTR_CyaSSL_EVP_DigestFinal_004be870)(param_1,param_2,param_3);
  return uVar1;
}



