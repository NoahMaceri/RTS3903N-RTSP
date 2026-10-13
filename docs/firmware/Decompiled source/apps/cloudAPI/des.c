/* cloudAPI — "des" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== DES_key_sched @ 00440ac8 size=132

undefined4 DES_key_sched(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c44);
  (*(code *)PTR_memcpy_004bebdc)(param_2,param_1,8);
  return 1;
}



// ==== DES_cbc_encrypt @ 00440b4c size=260

void DES_cbc_encrypt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6)

{
  undefined1 auStack_98 [144];
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c54);
  (*(code *)PTR_Des_SetKey_004be80c)(auStack_98,param_4,param_5,param_6 == 0);
  if (param_6 == 0) {
    (*(code *)PTR_Des_CbcDecrypt_004be830)(auStack_98,param_2,param_1,param_3);
  }
  else {
    (*(code *)PTR_Des_CbcEncrypt_004be82c)(auStack_98,param_2,param_1,param_3);
  }
  return;
}



// ==== DES_ncbc_encrypt @ 00440c50 size=308

void DES_ncbc_encrypt(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                     undefined4 param_5,int param_6)

{
  undefined1 auStack_98 [144];
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1c64);
  (*(code *)PTR_Des_SetKey_004be80c)(auStack_98,param_4,param_5,param_6 == 0);
  if (param_6 == 0) {
    (*(code *)PTR_Des_CbcDecrypt_004be830)(auStack_98,param_2,param_1,param_3);
  }
  else {
    (*(code *)PTR_Des_CbcEncrypt_004be82c)(auStack_98,param_2,param_1,param_3);
  }
  (*(code *)PTR_memcpy_004bebdc)(param_5,param_2 + param_3 + -8,8);
  return;
}



// ==== Des_SetKey @ 004519d8 size=152

undefined4 Des_SetKey(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_Des_SetIV_004be810)(param_1,param_3);
  uVar1 = (*(code *)(PTR_LAB_004be908 + 0x1560))(param_2,param_4,param_1 + 0x10);
  return uVar1;
}



// ==== Des_CbcEncrypt @ 00452484 size=264

undefined4 Des_CbcEncrypt(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 3;
  while (local_10 != 0) {
    (*(code *)(PTR_LAB_004be908 + 0xef4))(param_1,local_res8,8);
    (*(code *)(PTR_LAB_004be908 + 0x2010))(param_1,param_1,param_1);
    (*(code *)PTR_memcpy_004bebdc)(local_res4,param_1,8);
    local_res4 = local_res4 + 8;
    local_res8 = local_res8 + 8;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== Des_CbcDecrypt @ 0045258c size=396

undefined4 Des_CbcDecrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_18;
  undefined1 auStack_14 [12];
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_18 = param_4 >> 3;
  while (local_18 != 0) {
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 8,local_res8,8);
    (*(code *)(PTR_LAB_004be908 + 0x2010))(param_1,param_1 + 8,local_res4);
    (*(code *)(PTR_LAB_004be908 + 0xef4))(local_res4,param_1,8);
    (*(code *)PTR_memcpy_004bebdc)(auStack_14,param_1,8);
    (*(code *)PTR_memcpy_004bebdc)(param_1,param_1 + 8,8);
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 8,auStack_14,8);
    local_res4 = local_res4 + 8;
    local_res8 = local_res8 + 8;
    local_18 = local_18 - 1;
  }
  return 0;
}



// ==== Des_SetIV @ 00452a24 size=180

void Des_SetIV(int param_1,int param_2)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_1 != 0) {
      (*(code *)PTR_memset_004beb98)(param_1,0,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_004bebdc)(param_1,param_2,8);
  }
  return;
}



// ==== Des_CbcDecryptWithKey @ 00452ad8 size=184

int Des_CbcDecryptWithKey
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int local_a0;
  undefined1 auStack_9c [148];
  
  local_a0 = (*(code *)PTR_Des_SetKey_004be80c)(auStack_9c,param_4,param_5,1);
  if (local_a0 == 0) {
    local_a0 = (*(code *)PTR_Des_CbcDecrypt_004be830)(auStack_9c,param_1,param_2,param_3);
  }
  return local_a0;
}



