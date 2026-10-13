/* librtsbmp — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsbmp.h"

// ==== FUN_00010838 @ 00010838 size=248

undefined4 FUN_00010838(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2 + -1;
  if (param_1 == (undefined1 *)0x0) {
    param_1 = (undefined1 *)(DAT_00022458 + 0x2060);
    (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x240c,0x50,param_1);
    param_2 = DAT_00022458 + 0x206c;
    (*DAT_00022470)(param_1,param_2,0x50,DAT_00022458 + 0x23f8);
  }
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  iVar3 = -0x1220;
  iVar2 = 0;
  while (iVar3 = iVar3 + (0xff / iVar5) * 0x12a, iVar2 < param_2) {
    iVar2 = iVar2 + 1;
    iVar4 = iVar3 + (0xff / iVar5) * -0x12a >> 8;
    iVar6 = 0;
    if (-1 < iVar4) {
      iVar6 = iVar4;
    }
    if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    uVar1 = (undefined1)iVar6;
    param_1[2] = uVar1;
    param_1[1] = uVar1;
    *param_1 = uVar1;
    param_1 = param_1 + 4;
  }
  return 0;
}



// ==== FUN_00010930 @ 00010930 size=148

undefined4 FUN_00010930(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)(DAT_00022458 + 0x838);
  (*pcVar1)(PTR_Elf32_Ehdr_0002244c + 0x2930,2);
  (*pcVar1)(PTR_Elf32_Ehdr_0002244c + 0x2920,4);
  (*pcVar1)(PTR_Elf32_Ehdr_0002244c + 0x28e0,0x10);
  (*pcVar1)(PTR_Elf32_Ehdr_0002244c + 0x24e0,0x100);
  return 0;
}



// ==== FUN_000109d0 @ 000109d0 size=72

void FUN_000109d0(void)

{
  if ((6 < (uint)((DAT_00022448 + 3) - (int)(PTR_Elf32_Ehdr_0002244c + 0x2440))) &&
     (DAT_00022494 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00022494)();
    return;
  }
  return;
}



// ==== FUN_00010a18 @ 00010a18 size=80

void FUN_00010a18(void)

{
  if (((DAT_00022448 - (int)(PTR_Elf32_Ehdr_0002244c + 0x2440) >> 2) -
       (DAT_00022448 - (int)(PTR_Elf32_Ehdr_0002244c + 0x2440) >> 0x1f) >> 1 != 0) &&
     (DAT_000224a4 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_000224a4)();
    return;
  }
  return;
}



// ==== FUN_00010a68 @ 00010a68 size=216

void FUN_00010a68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_Elf32_Ehdr_0002244c;
  if (PTR_Elf32_Ehdr_0002244c[0x24d0] == '\0') {
    if (DAT_000224a8 != (code *)0x0) {
      (*DAT_000224a8)(*DAT_00022450);
    }
    puVar2 = PTR_Elf32_Ehdr_0002244c;
    puVar3 = PTR_Elf32_Ehdr_0002244c + 0x2430;
    iVar6 = DAT_00022454 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x24d4), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x24d4) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(DAT_00022458 + 0x9d0))();
    puVar1[0x24d0] = 1;
  }
  return;
}



// ==== FUN_00010b40 @ 00010b40 size=80

void FUN_00010b40(void)

{
  if ((*(int *)(PTR_Elf32_Ehdr_0002244c + 0x243c) != 0) && (DAT_0002246c != (code *)0x0)) {
    (*DAT_0002246c)(PTR_Elf32_Ehdr_0002244c + 0x243c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00022458 + 0xa18))();
  return;
}



// ==== FUN_00010c64 @ 00010c64 size=764

undefined4 FUN_00010c64(undefined1 *param_1,int param_2,int param_3,undefined1 *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s3;
  int unaff_s4;
  int iVar5;
  
  if (param_4 == (undefined1 *)0x0) {
    param_4 = (undefined1 *)(DAT_00022458 + 0x20bc);
    (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x23e4,0x7d,param_4);
    uVar4 = 0x7d;
    iVar3 = DAT_00022458 + 0x206c;
    param_2 = unaff_s3;
    param_3 = unaff_s4;
  }
  else {
    if (param_2 * param_3 != 0) goto LAB_00010d40;
    param_4 = (undefined1 *)(DAT_00022458 + 0x20c0);
    (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x23e4,0x7e,param_4);
    uVar4 = 0x7e;
    iVar3 = DAT_00022458 + 0x206c;
  }
  while( true ) {
    param_1 = param_4;
    (*DAT_00022470)(param_4,iVar3,uVar4,DAT_00022458 + 0x23d0);
LAB_00010d40:
    if (param_1 != (undefined1 *)0x0) break;
    param_4 = (undefined1 *)(DAT_00022458 + 0x20d0);
    (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x23e4,0x7f,param_4);
    uVar4 = 0x7f;
    iVar3 = DAT_00022458 + 0x206c;
  }
  if (param_1 == (undefined1 *)0x4) {
    iVar3 = 0x10;
    *(undefined **)(param_4 + 0x36) = PTR_Elf32_Ehdr_0002244c + 0x28e0;
  }
  else if ((int)param_1 < 5) {
    if (param_1 == (undefined1 *)0x1) {
      iVar3 = 2;
      *(undefined **)(param_4 + 0x36) = PTR_Elf32_Ehdr_0002244c + 0x2930;
    }
    else {
      if (param_1 != (undefined1 *)0x2) {
LAB_00010ed4:
        (*DAT_00022498)(4,DAT_00022458 + 0x20dc,DAT_00022458 + 0x23e4,0x98,param_1);
        return 0xffffffe3;
      }
      iVar3 = 4;
      *(undefined **)(param_4 + 0x36) = PTR_Elf32_Ehdr_0002244c + 0x2920;
    }
  }
  else if ((param_1 == (undefined1 *)0x18) || (param_1 == (undefined1 *)0x20)) {
    iVar3 = 0;
    *(undefined4 *)(param_4 + 0x36) = 0;
  }
  else {
    if (param_1 != (undefined1 *)0x8) goto LAB_00010ed4;
    iVar3 = 0x100;
    *(undefined **)(param_4 + 0x36) = PTR_Elf32_Ehdr_0002244c + 0x24e0;
  }
  iVar2 = (*DAT_000224ac)(param_1,param_2);
  *param_4 = 0x42;
  iVar5 = iVar3 * 4 + 0x36;
  param_4[1] = 0x4d;
  *(int *)(param_4 + 2) = iVar5 + iVar2 * param_3;
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  *(int *)(param_4 + 10) = iVar5;
  *(undefined4 *)(param_4 + 0xe) = 0x28;
  *(int *)(param_4 + 0x12) = param_2;
  *(int *)(param_4 + 0x16) = param_3;
  param_4[0x1a] = 1;
  param_4[0x1b] = 0;
  param_4[0x1c] = (char)((uint)param_1 & 0xffff);
  param_4[0x1d] = (char)(((uint)param_1 & 0xffff) >> 8);
  *(undefined4 *)(param_4 + 0x1e) = 0;
  *(undefined4 *)(param_4 + 0x22) = 0;
  *(undefined4 *)(param_4 + 0x26) = 0;
  *(undefined4 *)(param_4 + 0x2a) = 0;
  *(int *)(param_4 + 0x2e) = iVar3;
  pcVar1 = DAT_00022498;
  iVar5 = DAT_00022458 + 0x2108;
  *(undefined4 *)(param_4 + 0x32) = 0;
  (*pcVar1)(1,iVar5,0x36,iVar3 * 4,iVar2 * param_3);
  return 0;
}



// ==== FUN_00010f60 @ 00010f60 size=688

undefined4 FUN_00010f60(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    piVar4 = (int *)(DAT_00022458 + 0x2134);
    (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x23b8,0xf5,piVar4);
    uVar3 = 0xf5;
    iVar2 = DAT_00022458 + 0x206c;
    param_1 = piVar4;
  }
  else {
    if (*param_1 == 0) {
      (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x23b8,0xf6,DAT_00022458 + 0x213c);
    }
    if (*param_1 != 0) goto LAB_0001102c;
    uVar3 = 0xf6;
    piVar4 = (int *)(DAT_00022458 + 0x213c);
    iVar2 = DAT_00022458 + 0x206c;
  }
  while( true ) {
    (*DAT_00022470)(piVar4,iVar2,uVar3,DAT_00022458 + 0x23a0);
LAB_0001102c:
    if (param_1[4] * param_1[3] == 0) {
      (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x23b8,0xf7,DAT_00022458 + 0x2148);
    }
    if (param_1[4] * param_1[3] != 0) break;
    uVar3 = 0xf7;
    piVar4 = (int *)(DAT_00022458 + 0x2148);
    iVar2 = DAT_00022458 + 0x206c;
  }
  iVar2 = (*(code *)(DAT_00022458 + 0xb90))(param_1[2]);
  if (iVar2 < 0) {
    (*DAT_00022498)(4,DAT_00022458 + 0x2168,DAT_00022458 + 0x23b8,0xfb);
    return 0xffffffe3;
  }
  if (param_1[2] - 0x100U < 3) {
LAB_00011104:
    iVar5 = param_1[5];
  }
  else {
    iVar5 = param_1[5];
    if (iVar5 == 0) {
      param_1[5] = 1;
      goto LAB_00011104;
    }
  }
  if (iVar5 == 1) {
    uVar1 = iVar2 * param_1[3] + 7U >> 3;
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 != 0) {
        (*DAT_00022498)(4,DAT_00022458 + 0x2188,DAT_00022458 + 0x23b8,0x115,iVar5);
        return 0xffffffeb;
      }
      uVar1 = param_1[4] * param_1[3] * iVar2 + 7U >> 3;
      goto LAB_000111a8;
    }
    uVar1 = (*DAT_000224ac)(iVar2,param_1[3]);
  }
  uVar1 = uVar1 * param_1[4];
LAB_000111a8:
  uVar3 = 0;
  if (param_1[1] < (int)uVar1) {
    (*DAT_00022498)(4,DAT_00022458 + 0x21ac,DAT_00022458 + 0x23b8,0x11c,param_1[1],param_1[2],
                    param_1[3],param_1[4],param_1[5]);
    uVar3 = 0xffffffeb;
  }
  return uVar3;
}



// ==== FUN_00011210 @ 00011210 size=284

int FUN_00011210(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*DAT_000224a0)();
  iVar2 = (*DAT_00022488)(iVar1);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) - 1U < 3) {
      iVar1 = 0x18;
    }
    else {
      iVar1 = (*(code *)(DAT_00022458 + 0xb90))();
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    iVar1 = (*DAT_00022474)(iVar1,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                            param_2);
    iVar2 = (*DAT_00022488)(iVar1);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 0x207;
    iVar2 = DAT_00022458 + 0x220c;
  }
  else {
    uVar3 = 0x1fd;
    iVar2 = DAT_00022458 + 0x21e4;
  }
  (*DAT_00022498)(4,iVar2,DAT_00022458 + 0x2380,uVar3,iVar1);
  return iVar1;
}



// ==== FUN_00011424 @ 00011424 size=236

undefined4 FUN_00011424(undefined1 *param_1,undefined1 *param_2,int param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e [6];
  
  puVar2 = param_1;
  while (uVar4 = (int)puVar2 - (int)param_1, puVar2 != param_1 + param_3) {
    uVar1 = *puVar2;
    puVar3 = param_4 + 3;
    puVar2 = puVar2 + 1;
    (*DAT_00022468)(uVar1,*param_2,param_2[1],local_2e,&local_2f,&local_30);
    *param_4 = local_30;
    param_4[1] = local_2f;
    param_4[2] = local_2e[0];
    param_4 = puVar3;
    if ((uVar4 & 1) != 0) {
      param_2 = param_2 + 2;
    }
  }
  return 0;
}



// ==== FUN_00011510 @ 00011510 size=1196

undefined4 FUN_00011510(int *param_1,uint param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *unaff_s1;
  uint unaff_s2;
  uint uVar8;
  int unaff_s7;
  int iVar9;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e [6];
  
  if (param_1 == (int *)0x0) {
    piVar7 = (int *)(DAT_00022458 + 0x2134);
    (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x2368,0x1ea,piVar7);
    uVar5 = 0x1ea;
    iVar4 = DAT_00022458 + 0x206c;
    param_1 = piVar7;
    param_3 = unaff_s1;
    param_2 = unaff_s2;
    param_4 = unaff_s7;
  }
  else {
    if (*param_1 == 0) {
      (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x2368,0x1eb,DAT_00022458 + 0x213c);
    }
    if (*param_1 != 0) goto LAB_00011608;
    uVar5 = 0x1eb;
    piVar7 = (int *)(DAT_00022458 + 0x213c);
    iVar4 = DAT_00022458 + 0x206c;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        (*DAT_00022470)(piVar7,iVar4,uVar5,DAT_00022458 + 0x2350);
LAB_00011608:
        if (param_3 != (undefined1 *)0x0) break;
        piVar7 = (int *)(DAT_00022458 + 0x2238);
        (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x2368,0x1ec,piVar7);
        uVar5 = 0x1ec;
        iVar4 = DAT_00022458 + 0x206c;
        param_1 = piVar7;
      }
      if (0 < param_4) break;
      piVar7 = (int *)(DAT_00022458 + 0x2240);
      (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x2368,0x1ed,piVar7);
      uVar5 = 0x1ed;
      iVar4 = DAT_00022458 + 0x206c;
      param_1 = piVar7;
    }
    if ((uint)param_1[4] <= param_2) {
      (*DAT_00022498)(4,DAT_00022458 + 0x2040,DAT_00022458 + 0x2368,0x1ee,DAT_00022458 + 0x224c);
    }
    uVar5 = 0x1ee;
    if (param_2 < (uint)param_1[4]) break;
    piVar7 = (int *)(DAT_00022458 + 0x224c);
    iVar4 = DAT_00022458 + 0x206c;
  }
  if (param_1[5] == 0) {
    if (2 < param_1[2] - 0x100U) {
      return 0xffffffea;
    }
    uVar8 = 0;
    iVar2 = (*DAT_0002249c)();
    iVar4 = 0;
    while( true ) {
      if ((uint)param_1[3] <= uVar8) break;
      iVar6 = uVar8 + param_2 * param_1[3];
      uVar8 = uVar8 + 1;
      uVar1 = (*DAT_000224b8)(*param_1,param_1[1],iVar6 * iVar2,iVar2);
      (*DAT_00022484)(param_3,param_4,iVar4,iVar2,uVar1);
      iVar4 = iVar4 + iVar2;
    }
    return 0;
  }
  iVar4 = (*(code *)(DAT_00022458 + 0xb90))();
  uVar8 = iVar4 * param_1[3] + 7U >> 3;
  if (param_1[5] == 2) {
    uVar8 = (*DAT_000224ac)(iVar4);
  }
  iVar2 = param_1[2];
  iVar4 = *param_1;
  if (iVar2 < 0x104) {
    if (iVar2 < 0x100) {
      if (iVar2 == 2) {
        iVar6 = param_1[3];
        iVar2 = (param_2 + param_1[4]) * iVar6;
      }
      else {
        if (iVar2 == 3) {
          iVar6 = param_1[3];
          iVar4 = iVar4 + iVar6 * 2 * param_2;
          for (iVar2 = 0; iVar2 != iVar6; iVar2 = iVar2 + 1) {
            iVar9 = iVar4 + (iVar2 >> 1) * 4;
            (*DAT_00022468)(*(undefined1 *)(iVar4 + iVar2 * 2),*(undefined1 *)(iVar9 + 1),
                            *(undefined1 *)(iVar9 + 3),local_2e,&local_2f,&local_30);
            *param_3 = local_30;
            param_3[1] = local_2f;
            param_3[2] = local_2e[0];
            param_3 = param_3 + 3;
          }
          return 0;
        }
        if (iVar2 != 1) {
          return 0;
        }
        iVar6 = param_1[3];
        iVar2 = ((int)param_2 / 2 + param_1[4]) * iVar6;
      }
      (*(code *)(DAT_00022458 + 0x1424))(iVar4 + param_2 * iVar6,iVar4 + iVar2,iVar6,param_3);
      return 0;
    }
  }
  else {
    if (iVar2 < 0x200) {
      return 0;
    }
    if (0x201 < iVar2) {
      if (iVar2 == 0x244) {
        iVar2 = param_1[3];
        puVar3 = (undefined1 *)(iVar4 + iVar2 * 4 * param_2);
        for (iVar6 = 0; iVar6 != iVar2; iVar6 = iVar6 + 1) {
          param_3[2] = *puVar3;
          param_3[1] = puVar3[1];
          *param_3 = puVar3[2];
          param_3[3] = puVar3[3];
          puVar3 = puVar3 + 4;
          param_3 = param_3 + 4;
        }
        return 0;
      }
      return 0;
    }
  }
  (*DAT_000224b0)(param_3,iVar4 + uVar8 * param_2);
  return 0;
}



// ==== FUN_000119bc @ 000119bc size=528

uint FUN_000119bc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_60 [2];
  uint local_5e;
  undefined1 auStack_52 [14];
  undefined2 local_44;
  int local_32;
  int local_2a;
  
  uVar1 = (*(code *)(DAT_00022458 + 0x1210))(param_1,auStack_60);
  iVar2 = (*DAT_00022488)(uVar1);
  if (iVar2 == 0) {
    if (param_2 != 0) {
      if (param_3 < local_5e) {
        (*DAT_00022498)(4,DAT_00022458 + 0x2288,DAT_00022458 + 0x2390,0x220);
        local_5e = 0xffffffdc;
      }
      else {
        (*DAT_000224b0)(param_2,auStack_60,0xe);
        iVar6 = param_2 + 0x36;
        (*DAT_000224b0)(param_2 + 0xe,auStack_52,0x28);
        iVar2 = iVar6;
        if (local_2a != 0) {
          iVar2 = iVar6 + local_32 * 4;
          (*DAT_000224b0)(iVar6,local_2a,local_32 * 4);
        }
        iVar3 = (*DAT_000224ac)(local_44,*(undefined4 *)(param_1 + 0xc));
        iVar6 = DAT_00022458;
        for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
          uVar4 = (*(code *)(iVar6 + 0x1510))
                            (param_1,(*(uint *)(param_1 + 0x10) - 1) - uVar1,iVar2,iVar3);
          iVar5 = (*DAT_00022488)(uVar4);
          if (iVar5 != 0) {
            (*DAT_00022498)(4,DAT_00022458 + 0x22a8,DAT_00022458 + 0x2390,0x238,
                            (*(int *)(param_1 + 0x10) + -1) - uVar1,uVar4);
            return uVar4;
          }
          iVar2 = iVar2 + iVar3;
        }
      }
    }
  }
  else {
    (*DAT_00022498)(4,DAT_00022458 + 0x2260,DAT_00022458 + 0x2390,0x218,uVar1);
    local_5e = uVar1;
  }
  return local_5e;
}



// ==== FUN_00011bcc @ 00011bcc size=724

undefined4 FUN_00011bcc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [14];
  undefined1 auStack_5a [14];
  undefined2 local_4c;
  undefined4 local_3a;
  int local_32;
  
  if (param_2 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    uVar3 = (*(code *)(DAT_00022458 + 0x1210))(param_1,auStack_68);
    iVar4 = (*DAT_00022488)(uVar3);
    iVar1 = DAT_00022458;
    if (iVar4 == 0) {
      uVar5 = (*DAT_000224ac)(local_4c,*(undefined4 *)(param_1 + 0xc));
      iVar4 = (*DAT_000224b4)(1,uVar5,iVar1 + 0x2340,0x254);
      if (iVar4 == 0) {
        (*DAT_00022498)(4,DAT_00022458 + 0x22dc,iVar1 + 0x2340,0x256,uVar3);
        uVar3 = 0xfffffff6;
      }
      else {
        iVar6 = (*DAT_00022490)(param_2,DAT_00022458 + 0x2314);
        if (iVar6 == 0) {
          uVar3 = 0xffffffe8;
          puVar7 = (undefined4 *)(*DAT_00022478)();
          uVar5 = (*DAT_000224bc)(*puVar7);
          (*DAT_00022498)(4,DAT_00022458 + 0x2318,iVar1 + 0x2340,0x25c,uVar5);
        }
        else {
          (*DAT_00022480)(auStack_68,0xe,1,iVar6);
          (*DAT_00022480)(auStack_5a,0x28,1,iVar6);
          if (local_32 != 0) {
            (*DAT_00022480)(local_32,4,local_3a,iVar6);
          }
          iVar2 = DAT_00022458;
          for (uVar9 = 0; uVar9 < *(uint *)(param_1 + 0x10); uVar9 = uVar9 + 1) {
            uVar3 = (*(code *)(iVar2 + 0x1510))
                              (param_1,(*(uint *)(param_1 + 0x10) - 1) - uVar9,iVar4,uVar5);
            iVar8 = (*DAT_00022488)(uVar3);
            if (iVar8 != 0) {
              (*DAT_00022498)(4,DAT_00022458 + 0x22a8,iVar1 + 0x2340,0x26c,
                              (*(int *)(param_1 + 0x10) + -1) - uVar9,uVar3);
              break;
            }
            (*DAT_00022480)(iVar4,uVar5,1,iVar6);
          }
        }
        (*DAT_0002247c)(iVar4);
        if (iVar6 != 0) {
          (*DAT_0002248c)(iVar6);
        }
      }
    }
    else {
      (*DAT_00022498)(4,DAT_00022458 + 0x2260,DAT_00022458 + 0x2340,0x24f,uVar3);
    }
  }
  return uVar3;
}



// ==== FUN_00011ea0 @ 00011ea0 size=88

void FUN_00011ea0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_Elf32_Ehdr_0002244c + 0x2428);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



