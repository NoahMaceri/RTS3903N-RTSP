/* librtsv4l2 — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsv4l2.h"

// ==== FUN_00010be8 @ 00010be8 size=80

void FUN_00010be8(void)

{
  if (((DAT_00022b78 - (int)(PTR_Elf32_Ehdr_00022b7c + 0x2b70) >> 2) -
       (DAT_00022b78 - (int)(PTR_Elf32_Ehdr_00022b7c + 0x2b70) >> 0x1f) >> 1 != 0) &&
     (DAT_00022bdc != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00022bdc)();
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
  
  puVar1 = PTR_Elf32_Ehdr_00022b7c;
  if (PTR_Elf32_Ehdr_00022b7c[0x2c10] == '\0') {
    if (DAT_00022bec != (code *)0x0) {
      (*DAT_00022bec)(*DAT_00022b80);
    }
    puVar2 = PTR_Elf32_Ehdr_00022b7c;
    puVar3 = PTR_Elf32_Ehdr_00022b7c + 0x2b5c;
    iVar6 = DAT_00022b84 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x2c14), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x2c14) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(DAT_00022b88 + 0xba0))();
    puVar1[0x2c10] = 1;
  }
  return;
}



// ==== FUN_00010d10 @ 00010d10 size=80

void FUN_00010d10(void)

{
  if ((*(int *)(PTR_Elf32_Ehdr_00022b7c + 0x2b64) != 0) && (DAT_00022b9c != (code *)0x0)) {
    (*DAT_00022b9c)(PTR_Elf32_Ehdr_00022b7c + 0x2b64);
  }
                    /* WARNING: Could not recover jumptable at 0x00010d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00022b88 + 0xbe8))();
  return;
}



// ==== FUN_00010d88 @ 00010d88 size=68

undefined4 FUN_00010d88(int param_1)

{
  if (-1 < param_1) {
    (*DAT_00022b98)();
    return 0;
  }
  return 0;
}



// ==== FUN_00010e0c @ 00010e0c size=176

undefined4 FUN_00010e0c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (*DAT_00022bf0)(param_1,*param_3,param_3[1],param_3[2]);
  iVar2 = (*DAT_00022bb8)(uVar1);
  if (iVar2 == 0) {
    uVar3 = (*DAT_00022bf0)(param_2,param_3[3],param_3[4],param_3[5]);
    iVar2 = (*DAT_00022bb8)(uVar3);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = uVar3;
    }
  }
  return uVar1;
}



// ==== FUN_00010ebc @ 00010ebc size=176

undefined4 FUN_00010ebc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (*DAT_00022bf0)(param_1,*param_3,param_3[2],param_3[4]);
  iVar2 = (*DAT_00022bb8)(uVar1);
  if (iVar2 == 0) {
    uVar3 = (*DAT_00022bf0)(param_2,param_3[1],param_3[3],param_3[5]);
    iVar2 = (*DAT_00022bb8)(uVar3);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = uVar3;
    }
  }
  return uVar1;
}



// ==== FUN_00010f6c @ 00010f6c size=292

undefined4 FUN_00010f6c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  
  if (param_1 < 0) {
    uVar3 = 0xffffffe6;
  }
  else {
    (*DAT_00022bc0)(&local_e8,0,0xcc);
    local_e8 = 1;
    iVar1 = (*DAT_00022c08)(param_1,0xc0cc5604,&local_e8);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)(*DAT_00022bac)();
      uVar3 = (*DAT_00022bfc)(*puVar2);
      (*DAT_00022bc8)(4,DAT_00022b88 + 0x27c0,DAT_00022b88 + 0x2b3c,0xab,uVar3);
      uVar3 = 0xffffffe5;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_dc;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_e4;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_e0;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== FUN_00011090 @ 00011090 size=268

undefined4 FUN_00011090(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined4 local_d8;
  
  if (param_1 < 0) {
    uVar3 = 0xffffffe6;
  }
  else {
    (*DAT_00022bc0)(local_e8,0,0xcc);
    local_e8[0] = 1;
    iVar1 = (*DAT_00022c08)(param_1,0xc0cc5615,local_e8);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)(*DAT_00022bac)();
      uVar3 = (*DAT_00022bfc)(*puVar2);
      (*DAT_00022bc8)(4,DAT_00022b88 + 0x27e4,DAT_00022b88 + 0x2b10,0xf0,uVar3);
      uVar3 = 0xffffffe5;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_dc;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_d8;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== FUN_0001119c @ 0001119c size=184

undefined4 FUN_0001119c(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 0) {
    uVar3 = 0xffffffe6;
  }
  else if (param_2 < 0) {
    uVar3 = 0xffffffeb;
  }
  else if (param_3 == (int *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else {
    (*DAT_00022bc0)(param_3,0,0x40);
    param_3[1] = 1;
    pcVar1 = DAT_00022c08;
    *param_3 = param_2;
    iVar2 = (*pcVar1)(param_1,0xc0405602,param_3);
    uVar3 = 0xffffffd1;
    if (-1 < iVar2) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== FUN_00011254 @ 00011254 size=192

undefined4 FUN_00011254(int param_1,int param_2,int param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 0) {
    uVar3 = 0xffffffe6;
  }
  else if (param_3 < 0) {
    uVar3 = 0xffffffeb;
  }
  else if (param_4 == (int *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else {
    (*DAT_00022bc0)(param_4,0,0x2c);
    param_4[1] = param_2;
    pcVar1 = DAT_00022c08;
    *param_4 = param_3;
    iVar2 = (*pcVar1)(param_1,0xc02c564a,param_4);
    uVar3 = 0xffffffd1;
    if (-1 < iVar2) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== FUN_00011314 @ 00011314 size=344

undefined4 FUN_00011314(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a0 [44];
  int local_74;
  undefined1 auStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  undefined1 *local_30;
  undefined1 *local_2c;
  
  local_30 = auStack_a0;
  local_2c = auStack_60;
  iVar4 = 0;
LAB_0001137c:
  do {
    uVar1 = (*DAT_00022bbc)(param_1,iVar4,auStack_a0);
    iVar2 = (*DAT_00022bb8)(uVar1);
    if (iVar2 != 0) {
      return 0xffffffe3;
    }
    iVar4 = iVar4 + 1;
  } while (local_74 != param_2);
  iVar2 = 0;
LAB_000113b8:
  do {
    uVar1 = (*DAT_00022bd8)(param_1,param_2,iVar2,auStack_60);
    iVar3 = (*DAT_00022bb8)(uVar1);
    if (iVar3 != 0) goto LAB_0001137c;
    if (local_58 == 1) {
      if (local_54 == param_3) {
        iVar2 = iVar2 + 1;
        if (local_50 == param_4) {
          return 0;
        }
        goto LAB_000113b8;
      }
    }
    else {
      iVar3 = (*DAT_00022bd0)(param_3,param_4,&local_54);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



// ==== FUN_0001146c @ 0001146c size=548

undefined4 FUN_0001146c(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  
  if (param_1 < 0) {
    uVar1 = 0xffffffe6;
  }
  else {
    uVar1 = (*DAT_00022be4)();
    iVar2 = (*DAT_00022bb8)(uVar1);
    if (iVar2 == 0) {
      (*DAT_00022bc0)(&local_f0,0,0xcc);
      local_f0 = 1;
      iVar2 = (*DAT_00022c08)(param_1,0xc0cc5604,&local_f0);
      if (iVar2 < 0) {
        puVar3 = (undefined4 *)(*DAT_00022bac)();
        uVar1 = (*DAT_00022bfc)(*puVar3);
        (*DAT_00022bc8)(4,DAT_00022b88 + 0x27c0,DAT_00022b88 + 0x2b28,200,uVar1);
        uVar1 = 0xffffffe5;
      }
      else {
        local_ec = param_3;
        local_e8 = param_4;
        local_e4 = param_2;
        iVar2 = (*DAT_00022c08)(param_1,0xc0cc5605,&local_f0);
        if (iVar2 < 0) {
          puVar3 = (undefined4 *)(*DAT_00022bac)();
          uVar1 = (*DAT_00022bfc)(*puVar3);
          (*DAT_00022bc8)(4,DAT_00022b88 + 0x2808,DAT_00022b88 + 0x2b28,0xd0,uVar1);
          uVar1 = 0xffffffe4;
        }
        else if (((local_e4 != param_2) || (local_ec != param_3)) ||
                (uVar1 = 0, local_e8 != param_4)) {
          (*DAT_00022bc8)(4,DAT_00022b88 + 0x282c,DAT_00022b88 + 0x2b28,0xdd,param_2 & 0xff,
                          param_2 >> 8 & 0xff,param_2 >> 0x10 & 0xff,param_2 >> 0x18,param_3,param_4
                         );
          uVar1 = 0xffffffe3;
        }
      }
    }
  }
  return uVar1;
}



// ==== FUN_00011690 @ 00011690 size=220

undefined4 FUN_00011690(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 0) {
    uVar3 = 0xffffffe6;
  }
  else {
    uVar3 = 0xffffffeb;
    if (-1 < param_5) {
      if (param_6 == (int *)0x0) {
        uVar3 = 0xfffffff6;
      }
      else {
        (*DAT_00022bc0)(param_6,0,0x34);
        param_6[1] = param_2;
        pcVar1 = DAT_00022c08;
        param_6[2] = param_3;
        param_6[3] = param_4;
        *param_6 = param_5;
        iVar2 = (*pcVar1)(param_1,0xc034564b,param_6);
        uVar3 = 0xffffffd1;
        if (-1 < iVar2) {
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}



// ==== FUN_0001176c @ 0001176c size=320

undefined4
FUN_0001176c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [16];
  int local_58;
  int local_54;
  int local_50;
  undefined1 *local_30;
  int *local_2c;
  
  local_30 = auStack_68;
  if (param_5 * param_6 == 0) {
LAB_00011854:
    uVar1 = 0xffffffe3;
  }
  else {
    local_2c = &local_54;
    iVar3 = 0;
    do {
      while( true ) {
        uVar1 = (*DAT_00022c04)(param_1,param_2,param_3,param_4,iVar3,auStack_68);
        iVar2 = (*DAT_00022bb8)(uVar1);
        if (iVar2 != 0) goto LAB_00011854;
        iVar3 = iVar3 + 1;
        uVar1 = 0;
        if (local_58 != 1) break;
        if (param_5 * local_50 == param_6 * local_54) {
          return 0;
        }
      }
      iVar2 = (*DAT_00022c00)(param_5,param_6,&local_54);
    } while (iVar2 != 0);
  }
  return uVar1;
}



// ==== FUN_000118ac @ 000118ac size=420

undefined4 FUN_000118ac(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_f0 [3];
  int local_e4;
  int local_e0;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_1 < 0) {
    uVar1 = 0xffffffe6;
  }
  else {
    (*DAT_00022ba8)(param_1,&local_1c,&local_20,&local_24);
    uVar1 = (*DAT_00022bf4)(param_1,local_1c,local_20,local_24,param_2,param_3);
    iVar2 = (*DAT_00022bb8)(uVar1);
    if (iVar2 == 0) {
      (*DAT_00022bc0)(local_f0,0,0xcc);
      local_f0[0] = 1;
      local_e4 = param_2;
      local_e0 = param_3;
      iVar2 = (*DAT_00022c08)(param_1,0xc0cc5616,local_f0);
      if (iVar2 < 0) {
        puVar3 = (undefined4 *)(*DAT_00022bac)();
        uVar1 = (*DAT_00022bfc)(*puVar3);
        (*DAT_00022bc8)(4,DAT_00022b88 + 0x286c,DAT_00022b88 + 11000,0x114,uVar1);
        uVar1 = 0xffffffe4;
      }
      else if ((local_e4 != param_2) || (uVar1 = 0, local_e0 != param_3)) {
        (*DAT_00022bc8)(4,DAT_00022b88 + 0x2890,DAT_00022b88 + 11000,0x11a,param_2,param_3);
        uVar1 = 0xffffffe3;
      }
    }
  }
  return uVar1;
}



// ==== FUN_00011a50 @ 00011a50 size=192

undefined4 FUN_00011a50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (0 < param_1) {
    local_1c = 1;
    local_18 = 1;
    local_14 = 0;
    local_10 = 0;
    local_20 = param_2;
    iVar1 = (*DAT_00022c08)(param_1,0xc0145608,&local_20);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)(*DAT_00022bac)();
      uVar3 = (*DAT_00022bfc)(*puVar2);
      (*DAT_00022bc8)(4,DAT_00022b88 + 0x28cc,DAT_00022b88 + 0x2ae0,0x183,uVar3);
      local_20 = 0xffffffd1;
    }
    return local_20;
  }
  return 0xffffffe6;
}



// ==== FUN_00011b10 @ 00011b10 size=184

undefined4 FUN_00011b10(int param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  pcVar1 = DAT_00022c08;
  uVar4 = 0xffffffe6;
  if ((-1 < param_1) && (uVar4 = 0xfffffff6, param_3 != (undefined4 *)0x0)) {
    *param_3 = param_2;
    param_3[1] = 1;
    param_3[0xc] = 1;
    iVar2 = (*pcVar1)(param_1,0xc0445609);
    uVar4 = 0;
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)(*DAT_00022bac)();
      uVar4 = (*DAT_00022bfc)(*puVar3);
      (*DAT_00022bc8)(4,DAT_00022b88 + 0x28f4,DAT_00022b88 + 0x2ac8,0x19d,uVar4);
      uVar4 = 0xffffffd1;
    }
    return uVar4;
  }
  return uVar4;
}



// ==== FUN_00011bc8 @ 00011bc8 size=428

undefined4 FUN_00011bc8(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_60 [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_1 < 1) {
    uVar4 = 0xffffffe6;
  }
  else if (param_2 < 0) {
    uVar4 = 0xffffffeb;
  }
  else if ((param_3 == (int *)0x0) || (param_4 == (undefined4 *)0x0)) {
    uVar4 = 0xfffffff6;
  }
  else {
    (*DAT_00022bc0)(local_60,0,0x44);
    local_60[1] = 1;
    local_30 = 1;
    local_60[0] = param_2;
    iVar2 = (*DAT_00022c08)(param_1,0xc0445609,local_60);
    pcVar1 = DAT_00022be0;
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)(*DAT_00022bac)();
      uVar4 = (*DAT_00022bfc)(*puVar3);
      (*DAT_00022bc8)(4,DAT_00022b88 + 0x28f4,DAT_00022b88 + 0x2ab0,0x1b9,uVar4);
      uVar4 = 0xffffffd1;
    }
    else {
      *param_4 = local_28;
      iVar2 = (*pcVar1)(0,local_28,3,1,param_1,local_2c);
      uVar4 = 0;
      *param_3 = iVar2;
      if (iVar2 == -1) {
        puVar3 = (undefined4 *)(*DAT_00022bac)();
        uVar4 = (*DAT_00022bfc)(*puVar3);
        (*DAT_00022bc8)(4,DAT_00022b88 + 0x291c,DAT_00022b88 + 0x2ab0,0x1c4,uVar4);
        uVar4 = 0xffffffd5;
        *param_4 = 0;
        *param_3 = 0;
      }
    }
  }
  return uVar4;
}



// ==== FUN_00011d74 @ 00011d74 size=76

undefined4 FUN_00011d74(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    (*DAT_00022bf8)();
    return 0;
  }
  return 0;
}



// ==== FUN_00011dc0 @ 00011dc0 size=292

undefined4 FUN_00011dc0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_60 [12];
  undefined4 local_30;
  
  (*DAT_00022bc0)(local_60,0,0x44);
  local_60[1] = 1;
  iVar4 = 0;
  local_30 = 1;
  while( true ) {
    local_60[0] = iVar4;
    iVar1 = (*DAT_00022c08)(param_1,0xc0445609,local_60);
    if (iVar1 < 0) {
      uVar3 = 0xffffffe5;
      if (iVar4 != 0) {
        uVar3 = 0;
      }
      return uVar3;
    }
    iVar1 = (*DAT_00022c08)(param_1,0xc044560f,local_60);
    if (iVar1 < 0) break;
    iVar4 = iVar4 + 1;
  }
  puVar2 = (undefined4 *)(*DAT_00022bac)();
  uVar3 = (*DAT_00022bfc)(*puVar2);
  (*DAT_00022bc8)(4,DAT_00022b88 + 0x2940,DAT_00022b88 + 0x2aa0,0x1e8,iVar4,uVar3);
  return 0xffffffd1;
}



// ==== FUN_00011ee4 @ 00011ee4 size=244

undefined4 FUN_00011ee4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18 [2];
  
  local_18[0] = 1;
  if (param_1 < 0) {
    uVar1 = 0xffffffe6;
  }
  else {
    uVar1 = (*DAT_00022be8)();
    iVar2 = (*DAT_00022bb8)(uVar1);
    if (iVar2 == 0) {
      iVar2 = (*DAT_00022c08)(param_1,0x80045612,local_18);
      uVar1 = 0;
      if (iVar2 < 0) {
        puVar3 = (undefined4 *)(*DAT_00022bac)();
        uVar1 = (*DAT_00022bfc)(*puVar3);
        (*DAT_00022bc8)(4,DAT_00022b88 + 0x2964,DAT_00022b88 + 0x2a8c,0x201,uVar1);
        uVar1 = 0xffffffd1;
      }
    }
  }
  return uVar1;
}



// ==== FUN_00011fd8 @ 00011fd8 size=164

undefined4 FUN_00011fd8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_10 [3];
  
  local_10[0] = 1;
  if (param_1 < 0) {
    uVar3 = 0xffffffe6;
  }
  else {
    iVar1 = (*DAT_00022c08)(param_1,0x80045613,local_10);
    uVar3 = 0;
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)(*DAT_00022bac)();
      uVar3 = (*DAT_00022bfc)(*puVar2);
      (*DAT_00022bc8)(4,DAT_00022b88 + 0x298c,DAT_00022b88 + 0x2a78,0x20f,uVar3);
      uVar3 = 0xffffffd1;
    }
  }
  return uVar3;
}



// ==== FUN_0001207c @ 0001207c size=240

undefined4 FUN_0001207c(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_1 < 0) {
    uVar4 = 0xffffffe6;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0xfffffff6;
  }
  else {
    (*DAT_00022bc0)(param_2,0,0x44);
    param_2[1] = 1;
    pcVar1 = DAT_00022c08;
    param_2[0xc] = 1;
    *param_2 = 0xffffffff;
    iVar2 = (*pcVar1)(param_1,0xc0445611,param_2);
    uVar4 = 0;
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)(*DAT_00022bac)();
      uVar4 = (*DAT_00022bfc)(*puVar3);
      (*DAT_00022bc8)(4,DAT_00022b88 + 0x29b4,DAT_00022b88 + 0x2a64,0x227,uVar4);
      uVar4 = 0xffffffd1;
    }
  }
  return uVar4;
}



// ==== FUN_0001216c @ 0001216c size=188

undefined4 FUN_0001216c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (-1 < param_1) {
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0xfffffff6;
    }
    else {
      iVar1 = (*DAT_00022c08)(param_1,0xc044560f,param_2);
      uVar4 = 0;
      if (iVar1 < 0) {
        uVar3 = *param_2;
        puVar2 = (undefined4 *)(*DAT_00022bac)();
        uVar4 = (*DAT_00022bfc)(*puVar2);
        (*DAT_00022bc8)(4,DAT_00022b88 + 0x29d8,DAT_00022b88 + 0x2a50,0x23b,uVar3,uVar4);
        uVar4 = 0xffffffd1;
      }
    }
    return uVar4;
  }
  return 0xffffffe6;
}



// ==== FUN_00012228 @ 00012228 size=184

undefined4 FUN_00012228(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_60 [76];
  
  uVar1 = (*DAT_00022ba0)(param_1,param_2,auStack_60);
  iVar2 = (*DAT_00022bb8)(uVar1);
  if (iVar2 == 0) {
    uVar1 = (*DAT_00022bb0)(param_1,auStack_60);
  }
  else {
    (*DAT_00022bc8)(4,DAT_00022b88 + 0x2a00,DAT_00022b88 + 0x2a30,0x249,param_2,uVar1);
  }
  return uVar1;
}



// ==== FUN_00012374 @ 00012374 size=72

undefined4 FUN_00012374(undefined4 param_1,uint *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  uint uVar2;
  
  UNRECOVERED_JUMPTABLE = DAT_00022bd4;
  if (param_2 != (uint *)0x0) {
    if (*param_2 == 0) {
      uVar2 = 0x80000000;
    }
    else {
      uVar2 = *param_2 | 0x80000000;
    }
    *param_2 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000123ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffff6;
}



// ==== FUN_000123bc @ 000123bc size=88

undefined4 FUN_000123bc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (*DAT_00022c08)(param_1,0xc008561b,param_2);
    uVar2 = 0xffffffd1;
    if (-1 < iVar1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffe6;
}



// ==== FUN_00012414 @ 00012414 size=88

undefined4 FUN_00012414(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (*DAT_00022c08)(param_1,0xc008561c,param_2);
    uVar2 = 0xffffffd1;
    if (-1 < iVar1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffe6;
}



// ==== FUN_0001246c @ 0001246c size=88

undefined4 FUN_0001246c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (*DAT_00022c08)(param_1,0xc0185647,param_2);
    uVar2 = 0xffffffd1;
    if (-1 < iVar1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== FUN_000124c4 @ 000124c4 size=88

undefined4 FUN_000124c4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (*DAT_00022c08)(param_1,0xc0185648,param_2);
    uVar2 = 0xffffffd1;
    if (-1 < iVar1) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== FUN_0001251c @ 0001251c size=304

undefined4 FUN_0001251c(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_3c;
  
  iVar3 = 0;
  iVar6 = 0;
  iVar2 = 0;
  while( true ) {
    iVar5 = iVar2;
    iVar4 = iVar6;
    iVar7 = iVar3 + 1;
    uVar1 = (*DAT_00022bd8)(param_1,param_2,iVar3,auStack_58);
    iVar2 = (*DAT_00022bb8)(uVar1);
    iVar3 = iVar4;
    iVar6 = iVar5;
    if ((iVar2 != 0) || (iVar3 = local_3c, iVar6 = local_48, local_50 != 1)) break;
    iVar3 = iVar7;
    iVar2 = local_4c;
    if ((uint)(local_48 * local_4c) <= (uint)(iVar4 * iVar5)) {
      iVar6 = iVar4;
      iVar2 = iVar5;
    }
  }
  uVar1 = 0xffffffe5;
  if (iVar3 * iVar6 != 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = iVar6;
    }
    uVar1 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
  }
  return uVar1;
}



// ==== FUN_00012650 @ 00012650 size=88

void FUN_00012650(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_Elf32_Ehdr_00022b7c + 0x2b54);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



