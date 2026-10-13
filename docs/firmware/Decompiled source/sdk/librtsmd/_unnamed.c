/* librtsmd — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsmd.h"

// ==== FUN_00011538 @ 00011538 size=80

void FUN_00011538(void)

{
  if (((DAT_000247a8 - (int)(PTR_Elf32_Ehdr_000247ac + 0x47a0) >> 2) -
       (DAT_000247a8 - (int)(PTR_Elf32_Ehdr_000247ac + 0x47a0) >> 0x1f) >> 1 != 0) &&
     (DAT_0002481c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00011578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0002481c)();
    return;
  }
  return;
}



// ==== FUN_00011588 @ 00011588 size=216

void FUN_00011588(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_Elf32_Ehdr_000247ac;
  if (PTR_Elf32_Ehdr_000247ac[0x4860] == '\0') {
    if (DAT_00024834 != (code *)0x0) {
      (*DAT_00024834)(*DAT_000247b0);
    }
    puVar2 = PTR_Elf32_Ehdr_000247ac;
    puVar3 = PTR_Elf32_Ehdr_000247ac + 0x4794;
    iVar6 = DAT_000247b4 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x4864), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x4864) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(&_ftext + DAT_000247b8))();
    puVar1[0x4860] = 1;
  }
  return;
}



// ==== FUN_00011660 @ 00011660 size=80

void FUN_00011660(void)

{
  if ((*(int *)(PTR_Elf32_Ehdr_000247ac + 0x479c) != 0) && (DAT_000247cc != (code *)0x0)) {
    (*DAT_000247cc)(PTR_Elf32_Ehdr_000247ac + 0x479c);
  }
                    /* WARNING: Could not recover jumptable at 0x000116a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_000247b8 + 0x1538))();
  return;
}



// ==== FUN_000117ac @ 000117ac size=32

bool FUN_000117ac(void)

{
  return 2 < *DAT_0002482c;
}



// ==== FUN_000117cc @ 000117cc size=40

undefined4 FUN_000117cc(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x2400;
  if (*DAT_0002482c < 3) {
    uVar1 = 0x4b0;
  }
  return uVar1;
}



// ==== FUN_000117f4 @ 000117f4 size=192

undefined4 FUN_000117f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*DAT_0002483c)();
  uVar1 = (*DAT_00024828)(param_1,uVar1);
  iVar2 = (*DAT_000247f4)(uVar1);
  if (((iVar2 == 0) && (uVar1 = 0, *DAT_0002482c == 3)) && ((*(uint *)(param_1 + 0x10) & 7) != 0)) {
    (*DAT_0002480c)(4,DAT_000247b8 + 0x44e8,DAT_000247b8 + 0x46f8,0x7f);
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}



// ==== FUN_000118b4 @ 000118b4 size=40

undefined4 FUN_000118b4(void)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (*DAT_0002482c < 3) {
    uVar1 = 2;
  }
  return uVar1;
}



// ==== FUN_000118dc @ 000118dc size=40

undefined4 FUN_000118dc(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f;
  if (*DAT_0002482c < 3) {
    uVar1 = 4;
  }
  return uVar1;
}



// ==== FUN_0001193c @ 0001193c size=64

undefined4 FUN_0001193c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_000247f8)(param_1,param_2);
  uVar2 = 0xffffffea;
  if (iVar1 == 2) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_0001197c @ 0001197c size=64

undefined4 FUN_0001197c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_000247f8)(param_1,param_2);
  uVar2 = 0xffffffea;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_000119bc @ 000119bc size=316

int FUN_000119bc(undefined4 param_1,undefined1 param_2,int param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte local_20 [8];
  
  bVar1 = false;
  if (2 < *DAT_0002482c) {
    iVar3 = (*(code *)(DAT_000247b8 + 0x193c))(param_1,param_2);
    bVar1 = iVar3 == 0;
  }
  local_20[0] = 0;
  iVar3 = (*DAT_000247f8)(param_1,param_2);
  if (-1 < iVar3) {
    if (param_3 == 0) {
      bVar2 = local_20[0] & 0xfe;
    }
    else {
      iVar3 = (*(code *)(DAT_000247b8 + 0x16b0))(param_1,param_2);
      iVar4 = (*DAT_000247f4)(iVar3);
      if (iVar4 != 0) {
        return iVar3;
      }
      bVar2 = local_20[0] | 1;
      if ((bVar1) && (bVar2 = local_20[0] | 3, param_4 == 0)) {
        bVar2 = local_20[0] | 1;
      }
    }
    local_20[0] = bVar2;
    iVar3 = (*DAT_00024848)(param_1,0x701,param_2,1,0,0,local_20);
  }
  return iVar3;
}



// ==== FUN_00011af8 @ 00011af8 size=288

int FUN_00011af8(undefined4 param_1,undefined1 param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  byte local_20 [8];
  
  bVar1 = false;
  if (2 < *DAT_0002482c) {
    iVar2 = (*(code *)(DAT_000247b8 + 0x193c))(param_1,param_2);
    bVar1 = iVar2 == 0;
  }
  local_20[0] = 0;
  if (param_3 == (uint *)0x0) {
    iVar2 = -10;
  }
  else {
    iVar2 = (*DAT_000247f8)(param_1,param_2);
    if (-1 < iVar2) {
      iVar2 = (*DAT_00024848)(param_1,0x781,param_2,1,0,0,local_20);
      if (iVar2 == 0) {
        *param_3 = local_20[0] & 1;
        if (bVar1) {
          if (param_4 != (uint *)0x0) {
            *param_4 = local_20[0] >> 1 & 1;
          }
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
          if (param_4 != (uint *)0x0) {
            *param_4 = 0;
          }
        }
      }
    }
  }
  return iVar2;
}



// ==== FUN_00011c18 @ 00011c18 size=104

undefined4 FUN_00011c18(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_10;
  undefined1 local_f;
  
  if (param_2 != (undefined4 *)0x0) {
    local_10 = (undefined1)*param_2;
    local_f = (undefined1)param_2[1];
    uVar1 = (*DAT_00024848)(param_1,0x702,0,2,0,0,&local_10);
    return uVar1;
  }
  return 0xfffffff6;
}



// ==== FUN_00011c80 @ 00011c80 size=120

void FUN_00011c80(undefined4 param_1,uint *param_2)

{
  int iVar1;
  byte local_10;
  byte local_f;
  
  local_10 = 0;
  local_f = 0;
  iVar1 = (*DAT_00024848)(param_1,0x782,0,2,0,0,&local_10);
  if ((iVar1 == 0) && (param_2 != (uint *)0x0)) {
    *param_2 = (uint)local_10;
    param_2[1] = (uint)local_f;
  }
  return;
}



// ==== FUN_00011cf8 @ 00011cf8 size=140

void FUN_00011cf8(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(DAT_000247b8 + 0x193c))(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = (*DAT_0002483c)();
    (*DAT_000247ec)(param_1,param_2,0x703,param_3,uVar2);
  }
  return;
}



// ==== FUN_00011d84 @ 00011d84 size=140

void FUN_00011d84(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(DAT_000247b8 + 0x193c))(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = (*DAT_0002483c)();
    (*DAT_000247ec)(param_1,param_2,0x783,param_3,uVar2);
  }
  return;
}



// ==== FUN_00011e10 @ 00011e10 size=228

int FUN_00011e10(undefined4 param_1,undefined1 param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    if (param_3[1] == 0) {
      return -0x15;
    }
    if (param_3[2] == 0) {
      return -0x15;
    }
    if (*param_3 != 0) {
      iVar1 = (*DAT_000247f8)(param_1,param_2);
      if (iVar1 < 0) {
        return iVar1;
      }
      if (iVar1 == 2) {
        iVar1 = (*DAT_0002483c)();
      }
      else {
        iVar1 = (*DAT_000247fc)();
        if (*param_3 != iVar1) {
          return -0x24;
        }
      }
      iVar1 = (*DAT_000247ec)(param_1,param_2,0x78d,param_3,iVar1);
      return iVar1;
    }
  }
  return -0x15;
}



// ==== FUN_00011ef4 @ 00011ef4 size=204

int FUN_00011ef4(undefined4 param_1,uint param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  if (param_4 == 0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)(DAT_000247b8 + 0x193c))(param_1,param_3);
    if ((iVar1 == 0) && (iVar1 = (*(code *)(DAT_000247b8 + 0x17f4))(param_4), iVar1 == 0)) {
      (*DAT_00024858)(param_4,auStack_20,10);
      iVar1 = (*DAT_00024848)(param_1,0x704,(param_2 & 0xf) << 4,10,0,0,auStack_20);
    }
  }
  return iVar1;
}



// ==== FUN_00011fc0 @ 00011fc0 size=188

int FUN_00011fc0(undefined4 param_1,uint param_2,undefined1 param_3,int param_4)

{
  undefined1 auStack_28 [16];
  int local_18;
  
  if (param_4 == 0) {
    local_18 = -10;
  }
  else {
    local_18 = (*(code *)(DAT_000247b8 + 0x193c))(param_1,param_3);
    if (local_18 == 0) {
      local_18 = (*DAT_00024848)(param_1,0x784,(param_2 & 0xf) << 4,10,0,0,auStack_28);
      if (local_18 == 0) {
        (*DAT_00024820)(auStack_28,10,param_4);
      }
    }
  }
  return local_18;
}



// ==== FUN_0001207c @ 0001207c size=228

int FUN_0001207c(undefined4 param_1,char param_2,byte param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_20 [12];
  
  if (param_4 == 0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*DAT_000247e4)(param_4);
    if (iVar1 == 0) {
      iVar1 = (*(code *)(DAT_000247b8 + 0x197c))(param_1,param_3);
      if (iVar1 == 0) {
        (*DAT_00024810)(param_4,auStack_20,8);
        iVar1 = (*DAT_00024848)(param_1,0x705,param_3 | param_2 << 4,8,0,0,auStack_20);
      }
    }
    else {
      iVar1 = -0x15;
    }
  }
  return iVar1;
}



// ==== FUN_00012160 @ 00012160 size=204

int FUN_00012160(undefined4 param_1,char param_2,byte param_3,int param_4)

{
  undefined1 auStack_28 [8];
  int local_20;
  
  if (param_4 == 0) {
    local_20 = -10;
  }
  else {
    local_20 = (*(code *)(DAT_000247b8 + 0x197c))(param_1,param_3);
    if (local_20 == 0) {
      local_20 = (*DAT_00024848)(param_1,0x785,param_3 | param_2 << 4,8,0,0,auStack_28);
      if (local_20 == 0) {
        (*DAT_000247c8)(auStack_28,8,param_4);
      }
    }
  }
  return local_20;
}



// ==== FUN_0001222c @ 0001222c size=196

int FUN_0001222c(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  if (param_3 == 0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)(DAT_000247b8 + 0x193c))(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = (*(code *)(DAT_000247b8 + 0x17f4))(param_3);
      if (iVar1 == 0) {
        (*DAT_00024858)(param_3,auStack_20,10);
        iVar1 = (*DAT_00024848)(param_1,0x706,0,10,0,0,auStack_20);
      }
      else {
        iVar1 = -0x15;
      }
    }
  }
  return iVar1;
}



// ==== FUN_000122f0 @ 000122f0 size=180

int FUN_000122f0(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined1 auStack_28 [16];
  int local_18;
  
  if (param_3 == 0) {
    local_18 = -10;
  }
  else {
    local_18 = (*(code *)(DAT_000247b8 + 0x193c))(param_1,param_2);
    if (local_18 == 0) {
      local_18 = (*DAT_00024848)(param_1,0x786,0,10,0,0,auStack_28);
      if (local_18 == 0) {
        (*DAT_00024820)(auStack_28,10,param_3);
      }
    }
  }
  return local_18;
}



// ==== FUN_000123a4 @ 000123a4 size=208

int FUN_000123a4(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_18 [8];
  
  if (param_3 == 0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*DAT_000247e4)(param_3);
    if (iVar1 == 0) {
      iVar1 = (*(code *)(DAT_000247b8 + 0x197c))(param_1,param_2);
      if (iVar1 == 0) {
        (*DAT_00024810)(param_3,auStack_18,8);
        iVar1 = (*DAT_00024848)(param_1,0x707,param_2,8,0,0,auStack_18);
      }
    }
    else {
      iVar1 = -0x15;
    }
  }
  return iVar1;
}



// ==== FUN_00012474 @ 00012474 size=192

int FUN_00012474(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined1 auStack_28 [8];
  int local_20;
  
  if (param_3 == 0) {
    local_20 = -10;
  }
  else {
    local_20 = (*(code *)(DAT_000247b8 + 0x197c))(param_1,param_2);
    if (local_20 == 0) {
      local_20 = (*DAT_00024848)(param_1,0x787,param_2,8,0,0,auStack_28);
      if (local_20 == 0) {
        (*DAT_000247c8)(auStack_28,8,param_3);
      }
    }
  }
  return local_20;
}



// ==== FUN_00012534 @ 00012534 size=304

undefined4 FUN_00012534(int param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_28 [20];
  
  piVar3 = param_4;
  if (param_4 == (int *)0x0) {
    param_1 = DAT_000247b8 + 0x451c;
    piVar3 = (int *)(DAT_000247b8 + 0x46e0);
    (*DAT_000247d8)(param_1,DAT_000247b8 + 0x4524,499,piVar3);
  }
  iVar1 = (*(code *)(DAT_000247b8 + 0x17f4))(piVar3);
  if (iVar1 == 0) {
    if (((param_2 & 0xffff) < (param_4[2] * param_4[4] + *param_4 & 0xffffU)) ||
       ((param_3 & 0xffff) < (param_4[3] * param_4[5] + param_4[1] & 0xffffU))) {
      uVar2 = 0xffffffcf;
    }
    else {
      (*DAT_00024858)(param_4,auStack_28,10);
      uVar2 = (*DAT_00024848)(param_1,0x70b,0,10,param_2 & 0xffff,param_3 & 0xffff,auStack_28);
    }
  }
  else {
    uVar2 = 0xffffffeb;
  }
  return uVar2;
}



// ==== FUN_00012664 @ 00012664 size=176

int FUN_00012664(void)

{
  int in_a3;
  undefined1 auStack_28 [16];
  int local_18;
  
  if (in_a3 == 0) {
    (*DAT_000247d8)(DAT_000247b8 + 0x451c,DAT_000247b8 + 0x4524,0x20a,DAT_000247b8 + 0x46c8);
  }
  local_18 = (*DAT_00024848)();
  if (local_18 == 0) {
    (*DAT_00024820)(auStack_28,10,in_a3);
  }
  return local_18;
}



// ==== FUN_00012714 @ 00012714 size=292

int FUN_00012714(int param_1,undefined1 param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined1 auStack_20 [8];
  
  if (param_5 == 0) {
    param_1 = DAT_000247b8 + 0x4578;
    (*DAT_000247d8)(param_1,DAT_000247b8 + 0x4524,0x21e,DAT_000247b8 + 0x46b0);
  }
  iVar1 = (*DAT_000247e4)(param_5);
  if (iVar1 == 0) {
    iVar1 = -0x31;
    if (((*(int *)(param_5 + 8) <= (int)(param_3 & 0xffff)) &&
        (*(int *)(param_5 + 0xc) <= (int)(param_4 & 0xffff))) &&
       (iVar1 = (*(code *)(DAT_000247b8 + 0x197c))(param_1,param_2), iVar1 == 0)) {
      (*DAT_00024810)(param_5,auStack_20,8);
      iVar1 = (*DAT_00024848)(param_1,0x70c,param_2,8,param_3 & 0xffff,param_4 & 0xffff,auStack_20);
    }
  }
  else {
    iVar1 = -0x15;
  }
  return iVar1;
}



// ==== FUN_00012838 @ 00012838 size=236

int FUN_00012838(int param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  undefined1 auStack_28 [8];
  int local_20;
  
  if (param_5 == 0) {
    param_1 = DAT_000247b8 + 0x4578;
    (*DAT_000247d8)(param_1,DAT_000247b8 + 0x4524,0x237,DAT_000247b8 + 0x4698);
  }
  local_20 = (*(code *)(DAT_000247b8 + 0x197c))();
  if (local_20 == 0) {
    local_20 = (*DAT_00024848)(param_1,0x78c,param_2,8,param_3,param_4,auStack_28);
    if (local_20 == 0) {
      (*DAT_000247c8)(auStack_28,8,param_5);
    }
  }
  return local_20;
}



// ==== FUN_00012924 @ 00012924 size=160

undefined4 FUN_00012924(undefined4 param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte local_res8 [8];
  
  local_res8[0] = param_3;
  if (100 < param_3) {
    local_res8[0] = 100;
  }
  iVar1 = (*DAT_000247f8)(param_1,param_2);
  if (iVar1 < 0) {
    uVar2 = 0xffffffeb;
  }
  else {
    uVar2 = (*DAT_00024848)(param_1,0x708,param_2,1,0,0,local_res8);
  }
  return uVar2;
}



// ==== FUN_000129c4 @ 000129c4 size=152

undefined4 FUN_000129c4(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_000247f8)(param_1,param_2);
  if (iVar1 < 0) {
    uVar2 = 0xffffffeb;
  }
  else if (param_3 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = (*DAT_00024848)(param_1,0x788,param_2,1,0,0,param_3);
  }
  return uVar2;
}



// ==== FUN_00012a5c @ 00012a5c size=184

undefined4 FUN_00012a5c(undefined4 param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte local_res8 [8];
  
  if (*DAT_0002482c < 3) {
    local_res8[0] = param_3;
    if (100 < param_3) {
      local_res8[0] = 100;
    }
    iVar1 = (*DAT_000247f8)(param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 0xffffffeb;
    }
    else {
      uVar2 = (*DAT_00024848)(param_1,0x709,param_2,1,0,0,local_res8);
    }
  }
  else {
    uVar2 = 0xffffffe3;
  }
  return uVar2;
}



// ==== FUN_00012b14 @ 00012b14 size=176

undefined4 FUN_00012b14(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*DAT_0002482c < 3) {
    iVar1 = (*DAT_000247f8)(param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 0xffffffeb;
    }
    else if (param_3 == 0) {
      uVar2 = 0xfffffff6;
    }
    else {
      uVar2 = (*DAT_00024848)(param_1,0x789,param_2,1,0,0,param_3);
    }
  }
  else {
    uVar2 = 0xffffffe3;
  }
  return uVar2;
}



// ==== FUN_00012bc4 @ 00012bc4 size=180

undefined4 FUN_00012bc4(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18;
  undefined1 local_17;
  
  if (*DAT_0002482c < 3) {
    uVar2 = 0xffffffe3;
  }
  else {
    iVar1 = (*DAT_000247f8)(param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 0xffffffeb;
    }
    else {
      local_18 = (undefined1)param_3;
      local_17 = (undefined1)((uint)param_3 >> 8);
      uVar2 = (*DAT_00024848)(param_1,0x709,param_2,2,0,0,&local_18);
    }
  }
  return uVar2;
}



// ==== FUN_00012c78 @ 00012c78 size=196

int FUN_00012c78(undefined4 param_1,undefined1 param_2,uint *param_3)

{
  int iVar1;
  undefined1 local_18;
  undefined1 local_17;
  
  if (*DAT_0002482c < 3) {
    iVar1 = -0x1d;
  }
  else {
    iVar1 = (*DAT_000247f8)(param_1,param_2);
    if (iVar1 < 0) {
      iVar1 = -0x15;
    }
    else {
      iVar1 = (*DAT_00024848)(param_1,0x789,param_2,2,0,0,&local_18);
      if ((iVar1 == 0) && (param_3 != (uint *)0x0)) {
        *param_3 = (uint)CONCAT11(local_17,local_18);
      }
    }
  }
  return iVar1;
}



// ==== FUN_00012d3c @ 00012d3c size=160

undefined4 FUN_00012d3c(undefined4 param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte local_res8 [8];
  
  local_res8[0] = param_3;
  if (7 < param_3) {
    local_res8[0] = 7;
  }
  iVar1 = (*DAT_000247f8)(param_1,param_2);
  if (iVar1 < 0) {
    uVar2 = 0xffffffeb;
  }
  else {
    uVar2 = (*DAT_00024848)(param_1,0x70a,param_2,1,0,0,local_res8);
  }
  return uVar2;
}



// ==== FUN_00012ddc @ 00012ddc size=152

undefined4 FUN_00012ddc(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_000247f8)(param_1,param_2);
  if (iVar1 < 0) {
    uVar2 = 0xffffffeb;
  }
  else if (param_3 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = (*DAT_00024848)(param_1,0x78a,param_2,1,0,0,param_3);
  }
  return uVar2;
}



// ==== FUN_00012e74 @ 00012e74 size=140

undefined4 FUN_00012e74(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint local_10;
  undefined4 local_c;
  
  local_10 = param_2 & 0xff;
  iVar1 = (*DAT_00024804)(param_1,0xc0087336,&local_10);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(*DAT_000247dc)();
    (*DAT_0002480c)(4,DAT_000247b8 + 0x4580,DAT_000247b8 + 0x4680,0x2c7,*puVar2);
    local_c = 0;
  }
  return local_c;
}



// ==== FUN_00012f00 @ 00012f00 size=48

int FUN_00012f00(uint param_1)

{
  int iVar1;
  
  iVar1 = -0x15;
  if (param_1 < 6) {
    iVar1 = (int)*(char *)(param_1 + DAT_000247b8 + 0x4640);
  }
  return iVar1;
}



// ==== FUN_00012f30 @ 00012f30 size=100

uint FUN_00012f30(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = (*DAT_00024800)(param_3);
  if (-1 < (int)uVar1) {
    uVar1 = param_1 * param_2 * uVar1 + 7 >> 3;
  }
  return uVar1;
}



// ==== FUN_00012f94 @ 00012f94 size=264

undefined4 FUN_00012f94(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    uVar3 = 0xffffffe3;
  }
  else if (param_2 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    puVar2 = &local_30;
    do {
      iVar1 = (*DAT_00024838)(param_2);
      if (iVar1 != 0) {
        uVar3 = *(undefined4 *)(param_2 + 8);
        *(char *)puVar2 = (char)uVar3;
        *(char *)((int)puVar2 + 1) = (char)((uint)uVar3 >> 8);
        *(char *)((int)puVar2 + 2) = (char)((uint)uVar3 >> 0x10);
        *(char *)((int)puVar2 + 3) = (char)((uint)uVar3 >> 0x18);
      }
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 0x10;
    } while (puVar2 != (undefined4 *)&stack0xffffffe8);
    uVar3 = (*DAT_00024848)(param_1,0x70e,0,0x18,0,0,&local_30);
  }
  return uVar3;
}



// ==== FUN_0001309c @ 0001309c size=268

int FUN_0001309c(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  byte local_30 [28];
  
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    iVar1 = -0x1d;
  }
  else {
    iVar1 = (*DAT_00024800)(param_2);
    if (iVar1 < 0) {
      iVar1 = -0x15;
    }
    else if (param_3 == (uint *)0x0) {
      iVar1 = -10;
    }
    else {
      local_30[0] = 0;
      local_30[1] = 0;
      local_30[2] = 0;
      local_30[3] = 0;
      local_30[4] = 0;
      local_30[5] = 0;
      local_30[6] = 0;
      local_30[7] = 0;
      local_30[8] = 0;
      local_30[9] = 0;
      local_30[10] = 0;
      local_30[0xb] = 0;
      local_30[0xc] = 0;
      local_30[0xd] = 0;
      local_30[0xe] = 0;
      local_30[0xf] = 0;
      local_30[0x10] = 0;
      local_30[0x11] = 0;
      local_30[0x12] = 0;
      local_30[0x13] = 0;
      local_30[0x14] = 0;
      local_30[0x15] = 0;
      local_30[0x16] = 0;
      local_30[0x17] = 0;
      iVar1 = (*DAT_00024848)(param_1,0x78e,0,0x18,0,0,local_30);
      iVar2 = param_2 * 4;
      if (iVar1 == 0) {
        *param_3 = (uint)local_30[iVar2 + 1] << 8 | (uint)local_30[iVar2 + 2] << 0x10 |
                   (uint)local_30[param_2 * 4] | (uint)local_30[iVar2 + 3] << 0x18;
      }
    }
  }
  return iVar1;
}



// ==== FUN_000131a8 @ 000131a8 size=112

undefined4 FUN_000131a8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe3;
  }
  else {
    uVar2 = (*DAT_00024848)(param_1,0x70f,0,0,0,0,0);
  }
  return uVar2;
}



// ==== FUN_00013218 @ 00013218 size=112

undefined4 FUN_00013218(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe3;
  }
  else {
    uVar2 = (*DAT_00024848)(param_1,0x710,0,0,0,0,0);
  }
  return uVar2;
}



// ==== FUN_00013288 @ 00013288 size=160

undefined4 FUN_00013288(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  local_10 = param_1;
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe3;
  }
  else {
    if (param_2 == 0) {
      local_18[0] = 0;
    }
    else {
      if (param_2 != 1) {
        return 0xffffffeb;
      }
      local_18[0] = 1;
    }
    uVar2 = (*DAT_00024848)(local_10,0x711,0,1,0,0,local_18);
  }
  return uVar2;
}



// ==== FUN_00013328 @ 00013328 size=188

undefined4 FUN_00013328(undefined4 param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_20 [16];
  undefined4 local_10;
  
  local_10 = param_1;
  iVar2 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar2 == 0) {
    uVar3 = 0xffffffe3;
  }
  else if (param_2 == (undefined1 *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else {
    local_20[0] = *param_2;
    iVar2 = 0;
    while( true ) {
      iVar4 = iVar2 + 2;
      if (iVar4 == 10) break;
      uVar1 = *(undefined2 *)(param_2 + iVar4);
      local_20[iVar2 + 1] = (char)uVar1;
      local_20[iVar4] = (char)((ushort)uVar1 >> 8);
      iVar2 = iVar4;
    }
    uVar3 = (*DAT_00024848)(local_10,0x712,0,9,0,0,local_20);
  }
  return uVar3;
}



// ==== FUN_000133e4 @ 000133e4 size=204

int FUN_000133e4(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  
  local_18 = param_1;
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    iVar1 = -0x1d;
  }
  else if (param_2 == (undefined1 *)0x0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*DAT_00024848)(local_18,0x792,0,9,0,0,local_28);
    if (iVar1 == 0) {
      *param_2 = local_28[0];
      iVar1 = 0;
      while( true ) {
        iVar2 = iVar1 + 2;
        if (iVar2 == 10) break;
        *(ushort *)(param_2 + iVar2) = CONCAT11(local_28[iVar2],local_28[iVar1 + 1]);
        iVar1 = iVar2;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== FUN_000134b0 @ 000134b0 size=144

undefined4 FUN_000134b0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  local_10 = param_1;
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe3;
  }
  else if (param_2 < 0x100) {
    local_18[0] = (undefined1)param_2;
    uVar2 = (*DAT_00024848)(local_10,0x713,0,1,0,0,local_18);
  }
  else {
    uVar2 = 0xffffffeb;
  }
  return uVar2;
}



// ==== FUN_00013540 @ 00013540 size=140

int FUN_00013540(undefined4 param_1,uint *param_2)

{
  int iVar1;
  byte local_18 [8];
  undefined4 local_10;
  
  local_10 = param_1;
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    iVar1 = -0x1d;
  }
  else {
    iVar1 = (*DAT_00024848)(local_10,0x793,0,1,0,0,local_18);
    if ((iVar1 == 0) && (param_2 != (uint *)0x0)) {
      *param_2 = (uint)local_18[0];
    }
  }
  return iVar1;
}



// ==== FUN_000135cc @ 000135cc size=144

undefined4 FUN_000135cc(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  local_10 = param_1;
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe3;
  }
  else if (param_2 < 0x100) {
    local_18[0] = (undefined1)param_2;
    uVar2 = (*DAT_00024848)(local_10,0x714,0,1,0,0,local_18);
  }
  else {
    uVar2 = 0xffffffeb;
  }
  return uVar2;
}



// ==== FUN_0001365c @ 0001365c size=140

int FUN_0001365c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  byte local_18 [8];
  undefined4 local_10;
  
  local_10 = param_1;
  iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
  if (iVar1 == 0) {
    iVar1 = -0x1d;
  }
  else {
    iVar1 = (*DAT_00024848)(local_10,0x794,0,1,0,0,local_18);
    if ((iVar1 == 0) && (param_2 != (uint *)0x0)) {
      *param_2 = (uint)local_18[0];
    }
  }
  return iVar1;
}



// ==== FUN_000136e8 @ 000136e8 size=212

int FUN_000136e8(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_28 [7];
  byte local_21 [9];
  undefined4 local_18;
  
  if (param_2 == (uint *)0x0) {
    iVar1 = -10;
  }
  else {
    local_18 = param_1;
    iVar1 = (*(code *)(DAT_000247b8 + 0x17ac))();
    if (iVar1 == 0) {
      iVar1 = -0x1d;
    }
    else {
      pbVar5 = local_28;
      iVar1 = (*DAT_00024848)(local_18,0x795,0,0xd,0,0,pbVar5);
      if (iVar1 == 0) {
        uVar2 = 6;
        if (local_28[0] < 7) {
          uVar2 = (uint)local_28[0];
        }
        pbVar4 = pbVar5 + uVar2;
        puVar3 = param_2;
        for (; pbVar5 != pbVar4; pbVar5 = pbVar5 + 1) {
          puVar3[1] = (uint)pbVar5[1];
          puVar3[2] = (uint)pbVar5[7];
          puVar3 = puVar3 + 2;
        }
        *param_2 = uVar2;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



// ==== FUN_000137bc @ 000137bc size=64

undefined4 FUN_000137bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_res4 [3];
  
  local_res4[0] = param_2;
  (*DAT_00024804)(param_1,0xc0047339,local_res4);
  return 0;
}



// ==== FUN_000137fc @ 000137fc size=28

void FUN_000137fc(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00013810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000247e0)(param_1,5);
  return;
}



// ==== FUN_00013a68 @ 00013a68 size=1008

/* WARNING: Control flow encountered bad instruction data */

