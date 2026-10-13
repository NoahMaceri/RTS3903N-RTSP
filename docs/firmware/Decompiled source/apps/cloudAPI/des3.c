/* cloudAPI — "des3" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== Des3_SetKey @ 00451a70 size=440

int Des3_SetKey(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x10;
  }
  iVar2 = (*(code *)(PTR_LAB_004be908 + 0x1560))(param_2 + iVar2,param_4,param_1);
  if (iVar2 == 0) {
    uVar1 = (*(code *)(PTR_LAB_004be908 + 0x19a4))(param_4);
    iVar2 = (*(code *)(PTR_LAB_004be908 + 0x1560))(param_2 + 8,uVar1,param_1 + 0x80);
    if (iVar2 == 0) {
      if (param_4 == 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0x10;
      }
      iVar2 = (*(code *)(PTR_LAB_004be908 + 0x1560))(param_2 + iVar2,param_4,param_1 + 0x100);
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_Des3_SetIV_004be818)(param_1,param_3);
      }
    }
  }
  return iVar2;
}



// ==== Des3_CbcEncrypt @ 00452718 size=280

undefined4 Des3_CbcEncrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 3;
  while (local_10 != 0) {
    (*(code *)(PTR_LAB_004be908 + 0xef4))(param_1 + 0x180,local_res8,8);
    (*(code *)(PTR_LAB_004be908 + 0x2218))(param_1,param_1 + 0x180,param_1 + 0x180);
    (*(code *)PTR_memcpy_004bebdc)(local_res4,param_1 + 0x180,8);
    local_res4 = local_res4 + 8;
    local_res8 = local_res8 + 8;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== Des3_CbcDecrypt @ 00452830 size=320

undefined4 Des3_CbcDecrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 3;
  while (local_10 != 0) {
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x188,local_res8,8);
    (*(code *)(PTR_LAB_004be908 + 0x2218))(param_1,param_1 + 0x188,local_res4);
    (*(code *)(PTR_LAB_004be908 + 0xef4))(local_res4,param_1 + 0x180,8);
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x180,param_1 + 0x188,8);
    local_res4 = local_res4 + 8;
    local_res8 = local_res8 + 8;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== Des3_SetIV @ 00452b90 size=196

undefined4 Des3_SetIV(int param_1,int param_2)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_1 != 0) {
      (*(code *)PTR_memset_004beb98)(param_1 + 0x180,0,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x180,param_2,8);
  }
  return 0;
}



// ==== Des3_CbcDecryptWithKey @ 00452c54 size=184

int Des3_CbcDecryptWithKey
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int local_1a0;
  undefined1 auStack_19c [404];
  
  local_1a0 = (*(code *)PTR_Des3_SetKey_004be814)(auStack_19c,param_4,param_5,1);
  if (local_1a0 == 0) {
    local_1a0 = (*(code *)PTR_Des3_CbcDecrypt_004be838)(auStack_19c,param_1,param_2,param_3);
  }
  return local_1a0;
}



