/* librtsmask — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsmask.h"

// ==== FUN_00010be8 @ 00010be8 size=80

void FUN_00010be8(void)

{
  if (((DAT_00022028 - (int)(PTR_Elf32_Ehdr_0002202c + 0x2020) >> 2) -
       (DAT_00022028 - (int)(PTR_Elf32_Ehdr_0002202c + 0x2020) >> 0x1f) >> 1 != 0) &&
     (DAT_00022068 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00022068)();
    return;
  }
  return;
}



// ==== FUN_00010c38 @ 00010c38 size=216

void FUN_00010c38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_Elf32_Ehdr_0002202c;
  if (PTR_Elf32_Ehdr_0002202c[0x2090] == '\0') {
    if (DAT_0002207c != (code *)0x0) {
      (*DAT_0002207c)(*DAT_00022030);
    }
    puVar2 = PTR_Elf32_Ehdr_0002202c;
    puVar3 = PTR_Elf32_Ehdr_0002202c + 0x2008;
    iVar6 = DAT_00022034 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x2094), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x2094) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(DAT_00022038 + 0xba0))();
    puVar1[0x2090] = 1;
  }
  return;
}



// ==== FUN_00010d10 @ 00010d10 size=80

void FUN_00010d10(void)

{
  if ((*(int *)(PTR_Elf32_Ehdr_0002202c + 0x2010) != 0) && (DAT_0002204c != (code *)0x0)) {
    (*DAT_0002204c)(PTR_Elf32_Ehdr_0002202c + 0x2010);
  }
                    /* WARNING: Could not recover jumptable at 0x00010d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00022038 + 0xbe8))();
  return;
}



// ==== FUN_00010d94 @ 00010d94 size=64

undefined4 FUN_00010d94(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_00022070)(param_1,param_2);
  uVar2 = 0xffffffea;
  if (iVar1 == 2) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_00010dd4 @ 00010dd4 size=64

undefined4 FUN_00010dd4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_00022070)(param_1,param_2);
  uVar2 = 0xffffffea;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_00010e14 @ 00010e14 size=232

int FUN_00010e14(undefined4 param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte local_20 [12];
  
  iVar2 = (*DAT_00022070)(param_1,param_2 & 0xff);
  if (iVar2 < 0) {
    iVar2 = -0x15;
  }
  else {
    iVar2 = (*DAT_00022080)(param_1,0x981,0,1,0,0,local_20);
    if (iVar2 == 0) {
      bVar1 = (byte)(1 << (param_2 & 0x1f));
      if (param_3 == 0) {
        local_20[0] = ~bVar1 & local_20[0];
      }
      else {
        local_20[0] = bVar1 | local_20[0];
      }
      iVar2 = (*DAT_00022080)(param_1,0x901,0,1,0,0,local_20);
    }
  }
  return iVar2;
}



// ==== FUN_00010efc @ 00010efc size=196

int FUN_00010efc(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  byte local_18 [8];
  
  if (param_3 == (undefined4 *)0x0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*DAT_00022070)(param_1,param_2 & 0xff);
    if (iVar1 < 0) {
      iVar1 = -0x15;
    }
    else {
      iVar1 = (*DAT_00022080)(param_1,0x981,0,1,0,0,local_18);
      if (iVar1 == 0) {
        if (((int)(uint)local_18[0] >> (param_2 & 0x1f) & 1U) == 0) {
          *param_3 = 0;
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
          *param_3 = 1;
        }
      }
    }
  }
  return iVar1;
}



// ==== FUN_00010fc0 @ 00010fc0 size=112

undefined4 FUN_00010fc0(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  
  if (param_2 != (undefined1 *)0x0) {
    local_10 = *param_2;
    local_f = param_2[1];
    local_e = param_2[2];
    uVar1 = (*DAT_00022080)(param_1,0x902,0,3,0,0,&local_10);
    return uVar1;
  }
  return 0xfffffff6;
}



// ==== FUN_00011030 @ 00011030 size=124

int FUN_00011030(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*DAT_00022080)(param_1,0x982,0,3,0,0,&local_10);
    if (iVar1 == 0) {
      *param_2 = local_10;
      param_2[1] = local_f;
      param_2[2] = local_e;
    }
  }
  return iVar1;
}



// ==== FUN_000110ac @ 000110ac size=152

void FUN_000110ac(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*DAT_00022074)();
  iVar2 = (*(code *)(DAT_00022038 + 0xd94))(param_1,param_2);
  if (iVar2 == 0) {
    (*DAT_00022058)(param_1,param_2,0x903,param_3,uVar1);
  }
  return;
}



// ==== FUN_00011144 @ 00011144 size=152

void FUN_00011144(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*DAT_00022074)();
  iVar2 = (*(code *)(DAT_00022038 + 0xd94))(param_1,param_2);
  if (iVar2 == 0) {
    (*DAT_00022058)(param_1,param_2,0x983,param_3,uVar1);
  }
  return;
}



// ==== FUN_000111dc @ 000111dc size=228

int FUN_000111dc(undefined4 param_1,uint param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  
  if (param_4 == 0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)(DAT_00022038 + 0xd94))(param_1,param_3);
    if (iVar1 == 0) {
      uVar2 = (*DAT_00022074)();
      iVar1 = (*DAT_00022078)(param_4,uVar2);
      if (iVar1 == 0) {
        (*DAT_00022084)(param_4,auStack_20,10);
        iVar1 = (*DAT_00022080)(param_1,0x904,(param_2 & 0xf) << 4,10,0,0,auStack_20);
      }
      else {
        iVar1 = -0x15;
      }
    }
  }
  return iVar1;
}



// ==== FUN_000112c0 @ 000112c0 size=188

int FUN_000112c0(undefined4 param_1,uint param_2,undefined1 param_3,int param_4)

{
  undefined1 auStack_28 [16];
  int local_18;
  
  if (param_4 == 0) {
    local_18 = -10;
  }
  else {
    local_18 = (*(code *)(DAT_00022038 + 0xd94))(param_1,param_3);
    if (local_18 == 0) {
      local_18 = (*DAT_00022080)(param_1,0x984,(param_2 & 0xf) << 4,10,0,0,auStack_28);
      if (local_18 == 0) {
        (*DAT_0002206c)(auStack_28,10,param_4);
      }
    }
  }
  return local_18;
}



// ==== FUN_0001137c @ 0001137c size=228

int FUN_0001137c(undefined4 param_1,char param_2,byte param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_20 [12];
  
  if (param_4 == 0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*DAT_00022054)(param_4);
    if (iVar1 == 0) {
      iVar1 = (*(code *)(DAT_00022038 + 0xdd4))(param_1,param_3);
      if (iVar1 == 0) {
        (*DAT_00022064)(param_4,auStack_20,8);
        iVar1 = (*DAT_00022080)(param_1,0x905,param_3 | param_2 << 4,8,0,0,auStack_20);
      }
    }
    else {
      iVar1 = -0x15;
    }
  }
  return iVar1;
}



// ==== FUN_00011460 @ 00011460 size=204

int FUN_00011460(undefined4 param_1,char param_2,byte param_3,int param_4)

{
  undefined1 auStack_28 [8];
  int local_20;
  
  if (param_4 == 0) {
    local_20 = -10;
  }
  else {
    local_20 = (*(code *)(DAT_00022038 + 0xdd4))(param_1,param_3);
    if (local_20 == 0) {
      local_20 = (*DAT_00022080)(param_1,0x985,param_3 | param_2 << 4,8,0,0,auStack_28);
      if (local_20 == 0) {
        (*DAT_00022048)(auStack_28,8,param_4);
      }
    }
  }
  return local_20;
}



// ==== FUN_0001152c @ 0001152c size=212

int FUN_0001152c(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [20];
  
  if (param_3 == 0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)(DAT_00022038 + 0xd94))(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = (*DAT_00022074)();
      iVar1 = (*DAT_00022078)(param_3,uVar2);
      if (iVar1 == 0) {
        (*DAT_00022084)(param_3,auStack_20,10);
        iVar1 = (*DAT_00022080)(param_1,0x906,0,10,0,0,auStack_20);
      }
      else {
        iVar1 = -0x15;
      }
    }
  }
  return iVar1;
}



// ==== FUN_00011600 @ 00011600 size=180

int FUN_00011600(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined1 auStack_28 [16];
  int local_18;
  
  if (param_3 == 0) {
    local_18 = -10;
  }
  else {
    local_18 = (*(code *)(DAT_00022038 + 0xd94))(param_1,param_2);
    if (local_18 == 0) {
      local_18 = (*DAT_00022080)(param_1,0x986,0,10,0,0,auStack_28);
      if (local_18 == 0) {
        (*DAT_0002206c)(auStack_28,10,param_3);
      }
    }
  }
  return local_18;
}



// ==== FUN_000116b4 @ 000116b4 size=208

int FUN_000116b4(undefined4 param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_18 [8];
  
  if (param_3 == 0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*DAT_00022054)(param_3);
    if (iVar1 == 0) {
      iVar1 = (*(code *)(DAT_00022038 + 0xdd4))(param_1,param_2);
      if (iVar1 == 0) {
        (*DAT_00022064)(param_3,auStack_18,8);
        iVar1 = (*DAT_00022080)(param_1,0x907,param_2,8,0,0,auStack_18);
      }
    }
    else {
      iVar1 = -0x15;
    }
  }
  return iVar1;
}



// ==== FUN_00011784 @ 00011784 size=192

int FUN_00011784(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined1 auStack_28 [8];
  int local_20;
  
  if (param_3 == 0) {
    local_20 = -10;
  }
  else {
    local_20 = (*(code *)(DAT_00022038 + 0xdd4))(param_1,param_2);
    if (local_20 == 0) {
      local_20 = (*DAT_00022080)(param_1,0x987,param_2,8,0,0,auStack_28);
      if (local_20 == 0) {
        (*DAT_00022048)(auStack_28,8,param_3);
      }
    }
  }
  return local_20;
}



// ==== FUN_00011844 @ 00011844 size=360

undefined4 FUN_00011844(int *param_1,uint param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  
  if (param_4 == (int *)0x0) {
    param_4 = (int *)(DAT_00022038 + 0x1e80);
    (*DAT_00022060)(4,DAT_00022038 + 0x1e60,DAT_00022038 + 0x1fb4,0x17c,param_4);
    param_1 = param_4;
    (*DAT_00022050)(param_4,DAT_00022038 + 0x1e88,0x17c,DAT_00022038 + 0x1f98);
  }
  uVar1 = (*DAT_00022074)();
  iVar2 = (*DAT_00022078)(param_4,uVar1);
  if (iVar2 == 0) {
    if (((param_2 & 0xffff) < (param_4[2] * param_4[4] + *param_4 & 0xffffU)) ||
       ((param_3 & 0xffff) < (param_4[3] * param_4[5] + param_4[1] & 0xffffU))) {
      uVar1 = 0xffffffcf;
    }
    else {
      (*DAT_00022084)(param_4,auStack_28,10);
      uVar1 = (*DAT_00022080)(param_1,0x908,0,10,param_2 & 0xffff,param_3 & 0xffff,auStack_28);
    }
  }
  else {
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}



// ==== FUN_000119ac @ 000119ac size=220

int FUN_000119ac(void)

{
  int in_a3;
  int iVar1;
  undefined1 auStack_28 [16];
  int local_18;
  
  if (in_a3 == 0) {
    iVar1 = DAT_00022038 + 0x1e80;
    (*DAT_00022060)(4,DAT_00022038 + 0x1e60,DAT_00022038 + 0x1f7c,0x193,iVar1);
    (*DAT_00022050)(iVar1,DAT_00022038 + 0x1e88,0x193,DAT_00022038 + 0x1f60);
  }
  local_18 = (*DAT_00022080)();
  if (local_18 == 0) {
    (*DAT_0002206c)(auStack_28,10,in_a3);
  }
  return local_18;
}



// ==== FUN_00011a88 @ 00011a88 size=340

int FUN_00011a88(int param_1,undefined1 param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined1 auStack_20 [8];
  
  if (param_5 == 0) {
    param_5 = DAT_00022038 + 0x1ee0;
    (*DAT_00022060)(4,DAT_00022038 + 0x1e60,DAT_00022038 + 0x1f44,0x1a6,param_5);
    param_1 = param_5;
    (*DAT_00022050)(param_5,DAT_00022038 + 0x1e88,0x1a6,DAT_00022038 + 0x1f28);
  }
  iVar1 = (*DAT_00022054)(param_5);
  if (iVar1 == 0) {
    if (((int)(param_3 & 0xffff) < *(int *)(param_5 + 8)) ||
       ((int)(param_4 & 0xffff) < *(int *)(param_5 + 0xc))) {
      iVar1 = -0x31;
    }
    else {
      iVar1 = (*(code *)(DAT_00022038 + 0xdd4))(param_1,param_2);
      if (iVar1 == 0) {
        (*DAT_00022064)(param_5,auStack_20,8);
        iVar1 = (*DAT_00022080)(param_1,0x909,param_2,8,param_3 & 0xffff,param_4 & 0xffff,auStack_20
                               );
      }
    }
  }
  else {
    iVar1 = -0x15;
  }
  return iVar1;
}



// ==== FUN_00011bdc @ 00011bdc size=280

int FUN_00011bdc(int param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  undefined1 auStack_28 [8];
  int local_20;
  
  if (param_5 == 0) {
    param_5 = DAT_00022038 + 0x1ee0;
    (*DAT_00022060)(4,DAT_00022038 + 0x1e60,DAT_00022038 + 0x1f0c,0x1bf,param_5);
    param_1 = param_5;
    (*DAT_00022050)(param_5,DAT_00022038 + 0x1e88,0x1bf,DAT_00022038 + 0x1ef0);
  }
  local_20 = (*(code *)(DAT_00022038 + 0xdd4))();
  if (local_20 == 0) {
    local_20 = (*DAT_00022080)(param_1,0x989,param_2,8,param_3,param_4,auStack_28);
    if (local_20 == 0) {
      (*DAT_00022048)(auStack_28,8,param_5);
    }
  }
  return local_20;
}



// ==== FUN_00011d00 @ 00011d00 size=88

void FUN_00011d00(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_Elf32_Ehdr_0002202c + 0x2000);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