int FUN_00013a68(int param_1,int *param_2,int *param_3,undefined1 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_98 [24];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double local_40;
  
  uVar2 = (*DAT_0002483c)();
  if ((((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) ||
     (param_4 == (undefined1 *)0x0)) {
    iVar3 = -10;
  }
  else {
    iVar3 = (*DAT_00024828)(param_1,uVar2);
    if (iVar3 == 0) {
      local_110 = CONCAT44(param_2[1],SUB84((double)*param_2,0));
      local_108 = CONCAT44(*param_3,SUB84((double)param_2[1],0));
      local_100 = CONCAT44(param_3[1],SUB84((double)*param_3,0));
      dVar4 = (double)param_3[1];
      local_f8 = dVar4;
      iVar3 = (*DAT_00024824)(&local_110,&local_100,auStack_98);
      if (iVar3 == 0) {
        (*DAT_00024854)(auStack_98);
        iVar3 = DAT_000247b8;
        dVar6 = 0.0;
        if (((dVar4 < 0.0) && (dVar5 = *(double *)(DAT_000247b8 + 0x4730), dVar5 < dVar4)) &&
           ((local_40 = dVar4,
            (*DAT_0002480c)(4,DAT_000247b8 + 0x45a8,DAT_000247b8 + 0x4664,0x466,
                            DAT_000247b8 + 0x45c8), local_40 < dVar6 && (dVar5 < local_40)))) {
          (*DAT_000247d8)(iVar3 + 0x45c8,DAT_000247b8 + 0x4524,0x466,DAT_000247b8 + 0x4648);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar3 == 0) {
        (*DAT_0002480c)(0,DAT_000247b8 + 0x45e4,(undefined4)local_68,local_68._4_4_,local_60,
                        local_58);
        iVar3 = DAT_000247b8;
        (*DAT_0002480c)(0,DAT_000247b8 + 0x4604,local_d0,uStack_cc,local_c8,local_c0,local_b8);
        (*DAT_0002480c)(0,DAT_000247b8 + 0x4620,local_80,local_7c,local_78,local_70);
        (*DAT_0002480c)(0,iVar3 + 0x4604,local_f0,uStack_ec,local_e8,local_e0,local_d8);
        pcVar1 = DAT_00024844;
        if (local_68 == 0.0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (local_60 == 0.0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_60 = local_60 / (double)CONCAT44(*(undefined4 *)(param_1 + 8),SUB84(local_68,0));
        if (local_60 == *(double *)(DAT_000247b8 + 0x4740)) {
          *param_4 = 0;
          (*pcVar1)(&local_80,&local_d0,&local_110);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (local_60 == *(double *)(DAT_000247b8 + 0x4760)) {
          *param_4 = 0;
          (*pcVar1)(&local_68,&local_f0,&local_110);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar3 = -0x1d;
      }
    }
  }
  return iVar3;
}



// ==== FUN_00014250 @ 00014250 size=88

void FUN_00014250(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_Elf32_Ehdr_000247ac + 0x478c);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



