/* oss — "des3" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== Des3_SetKey @ 00490180 size=440

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
  iVar2 = (*(code *)(PTR_LAB_0056125c + -0x390))(param_2 + iVar2,param_4,param_1);
  if (iVar2 == 0) {
    uVar1 = (*(code *)(PTR_LAB_0056125c + 0xb4))(param_4);
    iVar2 = (*(code *)(PTR_LAB_0056125c + -0x390))(param_2 + 8,uVar1,param_1 + 0x80);
    if (iVar2 == 0) {
      if (param_4 == 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0x10;
      }
      iVar2 = (*(code *)(PTR_LAB_0056125c + -0x390))(param_2 + iVar2,param_4,param_1 + 0x100);
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_Des3_SetIV_00561158)(param_1,param_3);
      }
    }
  }
  return iVar2;
}



// ==== Des3_CbcEncrypt @ 00490e28 size=280

undefined4 Des3_CbcEncrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 3;
  while (local_10 != 0) {
    (*(code *)(PTR_LAB_0056125c + -0x9fc))(param_1 + 0x180,local_res8,8);
    (*(code *)(PTR_LAB_0056125c + 0x928))(param_1,param_1 + 0x180,param_1 + 0x180);
    (*(code *)PTR_memcpy_005615a4)(local_res4,param_1 + 0x180,8);
    local_res4 = local_res4 + 8;
    local_res8 = local_res8 + 8;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== Des3_CbcDecrypt @ 00490f40 size=320

undefined4 Des3_CbcDecrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 3;
  while (local_10 != 0) {
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0x188,local_res8,8);
    (*(code *)(PTR_LAB_0056125c + 0x928))(param_1,param_1 + 0x188,local_res4);
    (*(code *)(PTR_LAB_0056125c + -0x9fc))(local_res4,param_1 + 0x180,8);
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0x180,param_1 + 0x188,8);
    local_res4 = local_res4 + 8;
    local_res8 = local_res8 + 8;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== Des3_SetIV @ 004912a0 size=196

undefined4 Des3_SetIV(int param_1,int param_2)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_1 != 0) {
      (*(code *)PTR_memset_00561588)(param_1 + 0x180,0,8);
    }
  }
  else {
    (*(code *)PTR_memcpy_005615a4)(param_1 + 0x180,param_2,8);
  }
  return 0;
}



// ==== Des3_CbcDecryptWithKey @ 00491364 size=184

int Des3_CbcDecryptWithKey
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int local_1a0;
  undefined1 auStack_19c [404];
  
  local_1a0 = (*(code *)PTR_Des3_SetKey_00561154)(auStack_19c,param_4,param_5,1);
  if (local_1a0 == 0) {
    local_1a0 = (*(code *)PTR_Des3_CbcDecrypt_00561178)(auStack_19c,param_1,param_2,param_3);
  }
  return local_1a0;
}



