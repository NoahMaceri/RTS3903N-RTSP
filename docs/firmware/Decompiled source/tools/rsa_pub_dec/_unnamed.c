/* rsa_pub_dec — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rsa_pub_dec.h"

// ==== FUN_00400b00 @ 00400b00 size=64

/* WARNING: Removing unreachable block (ram,0x00400b20) */
/* WARNING: Removing unreachable block (ram,0x00400b30) */

void FUN_00400b00(void)

{
  return;
}



// ==== FUN_00400b40 @ 00400b40 size=76

/* WARNING: Removing unreachable block (ram,0x00400b6c) */
/* WARNING: Removing unreachable block (ram,0x00400b7c) */

void FUN_00400b40(void)

{
  return;
}



// ==== FUN_00400b8c @ 00400b8c size=176

/* WARNING: Removing unreachable block (ram,0x00400bec) */

void FUN_00400b8c(void)

{
  if (DAT_00411330 == '\0') {
    FUN_00400b00();
    DAT_00411330 = '\x01';
  }
  return;
}



// ==== FUN_00400c3c @ 00400c3c size=60

/* WARNING: Removing unreachable block (ram,0x00400c58) */

void FUN_00400c3c(void)

{
  FUN_00400b40();
  return;
}



// ==== FUN_00400c80 @ 00400c80 size=140

int FUN_00400c80(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_10 [2];
  
  local_10[0] = 0;
  iVar1 = BIO_new_mem_buf(param_1,0xffffffff);
  if (iVar1 == 0) {
    printf("Failed to create key BIO",local_10);
    local_10[0] = 0;
  }
  else {
    if (param_2 == 0) {
      local_10[0] = PEM_read_bio_RSAPrivateKey(iVar1,local_10,0,0);
    }
    else {
      local_10[0] = PEM_read_bio_RSA_PUBKEY();
    }
    if (local_10[0] == 0) {
      printf("Failed to create RSA");
    }
  }
  return local_10[0];
}



// ==== FUN_00400d0c @ 00400d0c size=100

void FUN_00400d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00400c80(param_3,1);
  RSA_public_decrypt(param_2,param_1,param_4,uVar1,_fdata);
  return;
}



// ==== FUN_00400d70 @ 00400d70 size=100

void FUN_00400d70(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = malloc(0x82);
  ERR_load_crypto_strings();
  uVar2 = ERR_get_error();
  ERR_error_string(uVar2,uVar1);
  printf("%s ERROR: %s\n",param_1,uVar1);
  free(uVar1);
  return;
}



// ==== FUN_00400de0 @ 00400de0 size=72

void FUN_00400de0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00411284;
  pcVar2 = DAT_00411284;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



