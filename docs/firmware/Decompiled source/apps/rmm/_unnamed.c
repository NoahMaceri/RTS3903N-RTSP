/* rmm — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== FUN_00402520 @ 00402520 size=12

void FUN_00402520(void)

{
  FUN_004122a0();
  return;
}



// ==== FUN_00402530 @ 00402530 size=12

void FUN_00402530(void)

{
  fshare_read();
  return;
}



// ==== FUN_00402540 @ 00402540 size=12

void FUN_00402540(void)

{
  FUN_00412040();
  return;
}



// ==== FUN_00402550 @ 00402550 size=12

void FUN_00402550(void)

{
  FUN_0041398c();
  return;
}



// ==== FUN_00402560 @ 00402560 size=12

void FUN_00402560(void)

{
  FUN_00413220();
  return;
}



// ==== FUN_00402570 @ 00402570 size=12

void FUN_00402570(void)

{
  fshare_create();
  return;
}



// ==== FUN_00402580 @ 00402580 size=12

void FUN_00402580(void)

{
  fshare_write();
  return;
}



// ==== FUN_004025e0 @ 004025e0 size=40

void FUN_004025e0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert("rc >= 0","zbar/refcnt.h",0x3e,"_zbar_refcnt");
}



// ==== FUN_00402630 @ 00402630 size=40

void FUN_00402630(void)

{
                    /* WARNING: Subroutine does not return */
  __assert("rc >= 0","zbar/refcnt.h",0x3e,"_zbar_refcnt");
}



// ==== FUN_00402658 @ 00402658 size=40

void FUN_00402658(void)

{
                    /* WARNING: Subroutine does not return */
  __assert("iscn->recycle[i].nsyms","zbar/img_scanner.c",0xed,"_zbar_image_scanner_alloc_sym");
}



// ==== FUN_00402680 @ 00402680 size=196

uint FUN_00402680(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = param_1[1];
  uVar1 = param_1[2];
  uVar2 = uVar1 + param_2;
  if (param_1[3] - iVar5 < 3) {
    if ((param_1[3] - iVar5) * 8 < (int)uVar2) {
      param_1[1] = iVar5 + ((int)uVar2 >> 3);
      param_1[2] = uVar2 & 7;
      return 0xffffffff;
    }
    if (uVar2 == 0) {
      return 0;
    }
  }
  pbVar4 = (byte *)(*param_1 + iVar5);
  uVar3 = (uint)*pbVar4 << (uVar1 + 8 & 0x1f);
  if ((8 < (int)uVar2) && (uVar3 = uVar3 | (uint)pbVar4[1] << (uVar1 & 0x1f), 0x10 < (int)uVar2)) {
    uVar3 = uVar3 | (int)(uint)pbVar4[2] >> (8 - uVar1 & 0x1f);
  }
  param_1[1] = iVar5 + ((int)uVar2 >> 3);
  param_1[2] = uVar2 & 7;
  return (uVar3 & 0xffff) >> (0x10U - param_2 & 0x1f);
}



// ==== FUN_00402744 @ 00402744 size=192

void FUN_00402744(undefined4 param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  param_3 = param_3 - (param_2[0xb] << (param_5 & 0x1f));
  param_4 = param_4 - (param_2[0xc] << (param_5 & 0x1f));
  FUN_00419e60(param_1,param_2 + 9,param_2 + 10,
               param_3 * *param_2 + param_4 * param_2[1] + (param_2[2] << (param_5 & 0x1f)),
               param_3 * param_2[3] + param_4 * param_2[4] + (param_2[5] << (param_5 & 0x1f)),
               param_3 * param_2[6] + param_4 * param_2[7] + (param_2[8] << (param_5 & 0x1f)));
  return;
}



// ==== FUN_00402804 @ 00402804 size=136

void FUN_00402804(int *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = 0;
  iVar7 = param_2 + 0x1f >> 5;
  iVar3 = iVar7 * param_3;
  param_5 = param_3 + param_5;
  for (; param_3 < param_5; param_3 = param_3 + 1) {
    uVar8 = param_4;
    while( true ) {
      iVar4 = (int)uVar8 >> 5;
      bVar2 = (int)(param_4 + param_6) <= (int)uVar8;
      uVar1 = uVar8 & 0x1f;
      uVar8 = uVar8 + 1;
      if (bVar2) break;
      puVar5 = (uint *)(*param_1 + (iVar6 + iVar3 + iVar4) * 4);
      *puVar5 = *puVar5 | 1 << uVar1;
    }
    iVar6 = iVar6 + iVar7;
  }
  return;
}



// ==== FUN_0040288c @ 0040288c size=7040

/* WARNING: Removing unreachable block (ram,0x0040410c) */
/* WARNING: Removing unreachable block (ram,0x0040396c) */
/* WARNING: Removing unreachable block (ram,0x004034d8) */
/* WARNING: Removing unreachable block (ram,0x004028d4) */
/* WARNING: Removing unreachable block (ram,0x00403568) */
/* WARNING: Removing unreachable block (ram,0x00403600) */
/* WARNING: Removing unreachable block (ram,0x00404358) */
/* WARNING: Removing unreachable block (ram,0x00403f0c) */
/* WARNING: Removing unreachable block (ram,0x00403fb0) */
/* WARNING: Removing unreachable block (ram,0x00403fcc) */
/* WARNING: Removing unreachable block (ram,0x0040401c) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0040288c(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,uint param_6,uint param_7,undefined4 param_8,int param_9,
                int param_10)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  int **ppiVar27;
  uint *puVar28;
  undefined4 *puVar29;
  int iVar30;
  undefined4 *puVar31;
  int *piVar32;
  int iVar33;
  undefined1 *puVar34;
  char cVar35;
  int *piVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  int *local_138 [6];
  int local_120;
  uint auStack_11c [6];
  int local_104;
  int local_100 [20];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 *local_98;
  int local_94;
  uint local_90;
  int *local_8c;
  int local_88;
  uint local_84;
  int *local_80;
  int local_7c;
  int *local_78;
  uint local_74;
  uint local_70;
  undefined4 *local_6c;
  int local_68;
  undefined4 *local_64;
  int *local_60;
  undefined4 *local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  uint local_2c;
  
  local_4c = (int)param_6 / 7;
  iVar25 = param_6 * 4;
  local_48 = iVar25 + 0x10;
  local_60 = (int *)(iVar25 + 0x11);
  piVar32 = param_1 + 4;
  local_88 = local_4c + 1;
  local_78 = (int *)(local_4c + 2);
  FUN_00417e44(local_100,0,0,local_48,0,0,local_48,local_48,local_48,param_1[4],param_1[5],
               param_1[6],param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb]);
  local_104 = local_88;
  local_138[0] = (int *)malloc(local_88 * local_88 * 0x34);
  iVar10 = local_88;
  ppiVar27 = local_138;
  for (iVar2 = 1; iVar2 < local_88; iVar2 = iVar2 + 1) {
    ppiVar27[1] = *ppiVar27 + iVar10 * 0xd;
    ppiVar27 = ppiVar27 + 1;
  }
  local_68 = iVar25 + 0x30 >> 5;
  local_70 = local_68 << 2;
  local_120 = calloc(local_60,local_70);
  FUN_00402804(&local_120,local_60,0,0,9,9);
  FUN_00402804(&local_120,local_60,0,iVar25 + 9,9,8);
  FUN_00402804(&local_120,local_60,iVar25 + 9,0,8,9);
  if (6 < (int)param_6) {
    FUN_00402804(&local_120,local_60,0,iVar25 + 6,6,3);
    FUN_00402804(&local_120,local_60,iVar25 + 6,0,3,6);
  }
  FUN_00402804(&local_120,local_60,9,6,iVar25,1);
  FUN_00402804(&local_120,local_60,6,9,1,iVar25);
  if ((int)param_6 < 2) {
    piVar5 = local_100;
    piVar36 = local_138[0];
    do {
      piVar3 = piVar5 + 4;
      iVar25 = piVar5[1];
      iVar2 = piVar5[2];
      iVar10 = piVar5[3];
      *piVar36 = *piVar5;
      piVar36[1] = iVar25;
      piVar36[2] = iVar2;
      piVar36[3] = iVar10;
      piVar36 = piVar36 + 4;
      piVar5 = piVar3;
    } while (piVar3 != local_100 + 0xc);
    *piVar36 = *piVar3;
  }
  else {
    iVar10 = (int)local_78 * (int)local_78 * 8;
    local_6c = (undefined4 *)malloc(iVar10);
    local_64 = (undefined4 *)malloc(iVar10);
    local_100[0xd] = 6;
    local_100[local_88 + 0xd] = iVar25 + 10;
    if (6 < (int)param_6) {
      iVar2 = local_4c * 4;
      bVar9 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ $%*+-./:"[param_6 + 0x29];
      iVar39 = 0;
      for (iVar10 = local_88; piVar5 = (int *)((int)local_100 + iVar39 + iVar2 + 0x34), 1 < iVar10;
          iVar10 = iVar10 + -1) {
        iVar39 = iVar39 + -4;
        *piVar5 = piVar5[1] - (uint)bVar9;
      }
    }
    uVar23 = *param_3;
    local_44 = (int)local_78 * 2 + -1;
    uVar22 = param_3[1];
    uVar20 = *param_4;
    uVar18 = param_4[1];
    uVar16 = *param_5;
    uVar13 = param_5[1];
    *local_6c = 3;
    local_6c[1] = 3;
    *local_64 = uVar23;
    local_98 = (undefined4 *)((1 - (int)local_78) * 8);
    local_64[1] = uVar22;
    local_80 = (int *)0x1;
    local_6c[(int)local_78 * 2 + -2] = iVar25 + 0xd;
    (local_6c + (int)local_78 * 2 + -2)[1] = 3;
    local_40 = local_4c + 1;
    local_64[(int)local_78 * 2 + -2] = uVar20;
    (local_64 + (int)local_78 * 2 + -2)[1] = uVar18;
    local_3c = ~local_4c;
    local_6c[(int)local_78 * local_88 * 2] = 3;
    (local_6c + (int)local_78 * local_88 * 2)[1] = iVar25 + 0xd;
    local_64[(int)local_78 * local_88 * 2] = uVar16;
    (local_64 + (int)local_78 * local_88 * 2)[1] = uVar13;
    local_38 = piVar32;
    for (; piVar32 = local_38, (int)local_80 < local_44; local_80 = (int *)((int)local_80 + 1)) {
      piVar32 = local_80;
      if ((int)local_78 <= (int)local_80) {
        piVar32 = (int *)local_40;
      }
      iVar2 = (int)piVar32 - (uint)(local_80 == (int *)local_88);
      iVar25 = (uint)(local_80 == (int *)local_88) -
               (-(uint)(0 < (int)(local_3c + (int)local_80)) & local_40 - (int)local_80);
      ppiVar27 = local_138 + iVar2;
      iVar10 = iVar2 * (int)local_78 + iVar25;
      local_90 = iVar2;
      puVar26 = local_6c + (iVar10 - local_4c) * 2;
      puVar29 = local_64 + (iVar10 - local_4c) * 2;
      puVar31 = local_64 + iVar10 * 2;
      local_94 = iVar25 * 0x34;
      piVar32 = local_6c + iVar10 * 2;
      local_8c = local_100 + iVar2 + iVar25 + 0xd;
      for (; iVar25 <= (int)local_90; iVar25 = iVar25 + 1) {
        iVar39 = local_100[iVar25 + 0xd];
        iVar10 = local_8c[-iVar25];
        *piVar32 = iVar39;
        piVar32[1] = iVar10;
        FUN_00402804(&local_120,local_60,iVar39 + -2,iVar10 + -2,5,5);
        if (iVar2 < 2) {
          if ((iVar2 == 1) && (1 < iVar25)) {
            piVar5 = (int *)((int)ppiVar27[0xffffffff] + local_94 + -0x68);
          }
          else {
LAB_004030a0:
            piVar5 = local_100;
          }
        }
        else if (iVar25 < 2) {
          if (iVar25 != 1) goto LAB_004030a0;
          piVar5 = (int *)((int)ppiVar27[0xfffffffe] + local_94 + -0x34);
        }
        else {
          local_30 = (int *)(local_94 + -0x34);
          local_34 = local_94 + -0x68;
          FUN_00402744(&local_a0,(int)ppiVar27[0xfffffffe] + (int)local_30,iVar39,iVar10,0);
          FUN_00402744(&local_a8,(int)ppiVar27[0xfffffffe] + local_34,iVar39,iVar10,0);
          FUN_00402744(&local_b0,(int)ppiVar27[0xffffffff] + local_34,iVar39,iVar10,0);
          uVar4 = local_a0;
          if ((int)local_a8 < (int)local_a0) {
            uVar4 = local_a8;
          }
          uVar37 = local_9c;
          if ((int)local_a4 < (int)local_9c) {
            uVar37 = local_a4;
          }
          uVar6 = uVar4 ^ local_a0 ^ local_a8;
          uVar12 = uVar37 ^ local_9c ^ local_a4;
          uVar38 = uVar6;
          if ((int)local_b0 < (int)uVar6) {
            uVar38 = local_b0;
          }
          uVar17 = uVar12;
          if ((int)local_ac < (int)uVar12) {
            uVar17 = local_ac;
          }
          local_a0 = uVar4;
          if ((int)uVar38 < (int)uVar4) {
            local_a0 = uVar38;
          }
          local_9c = uVar37;
          if ((int)uVar17 < (int)uVar37) {
            local_9c = uVar17;
          }
          local_a8 = local_a0 ^ uVar4 ^ uVar38;
          local_a4 = local_9c ^ uVar37 ^ uVar17;
          local_b0 = uVar38 ^ uVar6 ^ local_b0;
          local_ac = uVar17 ^ uVar12 ^ local_ac;
          local_30 = (int *)((int)ppiVar27[0xffffffff] + (int)local_30);
          FUN_00417e44(local_30,puVar26[-6],puVar26[-5],puVar26[-4],puVar26[-3],piVar32[-2],
                       piVar32[-1],iVar39,iVar10,puVar29[-6],puVar29[-5],puVar29[-4],puVar29[-3],
                       puVar31[-2],puVar31[-1],local_a8,local_a4);
          piVar5 = local_30;
        }
        FUN_00419f1c(puVar31,piVar5,iVar39,iVar10,2,param_8,param_9,param_10);
        if ((0 < iVar2) && (0 < iVar25)) {
          FUN_00417e44((int)ppiVar27[0xffffffff] + local_94 + -0x34,puVar26[-6],puVar26[-5],
                       puVar26[-4],puVar26[-3],piVar32[-2],piVar32[-1],iVar39,iVar10,puVar29[-6],
                       puVar29[-5],puVar29[-4],puVar29[-3],puVar31[-2],puVar31[-1],*puVar31,
                       puVar31[1]);
        }
        ppiVar27 = ppiVar27 + 0xffffffff;
        iVar2 = iVar2 + -1;
        local_94 = local_94 + 0x34;
        puVar26 = (undefined4 *)((int)puVar26 + (int)local_98);
        piVar32 = (int *)((int)piVar32 + (int)local_98);
        puVar29 = (undefined4 *)((int)puVar29 + (int)local_98);
        puVar31 = (undefined4 *)((int)puVar31 + (int)local_98);
      }
    }
    free(local_6c);
    free(local_64);
  }
  memcpy(auStack_11c,local_100 + 0xe,(local_104 + -1) * 4);
  local_138[local_104 + 6] = local_60;
  FUN_00402744(piVar32,local_138[0],0xffffffff,0xffffffff,1);
  iVar10 = (int)local_60 * 2 + -1;
  FUN_00402744(param_1 + 6,local_138[0] + local_104 * 0xd + -0xd,iVar10,0xffffffff,1);
  FUN_00402744(param_1 + 8,local_138[local_104 + 0xffffffff],0xffffffff,iVar10,1);
  FUN_00402744(param_1 + 10,local_138[local_104 + 0xffffffff] + local_104 * 0xd + -0xd,iVar10,iVar10
               ,1);
  iVar10 = 4;
  do {
    iVar10 = iVar10 + -1;
    iVar2 = *piVar32;
    if (param_9 << 3 < *piVar32) {
      iVar2 = param_9 << 3;
    }
    iVar25 = piVar32[1];
    if (param_10 << 3 < piVar32[1]) {
      iVar25 = param_10 << 3;
    }
    if (iVar2 <= param_9 * -4) {
      iVar2 = param_9 * -4;
    }
    if (iVar25 <= param_10 * -4) {
      iVar25 = param_10 * -4;
    }
    *piVar32 = iVar2;
    piVar32[1] = iVar25;
    piVar32 = piVar32 + 2;
  } while (iVar10 != 0);
  iVar2 = local_68 * (int)local_60 * 4;
  iVar10 = malloc(iVar2);
  uVar4 = local_70;
  local_94 = iVar10;
  switch(param_7 & 7) {
  case 0:
    uVar37 = 0x55;
    for (iVar2 = 0; iVar2 < (int)local_60; iVar2 = iVar2 + 1) {
      memset(iVar10,uVar37,uVar4);
      uVar37 = uVar37 ^ 0xff;
      iVar10 = iVar10 + uVar4;
    }
    break;
  case 1:
    memset(iVar10,0x55,iVar2);
    local_50 = 0;
    goto LAB_00403674;
  case 2:
    uVar37 = 0xff;
    for (iVar2 = 0; iVar2 < (int)local_60; iVar2 = iVar2 + 1) {
      memset(iVar10,uVar37 & 0xff,uVar4);
      uVar37 = uVar37 >> 0x10 | uVar37 << 8;
      iVar10 = iVar10 + uVar4;
    }
    break;
  case 3:
    uVar4 = 0x49249249;
    for (iVar2 = 0; iVar2 < (int)local_60; iVar2 = iVar2 + 1) {
      uVar37 = uVar4;
      for (iVar25 = 0; iVar25 < local_68; iVar25 = iVar25 + 1) {
        *(uint *)(iVar10 + iVar25 * 4) = uVar37;
        uVar37 = uVar37 << 1 | uVar37 >> 2;
      }
      iVar10 = iVar10 + local_70;
      uVar4 = uVar4 << 2 | uVar4 >> 1;
    }
    break;
  case 4:
    uVar37 = 7;
    for (iVar2 = 0; iVar2 < (int)local_60; iVar2 = iVar2 + 1) {
      memset(iVar10,(-(uVar37 & 1) ^ 0xcc) & 0xff,uVar4);
      uVar37 = uVar37 << 5 | uVar37 >> 1;
      iVar10 = iVar10 + uVar4;
    }
    break;
  case 5:
    for (iVar2 = 0; iVar25 = 0, iVar2 < (int)local_60; iVar2 = iVar2 + 1) {
      uVar37 = 0;
      uVar4 = 0;
      do {
        iVar39 = iVar25 % 6;
        iVar25 = iVar25 + iVar2;
        uVar38 = uVar4 & 0x1f;
        uVar4 = uVar4 + 1;
        uVar37 = uVar37 | (uint)(iVar39 == 0) << uVar38;
      } while (uVar4 != 6);
      iVar25 = 3;
      uVar4 = 6;
      do {
        iVar25 = iVar25 + -1;
        uVar37 = uVar37 | uVar37 << (uVar4 & 0x1f);
        uVar4 = uVar4 << 1;
      } while (iVar25 != 0);
      for (iVar25 = 0; iVar25 < local_68; iVar25 = iVar25 + 1) {
        *(uint *)(iVar10 + iVar25 * 4) = uVar37;
        uVar37 = uVar37 << 4 | uVar37 >> 2;
      }
      iVar10 = iVar10 + local_70;
    }
    break;
  case 6:
    for (iVar2 = 0; iVar25 = 0, iVar2 < (int)local_60; iVar2 = iVar2 + 1) {
      uVar37 = 0;
      uVar4 = 0;
      do {
        iVar39 = iVar25 + iVar25 % 3;
        iVar25 = iVar25 + iVar2;
        uVar38 = uVar4 & 0x1f;
        uVar4 = uVar4 + 1;
        uVar37 = uVar37 | (iVar39 + 1U & 1) << uVar38;
      } while (uVar4 != 6);
      iVar25 = 3;
      uVar4 = 6;
      do {
        iVar25 = iVar25 + -1;
        uVar37 = uVar37 | uVar37 << (uVar4 & 0x1f);
        uVar4 = uVar4 << 1;
      } while (iVar25 != 0);
      for (iVar25 = 0; iVar25 < local_68; iVar25 = iVar25 + 1) {
        *(uint *)(iVar10 + iVar25 * 4) = uVar37;
        uVar37 = uVar37 << 4 | uVar37 >> 2;
      }
      iVar10 = iVar10 + local_70;
    }
    break;
  default:
    for (iVar2 = 0; iVar25 = 0, iVar2 < (int)local_60; iVar2 = iVar2 + 1) {
      uVar37 = 0;
      uVar4 = 0;
      do {
        iVar39 = iVar25 % 3;
        iVar25 = iVar25 + iVar2;
        iVar39 = iVar39 + uVar4;
        uVar38 = uVar4 & 0x1f;
        uVar4 = uVar4 + 1;
        uVar37 = uVar37 | (iVar39 + iVar2 + 1U & 1) << uVar38;
      } while (uVar4 != 6);
      iVar25 = 3;
      uVar4 = 6;
      do {
        iVar25 = iVar25 + -1;
        uVar37 = uVar37 | uVar37 << (uVar4 & 0x1f);
        uVar4 = uVar4 << 1;
      } while (iVar25 != 0);
      for (iVar25 = 0; iVar25 < local_68; iVar25 = iVar25 + 1) {
        *(uint *)(iVar10 + iVar25 * 4) = uVar37;
        uVar37 = uVar37 << 4 | uVar37 >> 2;
      }
      iVar10 = iVar10 + local_70;
    }
  }
  local_50 = 0;
LAB_00403674:
  local_5c = (undefined4 *)0x0;
  for (local_50 = 0; local_50 < local_104; local_50 = local_50 + 1) {
    local_70 = 0;
    local_54 = local_50 * 0x34;
    local_6c = (undefined4 *)auStack_11c[local_50];
    local_58 = (int)local_5c * local_68;
    for (local_64 = (undefined4 *)0x0; (int)local_64 < local_104;
        local_64 = (undefined4 *)((int)local_64 + 1)) {
      uVar4 = auStack_11c[(int)local_64];
      piVar32 = (int *)((int)local_138[(int)local_64] + local_54);
      iVar10 = (int)local_5c - piVar32[0xb];
      iVar2 = local_70 - piVar32[0xc];
      local_80 = piVar32 + 9;
      local_78 = piVar32 + 10;
      local_90 = iVar10 * *piVar32 + iVar2 * piVar32[1] + piVar32[2];
      local_8c = (int *)(iVar10 * piVar32[3] + iVar2 * piVar32[4] + piVar32[5]);
      local_88 = iVar10 * piVar32[6] + iVar2 * piVar32[7] + piVar32[8];
      iVar10 = local_58;
      for (local_98 = local_5c; uVar37 = local_70, piVar5 = local_8c, iVar2 = local_88,
          uVar38 = local_90, (int)local_98 < (int)local_6c;
          local_98 = (undefined4 *)((int)local_98 + 1)) {
        for (; (int)uVar37 < (int)uVar4; uVar37 = uVar37 + 1) {
          iVar25 = (iVar10 + ((int)uVar37 >> 5)) * 4;
          if ((*(uint *)(local_120 + iVar25) >> (uVar37 & 0x1f) & 1) == 0) {
            puVar28 = (uint *)(local_94 + iVar25);
            FUN_00419e60(local_100,local_80,local_78,uVar38,piVar5,iVar2);
            iVar25 = FUN_0041785c(param_8,param_9,param_10,local_100[0],local_100[1]);
            *puVar28 = *puVar28 ^ iVar25 << (uVar37 & 0x1f);
          }
          piVar5 = (int *)((int)piVar5 + piVar32[4]);
          iVar2 = iVar2 + piVar32[7];
          uVar38 = uVar38 + piVar32[1];
        }
        iVar10 = iVar10 + local_68;
        local_90 = local_90 + *piVar32;
        local_8c = (int *)((int)local_8c + piVar32[3]);
        local_88 = local_88 + piVar32[6];
      }
      local_70 = uVar4;
    }
    local_5c = local_6c;
  }
  local_74 = (int)param_7 >> 3 ^ 1;
  local_80 = (int *)(uint)(byte)(&DAT_00425a08)[local_74 + (byte)(&DAT_004259df)[param_6]];
  uVar4 = (uint)(byte)(&DAT_00425940)[(param_6 - 1) * 4 + local_74];
  if (param_6 == 1) {
    uVar37 = 0x1a;
  }
  else {
    iVar10 = 0x24;
    if (6 < param_6) {
      iVar10 = 0;
    }
    iVar2 = (param_6 / 7 + 2) * 5;
    uVar37 = (((param_6 + 8) * param_6 * 0x10 + 0x53) - (iVar2 + -2) * iVar2) + iVar10 >> 3;
  }
  local_84 = uVar37 / uVar4;
  if (uVar4 == 0) {
    trap(0x1c00);
  }
  local_88 = uVar4 - uVar37 % uVar4;
  piVar5 = (int *)malloc(uVar4 << 2);
  local_7c = malloc(uVar37);
  *piVar5 = local_7c;
  piVar32 = piVar5;
  for (iVar10 = 1; iVar10 < (int)uVar4; iVar10 = iVar10 + 1) {
    piVar32[1] = *piVar32 + (local_88 < iVar10) + local_84;
    piVar32 = piVar32 + 1;
  }
  uVar37 = 0;
  local_78 = (int *)(local_68 * 0x3fffffff);
  iVar10 = local_88;
  if ((int)uVar4 <= local_88) {
    iVar10 = 0;
  }
  local_70 = local_48 & 0x1f;
  iVar25 = 0;
  local_8c = (int *)local_120;
  uVar38 = 0;
  iVar2 = 0;
  local_90 = local_48;
  while (0 < (int)local_90) {
    iVar24 = 0;
    uVar6 = local_70 + 1;
    iVar30 = local_90 * local_68 * 4;
    iVar33 = (local_90 * local_68 + local_68) * 4;
    for (iVar39 = local_68; 0 < iVar39; iVar39 = iVar39 + -1) {
      uVar21 = *(uint *)(local_94 + iVar33 + iVar24 + -4);
      uVar17 = *(uint *)(local_120 + iVar33 + iVar24 + -4);
      uVar19 = *(uint *)(local_94 + iVar30 + iVar24 + -4);
      uVar12 = *(uint *)(local_120 + iVar30 + iVar24 + -4);
      while( true ) {
        uVar7 = uVar6 - 1;
        if ((int)uVar6 < 1) break;
        if ((uVar17 >> (uVar7 & 0x1f) & 1) == 0) {
          uVar38 = uVar38 + 1;
          uVar37 = uVar37 << 1 | uVar21 >> (uVar7 & 0x1f) & 1;
        }
        if ((uVar12 >> (uVar7 & 0x1f) & 1) == 0) {
          uVar38 = uVar38 + 1;
          uVar37 = uVar37 << 1 | uVar19 >> (uVar7 & 0x1f) & 1;
        }
        uVar6 = uVar7;
        if (7 < (int)uVar38) {
          uVar38 = uVar38 - 8;
          iVar14 = iVar2 + 1;
          puVar11 = (undefined1 *)piVar5[iVar2];
          piVar5[iVar2] = (int)(puVar11 + 1);
          *puVar11 = (char)(uVar37 >> (uVar38 & 0x1f));
          iVar2 = iVar14;
          if ((int)uVar4 <= iVar14) {
            iVar25 = iVar25 + 1;
            iVar2 = 0;
            if (iVar25 == local_84 - (int)local_80) {
              iVar2 = iVar10;
            }
          }
        }
      }
      iVar24 = iVar24 + -4;
      uVar6 = 0x20;
    }
    iVar39 = 0;
    local_98 = (undefined4 *)(local_90 - 2);
    if ((undefined4 *)(local_90 - 2) == (undefined4 *)0x6) {
      local_98 = (undefined4 *)(local_90 - 3);
    }
    iVar24 = 0;
    iVar30 = (int)local_98 * local_68 * 4;
    iVar33 = ((int)local_98 * local_68 + (int)local_78) * 4;
    for (; iVar39 < local_68; iVar39 = iVar39 + 1) {
      uVar19 = *(uint *)(local_94 + iVar30 + iVar24);
      uVar12 = *(uint *)(local_120 + iVar30 + iVar24);
      uVar17 = *(uint *)(local_94 + iVar33 + iVar24);
      uVar6 = *(uint *)(local_120 + iVar33 + iVar24);
      for (iVar14 = (int)(local_60 + iVar39 * 0xfffffff8) +
                    (-((int)(local_60 + iVar39 * 0xfffffff8) < 0x21 ^ 1) &
                    (iVar39 * 0x20 - (int)local_60) + 0x20U); 0 < iVar14; iVar14 = iVar14 + -1) {
        if ((uVar12 & 1) == 0) {
          uVar38 = uVar38 + 1;
          uVar37 = uVar19 & 1 | uVar37 << 1;
        }
        uVar19 = uVar19 >> 1;
        uVar12 = uVar12 >> 1;
        if ((uVar6 & 1) == 0) {
          uVar38 = uVar38 + 1;
          uVar37 = uVar37 << 1 | uVar17 & 1;
        }
        uVar17 = uVar17 >> 1;
        uVar6 = uVar6 >> 1;
        if (7 < (int)uVar38) {
          uVar38 = uVar38 - 8;
          iVar15 = iVar2 + 1;
          puVar11 = (undefined1 *)piVar5[iVar2];
          piVar5[iVar2] = (int)(puVar11 + 1);
          *puVar11 = (char)(uVar37 >> (uVar38 & 0x1f));
          iVar2 = iVar15;
          if ((int)uVar4 <= iVar15) {
            iVar25 = iVar25 + 1;
            iVar2 = 0;
            if (iVar25 == local_84 - (int)local_80) {
              iVar2 = iVar10;
            }
          }
        }
      }
      iVar24 = iVar24 + 4;
    }
    local_90 = (int)local_98 - 2;
  }
  iVar39 = 0;
  free(local_120);
  free(local_138[0]);
  free(piVar5);
  iVar2 = 0;
  free(local_94);
  iVar10 = local_7c;
  piVar32 = local_80;
  for (iVar25 = 0; iVar25 < (int)uVar4; iVar25 = iVar25 + 1) {
    iVar14 = iVar10 + iVar2;
    iVar33 = (iVar25 < local_88 ^ 1) + local_84;
    iVar24 = FUN_0041fc94(param_2,0,iVar14,iVar33,piVar32,0,0);
    iVar30 = iVar33 - (int)piVar32;
    if (iVar24 < 0) {
      iVar10 = -1;
      goto LAB_004043d0;
    }
    iVar24 = iVar10 + iVar39;
    iVar39 = iVar39 + iVar30;
    iVar2 = iVar2 + iVar33;
    memmove(iVar24,iVar14,iVar30);
  }
  uVar4 = 0;
  *param_1 = 0;
  iVar10 = (((int)param_6 < 10 ^ 1) + ((int)param_6 < 0x1b ^ 1)) * 4;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  local_100[0] = local_7c;
  local_100[2] = 0;
  local_100[1] = 0;
  local_100[3] = iVar39;
LAB_00403e10:
  if (((local_100[3] - local_100[1]) * 8 - local_100[2] < 4) ||
     (iVar2 = FUN_00402680(local_100,4), iVar2 == 0)) {
    iVar10 = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    iVar2 = realloc(*param_1,param_1[1] * 0xc);
    *param_1 = iVar2;
LAB_004043a8:
    if (iVar10 != 0) {
      FUN_0041a8b0(param_1,param_1 + 1);
    }
    *(char *)(param_1 + 2) = (char)param_6;
    *(char *)((int)param_1 + 9) = (char)local_74;
LAB_004043d0:
    free(local_7c);
    return iVar10;
  }
  if ((int)uVar4 <= param_1[1]) {
    uVar4 = uVar4 << 1 | 1;
    iVar25 = realloc(*param_1,uVar4 * 0xc);
    *param_1 = iVar25;
  }
  iVar25 = param_1[1];
  param_1[1] = iVar25 + 1;
  puVar26 = (undefined4 *)(*param_1 + iVar25 * 0xc);
  *puVar26 = 0xffffffff;
  switch(iVar2) {
  case 1:
    iVar2 = FUN_00402680(local_100,(&DAT_004258d0)[iVar10]);
    if (-1 < iVar2) {
      iVar25 = iVar2 / 3;
      uVar37 = iVar2 % 3;
      if ((int)(iVar25 * 10 + ((int)uVar37 >> 1) * 7 + (uVar37 & 1) * 4) <=
          (local_100[3] - local_100[1]) * 8 - local_100[2]) {
        *puVar26 = 1;
        pcVar8 = (char *)malloc(iVar2);
        puVar26[2] = iVar2;
        puVar26[1] = pcVar8;
        while (iVar25 != 0) {
          local_34 = iVar25;
          uVar38 = FUN_00402680(local_100,10);
          iVar25 = local_34 + -1;
          if (999 < uVar38) goto switchD_00403ee4_caseD_6;
          *pcVar8 = (char)(uVar38 / 100) + '0';
          pcVar8[1] = (char)((uVar38 % 100) / 10) + '0';
          pcVar8[2] = (char)((uVar38 % 100) % 10) + '0';
          pcVar8 = pcVar8 + 3;
        }
        if (uVar37 == 2) {
          uVar37 = FUN_00402680(local_100,7);
          if (uVar37 < 100) {
            *pcVar8 = (char)(uVar37 / 10) + '0';
            pcVar8[1] = (char)(uVar37 % 10) + '0';
            goto LAB_00403e10;
          }
        }
        else {
          if (uVar37 == 0) goto LAB_00403e10;
          uVar37 = FUN_00402680(local_100,4);
          if (uVar37 < 10) {
            *pcVar8 = (char)uVar37 + '0';
            goto LAB_00403e10;
          }
        }
      }
    }
    break;
  case 2:
    uVar37 = FUN_00402680(local_100,(&DAT_004258d1)[iVar10]);
    if (-1 < (int)uVar37) {
      iVar2 = (int)uVar37 >> 1;
      if ((int)(iVar2 * 0xb + (uVar37 & 1) * 6) <= (local_100[3] - local_100[1]) * 8 - local_100[2])
      {
        *puVar26 = 2;
        pcVar8 = (char *)malloc(uVar37);
        puVar26[2] = uVar37;
        puVar26[1] = pcVar8;
        while (iVar2 != 0) {
          local_34 = iVar2;
          uVar38 = FUN_00402680(local_100,0xb);
          iVar2 = local_34 + -1;
          if (0x7e8 < uVar38) goto switchD_00403ee4_caseD_6;
          cVar35 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ $%*+-./:"[uVar38 % 0x2d];
          *pcVar8 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ $%*+-./:"[uVar38 / 0x2d];
          pcVar8[1] = cVar35;
          pcVar8 = pcVar8 + 2;
        }
        if ((uVar37 & 1) == 0) goto LAB_00403e10;
        uVar37 = FUN_00402680(local_100,6);
        if (uVar37 < 0x2d) {
          *pcVar8 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ $%*+-./:"[uVar37];
          goto LAB_00403e10;
        }
      }
    }
    break;
  case 3:
    *puVar26 = 3;
    iVar2 = FUN_00402680(local_100,0x10);
    if (-1 < iVar2) {
      bVar9 = (byte)(iVar2 >> 0xc) & 0xf;
      cVar35 = ((byte)((uint)iVar2 >> 8) & 0xf) + 1;
      *(byte *)(puVar26 + 1) = bVar9;
      *(byte *)((int)param_1 + 10) = bVar9;
      *(char *)((int)puVar26 + 5) = cVar35;
      *(char *)((int)param_1 + 0xb) = cVar35;
      *(char *)((int)puVar26 + 6) = (char)iVar2;
      *(char *)(param_1 + 3) = (char)iVar2;
      goto LAB_00403e10;
    }
    break;
  case 4:
    iVar2 = FUN_00402680(local_100,(&DAT_004258d2)[iVar10]);
    if ((-1 < iVar2) && (iVar2 << 3 <= (local_100[3] - local_100[1]) * 8 - local_100[2])) {
      *puVar26 = 4;
      puVar11 = (undefined1 *)malloc(iVar2);
      puVar26[2] = iVar2;
      puVar26[1] = puVar11;
      puVar34 = puVar11 + iVar2;
      for (; puVar11 != puVar34; puVar11 = puVar11 + 1) {
        uVar1 = FUN_00402680(local_100,8);
        *puVar11 = uVar1;
      }
      goto LAB_00403e10;
    }
    break;
  case 5:
    *puVar26 = 5;
    goto LAB_00403e10;
  case 7:
    uVar37 = FUN_00402680(local_100,8);
    if (-1 < (int)uVar37) {
      if ((uVar37 & 0x80) == 0) {
LAB_004042ac:
        *puVar26 = 7;
        puVar26[1] = uVar37;
        goto LAB_00403e10;
      }
      if ((uVar37 & 0x40) == 0) {
        uVar38 = FUN_00402680(local_100,8);
        uVar37 = uVar38 | uVar37 & 0x3f00;
        if (-1 < (int)uVar38) goto LAB_004042ac;
      }
      else if ((uVar37 & 0x20) == 0) {
        uVar38 = FUN_00402680(local_100,0x10);
        if ((-1 < (int)uVar38) && (uVar37 = uVar38 | uVar37 & 0x1f0000, uVar37 < 1000000))
        goto LAB_004042ac;
      }
    }
    break;
  case 8:
    iVar2 = FUN_00402680(local_100,(&DAT_004258d3)[iVar10]);
    if ((-1 < iVar2) && (iVar2 * 0xd <= (local_100[3] - local_100[1]) * 8 - local_100[2])) {
      *puVar26 = 8;
      puVar11 = (undefined1 *)malloc(iVar2 << 1);
      puVar26[2] = iVar2 << 1;
      puVar26[1] = puVar11;
      uVar37 = 0xa000;
      piVar32 = (int *)0x8140;
      iVar25 = -1;
      while( true ) {
        iVar2 = iVar2 + -1;
        if (iVar2 == iVar25) break;
        local_34 = iVar25;
        local_30 = piVar32;
        local_2c = uVar37;
        uVar37 = FUN_00402680(local_100,0xd);
        uVar38 = uVar37 / 0xc0 << 8 | uVar37 % 0xc0;
        uVar37 = uVar38 + (int)local_30;
        if (local_2c <= uVar37) {
          uVar37 = uVar38 + 0xc140;
        }
        puVar11[1] = (char)uVar37;
        *puVar11 = (char)(uVar37 >> 8);
        uVar37 = local_2c;
        piVar32 = local_30;
        iVar25 = local_34;
        puVar11 = puVar11 + 2;
      }
      goto LAB_00403e10;
    }
    break;
  case 9:
    goto switchD_00403ee4_caseD_9;
  }
switchD_00403ee4_caseD_6:
  iVar10 = -1;
  goto LAB_004043a8;
switchD_00403ee4_caseD_9:
  *puVar26 = 9;
  goto LAB_00403e10;
}



// ==== FUN_00404c80 @ 00404c80 size=64

/* WARNING: Removing unreachable block (ram,0x00404ca0) */
/* WARNING: Removing unreachable block (ram,0x00404cb0) */

void FUN_00404c80(void)

{
  return;
}



// ==== FUN_00404cc0 @ 00404cc0 size=76

/* WARNING: Removing unreachable block (ram,0x00404cec) */
/* WARNING: Removing unreachable block (ram,0x00404cfc) */

void FUN_00404cc0(void)

{
  return;
}



// ==== FUN_00404d0c @ 00404d0c size=176

/* WARNING: Removing unreachable block (ram,0x00404d6c) */

void FUN_00404d0c(void)

{
  if (DAT_00436b60 == '\0') {
    FUN_00404c80();
    DAT_00436b60 = '\x01';
  }
  return;
}



// ==== FUN_00404dbc @ 00404dbc size=60

/* WARNING: Removing unreachable block (ram,0x00404dd8) */

void FUN_00404dbc(void)

{
  FUN_00404cc0();
  return;
}



// ==== FUN_00405510 @ 00405510 size=36

undefined4 FUN_00405510(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(DAT_004778ac + 0x89c) != 0) {
    return 0;
  }
  uStack_20 = 1;
  uStack_14 = 0x18;
  uStack_18 = 0x4006;
  uStack_16 = 0x4006;
  uStack_c = 0;
  uStack_1c = 2;
  uStack_10 = param_1;
  iVar1 = FUN_004143f4(DAT_004778a4,&uStack_20,0x18);
  uVar2 = 1;
  if (iVar1 < 0) {
    FUN_00413f64("rmm.c","rmm_ptz_direction_ctrl",0x259,"p2p_ptz_direction_ctrl send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== FUN_004055bc @ 004055bc size=164

undefined4 FUN_004055bc(int param_1)

{
  undefined4 uVar1;
  undefined4 local_18 [3];
  
  local_18[0] = 100;
  if (param_1 == 1) {
    ioctl(DAT_00477968,0x20007013,local_18);
    uVar1 = 0x20007016;
  }
  else {
    if (param_1 != 0) {
      return 0;
    }
    local_18[0] = 0;
    ioctl(DAT_00477968,0x20007013,local_18);
    uVar1 = 0x20007015;
  }
  ioctl(DAT_00477968,uVar1,0);
  return 0;
}



// ==== FUN_00406530 @ 00406530 size=56

undefined4 FUN_00406530(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_cb_write_004249e0)(DAT_00436b70,param_1,param_2);
  return 0;
}



// ==== FUN_00406604 @ 00406604 size=2472

void FUN_00406604(void)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  undefined1 auStack_330 [8];
  ushort local_328;
  undefined4 local_324;
  undefined1 auStack_320 [496];
  uint local_130 [32];
  uint auStack_b0 [16];
  undefined1 auStack_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  
  memset(auStack_330,0,0x200);
  memset(auStack_70,0,0x40);
  memset(auStack_b0,0,0x40);
  uVar1 = syscall(0x107e);
  FUN_00413f64("rmm.c","msg_proc",0x605,"pid[%d]",uVar1);
  prctl(0xf,"msg_proc",0,0,0);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          do {
            puVar3 = local_130;
            local_30 = 10;
            local_2c = 0;
            do {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            } while (auStack_b0 != puVar3);
            local_130[DAT_004778a8 >> 5] = local_130[DAT_004778a8 >> 5] | 1 << (DAT_004778a8 & 0x1f)
            ;
            iVar2 = select(DAT_004778a8 + 1,local_130,0,0,&local_30);
          } while (((iVar2 < 0) ||
                   (((int)local_130[DAT_004778a8 >> 5] >> (DAT_004778a8 & 0x1f) & 1U) == 0)) ||
                  (iVar2 = mq_receive(DAT_004778a8,auStack_330,0x200,0), iVar2 < 1));
          printf(&DAT_0042250c,"msg_proc",0x616,local_328);
          if (local_328 != 0x100e) break;
          FUN_00413f64("rmm.c","msg_proc",0x633,"got RMM_SPEAK_WARNING");
          FUN_00408214("/home/app/audio_file/common/warning.aac");
        }
        if (local_328 < 0x100f) break;
        if (local_328 == 0x102f) {
          FUN_00408214("/tmp/audio/timeout.aac");
          FUN_00413f64("rmm.c","msg_proc",0x660,"got RMM_SPEAK_BIND_TIMEOUT");
        }
        else if (local_328 < 0x1030) {
          if (local_328 == 0x1021) {
            FUN_00413f64("rmm.c","msg_proc",0x6a3,"rmm rcv RMM_APP_MODE_EARPHONE");
          }
          else if (local_328 < 0x1022) {
            if (local_328 == 0x1010) {
              printf(&DAT_00422bd8,"msg_proc",0x716,*(undefined1 *)(DAT_004778ac + 0x9ed));
              if (*(char *)(DAT_004778ac + 0x9ed) != '\x01') {
                set_light_switch(0);
              }
            }
            else {
              iVar2 = 0x420000;
              if (local_328 < 0x1010) goto LAB_00406e3c;
              if (local_328 == 0x1011) {
                FUN_00408214("/tmp/sd/1k.aac");
                uVar1 = 0x69f;
                goto LAB_00406900;
              }
            }
          }
          else if (local_328 == 0x1028) {
            if (*(int *)(DAT_004778ac + 0x4dc) < 0x29) {
              media_rtl_set_ldc(0);
            }
            else {
              media_rtl_set_ldc(1);
            }
          }
          else if (local_328 == 0x102d) {
            FUN_00413e2c(auStack_70,0x40,auStack_320,local_324);
            FUN_00413f64("rmm.c","msg_proc",0x6de,"=======pic_name=%s\n",auStack_70);
            FUN_004080f8(0,auStack_70);
            send_capture_finish_msg(DAT_004778a4);
          }
          else if (local_328 == 0x1022) {
            FUN_00413f64("rmm.c","msg_proc",0x6a7,"rmm rcv RMM_APP_MODE_SPKER");
          }
        }
        else if (local_328 == 0x1035) {
          printf(&DAT_00422a80,"msg_proc",0x6f0);
          FUN_00408214("/home/app/audio_file/common/record_end.aac");
        }
        else if (local_328 < 0x1036) {
          if (local_328 == 0x1032) {
            iVar2 = *(int *)(DAT_004778ac + 0x4f8);
            if (DAT_00486a84 != iVar2) {
              DAT_00486a84 = iVar2;
              printf(" ===========g_rmm_info.ePlayload =%d\n",iVar2);
            }
          }
          else if (local_328 == 0x1034) {
            printf(&DAT_00422ad8,"msg_proc",0x6f6);
            FUN_00408214("/home/app/audio_file/common/record_start.aac");
          }
          else if (local_328 == 0x1031) {
            if (*(int *)(DAT_004778ac + 8) == 0) {
              FUN_00408214("/tmp/audio/device_wrong.aac");
            }
            else {
              FUN_00408214("/tmp/audio/bindkey_fail.aac");
            }
            FUN_00413f64("rmm.c","msg_proc",0x66d,"got RMM_SPEAK_WRONG_DEVICE");
          }
        }
        else if (local_328 == 0x1038) {
          FUN_00402540(100);
          puts("\n\n[Peter] rmm RMM_APP_AUDIO_MODE_SIMPLEX mode\n");
        }
        else if (local_328 < 0x1039) {
          if (local_328 == 0x1037) {
            rts_av_request_h264_key_frame(3);
          }
        }
        else if (local_328 == 0x1039) {
          FUN_00402540(100);
          puts("\n\n[Peter] rmm RMM_APP_AUDIO_MODE_DUPLEX mode\n");
        }
        else if (local_328 == 0x103d) {
          printf(&DAT_00422b34,"msg_proc",0x6fc);
          FUN_00408214("/home/app/audio_file/common/warning.aac");
        }
      }
      if (local_328 == 0x1005) break;
      if (local_328 < 0x1006) {
        if (local_328 == 0x1001) {
          FUN_00408214("/home/app/audio_file/common/poweroff.aac");
          FUN_00413f64("rmm.c","msg_proc",0x627,"got RMM_SPEAK_RESET");
          send_reboot_msg(DAT_004778a4);
        }
        else if (local_328 < 0x1002) {
          if (local_328 == 0x7b) {
            media_rtl_set_flip(0);
          }
          else if (local_328 == 0x1000) {
            FUN_00413f64("rmm.c","msg_proc",0x61c,"got RMM_SPEAK_SUCCESS");
            FUN_00408214("/tmp/audio/success.aac");
            DAT_00436bd9 = 1;
            system("echo 3 > /proc/sys/vm/drop_caches");
          }
          else if (local_328 == 0x7a) {
            media_rtl_set_flip(1);
          }
        }
        else if (local_328 == 0x1003) {
          if (*(int *)(DAT_004778ac + 8) == 0) {
            FUN_00408214("/tmp/audio/wifi_connect_failed.aac");
          }
          else {
            FUN_00408214("/tmp/audio/pwdwrong.aac");
          }
          send_wait_msg(DAT_004778a4);
          FUN_00413f64("rmm.c","msg_proc",0x642,"got RMM_SPEAK_PWD_WRONG");
        }
        else if (local_328 < 0x1004) {
          FUN_00413f64("rmm.c","msg_proc",0x62d,"got RMM_SPEAK_WAIT");
          FUN_00408214("/home/app/audio_file/common/wait.aac");
        }
        else {
          FUN_00408214("/tmp/audio/connectting.aac");
          FUN_00413f64("rmm.c","msg_proc",0x648,"got RMM_SPEAK_CONNECTTING");
        }
      }
      else if (local_328 == 0x1009) {
        FUN_00408214("/tmp/audio/bindkey_fail.aac");
        FUN_00413f64("rmm.c","msg_proc",0x65a,"got RMM_SPEAK_BINDFAIL");
      }
      else if (local_328 < 0x100a) {
        if (local_328 == 0x1007) {
          FUN_00413e10(auStack_70,0x40,0,0x40);
          FUN_00413e2c(auStack_70,0x40,auStack_320,local_324);
          snprintf(auStack_b0,0x40,"%s.tmp",auStack_70);
          if (*(short *)(DAT_004778ac + 0x9d0) == 1) {
            FUN_00408214("/home/app/audio_file/common/capture.aac");
          }
          iVar2 = FUN_004080f8(1,auStack_b0);
          if (iVar2 < 0) {
            printf(&DAT_004229dc,"msg_proc",0x6bc);
            FUN_00413f64("rmm.c","msg_proc",0x6bd,"media_get_jpeg error!");
          }
          else {
            iVar2 = rename(auStack_b0,auStack_70);
            if (iVar2 < 0) {
              pcVar4 = "Fail";
            }
            else {
              pcVar4 = "Success";
            }
            printf(&DAT_00422a20,"msg_proc",0x6c0,auStack_b0,auStack_70,pcVar4);
          }
        }
        else if (local_328 < 0x1008) {
          FUN_00408214("/tmp/audio/wifi_connected.aac");
          FUN_00413f64("rmm.c","msg_proc",0x64e,"got RMM_SPEAK_WIFI_CONNECTTED");
        }
        else {
          FUN_00408214("/tmp/audio/welcome.aac");
          uVar1 = 0x654;
LAB_00406900:
          FUN_00413f64("rmm.c","msg_proc",uVar1,"got RMM_START_WELCOME");
        }
      }
      else if (local_328 == 0x100b) {
        if (*(int *)(DAT_004778ac + 0xa9c) == 0) {
          FUN_00408214("/tmp/audio/updating.aac");
        }
        FUN_00413f64("rmm.c","msg_proc",0x67f,"got RMM_SPEAK_UPDATING");
        sleep(5);
        iVar2 = 0;
        exit(0);
LAB_00406e3c:
        printf(iVar2 + 0x2b64,"msg_proc",0x70d,DAT_00477950);
        set_light_switch(1);
        FUN_00413f64("rmm.c","msg_proc",0x710,"open white light compensate, warning beep...");
      }
      else if (local_328 < 0x100b) {
        if (*(int *)(DAT_004778ac + 0xa9c) == 0) {
          FUN_00408214("/tmp/audio/downloading.aac");
        }
        FUN_00413f64("rmm.c","msg_proc",0x676,"got RMM_SPEAK_DOWNLOADING");
      }
      else if (local_328 == 0x100c) {
        if (*(int *)(DAT_004778ac + 0xa9c) == 0) {
          FUN_00408214("/tmp/audio/download_fail.aac");
          FUN_00413f64("rmm.c","msg_proc",0x68a,"got RMM_SPEAK_DOWNLOAD_FAIL");
          sleep(1);
          send_reboot_msg(DAT_004778a4);
        }
      }
      else if (local_328 == 0x100d) {
        FUN_00408214("/tmp/audio/ban_device.aac");
        FUN_00413f64("rmm.c","msg_proc",0x699,"got RMM_SPEAK_BAN_DEVICE");
      }
    }
    FUN_00408214("/tmp/audio/scanok.aac");
    FUN_00413f64("rmm.c","msg_proc",0x693,"got RMM_SPEAK_SCAN_OK");
  } while( true );
}



// ==== FUN_004079bc @ 004079bc size=132

void FUN_004079bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fopen(param_1,&DAT_00422dd4);
  if (iVar1 == 0) {
    printf("open [%s] failed!\n",param_1);
  }
  fwrite(param_2,1,param_3,iVar1);
  fclose(iVar1);
  return;
}



// ==== FUN_00407a40 @ 00407a40 size=1480

undefined4 FUN_00407a40(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char local_80 [4];
  char local_7c;
  char local_58 [68];
  
  memset(local_58,0,0x40);
  memset(local_98,0,0x40);
  sprintf(local_98,&DAT_00422dec,0x31,10);
  uVar2 = strlen(local_98);
  FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,uVar2);
  usleep(50000);
  memset(local_98,0,0x40);
  sprintf(local_98,&DAT_00422dec,0x32,10);
  uVar2 = strlen(local_98);
  FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,uVar2);
  usleep(50000);
  iVar3 = fopen("/sys/devices/platform/rts_soc_camera/sensor","r");
  if (iVar3 == 0) {
    puts("open [/sys/devices/platform/rts_soc_camera/sensor] failed");
    if (local_58[0] == '\0') {
LAB_00407cb0:
      if (*(char *)(DAT_00436b74 + 0xc) != '7') {
        if (*(char *)(DAT_00436b74 + 0xc) != '8') {
          puts("use default isp.fw=============== ");
          memset(local_98,0,0x40);
          sprintf(local_98,&DAT_00422dec,0x31,10);
          uVar2 = strlen(local_98);
          FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,uVar2);
          return 0;
        }
        memset(local_98,0,0x40);
        local_98[0] = s__home_lib_sc2390_isp_dvp_fw_00422e98[0];
        local_98[1] = s__home_lib_sc2390_isp_dvp_fw_00422e98[1];
        local_98[2] = s__home_lib_sc2390_isp_dvp_fw_00422e98[2];
        local_98[3] = s__home_lib_sc2390_isp_dvp_fw_00422e98[3];
        local_94._0_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[4];
        local_94._1_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[5];
        local_94._2_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[6];
        local_94._3_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[7];
        local_90._0_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[8];
        local_90._1_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[9];
        local_90._2_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[10];
        local_90._3_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0xb];
        local_8c._0_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0xc];
        local_8c._1_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0xd];
        local_8c._2_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0xe];
        local_8c._3_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0xf];
        local_88._0_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x10];
        local_88._1_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x11];
        local_88._2_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x12];
        local_88._3_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x13];
        local_84._0_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x14];
        local_84._1_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x15];
        local_84._2_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x16];
        local_84._3_1_ = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x17];
        local_80[0] = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x18];
        local_80[1] = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x19];
        local_80[2] = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x1a];
        local_80[3] = s__home_lib_sc2390_isp_dvp_fw_00422e98[0x1b];
        FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,0x1b);
        puts("\nchoose CS2390 DVP isp.fw============");
        return 0;
      }
      goto LAB_00407dd4;
    }
  }
  else if (local_58[0] == '\0') {
    fread(local_58,1,0x40,iVar3);
    usleep(20000);
    iVar4 = 3;
    while (local_58[0] == '\0') {
      if (iVar4 == 0) goto LAB_00407cb0;
      iVar4 = iVar4 + -1;
      fread(local_58,1,0x40,iVar3);
      usleep(20000);
    }
  }
  printf("sensor = %s===========\n",local_58);
  iVar3 = strncmp(local_58,"SC1245",6);
  if (iVar3 == 0) {
    memset(local_98,0,0x40);
    pcVar5 = "/home/lib/sc1245/isp.fw";
    local_98 = (char  [4])s__home_lib_sc1245_isp_fw_00422f20._0_4_;
  }
  else {
    iVar3 = strncmp(local_58,"SC2235",6);
    if (iVar3 == 0) {
      memset(local_98,0,0x40);
      pcVar5 = "/home/lib/sc2235/isp.fw";
      local_98 = (char  [4])s__home_lib_sc2235_isp_fw_00422f40._0_4_;
    }
    else {
      iVar3 = strncmp(local_58,"SC2232",6);
      if (iVar3 != 0) {
        iVar3 = strncmp(local_58,"SC2230",6);
        if (iVar3 == 0) {
          cVar1 = *(char *)(DAT_00436b74 + 0xc);
          if (cVar1 != '4') {
            if (cVar1 == '5') {
              memset(local_98,0,0x40);
              local_98[0] = s__home_lib_sc2230_isp_lang_fw_00422fbc[0];
              local_98[1] = s__home_lib_sc2230_isp_lang_fw_00422fbc[1];
              local_98[2] = s__home_lib_sc2230_isp_lang_fw_00422fbc[2];
              local_98[3] = s__home_lib_sc2230_isp_lang_fw_00422fbc[3];
              local_94._0_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[4];
              local_94._1_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[5];
              local_94._2_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[6];
              local_94._3_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[7];
              local_90._0_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[8];
              local_90._1_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[9];
              local_90._2_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[10];
              local_90._3_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0xb];
              local_8c._0_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0xc];
              local_8c._1_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0xd];
              local_8c._2_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0xe];
              local_8c._3_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0xf];
              local_88._0_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x10];
              local_88._1_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x11];
              local_88._2_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x12];
              local_88._3_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x13];
              local_84._0_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x14];
              local_84._1_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x15];
              local_84._2_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x16];
              local_84._3_1_ = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x17];
              local_80[0] = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x18];
              local_80[1] = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x19];
              local_80[2] = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x1a];
              local_80[3] = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x1b];
              local_7c = s__home_lib_sc2230_isp_lang_fw_00422fbc[0x1c];
              FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,0x1c);
              puts("\nchoose isp_lang.fw============");
              return 0;
            }
            if (cVar1 == '6') {
              memset(local_98,0,0x40);
              local_98[0] = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0];
              local_98[1] = s__home_lib_sc2230_isp_mipi_fw_00422ffc[1];
              local_98[2] = s__home_lib_sc2230_isp_mipi_fw_00422ffc[2];
              local_98[3] = s__home_lib_sc2230_isp_mipi_fw_00422ffc[3];
              local_94._0_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[4];
              local_94._1_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[5];
              local_94._2_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[6];
              local_94._3_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[7];
              local_90._0_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[8];
              local_90._1_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[9];
              local_90._2_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[10];
              local_90._3_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0xb];
              local_8c._0_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0xc];
              local_8c._1_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0xd];
              local_8c._2_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0xe];
              local_8c._3_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0xf];
              local_88._0_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x10];
              local_88._1_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x11];
              local_88._2_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x12];
              local_88._3_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x13];
              local_84._0_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x14];
              local_84._1_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x15];
              local_84._2_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x16];
              local_84._3_1_ = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x17];
              local_80[0] = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x18];
              local_80[1] = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x19];
              local_80[2] = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x1a];
              local_80[3] = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x1b];
              local_7c = s__home_lib_sc2230_isp_mipi_fw_00422ffc[0x1c];
              FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,0x1c);
              puts("\nchoose isp_mipi.fw============");
              return 0;
            }
          }
          memset(local_98,0,0x40);
          local_98[0] = s__home_lib_sc2230_isp_jin_fw_00422f80[0];
          local_98[1] = s__home_lib_sc2230_isp_jin_fw_00422f80[1];
          local_98[2] = s__home_lib_sc2230_isp_jin_fw_00422f80[2];
          local_98[3] = s__home_lib_sc2230_isp_jin_fw_00422f80[3];
          local_94._0_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[4];
          local_94._1_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[5];
          local_94._2_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[6];
          local_94._3_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[7];
          local_90._0_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[8];
          local_90._1_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[9];
          local_90._2_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[10];
          local_90._3_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0xb];
          local_8c._0_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0xc];
          local_8c._1_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0xd];
          local_8c._2_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0xe];
          local_8c._3_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0xf];
          local_88._0_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0x10];
          local_88._1_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0x11];
          local_88._2_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0x12];
          local_88._3_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0x13];
          local_84._0_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0x14];
          local_84._1_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0x15];
          local_84._2_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0x16];
          local_84._3_1_ = s__home_lib_sc2230_isp_jin_fw_00422f80[0x17];
          local_80[0] = s__home_lib_sc2230_isp_jin_fw_00422f80[0x18];
          local_80[1] = s__home_lib_sc2230_isp_jin_fw_00422f80[0x19];
          local_80[2] = s__home_lib_sc2230_isp_jin_fw_00422f80[0x1a];
          local_80[3] = s__home_lib_sc2230_isp_jin_fw_00422f80[0x1b];
          FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,0x1b);
          puts("\nchoose isp_jin.fw============");
          return 0;
        }
        iVar3 = strncmp(local_58,"C2390",5);
        if (iVar3 != 0) {
          printf("do not support this sensor[%s]\n",local_58);
          return 0;
        }
LAB_00407dd4:
        memset(local_98,0,0x40);
        local_98[0] = s__home_lib_sc2390_isp_fw_00422e5c[0];
        local_98[1] = s__home_lib_sc2390_isp_fw_00422e5c[1];
        local_98[2] = s__home_lib_sc2390_isp_fw_00422e5c[2];
        local_98[3] = s__home_lib_sc2390_isp_fw_00422e5c[3];
        local_94._0_1_ = s__home_lib_sc2390_isp_fw_00422e5c[4];
        local_94._1_1_ = s__home_lib_sc2390_isp_fw_00422e5c[5];
        local_94._2_1_ = s__home_lib_sc2390_isp_fw_00422e5c[6];
        local_94._3_1_ = s__home_lib_sc2390_isp_fw_00422e5c[7];
        local_90._0_1_ = s__home_lib_sc2390_isp_fw_00422e5c[8];
        local_90._1_1_ = s__home_lib_sc2390_isp_fw_00422e5c[9];
        local_90._2_1_ = s__home_lib_sc2390_isp_fw_00422e5c[10];
        local_90._3_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0xb];
        local_8c._0_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0xc];
        local_8c._1_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0xd];
        local_8c._2_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0xe];
        local_8c._3_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0xf];
        local_88._0_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0x10];
        local_88._1_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0x11];
        local_88._2_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0x12];
        local_88._3_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0x13];
        local_84._0_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0x14];
        local_84._1_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0x15];
        local_84._2_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0x16];
        local_84._3_1_ = s__home_lib_sc2390_isp_fw_00422e5c[0x17];
        FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,0x17);
        puts("\nchoose CS2390 isp.fw============");
        return 0;
      }
      memset(local_98,0,0x40);
      pcVar5 = "/home/lib/sc2232/isp.fw";
      local_98 = (char  [4])s__home_lib_sc2232_isp_fw_00422f60._0_4_;
    }
  }
  local_94 = *(undefined4 *)(pcVar5 + 4);
  local_90 = *(undefined4 *)(pcVar5 + 8);
  local_8c = *(undefined4 *)(pcVar5 + 0xc);
  local_88 = *(undefined4 *)(pcVar5 + 0x10);
  local_84 = *(undefined4 *)(pcVar5 + 0x14);
  FUN_004079bc("/sys/devices/platform/rts_soc_camera/loadfw",local_98,0x17);
  return 0;
}



// ==== FUN_00408008 @ 00408008 size=20

void FUN_00408008(undefined4 param_1,undefined4 param_2)

{
  DAT_00436be0 = param_1;
  DAT_00436be4 = param_2;
  return;
}



// ==== FUN_0040801c @ 0040801c size=156

undefined4 FUN_0040801c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_90 [132];
  
  uVar1 = *param_1;
  memset(auStack_90,0,0x80);
  snprintf(auStack_90,0x7f,"get_video_%d",uVar1);
  prctl(0xf,auStack_90,0,0,0);
  if (*(code **)(DAT_00436be4 + 0x18) == (code *)0x0) {
    puts("\n\nget_videostream not exit!!!\n");
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(DAT_00436be4 + 0x18))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_004080b8 @ 004080b8 size=64

undefined4 FUN_004080b8(void)

{
  undefined4 uVar1;
  
  if (*(code **)(DAT_00436be4 + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004080cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_00436be4 + 0x1c))();
    return uVar1;
  }
  puts("\n\nget_yuv_data not exit!!!\n");
  return 0xffffffff;
}



// ==== FUN_004080f8 @ 004080f8 size=64

undefined4 FUN_004080f8(void)

{
  undefined4 uVar1;
  
  if (*(code **)(DAT_00436be4 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040810c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_00436be4 + 0x20))();
    return uVar1;
  }
  puts("\n\nget_jpeg not exit!!!\n");
  return 0xffffffff;
}



// ==== FUN_00408214 @ 00408214 size=72

undefined4 FUN_00408214(void)

{
  undefined4 uVar1;
  
  if (*(code **)(DAT_00436be4 + 0x34) == (code *)0x0) {
    puts("\n\nsend_ao_beep not exit!!!\n");
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(DAT_00436be4 + 0x34))();
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0040825c @ 0040825c size=408

int FUN_0040825c(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  *param_3 = 0;
  pbVar4 = (byte *)(param_1 + param_2 + -1);
  param_3[1] = 0;
  pbVar5 = (byte *)(param_1 + 3);
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  if (param_2 < 4) {
    return -1;
  }
LAB_00408298:
  pbVar6 = pbVar5;
  if (pbVar5 < pbVar4) {
    do {
      if (pbVar6[-1] < 2) {
        if (pbVar6[-2] == 0) {
          if (pbVar6[-1] == 1 && pbVar6[-3] == 0) goto LAB_0040835c;
          pbVar6 = pbVar6 + 1;
        }
        else {
          pbVar6 = pbVar6 + 2;
        }
      }
      else {
        pbVar6 = pbVar6 + 3;
      }
      if (pbVar4 <= pbVar6) {
        iVar2 = param_3[1];
        goto LAB_004082e8;
      }
    } while( true );
  }
  iVar2 = param_3[1];
LAB_004082e8:
  if (iVar2 != 0) {
    iVar3 = param_3[2];
    if (*param_3 != 0) {
      param_3[3] = iVar2 - *param_3;
    }
    goto LAB_00408304;
  }
  iVar3 = param_3[2];
  if (iVar3 != 0) goto LAB_00408310;
  iVar2 = param_3[3];
  goto LAB_00408320;
LAB_0040835c:
  bVar1 = *pbVar6 & 0x1f;
  pbVar5 = pbVar6 + 1;
  if ((*pbVar6 & 0x1f) != 0) {
    if (bVar1 == 7) {
      pbVar6 = pbVar6 + -4;
      *param_3 = (int)pbVar6;
      goto LAB_00408388;
    }
    if (bVar1 == 8) {
      param_3[1] = (int)(pbVar6 + -4);
      pbVar6 = (byte *)*param_3;
      goto LAB_00408388;
    }
    if (bVar1 == 5) {
      param_3[2] = (int)(pbVar6 + -4);
      pbVar6 = (byte *)*param_3;
      goto LAB_00408388;
    }
  }
  pbVar6 = (byte *)*param_3;
LAB_00408388:
  if ((pbVar6 != (byte *)0x0) && (iVar2 = param_3[1], iVar2 != 0)) {
    iVar3 = param_3[2];
    if (iVar3 != 0) {
      param_3[3] = iVar2 - (int)pbVar6;
LAB_00408304:
      if (iVar3 != 0) {
        param_3[4] = iVar3 - iVar2;
LAB_00408310:
        param_3[5] = (int)(pbVar4 + (1 - iVar3));
      }
      iVar2 = param_3[3];
LAB_00408320:
      if ((iVar2 != 0) && (param_3[4] != 0)) {
        return -(uint)(param_3[5] == 0);
      }
      return -1;
    }
  }
  goto LAB_00408298;
}



// ==== FUN_00408658 @ 00408658 size=72

void FUN_00408658(undefined4 param_1)

{
  undefined4 *local_10 [2];
  
  rts_av_query_aec_ctrl(DAT_0043767c,local_10);
  *local_10[0] = param_1;
  rts_av_set_aec_ctrl(local_10[0]);
  rts_av_release_aec_ctrl(local_10[0]);
  return;
}



// ==== FUN_004086a0 @ 004086a0 size=420

void FUN_004086a0(void)

{
  bool bVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20 [2];
  
  local_24 = 0x103e80;
  local_20[0] = (undefined4 *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  nice(0xfffffffd);
  iVar2 = access("/tmp/rmm_force_h264",0);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = access("/tmp/sd/Factory/wpa_supplicant.conf",0);
    bVar1 = iVar2 == 0;
  }
LAB_00408728:
  do {
    if (*(int *)(DAT_004778ac + 0x4ec) == 0x65) goto LAB_004087bc;
LAB_00408734:
    _ftext();
    iVar2 = rts_av_poll(DAT_00437684);
    if (iVar2 == 0) {
      do {
        iVar2 = rts_av_recv(DAT_00437684,local_20);
        if (iVar2 != 0) break;
        if (local_20[0] == (undefined4 *)0x0) goto LAB_00408728;
        if (((DAT_004778ac == 0) ||
            (((*(int *)(DAT_004778ac + 0x5a0) == 0 && (*(char *)(DAT_004778ac + 0x9f0) == '\0')) &&
             (!bVar1)))) || (*(int *)(DAT_004778ac + 0x608) != 0)) {
LAB_004087a0:
          rts_av_put_buffer();
        }
        else {
          local_2c = local_20[0][2];
          local_30 = CONCAT22(0x100,(short)local_30 + 1);
          local_34 = FUN_00414718();
          local_38 = time(0);
          FUN_00402580(*local_20[0],&local_38);
          if (local_20[0] != (undefined4 *)0x0) goto LAB_004087a0;
        }
        local_20[0] = (undefined4 *)0x0;
        if (*(int *)(DAT_004778ac + 0x4ec) != 0x65) goto LAB_00408734;
LAB_004087bc:
        FUN_00402520();
        iVar2 = rts_av_poll(DAT_00437684);
        if (iVar2 != 0) break;
      } while( true );
    }
    ms_sleep(10);
  } while( true );
}



// ==== FUN_00408b98 @ 00408b98 size=124

undefined4 FUN_00408b98(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  
  pthread_mutex_lock(&DAT_00436c2c);
  iVar1 = rts_av_get_profile(DAT_00436c04,auStack_28);
  pthread_mutex_unlock(&DAT_00436c2c);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_1 = local_24;
    *param_2 = local_20;
  }
  return uVar2;
}



// ==== FUN_004091d0 @ 004091d0 size=180

void FUN_004091d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 1;
  if (-1 < *(int *)(param_1 + 8)) {
    rts_av_disable_chn();
    rts_av_destroy_chn(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x14)) {
    rts_av_disable_chn();
    rts_av_destroy_chn(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0xc)) {
    rts_av_disable_chn();
    rts_av_destroy_chn(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x10)) {
    rts_av_disable_chn();
    rts_av_destroy_chn(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}



// ==== FUN_00409284 @ 00409284 size=68

void FUN_00409284(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar1 = rts_av_get_buffer(param_2);
  rts_queue_push_back(uVar2,uVar1);
  return;
}



// ==== FUN_004092c8 @ 004092c8 size=92

void FUN_004092c8(void)

{
  if ((0 < DAT_00437694) && (0 < DAT_0043768c)) {
    rts_av_bind();
    rts_av_enable_chn(DAT_00437694);
    rts_av_start_send(DAT_00437694);
  }
  DAT_00437788 = 1;
  return;
}



// ==== FUN_00409324 @ 00409324 size=212

void FUN_00409324(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = rts_av_new_buffer(1);
  iVar2 = DAT_00437694;
  iVar3 = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  rts_av_send(iVar2,iVar1);
  do {
    iVar3 = iVar3 + 1;
    iVar2 = rts_av_is_idle(DAT_00437694);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else if (9 < iVar3) {
      ms_sleep(500);
      rts_av_delete_buffer(iVar1);
      if ((0 < DAT_00437694) && (0 < DAT_0043768c)) {
        rts_av_stop_send();
        rts_av_disable_chn(DAT_00437694);
        rts_av_unbind(DAT_00437694,DAT_0043768c);
      }
      DAT_00437788 = 0;
      return;
    }
    ms_sleep(10);
  } while( true );
}



// ==== FUN_00409414 @ 00409414 size=48

void FUN_00409414(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00406530(*param_3,param_3[2]);
  FUN_00411610(*param_3,param_3[2]);
  return;
}



// ==== FUN_00409444 @ 00409444 size=72

void FUN_00409444(void)

{
  int local_10 [3];
  
  rts_av_query_aec_ctrl(DAT_0043767c,local_10);
  *(undefined4 *)(local_10[0] + 4) = 1;
  *(undefined4 *)(local_10[0] + 8) = 0x23;
  rts_av_set_aec_ctrl(local_10[0]);
  rts_av_release_aec_ctrl(local_10[0]);
  return;
}



// ==== FUN_0040948c @ 0040948c size=852

undefined4 FUN_0040948c(undefined4 param_1,int param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int *local_18;
  
  if (DAT_00437784 != 1) {
    rts_log(4,"<%s, %d>server info not init.\n","send_aac_frame",0x5a2);
    return 0xffffffff;
  }
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_2;
  iVar1 = aacDecoder_Fill(DAT_004376b0,&local_24,&local_1c,&local_20);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>aacDecoder_Fill() failed: %x\n","fdk_aac_decode_frame",0x3de,iVar1);
    iVar1 = -1;
    goto LAB_0040963c;
  }
  iVar1 = aacDecoder_DecodeFrame(DAT_004376b0,param_3,*param_4,0);
  if (iVar1 == 0x1002) {
    iVar1 = local_20 - local_1c;
    rts_log(4,"<%s, %d>AAC decode not enough bits.\n","fdk_aac_decode_frame",999);
  }
  else {
    if (iVar1 != 0) {
      rts_log(4,"<%s, %d>aacDecoder_DecodeFrame() failed: %x\n","fdk_aac_decode_frame",0x3ed,iVar1);
      iVar1 = -1;
      goto LAB_0040963c;
    }
    DAT_004376a8 = 0x10;
    piVar2 = (int *)aacDecoder_GetStreamInfo(DAT_004376b0);
    if (piVar2 == (int *)0x0) {
      rts_log(4,"<%s, %d>Unable to get stream info\n","get_stream_info",0x3a8);
      iVar1 = -1;
      goto LAB_0040963c;
    }
    iVar1 = *piVar2;
    if (iVar1 < 1) {
      rts_log(4,"<%s, %d>Stream info not initialized\n","get_stream_info",0x3ae);
      iVar1 = -1;
      goto LAB_0040963c;
    }
    DAT_004376a0 = piVar2[1];
    iVar4 = piVar2[2];
    DAT_004376a4 = iVar1;
    if (iVar4 < 1) {
LAB_00409588:
      DAT_004376ac = iVar4;
      *param_4 = (uint)(iVar4 * DAT_004376a8 * DAT_004376a0) >> 3;
      if (DAT_004376ac != DAT_004376f8) goto LAB_004095c0;
LAB_00409670:
      if ((DAT_004376a8 != DAT_004376f4) || (DAT_004376a4 != DAT_004376fc)) goto LAB_004095c0;
    }
    else {
      piVar3 = (int *)piVar2[3];
      if (*piVar3 - 1U < 0x10) {
        iVar1 = 0;
        do {
          piVar3 = piVar3 + 1;
          iVar1 = iVar1 + 1;
          if (iVar1 == iVar4) goto LAB_00409588;
        } while (*piVar3 - 1U < 0x10);
      }
      local_18 = piVar2;
      rts_log(4,"<%s, %d>unknown channel type\n","get_stream_info",0x3b9);
      DAT_004376ac = local_18[2];
      *param_4 = (uint)(DAT_004376ac * DAT_004376a8 * DAT_004376a0) >> 3;
      if (DAT_004376ac == DAT_004376f8) goto LAB_00409670;
LAB_004095c0:
      local_38 = 0x8001;
      local_34 = DAT_004376a4;
      local_30 = DAT_004376a8;
      local_2c = DAT_004376ac;
      iVar1 = rts_av_set_profile(DAT_00437694,&local_38);
      iVar4 = RTS_IS_ERR(iVar1);
      if (iVar4 != 0) {
        rts_log(4,"<%s, %d>setresample profile fail, ret = %d\n","fdk_aac_decode_frame",0x404,iVar1)
        ;
        goto LAB_004095fc;
      }
    }
    iVar1 = local_1c - local_20;
  }
LAB_004095fc:
  if (-1 < iVar1) {
    return 0;
  }
LAB_0040963c:
  rts_log(4,"<%s, %d>decode aac frame fail %d\n","send_aac_frame",0x5a9,iVar1);
  usleep(1000);
  return 0xffffffff;
}



// ==== FUN_0040a054 @ 0040a054 size=184

undefined4 FUN_0040a054(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = &DAT_00437758;
  piVar3 = piVar2;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    rts_av_set_buffer_callback(iVar1,0,0);
  } while (piVar3 != (int *)0x437778);
  if (DAT_00437780 != 0) {
    rts_queue_clear(DAT_00437780,rts_av_put_buffer);
    if (DAT_00437780 != 0) {
      rts_queue_destroy();
    }
    DAT_00437780 = 0;
  }
  do {
    if (*piVar2 != 0) {
      rts_av_delete_buffer();
    }
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)0x437778);
  return 0;
}



// ==== FUN_0040a10c @ 0040a10c size=452

undefined4 FUN_0040a10c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0xffffffe1;
  if (DAT_00437784 != 0) {
    DAT_00437784 = 0;
    if (DAT_004376b0 != 0) {
      aacDecoder_Close();
    }
    if (DAT_00437788 != 0) {
      rts_av_stop_send(DAT_00437694);
    }
    rts_av_stop_recv(DAT_00437684);
    rts_av_disable_chn(DAT_00437698);
    if (DAT_00437788 != 0) {
      rts_av_disable_chn(DAT_00437694);
      DAT_00437788 = 0;
    }
    rts_av_disable_chn(DAT_0043768c);
    rts_av_disable_chn(DAT_00437688);
    rts_av_disable_chn(DAT_00437680);
    rts_av_disable_chn(DAT_0043767c);
    rts_av_disable_chn(DAT_0043769c);
    rts_av_disable_chn(DAT_00437684);
    if (-1 < DAT_00437698) {
      rts_av_destroy_chn();
    }
    DAT_00437698 = -1;
    if (-1 < DAT_00437694) {
      rts_av_destroy_chn();
    }
    DAT_00437694 = -1;
    if (-1 < DAT_00437688) {
      rts_av_destroy_chn();
    }
    DAT_00437688 = -1;
    if (-1 < DAT_0043768c) {
      rts_av_destroy_chn();
    }
    DAT_0043768c = -1;
    if (-1 < DAT_00437680) {
      rts_av_destroy_chn();
    }
    DAT_00437680 = -1;
    if (-1 < DAT_0043767c) {
      rts_av_destroy_chn();
    }
    DAT_0043767c = -1;
    if (-1 < DAT_0043769c) {
      rts_av_destroy_chn();
    }
    DAT_0043769c = -1;
    if (-1 < DAT_00437684) {
      rts_av_destroy_chn();
    }
    DAT_00437684 = -1;
    puVar2 = &DAT_00437758;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      rts_av_set_buffer_callback(uVar1,0,0);
    } while (puVar2 != (undefined4 *)0x437778);
    FUN_0040a054();
    rts_av_release();
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0040a2d0 @ 0040a2d0 size=2244

int FUN_0040a2d0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar5;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_34;
  int local_30;
  int *piVar4;
  
  if (DAT_00437784 == 0) {
    DAT_00437694 = -1;
    DAT_0043768c = -1;
    DAT_00437688 = -1;
    DAT_00437698 = -1;
    DAT_00437680 = -1;
    DAT_00437684 = -1;
    DAT_0043769c = -1;
    DAT_00437784 = 1;
    DAT_00437788 = 0;
    DAT_0043767c = -1;
    iVar1 = rts_av_init();
    iVar2 = RTS_IS_ERR(iVar1);
    if (iVar2 == 0) {
      DAT_004376f4 = 0x10;
      DAT_00437744 = 0x10;
      DAT_004376b4 = 0x303a7768;
      DAT_00437704 = 0x303a7768;
      DAT_004376b8 = 0x312c;
      DAT_004376ba = 0;
      DAT_004376f8 = 1;
      DAT_004376fc = 16000;
      DAT_00437708 = 0x312c;
      DAT_0043770a = 0;
      DAT_00437748 = 1;
      DAT_0043774c = 16000;
      DAT_00437754 = 7;
      DAT_00437780 = rts_queue_init();
      if (DAT_00437780 == 0) {
        iVar1 = -0xb;
        goto LAB_0040a6ac;
      }
      piVar5 = &DAT_00437758;
      piVar3 = piVar5;
      do {
        piVar4 = piVar3 + 1;
        iVar1 = rts_av_new_buffer(0x1400);
        *piVar3 = iVar1;
        if (iVar1 == 0) {
          iVar1 = -0xb;
          goto LAB_0040a500;
        }
        piVar3 = piVar4;
      } while (piVar4 != (int *)0x437778);
      DAT_004376b0 = aacDecoder_Open(2,1);
      iVar1 = 0;
      if (DAT_004376b0 == 0) {
        rts_log(4,"<%s, %d>Error opening aac decoder\n","fdk_aac_decode_init",0x3ca);
        iVar1 = -1;
      }
      iVar2 = RTS_IS_ERR(iVar1);
      if (iVar2 != 0) {
        rts_log(4,"<%s, %d>fdk aac decode fail.\n","init_aac_audio_server",0x580);
LAB_0040a500:
        FUN_0040a054();
        if (DAT_004376b0 != 0) {
          aacDecoder_Close();
        }
        rts_av_release();
        goto LAB_0040a350;
      }
      DAT_00437694 = rts_av_create_audio_resample_chn(DAT_004376fc,DAT_004376f4,DAT_004376f8);
      iVar1 = RTS_IS_ERR(DAT_00437694);
      if (iVar1 == 0) {
        rts_log(1,"audio resample chn : %d\n",DAT_00437694);
        DAT_0043768c = rts_av_create_audio_mixer_chn();
        iVar2 = RTS_IS_ERR(DAT_0043768c);
        iVar1 = DAT_0043768c;
        if (iVar2 != 0) goto LAB_0040a580;
        rts_log(1,"audio mixer chn : %d\n",DAT_0043768c);
        DAT_00437688 = rts_av_create_audio_playback_chn(&DAT_004376b4);
        iVar2 = RTS_IS_ERR(DAT_00437688);
        iVar1 = DAT_00437688;
        if (iVar2 != 0) goto LAB_0040a580;
        rts_log(1,"audio playback chn : %d\n",DAT_00437688);
        DAT_00437698 = rts_av_create_audio_resample_chn(DAT_0043774c,DAT_00437744,DAT_00437748);
        iVar2 = RTS_IS_ERR(DAT_00437698);
        iVar1 = DAT_00437698;
        if (iVar2 != 0) goto LAB_0040a580;
        rts_log(1,"audio resample chn : %d\n",DAT_00437698);
        DAT_00437680 = rts_av_create_audio_capture_chn(&DAT_00437704);
        iVar2 = RTS_IS_ERR(DAT_00437680);
        iVar1 = DAT_00437680;
        if (iVar2 != 0) goto LAB_0040a580;
        rts_log(1,"audio capture chn : %d\n",DAT_00437680);
        DAT_0043767c = rts_av_create_audio_aec_chn();
        iVar2 = RTS_IS_ERR(DAT_0043767c);
        iVar1 = DAT_0043767c;
        if (iVar2 != 0) goto LAB_0040a580;
        rts_log(1,"audio aec chn : %d\n",DAT_0043767c);
        DAT_0043769c = rts_av_create_audio_resample_chn(DAT_0043774c,DAT_00437744,DAT_00437748);
        iVar2 = RTS_IS_ERR(DAT_0043769c);
        iVar1 = DAT_0043769c;
        if (iVar2 != 0) goto LAB_0040a580;
        rts_log(1,"audio resample chn : %d\n",DAT_0043769c);
        DAT_00437684 = rts_av_create_audio_encode_chn(DAT_00437754,32000);
        iVar2 = RTS_IS_ERR(DAT_00437684);
        iVar1 = DAT_00437684;
        if (iVar2 != 0) goto LAB_0040a580;
        rts_log(1,"encode chn : %d\n",DAT_00437684);
        local_48 = 0x8001;
        local_44 = DAT_004376fc;
        local_3c = DAT_004376f8;
        local_40 = DAT_004376f4;
        iVar1 = rts_av_set_profile(DAT_00437694,&local_48);
        iVar2 = RTS_IS_ERR(iVar1);
        if (iVar2 != 0) {
          rts_log(4,"<%s, %d>set dtom resample ch fail, ret = %d\n","start_server_job",0x498,iVar1);
          goto LAB_0040a580;
        }
        iVar1 = rts_av_bind(DAT_0043768c,DAT_00437688);
        if (iVar1 != 0) {
          rts_log(4,"<%s, %d>fail to bind mixer and playback, ret = %d\n","start_server_job",0x4b3,
                  iVar1);
          goto LAB_0040a580;
        }
        iVar1 = rts_av_bind(DAT_00437688,DAT_00437698);
        if (iVar1 != 0) {
          rts_log(4,"<%s, %d>fail to bind playback and resample, ret = %d\n","start_server_job",
                  0x4ba,iVar1);
          goto LAB_0040a580;
        }
        iVar1 = rts_av_bind(DAT_0043767c,DAT_0043769c);
        if (iVar1 != 0) {
          rts_log(4,"<%s, %d>fail to bind aec and resample, ret = %d\n","start_server_job",0x4c0,
                  iVar1);
          goto LAB_0040a580;
        }
        iVar1 = rts_av_bind(DAT_00437698,DAT_0043767c);
        if (iVar1 != 0) {
          rts_log(4,"<%s, %d>fail to bind resample and aec, ret = %d\n","start_server_job",0x4c7,
                  iVar1);
          goto LAB_0040a580;
        }
        iVar1 = rts_av_bind(DAT_00437680,DAT_0043767c);
        if (iVar1 != 0) {
          rts_log(4,"<%s, %d>fail to bind capture and aec, ret = %d\n","start_server_job",0x4ce,
                  iVar1);
          goto LAB_0040a580;
        }
        iVar1 = rts_av_bind(DAT_0043769c,DAT_00437684);
        if (iVar1 != 0) {
          rts_log(4,"<%s, %d>fail to bind resample and encode, ret = %d\n","start_server_job",0x4dd,
                  iVar1);
          goto LAB_0040a580;
        }
        rts_av_enable_chn(DAT_0043768c);
        rts_av_enable_chn(DAT_00437688);
        rts_av_enable_chn(DAT_00437698);
        rts_av_enable_chn(DAT_00437680);
        rts_av_enable_chn(DAT_0043767c);
        rts_av_enable_chn(DAT_0043769c);
        rts_av_enable_chn(DAT_00437684);
        local_60 = &LAB_004093f8;
        local_58 = 0;
        local_54 = 0xffffffff;
        local_50 = 0;
        local_4c = 0;
        local_5c = 0;
        iVar1 = rts_av_set_callback(DAT_0043767c,&local_60,0);
        if (iVar1 != 0) {
          puts("\n\n\n[BAD]~~~~~set pcm callback fail, thread crashed!!!~~~~~\n\n");
          goto LAB_0040a580;
        }
        puts("\n\n\n~~~~~set pcm callback ok~~~~~\n\n");
        rts_av_query_aec_ctrl(DAT_0043767c,&local_34);
        *local_34 = 1;
        local_34[1] = 1;
        local_34[2] = 0x23;
        rts_av_set_aec_ctrl(local_34);
        rts_av_release_aec_ctrl(local_34);
        local_34 = (undefined4 *)0x0;
        rts_av_start_recv(DAT_00437684);
        do {
          iVar2 = *piVar5;
          piVar5 = piVar5 + 1;
          iVar2 = rts_av_get_buffer(iVar2);
          rts_av_set_buffer_callback(iVar2,&DAT_0043767c,FUN_00409284);
          if (iVar2 != 0) {
            rts_av_put_buffer(iVar2);
          }
        } while (piVar5 != (int *)0x437778);
      }
      else {
        rts_log(4,"<%s, %d>create audio dtom resample chn fail, ret = %d\n","start_server_job",0x44d
                ,DAT_00437694);
        iVar1 = DAT_00437694;
LAB_0040a580:
        if (-1 < DAT_00437694) {
          rts_av_destroy_chn();
        }
        DAT_00437694 = -1;
        if (-1 < DAT_0043768c) {
          rts_av_destroy_chn();
        }
        DAT_0043768c = -1;
        if (-1 < DAT_00437688) {
          rts_av_destroy_chn();
        }
        DAT_00437688 = -1;
        if (-1 < DAT_00437698) {
          rts_av_destroy_chn();
        }
        DAT_00437698 = -1;
        if (-1 < DAT_00437680) {
          rts_av_destroy_chn();
        }
        DAT_00437680 = -1;
        if (-1 < DAT_0043767c) {
          rts_av_destroy_chn();
        }
        DAT_0043767c = -1;
        if (-1 < DAT_0043769c) {
          rts_av_destroy_chn();
        }
        DAT_0043769c = -1;
        if (-1 < DAT_00437684) {
          rts_av_destroy_chn();
        }
        DAT_00437684 = -1;
      }
      iVar2 = RTS_IS_ERR(iVar1);
      if (iVar2 != 0) {
        rts_log(4,"<%s, %d>start decode fail, ret = %d\n","init_aac_audio_server",0x58b,iVar1);
        goto LAB_0040a500;
      }
    }
    else {
LAB_0040a350:
      if (iVar1 < 0) goto LAB_0040a6ac;
    }
    if (DAT_00486a90 != 0) {
      return 1;
    }
    if (DAT_00437784 == 0) {
      iVar1 = -0x1f;
      rts_log(4,"<%s, %d>fail to apply capture.\n","audio_init",0x809);
    }
    else {
      DAT_0043777c = 1;
      rts_av_start_recv(DAT_00437684);
      iVar1 = pthread_create(&local_60,0,media_ai_get_aacstream,0);
      if (-1 < iVar1) {
        return 1;
      }
      rts_log(4,"<%s, %d>pthread_create(\"media_ai_get_aacstream\") fail\n","audio_init",0x810);
    }
    FUN_0040a10c();
    local_30 = iVar1;
  }
  else {
    iVar1 = -0x20;
LAB_0040a6ac:
    local_30 = iVar1;
    rts_log(4,"<%s, %d>init aac playback fail.\n","audio_init",0x7ff);
  }
  return local_30;
}



// ==== FUN_0040b144 @ 0040b144 size=360

undefined4 FUN_0040b144(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [256];
  
  memset(auStack_108,0,0x100);
  iVar1 = access("/sys/devices/platform/rts_soc_camera/sensor",0);
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_004141ac("cat /sys/devices/platform/rts_soc_camera/sensor",auStack_108,0x100,10);
  if (iVar1 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = strncmp(auStack_108,"SC1245",6);
    if (iVar1 == 0) {
      param_1[1] = 0x500;
      param_1[2] = 0x2d0;
      param_1[3] = 0x14;
      *param_1 = 0;
      pcVar2 = "Sensor ID SC1245";
      uVar3 = 0xc8000;
    }
    else {
      iVar1 = strncmp(auStack_108,"SC2235",6);
      if (iVar1 == 0) {
        *param_1 = 0;
        pcVar2 = "Sensor ID SC2235";
      }
      else {
        iVar1 = strncmp(auStack_108,"SC2230",6);
        if (iVar1 == 0) {
          *param_1 = 0;
          pcVar2 = "Sensor ID SC2230";
        }
        else {
          iVar1 = strncmp(auStack_108,"SC2232",6);
          if (iVar1 != 0) {
            return 0xfffffffe;
          }
          *param_1 = 0;
          pcVar2 = "Sensor ID SC2232";
        }
      }
      param_1[1] = 0x780;
      param_1[2] = 0x438;
      param_1[3] = 0x14;
      uVar3 = 0x133333;
    }
    param_1[4] = uVar3;
    param_1[5] = 0;
    puts(pcVar2);
    uVar3 = 1;
  }
  return uVar3;
}



// ==== FUN_0040b2ac @ 0040b2ac size=2352

int FUN_0040b2ac(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  
  iVar3 = DAT_004778ac;
  puts("###fmy###: in video_init");
  rts_log(4,&DAT_0042439c);
  DAT_00437304 = -1;
  DAT_00437308 = -1;
  DAT_0043730c = -1;
  DAT_00437310 = -1;
  DAT_00437314 = 0;
  DAT_00437318 = 0;
  DAT_00436f84 = -1;
  DAT_00436f88 = -1;
  DAT_00436f8c = -1;
  DAT_00436f90 = 0xffffffff;
  DAT_00436f94 = 0;
  DAT_00436f98 = 0;
  iVar2 = rts_av_init();
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_0040b144(&local_88);
  if (iVar2 < 0) {
    if (*(char *)(iVar3 + 0x1fa) == '1') {
      local_84 = 0x780;
      local_80 = 0x438;
      local_7c = 0x14;
      local_88 = 0;
      local_78 = 0x133333;
      local_74 = 0;
    }
    else if (*(char *)(iVar3 + 0x1fa) == '2') {
      local_80 = 0x2d0;
      local_7c = 0x14;
      local_84 = 0x500;
      local_88 = 0;
      local_78 = 0xc8000;
      local_74 = 0;
    }
  }
  local_48 = 3;
  local_44 = local_88;
  iVar3 = rts_av_create_isp_chn(&local_48);
  if (iVar3 < 0) {
    iVar2 = -0x18;
    rts_log(4,"<%s, %d>fail to create isp chn, ret = %d\n","init_main_stream",0x1f1,iVar3);
  }
  else {
    rts_log(1,"isp chn : %d\n",iVar3);
    local_58 = local_84;
    local_5c = 1;
    local_54 = local_80;
    local_50 = 1;
    local_4c = local_7c;
    iVar2 = rts_av_set_profile(iVar3,&local_5c);
    if (iVar2 == 0) {
      local_2c = rts_av_create_osd_chn();
      if (local_2c < 0) {
        iVar2 = -0x18;
        rts_log(4,"<%s, %d>fail to create osd chn, ret = %d\n","init_main_stream",0x206,local_2c);
      }
      else {
        local_a0 = 0xc;
        local_94 = local_7c << 1;
        local_9c = 0xffffffff;
        local_98 = local_78;
        local_8c = 0;
        local_90 = local_74;
        local_30 = rts_av_create_h264_chn(&local_a0);
        if (local_30 < 0) {
          iVar2 = -0x18;
          rts_log(4,"<%s, %d>fail to create h264 chn, ret = %d\n","init_main_stream",0x214,local_30)
          ;
        }
        else {
          rts_log(1,"h264 chn : %d\n",local_30);
          local_38[0] = local_74;
          iVar4 = rts_av_create_mjpeg_chn(local_38);
          if (iVar4 < 0) {
            iVar2 = -0x18;
            rts_log(4,"<%s, %d>fail to create jpg chn, ret = %d\n","init_main_stream",0x21f,iVar4);
          }
          else {
            rts_log(1,"jpg chn : %d\n",iVar4);
            local_70 = 1;
            local_6c = local_84;
            local_64 = 1;
            local_68 = local_80;
            local_60 = local_7c;
            iVar2 = rts_av_set_profile(iVar4,&local_70);
            if (iVar2 == 0) {
              iVar2 = rts_av_bind(iVar3,local_30);
              if (iVar2 == 0) {
                local_3c = 0;
                iVar2 = rts_av_query_h264_ctrl(local_30,&local_3c);
                if (local_3c != 0) {
                  rts_av_get_h264_ctrl();
                  uVar1 = stdout;
                  if (iVar2 == 0) {
                    *(undefined4 *)(local_3c + 4) = 8;
                    *(undefined4 *)(local_3c + 0xc) = 0x133333;
                    *(undefined4 *)(local_3c + 0x10) = 0xc8000;
                    fwrite("set H264 to CVBR mode.\n",1,0x17,uVar1);
                    rts_av_set_h264_ctrl(local_3c);
                    rts_av_release_h264_ctrl(local_3c);
                  }
                  rts_av_enable_chn(iVar3);
                  rts_av_enable_chn(local_30);
                  rts_av_enable_chn(iVar4);
                  rts_av_start_recv(local_30);
                  rts_av_start_send(iVar4);
                  rts_av_start_recv(iVar4);
                  DAT_00437308 = local_30;
                  DAT_00437310 = local_2c;
                  DAT_004373dc = local_74;
                  DAT_004373e8 = 0;
                  DAT_004373e0 = local_2c;
                  DAT_004373d4 = local_84;
                  DAT_004373d8 = local_80;
                  DAT_00437304 = iVar3;
                  DAT_0043730c = iVar4;
                  memset(&DAT_004374a4,0,0x1d8);
                  pthread_mutex_init(&DAT_0043732c,0);
                  sem_init(&DAT_0043731c,0,0);
                  iVar2 = pthread_create(auStack_40,0,&LAB_004090c0,&DAT_004372fc);
                  if (iVar2 < 0) {
                    printf(&DAT_0042448c,"init_main_stream",0x28a);
                    goto LAB_0040b850;
                  }
                }
                if (iVar2 == 0) {
                  local_3c = 0;
                  local_44 = 1;
                  local_48 = 3;
                  iVar3 = rts_av_create_isp_chn(&local_48);
                  if (iVar3 < 0) {
                    iVar2 = -0x18;
                    rts_log(4,"<%s, %d>fail to create isp chn, ret = %d\n","init_sub_stream",0x2a7,
                            iVar3);
                  }
                  else {
                    rts_log(1,"isp chn : %d\n",iVar3);
                    local_58 = 0x280;
                    local_5c = 1;
                    local_54 = 0x168;
                    local_50 = 1;
                    local_4c = 0x14;
                    iVar2 = rts_av_set_profile(iVar3,&local_5c);
                    if (iVar2 == 0) {
                      local_a0 = 0xc;
                      local_98 = 0x4b000;
                      local_9c = 0xffffffff;
                      local_94 = 0x28;
                      local_8c = 0;
                      local_90 = 0;
                      iVar4 = rts_av_create_h264_chn(&local_a0);
                      if (iVar4 < 0) {
                        iVar2 = -0x18;
                        rts_log(4,"<%s, %d>fail to create h264 chn, ret = %d\n","init_sub_stream",
                                0x2ca,iVar4);
                      }
                      else {
                        rts_log(1,"h264 chn : %d\n",iVar4);
                        local_38[0] = 0;
                        iVar5 = rts_av_create_mjpeg_chn(local_38);
                        if (iVar5 < 0) {
                          iVar2 = -0x18;
                          rts_log(4,"<%s, %d>fail to create jpg chn, ret = %d\n","init_sub_stream",
                                  0x2d4,iVar5);
                        }
                        else {
                          rts_log(1,"jpg chn : %d\n",iVar5);
                          local_6c = 0x280;
                          local_70 = 1;
                          local_68 = 0x168;
                          local_64 = 1;
                          local_60 = 0x14;
                          iVar2 = rts_av_set_profile(iVar5,&local_70);
                          if (iVar2 == 0) {
                            iVar2 = rts_av_bind(iVar3,iVar4);
                            if (iVar2 == 0) {
                              iVar2 = rts_av_query_h264_ctrl(iVar4,&local_3c);
                              if (local_3c != 0) {
                                rts_av_get_h264_ctrl();
                                uVar1 = stdout;
                                if (iVar2 == 0) {
                                  *(undefined4 *)(local_3c + 4) = 8;
                                  *(undefined4 *)(local_3c + 0x18) = 0x2a;
                                  *(undefined4 *)(local_3c + 0xc) = 0x80000;
                                  *(undefined4 *)(local_3c + 0x10) = 0x40000;
                                  fwrite("set H264 to CVBR mode.\n",1,0x17,uVar1);
                                  rts_av_set_h264_ctrl(local_3c);
                                  rts_av_release_h264_ctrl(local_3c);
                                }
                                rts_av_enable_chn(iVar3);
                                rts_av_enable_chn(iVar4);
                                rts_av_enable_chn(iVar5);
                                rts_av_start_recv(iVar4);
                                rts_av_start_send(iVar5);
                                rts_av_start_recv(iVar5);
                                DAT_00436f90 = 0xffffffff;
                                DAT_00436f84 = iVar3;
                                DAT_00436f88 = iVar4;
                                DAT_00436f8c = iVar5;
                                pthread_mutex_init(&DAT_00436fac,0);
                                sem_init(&DAT_00436f9c,0,0);
                                iVar2 = pthread_create(auStack_40,0,&LAB_004090c0,&DAT_00436f7c);
                                if (iVar2 < 0) {
                                  printf(&DAT_0042448c,"init_sub_stream",0x33b);
                                  goto LAB_0040b900;
                                }
                                puts("\n\npthread creat do_isp 1 ok!!!\n");
                              }
                              if (iVar2 == 0) {
                                media_rtl_set_3dnr();
                                ioctl(DAT_00477968,0x20007015,0);
                                puts("###fmy###: out video_init success");
                                return 1;
                              }
                            }
                            else {
                              rts_log(4,"<%s, %d>fail to bind osd and h264, ret %d\n",
                                      "init_sub_stream",0x2f0,iVar2);
                            }
                          }
                          else {
                            rts_log(4,"<%s, %d>set isp profile fail, ret = %d\n","init_sub_stream",
                                    0x2e2,iVar2);
                          }
                        }
                      }
                    }
                    else {
                      rts_log(4,"<%s, %d>set isp profile fail, ret = %d\n","init_sub_stream",0x2b5,
                              iVar2);
                    }
                  }
LAB_0040b900:
                  printf("###fmy: init_sub_stream failed ret %d\n",iVar2);
                  goto LAB_0040b85c;
                }
              }
              else {
                rts_log(4,"<%s, %d>fail to bind isp and h264, ret %d\n","init_main_stream",0x246,
                        iVar2);
              }
            }
            else {
              rts_log(4,"<%s, %d>set isp profile fail, ret = %d\n","init_main_stream",0x22e,iVar2);
            }
          }
        }
      }
    }
    else {
      rts_log(4,"<%s, %d>set isp profile fail, ret = %d\n","init_main_stream",0x1ff,iVar2);
    }
  }
LAB_0040b850:
  printf("###fmy: init_main_stream failed ret %d\n",iVar2);
LAB_0040b85c:
  FUN_004091d0(&DAT_004372fc);
  FUN_004091d0(&DAT_00436f7c);
  rts_av_release();
  puts("###fmy###: out video_init failed");
  return iVar2;
}



// ==== FUN_0040bc78 @ 0040bc78 size=76

void FUN_0040bc78(undefined4 param_1,int param_2)

{
  FUN_0040a2d0(0);
  media_rtl_send_ao_beep(param_1);
  usleep(param_2 * 1000);
  FUN_0040a10c();
  return;
}



// ==== FUN_0040bd34 @ 0040bd34 size=16

undefined4 FUN_0040bd34(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr","ringbuf.c",200,"cb_datalen");
}



// ==== FUN_0040bd88 @ 0040bd88 size=16

uint FUN_0040bd88(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  cb_full();
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert("((void *)0) != pmngr","ringbuf.c",0x8e,"cb_write");
  }
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar5 = param_1[1];
    uVar2 = iVar5 - param_1[2];
    if (iVar5 != param_1[2]) {
      uVar1 = param_1[4];
      if (param_3 <= uVar2) {
        uVar2 = param_3;
      }
      uVar4 = iVar5 - uVar1;
      if ((uVar1 < (uint)param_1[3]) || (uVar2 <= uVar4)) {
        memcpy(iVar3 + uVar1);
        iVar3 = param_1[4];
      }
      else {
        memcpy(iVar3 + uVar1);
        memcpy(*param_1,param_2 + uVar4,uVar2 - uVar4);
        iVar3 = param_1[4];
      }
      if (param_1[1] == 0) {
        trap(0x1c00);
      }
      param_1[2] = param_1[2] + uVar2;
      param_1[4] = (uVar2 + iVar3) % (uint)param_1[1];
      return uVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr->bufptr","ringbuf.c",0x8f,"cb_write");
}



// ==== FUN_0040beec @ 0040beec size=16

uint FUN_0040beec(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  cb_empty();
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert("((void *)0) != pmngr","ringbuf.c",0x5c,"cb_read");
  }
  iVar4 = *param_1;
  if (iVar4 != 0) {
    uVar1 = param_1[2];
    uVar2 = uVar1;
    if (uVar1 != 0) {
      uVar6 = param_1[1];
      iVar3 = param_1[3];
      uVar2 = param_3;
      if (uVar1 < param_3) {
        uVar2 = uVar1;
      }
      uVar5 = uVar6 - iVar3;
      if (param_2 != 0) {
        if (uVar5 < uVar2) {
          param_2 = memcpy(param_2,iVar4 + iVar3,uVar5);
          iVar4 = *param_1;
          param_2 = param_2 + uVar5;
        }
        else {
          iVar4 = iVar4 + iVar3;
        }
        memcpy(param_2,iVar4);
        iVar3 = param_1[3];
        uVar6 = param_1[1];
        uVar1 = param_1[2];
      }
      if (uVar6 == 0) {
        trap(0x1c00);
      }
      param_1[2] = uVar1 - uVar2;
      param_1[3] = (iVar3 + uVar2) % uVar6;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __assert("((void *)0) != pmngr->bufptr","ringbuf.c",0x5d,"cb_read");
}



// ==== FUN_0040c1b8 @ 0040c1b8 size=344

/* WARNING: Removing unreachable block (ram,0x0040c2b4) */

int FUN_0040c1b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = DAT_0043699c / DAT_00436994;
  if (DAT_00436994 == 0) {
    trap(0x1c00);
  }
  if (iVar9 < 1) {
    iVar4 = 0;
    if (DAT_00436998 == 0) {
      trap(0x1c00);
    }
  }
  else {
    iVar6 = 0;
    iVar7 = 0;
    iVar10 = DAT_004369a0 / DAT_00436998;
    if (DAT_00436998 == 0) {
      trap(0x1c00);
    }
    iVar4 = 0;
    iVar1 = DAT_004369a0 * param_3 * iVar9;
    do {
      if (0 < iVar10) {
        iVar8 = 0;
        do {
          pbVar5 = (byte *)(iVar6 + param_1 + param_2 * iVar10 + iVar1 + iVar8);
          pbVar2 = (byte *)(iVar6 + DAT_004377ac + param_2 * iVar10 + iVar1 + iVar8);
          iVar8 = iVar8 + 1;
          iVar3 = (uint)*pbVar5 - (uint)*pbVar2;
          iVar4 = iVar4 + iVar3 * iVar3;
        } while (iVar8 != iVar10);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + DAT_004369a0;
    } while (iVar7 != iVar9);
  }
  if (iVar9 == 0) {
    trap(0x1c00);
  }
  if (DAT_004369a0 / DAT_00436998 == 0) {
    trap(0x1c00);
  }
  return (int)SQRT((double)((iVar4 / iVar9) / (DAT_004369a0 / DAT_00436998)));
}



// ==== FUN_0040c310 @ 0040c310 size=108

int FUN_0040c310(void)

{
  int local_10;
  int local_c;
  
  gettimeofday(&local_10,0);
  return (local_10 - DAT_0043779c) * 1000 + (local_c - DAT_004377a0) / 1000;
}



// ==== FUN_0040c37c @ 0040c37c size=176

void FUN_0040c37c(void)

{
  if (DAT_004377b0 == 0) {
    DAT_004377b0 = malloc(DAT_00436994 * DAT_00436998 * 2);
  }
  if (DAT_004377ac == 0) {
    DAT_004377ac = malloc(DAT_004369a0 * DAT_0043699c);
  }
  if (DAT_004377a8 != 0) {
    return;
  }
  DAT_004377a8 = malloc(DAT_00436984 << 3);
  return;
}



// ==== FUN_0040c504 @ 0040c504 size=124

void FUN_0040c504(int param_1)

{
  FUN_0040c37c();
  if (param_1 != 0) {
    memcpy(DAT_004377ac,param_1,DAT_004369a0 * DAT_0043699c);
    gettimeofday(&DAT_00437790,0);
    return;
  }
  DAT_00437790 = 0;
  DAT_00437794 = 0;
  return;
}



// ==== FUN_0040c580 @ 0040c580 size=1500

int * FUN_0040c580(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined1 auStack_810 [2000];
  int local_40;
  int local_3c;
  int local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  
  FUN_0040c37c();
  iVar4 = DAT_00436998;
  local_38 = DAT_00436994;
  if (DAT_00436994 < 1) {
    iVar13 = 0;
    puVar8 = (undefined1 *)0x0;
    local_3c = 0;
    local_40 = 0;
    iVar10 = DAT_00436984;
    iVar3 = DAT_00436994;
    iVar11 = DAT_00436998;
    puVar1 = DAT_004377a8;
  }
  else {
    iVar9 = 0;
    iVar13 = 0;
    local_40 = 0;
    puVar8 = (undefined1 *)0x0;
    local_3c = 0;
    do {
      if (0 < iVar4) {
        iVar10 = 0;
        do {
          while (((iVar9 != 0 && (iVar10 != 0)) && (DAT_00436998 + -1 != iVar10))) {
            sVar2 = FUN_0040c1b8(param_3,iVar10,iVar9);
            local_34 = (undefined1 *)(int)sVar2;
            FUN_0040c37c();
            *(short *)(DAT_004377b0 + (iVar10 + iVar9 * DAT_00436998) * 2) = (short)local_34;
            if ((int)puVar8 < (int)local_34) {
              puVar8 = local_34;
              local_40 = iVar9;
              local_3c = iVar10;
            }
            iVar10 = iVar10 + 1;
            iVar13 = iVar13 + (int)local_34;
            if (iVar10 == iVar4) goto LAB_0040c6c0;
          }
          FUN_0040c37c();
          iVar3 = iVar10 + iVar9 * DAT_00436998;
          iVar10 = iVar10 + 1;
          *(undefined2 *)(DAT_004377b0 + iVar3 * 2) = 0;
        } while (iVar10 != iVar4);
      }
LAB_0040c6c0:
      iVar9 = iVar9 + 1;
      iVar10 = DAT_00436984;
      iVar3 = DAT_00436994;
      iVar11 = DAT_00436998;
      puVar1 = DAT_004377a8;
    } while (iVar9 != local_38);
  }
  DAT_00436984 = iVar10;
  DAT_00436994 = iVar3;
  DAT_00436998 = iVar11;
  DAT_004377a8 = puVar1;
  if (1 < iVar10) {
    iVar4 = 0;
    puVar15 = puVar1;
    do {
      iVar4 = iVar4 + 1;
      *puVar15 = puVar15[2];
      puVar15[1] = puVar15[3];
      puVar15 = puVar15 + 2;
    } while (iVar4 != iVar10 + -1);
  }
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  puVar1[(iVar10 + 0x1fffffff) * 2] = local_3c;
  (puVar1 + (iVar10 + 0x1fffffff) * 2)[1] = local_40;
  *param_4 = 0;
  iVar4 = DAT_00436984 + 0x1ffffffd;
  iVar13 = (iVar13 / iVar3) / iVar11;
  if (iVar11 == 0) {
    trap(0x1c00);
  }
  iVar9 = (puVar1 + iVar4 * 2 + 4)[1];
  iVar14 = (puVar1 + iVar4 * 2 + 2)[1];
  iVar11 = puVar1[iVar4 * 2];
  iVar12 = puVar1[iVar4 * 2 + 4];
  iVar3 = (puVar1 + iVar4 * 2)[1];
  iVar10 = puVar1[iVar4 * 2 + 2];
  iVar4 = 1;
  if (iVar13 != 0) {
    iVar4 = iVar13;
  }
  iVar5 = FUN_0040c310();
  iVar13 = iVar9 - iVar14;
  if (iVar13 < 0) {
    iVar13 = -iVar13;
  }
  iVar7 = DAT_00436994 / 2;
  if (iVar7 < iVar13) {
LAB_0040c800:
    if ((iVar12 != 0) && (DAT_00436998 + -1 != iVar12)) goto LAB_0040c8e0;
  }
  else {
    iVar6 = iVar12 - iVar10;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (DAT_00436998 / 2 < iVar6) goto LAB_0040c800;
  }
  if (((int)puVar8 <= iVar4 * DAT_0043698c) || ((int)puVar8 <= DAT_00436988)) {
    *param_4 = 0;
    goto LAB_0040c8e0;
  }
  iVar6 = DAT_00436998 / 3 + 1;
  if (((iVar6 < iVar12) || (iVar6 < iVar10)) || ((iVar6 < iVar11 || (iVar7 <= iVar13)))) {
    iVar6 = DAT_00436998 - DAT_00436998 / 3;
    if ((((iVar6 <= iVar12) && (iVar6 <= iVar10)) && (iVar6 <= iVar11)) && (iVar13 < iVar7)) {
      if ((DAT_004377a4 == 1) && (iVar5 < DAT_00436980)) goto LAB_0040c9dc;
      *param_4 = 1;
      DAT_004377a4 = 2;
      goto LAB_0040ca64;
    }
    if (DAT_004377a4 == 5) goto LAB_0040c9e4;
LAB_0040c980:
    if (*param_4 != 1) goto LAB_0040c8e0;
  }
  else if ((DAT_004377a4 == 2) && (iVar5 < DAT_00436980)) {
LAB_0040c9dc:
    DAT_004377a4 = 5;
LAB_0040c9e4:
    iVar13 = DAT_00436998 / 5;
    if (iVar13 < iVar12) {
      if (iVar13 >= iVar10) {
LAB_0040ca0c:
        if (iVar11 <= iVar13) goto LAB_0040cb1c;
      }
      iVar13 = DAT_00436998 - DAT_00436998 / 5;
      if (iVar12 < iVar13) {
        if (iVar10 < iVar13) goto LAB_0040c980;
LAB_0040ca48:
        if (iVar11 < iVar13) goto LAB_0040c980;
      }
      else if (iVar10 < iVar13) goto LAB_0040ca48;
      *param_4 = 1;
      DAT_004377a4 = 4;
    }
    else {
      if (iVar13 < iVar10) goto LAB_0040ca0c;
LAB_0040cb1c:
      *param_4 = 1;
      DAT_004377a4 = 3;
    }
  }
  else {
    DAT_004377a4 = 1;
    *param_4 = 1;
  }
LAB_0040ca64:
  DAT_00437798 = DAT_00437798 + '\x01';
  local_30 = &DAT_00430000;
  local_34 = &DAT_00430000;
  gettimeofday(&DAT_0043779c,0);
  uVar16 = (int)(char)local_34[0x7798] & 0x80000001;
  if ((int)uVar16 < 0) {
    uVar16 = (uVar16 - 1 | 0xfffffffe) + 1;
  }
  if ((char)uVar16 == '\x01') {
    sprintf(auStack_810,
            "meanSqr[%d] gray frm[%d], average:%d, x3-y3:%d-%d, x2-y2:%d-%d, x1-y1:%d-%d , time:%ld, max:%d, DIR:%d\n"
            ,(int)(char)local_34[0x7798],param_2,iVar4,iVar12,iVar9,iVar10,iVar14,iVar11,iVar3,
            *(undefined4 *)(local_30 + 0x779c),puVar8,DAT_004377a4);
  }
LAB_0040c8e0:
  *param_1 = local_3c;
  param_1[1] = local_40;
  return param_1;
}



// ==== FUN_0040cb5c @ 0040cb5c size=1516

int * FUN_0040cb5c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined1 auStack_808 [2000];
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  
  if (param_4 == 1) {
    FUN_0040c580();
    return param_1;
  }
  FUN_0040c37c();
  iVar10 = DAT_00436998;
  local_30 = DAT_00436994;
  if (DAT_00436994 < 1) {
    local_34 = 0;
    iVar14 = 0;
    local_38 = 0;
    iVar8 = 0;
  }
  else {
    iVar12 = 0;
    iVar14 = 0;
    local_38 = 0;
    iVar8 = 0;
    local_34 = 0;
    do {
      if (0 < iVar10) {
        iVar9 = 0;
        do {
          sVar2 = FUN_0040c1b8(param_3,iVar9,iVar12);
          FUN_0040c37c();
          iVar11 = (int)sVar2;
          iVar14 = iVar14 + iVar11;
          *(short *)(DAT_004377b0 + (iVar9 + iVar12 * DAT_00436998) * 2) = sVar2;
          if (iVar8 < iVar11) {
            iVar8 = iVar11;
            local_38 = iVar12;
            local_34 = iVar9;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar10);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != local_30);
  }
  puVar1 = DAT_004377a8;
  iVar9 = DAT_00436998;
  iVar12 = DAT_00436994;
  iVar10 = DAT_00436984;
  if (1 < DAT_00436984) {
    iVar4 = DAT_00436984 + -1;
    iVar11 = 0;
    puVar15 = DAT_004377a8;
    do {
      iVar11 = iVar11 + 1;
      *puVar15 = puVar15[2];
      puVar15[1] = puVar15[3];
      puVar15 = puVar15 + 2;
    } while (iVar11 != iVar4);
  }
  if (iVar12 == 0) {
    trap(0x1c00);
  }
  puVar1[(iVar10 + 0x1fffffff) * 2] = local_34;
  (puVar1 + (iVar10 + 0x1fffffff) * 2)[1] = local_38;
  *param_5 = 0;
  iVar11 = DAT_00436984 + 0x1ffffffd;
  iVar10 = puVar1[iVar11 * 2];
  local_30 = (puVar1 + iVar11 * 2)[1];
  iVar14 = (iVar14 / iVar12) / iVar9;
  if (iVar9 == 0) {
    trap(0x1c00);
  }
  iVar13 = (puVar1 + iVar11 * 2 + 4)[1];
  iVar4 = (puVar1 + iVar11 * 2 + 2)[1];
  iVar9 = puVar1[iVar11 * 2 + 4];
  iVar11 = puVar1[iVar11 * 2 + 2];
  iVar12 = 1;
  if (iVar14 != 0) {
    iVar12 = iVar14;
  }
  iVar3 = FUN_0040c310();
  iVar14 = iVar13 - iVar4;
  if (iVar14 < 0) {
    iVar14 = -iVar14;
  }
  iVar5 = DAT_00436994 / 2;
  if (iVar5 < iVar14) {
LAB_0040cd58:
    if ((iVar9 != 0) && (DAT_00436998 + -1 != iVar9)) goto LAB_0040cd74;
  }
  else {
    iVar6 = iVar9 - iVar11;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (DAT_00436998 / 2 < iVar6) goto LAB_0040cd58;
  }
  if ((iVar8 <= iVar12 * DAT_0043698c) || (iVar8 <= DAT_00436988)) {
    *param_5 = 0;
    goto LAB_0040cd74;
  }
  if ((((DAT_00436998 / 3 + 1 < iVar9) || (iVar11 <= iVar9)) || (iVar10 < iVar11)) ||
     (iVar5 <= iVar14)) {
LAB_0040cef0:
    if (((DAT_00436998 - DAT_00436998 / 3 <= iVar9) && (iVar11 < iVar9)) &&
       ((iVar10 <= iVar11 && (iVar14 < iVar5)))) {
      iVar5 = iVar9 - iVar11;
      iVar14 = DAT_00436998 + 3;
      if (-1 < DAT_00436998) {
        iVar14 = DAT_00436998;
      }
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 <= iVar14 >> 2) {
        if ((DAT_004377a4 == 1) && (iVar3 < DAT_00436980)) goto LAB_0040d104;
        *param_5 = 1;
        DAT_004377a4 = 2;
        goto LAB_0040cfcc;
      }
    }
    iVar14 = DAT_00436998 / 5;
    if (((iVar14 < iVar9) || (iVar14 < iVar11)) || (iVar14 < iVar10)) {
      iVar14 = DAT_00436998 - DAT_00436998 / 5;
      if (((iVar9 < iVar14) || (iVar11 < iVar14)) || (iVar10 < iVar14)) {
        iVar14 = *param_5;
        goto LAB_0040d0bc;
      }
      *param_5 = 1;
      DAT_004377a4 = 4;
    }
    else {
      *param_5 = 1;
      DAT_004377a4 = 3;
    }
  }
  else {
    iVar6 = iVar9 - iVar11;
    iVar7 = DAT_00436998 + 3;
    if (-1 < DAT_00436998) {
      iVar7 = DAT_00436998;
    }
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar7 >> 2 < iVar6) goto LAB_0040cef0;
    if ((DAT_004377a4 == 2) && (iVar3 < DAT_00436980)) {
LAB_0040d104:
      DAT_004377a4 = 5;
      iVar14 = *param_5;
LAB_0040d0bc:
      if (iVar14 != 1) goto LAB_0040cd74;
    }
    else {
      DAT_004377a4 = 1;
      *param_5 = 1;
    }
  }
LAB_0040cfcc:
  DAT_00437798 = DAT_00437798 + '\x01';
  local_2c = &DAT_00430000;
  gettimeofday(&DAT_0043779c,0);
  uVar16 = (int)DAT_00437798 & 0x80000001;
  if ((int)uVar16 < 0) {
    uVar16 = (uVar16 - 1 | 0xfffffffe) + 1;
  }
  if ((char)uVar16 == '\x01') {
    sprintf(auStack_808,
            "meanSqr[%d] day frm[%d], average:%d, x3-y3:%d-%d, x2-y2:%d-%d, x1-y1:%d-%d , time:%ld, max:%d, DIR:%d\n"
            ,(int)DAT_00437798,param_2,iVar12,iVar9,iVar13,iVar11,iVar4,iVar10,local_30,
            *(undefined4 *)(local_2c + 0x779c),iVar8,DAT_004377a4);
  }
LAB_0040cd74:
  *param_1 = local_34;
  param_1[1] = local_38;
  return param_1;
}



// ==== FUN_0040d148 @ 0040d148 size=144

void FUN_0040d148(void)

{
  if (DAT_004377d8 == 0) {
    DAT_004377d8 = malloc(DAT_00436994 * DAT_00436998 * 4);
  }
  if (DAT_004377d4 != 0) {
    return;
  }
  DAT_004377d4 = malloc(DAT_00436994 * DAT_00436998 * 2);
  return;
}



// ==== FUN_0040d1d8 @ 0040d1d8 size=128

int FUN_0040d1d8(int param_1,int param_2,int param_3)

{
  FUN_0040d148();
  return (int)*(short *)(DAT_004377d8 +
                        (param_3 + DAT_00436998 * DAT_00436994 * param_1 + DAT_00436998 * param_2) *
                        2);
}



// ==== FUN_0040d258 @ 0040d258 size=140

void FUN_0040d258(int param_1,int param_2,int param_3,undefined2 param_4)

{
  FUN_0040d148();
  *(undefined2 *)
   (DAT_004377d8 + (param_3 + DAT_00436998 * DAT_00436994 * param_1 + DAT_00436998 * param_2) * 2) =
       param_4;
  return;
}



// ==== FUN_0040d2e4 @ 0040d2e4 size=1024

int * FUN_0040d2e4(int *param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int local_30;
  int local_2c;
  
  if (DAT_004377c0 == 0) {
    FUN_0040cb5c();
    return param_1;
  }
  iVar3 = DAT_00436994;
  if (0 < DAT_00436994) {
    uVar7 = param_2 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    iVar10 = 0;
    do {
      if (0 < DAT_00436998) {
        iVar12 = DAT_0043699c / iVar3;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        iVar8 = 0;
        if (iVar12 < 1) goto LAB_0040d44c;
        do {
          iVar6 = 0;
          iVar3 = 0;
          iVar13 = DAT_004369a0 / DAT_00436998;
          if (DAT_00436998 == 0) {
            trap(0x1c00);
          }
          pbVar5 = (byte *)(param_3 + DAT_004369a0 * iVar12 * iVar10 + iVar13 * iVar8);
          do {
            if (0 < iVar13) {
              pbVar11 = pbVar5;
              do {
                bVar1 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                iVar3 = iVar3 + (uint)bVar1;
              } while (pbVar5 + iVar13 != pbVar11);
            }
            iVar6 = iVar6 + 1;
            pbVar5 = pbVar5 + DAT_004369a0;
            iVar4 = iVar8;
          } while (iVar6 != iVar12);
          while( true ) {
            if (iVar13 == 0) {
              trap(0x1c00);
            }
            iVar8 = iVar4 + 1;
            if (iVar12 == 0) {
              trap(0x1c00);
            }
            FUN_0040d258(uVar7,iVar10,iVar4,(iVar3 / iVar13) / iVar12);
            iVar3 = DAT_00436994;
            if (DAT_00436998 <= iVar8) goto LAB_0040d46c;
            iVar12 = DAT_0043699c / DAT_00436994;
            if (DAT_00436994 == 0) {
              trap(0x1c00);
            }
            if (0 < iVar12) break;
LAB_0040d44c:
            iVar3 = 0;
            iVar13 = DAT_004369a0 / DAT_00436998;
            iVar4 = iVar8;
            if (DAT_00436998 == 0) {
              trap(0x1c00);
            }
          }
        } while( true );
      }
LAB_0040d46c:
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar3);
    if (0 < iVar3) {
      uVar9 = param_2 - 1 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      iVar12 = 0;
      iVar10 = 0;
      local_30 = 0;
      iVar8 = 0;
      local_2c = 0;
      do {
        iVar3 = 0;
        if (0 < DAT_00436998) {
          do {
            iVar6 = FUN_0040d1d8(uVar7,iVar12,iVar3);
            iVar13 = FUN_0040d1d8(uVar9,iVar12,iVar3);
            iVar6 = iVar6 - iVar13;
            iVar13 = -iVar6;
            if (-1 < iVar6) {
              iVar13 = iVar6;
            }
            iVar4 = iVar13;
            if ((param_4 == 1) && (iVar13 = iVar6, iVar4 = -iVar6, -1 < iVar6)) {
              iVar4 = iVar6;
            }
            iVar8 = iVar8 + iVar13;
            if (iVar10 < iVar4) {
              iVar10 = iVar4;
              local_30 = iVar12;
              local_2c = iVar3;
            }
            FUN_0040d148();
            iVar13 = iVar3 + iVar12 * DAT_00436998;
            iVar3 = iVar3 + 1;
            bVar2 = iVar3 < DAT_00436998;
            *(short *)(DAT_004377d4 + iVar13 * 2) = (short)iVar6;
          } while (bVar2);
        }
        iVar12 = iVar12 + 1;
        iVar3 = DAT_00436994;
      } while (iVar12 < DAT_00436994);
      goto LAB_0040d584;
    }
  }
  local_2c = 0;
  iVar10 = 0;
  local_30 = 0;
  iVar8 = 0;
LAB_0040d584:
  DAT_004377c4 = DAT_004377cc;
  DAT_004377c8 = DAT_004377d0;
  DAT_004377cc = local_2c;
  DAT_004377d0 = local_30;
  if (param_5 != (uint *)0x0) {
    if (iVar10 < 5) {
      uVar7 = 0;
    }
    else {
      if (DAT_00436998 == 0) {
        trap(0x1c00);
      }
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      uVar7 = (uint)((((iVar8 / DAT_00436998) / iVar3) * DAT_00436990) / 100 < iVar10);
    }
    *param_5 = uVar7;
  }
  *param_1 = local_2c;
  param_1[1] = local_30;
  return param_1;
}



// ==== FUN_0040d818 @ 0040d818 size=224

int FUN_0040d818(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_4 + -3;
  if (iVar3 <= param_4 + 3) {
    iVar4 = 0;
    iVar1 = 0;
    param_1 = param_1 + (param_3 * iVar3 + param_5) * 4;
    do {
      if (((-1 < iVar3) && (iVar3 < param_2)) &&
         (iVar2 = param_1, iVar5 = param_5 + -3, param_5 + -3 <= param_5 + 3)) {
        do {
          if (((-1 < iVar5) && (iVar5 < param_3)) && (DAT_004369b4 <= *(int *)(iVar2 + -0xc))) {
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + *(int *)(iVar2 + -0xc);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar5 != param_5 + 4);
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + param_3 * 4;
    } while (iVar3 != param_4 + 4);
    if (iVar1 != 0) {
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      *param_6 = iVar4 / iVar1;
      return iVar1;
    }
  }
  return 0;
}



// ==== FUN_0040d8f8 @ 0040d8f8 size=344

int FUN_0040d8f8(int *param_1,int param_2,int param_3,int *param_4,int *param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_38 [2];
  int local_30;
  
  if (param_2 < 1) {
    return 0;
  }
  local_30 = param_3 << 2;
  iVar6 = 0;
  iVar2 = 0;
  piVar4 = param_1;
  do {
    if (0 < param_3) {
      iVar1 = 0;
      iVar3 = iVar2;
      piVar5 = piVar4;
      do {
        while ((iVar2 = *piVar5, piVar5 = piVar5 + 1, iVar2 < DAT_004369b4 ||
               (iVar2 = FUN_0040d818(param_1,param_2,param_3,iVar6,iVar1,local_38), iVar2 <= iVar3))
              ) {
          iVar1 = iVar1 + 1;
          iVar2 = iVar3;
          if (iVar1 == param_3) goto LAB_0040d9d8;
        }
        *param_4 = iVar6;
        *param_5 = iVar1;
        iVar1 = iVar1 + 1;
        *param_6 = local_38[0];
        iVar3 = iVar2;
      } while (iVar1 != param_3);
    }
LAB_0040d9d8:
    iVar6 = iVar6 + 1;
    piVar4 = (int *)((int)piVar4 + local_30);
    if (iVar6 == param_2) {
      return iVar2;
    }
  } while( true );
}



// ==== FUN_0040da50 @ 0040da50 size=228

bool FUN_0040da50(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8)

{
  if ((((DAT_00437810 == param_6) && (param_7 == DAT_00437814)) && (DAT_00437810 - 0xcU < 0x11)) &&
     (param_8 - DAT_00437818 < 600)) {
    DAT_004377fc = param_1;
    DAT_00437800 = param_2;
    DAT_00437804 = param_3;
    DAT_00437808 = param_4;
    DAT_0043780c = param_5;
    DAT_00437814 = param_7;
    DAT_00437818 = param_8;
    return true;
  }
  DAT_004377fc = param_1;
  DAT_00437800 = param_2;
  DAT_00437804 = param_3;
  DAT_00437808 = param_4;
  DAT_0043780c = param_5;
  DAT_00437810 = param_6;
  DAT_00437814 = param_7;
  DAT_00437818 = param_8;
  if (param_4 < 0x30) {
    return false;
  }
  return param_2 < 100;
}



// ==== FUN_0040e2f8 @ 0040e2f8 size=2132

/* WARNING: Control flow encountered bad instruction data */

void FUN_0040e2f8(int *param_1,short *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int local_70;
  
  iVar15 = param_5[1];
  iVar28 = *param_5;
  if (iVar15 == 1) {
    piVar12 = param_1;
    do {
      sVar4 = *param_2;
      piVar13 = piVar12 + 1;
      sVar2 = param_2[1];
      param_2 = (short *)((int)param_2 + param_3 * 4 * param_4);
      *(short *)piVar12 = sVar4;
      *(short *)((int)piVar12 + 2) = sVar2;
      piVar12 = piVar13;
    } while (piVar13 != param_1 + iVar28 * iVar15);
  }
  else {
    piVar12 = param_1;
    do {
      piVar13 = piVar12 + iVar15;
      FUN_0040e2f8(piVar12,param_2,iVar28 * param_3,param_4,param_5 + 2,param_6);
      piVar12 = piVar13;
      param_2 = (short *)((int)param_2 + param_3 * 4 * param_4);
    } while (piVar13 != param_1 + iVar28 * iVar15);
  }
  if (iVar28 == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar28 < 4) {
    if (iVar28 == 2) {
      param_6 = param_6 + 0x42;
      piVar12 = param_1 + iVar15;
      do {
        iVar15 = iVar15 + -1;
        *(short *)param_1 = (short)((short)*param_1 * 0x3fff + 0x4000 >> 0xf);
        *(short *)((int)param_1 + 2) =
             (short)(*(short *)((int)param_1 + 2) * 0x3fff + 0x4000 >> 0xf);
        iVar26 = (short)*piVar12 * 0x3fff + 0x4000 >> 0xf;
        iVar27 = *(short *)((int)piVar12 + 2) * 0x3fff + 0x4000 >> 0xf;
        *(short *)piVar12 = (short)iVar26;
        *(short *)((int)piVar12 + 2) = (short)iVar27;
        iVar28 = *param_6;
        sVar4 = *(short *)((int)param_6 + 2);
        param_6 = param_6 + param_3;
        sVar2 = (short)((iVar26 * (short)iVar28 - iVar27 * sVar4) + 0x4000 >> 0xf);
        *(short *)piVar12 = (short)*param_1 - sVar2;
        sVar4 = (short)(iVar26 * sVar4 + iVar27 * (short)iVar28 + 0x4000 >> 0xf);
        *(short *)((int)piVar12 + 2) = *(short *)((int)param_1 + 2) - sVar4;
        *(short *)param_1 = sVar2 + (short)*param_1;
        *(short *)((int)param_1 + 2) = sVar4 + *(short *)((int)param_1 + 2);
        piVar12 = piVar12 + 1;
        param_1 = param_1 + 1;
      } while (iVar15 != 0);
      return;
    }
LAB_0040f0a8:
    iVar27 = *param_6;
    piVar12 = (int *)malloc(iVar28 * 4);
    if (0 < iVar15) {
      local_70 = 0;
      iVar26 = 0;
      do {
        if (0 < iVar28) {
          piVar13 = piVar12;
          piVar14 = param_1;
          if (iVar28 == 0) {
            trap(0x1c00);
          }
          do {
            piVar11 = piVar13 + 1;
            iVar17 = *piVar14;
            *(short *)piVar13 = (short)((int)(short)iVar17 * (0x7fff / iVar28) + 0x4000 >> 0xf);
            *(short *)((int)piVar13 + 2) =
                 (short)((iVar17 >> 0x10) * (0x7fff / iVar28) + 0x4000 >> 0xf);
            piVar13 = piVar11;
            piVar14 = piVar14 + iVar15;
          } while (piVar11 != piVar12 + iVar28);
          iVar30 = *piVar12;
          iVar25 = 0;
          piVar13 = param_1;
          iVar17 = local_70;
          do {
            *piVar13 = iVar30;
            if (iVar28 != 1) {
              iVar21 = (int)(short)*piVar13;
              iVar18 = (int)*(short *)((int)piVar13 + 2);
              iVar29 = 0;
              piVar14 = piVar12;
              do {
                iVar29 = iVar17 + iVar29;
                piVar11 = piVar14 + 1;
                if (iVar27 <= iVar29) {
                  iVar29 = iVar29 - iVar27;
                }
                iVar19 = *piVar11;
                iVar23 = (int)(short)param_6[iVar29 + 0x42];
                iVar24 = (int)*(short *)((int)(param_6 + iVar29 + 0x42) + 2);
                sVar4 = *(short *)((int)piVar14 + 6);
                iVar22 = ((((short)iVar19 * iVar23 - sVar4 * iVar24) + 0x4000 >> 0xf) + iVar21) *
                         0x10000;
                iVar21 = iVar22 >> 0x10;
                *(short *)piVar13 = (short)((uint)iVar22 >> 0x10);
                iVar19 = (((short)iVar19 * iVar24 + iVar23 * sVar4 + 0x4000 >> 0xf) + iVar18) *
                         0x10000;
                iVar18 = iVar19 >> 0x10;
                *(short *)((int)piVar13 + 2) = (short)((uint)iVar19 >> 0x10);
                piVar14 = piVar11;
              } while (piVar11 != piVar12 + iVar28 + -1);
            }
            iVar25 = iVar25 + 1;
            piVar13 = piVar13 + iVar15;
            iVar17 = iVar17 + param_3 * iVar15;
          } while (iVar25 != iVar28);
        }
        iVar26 = iVar26 + 1;
        param_1 = param_1 + 1;
        local_70 = local_70 + param_3;
      } while (iVar26 != iVar15);
    }
    free(piVar12);
    return;
  }
  piVar12 = param_6 + 0x42;
  if (iVar28 == 4) {
    piVar16 = param_1 + iVar15;
    iVar28 = param_6[1];
    piVar11 = piVar16 + iVar15;
    piVar20 = piVar11 + iVar15;
    piVar13 = piVar12;
    piVar14 = piVar12;
    do {
      *(short *)param_1 = (short)((short)*param_1 * 0x1fff + 0x4000 >> 0xf);
      *(short *)((int)param_1 + 2) = (short)(*(short *)((int)param_1 + 2) * 0x1fff + 0x4000 >> 0xf);
      *(short *)piVar16 = (short)((short)*piVar16 * 0x1fff + 0x4000 >> 0xf);
      *(short *)((int)piVar16 + 2) = (short)(*(short *)((int)piVar16 + 2) * 0x1fff + 0x4000 >> 0xf);
      *(short *)piVar11 = (short)((short)*piVar11 * 0x1fff + 0x4000 >> 0xf);
      *(short *)((int)piVar11 + 2) = (short)(*(short *)((int)piVar11 + 2) * 0x1fff + 0x4000 >> 0xf);
      iVar29 = (short)*piVar20 * 0x1fff + 0x4000 >> 0xf;
      iVar30 = *(short *)((int)piVar20 + 2) * 0x1fff + 0x4000 >> 0xf;
      *(short *)piVar20 = (short)iVar29;
      *(short *)((int)piVar20 + 2) = (short)iVar30;
      iVar27 = *piVar14;
      iVar26 = *piVar12;
      sVar4 = *(short *)((int)piVar12 + 2);
      piVar12 = piVar12 + param_3;
      iVar17 = *piVar16;
      iVar25 = *piVar13;
      sVar2 = *(short *)((int)piVar14 + 2);
      piVar14 = piVar14 + param_3 * 3;
      psVar1 = (short *)((int)piVar13 + 2);
      piVar13 = piVar13 + param_3 * 2;
      sVar3 = *(short *)((int)piVar16 + 2);
      sVar7 = (short)(((int)(short)*piVar11 * (int)(short)iVar25 -
                      (int)*(short *)((int)piVar11 + 2) * (int)*psVar1) + 0x4000 >> 0xf);
      sVar9 = (short)((int)(short)*piVar11 * (int)*psVar1 +
                      (int)(short)iVar25 * (int)*(short *)((int)piVar11 + 2) + 0x4000 >> 0xf);
      sVar5 = sVar7 + (short)*param_1;
      sVar7 = (short)*param_1 - sVar7;
      *(short *)param_1 = sVar5;
      sVar8 = (short)(((int)(short)iVar17 * (int)(short)iVar26 - (int)sVar3 * (int)sVar4) + 0x4000
                     >> 0xf);
      sVar6 = sVar9 + *(short *)((int)param_1 + 2);
      sVar10 = (short)((iVar29 * (short)iVar27 - iVar30 * sVar2) + 0x4000 >> 0xf);
      sVar3 = (short)((int)(short)iVar17 * (int)sVar4 + (int)(short)iVar26 * (int)sVar3 + 0x4000 >>
                     0xf);
      sVar4 = sVar10 + sVar8;
      sVar8 = sVar8 - sVar10;
      sVar9 = *(short *)((int)param_1 + 2) - sVar9;
      *(short *)((int)param_1 + 2) = sVar6;
      sVar10 = (short)(iVar29 * sVar2 + iVar30 * (short)iVar27 + 0x4000 >> 0xf);
      *(short *)piVar11 = sVar5 - sVar4;
      sVar2 = sVar10 + sVar3;
      sVar3 = sVar3 - sVar10;
      *(short *)((int)piVar11 + 2) = sVar6 - sVar2;
      *(short *)param_1 = sVar4 + (short)*param_1;
      *(short *)((int)param_1 + 2) = sVar2 + *(short *)((int)param_1 + 2);
      if (iVar28 == 0) {
        *(short *)piVar16 = sVar3 + sVar7;
        *(short *)((int)piVar16 + 2) = sVar9 - sVar8;
        *(short *)piVar20 = sVar7 - sVar3;
        *(short *)((int)piVar20 + 2) = sVar8 + sVar9;
      }
      else {
        *(short *)piVar16 = sVar7 - sVar3;
        *(short *)((int)piVar16 + 2) = sVar8 + sVar9;
        *(short *)piVar20 = sVar3 + sVar7;
        *(short *)((int)piVar20 + 2) = sVar9 - sVar8;
      }
      iVar15 = iVar15 + -1;
      param_1 = param_1 + 1;
      piVar16 = piVar16 + 1;
      piVar11 = piVar11 + 1;
      piVar20 = piVar20 + 1;
    } while (iVar15 != 0);
  }
  else {
    if (iVar28 != 5) goto LAB_0040f0a8;
    if (0 < iVar15) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// ==== FUN_0040f27c @ 0040f27c size=588

/* WARNING: Removing unreachable block (ram,0x0040f3a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0040f27c(int param_1,int param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 in_f0_1;
  undefined4 uVar8;
  double dVar6;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar8 = (undefined4)((ulonglong)in_f0_1 >> 0x20);
  uVar2 = (param_1 + 0x42) * 4;
  if (param_4 == (uint *)0x0) {
    param_3 = (int *)malloc();
  }
  else {
    if ((param_3 != (int *)0x0) && (*param_4 < uVar2)) {
      param_3 = (int *)0x0;
    }
    *param_4 = uVar2;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = param_1;
    param_3[1] = param_2;
    if (param_1 < 1) {
      dVar6 = (double)CONCAT44(uVar8,param_1);
      dVar11 = (double)param_1;
    }
    else {
      dVar11 = (double)param_1;
      iVar4 = 0;
      piVar3 = param_3;
      dVar10 = _DAT_00424d50;
      dVar9 = DAT_00424d48;
      dVar12 = DAT_00424d40;
      do {
        iVar5 = iVar4 + 1;
        dVar6 = ((double)iVar4 * dVar12) / dVar11;
        uVar2 = (uint)((ulonglong)dVar6 >> 0x20);
        if (param_2 != 0) {
          uVar2 = uVar2 ^ 0x80000000;
        }
        uVar8 = SUB84(dVar6,0);
        cos(CONCAT44(uVar2,uVar8));
        dVar6 = dVar6 * dVar9;
        floor(dVar6 + dVar10);
        dVar7 = (double)CONCAT44((int)dVar6,SUB84(dVar6,0));
        *(short *)(piVar3 + 0x42) = (short)(int)dVar6;
        sin(CONCAT44(uVar2,uVar8));
        dVar7 = dVar7 * dVar9;
        floor(dVar7 + dVar10);
        dVar6 = (double)CONCAT44((int)dVar7,SUB84(dVar7,0));
        *(short *)((int)piVar3 + 0x10a) = (short)(int)dVar7;
        iVar4 = iVar5;
        piVar3 = piVar3 + 1;
      } while (iVar5 != param_1);
    }
    piVar3 = param_3 + 2;
    floor(SQRT(dVar11));
    dVar10 = DAT_00424d38;
    dVar11 = DAT_00424d30;
    iVar4 = 4;
    do {
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      while (param_1 % iVar4 == 0) {
        param_1 = param_1 / iVar4;
        piVar1 = piVar3 + 2;
        *piVar3 = iVar4;
        piVar3[1] = param_1;
        if (param_1 < 2) {
          return param_3;
        }
        piVar3 = piVar1;
        if (iVar4 == 0) {
          trap(0x1c00);
        }
      }
      if (iVar4 == 2) {
        iVar5 = 3;
        dVar9 = dVar10;
      }
      else {
        iVar5 = iVar4 + 2;
        if (iVar4 == 4) {
          iVar5 = 2;
          dVar9 = dVar11;
        }
        else {
          dVar6 = (double)CONCAT44(iVar5,SUB84(dVar6,0));
          dVar9 = (double)iVar5;
        }
      }
      iVar4 = param_1;
      if (dVar9 <= dVar6) {
        iVar4 = iVar5;
      }
    } while( true );
  }
  return (int *)0x0;
}



// ==== FUN_0040f4c8 @ 0040f4c8 size=192

void FUN_0040f4c8(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 != param_3) {
    FUN_0040e2f8(param_3,param_2,1,param_4,param_1 + 2,param_1);
    return;
  }
  uVar1 = malloc(*param_1 << 2);
  FUN_0040e2f8(uVar1,param_2,1,param_4,param_1 + 2,param_1);
  memcpy(param_2,uVar1,*param_1 << 2);
  free(uVar1);
  return;
}



// ==== FUN_0040f588 @ 0040f588 size=12

void FUN_0040f588(void)

{
  FUN_0040f4c8();
  return;
}



// ==== FUN_0040f594 @ 0040f594 size=528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0040f594(uint param_1,int param_2,int *param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int local_58 [2];
  
  iVar4 = (int)param_1 >> 1;
  if ((param_1 & 1) == 0) {
    FUN_0040f27c(iVar4,param_2,0,local_58);
    uVar2 = local_58[0] + 0xc + ((iVar4 * 3) / 2) * 4;
    if (param_4 == (uint *)0x0) {
      param_3 = (int *)malloc();
    }
    else {
      uVar7 = *param_4;
      *param_4 = uVar2;
      if (uVar7 < uVar2) {
        param_3 = (int *)0x0;
      }
    }
    piVar3 = param_3 + 3;
    if (param_3 == (int *)0x0) {
      param_3 = (int *)0x0;
    }
    else {
      param_3[1] = (int)piVar3 + local_58[0];
      *param_3 = (int)piVar3;
      iVar5 = iVar4 - ((int)param_1 >> 0x1f) >> 1;
      param_3[2] = (int)piVar3 + local_58[0] + iVar4 * 4;
      FUN_0040f27c(iVar4,param_2,piVar3,local_58);
      if (0 < iVar5) {
        iVar8 = 0;
        dVar14 = (double)iVar4;
        puVar6 = (undefined2 *)param_3[2];
        dVar11 = _DAT_00424d50;
        dVar12 = DAT_00424d48;
        dVar13 = _DAT_00424d50;
        dVar15 = DAT_00424da8;
        do {
          iVar8 = iVar8 + 1;
          dVar9 = ((double)iVar8 / dVar14 + dVar13) * dVar15;
          uVar2 = (uint)((ulonglong)dVar9 >> 0x20);
          if (param_2 != 0) {
            uVar2 = uVar2 ^ 0x80000000;
          }
          uVar1 = SUB84(dVar9,0);
          cos(CONCAT44(uVar2,uVar1));
          dVar9 = dVar9 * dVar12;
          floor(dVar9 + dVar11);
          dVar10 = (double)CONCAT44((int)dVar9,SUB84(dVar9,0));
          *puVar6 = (short)(int)dVar9;
          sin(CONCAT44(uVar2,uVar1));
          dVar10 = dVar10 * dVar12;
          floor(dVar10 + dVar11);
          puVar6[1] = (short)(int)dVar10;
          puVar6 = puVar6 + 2;
        } while (iVar8 != iVar5);
      }
    }
  }
  else {
    fwrite("Real FFT optimization must be even.\n",1,0x24,stderr);
    param_3 = (int *)0x0;
  }
  return param_3;
}



// ==== FUN_0040f7a4 @ 0040f7a4 size=556

uint * FUN_0040f7a4(undefined4 *param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  uint uVar25;
  uint uStack_18;
  uint uStack_14;
  
  piVar21 = (int *)*param_1;
  if (piVar21[1] == 0) {
    iVar18 = *piVar21;
    FUN_0040f588(piVar21,param_2,param_1[1]);
    psVar7 = (short *)param_1[1];
    puVar3 = (uint *)(iVar18 * 4);
    sVar1 = (short)(*psVar7 * 0x3fff + 0x4000 >> 0xf);
    sVar2 = (short)(psVar7[1] * 0x3fff + 0x4000 >> 0xf);
    *param_3 = sVar2 + sVar1;
    param_3[iVar18 * 2] = sVar1 - sVar2;
    param_3[1] = 0;
    (param_3 + iVar18 * 2)[1] = 0;
    if (0 < iVar18 / 2) {
      psVar22 = (short *)param_1[2];
      puVar4 = (uint *)((int)param_3 + (int)(puVar3 + -1));
      psVar8 = (short *)((int)psVar7 + (int)(puVar3 + -1));
      psVar23 = psVar22;
      do {
        psVar24 = psVar23 + 2;
        sVar1 = *psVar23;
        puVar3 = puVar4 + -1;
        uVar11 = psVar7[2] * 0x3fff + 0x4000 >> 0xf & 0xffff;
        uVar13 = *psVar8 * 0x3fff + 0x4000 >> 0xf & 0xffff;
        iVar16 = (int)((uVar11 - uVar13) * 0x10000) >> 0x10;
        sVar2 = psVar23[1];
        uVar17 = psVar7[3] * 0x3fff + 0x4000 >> 0xf & 0xffff;
        uVar9 = -psVar8[1] * 0x3fff + 0x4000 >> 0xf & 0xffff;
        iVar15 = (int)((uVar17 - uVar9) * 0x10000) >> 0x10;
        iVar14 = (int)((uVar13 + uVar11) * 0x10000) >> 0x10;
        iVar10 = (int)((uVar9 + uVar17) * 0x10000) >> 0x10;
        iVar12 = (int)(short)((iVar16 * sVar1 - iVar15 * sVar2) + 0x4000 >> 0xf);
        param_3[2] = (short)(iVar14 + iVar12 >> 1);
        iVar15 = (int)(short)(iVar16 * sVar2 + sVar1 * iVar15 + 0x4000 >> 0xf);
        param_3[3] = (short)(iVar10 + iVar15 >> 1);
        *(short *)puVar4 = (short)(iVar14 - iVar12 >> 1);
        *(short *)((int)puVar4 + 2) = (short)(iVar15 - iVar10 >> 1);
        puVar4 = puVar3;
        psVar8 = psVar8 + -2;
        param_3 = param_3 + 2;
        psVar23 = psVar24;
        psVar7 = psVar7 + 2;
      } while (psVar24 != psVar22 + (iVar18 / 2) * 2);
    }
    return puVar3;
  }
  uVar13 = 1;
  uVar17 = 0x25;
  uVar9 = stderr;
  fwrite("kiss fft usage error: improper alloc\n");
  uVar11 = 1;
  exit();
  puVar4 = DAT_00437820;
  puVar3 = DAT_00437820;
  while( true ) {
    if (puVar3 == (uint *)0x0) {
      if (((uVar11 < 9) && (-1 < (int)uVar17)) &&
         ((uVar25 = 1 << (uVar11 & 0x1f), (int)uVar17 < (int)uVar25 && (0 < (int)uVar9)))) {
        if ((int)uVar25 <= (int)uVar9) {
          return (uint *)0x0;
        }
        if (-1 < (int)uStack_18) {
          if ((int)uVar25 <= (int)uStack_18) {
            return (uint *)0x0;
          }
          uVar19 = uVar25 - 1;
          if (((-1 < (int)uStack_14) && ((int)uStack_14 < (int)(uVar19 - uStack_18))) &&
             (puVar3 = (uint *)calloc(1,0x30), puVar3 != (uint *)0x0)) {
            puVar3[9] = uStack_14;
            *puVar3 = uVar11;
            puVar3[1] = uVar19;
            uVar11 = malloc(uVar25);
            puVar3[2] = uVar11;
            if (uVar11 == 0) {
              free(puVar3);
            }
            else {
              puVar5 = (undefined1 *)malloc(uVar25);
              puVar3[3] = (uint)puVar5;
              if (puVar5 != (undefined1 *)0x0) {
                *puVar5 = (char)uVar19;
                iVar18 = 0;
                *(undefined1 *)(uVar11 + uVar19) = 0;
                uVar11 = 1;
                while( true ) {
                  uVar19 = uVar11 << 1;
                  puVar5[uVar11] = (char)iVar18;
                  if ((uVar25 & uVar19) != 0) {
                    uVar19 = uVar19 ^ uVar13;
                  }
                  puVar5 = (undefined1 *)(puVar3[2] + iVar18);
                  iVar18 = iVar18 + 1;
                  *puVar5 = (char)uVar11;
                  uVar20 = puVar3[1];
                  uVar11 = uVar19 & uVar20;
                  if ((int)uVar20 <= iVar18) break;
                  puVar5 = (undefined1 *)puVar3[3];
                }
                if (uVar11 == 1) {
                  pbVar6 = (byte *)malloc(uStack_18 + 1);
                  puVar3[4] = (uint)pbVar6;
                  if (pbVar6 != (byte *)0x0) {
                    if (uVar9 == 0) {
                      trap(0x1c00);
                    }
                    puVar3[6] = uVar17;
                    puVar3[7] = uVar9;
                    puVar3[5] = uStack_18;
                    puVar3[10] = uVar13;
                    if (1 % (int)uVar9 == 0) {
                      iVar18 = 1;
                    }
                    else {
                      iVar18 = uVar20 + 1;
                      do {
                        iVar10 = iVar18 % (int)uVar9;
                        if (uVar9 == 0) {
                          trap(0x1c00);
                        }
                        iVar18 = iVar18 + uVar20;
                      } while (iVar10 != 0);
                      iVar18 = iVar18 - uVar20;
                    }
                    if (uVar9 == 0) {
                      trap(0x1c00);
                    }
                    *pbVar6 = 1;
                    iVar10 = uVar17 * uVar9;
                    puVar3[8] = iVar18 / (int)uVar9;
                    if (uStack_18 != 0) {
                      pbVar6[1] = 1;
                      uVar13 = 1;
                      uVar11 = 0;
                      while( true ) {
                        uVar17 = puVar3[1];
                        iVar18 = iVar10 + (uint)*(byte *)(puVar3[3] + uVar13);
                        if ((int)uVar17 <= iVar18) {
                          uVar13 = iVar18 - uVar17;
                          do {
                            iVar18 = ((int)uVar13 >> (*puVar3 & 0x1f)) + (uVar13 & uVar17);
                            uVar13 = iVar18 - uVar17;
                          } while ((int)uVar17 <= iVar18);
                          iVar18 = uVar13 + uVar17;
                        }
                        uVar17 = uVar11 + 1;
                        iVar10 = iVar10 + uVar9;
                        *pbVar6 = *(byte *)(puVar3[2] + iVar18);
                        if (uVar17 == uStack_18) break;
                        *(undefined1 *)(puVar3[4] + uVar17 + 1) = 1;
                        for (uVar13 = uVar17; uVar13 != 0; uVar13 = uVar13 - 1) {
                          uVar25 = puVar3[4];
                          pbVar6 = (byte *)(uVar25 + uVar13);
                          if (*pbVar6 == 0) {
                            *pbVar6 = *(byte *)(uVar25 + uVar11);
                          }
                          else {
                            uVar19 = puVar3[1];
                            iVar18 = (uint)*(byte *)(puVar3[3] + (uint)*pbVar6) + iVar10;
                            if ((int)uVar19 <= iVar18) {
                              uVar20 = iVar18 - uVar19;
                              do {
                                iVar18 = ((int)uVar20 >> (*puVar3 & 0x1f)) + (uVar20 & uVar19);
                                uVar20 = iVar18 - uVar19;
                              } while ((int)uVar19 <= iVar18);
                              iVar18 = uVar20 + uVar19;
                            }
                            *pbVar6 = *(byte *)(uVar25 + uVar11) ^ *(byte *)(puVar3[2] + iVar18);
                          }
                          uVar11 = uVar11 - 1;
                        }
                        pbVar6 = (byte *)puVar3[4];
                        uVar13 = (uint)*pbVar6;
                        uVar11 = uVar17;
                      }
                      pbVar6 = (byte *)puVar3[4];
                    }
                    iVar18 = 0;
                    while( true ) {
                      pbVar6 = pbVar6 + iVar18;
                      iVar18 = iVar18 + 1;
                      *pbVar6 = *(byte *)(puVar3[3] + (uint)*pbVar6);
                      if (iVar18 == uStack_18 + 1) break;
                      pbVar6 = (byte *)puVar3[4];
                    }
                    puVar3[0xb] = (uint)puVar4;
                    DAT_00437820 = puVar3;
                    return puVar3;
                  }
                }
                free(puVar3[2]);
                uVar11 = puVar3[3];
              }
              free(uVar11);
              free(puVar3);
            }
          }
        }
      }
      return (uint *)0x0;
    }
    if ((((puVar3[9] == uStack_14) && (puVar3[5] == uStack_18)) && (*puVar3 == uVar11)) &&
       (((puVar3[10] == uVar13 && (puVar3[6] == uVar17)) && (puVar3[7] == uVar9)))) break;
    puVar3 = (uint *)puVar3[0xb];
  }
  return puVar3;
}



// ==== FUN_0040f9d0 @ 0040f9d0 size=1100

uint * FUN_0040f9d0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  puVar1 = DAT_00437820;
  puVar7 = DAT_00437820;
  while( true ) {
    if (puVar7 == (uint *)0x0) {
      if (((param_1 < 9) && (-1 < (int)param_3)) &&
         ((uVar11 = 1 << (param_1 & 0x1f), (int)param_3 < (int)uVar11 && (0 < (int)param_4)))) {
        if ((int)uVar11 <= (int)param_4) {
          return (uint *)0x0;
        }
        if (-1 < (int)param_5) {
          if ((int)uVar11 <= (int)param_5) {
            return (uint *)0x0;
          }
          uVar8 = uVar11 - 1;
          if (((-1 < (int)param_6) && ((int)param_6 < (int)(uVar8 - param_5))) &&
             (puVar7 = (uint *)calloc(1,0x30), puVar7 != (uint *)0x0)) {
            puVar7[9] = param_6;
            *puVar7 = param_1;
            puVar7[1] = uVar8;
            uVar2 = malloc(uVar11);
            puVar7[2] = uVar2;
            if (uVar2 == 0) {
              free(puVar7);
            }
            else {
              puVar3 = (undefined1 *)malloc(uVar11);
              puVar7[3] = (uint)puVar3;
              if (puVar3 != (undefined1 *)0x0) {
                *puVar3 = (char)uVar8;
                iVar4 = 0;
                *(undefined1 *)(uVar2 + uVar8) = 0;
                uVar8 = 1;
                while( true ) {
                  uVar2 = uVar8 << 1;
                  puVar3[uVar8] = (char)iVar4;
                  if ((uVar11 & uVar2) != 0) {
                    uVar2 = uVar2 ^ param_2;
                  }
                  puVar3 = (undefined1 *)(puVar7[2] + iVar4);
                  iVar4 = iVar4 + 1;
                  *puVar3 = (char)uVar8;
                  uVar9 = puVar7[1];
                  uVar8 = uVar2 & uVar9;
                  if ((int)uVar9 <= iVar4) break;
                  puVar3 = (undefined1 *)puVar7[3];
                }
                if (uVar8 == 1) {
                  pbVar5 = (byte *)malloc(param_5 + 1);
                  puVar7[4] = (uint)pbVar5;
                  if (pbVar5 != (byte *)0x0) {
                    if (param_4 == 0) {
                      trap(0x1c00);
                    }
                    puVar7[6] = param_3;
                    puVar7[7] = param_4;
                    puVar7[5] = param_5;
                    puVar7[10] = param_2;
                    if (1 % (int)param_4 == 0) {
                      iVar4 = 1;
                    }
                    else {
                      iVar4 = uVar9 + 1;
                      do {
                        iVar12 = iVar4 % (int)param_4;
                        if (param_4 == 0) {
                          trap(0x1c00);
                        }
                        iVar4 = iVar4 + uVar9;
                      } while (iVar12 != 0);
                      iVar4 = iVar4 - uVar9;
                    }
                    if (param_4 == 0) {
                      trap(0x1c00);
                    }
                    *pbVar5 = 1;
                    iVar12 = param_3 * param_4;
                    puVar7[8] = iVar4 / (int)param_4;
                    if (param_5 != 0) {
                      pbVar5[1] = 1;
                      uVar8 = 1;
                      uVar11 = 0;
                      while( true ) {
                        uVar2 = puVar7[1];
                        iVar4 = iVar12 + (uint)*(byte *)(puVar7[3] + uVar8);
                        if ((int)uVar2 <= iVar4) {
                          uVar8 = iVar4 - uVar2;
                          do {
                            iVar4 = ((int)uVar8 >> (*puVar7 & 0x1f)) + (uVar8 & uVar2);
                            uVar8 = iVar4 - uVar2;
                          } while ((int)uVar2 <= iVar4);
                          iVar4 = uVar8 + uVar2;
                        }
                        uVar2 = uVar11 + 1;
                        iVar12 = iVar12 + param_4;
                        *pbVar5 = *(byte *)(puVar7[2] + iVar4);
                        if (uVar2 == param_5) break;
                        *(undefined1 *)(puVar7[4] + uVar2 + 1) = 1;
                        for (uVar8 = uVar2; uVar8 != 0; uVar8 = uVar8 - 1) {
                          uVar9 = puVar7[4];
                          pbVar5 = (byte *)(uVar9 + uVar8);
                          if (*pbVar5 == 0) {
                            *pbVar5 = *(byte *)(uVar9 + uVar11);
                          }
                          else {
                            uVar6 = puVar7[1];
                            iVar4 = (uint)*(byte *)(puVar7[3] + (uint)*pbVar5) + iVar12;
                            if ((int)uVar6 <= iVar4) {
                              uVar10 = iVar4 - uVar6;
                              do {
                                iVar4 = ((int)uVar10 >> (*puVar7 & 0x1f)) + (uVar10 & uVar6);
                                uVar10 = iVar4 - uVar6;
                              } while ((int)uVar6 <= iVar4);
                              iVar4 = uVar10 + uVar6;
                            }
                            *pbVar5 = *(byte *)(uVar9 + uVar11) ^ *(byte *)(puVar7[2] + iVar4);
                          }
                          uVar11 = uVar11 - 1;
                        }
                        pbVar5 = (byte *)puVar7[4];
                        uVar8 = (uint)*pbVar5;
                        uVar11 = uVar2;
                      }
                      pbVar5 = (byte *)puVar7[4];
                    }
                    iVar4 = 0;
                    while( true ) {
                      pbVar5 = pbVar5 + iVar4;
                      iVar4 = iVar4 + 1;
                      *pbVar5 = *(byte *)(puVar7[3] + (uint)*pbVar5);
                      if (iVar4 == param_5 + 1) break;
                      pbVar5 = (byte *)puVar7[4];
                    }
                    puVar7[0xb] = (uint)puVar1;
                    DAT_00437820 = puVar7;
                    return puVar7;
                  }
                }
                free(puVar7[2]);
                uVar2 = puVar7[3];
              }
              free(uVar2);
              free(puVar7);
            }
          }
        }
      }
      return (uint *)0x0;
    }
    if ((((puVar7[9] == param_6) && (puVar7[5] == param_5)) && (*puVar7 == param_1)) &&
       (((puVar7[10] == param_2 && (puVar7[6] == param_3)) && (puVar7[7] == param_4)))) break;
    puVar7 = (uint *)puVar7[0xb];
  }
  return puVar7;
}



// ==== FUN_0040fe1c @ 0040fe1c size=60

void FUN_0040fe1c(int param_1)

{
  free(*(undefined4 *)(param_1 + 8));
  free(*(undefined4 *)(param_1 + 0xc));
  free(*(undefined4 *)(param_1 + 0x10));
  free(param_1);
  return;
}



// ==== FUN_0040fe58 @ 0040fe58 size=2780

uint FUN_0040fe58(uint *param_1,byte *param_2,uint *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  uint uVar25;
  byte abStack_61 [9];
  int local_58;
  byte *local_54;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  
  uVar12 = param_1[5];
  uVar15 = uVar12 + 8 & 0xfffffff8;
  iVar8 = -uVar15;
  uVar2 = uVar12 + 7 & 0xfffffff8;
  pbVar13 = abStack_61 + iVar8 + 1;
  iVar4 = -uVar2;
  pbVar6 = abStack_61 + iVar4 + iVar8 + 1;
  pbVar14 = abStack_61 + iVar4 + uVar15 * -2 + 1;
  pbVar23 = abStack_61 + iVar4 + uVar15 * -3 + 1;
  local_50 = abStack_61 + uVar2 * -2 + uVar15 * -4 + 1;
  local_54 = abStack_61 + uVar2 * -3 + uVar15 * -5 + 1;
  if (0 < (int)uVar12) {
    bVar7 = *param_2;
    pbVar16 = pbVar6;
    do {
      *pbVar16 = bVar7;
      pbVar16 = pbVar16 + 1;
    } while (pbVar16 != pbVar6 + uVar12);
  }
  uVar11 = param_1[1];
  uVar9 = param_1[9];
  if (1 < (int)(uVar11 - uVar9)) {
    pbVar16 = param_2 + 1;
    do {
      if (0 < (int)uVar12) {
        uVar5 = 0;
        pbVar19 = pbVar6;
        do {
          while (*pbVar19 == 0) {
            uVar5 = uVar5 + 1;
            *pbVar19 = *pbVar16;
            pbVar19 = pbVar19 + 1;
            if (uVar5 == uVar12) goto LAB_0040ffec;
          }
          iVar17 = (uint)*(byte *)(param_1[3] + (uint)*pbVar19) + (uVar5 + param_1[6]) * param_1[7];
          if ((int)uVar11 <= iVar17) {
            uVar18 = iVar17 - uVar11;
            do {
              iVar17 = ((int)uVar18 >> (*param_1 & 0x1f)) + (uVar18 & uVar11);
              uVar18 = iVar17 - uVar11;
            } while ((int)uVar11 <= iVar17);
            iVar17 = uVar18 + uVar11;
          }
          uVar5 = uVar5 + 1;
          *pbVar19 = *pbVar16 ^ *(byte *)(param_1[2] + iVar17);
          pbVar19 = pbVar19 + 1;
        } while (uVar5 != uVar12);
      }
LAB_0040ffec:
      pbVar16 = pbVar16 + 1;
    } while (pbVar16 != param_2 + (uVar11 - uVar9));
  }
  uVar9 = 0;
  if (0 < (int)uVar12) {
    uVar5 = param_1[3];
    pbVar16 = pbVar6;
    do {
      pbVar19 = pbVar16 + 1;
      uVar9 = uVar9 | *pbVar16;
      *pbVar16 = *(byte *)(uVar5 + *pbVar16);
      pbVar16 = pbVar19;
    } while (pbVar19 != pbVar6 + uVar12);
    local_48 = abStack_61 + iVar8 + 2;
    if (uVar9 != 0) {
      local_34 = pbVar6;
      local_30 = abStack_61 + iVar4 + uVar15 * -4 + 1;
      local_2c = abStack_61 + uVar2 * -2 + uVar15 * -5 + 1;
      memset(local_48,0,uVar12);
      *pbVar13 = 1;
      pbVar16 = local_2c;
      pbVar6 = local_30;
      if (0 < param_4) {
        uVar18 = param_1[7];
        uVar9 = param_1[2];
        iVar17 = uVar18 * ((uVar11 - 1) - *param_3);
        uVar2 = *param_1;
        if ((int)uVar11 <= iVar17) {
          uVar20 = iVar17 - uVar11;
          do {
            iVar17 = ((int)uVar20 >> (uVar2 & 0x1f)) + (uVar20 & uVar11);
            uVar20 = iVar17 - uVar11;
          } while ((int)uVar11 <= iVar17);
          iVar17 = uVar20 + uVar11;
        }
        bVar7 = *(byte *)(uVar9 + iVar17);
        abStack_61[iVar8 + 2] = bVar7;
        if (param_4 != 1) {
          pbVar19 = abStack_61 + iVar8 + 3;
          iVar8 = 1;
          puVar10 = param_3;
          while( true ) {
            puVar10 = puVar10 + 1;
            uVar20 = uVar18 * ((uVar11 - 1) - *puVar10);
            if ((int)uVar11 <= (int)uVar20) {
              uVar20 = uVar20 - uVar11;
              do {
                iVar17 = ((int)uVar20 >> (uVar2 & 0x1f)) + (uVar20 & uVar11);
                uVar20 = iVar17 - uVar11;
              } while ((int)uVar11 <= iVar17);
              uVar20 = uVar20 + uVar11;
            }
            iVar8 = iVar8 + 1;
            pbVar3 = pbVar19;
            iVar17 = iVar8;
            while( true ) {
              iVar17 = iVar17 + -1;
              if (*(byte *)(uVar5 + bVar7) != uVar11) {
                iVar21 = (uint)*(byte *)(uVar5 + bVar7) + (uVar20 & 0xff);
                if ((int)uVar11 <= iVar21) {
                  uVar22 = iVar21 - uVar11;
                  do {
                    iVar21 = ((int)uVar22 >> (uVar2 & 0x1f)) + (uVar22 & uVar11);
                    uVar22 = iVar21 - uVar11;
                  } while ((int)uVar11 <= iVar21);
                  iVar21 = uVar22 + uVar11;
                }
                *pbVar3 = *pbVar3 ^ *(byte *)(uVar9 + iVar21);
              }
              if (iVar17 < 1) break;
              bVar7 = pbVar3[-2];
              pbVar3 = pbVar3 + -1;
            }
            if (iVar8 == param_4) break;
            bVar7 = *pbVar19;
            pbVar19 = pbVar19 + 1;
          }
        }
      }
      uVar2 = uVar12 + 1;
      uVar9 = 0;
      do {
        pbVar3 = pbVar13 + uVar9;
        pbVar19 = pbVar14 + uVar9;
        uVar9 = uVar9 + 1;
        *pbVar19 = *(byte *)(uVar5 + *pbVar3);
      } while (uVar9 != uVar2);
      local_44 = abStack_61 + iVar4 + uVar15 * -2 + 2;
      local_58 = param_4;
      local_4c = local_34 + -1;
      local_40 = local_34;
      local_3c = pbVar6;
      local_38 = pbVar16;
      local_34 = (byte *)(uVar11 & 0xff);
      iVar8 = param_4;
      while (iVar8 = iVar8 + 1, uVar15 = (uint)local_34, iVar8 <= (int)uVar12) {
        while( true ) {
          uVar5 = param_1[3];
          uVar9 = 0;
          if (0 < iVar8) {
            uVar9 = 0;
            iVar4 = 0;
            pbVar6 = local_4c + iVar8;
            do {
              if (pbVar13[iVar4] != 0) {
                if (*pbVar6 != uVar11) {
                  iVar17 = (uint)*pbVar6 + (uint)*(byte *)(uVar5 + pbVar13[iVar4]);
                  if ((int)uVar11 <= iVar17) {
                    uVar18 = iVar17 - uVar11;
                    do {
                      iVar17 = ((int)uVar18 >> (*param_1 & 0x1f)) + (uVar18 & uVar11);
                      uVar18 = iVar17 - uVar11;
                    } while ((int)uVar11 <= iVar17);
                    iVar17 = uVar18 + uVar11;
                  }
                  uVar9 = uVar9 ^ *(byte *)(param_1[2] + iVar17);
                }
              }
              iVar4 = iVar4 + 1;
              pbVar6 = pbVar6 + -1;
            } while (iVar8 != iVar4);
          }
          uVar9 = (uint)*(byte *)(uVar5 + uVar9);
          local_34 = (byte *)uVar15;
          if (uVar9 == uVar11) break;
          uVar18 = (uint)*pbVar13;
          iVar4 = 1;
          *pbVar23 = *pbVar13;
          pbVar6 = pbVar13;
          pbVar16 = pbVar23;
          do {
            iVar17 = uVar9 + pbVar14[iVar4 + -1];
            if (pbVar14[iVar4 + -1] == uVar11) {
              pbVar16[1] = pbVar6[1];
            }
            else {
              if ((int)uVar11 <= iVar17) {
                uVar20 = iVar17 - uVar11;
                do {
                  iVar17 = ((int)uVar20 >> (*param_1 & 0x1f)) + (uVar20 & uVar11);
                  uVar20 = iVar17 - uVar11;
                } while ((int)uVar11 <= iVar17);
                iVar17 = uVar20 + uVar11;
              }
              pbVar16[1] = pbVar6[1] ^ *(byte *)(param_1[2] + iVar17);
            }
            bVar1 = iVar4 < (int)uVar12;
            iVar4 = iVar4 + 1;
            pbVar16 = pbVar16 + 1;
            pbVar6 = pbVar6 + 1;
          } while (bVar1);
          if (local_58 << 1 < iVar8 + param_4) {
            uVar20 = 0;
            local_58 = (iVar8 + param_4) - local_58;
            pbVar6 = pbVar14;
            if (uVar18 != 0) goto LAB_004103c0;
            do {
              *pbVar6 = (byte)uVar15;
              while( true ) {
                uVar20 = uVar20 + 1;
                if (uVar20 == uVar2) {
                  memcpy(pbVar13,pbVar23,param_1[5] + 1);
                  goto LAB_0041042c;
                }
                uVar18 = (uint)pbVar13[uVar20];
                pbVar6 = pbVar14 + uVar20;
                if (uVar18 == 0) break;
LAB_004103c0:
                iVar4 = (*(byte *)(uVar5 + uVar18) - uVar9) + uVar11;
                if ((int)uVar11 <= iVar4) {
                  uVar18 = iVar4 - uVar11;
                  do {
                    iVar4 = ((int)uVar18 >> (*param_1 & 0x1f)) + (uVar18 & uVar11);
                    uVar18 = iVar4 - uVar11;
                  } while ((int)uVar11 <= iVar4);
                  iVar4 = uVar18 + uVar11;
                }
                pbVar14[uVar20] = (byte)iVar4;
              }
            } while( true );
          }
          memmove(local_44,pbVar14,uVar12);
          *pbVar14 = (byte)uVar11;
          memcpy(pbVar13,pbVar23,param_1[5] + 1);
LAB_0041042c:
          iVar8 = iVar8 + 1;
          uVar15 = (uint)local_34;
          if ((int)uVar12 < iVar8) goto LAB_0041043c;
        }
        memmove(local_44,pbVar14,uVar12);
        *pbVar14 = (byte)uVar11;
      }
LAB_0041043c:
      pbVar14 = local_38;
      pbVar23 = local_3c;
      pbVar6 = local_40;
      uVar9 = param_1[3];
      uVar5 = 0;
      uVar15 = 0;
      pbVar16 = pbVar13;
      do {
        if (*(byte *)(uVar9 + *pbVar16) != uVar11) {
          uVar15 = uVar5;
        }
        uVar5 = uVar5 + 1;
        *pbVar16 = *(byte *)(uVar9 + *pbVar16);
        pbVar16 = pbVar16 + 1;
      } while (uVar5 != uVar2);
      local_2c = pbVar14;
      local_30 = pbVar23;
      local_34 = pbVar6;
      memcpy(pbVar14 + 1,local_48,uVar12);
      uVar2 = 0;
      uVar9 = param_1[8];
      iVar4 = 1;
      iVar8 = uVar9 - 1;
      while (iVar4 <= (int)uVar11) {
        while( true ) {
          bVar7 = 1;
          uVar5 = uVar15;
          if (uVar15 != 0) {
            do {
              uVar18 = (uint)local_2c[uVar5];
              uVar20 = uVar5 + uVar18;
              if (uVar18 != uVar11) {
                if ((int)uVar11 <= (int)uVar20) {
                  uVar20 = uVar20 - uVar11;
                  do {
                    iVar17 = ((int)uVar20 >> (*param_1 & 0x1f)) + (uVar20 & uVar11);
                    uVar20 = iVar17 - uVar11;
                  } while ((int)uVar11 <= iVar17);
                  uVar20 = uVar20 + uVar11;
                }
                uVar18 = param_1[2];
                local_2c[uVar5] = (byte)uVar20;
                bVar7 = bVar7 ^ *(byte *)(uVar18 + (uVar20 & 0xff));
              }
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
            if (bVar7 == 0) {
              pbVar6 = local_50 + uVar2;
              pbVar23 = local_54 + uVar2;
              uVar2 = uVar2 + 1;
              *pbVar6 = (byte)iVar4;
              *pbVar23 = (byte)iVar8;
              if (uVar2 == uVar15) goto LAB_004105a4;
            }
          }
          iVar8 = iVar8 + uVar9;
          iVar4 = iVar4 + 1;
          if (iVar8 < (int)uVar11) break;
          uVar5 = iVar8 - uVar11;
          do {
            iVar8 = ((int)uVar5 >> (*param_1 & 0x1f)) + (uVar5 & uVar11);
            uVar5 = iVar8 - uVar11;
          } while ((int)uVar11 <= iVar8);
          iVar8 = uVar5 + uVar11;
          if ((int)uVar11 < iVar4) goto LAB_0041059c;
        }
      }
LAB_0041059c:
      if (uVar2 != uVar15) {
        return 0xffffffff;
      }
LAB_004105a4:
      iVar8 = uVar15 - 1;
      if (uVar15 != 0) {
        uVar5 = param_1[3];
        uVar9 = 0;
        do {
          uVar20 = 0;
          uVar18 = uVar9;
          pbVar6 = local_34;
          do {
            if ((*pbVar6 != uVar11) &&
               (iVar4 = (uint)*pbVar6 + (uint)pbVar13[uVar18], pbVar13[uVar18] != uVar11)) {
              if ((int)uVar11 <= iVar4) {
                uVar22 = iVar4 - uVar11;
                do {
                  iVar4 = ((int)uVar22 >> (*param_1 & 0x1f)) + (uVar22 & uVar11);
                  uVar22 = iVar4 - uVar11;
                } while ((int)uVar11 <= iVar4);
                iVar4 = uVar22 + uVar11;
              }
              uVar20 = uVar20 ^ *(byte *)(param_1[2] + iVar4);
            }
            uVar18 = uVar18 - 1;
            pbVar6 = pbVar6 + 1;
          } while (uVar18 != 0xffffffff);
          pbVar6 = local_30 + uVar9;
          uVar9 = uVar9 + 1;
          *pbVar6 = *(byte *)(uVar5 + uVar20);
        } while (uVar9 != uVar15);
      }
      iVar4 = uVar2 - 1;
      if (iVar4 < 0) {
LAB_004108c0:
        if (param_3 == (uint *)0x0) {
          return uVar2;
        }
        if ((int)uVar2 < 1) {
          return uVar2;
        }
        pbVar6 = local_54 + uVar2;
        do {
          bVar7 = *local_54;
          local_54 = local_54 + 1;
          *param_3 = (uint)bVar7;
          param_3 = param_3 + 1;
        } while (local_54 != pbVar6);
        return uVar2;
      }
      pbVar6 = local_50 + iVar4;
      if (iVar8 == -1) goto LAB_00410840;
      do {
        uVar20 = (uint)*pbVar6;
        uVar5 = param_1[2];
        uVar18 = 0;
        iVar17 = iVar8 * uVar20;
        uVar9 = *param_1;
        iVar21 = iVar8;
        do {
          iVar24 = (uint)local_30[iVar21] + iVar17;
          if (local_30[iVar21] != uVar11) {
            if ((int)uVar11 <= iVar24) {
              uVar22 = iVar24 - uVar11;
              do {
                iVar24 = ((int)uVar22 >> (uVar9 & 0x1f)) + (uVar22 & uVar11);
                uVar22 = iVar24 - uVar11;
              } while ((int)uVar11 <= iVar24);
              iVar24 = uVar22 + uVar11;
            }
            uVar18 = uVar18 ^ *(byte *)(uVar5 + iVar24);
          }
          iVar21 = iVar21 + -1;
          iVar17 = iVar17 - uVar20;
        } while (iVar21 != -1);
        while( true ) {
          iVar17 = (param_1[6] - 1) * uVar20 + uVar11;
          if ((int)uVar11 <= iVar17) {
            uVar22 = iVar17 - uVar11;
            do {
              iVar17 = ((int)uVar22 >> (uVar9 & 0x1f)) + (uVar22 & uVar11);
              uVar22 = iVar17 - uVar11;
            } while ((int)uVar11 <= iVar17);
            iVar17 = uVar22 + uVar11;
          }
          uVar22 = uVar12 - 1;
          if ((int)uVar15 < (int)(uVar12 - 1)) {
            uVar22 = uVar15;
          }
          uVar22 = uVar22 & 0xfffffffe;
          if ((int)uVar22 < 0) {
            uVar12 = 0;
          }
          else {
            iVar21 = uVar22 * uVar20;
            uVar12 = 0;
            do {
              if (pbVar13[uVar22 + 1] != uVar11) {
                iVar24 = (uint)pbVar13[uVar22 + 1] + iVar21;
                if ((int)uVar11 <= iVar24) {
                  uVar25 = iVar24 - uVar11;
                  do {
                    iVar24 = ((int)uVar25 >> (uVar9 & 0x1f)) + (uVar25 & uVar11);
                    uVar25 = iVar24 - uVar11;
                  } while ((int)uVar11 <= iVar24);
                  iVar24 = uVar25 + uVar11;
                }
                uVar12 = uVar12 ^ *(byte *)(uVar5 + iVar24);
              }
              uVar22 = uVar22 - 2;
              iVar21 = iVar21 + uVar20 * -2;
            } while (-1 < (int)uVar22);
          }
          if (uVar18 != 0) {
            if ((int)param_1[9] <= (int)(uint)local_54[iVar4]) {
              uVar20 = param_1[3];
              iVar17 = ((uint)*(byte *)(uVar20 + uVar18) +
                        (uint)*(byte *)(uVar20 + *(byte *)(uVar5 + iVar17)) + uVar11) -
                       (uint)*(byte *)(uVar20 + uVar12);
              if ((int)uVar11 <= iVar17) {
                uVar12 = iVar17 - uVar11;
                do {
                  iVar17 = ((int)uVar12 >> (uVar9 & 0x1f)) + (uVar12 & uVar11);
                  uVar12 = iVar17 - uVar11;
                } while ((int)uVar11 <= iVar17);
                iVar17 = uVar12 + uVar11;
              }
              param_2[(uint)local_54[iVar4] - param_1[9]] =
                   param_2[(uint)local_54[iVar4] - param_1[9]] ^ *(byte *)(uVar5 + iVar17);
            }
          }
          iVar4 = iVar4 + -1;
          pbVar6 = local_50 + iVar4;
          if (iVar4 == -1) goto LAB_004108c0;
          uVar11 = param_1[1];
          uVar12 = param_1[5];
          if (iVar8 != -1) break;
LAB_00410840:
          uVar18 = 0;
          uVar5 = param_1[2];
          uVar20 = (uint)*pbVar6;
          uVar9 = *param_1;
        }
      } while( true );
    }
  }
  return 0;
}



// ==== FUN_00410934 @ 00410934 size=136

int FUN_00410934(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = calloc(1,0x2424);
  if (iVar1 != 0) {
    uVar2 = FUN_0040f594(0x200,0,0,0);
    *(undefined4 *)(iVar1 + 0x404) = uVar2;
    uVar2 = FUN_0040f9d0(8,0x11d,1,1,8,0xed);
    *(undefined4 *)(iVar1 + 0x408) = uVar2;
    *(undefined4 *)(iVar1 + 0x40c) = 0;
    *(undefined4 *)(iVar1 + 0x410) = 0;
    *(undefined4 *)(iVar1 + 0x414) = 0;
    *(undefined4 *)(iVar1 + 0x2420) = 0;
    *(undefined4 *)(iVar1 + 0x1c18) = 0;
  }
  return iVar1;
}



// ==== FUN_004109bc @ 004109bc size=56

void FUN_004109bc(int param_1)

{
  if (param_1 != 0) {
    free(*(undefined4 *)(param_1 + 0x404));
    FUN_0040fe1c(*(undefined4 *)(param_1 + 0x408));
    *(undefined4 *)(param_1 + 0x2420) = 0;
  }
  return;
}



// ==== FUN_004109f4 @ 004109f4 size=332

byte FUN_004109f4(int param_1,int param_2,char *param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_10 [4];
  
  iVar5 = 1;
  local_10[0] = 0;
  piVar4 = local_10 + 1;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  if (*param_3 == param_4) goto LAB_00410a44;
  while (iVar7 = iVar5, iVar5 != 4) {
    while( true ) {
      iVar5 = iVar7 + 1;
      piVar4 = piVar4 + 1;
      if (param_3[iVar7] != param_4) break;
LAB_00410a44:
      if (iVar5 == 4) goto LAB_00410ab8;
      cVar1 = *(char *)(param_1 + iVar5 + -1);
      piVar2 = piVar4;
      iVar8 = iVar5;
      do {
        if (((*(char *)(param_1 + iVar8) == cVar1) &&
            (*(char *)(param_2 + iVar5 + -1) == *(char *)(param_2 + iVar8))) &&
           (param_3[iVar8] == param_4)) {
          piVar4[-1] = piVar4[-1] + 1;
          *piVar2 = *piVar2 + 1;
        }
        iVar8 = iVar8 + 1;
        piVar2 = piVar2 + 1;
        iVar7 = iVar5;
      } while (iVar8 != 4);
    }
  }
LAB_00410ab8:
  piVar4 = local_10;
  iVar7 = 0;
  iVar5 = 0;
  iVar8 = 0;
  do {
    iVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    if (iVar5 < iVar6) {
      iVar7 = iVar8;
    }
    iVar8 = iVar8 + 1;
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
  } while (iVar8 != 4);
  pcVar3 = param_3;
  iVar8 = iVar7;
  iVar6 = 0;
  if (iVar5 == 0) {
    do {
      iVar8 = iVar6;
      if (*pcVar3 == param_4) break;
      iVar6 = iVar8 + 1;
      pcVar3 = param_3 + iVar6;
      iVar8 = iVar7;
    } while (iVar6 != 4);
  }
  return *(char *)(param_1 + iVar8) << 4 | *(byte *)(param_2 + iVar8) & 0xf;
}



// ==== FUN_00410b40 @ 00410b40 size=720

int FUN_00410b40(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_70 [76];
  
  puVar6 = (undefined1 *)(param_1 + 0x1c1c);
  iVar5 = param_1 + 0xc18;
  puts(&DAT_00424db0);
  *(undefined4 *)(param_1 + 0x241c) = 0;
  memset(puVar6,0xffffffff,0x800);
  iVar9 = 0;
  iVar1 = iVar5;
  do {
    if (*(char *)(iVar1 + 4) == '\0') {
      iVar1 = iVar9 + 5;
      if (9 < iVar9 - 1U) {
        iVar1 = iVar9 + 7;
      }
      goto LAB_00410bbc;
    }
    iVar9 = iVar9 + 1;
    iVar1 = iVar5 + iVar9;
  } while (iVar9 != 0xc);
  iVar1 = 6;
LAB_00410bbc:
  uVar4 = 0;
  if (iVar1 < *(int *)(param_1 + 0x1c18)) {
    do {
      uVar2 = FUN_004109f4(param_1 + iVar1 + 0x418,param_1 + iVar1 + 0x1418,param_1 + iVar1 + 0xc18,
                           uVar4);
      uVar4 = uVar4 + 1 & 3;
      iVar9 = *(int *)(param_1 + 0x241c);
      iVar10 = 0;
      *(int *)(param_1 + 0x241c) = iVar9 + 1;
      *(char *)(param_1 + iVar9 + 0x1c1c) = (char)uVar2;
      pcVar3 = (char *)(iVar5 + iVar1);
      do {
        if (uVar4 == (int)*pcVar3) {
          iVar1 = iVar1 + iVar10 + 1;
          if (9 < iVar10 - 1U) {
            iVar1 = iVar1 + 2;
          }
          goto LAB_00410c3c;
        }
        iVar10 = iVar10 + 1;
        pcVar3 = (char *)(iVar5 + iVar1) + iVar10;
      } while (iVar10 != 0xc);
      iVar1 = iVar1 + 2;
LAB_00410c3c:
      printf("(%c,%d,%d)",uVar2,uVar2 >> 4,uVar2 & 0xf);
    } while (iVar1 < *(int *)(param_1 + 0x1c18));
  }
  putchar(10);
  if (0x11 < *(int *)(param_1 + 0x241c)) {
    memset(auStack_70,0,0x48);
    iVar1 = FUN_0040fe58(*(undefined4 *)(param_1 + 0x408),puVar6,auStack_70,0);
    printf("rsRet = %d \n",iVar1);
    if ((-1 < iVar1) &&
       (uVar4 = (uint)*(byte *)(param_1 + 0x1c1c), (int)uVar4 <= *(int *)(param_1 + 0x241c))) {
      *(uint *)(param_1 + 0x414) = (uVar4 + 10) / 10;
      printf("rsCount = %d \n");
      if (0 < *(int *)(param_1 + 0x414)) {
        iVar1 = 0;
        puVar7 = puVar6;
        puVar8 = (undefined1 *)(param_1 + 0x1c2e);
        do {
          iVar1 = iVar1 + 1;
          memset(auStack_70,0,0x48);
          iVar5 = FUN_0040fe58(*(undefined4 *)(param_1 + 0x408),puVar6,auStack_70,0);
          printf("rsRet = %d \n",iVar5);
          if (iVar5 < 0) {
            return 0;
          }
          memmove(puVar7,puVar6,10);
          puVar7[10] = 0;
          puVar6 = puVar8;
          puVar7 = puVar7 + 10;
          puVar8 = puVar8 + 0x12;
        } while (iVar1 < *(int *)(param_1 + 0x414));
      }
      uVar2 = strlen(param_1 + 0x1c1d);
      if (uVar2 == uVar4) {
        return param_1 + 0x1c1d;
      }
    }
  }
  return 0;
}



// ==== FUN_00410e10 @ 00410e10 size=1316

char * FUN_00410e10(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_418 [1028];
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (0x400 < param_3) {
    return (char *)0x0;
  }
  memset(auStack_418,0,0x400);
  memcpy(auStack_418,param_2,param_3);
  iVar12 = -1;
  FUN_0040f7a4(*(undefined4 *)(param_1 + 0x404),auStack_418,param_1);
  iVar8 = 0;
  uVar11 = 0;
  iVar9 = param_1;
LAB_00410e84:
  do {
    iVar1 = 3;
    uVar6 = 0xffffffff;
    iVar10 = -1;
    iVar13 = iVar9;
    do {
      while( true ) {
        iVar1 = iVar1 + -1;
        uVar7 = (int)*(short *)(iVar13 + 0x18c) * (int)*(short *)(iVar13 + 0x18c) +
                (int)*(short *)(iVar13 + 0x18e) * (int)*(short *)(iVar13 + 0x18e);
        iVar3 = (int)uVar7 >> 0x1f;
        iVar13 = iVar13 + 4;
        if ((iVar10 < iVar3) || ((iVar3 == iVar10 && (uVar6 < uVar7)))) break;
        uVar7 = uVar6;
        iVar3 = iVar10;
        if (iVar1 == 0) goto LAB_00410ed4;
      }
      uVar6 = uVar7;
      iVar10 = iVar3;
    } while (iVar1 != 0);
LAB_00410ed4:
    if (iVar3 < 1) {
      if (iVar3 == 0) {
        if (0x13 < uVar7) goto LAB_00410edc;
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0xc;
        if (iVar8 == 0x10) break;
        goto LAB_00410e84;
      }
    }
    else {
LAB_00410edc:
      if (((int)uVar11 >> 0x1f < iVar3) || ((iVar3 == (int)uVar11 >> 0x1f && (uVar11 < uVar7)))) {
        uVar11 = uVar7;
        iVar12 = iVar8;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0xc;
  } while (iVar8 != 0x10);
  iVar9 = 0;
  iVar8 = param_1;
  uVar11 = 0;
  iVar10 = -1;
LAB_00410f24:
  do {
    iVar13 = iVar9;
    iVar3 = 3;
    iVar9 = -1;
    uVar6 = 0xffffffff;
    iVar1 = iVar8;
    do {
      while( true ) {
        iVar3 = iVar3 + -1;
        uVar7 = (int)*(short *)(iVar1 + 0x260) * (int)*(short *)(iVar1 + 0x260) +
                (int)*(short *)(iVar1 + 0x262) * (int)*(short *)(iVar1 + 0x262);
        iVar4 = (int)uVar7 >> 0x1f;
        iVar1 = iVar1 + 4;
        if ((iVar9 < iVar4) || ((iVar4 == iVar9 && (uVar6 < uVar7)))) break;
        iVar4 = iVar9;
        uVar7 = uVar6;
        if (iVar3 == 0) goto LAB_00410f74;
      }
      iVar9 = iVar4;
      uVar6 = uVar7;
    } while (iVar3 != 0);
LAB_00410f74:
    iVar9 = (int)uVar11 >> 0x1f;
    if (0 < iVar4) {
      if (iVar4 <= iVar9) {
LAB_00410f88:
        if ((iVar4 != iVar9) || (uVar7 <= uVar11)) goto LAB_00410f90;
      }
LAB_00411228:
      iVar8 = iVar8 + 0xc;
      iVar9 = iVar13 + 1;
      uVar11 = uVar7;
      iVar10 = iVar13;
      if (iVar13 + 1 == 5) break;
      goto LAB_00410f24;
    }
    if ((iVar4 == 0) && (0x13 < uVar7)) {
      if (-1 < iVar9) goto LAB_00410f88;
      goto LAB_00411228;
    }
LAB_00410f90:
    iVar9 = iVar13 + 1;
    iVar8 = iVar8 + 0xc;
    iVar13 = iVar10;
  } while (iVar9 != 5);
  iVar10 = 0;
  iVar8 = -1;
  uVar11 = 0;
  iVar9 = param_1;
LAB_00410fb0:
  do {
    iVar4 = 3;
    uVar6 = 0xffffffff;
    iVar1 = -1;
    iVar3 = iVar9;
    do {
      while( true ) {
        iVar4 = iVar4 + -1;
        uVar7 = (int)*(short *)(iVar3 + 0x2b0) * (int)*(short *)(iVar3 + 0x2b0) +
                (int)*(short *)(iVar3 + 0x2b2) * (int)*(short *)(iVar3 + 0x2b2);
        iVar5 = (int)uVar7 >> 0x1f;
        iVar3 = iVar3 + 4;
        if ((iVar1 < iVar5) || ((iVar5 == iVar1 && (uVar6 < uVar7)))) break;
        uVar7 = uVar6;
        iVar5 = iVar1;
        if (iVar4 == 0) goto LAB_00411000;
      }
      uVar6 = uVar7;
      iVar1 = iVar5;
    } while (iVar4 != 0);
LAB_00411000:
    if (iVar5 < 1) {
      if (iVar5 == 0) {
        if (0x13 < uVar7) goto LAB_00411008;
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0xc;
        if (iVar10 == 0x10) {
          iVar9 = *(int *)(param_1 + 0x410);
          goto LAB_00411040;
        }
        goto LAB_00410fb0;
      }
    }
    else {
LAB_00411008:
      if (((int)uVar11 >> 0x1f < iVar5) || ((iVar5 == (int)uVar11 >> 0x1f && (uVar11 < uVar7)))) {
        uVar11 = uVar7;
        iVar8 = iVar10;
      }
    }
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 0xc;
  } while (iVar10 != 0x10);
  iVar9 = *(int *)(param_1 + 0x410);
LAB_00411040:
  iVar9 = iVar9 + -1;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  *(int *)(param_1 + 0x410) = iVar9;
  if (((iVar8 == 10) && (iVar13 == 4)) && (iVar12 == 10)) {
    iVar10 = *(int *)(param_1 + 0x1c18);
    if (iVar10 < 9) {
      if (*(int *)(param_1 + 0x40c) != 0) {
        iVar9 = param_1 + iVar10;
        *(undefined4 *)(param_1 + 0x241c) = 0;
        *(undefined1 *)(iVar9 + 0x418) = 10;
        *(undefined1 *)(iVar9 + 0xc18) = 4;
        *(undefined1 *)(iVar9 + 0x1418) = 10;
        *(int *)(param_1 + 0x1c18) = iVar10 + 1;
        printf("{%d,%d,%d,%d}\n",iVar10 + 1,10,4,10);
        return (char *)0x0;
      }
      iVar10 = 0;
      if (iVar9 != 0) goto LAB_004112a4;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x40c);
      if (iVar9 != 0) {
        if (((iVar10 != 0) && (pcVar2 = (char *)FUN_00410b40(param_1), pcVar2 != (char *)0x0)) &&
           (*pcVar2 != '\0')) {
          *(undefined4 *)(param_1 + 0x40c) = 0;
          *(undefined4 *)(param_1 + 0x1c18) = 0;
          return pcVar2;
        }
LAB_004112a4:
        *(undefined4 *)(param_1 + 0x40c) = 1;
        *(undefined4 *)(param_1 + 0x1c18) = 0;
        *(undefined4 *)(param_1 + 0x414) = 0;
        memset(param_1 + 0x418,0xffffffff,0x800);
        memset(param_1 + 0xc18,0xffffffff,0x800);
        memset(param_1 + 0x1418,0xffffffff,0x800);
        puts("\nbegin");
        if (*(code **)(param_1 + 0x2420) != (code *)0x0) {
          (**(code **)(param_1 + 0x2420))(0);
          iVar10 = *(int *)(param_1 + 0x40c);
          goto LAB_0041105c;
        }
        goto LAB_00411058;
      }
    }
    *(undefined4 *)(param_1 + 0x410) = 5;
  }
  else {
LAB_00411058:
    iVar10 = *(int *)(param_1 + 0x40c);
  }
LAB_0041105c:
  *(undefined4 *)(param_1 + 0x241c) = 0;
  if (iVar10 == 0) {
    return (char *)0x0;
  }
  iVar10 = param_1 + *(int *)(param_1 + 0x1c18);
  iVar9 = *(int *)(param_1 + 0x1c18) + 1;
  *(char *)(iVar10 + 0x418) = (char)iVar8;
  *(char *)(iVar10 + 0xc18) = (char)iVar13;
  *(char *)(iVar10 + 0x1418) = (char)iVar12;
  *(int *)(param_1 + 0x1c18) = iVar9;
  printf("{%d,%d,%d,%d}\n",iVar9,iVar8,iVar13,iVar12);
  if (iVar8 != -1) {
    return (char *)0x0;
  }
  if (iVar12 != -1) {
    return (char *)0x0;
  }
  if (iVar13 != -1) {
    return (char *)0x0;
  }
  iVar9 = param_1 + *(int *)(param_1 + 0x1c18) + -2;
  if (-1 < *(char *)(iVar9 + 0x418)) {
    return (char *)0x0;
  }
  if (-1 < *(char *)(iVar9 + 0xc18)) {
    return (char *)0x0;
  }
  if (-1 < *(char *)(iVar9 + 0x1418)) {
    return (char *)0x0;
  }
  pcVar2 = (char *)FUN_00410b40(param_1);
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x1c18) = 0;
  if (*(code **)(param_1 + 0x2420) != (code *)0x0) {
    (**(code **)(param_1 + 0x2420))(1);
    return pcVar2;
  }
  return pcVar2;
}



// ==== FUN_00411334 @ 00411334 size=84

void FUN_00411334(void)

{
  undefined1 auStack_10 [12];
  
  memset(&DAT_00437834,0,0x40020);
  pthread_mutex_init(&DAT_0047783c,0);
  pthread_create(auStack_10,0,&LAB_00411460,0);
  return;
}



// ==== FUN_00411388 @ 00411388 size=216

uint FUN_00411388(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  pthread_mutex_lock(&DAT_0047783c);
  uVar1 = DAT_00477834 - DAT_00477838;
  if (param_2 <= DAT_00477834 - DAT_00477838) {
    uVar1 = param_2;
  }
  if (uVar1 == param_2) {
    uVar2 = 0x40000 - (DAT_00477838 & 0x3ffff);
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    memcpy(param_1,&DAT_00437834 + (DAT_00477838 & 0x3ffff),uVar2);
    memcpy(param_1 + uVar2,&DAT_00437834,uVar1 - uVar2);
    DAT_00477838 = uVar1 + DAT_00477838;
  }
  else {
    uVar1 = 0;
  }
  pthread_mutex_unlock(&DAT_0047783c);
  return uVar1;
}



// ==== FUN_00411610 @ 00411610 size=24

uint FUN_00411610(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_00437830 == 0) {
    return 0;
  }
  pthread_mutex_lock(&DAT_0047783c);
  uVar2 = (DAT_00477838 + 0x40000) - DAT_00477834;
  uVar1 = 0x40000 - (DAT_00477834 & 0x3ffff);
  if (param_2 <= uVar2) {
    uVar2 = param_2;
  }
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  memcpy(&DAT_00437834 + (DAT_00477834 & 0x3ffff),param_1);
  memcpy(&DAT_00437834,param_1 + uVar1,uVar2 - uVar1);
  DAT_00477834 = uVar2 + DAT_00477834;
  pthread_mutex_unlock(&DAT_0047783c);
  if (param_2 <= uVar2) {
    return uVar2;
  }
  printf(&DAT_00424e6c,"wave_fifo_put",0x80);
  return uVar2;
}



// ==== FUN_00411750 @ 00411750 size=1056

int FUN_00411750(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  code *pcVar11;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    return -10;
  }
  iVar1 = (*(code *)PTR_snd_ctl_elem_info_sizeof_00436a9c)();
  iVar1 = -(iVar1 + 0xeU & 0xfffffff8);
  uVar2 = (*(code *)PTR_snd_ctl_elem_info_sizeof_00436a9c)();
  puVar9 = &stack0xffffffd0 + iVar1;
  (*(code *)PTR_memset_00436ae8)(puVar9,0,uVar2);
  iVar3 = (*(code *)PTR_snd_hctl_elem_info_00436b34)(param_1,puVar9);
  if (iVar3 < 0) {
    (*(code *)PTR_rts_log_00436ac8)(4,PTR_LAB_00436a54 + 0x4eb0,PTR_LAB_00436a54 + 0x5018,0x3e);
    return iVar3;
  }
  iVar3 = (*(code *)PTR_snd_ctl_elem_info_get_type_00436af8)(puVar9);
  if (2 < iVar3 - 1U) {
    uVar2 = 0x29;
    puVar6 = PTR_LAB_00436a54 + 0x4ecc;
    puVar7 = PTR_LAB_00436a54 + 0x5000;
    goto LAB_004118fc;
  }
  iVar3 = (*(code *)PTR_snd_ctl_elem_info_get_type_00436af8)(puVar9);
  puVar6 = PTR_snd_ctl_elem_info_get_items_00436b18;
  if (iVar3 == 2) {
    iVar4 = (*(code *)PTR_snd_ctl_elem_info_get_min_00436b10)(puVar9);
    puVar6 = PTR_snd_ctl_elem_info_get_max_00436abc;
    param_2[1] = iVar4;
    iVar4 = (*(code *)puVar6)(puVar9);
LAB_004118e0:
    param_2[2] = iVar4;
  }
  else {
    if (iVar3 == 3) {
      param_2[1] = 0;
      iVar4 = (*(code *)puVar6)(puVar9);
      iVar4 = iVar4 + -1;
      goto LAB_004118e0;
    }
    if (iVar3 != 1) {
      uVar2 = 0x55;
      puVar6 = PTR_LAB_00436a54 + 0x4ecc;
      puVar7 = PTR_LAB_00436a54 + 0x5018;
      goto LAB_004118fc;
    }
    param_2[1] = 0;
    param_2[2] = 1;
  }
  if (param_3 == 2) {
    return 0;
  }
  iVar4 = (*(code *)PTR_snd_ctl_elem_value_sizeof_00436ac0)();
  uVar2 = (*(code *)PTR_snd_ctl_elem_value_sizeof_00436ac0)();
  puVar8 = &stack0xffffffd0 + (iVar1 - (iVar4 + 0xeU & 0xfffffff8));
  (*(code *)PTR_memset_00436ae8)(puVar8,0,uVar2);
  iVar1 = (*(code *)PTR_snd_hctl_elem_read_00436adc)(param_1,puVar8);
  if (iVar1 < 0) {
    (*(code *)PTR_rts_log_00436ac8)(4,PTR_LAB_00436a54 + 0x4eec,PTR_LAB_00436a54 + 0x5018,0x5f);
    return iVar1;
  }
  if (param_3 == 1) {
    if (param_2[2] < *param_2) {
      *param_2 = param_2[2];
    }
    if (*param_2 < param_2[1]) {
      *param_2 = param_2[1];
    }
    iVar1 = *param_2;
    for (uVar10 = 0; uVar5 = (*(code *)PTR_snd_ctl_elem_info_get_count_00436b38)(puVar9),
        uVar10 < uVar5; uVar10 = uVar10 + 1) {
      pcVar11 = (code *)PTR_snd_ctl_elem_value_set_integer_00436aa8;
      if (((iVar3 != 2) &&
          (pcVar11 = (code *)PTR_snd_ctl_elem_value_set_enumerated_00436b0c, iVar3 != 3)) &&
         (uVar2 = 0x7b, pcVar11 = (code *)PTR_snd_ctl_elem_value_set_boolean_00436ad8, iVar3 != 1))
      {
        puVar6 = PTR_LAB_00436a54 + 0x4ecc;
        puVar7 = PTR_LAB_00436a54 + 0x5018;
        goto LAB_004118fc;
      }
      (*pcVar11)(puVar8,uVar10,iVar1);
    }
    iVar1 = (*(code *)PTR_snd_hctl_elem_write_00436b1c)(param_1,puVar8);
    if (iVar1 < 0) {
      (*(code *)PTR_rts_log_00436ac8)(4,PTR_LAB_00436a54 + 0x4f0c,PTR_LAB_00436a54 + 0x5018,0x82);
      return iVar1;
    }
  }
  pcVar11 = (code *)PTR_snd_ctl_elem_value_get_integer_00436ae0;
  if (((iVar3 == 2) ||
      (pcVar11 = (code *)PTR_snd_ctl_elem_value_get_enumerated_00436b28, iVar3 == 3)) ||
     (pcVar11 = (code *)PTR_snd_ctl_elem_value_get_boolean_00436af4, iVar3 == 1)) {
    iVar1 = (*pcVar11)(puVar8,0);
    *param_2 = iVar1;
    return 0;
  }
  uVar2 = 0x93;
  puVar6 = PTR_LAB_00436a54 + 0x4ecc;
  puVar7 = PTR_LAB_00436a54 + 0x5018;
LAB_004118fc:
  (*(code *)PTR_rts_log_00436ac8)(4,puVar6,puVar7,uVar2);
  return -0x16;
}



// ==== FUN_00411b70 @ 00411b70 size=88

void FUN_00411b70(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = (*(code *)PTR_snd_hctl_elem_get_hctl_00436aa4)(), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00411bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_snd_hctl_close_00436af0)(iVar1);
    return;
  }
  return;
}



// ==== FUN_00411d6c @ 00411d6c size=164

undefined4 FUN_00411d6c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = (*(code *)(PTR_LAB_00436a58 + 0x1bc8))();
  if (iVar1 == 0) {
    uVar3 = 0xffffffe2;
  }
  else {
    local_1c = 0;
    local_18 = 0;
    local_20 = param_2;
    iVar2 = (*(code *)(PTR_LAB_00436a58 + 0x1750))(iVar1,&local_20,1);
    uVar3 = 0;
    if (iVar2 < 0) {
      uVar3 = 0xffffffe4;
    }
  }
  (*(code *)(PTR_LAB_00436a58 + 0x1b70))(iVar1);
  return uVar3;
}



// ==== FUN_00411e10 @ 00411e10 size=416

int FUN_00411e10(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  int local_38;
  int local_34;
  int local_30;
  
  pcVar4 = (code *)(PTR_LAB_00436a58 + 0x1bc8);
  iVar1 = (*pcVar4)();
  if (iVar1 == 0) {
    iVar2 = -0x1e;
  }
  else {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    iVar2 = (*(code *)(PTR_LAB_00436a58 + 0x1750))(iVar1,&local_38,2);
    if (iVar2 < 0) {
      iVar2 = -0x1b;
    }
    else {
      iVar2 = 0;
      *param_3 = local_34;
      *param_4 = local_30;
    }
  }
  pcVar5 = (code *)(PTR_LAB_00436a58 + 0x1b70);
  (*pcVar5)(iVar1);
  if (iVar2 == 0) {
    iVar1 = (*pcVar4)(param_1);
    if (iVar1 == 0) {
      iVar2 = -0x1e;
    }
    else {
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      iVar3 = (*(code *)(PTR_LAB_00436a58 + 0x1750))(iVar1,&local_38,0);
      if (iVar3 < 0) {
        iVar2 = -0x1b;
      }
      else {
        *param_2 = local_38;
      }
    }
    (*pcVar5)(iVar1);
    if (iVar2 == 0) {
      if (*param_4 < *param_2) {
        *param_2 = *param_4;
      }
      iVar2 = 0;
      if (*param_2 < *param_3) {
        *param_2 = *param_3;
      }
    }
  }
  return iVar2;
}



// ==== FUN_00411fb0 @ 00411fb0 size=144

void FUN_00411fb0(int *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10 [2];
  
  iVar1 = (*(code *)(PTR_LAB_00436a58 + 0x1e10))
                    (PTR_LAB_00436a54 + 0x4f98,&local_18,local_10,&local_14);
  if (iVar1 == 0) {
    iVar1 = (local_14 - local_10[0]) * 2;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    *param_1 = ((local_18 - local_10[0]) * 200 + (local_14 - local_10[0])) / iVar1;
  }
  return;
}



// ==== FUN_00412040 @ 00412040 size=192

/* WARNING: Removing unreachable block (ram,0x004120d8) */

void FUN_00412040(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18 [3];
  
  puVar1 = PTR_LAB_00436a54;
  iVar2 = (*(code *)(PTR_LAB_00436a58 + 0x1e10))
                    (PTR_LAB_00436a54 + 0x4f98,&local_20,local_18,&local_1c);
  if (iVar2 == 0) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (100 < param_1) {
      param_1 = 100;
    }
    local_20 = local_18[0] + (param_1 * (local_1c - local_18[0]) + 0x32) / 100;
    (*(code *)(PTR_LAB_00436a58 + 0x1d6c))(puVar1 + 0x4f98);
  }
  return;
}



// ==== FUN_00412100 @ 00412100 size=144

void FUN_00412100(int *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10 [2];
  
  iVar1 = (*(code *)(PTR_LAB_00436a58 + 0x1e10))
                    (PTR_LAB_00436a54 + 0x4fb0,&local_18,local_10,&local_14);
  if (iVar1 == 0) {
    iVar1 = (local_14 - local_10[0]) * 2;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    *param_1 = ((local_18 - local_10[0]) * 200 + (local_14 - local_10[0])) / iVar1;
  }
  return;
}



// ==== FUN_00412190 @ 00412190 size=192

/* WARNING: Removing unreachable block (ram,0x00412228) */

void FUN_00412190(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18 [3];
  
  puVar1 = PTR_LAB_00436a54;
  iVar2 = (*(code *)(PTR_LAB_00436a58 + 0x1e10))
                    (PTR_LAB_00436a54 + 0x4fb0,&local_20,local_18,&local_1c);
  if (iVar2 == 0) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (100 < param_1) {
      param_1 = 100;
    }
    local_20 = local_18[0] + (param_1 * (local_1c - local_18[0]) + 0x32) / 100;
    (*(code *)(PTR_LAB_00436a58 + 0x1d6c))(puVar1 + 0x4fb0);
  }
  return;
}



// ==== FUN_00412250 @ 00412250 size=40

void FUN_00412250(void)

{
  (*(code *)(PTR_LAB_00436a58 + 0x1d6c))(PTR_LAB_00436a54 + 0x4fc8,0);
  return;
}



// ==== FUN_004122a0 @ 004122a0 size=40

void FUN_004122a0(void)

{
  (*(code *)(PTR_LAB_00436a58 + 0x1d6c))(PTR_LAB_00436a54 + 0x4fe0,0);
  return;
}



// ==== FUN_004122c8 @ 004122c8 size=40

void FUN_004122c8(void)

{
  (*(code *)(PTR_LAB_00436a58 + 0x1d6c))(PTR_LAB_00436a54 + 0x4fe0,1);
  return;
}



// ==== FUN_004122f0 @ 004122f0 size=204

void FUN_004122f0(void)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_00436a5c;
  if (*(int *)(PTR_DAT_00436a5c + 0x69d0) != -1) {
    (*(code *)PTR_munmap_00436b2c)(*(int *)(PTR_DAT_00436a5c + 0x69d0),0x1b412c);
    *(undefined4 *)(puVar1 + 0x69d0) = 0xffffffff;
  }
  if (*(int *)(puVar1 + 0x69d4) != 0) {
    (*(code *)PTR_sem_close_00436ab0)();
    *(undefined4 *)(puVar1 + 0x69d4) = 0;
  }
  if (*(int *)(puVar1 + 0x69d8) != 0) {
    (*(code *)PTR_sem_close_00436ab0)();
    *(undefined4 *)(puVar1 + 0x69d8) = 0;
  }
  piVar2 = (int *)(PTR_DAT_00436a5c + 0x69dc);
  do {
    if (*piVar2 != 0) {
      (*(code *)PTR_sem_close_00436ab0)(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)(puVar1 + 0x6a20));
  return;
}



// ==== FUN_004123bc @ 004123bc size=156

void FUN_004123bc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_00436a5c;
  (*(code *)PTR_sem_wait_00436ad0)(*(undefined4 *)(PTR_DAT_00436a5c + 0x69d8));
  iVar2 = **(int **)(puVar1 + 0x69d0) + 1;
  **(int **)(puVar1 + 0x69d0) = iVar2;
  if (iVar2 != 1) {
    (*(code *)PTR_sem_post_00436b3c)(*(undefined4 *)(puVar1 + 0x69d8));
    return;
  }
  (*(code *)PTR_sem_wait_00436ad0)(*(undefined4 *)(puVar1 + 0x69d4));
  (*(code *)PTR_sem_post_00436b3c)(*(undefined4 *)(puVar1 + 0x69d8));
  return;
}



// ==== FUN_00412458 @ 00412458 size=124

void FUN_00412458(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_00436a5c;
  (*(code *)PTR_sem_wait_00436ad0)(*(undefined4 *)(PTR_DAT_00436a5c + 0x69d8));
  iVar2 = **(int **)(puVar1 + 0x69d0) + -1;
  **(int **)(puVar1 + 0x69d0) = iVar2;
  if (iVar2 == 0) {
    (*(code *)PTR_sem_post_00436b3c)(*(undefined4 *)(puVar1 + 0x69d4));
  }
  (*(code *)PTR_sem_post_00436b3c)(*(undefined4 *)(puVar1 + 0x69d8));
  return;
}



// ==== FUN_004124d4 @ 004124d4 size=244

uint FUN_004124d4(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_00436a5c;
  uVar3 = param_1 + param_3;
  if (*(uint *)(PTR_DAT_00436a5c + 0x6a20) < uVar3) {
    iVar5 = *(uint *)(PTR_DAT_00436a5c + 0x6a20) - param_1;
    iVar2 = (*(code *)PTR_memcpy_00436afc)(param_2,param_1,iVar5);
    iVar4 = *(int *)(puVar1 + 0x69d0);
    (*(code *)PTR_memcpy_00436afc)(iVar2 + iVar5,iVar4 + 300,param_3 - iVar5);
    return iVar4 + 300 + (param_3 - iVar5);
  }
  (*(code *)PTR_memcpy_00436afc)(param_2,param_1);
  if (uVar3 != *(uint *)(puVar1 + 0x6a20)) {
    return uVar3;
  }
  return *(int *)(puVar1 + 0x69d0) + 300;
}



// ==== FUN_004125c8 @ 004125c8 size=200

void FUN_004125c8(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  pcVar5 = (code *)(PTR_LAB_00436a58 + 0x24d4);
  uVar1 = (*pcVar5)(param_1,param_2 + 0x12,1);
  if (*(byte *)(param_2 + 0x12) != 1) {
    bVar2 = *(byte *)(param_2 + 0x12) ^ 2;
    uVar4 = 0xffffffff;
    if (bVar2 == 0) {
      uVar4 = 4;
    }
    uVar3 = 5;
    if (bVar2 != 0) {
      uVar3 = 0;
    }
    *param_3 = uVar3;
    (*pcVar5)(uVar1,param_2 + 0x13,uVar4);
    return;
  }
  *param_3 = 6;
  (*pcVar5)(uVar1,param_2 + 0x13,5);
  return;
}



// ==== FUN_00412690 @ 00412690 size=244

uint FUN_00412690(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_00436a5c;
  uVar3 = param_1 + param_3;
  if (*(uint *)(PTR_DAT_00436a5c + 0x6a20) < uVar3) {
    iVar4 = *(uint *)(PTR_DAT_00436a5c + 0x6a20) - param_1;
    (*(code *)PTR_memcpy_00436afc)(param_1,param_2,iVar4);
    iVar2 = (*(code *)PTR_memcpy_00436afc)
                      (*(int *)(puVar1 + 0x69d0) + 300,param_2 + iVar4,param_3 - iVar4);
    return iVar2 + (param_3 - iVar4);
  }
  (*(code *)PTR_memcpy_00436afc)();
  if (uVar3 != *(uint *)(puVar1 + 0x6a20)) {
    return uVar3;
  }
  return *(int *)(puVar1 + 0x69d0) + 300;
}



// ==== FUN_0041288c @ 0041288c size=92

bool FUN_0041288c(int param_1,uint param_2,uint param_3,int param_4)

{
  if ((((param_2 & 0xf) == 0) || ((param_2 & 0xf) == (param_3 & 0xf))) &&
     ((param_3 & param_2 & 0xff00) != 0)) {
    if (param_1 != 0) {
      param_1 = param_1 + 1;
      if (param_1 == 0) {
        param_1 = 1;
      }
      return (uint)(param_4 - param_1) < 0x7fffffff;
    }
    return true;
  }
  return false;
}



// ==== FUN_00413220 @ 00413220 size=128

void FUN_00413220(int param_1,undefined2 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_00436a5c;
  (*(code *)PTR_sem_wait_00436ad0)(*(undefined4 *)(PTR_DAT_00436a5c + 0x69d4));
  *(undefined2 *)(*(int *)(puVar1 + 0x69d0) + (param_1 + 2) * 0x10 + 8) = param_2;
  (*(code *)PTR_sem_post_00436b3c)(*(undefined4 *)(puVar1 + 0x69d4));
  return;
}



// ==== FUN_00413874 @ 00413874 size=156

int FUN_00413874(void)

{
  int iVar1;
  undefined1 auStack_20 [12];
  int local_14;
  
  (*(code *)(PTR_LAB_00436a58 + 0x23bc))();
  iVar1 = *(int *)(PTR_DAT_00436a5c + 0x69d0);
  if (*(int *)(iVar1 + 4) < 1) {
    local_14 = 0;
  }
  else {
    (*(code *)(PTR_LAB_00436a58 + 0x24d4))(iVar1 + *(int *)(iVar1 + 0x10) + 300,auStack_20,0x16);
    local_14 = *(int *)(iVar1 + 0x14) - local_14;
  }
  (*(code *)(PTR_LAB_00436a58 + 0x2458))();
  return local_14;
}



// ==== FUN_0041398c @ 0041398c size=452

void FUN_0041398c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int local_60;
  undefined4 local_5c;
  int local_54;
  ushort local_50;
  undefined1 auStack_48 [12];
  int local_3c;
  int local_30;
  
  (*(code *)(PTR_LAB_00436a58 + 0x23bc))();
  iVar3 = *(int *)(PTR_DAT_00436a5c + 0x69d0);
  if ((param_2 == 0) || (*(int *)(iVar3 + 4) < 1)) {
    iVar5 = param_1 << 4;
    *(undefined4 *)(iVar3 + (param_1 + 2) * 0x10 + 4) = 0;
  }
  else {
    pcVar6 = (code *)(PTR_LAB_00436a58 + 0x24d4);
    (*pcVar6)(iVar3 + *(int *)(iVar3 + 0x10) + 300,auStack_48,0x16);
    if (param_2 < (uint)(*(int *)(iVar3 + 0x14) - local_3c)) {
      iVar5 = param_1 * 0x10;
      iVar4 = *(int *)(iVar3 + 4);
      local_30 = param_2 + local_3c;
      iVar1 = *(int *)(iVar3 + 0x10);
      if (0 < iVar4) {
        do {
          (*pcVar6)(iVar3 + iVar1 + 300,&local_60,0x16);
          if (((local_50 & 0x200) == 0) && ((uint)(local_54 - local_30) < 0x7fffffff)) break;
          iVar2 = iVar1 + local_60;
          iVar4 = (iVar4 + -0x16) - local_60;
          iVar1 = iVar2 + 0x16;
          *(undefined4 *)(iVar3 + iVar5 + 0x24) = local_5c;
          if (0x1b3fff < iVar1) {
            iVar1 = iVar2 + -0x1b3fea;
          }
        } while (0 < iVar4);
      }
    }
    else {
      iVar5 = param_1 << 4;
      *(undefined4 *)(iVar3 + (param_1 + 2) * 0x10 + 4) = *(undefined4 *)(iVar3 + 0x18);
    }
  }
  pcVar6 = (code *)(PTR_LAB_00436a58 + 0x2458);
  *(undefined4 *)(iVar3 + iVar5 + 0x1c) = 1;
  (*pcVar6)();
  return;
}



// ==== FUN_00413bf0 @ 00413bf0 size=160

void FUN_00413bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (*(code *)PTR_fshare_read_newest_00436a68)(param_1,param_2,param_3,param_4,param_5);
    if (-2 < iVar1) break;
    (*(code *)PTR_fshare_wait_00436a64)(param_1);
  }
  return;
}



// ==== FUN_00413c90 @ 00413c90 size=192

int FUN_00413c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = (*(code *)PTR_fshare_read_00436a60)(param_1,param_2,param_3,param_4,param_5);
    if (0 < iVar1) {
      return iVar1;
    }
    (*(code *)PTR_ms_sleep_00436a6c)(10);
  } while (iVar2 != 0);
  return iVar1;
}



// ==== FUN_00413d50 @ 00413d50 size=192

int FUN_00413d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = (*(code *)PTR_fshare_read_newest_00436a68)(param_1,param_2,param_3,param_4,param_5);
    if (0 < iVar1) {
      return iVar1;
    }
    (*(code *)PTR_ms_sleep_00436a6c)(10);
  } while (iVar2 != 0);
  return iVar1;
}



// ==== FUN_00413e10 @ 00413e10 size=28

void FUN_00413e10(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



// ==== FUN_00413e2c @ 00413e2c size=28

void FUN_00413e2c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memcpy(param_1,param_3,param_4);
  return;
}



// ==== FUN_00413e48 @ 00413e48 size=284

undefined4 FUN_00413e48(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_80 [2];
  undefined2 local_78;
  char acStack_76 [4];
  char acStack_72 [4];
  char local_6e [4];
  char local_6a;
  int aiStack_10 [2];
  
  if (param_1 == (int *)0x0) {
    puts("invalid para, is null\r");
    uVar2 = 0xffffffff;
  }
  else {
    memset(local_80,0,0x78);
    local_78 = 1;
    acStack_76[0] = s__tmp_logsock_00425168[0];
    acStack_76[1] = s__tmp_logsock_00425168[1];
    acStack_76[2] = s__tmp_logsock_00425168[2];
    acStack_76[3] = s__tmp_logsock_00425168[3];
    acStack_72[0] = s__tmp_logsock_00425168[4];
    acStack_72[1] = s__tmp_logsock_00425168[5];
    acStack_72[2] = s__tmp_logsock_00425168[6];
    acStack_72[3] = s__tmp_logsock_00425168[7];
    local_6e[0] = s__tmp_logsock_00425168[8];
    local_6e[1] = s__tmp_logsock_00425168[9];
    local_6e[2] = s__tmp_logsock_00425168[10];
    local_6e[3] = s__tmp_logsock_00425168[0xb];
    local_6a = s__tmp_logsock_00425168[0xc];
    local_80[1] = 0x6e;
    local_80[0] = socket(1,1,0);
    if (local_80[0] < 0) {
      puts("create socket fail\r");
      uVar2 = 0xffffffff;
    }
    else {
      piVar6 = local_80;
      do {
        piVar5 = piVar6;
        piVar4 = param_1;
        piVar6 = piVar5 + 4;
        iVar1 = piVar5[1];
        *piVar4 = *piVar5;
        iVar3 = piVar5[2];
        piVar4[1] = iVar1;
        iVar1 = piVar5[3];
        piVar4[2] = iVar3;
        piVar4[3] = iVar1;
        param_1 = piVar4 + 4;
      } while (piVar6 != aiStack_10);
      uVar2 = 0;
      iVar1 = piVar5[5];
      piVar4[4] = *piVar6;
      piVar4[5] = iVar1;
    }
  }
  return uVar2;
}



// ==== FUN_00413f64 @ 00413f64 size=536

void FUN_00413f64(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_2828;
  int local_2824 [2559];
  undefined1 *local_28;
  undefined1 auStack_24 [8];
  
  if (param_4 == 0) {
    return;
  }
  if (DAT_00477868 == (undefined4 *)0x0) {
    iVar1 = FUN_00413e48(&DAT_00486a94);
    if (iVar1 == 0) {
      DAT_00477868 = (undefined4 *)&DAT_00486a94;
    }
    else if (DAT_00477868 == (undefined4 *)0x0) goto LAB_004140b4;
  }
  memset(&local_2828,0,0x2800);
  local_2828 = getpid();
  snprintf(local_2824,0x27fc,"%s:%d|%s() ",param_1,param_3,param_2);
  local_28 = &stack0x00000010;
  iVar1 = strlen(local_2824);
  vsnprintf((int)local_2824 + iVar1,0x27fc - iVar1,param_4,&stack0x00000010);
  uVar2 = strlen(local_2824);
  if ((uVar2 < 0x27fb) && (*(char *)((int)local_2824 + (uVar2 - 1)) != '\n')) {
    *(undefined1 *)((int)local_2824 + uVar2) = 10;
    uVar2 = uVar2 + 1;
  }
  iVar1 = sendto(*DAT_00477868,&local_2828,uVar2 + 4,0x40,DAT_00477868 + 2,DAT_00477868[1]);
  if (0 < iVar1) {
    return;
  }
LAB_004140b4:
  time(auStack_24);
  puVar3 = (undefined4 *)localtime(auStack_24);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  gettimeofday(&local_2828,0);
  if (local_2824[0] < 0) {
    local_2824[0] = local_2824[0] + 0x3ff;
  }
  printf("%02d-%02d %02d:%02d:%02d.%03d %s:%d|%s() ",puVar3[4] + 1,puVar3[3],puVar3[2],puVar3[1],
         *puVar3,local_2824[0] >> 10,param_1,param_3,param_2);
  local_28 = &stack0x00000010;
  vfprintf(stdout,param_4,local_28);
  putchar(10);
  return;
}



// ==== FUN_0041417c @ 0041417c size=48

void FUN_0041417c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,"r");
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_004141ac @ 004141ac size=496

int FUN_004141ac(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,"r");
    if (iVar1 == 0) {
      return -3;
    }
    uVar2 = fileno(iVar1);
    puVar5 = local_28;
    if ((int)uVar2 < 0) {
      return 0;
    }
    puVar4 = local_a8;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
    local_28[0] = param_4;
    local_28[1] = 0;
    local_a8[uVar2 >> 5] = local_a8[uVar2 >> 5] | 1 << (uVar2 & 0x1f);
    if ((int)param_4 < 1) {
      puVar5 = (uint *)0x0;
    }
    iVar3 = select(uVar2 + 1,local_a8,0,0,puVar5);
    if (0 < iVar3) {
      if (((int)local_a8[uVar2 >> 5] >> (uVar2 & 0x1f) & 1U) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fread(param_2,1,param_3 + -1,iVar1);
        *(undefined1 *)(param_2 + iVar3) = 0;
      }
      pclose(iVar1);
      return iVar3;
    }
    iVar1 = strstr(param_1,"cloudAPI");
    if (iVar1 != 0) {
      FUN_0041417c("killall cloudAPI");
      FUN_0041417c("killall cloudAPI");
      FUN_0041417c("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_0041439c @ 0041439c size=88

int FUN_0041439c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = 8;
  local_20 = 0x200;
  local_28 = 0;
  iVar1 = mq_open(param_2,0x182,0x1b6,&local_28);
  *param_1 = iVar1;
  return -(uint)(iVar1 == -1);
}



// ==== FUN_004143f4 @ 004143f4 size=44

undefined4 FUN_004143f4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
    uVar1 = mq_send();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_00414420 @ 00414420 size=244

int FUN_00414420(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10;
  do {
    iVar1 = open(param_1,0);
    iVar2 = iVar2 + -1;
    if (iVar1 != -1) {
      iVar2 = mmap(0,param_2,1,1,iVar1,0);
      if (iVar2 == -1) {
        close(iVar1);
        return 0;
      }
      close(iVar1);
      return iVar2;
    }
    usleep(100000);
  } while (iVar2 != 0);
  return 0;
}



// ==== FUN_0041457c @ 0041457c size=412

int FUN_0041457c(char *param_1,byte *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar3 = 0;
  do {
    if (*param_1 == '\0') {
      return iVar3;
    }
    local_8 = 0xffffffff;
    iVar5 = 0;
    do {
      while( true ) {
        pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + iVar5;
        uVar1 = (undefined1)iVar5;
        iVar5 = iVar5 + 1;
        if (*pcVar4 == *param_1) break;
        if (iVar5 == 0x40) {
          iVar5 = 0;
          goto LAB_004145d4;
        }
      }
      local_8 = CONCAT31(local_8._1_3_,uVar1);
    } while (iVar5 != 0x40);
    iVar5 = 0;
LAB_004145d4:
    do {
      pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + iVar5;
      uVar1 = (undefined1)iVar5;
      iVar5 = iVar5 + 1;
      if (*pcVar4 == param_1[1]) {
        local_8._0_2_ = CONCAT11(uVar1,(char)local_8);
        if (iVar5 == 0x40) {
          iVar5 = 0;
          goto LAB_004145f8;
        }
        goto LAB_004145d4;
      }
    } while (iVar5 != 0x40);
    iVar5 = 0;
LAB_004145f8:
    do {
      pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + iVar5;
      uVar1 = (undefined1)iVar5;
      iVar5 = iVar5 + 1;
      if (*pcVar4 == param_1[2]) {
        local_8._0_3_ = CONCAT12(uVar1,(undefined2)local_8);
        if (iVar5 == 0x40) {
          iVar5 = 0;
          goto LAB_0041461c;
        }
        goto LAB_004145f8;
      }
    } while (iVar5 != 0x40);
    iVar5 = 0;
LAB_0041461c:
    do {
      pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" + iVar5;
      uVar1 = (undefined1)iVar5;
      iVar5 = iVar5 + 1;
      bVar2 = local_8._1_1_;
      if (*pcVar4 == param_1[3]) {
        local_8 = CONCAT13(uVar1,(undefined3)local_8);
        if (iVar5 == 0x40) break;
        goto LAB_0041461c;
      }
    } while (iVar5 != 0x40);
    *param_2 = bVar2 >> 4 & 3 | (char)local_8 << 2;
    if (param_1[2] == '=') {
      return iVar3 + 1;
    }
    param_2[1] = local_8._2_1_ >> 2 & 0xf | bVar2 << 4;
    if (param_1[3] == '=') {
      return iVar3 + 2;
    }
    iVar3 = iVar3 + 3;
    param_1 = param_1 + 4;
    param_2[2] = local_8._3_1_ & 0x3f | local_8._2_1_ << 6;
    param_2 = param_2 + 3;
    if (iVar3 == 0x42) {
      return 0x42;
    }
  } while( true );
}



// ==== FUN_00414718 @ 00414718 size=84

int FUN_00414718(void)

{
  int local_10;
  int local_c;
  
  gettimeofday(&local_10,0);
  return local_c / 1000 + local_10 * 1000;
}



// ==== FUN_0041476c @ 0041476c size=276

char * FUN_0041476c(byte param_1)

{
  if (param_1 == 0xe) {
    return "ISBN-13";
  }
  if (param_1 < 0xf) {
    if (param_1 == 10) {
      return "ISBN-10";
    }
    if (param_1 < 0xb) {
      if (param_1 == 8) {
        return "EAN-8";
      }
      if (param_1 == 9) {
        return "UPC-E";
      }
    }
    else {
      if (param_1 == 0xc) {
        return "UPC-A";
      }
      if (param_1 == 0xd) {
        return "EAN-13";
      }
    }
  }
  else {
    if (param_1 == 0x39) {
      return "PDF417";
    }
    if (param_1 < 0x3a) {
      if (param_1 == 0x19) {
        return "I2/5";
      }
      if (param_1 == 0x27) {
        return "CODE-39";
      }
    }
    else {
      if (param_1 == 0x40) {
        return "QR-Code";
      }
      if (param_1 == 0x80) {
        return "CODE-128";
      }
    }
  }
  return "UNKNOWN";
}



// ==== FUN_00414880 @ 00414880 size=8

undefined4 FUN_00414880(undefined4 *param_1)

{
  return *param_1;
}



// ==== FUN_00414888 @ 00414888 size=8

undefined4 FUN_00414888(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ==== FUN_00414890 @ 00414890 size=24

undefined4 FUN_00414890(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x20);
  }
  return 0;
}



// ==== FUN_004148a8 @ 004148a8 size=100

int * FUN_004148a8(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0x10;
  piVar1 = (int *)calloc(1);
  pthread_mutex_lock(&DAT_00486b0c);
  piVar2 = &DAT_00486b0c;
  iVar5 = *piVar1;
  *piVar1 = iVar5 + 1;
  pthread_mutex_unlock();
  if (-1 < iVar5 + 1) {
    return piVar1;
  }
  FUN_004025e0();
  pthread_mutex_lock(&DAT_00486b0c);
  puVar3 = &DAT_00486b0c;
  iVar5 = iVar4 + *piVar2;
  *piVar2 = iVar5;
  piVar1 = (int *)pthread_mutex_unlock();
  if (-1 < iVar5) {
    if ((iVar5 != 0) || (0 < iVar4)) {
      return piVar1;
    }
    iVar4 = piVar2[2];
    while( true ) {
      iVar5 = iVar4;
      if (iVar5 == 0) {
        piVar2[2] = 0;
        piVar1 = (int *)free(piVar2);
        return piVar1;
      }
      iVar4 = *(int *)(iVar5 + 0x20);
      *(undefined4 *)(iVar5 + 0x20) = 0;
      pthread_mutex_lock(&DAT_00486b0c);
      iVar6 = *(int *)(iVar5 + 0x1c) + -1;
      *(int *)(iVar5 + 0x1c) = iVar6;
      puVar3 = &DAT_00486b0c;
      pthread_mutex_unlock();
      if (iVar6 < 0) break;
      if (iVar6 == 0) {
        FUN_00414a04(iVar5);
      }
    }
  }
  FUN_004025e0();
  if (puVar3[9] != 0) {
    FUN_0041490c(puVar3[9],0xffffffff);
    puVar3[9] = 0;
  }
  if (puVar3[6] != 0) {
    free();
  }
  if ((puVar3[1] != 0) && (puVar3[3] != 0)) {
    free();
  }
  piVar1 = (int *)free(puVar3);
  return piVar1;
}



// ==== FUN_0041490c @ 0041490c size=248

void FUN_0041490c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  pthread_mutex_lock(&DAT_00486b0c);
  puVar2 = &DAT_00486b0c;
  iVar3 = param_2 + *param_1;
  *param_1 = iVar3;
  pthread_mutex_unlock();
  if (-1 < iVar3) {
    if ((iVar3 != 0) || (0 < param_2)) {
      return;
    }
    iVar3 = param_1[2];
    while( true ) {
      iVar1 = iVar3;
      if (iVar1 == 0) {
        param_1[2] = 0;
        free(param_1);
        return;
      }
      iVar3 = *(int *)(iVar1 + 0x20);
      *(undefined4 *)(iVar1 + 0x20) = 0;
      pthread_mutex_lock(&DAT_00486b0c);
      iVar4 = *(int *)(iVar1 + 0x1c) + -1;
      *(int *)(iVar1 + 0x1c) = iVar4;
      puVar2 = &DAT_00486b0c;
      pthread_mutex_unlock();
      if (iVar4 < 0) break;
      if (iVar4 == 0) {
        FUN_00414a04(iVar1);
      }
    }
  }
  FUN_004025e0();
  if (puVar2[9] != 0) {
    FUN_0041490c(puVar2[9],0xffffffff);
    puVar2[9] = 0;
  }
  if (puVar2[6] != 0) {
    free();
  }
  if ((puVar2[1] != 0) && (puVar2[3] != 0)) {
    free();
  }
  free(puVar2);
  return;
}



// ==== FUN_00414a04 @ 00414a04 size=112

void FUN_00414a04(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0041490c(*(int *)(param_1 + 0x24),0xffffffff);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    free();
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    free();
  }
  free(param_1);
  return;
}



// ==== FUN_00414a74 @ 00414a74 size=224

void FUN_00414a74(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    do {
      iVar4 = *(int *)(iVar2 + 0x20);
      *(undefined4 *)(iVar2 + 0x20) = 0;
      pthread_mutex_lock(&DAT_00486b0c);
      iVar3 = *(int *)(iVar2 + 0x1c) + -1;
      *(int *)(iVar2 + 0x1c) = iVar3;
      puVar1 = &DAT_00486b0c;
      pthread_mutex_unlock();
      if (iVar3 < 0) {
        FUN_004025e0();
        if (puVar1[0xc] != 0) {
          FUN_0041490c(puVar1[0xc],0xffffffff);
          puVar1[0xc] = 0;
        }
        free(puVar1);
        return;
      }
      if (iVar3 == 0) {
        FUN_00414a04(iVar2);
      }
      iVar2 = iVar4;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  free(param_1);
  return;
}



// ==== FUN_00414b54 @ 00414b54 size=136

int FUN_00414b54(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = calloc(1,0x34);
  FUN_00414f1c();
  pthread_mutex_lock(&DAT_00486b0c);
  iVar2 = *(int *)(iVar1 + 0x1c) + 1;
  *(int *)(iVar1 + 0x1c) = iVar2;
  pthread_mutex_unlock(&DAT_00486b0c);
  if (-1 < iVar2) {
    *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __assert("rc >= 0","zbar/refcnt.h",0x3e,"_zbar_refcnt");
}



// ==== FUN_00414cf4 @ 00414cf4 size=164

void FUN_00414cf4(int param_1)

{
  int iVar1;
  
  pthread_mutex_lock(&DAT_00486b0c);
  iVar1 = *(int *)(param_1 + 0x1c) + -1;
  *(int *)(param_1 + 0x1c) = iVar1;
  pthread_mutex_unlock(&DAT_00486b0c);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert("rc >= 0","zbar/refcnt.h",0x3e,"_zbar_refcnt");
  }
  if (iVar1 == 0) {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_1);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_0041490c(*(int *)(param_1 + 0x30),0xffffffff);
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      free(param_1);
      return;
    }
  }
  return;
}



// ==== FUN_00414d98 @ 00414d98 size=8

void FUN_00414d98(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



// ==== FUN_00414da0 @ 00414da0 size=12

void FUN_00414da0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



// ==== FUN_00414dac @ 00414dac size=320

undefined4
FUN_00414dac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_v0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[8] == 0) {
      pcVar8 = (code *)param_1[6];
      if ((pcVar8 != (code *)0x0) && (in_v0 = 0, param_1[3] != 0)) {
        if (pcVar8 == (code *)&DAT_00414bdc) {
          in_v0 = free(param_1[3]);
          param_1[3] = param_2;
        }
        else {
          param_1[6] = &DAT_00414bdc;
          in_v0 = (*pcVar8)();
          param_1[3] = param_2;
        }
        goto LAB_00414e7c;
      }
    }
    else {
      if (param_1[7] == 0) {
        zbar_image_free_data();
        if (param_1[0xc] != 0) {
          return *(undefined4 *)(param_1[0xc] + 8);
        }
        return 0;
      }
      puVar1 = (undefined4 *)FUN_00414b54();
      puVar2 = param_1;
      puVar7 = puVar1;
      do {
        uVar6 = *puVar2;
        uVar5 = puVar2[1];
        uVar4 = puVar2[2];
        uVar3 = puVar2[3];
        puVar2 = puVar2 + 4;
        *puVar7 = uVar6;
        puVar7[1] = uVar5;
        puVar7[2] = uVar4;
        puVar7[3] = uVar3;
        puVar7 = puVar7 + 4;
      } while (puVar2 != param_1 + 0xc);
      *puVar7 = *puVar2;
      in_v0 = (*(code *)puVar1[6])(puVar1);
      param_1[8] = 0;
      param_1[9] = 0xffffffff;
    }
  }
  param_1[3] = param_2;
LAB_00414e7c:
  param_1[4] = param_3;
  param_1[6] = param_4;
  return in_v0;
}



// ==== FUN_00414eec @ 00414eec size=28

undefined4 FUN_00414eec(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x30) + 8);
  }
  return 0;
}



// ==== FUN_00414f1c @ 00414f1c size=24

void FUN_00414f1c(void)

{
  pthread_once(&DAT_00477880,&LAB_00414f08);
  return;
}



// ==== FUN_00415128 @ 00415128 size=468

undefined4 * FUN_00415128(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if ((int)param_3 < 2) {
LAB_004151b0:
    puVar4 = (undefined4 *)calloc(1,0x34);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  else {
    iVar5 = 1;
    if (4 < (int)param_3) {
      if ((int)param_3 < 0x11) {
        iVar5 = 2;
      }
      else {
        iVar5 = 3;
        if (0x40 < (int)param_3) {
          iVar5 = 4;
        }
      }
    }
    puVar4 = *(undefined4 **)(param_1 + (iVar5 + 6) * 8 + 8);
    if (puVar4 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(param_1 + (iVar5 + 5) * 8 + 8);
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) goto LAB_004151b0;
        puVar4 = (undefined4 *)*puVar1;
        puVar1 = puVar1 + -2;
      } while (puVar4 == (undefined4 *)0x0);
    }
    uVar3 = puVar4[8];
    iVar2 = param_1 + iVar5 * 4;
    iVar6 = param_1 + iVar5 * 8;
    *(int *)(iVar2 + 0x88) = *(int *)(iVar2 + 0x88) + 1;
    iVar5 = *(int *)(iVar6 + 0x34);
    *(undefined4 *)(iVar6 + 0x38) = uVar3;
    puVar4[8] = 0;
    if (iVar5 == 0) {
      FUN_00402658();
      goto LAB_004152dc;
    }
    *(int *)(iVar6 + 0x34) = iVar5 + -1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *puVar4 = param_2;
  puVar4[0xc] = 1;
  puVar4[5] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = uVar3;
  if (puVar4[9] == 0) {
    if (0 < (int)param_3) {
      puVar4[2] = param_3 - 1;
      if ((uint)puVar4[1] < param_3) {
        if (puVar4[3] != 0) {
          free();
        }
        puVar4[1] = param_3;
        uVar3 = malloc(param_3);
        puVar4[3] = uVar3;
      }
      return puVar4;
    }
    if (puVar4[3] != 0) {
      free();
    }
    puVar4[3] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    return puVar4;
  }
LAB_004152dc:
                    /* WARNING: Subroutine does not return */
  __assert("!sym->syms","zbar/img_scanner.c",0xfb,"_zbar_image_scanner_alloc_sym");
}



// ==== FUN_00415d90 @ 00415d90 size=180

int * FUN_00415d90(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)calloc(1,0x9c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = FUN_00416db4();
    piVar1[1] = iVar2;
    iVar2 = FUN_00416858(iVar2);
    *piVar1 = iVar2;
    if ((piVar1[1] == 0) || (iVar2 == 0)) {
      dump_stats(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      FUN_00416ed4(piVar1[1],piVar1);
      FUN_00416ec8(piVar1[1],0x41568c);
      iVar2 = FUN_0041aa14();
      piVar1[2] = iVar2;
      piVar1[0x1a] = 1;
      piVar1[0x1b] = 1;
      piVar1[0x19] = piVar1[0x19] | 1;
    }
  }
  return piVar1;
}



// ==== FUN_00415e44 @ 00415e44 size=152

undefined4 FUN_00415e44(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 < 0x80) {
    uVar1 = FUN_00416fc0(*(undefined4 *)(param_1 + 4));
    return uVar1;
  }
  if (param_2 < 2) {
    if (param_3 - 0x100 < 2) {
      *(int *)(param_1 + (param_3 - 0xe6) * 4) = param_4;
      return 0;
    }
    if (param_3 == 0x80) {
      if (param_4 == 0) {
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffffe;
        return 0;
      }
      if (param_4 == 1) {
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1;
        return 0;
      }
    }
  }
  return 1;
}



// ==== FUN_0041680c @ 0041680c size=76

undefined4 FUN_0041680c(int *param_1)

{
  memset(param_1 + 2,0,0x28);
  param_1[8] = param_1[1];
  if (*param_1 != 0) {
    FUN_00416e4c();
  }
  return 0;
}



// ==== FUN_00416858 @ 00416858 size=76

undefined4 * FUN_00416858(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x30);
  *puVar1 = param_1;
  puVar1[1] = 4;
  FUN_0041680c(puVar1);
  return puVar1;
}



// ==== FUN_004168a4 @ 004168a4 size=8

undefined4 FUN_004168a4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ==== FUN_004168ac @ 004168ac size=60

uint FUN_004168ac(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 5 - param_3;
  uVar1 = (*(int *)(param_1 + 0x28) + -0x30) - param_2;
  if (0 < (int)uVar2) {
    return uVar1 >> (uVar2 & 0x1f);
  }
  if (uVar2 != 0) {
    return uVar1 << (-uVar2 & 0x1f);
  }
  return uVar1;
}



// ==== FUN_004168e8 @ 004168e8 size=212

undefined4 FUN_004168e8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[7];
  if (iVar5 == 0) {
    return 0;
  }
  iVar1 = param_1[9];
  iVar4 = param_1[2] * 0x20 + 0x10;
  if ((iVar1 == iVar4) && (iVar5 < 1)) {
    param_1[0xb] = 0;
    param_1[7] = 0;
    if (*param_1 != 0) {
      uVar2 = FUN_00416eec(*param_1,0);
      return uVar2;
    }
    uVar2 = 1;
  }
  else {
    iVar3 = 0;
    if (param_1[10] != 0) {
      iVar3 = iVar1 - param_1[10];
    }
    param_1[0xb] = iVar3;
    param_1[10] = iVar1;
    if (*param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_00416eec();
      iVar5 = param_1[7];
    }
    param_1[9] = iVar4;
    param_1[7] = -iVar5;
  }
  return uVar2;
}



// ==== FUN_004169bc @ 004169bc size=264

uint FUN_004169bc(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_1[7];
  uVar5 = 0;
  do {
    if (iVar6 == 0) {
LAB_00416a48:
      memset(param_1 + 2,0,0x28);
      param_1[8] = param_1[1];
      if (*param_1 != 0) {
        FUN_00416e7c();
      }
      return uVar5;
    }
    iVar3 = param_1[9];
    iVar4 = param_1[2] * 0x20 + 0x10;
    if ((iVar4 == iVar3) && (iVar6 < 1)) {
      param_1[0xb] = 0;
      param_1[7] = 0;
      if (*param_1 == 0) {
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        goto LAB_00416a48;
      }
      uVar2 = FUN_00416eec(*param_1,0);
      iVar6 = param_1[7];
    }
    else {
      iVar1 = 0;
      if (param_1[10] != 0) {
        iVar1 = iVar3 - param_1[10];
      }
      param_1[0xb] = iVar1;
      param_1[10] = iVar3;
      if (*param_1 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = FUN_00416eec(*param_1,iVar1);
        iVar6 = param_1[7];
      }
      iVar6 = -iVar6;
      param_1[9] = iVar4;
      param_1[7] = iVar6;
    }
    if (uVar5 < uVar2) {
      uVar5 = uVar2;
    }
  } while( true );
}



// ==== FUN_00416ac4 @ 00416ac4 size=752

undefined4 FUN_00416ac4(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar9 = param_1[2];
  iVar3 = param_1[(uVar9 - 1 & 3) + 3];
  if (uVar9 == 0) {
    param_1[6] = param_2;
    param_1[5] = param_2;
    param_1[4] = param_2;
    param_1[3] = param_2;
    iVar5 = param_2;
  }
  else {
    iVar5 = iVar3 + ((param_2 - iVar3) * 0x19 >> 5);
    param_1[(uVar9 & 3) + 3] = iVar5;
    param_2 = iVar3;
  }
  iVar3 = param_1[(uVar9 - 2 & 3) + 3];
  uVar10 = param_2 - iVar3;
  uVar7 = iVar3 - param_1[(uVar9 - 3 & 3) + 3];
  uVar4 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar4 = uVar7;
  }
  uVar1 = -uVar10;
  if (-1 < (int)uVar10) {
    uVar1 = uVar10;
  }
  uVar8 = uVar10;
  if (((int)uVar1 < (int)uVar4) && (uVar8 = uVar7, -1 < (int)(~uVar7 ^ uVar10))) {
    uVar8 = uVar10;
  }
  iVar5 = iVar5 + param_2 * -2 + iVar3;
  iVar3 = (uVar10 - iVar3) + param_1[(uVar9 - 3 & 3) + 3];
  if (iVar5 != 0) {
    if (iVar5 < 1) {
      if (iVar3 < 1) goto LAB_00416bc4;
    }
    else if (-1 < iVar3) goto LAB_00416bc4;
  }
  uVar10 = param_1[8];
  uVar4 = param_1[1];
  uVar7 = uVar4;
  if (uVar4 < uVar10) {
    uVar1 = param_1[0xb];
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        trap(0x1c00);
      }
      uVar7 = ((uVar9 * 0x20 - param_1[10]) * uVar10) / uVar1 >> 3;
      if ((uVar10 <= uVar7) || (uVar7 = uVar10 - uVar7, uVar7 <= uVar4)) {
        param_1[8] = uVar4;
        uVar7 = uVar4;
      }
    }
  }
  uVar10 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar10 = uVar8;
  }
  if (uVar10 < uVar7) {
LAB_00416bc4:
    param_1[2] = uVar9 + 1;
    return 0;
  }
  iVar11 = param_1[7];
  uVar7 = (uint)(0 < (int)uVar8);
  if (0 < iVar11) {
    uVar7 = uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    if (iVar11 < 0) {
      iVar11 = -iVar11;
    }
    uVar2 = 0;
    if ((int)uVar10 <= iVar11) goto LAB_00416bc4;
  }
  else {
    iVar6 = 0;
    if (iVar11 == 0) {
      iVar11 = 0x30;
      param_1[9] = 0x30;
    }
    else {
      iVar11 = param_1[9];
      iVar6 = 0;
      if (param_1[10] != 0) {
        iVar6 = iVar11 - param_1[10];
      }
    }
    param_1[0xb] = iVar6;
    param_1[10] = iVar11;
    if (*param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_00416eec();
      uVar4 = param_1[1];
    }
  }
  iVar3 = iVar5 - iVar3;
  param_1[7] = uVar8;
  uVar7 = uVar10 * 0xe + 0x10 >> 5;
  if (uVar4 <= uVar7) {
    uVar4 = uVar7;
  }
  param_1[8] = uVar4;
  if (iVar3 == 0) {
    iVar3 = 0x10;
  }
  else if (iVar5 == 0) {
    iVar3 = 0x20;
  }
  else {
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    iVar3 = 0x20 - (iVar5 * 0x20 + 1) / iVar3;
  }
  param_1[9] = iVar3 + uVar9 * 0x20;
  param_1[2] = uVar9 + 1;
  return uVar2;
}



// ==== FUN_00416db4 @ 00416db4 size=96

int FUN_00416db4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = calloc(1,0x7c);
  *(undefined4 *)(iVar1 + 0x4c) = 0x20;
  uVar2 = malloc(0x20);
  *(undefined4 *)(iVar1 + 0x78) = 1;
  *(undefined4 *)(iVar1 + 0x54) = uVar2;
  memset(iVar1,0,0x4c);
  *(undefined4 *)(iVar1 + 0x60) = 0;
  return iVar1;
}



// ==== FUN_00416e14 @ 00416e14 size=56

void FUN_00416e14(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    free();
  }
  free(param_1);
  return;
}



// ==== FUN_00416e4c @ 00416e4c size=48

void FUN_00416e4c(int param_1)

{
  memset(param_1,0,0x4c);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// ==== FUN_00416e7c @ 00416e7c size=60

void FUN_00416e7c(undefined1 *param_1)

{
  memset(param_1 + 4,0,0x40);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// ==== FUN_00416eb8 @ 00416eb8 size=8

undefined4 FUN_00416eb8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ==== FUN_00416ec0 @ 00416ec0 size=8

undefined4 FUN_00416ec0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ==== FUN_00416ec8 @ 00416ec8 size=12

undefined4 FUN_00416ec8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return uVar1;
}



// ==== FUN_00416ed4 @ 00416ed4 size=8

void FUN_00416ed4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ==== FUN_00416edc @ 00416edc size=8

undefined4 FUN_00416edc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ==== FUN_00416ee4 @ 00416ee4 size=8

undefined4 FUN_00416ee4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ==== FUN_00416eec @ 00416eec size=212

uint FUN_00416eec(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = *(uint *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + (bVar1 & 0xf) * 4 + 4) = param_2;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    *param_1 = bVar1 + 1;
  }
  else {
    uVar2 = FUN_0041709c();
    if (uVar2 < 2) {
      uVar2 = *(uint *)(param_1 + 0x44);
      *param_1 = *param_1 + 1;
      if (uVar2 == 0) {
        return 0;
      }
    }
    else {
      *(uint *)(param_1 + 0x44) = uVar2;
      *param_1 = *param_1 + 1;
    }
    if (*(code **)(param_1 + 0x5c) != (code *)0x0) {
      (**(code **)(param_1 + 0x5c))(param_1);
      uVar2 = *(uint *)(param_1 + 0x44);
    }
    if ((*(int *)(param_1 + 0x48) != 0) && (1 < uVar2)) {
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// ==== FUN_00416fc0 @ 00416fc0 size=212

undefined4 FUN_00416fc0(int param_1,int param_2,uint param_3,int param_4)

{
  if (param_2 == 0) {
    if ((param_3 < 4) && (param_1 != -0x78)) {
      if (param_4 == 0) {
        *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & ~(1 << (param_3 & 0x1f));
      }
      else if (param_4 == 1) {
        *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 1 << (param_3 & 0x1f);
      }
    }
    return 0;
  }
  if (((param_3 < 4) && (param_2 == 0x40)) && (param_1 != -0x78)) {
    if (param_4 == 0) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & ~(1 << (param_3 & 0x1f));
      return 0;
    }
    if (param_4 == 1) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 1 << (param_3 & 0x1f);
      return 0;
    }
  }
  return 1;
}



// ==== FUN_00417094 @ 00417094 size=8

int FUN_00417094(int param_1)

{
  return param_1 + 100;
}



// ==== FUN_0041709c @ 0041709c size=456

undefined4 FUN_0041709c(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)*param_1;
  iVar2 = *(int *)(param_1 + (uVar7 - 1 & 0xf) * 4 + 4);
  uVar1 = (iVar2 + *(int *)(param_1 + 0x60)) - *(int *)(param_1 + (uVar7 - 6 & 0xf) * 4 + 4);
  *(uint *)(param_1 + 0x60) = uVar1;
  if (((*param_1 & 1) == 0) && (6 < uVar1)) {
    iVar3 = *(int *)(param_1 + (uVar7 - 2 & 0xf) * 4 + 4) + iVar2;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    if (((iVar3 * 0xe + 1U) / uVar1 - 3 >> 1 & 0xff) == 0) {
      iVar4 = *(int *)(param_1 + (uVar7 - 3 & 0xf) * 4 + 4);
      if (uVar1 == 0) {
        trap(0x1c00);
      }
      if ((((iVar4 + *(int *)(param_1 + (uVar7 - 2 & 0xf) * 4 + 4)) * 0xe + 1U) / uVar1 - 3 >> 1 &
          0xff) == 2) {
        iVar6 = *(int *)(param_1 + (uVar7 - 4 & 0xf) * 4 + 4);
        if (uVar1 == 0) {
          trap(0x1c00);
        }
        if ((((iVar6 + iVar4) * 0xe + 1U) / uVar1 - 3 >> 1 & 0xff) == 2) {
          iVar5 = *(int *)(param_1 + (uVar7 - 5 & 0xf) * 4 + 4);
          if (uVar1 == 0) {
            trap(0x1c00);
          }
          if ((((iVar5 + iVar6) * 0xe + 1U) / uVar1 - 3 >> 1 & 0xff) == 0) {
            iVar3 = iVar3 + *(int *)(param_1 + (uVar7 & 0xf) * 4 + 4);
            iVar4 = iVar3 + iVar4;
            *(uint *)(param_1 + 0x74) =
                 (iVar2 + 1U >> 1) + *(int *)(param_1 + (uVar7 & 0xf) * 4 + 4);
            *(int *)(param_1 + 0x6c) = iVar3;
            *(int *)(param_1 + 100) = iVar4;
            *(int *)(param_1 + 0x68) = iVar4;
            *(uint *)(param_1 + 0x70) = (iVar5 + 1U >> 1) + iVar6 + iVar4;
            return 0x40;
          }
        }
      }
    }
  }
  return 0;
}



// ==== FUN_00417298 @ 00417298 size=200

void FUN_00417298(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (0 < param_4) {
    puVar6 = param_3 + param_4;
    do {
      iVar4 = ((int *)*param_3)[1];
      if (0 < iVar4) {
        puVar1 = *(undefined4 **)*param_3;
        puVar5 = puVar1 + iVar4;
        do {
          puVar7 = (undefined4 *)*puVar1;
          puVar2 = (undefined4 *)(param_1 + param_2 * 0x10);
          puVar1 = puVar1 + 1;
          iVar4 = puVar7[3];
          if (0 < iVar4) {
            param_2 = param_2 + 1;
            uVar3 = puVar7[1];
            *puVar2 = *puVar7;
            puVar2[1] = uVar3;
            puVar2[param_5] = puVar2[param_5] - iVar4;
          }
          iVar4 = puVar7[4];
          puVar2 = (undefined4 *)(param_1 + param_2 * 0x10);
          if (0 < iVar4) {
            param_2 = param_2 + 1;
            uVar3 = puVar7[1];
            *puVar2 = *puVar7;
            puVar2[1] = uVar3;
            puVar2[param_5] = puVar2[param_5] + iVar4 + puVar7[2];
          }
        } while (puVar1 != puVar5);
      }
      param_3 = param_3 + 1;
    } while (param_3 != puVar6);
  }
  return;
}



// ==== FUN_004173b0 @ 004173b0 size=128

void FUN_004173b0(int *param_1,int *param_2,int param_3,int param_4)

{
  *param_1 = (param_3 * *param_2 + param_4 * param_2[1] + (1 << (param_2[10] - 1U & 0x1f)) >>
             (param_2[10] & 0x1fU)) + param_2[8];
  param_1[1] = (param_3 * param_2[2] + param_4 * param_2[3] + (1 << (param_2[10] - 1U & 0x1f)) >>
               (param_2[10] & 0x1fU)) + param_2[9];
  return;
}



// ==== FUN_00417430 @ 00417430 size=304

undefined4 FUN_00417430(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_3 = param_3 - *(int *)(param_2 + 0x38);
  param_4 = param_4 - *(int *)(param_2 + 0x3c);
  iVar3 = param_3 * *(int *)(param_2 + 0x28) + param_4 * *(int *)(param_2 + 0x2c) +
          *(int *)(param_2 + 0x34) + (1 << (*(uint *)(param_2 + 0x40) - 1 & 0x1f)) >>
          (*(uint *)(param_2 + 0x40) & 0x1f);
  iVar1 = param_3 * *(int *)(param_2 + 0x18) + param_4 * *(int *)(param_2 + 0x1c);
  iVar2 = param_3 * *(int *)(param_2 + 0x20) + param_4 * *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    if (iVar3 < 0) {
      iVar1 = -iVar1;
      iVar2 = -iVar2;
      iVar3 = -iVar3;
    }
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    *param_1 = ((iVar1 >> 0x1f ^ (iVar3 >> 1) + (iVar1 >> 0x1f)) + iVar1) / iVar3;
    param_1[1] = ((iVar2 >> 0x1f ^ (iVar3 >> 1) + (iVar2 >> 0x1f)) + iVar2) / iVar3;
    return 0;
  }
  iVar3 = -0x80000000;
  if (-1 < iVar1) {
    iVar3 = 0x7fffffff;
  }
  *param_1 = iVar3;
  if (iVar2 < 0) {
    iVar1 = -0x80000000;
  }
  else {
    iVar1 = 0x7fffffff;
  }
  param_1[1] = iVar1;
  return 0xffffffff;
}



// ==== FUN_00417594 @ 00417594 size=712

undefined4 FUN_00417594(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int local_28 [4];
  int local_18 [4];
  int local_8 [2];
  
  piVar8 = local_18;
  piVar7 = local_28;
  local_8[1] = 0;
  iVar4 = 0;
  local_8[0] = 0;
  piVar5 = param_1;
  do {
    iVar3 = piVar5[8];
    iVar6 = iVar3 >> 2;
    if (iVar3 < 1) {
      *piVar8 = 0;
      *piVar7 = 0;
    }
    else {
      if (iVar6 < iVar3 - iVar6) {
        iVar2 = 0;
        iVar10 = piVar5[4] + iVar6 * 0x10;
        do {
          piVar1 = (int *)(iVar10 + 0xc);
          iVar10 = iVar10 + 0x10;
          iVar2 = iVar2 + *piVar1;
        } while (iVar10 != piVar5[4] + (iVar3 - iVar6) * 0x10);
        uVar9 = iVar2 >> 0x1f;
        iVar10 = -uVar9;
      }
      else {
        uVar9 = 0;
        iVar10 = 0;
        iVar2 = 0;
      }
      *piVar8 = iVar2;
      iVar3 = iVar3 + iVar6 * -2;
      *piVar7 = iVar3;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      local_8[iVar4 >> 1] =
           local_8[iVar4 >> 1] + (int)(((iVar3 >> 1) - iVar10 ^ uVar9) + iVar2) / iVar3;
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar4 != 4);
  if ((0 < param_1[8]) && (0 < param_1[9])) {
    param_1[0x10] = param_1[0x10] - (local_8[0] >> 1);
    local_18[0] = local_18[0] - (local_8[0] * local_28[0] >> 1);
    local_18[1] = local_18[1] - (local_8[0] * local_28[1] >> 1);
  }
  if ((0 < param_1[10]) && (0 < param_1[0xb])) {
    param_1[0x11] = param_1[0x11] - (local_8[1] >> 1);
    local_18[2] = local_18[2] - (local_8[1] * local_28[2] >> 1);
    local_18[3] = local_18[3] - (local_8[1] * local_28[3] >> 1);
  }
  iVar4 = local_28[0] + local_28[1];
  if (0 < iVar4) {
    iVar3 = ((local_18[1] - local_18[0]) * 2 + iVar4 * 3) / (iVar4 * 6);
    if (iVar4 * 6 == 0) {
      trap(0x1c00);
    }
    if (0 < iVar3) {
      iVar4 = (param_2 + iVar3 * -8) / (iVar3 << 2);
      if (iVar3 << 2 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 - 1U < 0x2b) && (iVar6 = local_28[2] + local_28[3], 0 < iVar6)) {
        iVar2 = ((local_18[3] - local_18[2]) * 2 + iVar6 * 3) / (iVar6 * 6);
        if (iVar6 * 6 == 0) {
          trap(0x1c00);
        }
        if (0 < iVar2) {
          iVar6 = (param_3 + iVar2 * -8) / (iVar2 << 2);
          if (iVar2 << 2 == 0) {
            trap(0x1c00);
          }
          iVar10 = iVar4 - iVar6;
          if (iVar6 - 1U < 0x2b) {
            if (iVar10 < 0) {
              iVar10 = -iVar10;
            }
            if (iVar10 < 4) {
              *param_1 = iVar3;
              param_1[1] = iVar2;
              param_1[2] = iVar4;
              param_1[3] = iVar6;
              return 0;
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}



// ==== FUN_0041785c @ 0041785c size=112

bool FUN_0041785c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_5 >> 2;
  if (param_3 <= param_5 >> 2) {
    iVar2 = param_3 + -1;
  }
  iVar1 = param_4 >> 2;
  if (param_2 <= param_4 >> 2) {
    iVar1 = param_2 + -1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  return *(char *)(param_1 + (iVar2 * param_2 - (-(uint)(0 < iVar1) & -iVar1))) != '\0';
}



// ==== FUN_004178cc @ 004178cc size=232

uint FUN_004178cc(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *local_30;
  
  iVar4 = 0;
  iVar6 = param_1[0x18];
  iVar5 = param_1[0x19];
  uVar9 = 0;
  local_30 = param_1;
  do {
    iVar8 = 0;
    piVar7 = local_30;
    do {
      piVar1 = piVar7 + 1;
      iVar3 = *piVar7;
      piVar7 = piVar7 + 2;
      iVar3 = FUN_0041785c(param_4,param_5,param_6,(param_2 - iVar6) + iVar3,
                           (param_3 - iVar5) + *piVar1);
      uVar2 = iVar8 + iVar4;
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 | iVar3 << (uVar2 & 0x1f);
    } while (iVar8 != 5);
    iVar4 = iVar4 + 5;
    local_30 = local_30 + 10;
  } while (iVar4 != 0x19);
  return uVar9;
}



// ==== FUN_004179b4 @ 004179b4 size=748

int FUN_004179b4(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  int local_2c;
  
  pcVar3 = (char *)calloc(param_4,1);
  if (param_4 + -1 < 1) {
    local_2c = 0;
  }
  else {
    local_2c = 0;
    iVar8 = param_3;
    iVar17 = 1;
    pcVar2 = pcVar3;
    do {
      if (*pcVar2 == '\0') {
        *param_2 = iVar8;
        iVar20 = *(int *)(iVar8 + 8);
        if (iVar17 < param_4) {
          iVar14 = 1;
          pcVar18 = pcVar2 + 1;
          iVar6 = iVar8;
          do {
            iVar4 = iVar6 + 0x14;
            iVar15 = iVar14 + 0x3fffffff;
            if (*pcVar18 == '\0') {
              iVar9 = param_2[iVar15];
              iVar5 = *(int *)(iVar9 + (1 - param_5) * 4) - *(int *)(iVar4 + param_5 * -4 + 4);
              iVar10 = *(int *)(iVar9 + 8) + 7 >> 2;
              if (iVar5 < 0) {
                iVar5 = -iVar5;
              }
              if (iVar10 < iVar5) break;
              iVar12 = *(int *)(iVar9 + param_5 * 4);
              iVar11 = *(int *)(iVar4 + param_5 * 4);
              iVar5 = iVar12 - iVar11;
              if (iVar5 < 0) {
                iVar5 = -iVar5;
              }
              iVar13 = *(int *)(iVar9 + 8) + iVar12;
              if (iVar5 <= iVar10) {
                iVar19 = *(int *)(iVar6 + 0x1c);
                iVar5 = (iVar13 - iVar11) - iVar19;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                if (iVar5 <= iVar10) {
                  if (0 < *(int *)(iVar9 + 0xc)) {
                    if (0 < *(int *)(iVar6 + 0x20)) {
                      iVar5 = *(int *)(iVar6 + 0x20) + ((iVar12 - *(int *)(iVar9 + 0xc)) - iVar11);
                      if (iVar5 < 0) {
                        iVar5 = -iVar5;
                      }
                      if (iVar10 < iVar5) goto LAB_00417b90;
                    }
                  }
                  if (0 < *(int *)(iVar9 + 0x10)) {
                    if (0 < *(int *)(iVar6 + 0x24)) {
                      iVar6 = (((iVar13 + *(int *)(iVar9 + 0x10)) - iVar11) - iVar19) -
                              *(int *)(iVar6 + 0x24);
                      if (iVar6 < 0) {
                        iVar6 = -iVar6;
                      }
                      if (iVar10 < iVar6) goto LAB_00417b90;
                    }
                  }
                  iVar14 = iVar14 + 1;
                  iVar20 = iVar20 + iVar19;
                  (param_2 + iVar15)[1] = iVar4;
                }
              }
            }
LAB_00417b90:
            pcVar18 = pcVar18 + 1;
            iVar6 = iVar4;
          } while (pcVar18 != pcVar3 + param_4);
          if (2 < iVar14) {
            if (iVar14 << 1 == 0) {
              trap(0x1c00);
            }
            if ((iVar20 * 2 + iVar14) / (iVar14 << 1) <= iVar14 * 0x14) {
              puVar7 = (undefined4 *)(param_1 + local_2c * 8);
              *puVar7 = param_2;
              piVar16 = param_2 + iVar14;
              puVar7[1] = iVar14;
              do {
                iVar20 = *param_2;
                param_2 = param_2 + 1;
                pcVar3[(iVar20 - param_3 >> 2) * -0x33333333] = '\x01';
              } while (piVar16 != param_2);
              local_2c = local_2c + 1;
              param_2 = piVar16;
            }
          }
        }
      }
      iVar8 = iVar8 + 0x14;
      bVar1 = iVar17 < param_4 + -1;
      iVar17 = iVar17 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar1);
  }
  free(pcVar3);
  return local_2c;
}



// ==== FUN_00417ca0 @ 00417ca0 size=420

undefined4 FUN_00417ca0(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  piVar7 = (int *)(param_1 + (1 - param_3) * 4);
  piVar8 = (int *)(param_1 + param_3 * 4);
  iVar10 = *param_2 * *piVar7 + param_2[1] * piVar7[2];
  iVar9 = *param_2 * *piVar8 + param_2[1] * piVar8[2];
  if (iVar10 < 0) {
    iVar9 = -iVar9;
    iVar10 = -iVar10;
  }
  iVar2 = FUN_0042127c(param_4);
  iVar5 = -iVar9;
  if (-1 < iVar9) {
    iVar5 = iVar9;
  }
  iVar3 = FUN_0042127c(iVar5);
  iVar4 = FUN_0042127c(param_4);
  iVar5 = FUN_0042127c(iVar5);
  uVar1 = -(-(iVar4 + iVar5 < 0x1e ^ 1) & 0x1dU - (iVar2 + iVar3));
  iVar2 = (1 << (uVar1 & 0x1f)) >> 1;
  iVar5 = iVar9 + iVar2 >> (uVar1 & 0x1f);
  iVar10 = iVar10 + iVar2 >> (uVar1 & 0x1f);
  iVar9 = iVar5;
  if (iVar5 < 0) {
    iVar9 = -iVar5;
  }
  if (iVar9 < iVar10) {
    uVar1 = -param_4 * iVar5 >> 0x1f;
    iVar9 = (int)((uVar1 ^ (iVar10 >> 1) + uVar1) + -param_4 * iVar5) / iVar10;
    if (iVar10 == 0) {
      trap(0x1c00);
    }
    iVar10 = -iVar9;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
    uVar6 = 0xffffffff;
    if (iVar10 < param_4) {
      *param_5 = iVar9;
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// ==== FUN_00417e44 @ 00417e44 size=2960

void FUN_00417e44(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15,int param_16,int param_17)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint local_70;
  
  iVar14 = param_4 - param_2;
  iVar19 = param_5 - param_3;
  iVar5 = param_6 - param_2;
  iVar15 = param_7 - param_3;
  iVar34 = param_8 - param_2;
  iVar16 = (param_8 - param_6) * iVar19 - iVar14 * (param_9 - param_7);
  iVar22 = param_9 - param_3;
  iVar24 = iVar5 * (param_9 - param_5) - (param_8 - param_4) * iVar15;
  if ((iVar16 == 0) && (iVar24 == 0)) {
    iVar6 = 1;
  }
  else {
    iVar6 = (param_8 - param_6) * (param_9 - param_5) - (param_8 - param_4) * (param_9 - param_7);
  }
  iVar37 = (iVar16 + iVar6) * iVar14;
  iVar23 = (iVar24 + iVar6) * iVar5;
  iVar32 = iVar19 * (iVar16 + iVar6);
  iVar11 = iVar15 * (iVar24 + iVar6);
  iVar17 = iVar32 * iVar24 - iVar11 * iVar16;
  local_70 = iVar23 * iVar16 - iVar37 * iVar24;
  iVar16 = iVar11 * iVar6;
  iVar11 = iVar37 * iVar11 - iVar23 * iVar32;
  iVar24 = -iVar23 * iVar6;
  iVar23 = -iVar32 * iVar6;
  iVar37 = iVar37 * iVar6;
  uVar9 = iVar11 >> 0x1f;
  uVar30 = 0;
  if (iVar16 != 0) {
    iVar6 = -iVar16;
    if (-1 < iVar16) {
      iVar6 = iVar16;
    }
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    uVar30 = (int)((uVar9 ^ (iVar6 >> 1) + uVar9) + iVar11) / iVar6 + (iVar16 >> 0x1f) ^
             iVar16 >> 0x1f;
  }
  uVar28 = 0;
  if (iVar24 != 0) {
    iVar16 = -iVar24;
    if (-1 < iVar24) {
      iVar16 = iVar24;
    }
    if (iVar16 == 0) {
      trap(0x1c00);
    }
    uVar28 = (int)((uVar9 ^ (iVar16 >> 1) + uVar9) + iVar11) / iVar16 + (iVar24 >> 0x1f) ^
             iVar24 >> 0x1f;
  }
  uVar29 = 0;
  if (iVar23 != 0) {
    iVar16 = -iVar23;
    if (-1 < iVar23) {
      iVar16 = iVar23;
    }
    if (iVar16 == 0) {
      trap(0x1c00);
    }
    uVar29 = (int)((uVar9 ^ (iVar16 >> 1) + uVar9) + iVar11) / iVar16 + (iVar23 >> 0x1f) ^
             iVar23 >> 0x1f;
  }
  uVar27 = 0;
  if (iVar37 != 0) {
    iVar16 = -iVar37;
    if (-1 < iVar37) {
      iVar16 = iVar37;
    }
    if (iVar16 == 0) {
      trap(0x1c00);
    }
    uVar27 = (int)((uVar9 ^ (iVar16 >> 1) + uVar9) + iVar11) / iVar16 + (iVar37 >> 0x1f) ^
             iVar37 >> 0x1f;
  }
  uVar18 = 0;
  if (iVar17 != 0) {
    iVar16 = -iVar17;
    if (-1 < iVar17) {
      iVar16 = iVar17;
    }
    if (iVar16 == 0) {
      trap(0x1c00);
    }
    uVar18 = (int)((uVar9 ^ (iVar16 >> 1) + uVar9) + iVar11) / iVar16 + (iVar17 >> 0x1f) ^
             iVar17 >> 0x1f;
  }
  if (local_70 != 0) {
    uVar10 = -local_70;
    if (-1 < (int)local_70) {
      uVar10 = local_70;
    }
    if (uVar10 == 0) {
      trap(0x1c00);
    }
    local_70 = (int)((uVar9 ^ ((int)uVar10 >> 1) + uVar9) + iVar11) / (int)uVar10 +
               ((int)local_70 >> 0x1f) ^ (int)local_70 >> 0x1f;
  }
  iVar23 = param_13 - param_11;
  iVar32 = param_12 - param_10;
  iVar6 = param_14 - param_10;
  iVar24 = param_15 - param_11;
  iVar16 = -iVar32;
  if (-1 < iVar32) {
    iVar16 = iVar32;
  }
  iVar11 = iVar23;
  if (iVar23 < 0) {
    iVar11 = -iVar23;
  }
  iVar37 = (param_16 - param_14) * iVar23 - iVar32 * (param_17 - param_15);
  if (iVar16 < iVar11) {
    iVar16 = iVar11;
  }
  iVar31 = (param_16 - param_14) * (param_17 - param_13) -
           (param_16 - param_12) * (param_17 - param_15);
  iVar21 = iVar37 + iVar31;
  iVar33 = iVar6 * (param_17 - param_13) - (param_16 - param_12) * iVar24;
  iVar11 = FUN_0042127c(iVar16);
  iVar17 = iVar33 + iVar31;
  iVar16 = -iVar21;
  if (-1 < iVar21) {
    iVar16 = iVar21;
  }
  iVar7 = FUN_0042127c(iVar16);
  iVar16 = -iVar6;
  if (-1 < iVar6) {
    iVar16 = iVar6;
  }
  iVar8 = -iVar24;
  if (-1 < iVar24) {
    iVar8 = iVar24;
  }
  if (iVar16 < iVar8) {
    iVar16 = iVar8;
  }
  iVar11 = iVar11 + iVar7;
  iVar7 = FUN_0042127c(iVar16);
  iVar16 = -iVar17;
  if (-1 < iVar17) {
    iVar16 = iVar17;
  }
  iVar8 = FUN_0042127c(iVar16);
  iVar16 = -iVar33;
  if (-1 < iVar33) {
    iVar16 = iVar33;
  }
  iVar12 = -iVar37;
  if (-1 < iVar37) {
    iVar12 = iVar37;
  }
  if (iVar12 < iVar16) {
    iVar12 = iVar16;
  }
  iVar16 = -iVar31;
  if (-1 < iVar31) {
    iVar16 = iVar31;
  }
  if (iVar12 < iVar16) {
    iVar12 = iVar16;
  }
  iVar16 = FUN_0042127c(iVar12);
  uVar10 = -(uint)(iVar11 < iVar7 + iVar8) & iVar11 - (iVar7 + iVar8);
  iVar7 = iVar11 - uVar10;
  uVar9 = -(uint)(iVar7 < iVar16) & iVar7 - iVar16;
  uVar9 = -(-((int)(iVar7 - uVar9) < 0x1c ^ 1) & uVar9 + (uVar10 - iVar11) + 0x1b);
  iVar11 = 1 << (uVar9 & 0x1f);
  iVar16 = iVar11 >> 1;
  lVar2 = CONCAT44(iVar11 >> 0x1f,iVar16);
  lVar1 = (longlong)iVar32 * (longlong)iVar21 + lVar2;
  lVar3 = (longlong)iVar6 * (longlong)iVar17 + lVar2;
  lVar4 = (longlong)iVar21 * (longlong)iVar23 + lVar2;
  lVar2 = (longlong)iVar17 * (longlong)iVar24 + lVar2;
  iVar7 = (int)((ulonglong)lVar1 >> 0x20);
  iVar17 = (int)((ulonglong)lVar4 >> 0x20);
  iVar11 = (int)((ulonglong)lVar2 >> 0x20);
  iVar21 = (int)((ulonglong)lVar3 >> 0x20);
  uVar35 = ~uVar9;
  uVar20 = uVar9 & 0x20;
  uVar10 = iVar7 >> (uVar9 & 0x1f);
  if (uVar20 == 0) {
    uVar10 = iVar7 * 2 << (uVar35 & 0x1f) | (uint)lVar1 >> (uVar9 & 0x1f);
  }
  uVar26 = iVar21 >> (uVar9 & 0x1f);
  if (uVar20 == 0) {
    uVar26 = iVar21 * 2 << (uVar35 & 0x1f) | (uint)lVar3 >> (uVar9 & 0x1f);
  }
  uVar25 = iVar17 >> (uVar9 & 0x1f);
  if (uVar20 == 0) {
    uVar25 = iVar17 * 2 << (uVar35 & 0x1f) | (uint)lVar4 >> (uVar9 & 0x1f);
  }
  uVar13 = iVar11 >> (uVar9 & 0x1f);
  if (uVar20 == 0) {
    uVar13 = iVar11 * 2 << (uVar35 & 0x1f) | (uint)lVar2 >> (uVar9 & 0x1f);
  }
  iVar11 = (int)uVar30 >> 1;
  uVar20 = (int)uVar10 >> 0x1f;
  if (uVar30 == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = (int)((uVar20 ^ iVar11 + uVar20) + uVar10) / (int)uVar30;
    if (uVar30 == 0) {
      trap(0x1c00);
    }
  }
  iVar21 = 0;
  iVar7 = (int)uVar29 >> 1;
  uVar35 = (int)uVar26 >> 0x1f;
  if ((uVar29 != 0) &&
     (iVar21 = (int)((uVar35 ^ iVar7 + uVar35) + uVar26) / (int)uVar29, uVar29 == 0)) {
    trap(0x1c00);
  }
  iVar17 = iVar17 + iVar21;
  *param_1 = iVar17;
  iVar21 = (int)uVar28 >> 1;
  if (uVar28 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)((uVar20 ^ iVar21 + uVar20) + uVar10) / (int)uVar28;
    if (uVar28 == 0) {
      trap(0x1c00);
    }
  }
  iVar12 = (int)uVar27 >> 1;
  if (uVar27 == 0) {
    iVar38 = 0;
  }
  else {
    iVar38 = (int)((uVar35 ^ iVar12 + uVar35) + uVar26) / (int)uVar27;
    if (uVar27 == 0) {
      trap(0x1c00);
    }
  }
  iVar8 = iVar8 + iVar38;
  param_1[1] = iVar8;
  uVar10 = (int)uVar25 >> 0x1f;
  if (uVar30 == 0) {
    iVar38 = 0;
  }
  else {
    iVar38 = (int)((uVar10 ^ iVar11 + uVar10) + uVar25) / (int)uVar30;
    if (uVar30 == 0) {
      trap(0x1c00);
    }
  }
  iVar36 = 0;
  uVar20 = (int)uVar13 >> 0x1f;
  if ((uVar29 != 0) &&
     (iVar36 = (int)((uVar20 ^ iVar7 + uVar20) + uVar13) / (int)uVar29, uVar29 == 0)) {
    trap(0x1c00);
  }
  iVar38 = iVar38 + iVar36;
  param_1[3] = iVar38;
  if (uVar28 == 0) {
    iVar36 = 0;
  }
  else {
    iVar36 = (int)((uVar10 ^ iVar21 + uVar10) + uVar25) / (int)uVar28;
    if (uVar28 == 0) {
      trap(0x1c00);
    }
  }
  if (uVar27 == 0) {
    iVar39 = 0;
  }
  else {
    iVar39 = (int)((uVar20 ^ iVar12 + uVar20) + uVar13) / (int)uVar27;
    if (uVar27 == 0) {
      trap(0x1c00);
    }
  }
  iVar36 = iVar36 + iVar39;
  param_1[4] = iVar36;
  uVar10 = iVar37 >> 0x1f;
  if (uVar30 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = (int)((iVar11 + uVar10 ^ uVar10) + iVar37) / (int)uVar30;
    if (uVar30 == 0) {
      trap(0x1c00);
    }
  }
  uVar30 = iVar33 >> 0x1f;
  uVar20 = iVar31 >> 0x1f;
  if (uVar29 != 0) {
    if (uVar29 == 0) {
      trap(0x1c00);
    }
    iVar11 = iVar11 + (int)((iVar7 + uVar30 ^ uVar30) + iVar33) / (int)uVar29;
  }
  if (uVar18 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)((((int)uVar18 >> 1) + uVar20 ^ uVar20) + iVar31) / (int)uVar18;
    if (uVar18 == 0) {
      trap(0x1c00);
    }
  }
  iVar11 = iVar11 + iVar7 + iVar16 >> (uVar9 & 0x1f);
  param_1[6] = iVar11;
  if (uVar28 == 0) {
    iVar37 = 0;
  }
  else {
    iVar37 = (int)((iVar21 + uVar10 ^ uVar10) + iVar37) / (int)uVar28;
    if (uVar28 == 0) {
      trap(0x1c00);
    }
  }
  if (uVar27 != 0) {
    if (uVar27 == 0) {
      trap(0x1c00);
    }
    iVar37 = iVar37 + (int)((iVar12 + uVar30 ^ uVar30) + iVar33) / (int)uVar27;
  }
  if (local_70 == 0) {
    iVar21 = 0;
  }
  else {
    iVar21 = (int)((((int)local_70 >> 1) + uVar20 ^ uVar20) + iVar31) / (int)local_70;
    if (local_70 == 0) {
      trap(0x1c00);
    }
  }
  iVar33 = iVar37 + iVar21 + iVar16 >> (uVar9 & 0x1f);
  iVar16 = iVar31 + iVar16 >> (uVar9 & 0x1f);
  param_1[7] = iVar33;
  param_1[8] = iVar16;
  param_1[9] = param_10;
  param_1[10] = param_11;
  iVar21 = iVar16 + iVar14 * iVar11 + iVar19 * iVar33;
  iVar37 = iVar16 + iVar5 * iVar11 + iVar15 * iVar33;
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  iVar16 = iVar16 + iVar34 * iVar11 + iVar22 * iVar33;
  param_1[2] = ((param_16 - param_10) * iVar16 - (iVar34 * iVar17 + iVar22 * iVar8)) +
               (iVar6 * iVar37 - (iVar5 * iVar17 + iVar15 * iVar8)) +
               (iVar32 * iVar21 - (iVar14 * iVar17 + iVar19 * iVar8)) + 2 >> 2;
  param_1[5] = ((param_17 - param_11) * iVar16 - (iVar34 * iVar38 + iVar22 * iVar36)) +
               (iVar24 * iVar37 - (iVar5 * iVar38 + iVar15 * iVar36)) +
               (iVar23 * iVar21 - (iVar14 * iVar38 + iVar19 * iVar36)) + 2 >> 2;
  return;
}



// ==== FUN_004189d4 @ 004189d4 size=360

void FUN_004189d4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint local_18 [3];
  
  iVar14 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar5 = *(int *)(iVar14 + 0xc);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  piVar4 = *(int **)(iVar14 + 8);
  if (0 < iVar5) {
    iVar17 = *(int *)(param_1 + 0x40);
    iVar13 = *(int *)(param_1 + 0x44);
    iVar12 = *(int *)(param_2 + 0x10);
    iVar11 = *(int *)(param_2 + 0x20);
    iVar10 = *(int *)(param_2 + 0x14);
    iVar9 = *(int *)(param_2 + 0x24);
    iVar8 = *(int *)(param_2 + 0x18);
    iVar7 = *(int *)(param_2 + 0x1c);
    piVar15 = piVar4;
    do {
      piVar16 = piVar15 + 4;
      iVar1 = *piVar15 - iVar11;
      iVar6 = piVar15[1] - iVar9;
      local_18[0] = (iVar1 * iVar12 + iVar6 * iVar10) - iVar17;
      uVar3 = -local_18[0];
      if (-1 < (int)local_18[0]) {
        uVar3 = local_18[0];
      }
      local_18[1] = (iVar1 * iVar8 + iVar6 * iVar7) - iVar13;
      iVar1 = -local_18[1];
      if (-1 < (int)local_18[1]) {
        iVar1 = local_18[1];
      }
      uVar2 = local_18[(int)uVar3 < iVar1];
      uVar3 = ~uVar2 >> 0x1f | (uint)((int)uVar3 < iVar1) << 1;
      iVar1 = param_1 + uVar3 * 4;
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
      piVar15[2] = uVar3;
      piVar15[3] = uVar2;
      piVar15 = piVar16;
    } while (piVar16 != piVar4 + iVar5 * 4);
  }
  qsort(piVar4,iVar5,0x10,&LAB_00417560);
  iVar5 = *(int *)(iVar14 + 8) + *(int *)(param_1 + 0x20) * 0x10;
  *(int *)(param_1 + 0x10) = *(int *)(iVar14 + 8);
  iVar14 = iVar5 + *(int *)(param_1 + 0x24) * 0x10;
  *(int *)(param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 0x18) = iVar14;
  *(int *)(param_1 + 0x1c) = iVar14 + *(int *)(param_1 + 0x28) * 0x10;
  return;
}



// ==== FUN_00418b3c @ 00418b3c size=404

void FUN_00418b3c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_28 [3];
  
  iVar6 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar3 = *(int *)(iVar6 + 0xc);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar2 = *(int *)(iVar6 + 8);
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      while( true ) {
        iVar5 = iVar4 * 0x10;
        iVar2 = FUN_00417430(local_28,param_2,*(undefined4 *)(iVar2 + iVar5),
                             ((undefined4 *)(iVar2 + iVar5))[1]);
        if (-1 < iVar2) break;
        iVar2 = *(int *)(iVar6 + 8);
        iVar4 = iVar4 + 1;
        *(uint *)(iVar2 + iVar5 + 0xc) = local_28[0];
        iVar3 = *(int *)(iVar6 + 0xc);
        *(undefined4 *)(iVar2 + iVar5 + 8) = 4;
        if (iVar3 <= iVar4) goto LAB_00418c64;
      }
      iVar4 = iVar4 + 1;
      local_28[0] = local_28[0] - *(int *)(param_1 + 0x40);
      local_28[1] = local_28[1] - *(int *)(param_1 + 0x44);
      iVar3 = -local_28[1];
      if (-1 < (int)local_28[1]) {
        iVar3 = local_28[1];
      }
      uVar1 = -local_28[0];
      if (-1 < (int)local_28[0]) {
        uVar1 = local_28[0];
      }
      uVar7 = local_28[(int)uVar1 < iVar3];
      iVar2 = *(int *)(iVar6 + 8);
      uVar1 = ~uVar7 >> 0x1f | (uint)((int)uVar1 < iVar3) << 1;
      iVar3 = param_1 + uVar1 * 4;
      *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
      *(uint *)(iVar2 + iVar5 + 0xc) = uVar7;
      iVar3 = *(int *)(iVar6 + 0xc);
      *(uint *)(iVar2 + iVar5 + 8) = uVar1;
    } while (iVar4 < iVar3);
  }
LAB_00418c64:
  qsort(iVar2,iVar3,0x10,&LAB_00417560);
  iVar2 = *(int *)(iVar6 + 8) + *(int *)(param_1 + 0x20) * 0x10;
  *(int *)(param_1 + 0x10) = *(int *)(iVar6 + 8);
  iVar3 = iVar2 + *(int *)(param_1 + 0x24) * 0x10;
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x18) = iVar3;
  *(int *)(param_1 + 0x1c) = iVar3 + *(int *)(param_1 + 0x28) * 0x10;
  return;
}



// ==== FUN_00418cd0 @ 00418cd0 size=1084

void FUN_00418cd0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int local_60 [4];
  int local_50 [5];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_38 = param_1 + param_4 * 4;
  local_50[2] = *(int *)(local_38 + 0x20);
  piVar9 = *(int **)(local_38 + 0x10);
  if (local_50[2] < 2) {
    *(undefined4 *)(local_38 + 0x30) = 0;
    return;
  }
  param_4 = param_4 >> 1;
  local_2c = local_50[2] * 0x43;
  local_50[4] = local_50[2] + -1;
  local_34 = local_50[2] >> 1;
  piVar13 = piVar9 + local_50[2] * 4;
  iVar8 = 0;
  local_30 = local_50[2] << 1;
  local_3c = 0;
  local_50[3] = 0x11;
LAB_00418db8:
  do {
    iVar2 = FUN_004209f8(param_3,local_50[2]);
    iVar3 = FUN_004209f8(param_3,local_50[4]);
    piVar12 = piVar9 + iVar2 * 4;
    if (iVar2 <= iVar3) {
      iVar3 = iVar3 + 1;
    }
    iVar6 = *piVar12 - *(int *)(param_2 + 0x20);
    piVar7 = piVar9 + iVar3 * 4;
    iVar5 = piVar12[1] - *(int *)(param_2 + 0x24);
    iVar2 = *piVar7 - *(int *)(param_2 + 0x20);
    iVar3 = piVar7[1] - *(int *)(param_2 + 0x24);
    local_50[0] = (*(int *)(param_2 + 0x10) * iVar6 + *(int *)(param_2 + 0x14) * iVar5) -
                  *(int *)(param_1 + 0x40);
    local_50[1] = (iVar6 * *(int *)(param_2 + 0x18) + iVar5 * *(int *)(param_2 + 0x1c)) -
                  *(int *)(param_1 + 0x44);
    local_60[0] = (*(int *)(param_2 + 0x10) * iVar2 + *(int *)(param_2 + 0x14) * iVar3) -
                  *(int *)(param_1 + 0x40);
    local_60[1] = (*(int *)(param_2 + 0x18) * iVar2 + *(int *)(param_2 + 0x1c) * iVar3) -
                  *(int *)(param_1 + 0x44);
    iVar2 = local_50[1 - param_4] - local_60[1 - param_4];
    iVar3 = local_50[param_4] - local_60[param_4];
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar5 = *piVar12 - *piVar7;
    if (iVar3 <= iVar2) {
      iVar3 = piVar12[1] - piVar7[1];
      iVar3 = FUN_0042123c((iVar5 * iVar5 + iVar3 * iVar3) * 0x20);
      iVar2 = 0;
      piVar11 = piVar9;
      do {
        while( true ) {
          iVar5 = (*piVar7 - *piVar12) * (piVar11[1] - piVar12[1]) +
                  (piVar7[1] - piVar12[1]) * (*piVar12 - *piVar11);
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 <= iVar3) break;
          piVar10 = piVar11 + 4;
          piVar11[3] = piVar11[3] & 0xfffffffe;
          piVar11 = piVar10;
          if (piVar10 == piVar13) goto LAB_00418f88;
        }
        piVar10 = piVar11 + 4;
        iVar2 = iVar2 + 1;
        piVar11[3] = piVar11[3] | 1;
        piVar11 = piVar10;
      } while (piVar10 != piVar13);
LAB_00418f88:
      piVar12 = piVar9;
      if (local_3c < iVar2) {
        do {
          piVar7 = piVar12 + 4;
          piVar12[3] = piVar12[3] << 1;
          piVar12 = piVar7;
        } while (piVar7 != piVar13);
        local_3c = iVar2;
        if (local_34 < iVar2) {
          iVar8 = iVar8 + 1;
          local_50[3] = (local_2c + iVar2 * -0x3f + -1) / local_30;
          if (local_30 == 0) {
            trap(0x1c00);
          }
          if (local_50[3] <= iVar8) goto LAB_00419008;
          goto LAB_00418db8;
        }
      }
    }
    iVar8 = iVar8 + 1;
    if (local_50[3] <= iVar8) {
LAB_00419008:
      if (local_3c != 0) {
        iVar8 = 0;
        iVar3 = 0;
        piVar13 = piVar9;
        do {
          uVar4 = piVar13[3];
          bVar1 = iVar8 < iVar3;
          iVar3 = iVar3 + 1;
          if ((uVar4 & 2) != 0) {
            if (bVar1) {
              iVar6 = *piVar13;
              piVar12 = piVar9 + iVar8 * 4;
              iVar5 = piVar13[1];
              iVar2 = piVar13[2];
              *piVar12 = iVar6;
              piVar12[1] = iVar5;
              piVar12[2] = iVar2;
              piVar12[3] = uVar4;
              *piVar13 = iVar6;
              piVar13[1] = iVar5;
              piVar13[2] = iVar2;
              piVar13[3] = uVar4;
            }
            iVar8 = iVar8 + 1;
          }
          piVar13 = piVar13 + 4;
        } while (iVar8 < local_3c);
      }
      *(int *)(local_38 + 0x30) = local_3c;
      return;
    }
  } while( true );
}



// ==== FUN_0041910c @ 0041910c size=1048

void FUN_0041910c(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  iVar21 = param_3 >> 1;
  if (param_3 < 1) {
    iVar17 = iVar21 / param_3;
    if (param_3 == 0) {
      trap(0x1c00);
    }
    uVar15 = 0;
    iVar16 = -0x80000000 - iVar17;
    iVar16 = iVar16 - (-(uint)(iVar16 < iVar17 + -0x7fffffff) & iVar16 + (0x7fffffff - iVar17));
    iVar21 = iVar17;
  }
  else {
    iVar14 = 0x7fffffff;
    iVar12 = -0x80000000;
    iVar16 = -0x80000000;
    iVar17 = 0;
    iVar18 = 0;
    piVar10 = param_2;
    iVar13 = iVar14;
    do {
      iVar1 = *piVar10;
      piVar11 = piVar10 + 2;
      iVar20 = piVar10[1];
      iVar18 = iVar18 + iVar1;
      if (iVar1 < iVar14) {
        iVar14 = iVar1;
      }
      if (iVar16 < iVar1) {
        iVar16 = iVar1;
      }
      iVar17 = iVar17 + iVar20;
      if (iVar20 < iVar13) {
        iVar13 = iVar20;
      }
      if (iVar12 < iVar20) {
        iVar12 = iVar20;
      }
      piVar10 = piVar11;
    } while (piVar11 != param_2 + param_3 * 2);
    iVar17 = (iVar17 + iVar21) / param_3;
    if (param_3 == 0) {
      trap(0x1c00);
    }
    iVar21 = (iVar18 + iVar21) / param_3;
    if (param_3 == 0) {
      trap(0x1c00);
    }
    iVar18 = iVar12 - iVar17;
    uVar15 = -(uint)(iVar18 < iVar17 - iVar13) & iVar18 + (iVar13 - iVar17);
    iVar16 = iVar16 - iVar21;
    iVar16 = iVar16 - (-(uint)(iVar16 < iVar21 - iVar14) & iVar16 + (iVar14 - iVar21));
    uVar15 = -(uint)(iVar16 < (int)(iVar18 - uVar15)) & iVar16 + uVar15 + (iVar17 - iVar12);
  }
  iVar16 = (iVar16 - uVar15) * param_3;
  iVar12 = FUN_0042127c(iVar16);
  iVar16 = FUN_0042127c(iVar16);
  uVar15 = -(-(iVar16 < 0x10 ^ 1) & 0xfU - iVar12);
  iVar16 = (1 << (uVar15 & 0x1f)) >> 1;
  if (param_3 < 1) {
    iVar18 = 0;
    iVar16 = 0;
    iVar14 = 0;
    iVar12 = 0;
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    iVar14 = 0;
    iVar12 = 0;
    piVar10 = param_2;
    do {
      piVar11 = piVar10 + 2;
      iVar18 = (*piVar10 - iVar21) + iVar16 >> (uVar15 & 0x1f);
      iVar12 = iVar12 + iVar18 * iVar18;
      iVar1 = (piVar10[1] - iVar17) + iVar16 >> (uVar15 & 0x1f);
      iVar13 = iVar13 + iVar18 * iVar1;
      iVar14 = iVar14 + iVar1 * iVar1;
      piVar10 = piVar11;
    } while (piVar11 != param_2 + param_3 * 2);
    iVar16 = iVar12 - iVar14;
    iVar18 = iVar13 * -2;
    if (iVar16 < 0) {
      iVar16 = -iVar16;
    }
    iVar13 = iVar13 * 2;
    if (-1 < iVar18) {
      iVar13 = iVar18;
    }
  }
  iVar1 = FUN_004212e4(iVar16,iVar18);
  iVar19 = param_4 + 1 >> 1;
  iVar20 = FUN_0042127c(iVar16);
  iVar2 = FUN_0042127c(iVar16);
  iVar3 = FUN_0042127c(iVar13);
  iVar4 = FUN_0042127c(iVar13);
  iVar5 = FUN_0042127c(iVar16);
  iVar6 = FUN_0042127c(iVar16);
  iVar7 = FUN_0042127c(iVar16);
  iVar8 = FUN_0042127c(iVar13);
  iVar13 = FUN_0042127c(iVar13);
  iVar9 = FUN_0042127c(iVar16);
  uVar15 = -(-(uint)(0 < (int)(((iVar6 - (-(uint)(iVar9 < iVar13) & iVar7 - iVar8)) + 1) - iVar19))
            & iVar19 + ~(iVar20 - (-(uint)(iVar5 < iVar4) & iVar2 - iVar3)));
  iVar13 = (1 << (uVar15 & 0x1f)) >> 1;
  if (iVar14 < iVar12) {
    iVar14 = iVar13 + iVar18 >> (uVar15 & 0x1f);
    iVar12 = iVar13 + iVar1 + iVar16 >> (uVar15 & 0x1f);
    *param_1 = iVar14;
    param_1[1] = iVar12;
  }
  else {
    iVar12 = iVar13 + iVar18 >> (uVar15 & 0x1f);
    iVar14 = iVar13 + iVar1 + iVar16 >> (uVar15 & 0x1f);
    param_1[1] = iVar12;
    *param_1 = iVar14;
  }
  param_1[2] = -(iVar14 * iVar21 + iVar12 * iVar17);
  return;
}



// ==== FUN_00419524 @ 00419524 size=620

void FUN_00419524(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_38 [4];
  
  iVar11 = param_3 + param_5 * 4;
  iVar7 = param_4 + param_5 * 4;
  iVar4 = *(int *)(iVar11 + 0x30);
  iVar5 = *(int *)(iVar7 + 0x30);
  local_38[3] = param_5;
  iVar6 = (iVar4 - (-(uint)(iVar4 < 1) & iVar4 - 1U)) + (iVar5 - (-(uint)(iVar5 < 1) & iVar5 - 1U));
  local_38[2] = param_4;
  puVar1 = (undefined4 *)malloc(iVar6 * 8);
  if (iVar4 < 1) {
    iVar4 = iVar4 + 1;
    local_38[0] = *(int *)(param_3 + 0x40);
    local_38[1] = *(undefined4 *)(param_3 + 0x44);
    local_38[local_38[3] >> 1] =
         local_38[local_38[3] >> 1] +
         ((local_38[3] & 1U) * 2 + -1) * *(int *)(param_3 + (local_38[3] >> 1) * 4);
    FUN_004173b0(puVar1,param_2,local_38[0],local_38[1]);
  }
  else {
    puVar8 = *(undefined4 **)(iVar11 + 0x10);
    puVar2 = puVar1;
    puVar10 = puVar8;
    do {
      puVar9 = puVar10 + 4;
      *puVar2 = *puVar10;
      puVar2[1] = puVar10[1];
      puVar2 = puVar2 + 2;
      puVar10 = puVar9;
    } while (puVar9 != puVar8 + iVar4 * 4);
  }
  if (iVar5 < 1) {
    local_38[0] = *(int *)(local_38[2] + 0x40);
    local_38[1] = *(undefined4 *)(local_38[2] + 0x44);
    local_38[local_38[3] >> 1] =
         local_38[local_38[3] >> 1] +
         ((local_38[3] & 1U) * 2 + -1) * *(int *)(local_38[2] + (local_38[3] >> 1) * 4);
    FUN_004173b0(puVar1 + iVar4 * 2,param_2,local_38[0],local_38[1]);
    uVar3 = *(undefined4 *)(param_2 + 0x28);
  }
  else {
    puVar8 = *(undefined4 **)(iVar7 + 0x10);
    puVar2 = puVar1 + iVar4 * 2;
    puVar10 = puVar8;
    do {
      puVar9 = puVar10 + 4;
      *puVar2 = *puVar10;
      puVar2[1] = puVar10[1];
      puVar2 = puVar2 + 2;
      puVar10 = puVar9;
    } while (puVar9 != puVar8 + iVar5 * 4);
    uVar3 = *(undefined4 *)(param_2 + 0x28);
  }
  FUN_0041910c(param_1,puVar1,iVar6,uVar3);
  if (*param_1 * **(int **)(param_3 + 0x48) + param_1[1] * (*(int **)(param_3 + 0x48))[1] +
      param_1[2] < 0) {
    *param_1 = -*param_1;
    param_1[1] = -param_1[1];
    param_1[2] = -param_1[2];
  }
  free(puVar1);
  return;
}



// ==== FUN_00419790 @ 00419790 size=260

undefined4 FUN_00419790(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar5 = param_2 + param_3 * 4;
  iVar4 = *(int *)(iVar5 + 0x30);
  if (iVar4 < 2) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar1 = (undefined4 *)malloc(iVar4 << 3);
    puVar6 = *(undefined4 **)(iVar5 + 0x10);
    puVar3 = puVar1;
    puVar7 = puVar6;
    do {
      puVar8 = puVar7 + 4;
      *puVar3 = *puVar7;
      puVar3[1] = puVar7[1];
      puVar3 = puVar3 + 2;
      puVar7 = puVar8;
    } while (puVar8 != puVar6 + iVar4 * 4);
    FUN_0041910c(param_1,puVar1,iVar4,param_4);
    if (*param_1 * **(int **)(param_2 + 0x48) + param_1[1] * (*(int **)(param_2 + 0x48))[1] +
        param_1[2] < 0) {
      *param_1 = -*param_1;
      param_1[1] = -param_1[1];
      param_1[2] = -param_1[2];
    }
    free(puVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_00419894 @ 00419894 size=188

void FUN_00419894(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    iVar1 = -0x80000000;
    if (-1 < param_4) {
      iVar1 = 0x7fffffff;
    }
    *param_1 = iVar1;
    if (param_5 < 0) {
      iVar1 = -0x80000000;
    }
    else {
      iVar1 = 0x7fffffff;
    }
    param_1[1] = iVar1;
    return;
  }
  if (param_6 < 0) {
    param_4 = -param_4;
    param_5 = -param_5;
    param_6 = -param_6;
  }
  if (param_6 == 0) {
    trap(0x1c00);
  }
  if (param_6 == 0) {
    trap(0x1c00);
  }
  *param_1 = (param_4 + (param_4 >> 0x1f ^ (param_6 >> 1) + (param_4 >> 0x1f))) / param_6 + *param_2
  ;
  param_1[1] = (param_5 + (param_5 >> 0x1f ^ (param_6 >> 1) + (param_5 >> 0x1f))) / param_6 +
               *param_3;
  return;
}



// ==== FUN_00419950 @ 00419950 size=832

uint FUN_00419950(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58 [4];
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar8 = param_2[4];
  iVar5 = 1 - param_6;
  piVar6 = (int *)(param_1 + param_6 * 4);
  iVar1 = *piVar6;
  piVar3 = (int *)(param_1 + iVar5 * 4);
  iVar2 = *piVar3;
  iVar7 = piVar3[0x10];
  iVar9 = param_2[5];
  iVar15 = *param_2;
  local_58[param_6] = piVar6[0x10] + iVar1 * -7;
  uVar12 = 0;
  piVar6 = param_2 + iVar5;
  iVar10 = param_2[2];
  piVar3 = param_2 + param_6;
  local_58[iVar5] = iVar7 + iVar2 * -3;
  local_44 = param_2 + 0xf;
  local_38 = local_58[0] * iVar8 + local_58[1] * iVar9 + param_2[0xc];
  uVar13 = 0;
  local_40 = local_58[0] * iVar15 + local_58[1] * param_2[1];
  local_34 = iVar2 * *piVar6;
  local_3c = local_58[0] * iVar10 + local_58[1] * param_2[3];
  local_30 = iVar2 * piVar6[2];
  local_2c = iVar2 * piVar6[4];
  local_58[2] = iVar1 * *piVar3;
  local_58[3] = iVar1 * piVar3[2];
  local_48 = iVar1 * piVar3[4];
  do {
    uVar11 = uVar13 + 3;
    iVar1 = local_38;
    iVar2 = local_40;
    iVar5 = local_3c;
    do {
      iVar7 = iVar2 + local_58[2];
      iVar8 = iVar5 + local_58[3];
      FUN_00419894(&local_60,param_2 + 0xe,local_44,iVar2,iVar5,iVar1);
      iVar1 = iVar1 + local_48;
      iVar2 = FUN_0041785c(param_3,param_4,param_5,local_60,local_5c);
      uVar14 = uVar13 & 0x1f;
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 | iVar2 << uVar14;
      iVar2 = iVar7;
      iVar5 = iVar8;
    } while (uVar13 != uVar11);
    local_40 = local_40 + local_34;
    local_3c = local_3c + local_30;
    local_38 = local_38 + local_2c;
  } while (uVar13 != 0x12);
  uVar13 = (uVar12 >> 0xc) - 7;
  if (uVar13 < 0x22) {
    puVar4 = &DAT_00425aa4;
    uVar13 = (&DAT_00425aa4)[uVar13];
    uVar11 = uVar13 ^ uVar12;
    if (uVar11 == 0) {
LAB_00419c34:
      return uVar13 >> 0xc;
    }
    iVar1 = 3;
    uVar11 = uVar11 - 1 & uVar11;
    do {
      iVar1 = iVar1 + -1;
      if (uVar11 == 0) goto LAB_00419c34;
      uVar11 = uVar11 & uVar11 - 1;
    } while (iVar1 != 0);
    uVar11 = 7;
  }
  else {
    uVar11 = 7;
    puVar4 = &DAT_00425aa4;
  }
  do {
    if (uVar12 >> 0xc != uVar11) {
      uVar13 = *puVar4;
      uVar14 = uVar13 ^ uVar12;
      if (uVar14 == 0) goto LAB_00419c34;
      iVar1 = 3;
      uVar14 = uVar14 - 1 & uVar14;
      do {
        iVar1 = iVar1 + -1;
        if (uVar14 == 0) goto LAB_00419c34;
        uVar14 = uVar14 & uVar14 - 1;
      } while (iVar1 != 0);
    }
    uVar11 = uVar11 + 1;
    puVar4 = puVar4 + 1;
    if (uVar11 == 0x29) {
      return 0xffffffff;
    }
  } while( true );
}



// ==== FUN_00419c90 @ 00419c90 size=464

undefined4
FUN_00419c90(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,
            int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_28[1] = 1;
  local_28[2] = param_5 - param_3;
  local_28[3] = param_6 - param_4;
  if (local_28[2] < 0) {
    local_28[2] = -local_28[2];
  }
  if (local_28[3] < 0) {
    local_28[3] = -local_28[3];
  }
  uVar7 = (uint)(local_28[2] < local_28[3]);
  iVar1 = -uVar7;
  local_10 = param_3;
  local_28[0] = 1;
  local_c = param_4;
  if (param_5 <= param_3) {
    local_28[0] = -1;
  }
  local_18 = param_5;
  if (param_6 <= param_4) {
    local_28[1] = 0xffffffff;
  }
  iVar2 = 0;
  local_14 = param_6;
  iVar6 = local_28[iVar1 + 3];
  iVar4 = local_28[uVar7 + 4];
  iVar8 = local_28[uVar7 + 6];
  do {
    iVar2 = iVar2 + iVar6;
    if (iVar4 == iVar8) {
      return 0xffffffff;
    }
    iVar3 = local_28[uVar7 + 2];
    iVar5 = local_28[uVar7];
    iVar8 = iVar8 + iVar5;
    local_28[uVar7 + 6] = iVar8;
    if (iVar3 < iVar2 * 2) {
      iVar2 = iVar2 - iVar3;
      local_28[iVar1 + 7] = local_28[iVar1 + 7] + local_28[iVar1 + 1];
      iVar8 = local_28[uVar7 + 6];
    }
  } while ((*(char *)(param_1 + local_10 + local_c * param_2) == '\0') == param_7);
  iVar2 = 0;
  while( true ) {
    iVar2 = iVar2 + iVar6;
    if (iVar8 == iVar4) break;
    local_28[uVar7 + 4] = iVar4 - iVar5;
    if (iVar3 < iVar2 * 2) {
      iVar2 = iVar2 - iVar3;
      local_28[iVar1 + 5] = local_28[iVar1 + 5] - local_28[iVar1 + 1];
    }
    if (param_7 != (*(char *)(param_1 + local_18 + param_2 * local_14) == '\0')) break;
    iVar4 = local_28[uVar7 + 4];
  }
  *param_8 = (local_10 + local_18 + 1) * 4 >> 1;
  param_8[1] = (local_c + local_14 + 1) * 4 >> 1;
  return 0;
}



// ==== FUN_00419e60 @ 00419e60 size=188

void FUN_00419e60(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    iVar1 = -0x80000000;
    if (-1 < param_4) {
      iVar1 = 0x7fffffff;
    }
    *param_1 = iVar1;
    if (param_5 < 0) {
      iVar1 = -0x80000000;
    }
    else {
      iVar1 = 0x7fffffff;
    }
    param_1[1] = iVar1;
    return;
  }
  if (param_6 < 0) {
    param_4 = -param_4;
    param_5 = -param_5;
    param_6 = -param_6;
  }
  if (param_6 == 0) {
    trap(0x1c00);
  }
  if (param_6 == 0) {
    trap(0x1c00);
  }
  *param_1 = (param_4 + (param_4 >> 0x1f ^ (param_6 >> 1) + (param_4 >> 0x1f))) / param_6 + *param_2
  ;
  param_1[1] = (param_5 + (param_5 >> 0x1f ^ (param_6 >> 1) + (param_5 >> 0x1f))) / param_6 +
               *param_3;
  return;
}



// ==== FUN_00419f1c @ 00419f1c size=2452

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00419f1c(int *param_1,int *param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int aiStackY_3078 [3006];
  int local_108;
  int local_104;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int local_54;
  int *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int *local_2c;
  
  local_48 = param_2[1];
  iVar2 = (param_3 + -2) - param_2[0xb];
  iVar7 = *param_2;
  iVar12 = (param_4 + -2) - param_2[0xc];
  piVar4 = (int *)&stack0xfffffe98;
  local_44 = param_2[4];
  iVar11 = param_2[3];
  iVar8 = param_2[6];
  local_40 = param_2[7];
  local_54 = iVar7 * iVar2 + local_48 * iVar12 + param_2[2];
  local_60 = param_2 + 9;
  local_5c = (int *)(iVar11 * iVar2 + local_44 * iVar12 + param_2[5]);
  local_68 = &stack0xffffff60;
  local_64 = iVar8 * iVar2 + local_40 * iVar12 + param_2[8];
  local_58 = param_2 + 10;
  local_50 = param_2;
  do {
    iVar15 = 0;
    iVar2 = local_64;
    iVar12 = local_54;
    piVar9 = local_5c;
    do {
      FUN_00419e60((int)piVar4 + iVar15,local_60,param_2 + 10,iVar12,piVar9,iVar2);
      piVar1 = local_50;
      iVar15 = iVar15 + 8;
      iVar12 = iVar12 + iVar7;
      piVar9 = (int *)((int)piVar9 + iVar11);
      iVar2 = iVar2 + iVar8;
    } while (iVar15 != 0x28);
    piVar4 = piVar4 + 10;
    local_54 = local_54 + local_48;
    local_5c = (int *)((int)local_5c + local_44);
    local_64 = local_64 + local_40;
  } while (local_68 != piVar4);
  local_54 = local_104;
  local_50 = (int *)local_108;
  local_4c = FUN_004178cc(&stack0xfffffe98,local_108,local_104,param_6,param_7,param_8);
  uVar13 = local_4c ^ 0x1f8d63f;
  if (uVar13 == 0) {
    iVar2 = 0;
    iVar7 = 0;
LAB_0041a3a0:
    iVar12 = 0;
  }
  else {
    iVar12 = 1;
    uVar13 = uVar13 - 1 & uVar13;
    do {
      if (uVar13 == 0) break;
      iVar12 = iVar12 + 1;
      uVar13 = uVar13 & uVar13 - 1;
    } while (iVar12 != 0x19);
    local_34 = param_5 << 2;
    param_3 = param_3 - piVar1[0xb];
    param_4 = param_4 - piVar1[0xc];
    iVar10 = (param_3 * *piVar1 + param_4 * piVar1[1] + piVar1[2]) * 4;
    iVar15 = (param_3 * piVar1[3] + param_4 * piVar1[4] + piVar1[5]) * 4;
    iVar6 = (param_3 * piVar1[6] + param_4 * piVar1[7] + piVar1[8]) * 4;
    piVar4 = local_50;
    iVar2 = local_54;
    if (1 < param_5 << 2) {
      local_3c = iVar7 + local_48;
      local_48 = 1;
      local_44 = iVar11 + local_44;
      local_40 = iVar8 + local_40;
      local_5c = piVar1;
      do {
        iVar2 = local_48 * 2 + -1;
        iVar10 = iVar10 - local_3c;
        iVar15 = iVar15 - local_44;
        local_64 = iVar2 * 4;
        iVar6 = iVar6 - local_40;
        if (0 < iVar2 * 4) {
          local_38 = iVar2 * 3;
          iVar7 = 0;
          do {
            FUN_00419e60(&stack0xffffff90,local_60,local_58,iVar10,iVar15,iVar6);
            iVar11 = local_6c;
            iVar8 = local_70;
            uVar13 = FUN_004178cc(&stack0xfffffe98,local_70,local_6c,param_6,param_7,param_8);
            uVar14 = uVar13 ^ 0x1f8d63f;
            if (uVar14 == 0) {
              local_54 = iVar11;
              iVar3 = 0;
              local_50 = (int *)iVar8;
              local_4c = uVar13;
LAB_0041a2f4:
              local_50 = (int *)iVar8;
              local_54 = iVar11;
              iVar12 = iVar3;
              local_4c = uVar13;
            }
            else {
              iVar3 = 1;
              while ((uVar14 = uVar14 & uVar14 - 1, iVar3 <= iVar12 && (uVar14 != 0))) {
                iVar3 = iVar3 + 1;
              }
              if (iVar3 < iVar12) {
                local_54 = iVar11;
                local_50 = (int *)iVar8;
                local_4c = uVar13;
                goto LAB_0041a2f4;
              }
            }
            if (iVar7 < iVar2 * 2) {
              piVar4 = local_5c + (iVar7 < iVar2 ^ 1);
              iVar8 = *piVar4;
              iVar11 = piVar4[3];
              iVar3 = piVar4[6];
            }
            else {
              piVar4 = local_5c + (iVar7 < local_38 ^ 1);
              iVar8 = -*piVar4;
              iVar11 = -piVar4[3];
              iVar3 = -piVar4[6];
            }
            iVar6 = iVar6 + iVar3;
            iVar15 = iVar15 + iVar11;
            iVar10 = iVar10 + iVar8;
            if (iVar12 == 0) {
              iVar7 = (int)local_50 - local_108;
              iVar2 = local_54 - local_104;
              goto LAB_0041a3a0;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 != local_64);
        }
        local_48 = local_48 + 1;
        piVar4 = (int *)local_108;
        iVar2 = local_104;
      } while (local_48 != local_34);
    }
    if (6 < iVar12) {
      *param_1 = (int)piVar4;
      param_1[1] = iVar2;
      return 0xffffffff;
    }
    iVar7 = (int)local_50 - (int)piVar4;
    iVar2 = local_54 - iVar2;
  }
  uVar13 = local_4c;
  puVar5 = &DAT_004258ec;
  local_80 = 0;
  uVar14 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  piVar4 = &stack0xffffff90;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  do {
    if ((uVar13 & *puVar5) == puVar5[1]) {
      iVar8 = (uint)(byte)(&DAT_004258dd)[uVar14 * 2] * 5 + (uint)(byte)(&DAT_004258dc)[uVar14 * 2];
      iVar11 = iVar7 + *(int *)((int)&stack0xfffffe98 + iVar8 * 2 * 4) >> 2;
      if ((((-1 < iVar11) && (iVar11 < param_7)) &&
          (iVar8 = iVar2 + *(int *)(&stack0xfffffe9c + iVar8 * 8) >> 2, -1 < iVar8)) &&
         (iVar8 < param_8)) {
        iVar6 = (4 - (uint)(byte)(&DAT_004258dd)[uVar14 * 2]) * 5 +
                (4 - (uint)(byte)(&DAT_004258dc)[uVar14 * 2]);
        iVar15 = iVar7 + *(int *)((int)&stack0xfffffe98 + iVar6 * 2 * 4) >> 2;
        if ((-1 < iVar15) && (iVar15 < param_7)) {
          iVar6 = iVar2 + *(int *)(&stack0xfffffe9c + iVar6 * 8) >> 2;
          if ((-1 < iVar6) &&
             ((iVar6 < param_8 &&
              (local_30 = uVar14 & 1, local_2c = piVar4,
              iVar8 = FUN_00419c90(param_6,param_7,iVar11,iVar8,iVar15,iVar6,uVar14 & 1,piVar4),
              piVar4 = local_2c, iVar8 == 0)))) {
            iVar8 = local_70 - (int)local_50;
            iVar11 = local_6c - local_54;
            if (local_30 == 0) {
              iVar15 = 1;
            }
            else {
              iVar15 = 3;
              iVar8 = iVar8 * 3;
              iVar11 = iVar11 * 3;
            }
            iVar3 = (int)uVar14 >> 1;
            iVar10 = (&stack0xffffff60)[iVar3 * 2];
            iVar6 = *(int *)((int)&stack0xffffff64 + iVar3 * 8);
            *(int *)((int)&stack0xffffff80 + iVar3 * 4) =
                 *(int *)((int)&stack0xffffff80 + iVar3 * 4) + iVar15;
            (&stack0xffffff60)[iVar3 * 2] = iVar10 + iVar8;
            *(int *)((int)&stack0xffffff64 + iVar3 * 8) = iVar6 + iVar11;
          }
        }
      }
    }
    uVar14 = uVar14 + 1;
    puVar5 = puVar5 + 2;
  } while (uVar14 != 8);
  iVar2 = 0;
  uVar13 = 0;
  do {
    uVar14 = uVar13 | 1;
    iVar7 = *(int *)((int)&stack0xffffff80 + iVar2 * 8);
    iVar8 = *(int *)((int)&stack0xffffff80 + uVar14 * 4);
    if (iVar7 == 0) {
LAB_0041a7e4:
      iVar15 = *(int *)((int)&stack0xffffff64 + uVar13 * 8);
      (&stack0xffffff60)[uVar13 * 2] =
           (&stack0xffffff60)[uVar13 * 2] + (&stack0xffffff60)[uVar14 * 2];
      iVar11 = *(int *)((int)&stack0xffffff64 + uVar14 * 8);
      *(int *)((int)&stack0xffffff80 + uVar13 * 4) = iVar7 + iVar8;
      *(int *)((int)&stack0xffffff64 + uVar13 * 8) = iVar15 + iVar11;
    }
    else {
      iVar11 = iVar7 * iVar8;
      iVar15 = iVar7;
      if (iVar7 < iVar8) {
        iVar15 = iVar8;
      }
      if (iVar8 == 0) goto LAB_0041a7e4;
      iVar6 = (&stack0xffffff60)[uVar14 * 2];
      iVar10 = (&stack0xffffff60)[iVar2 * 4];
      iVar3 = *(int *)((int)&stack0xffffff64 + iVar2 * 0x10);
      *(int *)((int)&stack0xffffff80 + iVar2 * 8) = iVar15 << 1;
      iVar6 = (iVar8 * iVar10 + iVar7 * iVar6) * iVar15;
      uVar13 = iVar6 >> 0x1f;
      if (iVar11 == 0) {
        trap(0x1c00);
      }
      (&stack0xffffff60)[iVar2 * 4] = (int)(iVar6 + (uVar13 ^ (iVar11 >> 1) + uVar13)) / iVar11;
      iVar15 = (iVar8 * iVar3 + iVar7 * *(int *)((int)&stack0xffffff64 + uVar14 * 8)) * iVar15;
      uVar13 = iVar15 >> 0x1f;
      if (iVar11 == 0) {
        trap(0x1c00);
      }
      *(int *)((int)&stack0xffffff64 + iVar2 * 0x10) =
           (int)(iVar15 + (uVar13 ^ (iVar11 >> 1) + uVar13)) / iVar11;
    }
    iVar2 = iVar2 + 1;
    uVar13 = iVar2 * 2;
  } while (iVar2 != 2);
  iVar7 = local_80 + local_78;
  iVar2 = local_54;
  piVar4 = local_50;
  if (iVar7 != 0) {
    uVar13 = local_a0 + local_90 >> 0x1f;
    uVar14 = local_9c + local_8c >> 0x1f;
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    iVar8 = (int)local_50 + (int)(local_a0 + local_90 + (uVar13 ^ (iVar7 >> 1) + uVar13)) / iVar7;
    iVar7 = local_54 + (int)(local_9c + local_8c + (uVar14 ^ (iVar7 >> 1) + uVar14)) / iVar7;
    uVar13 = FUN_004178cc(&stack0xfffffe98,iVar8,iVar7,param_6,param_7,param_8);
    uVar13 = uVar13 ^ 0x1f8d63f;
    iVar2 = iVar7;
    piVar4 = (int *)iVar8;
    if (uVar13 != 0) {
      iVar11 = 1;
      do {
        uVar13 = uVar13 & uVar13 - 1;
        iVar2 = local_54;
        piVar4 = local_50;
        if (iVar12 < iVar11) break;
        iVar11 = iVar11 + 1;
        iVar2 = iVar7;
        piVar4 = (int *)iVar8;
      } while (uVar13 != 0);
    }
  }
  local_50 = piVar4;
  local_54 = iVar2;
  *param_1 = (int)local_50;
  param_1[1] = local_54;
  return 0;
}



// ==== FUN_0041a8b0 @ 0041a8b0 size=148

void FUN_0041a8b0(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = *param_2;
  iVar2 = *param_1;
  if (0 < iVar3) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      while( true ) {
        puVar1 = (uint *)(iVar2 + iVar5);
        iVar4 = iVar4 + 1;
        uVar6 = *puVar1;
        iVar5 = iVar5 + 0xc;
        if ((uVar6 - 1 & uVar6) != 0) break;
        free(puVar1[1]);
        iVar3 = *param_2;
        iVar2 = *param_1;
        if (iVar3 <= iVar4) goto LAB_0041a92c;
      }
    } while (iVar4 < iVar3);
  }
LAB_0041a92c:
  free();
  return;
}



// ==== FUN_0041a944 @ 0041a944 size=208

int FUN_0041a944(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  if (((((-1 < param_4) && (param_4 < param_2)) && (-1 < param_5)) &&
      ((param_5 < param_3 && (-1 < param_6)))) &&
     ((param_6 < param_2 && ((-1 < param_7 && (param_7 < param_3)))))) {
    if ((*(char *)(param_1 + param_4 + param_2 * param_5) == '\0') &&
       (*(char *)(param_1 + param_6 + param_2 * param_7) == '\0')) {
      return -(uint)(*(char *)(param_1 + param_2 * (param_5 + param_7 >> 1) +
                              (param_4 + param_6 >> 1)) == '\0');
    }
    return 1;
  }
  return -1;
}



// ==== FUN_0041aa14 @ 0041aa14 size=76

int FUN_0041aa14(void)

{
  int iVar1;
  
  iVar1 = calloc(1,0xb28);
  FUN_00420710(iVar1 + 0x300,0,0);
  FUN_0041fc2c(iVar1,0x1d);
  return iVar1;
}



// ==== FUN_0041aae0 @ 0041aae0 size=12

void FUN_0041aae0(int param_1)

{
  *(undefined4 *)(param_1 + 0xb14) = 0;
  *(undefined4 *)(param_1 + 0xb20) = 0;
  return;
}



// ==== FUN_0041aaec @ 0041aaec size=124

void FUN_0041aaec(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_1[1]) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = *param_1 + iVar3;
      iVar3 = iVar3 + 0x30;
      FUN_0041a8b0(iVar1,iVar1 + 4);
    } while (iVar2 < param_1[1]);
  }
  free(*param_1);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



// ==== FUN_0041ab68 @ 0041ab68 size=12128

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0041ab68(int param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  int *piVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  undefined4 uVar35;
  uint uVar36;
  char *pcVar37;
  int iVar38;
  uint uVar39;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  undefined4 *local_344;
  int local_324;
  int local_320;
  int local_31c;
  int *local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  undefined4 *local_300;
  uint local_2e0;
  int local_2d4;
  int local_2d0;
  int *local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_288;
  int local_284;
  int *local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  int local_26c;
  int local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  int local_24c;
  uint local_248;
  int local_244;
  int *local_240;
  undefined4 local_23c;
  uint local_238 [5];
  int local_224;
  uint local_220 [11];
  int *local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  uint local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  uint local_1b0;
  int local_1ac [6];
  undefined4 local_194;
  int local_190;
  int local_18c [4];
  uint local_17c [3];
  int *local_170 [3];
  uint local_164 [4];
  uint local_154;
  undefined4 local_150;
  uint local_14c;
  int local_148;
  int local_144;
  char *local_140;
  int *local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined4 local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  int local_ec;
  int *local_e8;
  char *local_e4;
  int local_e0;
  char *local_dc;
  int *local_d8;
  int *local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  undefined4 *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 *local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  char *local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int *local_84;
  char *local_80;
  int *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int *local_64;
  int local_60;
  int *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int *local_38;
  uint local_34;
  int local_30;
  
  local_fc = param_5;
  local_100 = param_6;
  local_ec = param_7;
  local_d8 = param_2;
  local_b4 = param_4;
  local_8c = param_1;
  local_7c = param_3;
  local_98 = (char *)calloc(param_4,1);
  if (local_b4 < 1) {
LAB_0041cf70:
    free(local_98);
    return;
  }
  local_88 = local_100;
  if (local_100 < local_ec) {
    local_88 = local_ec;
  }
  local_78 = local_100 * -4;
  local_80 = local_98 + 2;
  local_74 = local_100 << 3;
  local_60 = 0;
  local_70 = local_ec * -4;
  local_6c = local_ec << 3;
  local_d4 = local_7c;
  do {
    cVar10 = local_80[-2];
    local_94 = local_60 + 1;
    local_60 = local_94;
    local_5c = local_d4 + 4;
    local_e8 = local_d4 + 4;
    local_dc = local_80;
    if (cVar10 == '\0') {
LAB_0041ac5c:
      if (local_94 < local_b4) {
        local_94 = local_94 + 1;
        if (local_dc[-1] == '\0') {
          if (local_94 < local_b4) {
            local_84 = local_e8 + 4;
            local_e4 = local_98 + local_b4;
            local_13c = local_e8 + 4;
            local_140 = local_dc;
LAB_0041ace0:
            if (*local_140 == '\0') {
              iVar15 = local_d4[1];
              iVar34 = *local_d4;
              local_170[1] = local_e8;
              local_170[0] = local_d4;
              iVar20 = (*local_e8 - iVar34) * (local_13c[1] - iVar15) +
                       (local_e8[1] - iVar15) * (iVar34 - *local_13c);
              local_170[2] = local_13c;
              if (iVar20 != 0) {
                local_1ac[0] = 0;
                local_1ac[3] = 0;
                local_194 = 0;
                if (iVar20 < 0) {
                  local_1ac[2] = 1;
                  local_1ac[1] = 2;
                  local_1ac[4] = 2;
                }
                else {
                  local_1ac[2] = 2;
                  local_1ac[1] = 1;
                  local_1ac[4] = 1;
                }
                iVar20 = *local_e8 - *local_13c;
                iVar24 = local_e8[1] - local_13c[1];
                iVar34 = *local_170[local_1ac[2]] - iVar34;
                iVar15 = local_170[local_1ac[2]][1] - iVar15;
                local_1ac[5] = local_1ac[2];
                iVar27 = *local_d4 - *local_170[local_1ac[4]];
                uVar21 = iVar20 * iVar20 + iVar24 * iVar24;
                uVar11 = iVar34 * iVar34 + iVar15 * iVar15;
                iVar15 = local_d4[1] - local_170[local_1ac[4]][1];
                uVar16 = (uint)(uVar21 < uVar11);
                if (uVar16 == 0) {
                  uVar11 = uVar21;
                }
                local_144 = local_88 + -1;
                local_b8 = local_8c + 0x300;
                uVar21 = 2;
                if ((uint)(iVar27 * iVar27 + iVar15 * iVar15) <= uVar11) {
                  uVar21 = uVar16;
                }
                piVar19 = local_1ac + uVar21;
                local_148 = uVar21 + 2;
LAB_0041ae74:
                uVar21 = uVar21 + 1;
                local_280 = local_170[*piVar19];
                local_2cc = local_170[piVar19[1]];
                local_318 = local_170[piVar19[2]];
                iVar15 = FUN_0042127c(local_144);
                uVar31 = 0x1c - iVar15;
                iVar15 = *local_280;
                local_1d0 = local_2cc[1] - local_280[1];
                local_1d8 = *local_2cc - iVar15;
                local_1cc = local_318[1] - local_280[1];
                local_1d4 = *local_318 - iVar15;
                iVar29 = local_1cc << (uVar31 & 0x1f);
                uVar11 = iVar29 >> 0x1f;
                iVar27 = -local_1d4 << (uVar31 & 0x1f);
                uVar16 = iVar27 >> 0x1f;
                iVar24 = -local_1d0 << (uVar31 & 0x1f);
                uVar39 = iVar24 >> 0x1f;
                iVar20 = local_1d8 * local_1cc + local_1d0 * (iVar15 - *local_318);
                iVar34 = local_1d8 << (uVar31 & 0x1f);
                iVar15 = iVar20 >> 1;
                local_1c8 = (int)(iVar29 + (uVar11 ^ iVar15 + uVar11)) / iVar20;
                if (iVar20 == 0) {
                  trap(0x1c00);
                }
                uVar11 = iVar34 >> 0x1f;
                local_1c4 = (int)(iVar27 + (uVar16 ^ iVar15 + uVar16)) / iVar20;
                if (iVar20 == 0) {
                  trap(0x1c00);
                }
                local_1c0 = (int)(iVar24 + (uVar39 ^ iVar15 + uVar39)) / iVar20;
                if (iVar20 == 0) {
                  trap(0x1c00);
                }
                local_1bc = (int)(iVar34 + (uVar11 ^ iVar15 + uVar11)) / iVar20;
                if (iVar20 == 0) {
                  trap(0x1c00);
                }
                local_1b8 = *local_280;
                iVar20 = *local_2cc - local_1b8;
                local_1b4 = local_280[1];
                iVar15 = local_2cc[1] - local_1b4;
                local_2d4 = iVar20 * local_1c8 + iVar15 * local_1c4;
                local_2d0 = iVar20 * local_1c0 + iVar15 * local_1bc;
                local_1b0 = uVar31;
                FUN_004189d4(&local_314,&local_1d8);
                iVar20 = 1 << (uVar31 & 0x1f);
                iVar15 = FUN_00417594(&local_314,iVar20,iVar20);
                if (iVar15 < 0) goto LAB_0041ae68;
                local_320 = (*local_318 - local_1b8) * local_1c8 +
                            (local_318[1] - local_1b4) * local_1c4;
                local_31c = (*local_318 - local_1b8) * local_1c0 +
                            (local_318[1] - local_1b4) * local_1bc;
                FUN_004189d4(&local_360,&local_1d8);
                iVar15 = FUN_00417594(&local_360,iVar20,iVar20);
                if (iVar15 < 0) goto LAB_0041ae68;
                iVar15 = local_308 - local_358;
                if (iVar15 < 0) {
                  iVar15 = -iVar15;
                }
                if (3 < iVar15) goto LAB_0041ae68;
                local_288 = (*local_280 - local_1b8) * local_1c8 +
                            (local_280[1] - local_1b4) * local_1c4;
                local_284 = (*local_280 - local_1b8) * local_1c0 +
                            (local_280[1] - local_1b4) * local_1bc;
                FUN_004189d4(&local_2c8,&local_1d8);
                iVar15 = FUN_00417594(&local_2c8,iVar20,iVar20);
                if (iVar15 < 0) goto LAB_0041ae68;
                iVar15 = local_2bc - local_308;
                if (iVar15 < 0) {
                  iVar15 = -iVar15;
                }
                if (3 < iVar15) goto LAB_0041ae68;
                iVar15 = local_2c0 - local_358;
                if (iVar15 < 0) {
                  iVar15 = -iVar15;
                }
                bVar1 = local_148 < (int)uVar21;
                if (iVar15 < 4) {
                  FUN_00418cd0(&local_2c8,&local_1d8,local_b8,0);
                  FUN_00418cd0(&local_360,&local_1d8,local_b8,0);
                  FUN_00419524(local_238,&local_1d8,&local_2c8,&local_360,0);
                  if ((-1 < (int)(local_238[0] * *local_318 + local_238[1] * local_318[1] +
                                 local_238[2])) &&
                     (-1 < (int)(local_238[2] +
                                local_238[0] * *local_2cc + local_238[1] * local_2cc[1]))) {
                    FUN_00418cd0(&local_2c8,&local_1d8,local_b8,2);
                    FUN_00418cd0(&local_314,&local_1d8,local_b8,2);
                    FUN_00419524(local_220,&local_1d8,&local_2c8,&local_314,2);
                    if ((-1 < (int)(local_220[0] * *local_318 + local_220[1] * local_318[1] +
                                   local_220[2])) &&
                       (-1 < (int)(local_220[2] +
                                  local_220[0] * *local_2cc + local_220[1] * local_2cc[1]))) {
                      local_e0 = local_310 >> 1;
                      FUN_00418cd0(&local_314,&local_1d8,local_b8,1);
                      iVar15 = FUN_00419790(local_238 + 3,&local_314,1,local_1b0);
                      if (iVar15 < 0) {
                        local_164[2] = 0;
                        local_30 = 0;
                      }
                      else {
                        if ((((int)(local_238[3] * *local_280 + local_238[4] * local_280[1] +
                                   local_224) < 0) ||
                            ((int)(local_224 +
                                  local_238[3] * *local_318 + local_238[4] * local_318[1]) < 0)) ||
                           (iVar15 = FUN_00417ca0(&local_1d8,local_238 + 3,1,local_e0,local_164 + 2)
                           , iVar15 < 0)) goto LAB_0041ae68;
                        local_30 = local_164[2] * -2;
                      }
                      local_30 = local_314 * 3 + local_2d4 + local_30;
                      local_3c = local_2d0 + local_e0 * -2;
                      local_110 = CONCAT44(local_110._4_4_,local_360 >> 1);
                      FUN_00418cd0(&local_360,&local_1d8,local_b8,3);
                      iVar15 = FUN_00419790(local_220 + 3,&local_360,3,local_1b0);
                      if (iVar15 < 0) {
                        local_164[0] = 0;
                        iVar15 = 0;
LAB_0041b4b4:
                        iVar34 = local_31c;
                        iVar20 = local_35c;
                        if (local_e0 == 0) {
                          trap(0x1c00);
                        }
                        local_34 = local_320 + (int)local_110 * -2;
                        iVar15 = local_31c + local_35c * 3 + iVar15;
                        local_108._0_4_ = local_2e0;
                        local_c8 = local_2e0 + (local_e0 + (local_31c - local_3c) + -1) / local_e0;
                        local_b0 = (undefined4 *)malloc(local_c8 * 8);
                        iVar24 = local_2d4;
                        if (0 < (int)(uint)local_108) {
                          uVar11 = 0;
                          puVar12 = local_300;
                          puVar22 = local_b0;
                          do {
                            uVar11 = uVar11 + 1;
                            uVar25 = *puVar12;
                            uVar35 = puVar12[1];
                            puVar12 = puVar12 + 4;
                            *puVar22 = uVar25;
                            puVar22[1] = uVar35;
                            puVar22 = puVar22 + 2;
                          } while (uVar11 != (uint)local_108);
                        }
                        if ((int)local_110 == 0) {
                          trap(0x1c00);
                        }
                        local_130 = CONCAT44(local_130._4_4_,local_324);
                        local_f0 = local_324 +
                                   (int)((int)local_110 + (local_2d4 - local_34) + -1) /
                                   (int)local_110;
                        local_c4 = (undefined4 *)malloc(local_f0 * 8);
                        if (0 < (int)(uint)local_130) {
                          iVar27 = 0;
                          puVar12 = local_344;
                          puVar22 = local_c4;
                          do {
                            iVar27 = iVar27 + 1;
                            uVar25 = *puVar12;
                            uVar35 = puVar12[1];
                            puVar12 = puVar12 + 4;
                            *puVar22 = uVar25;
                            puVar22[1] = uVar35;
                            puVar22 = puVar22 + 2;
                          } while (iVar27 != (uint)local_130);
                        }
                        local_ac = (uint)local_130;
                        local_a4 = 1 << (local_1b0 - 1 & 0x1f);
                        local_a8 = (local_1b8 << (local_1b0 & 0x1f)) + local_a4;
                        local_a4 = local_a4 + (local_1b4 << (local_1b0 & 0x1f));
                        local_90 = (uint)local_108;
                        local_128 = CONCAT44(local_128._4_4_,
                                             local_a8 + local_30 * local_1d8 + local_3c * local_1d4)
                        ;
                        local_120 = local_120 & 0xffffffff00000000;
                        local_118 = CONCAT44(local_118._4_4_,
                                             local_a4 + local_30 * local_1d0 + local_3c * local_1cc)
                        ;
                        local_138 = CONCAT44(local_138._4_4_,
                                             local_a8 + local_34 * local_1d8 + iVar15 * local_1d4);
                        iVar29 = local_a4 + local_34 * local_1d0 + iVar15 * local_1cc;
                        local_9c = local_1d8 * local_164[2] + local_e0 * local_1d4;
                        local_a0 = local_1d0 * local_164[2] + local_e0 * local_1cc;
                        local_c0 = (int)local_110 * local_1d8 + local_1d4 * local_164[0];
                        local_d0 = local_1d8 * local_314;
                        local_bc = (int)local_110 * local_1d0 + local_1cc * local_164[0];
                        local_cc = local_1d0 * local_314;
                        local_f8 = iVar20 * local_1d4;
                        local_f4 = iVar20 * local_1cc;
                        iVar27 = 0;
                        iVar20 = iVar15 + iVar34 >> 1;
                        if (iVar15 <= iVar20) {
                          iVar20 = iVar15;
                        }
                        uVar11 = local_34;
                        iVar32 = local_30;
                        iVar34 = local_3c;
                        local_68 = uVar21;
                        local_64 = piVar19;
                        if (iVar20 <= local_3c) goto LAB_0041b8f8;
                        iVar20 = local_30 + iVar24;
LAB_0041b7b8:
                        bVar1 = 0xe < (int)local_120;
                        iVar38 = iVar20 >> 1;
                        if (iVar32 <= iVar20 >> 1) {
                          iVar38 = iVar32;
                        }
                        if (iVar38 <= (int)uVar11) goto LAB_0041b918;
                        do {
                          if (0xe < iVar27) goto LAB_0041b918;
                          if ((!bVar1) && (iVar34 < (int)uVar11)) goto LAB_0041b7fc;
                          uVar16 = local_1b0 + 2;
                          iVar38 = (int)(local_f8 + (uint)local_138) >> (uVar16 & 0x1f);
                          iVar24 = (int)(local_f4 + iVar29) >> (uVar16 & 0x1f);
                          iVar20 = (int)((uint)local_138 - local_f8) >> (uVar16 & 0x1f);
                          iVar13 = (int)(iVar29 - local_f4) >> (uVar16 & 0x1f);
                          local_34 = uVar11;
                          local_30 = iVar32;
                          if ((int)local_f0 <= (int)(uint)local_130) {
                            local_f0 = local_f0 << 1 | 1;
                            local_c4 = (undefined4 *)realloc(local_c4,local_f0 << 3);
                          }
                          iVar32 = FUN_0041a944(local_fc,local_100,local_ec,iVar38,iVar24,iVar20,
                                                iVar13);
                          if (iVar32 == 0) {
                            local_38 = local_c4 + (uint)local_130 * 2;
                            iVar20 = FUN_00419c90(local_fc,local_100,iVar38,iVar24,iVar20,iVar13,1,
                                                  local_38);
                            if (iVar20 < 0) goto LAB_0041ce34;
                            uVar16 = local_34;
                            if (iVar20 == 0) {
                              iVar20 = (*local_38 - local_1b8) * local_1c8 +
                                       (local_38[1] - local_1b4) * local_1c4;
                              if ((int)local_34 < (int)local_110 + iVar20) {
                                uVar16 = (int)(local_34 + iVar20) >> 1;
                              }
                              iVar15 = iVar15 + (*local_38 - local_1b8) * local_1c0 +
                                                (local_38[1] - local_1b4) * local_1bc >> 1;
                              iVar24 = local_ac + (local_ac >> 2);
                              iVar27 = (uint)local_130 + 1;
                              iVar20 = 1;
                              if (1 < iVar24) {
                                iVar20 = iVar24;
                              }
                              local_130 = CONCAT44(local_130._4_4_,iVar27);
                              local_138 = CONCAT44(local_138._4_4_,
                                                   local_a8 +
                                                   uVar16 * local_1d8 + iVar15 * local_1d4);
                              iVar29 = local_a4 + uVar16 * local_1d0 + iVar15 * local_1cc;
                              if (iVar27 <= iVar20) goto LAB_0041c9e0;
                              local_34 = uVar16;
                              FUN_0041910c(local_220 + 3,local_c4,iVar27,local_1b0);
                              iVar20 = FUN_00417ca0(&local_1d8,local_220 + 3,0,(int)local_110,
                                                    local_164);
                              uVar16 = local_34;
                              if (iVar20 < 0) {
                                iVar27 = 0;
                                local_ac = (uint)local_130;
                              }
                              else {
                                iVar27 = 0;
                                local_ac = (uint)local_130;
                                local_c0 = (int)local_110 * local_1d8 + local_164[0] * local_1d4;
                                local_bc = (int)local_110 * local_1d0 + local_164[0] * local_1cc;
                              }
                            }
                            else {
LAB_0041c9e0:
                              iVar27 = 0;
                            }
                          }
                          else {
                            uVar16 = local_34;
                            if (-1 < iVar32) goto LAB_0041c9e0;
LAB_0041ce34:
                            iVar27 = iVar27 + 1;
                            uVar16 = local_34;
                          }
                          iVar15 = iVar15 + local_164[0];
                          uVar11 = (int)local_110 + uVar16;
                          if ((int)((int)local_110 + uVar16) <= (int)uVar16) {
                            iVar27 = 0x7fffffff;
                            uVar11 = uVar16;
                          }
                          local_138 = CONCAT44(local_138._4_4_,(uint)local_138 + local_c0);
                          iVar29 = iVar29 + local_bc;
                          iVar32 = local_30;
                          while( true ) {
                            iVar38 = iVar15 + local_31c >> 1;
                            if (iVar15 <= iVar38) {
                              iVar38 = iVar15;
                            }
                            iVar20 = iVar32 + local_2d4;
                            iVar24 = local_2d4;
                            if (iVar34 < iVar38) goto LAB_0041b7b8;
LAB_0041b8f8:
                            iVar20 = iVar32 + iVar24 >> 1;
                            if (iVar32 <= iVar20) {
                              iVar20 = iVar32;
                            }
                            bVar1 = true;
                            if ((int)uVar11 < iVar20) break;
LAB_0041b918:
                            piVar19 = local_64;
                            uVar21 = local_68;
                            if (bVar1) {
                              if ((int)(uint)local_108 < 2) {
                                FUN_004173b0(local_18c + 3,&local_1d8,iVar24 + local_314 * 3,
                                             local_2d0);
                                iVar15 = local_1d4;
                                if (local_1d4 < 0) {
                                  iVar15 = -local_1d4;
                                }
                                iVar20 = local_1cc;
                                if (local_1cc < 0) {
                                  iVar20 = -local_1cc;
                                }
                                if (iVar15 < iVar20) {
                                  iVar15 = iVar20;
                                }
                                iVar34 = local_1b0 + 1;
                                iVar20 = FUN_0042127c(iVar15);
                                iVar15 = local_1d4;
                                if (local_1d4 < 0) {
                                  iVar15 = -local_1d4;
                                }
                                iVar24 = local_1cc;
                                if (local_1cc < 0) {
                                  iVar24 = -local_1cc;
                                }
                                if (iVar24 <= iVar15) {
                                  iVar24 = iVar15;
                                }
                                iVar15 = FUN_0042127c(iVar24);
                                uVar11 = -(-(uint)(0 < iVar15 - ((int)(local_1b0 + 1) >> 1)) &
                                          (iVar34 >> 1) - iVar20);
                                iVar15 = (1 << (uVar11 & 0x1f)) >> 1;
                                local_238[3] = iVar15 + local_1cc >> (uVar11 & 0x1f);
                                local_238[4] = iVar15 - local_1d4 >> (uVar11 & 0x1f);
                                local_224 = -(local_238[3] * local_18c[3] +
                                             local_238[4] * local_17c[0]);
                              }
                              else {
                                FUN_0041910c(local_238 + 3,local_b0,(uint)local_108,local_1b0);
                              }
                              free(local_b0);
                              if ((int)(uint)local_130 < 2) {
                                FUN_004173b0(local_18c + 3,&local_1d8,local_320,
                                             local_35c * 3 + local_31c);
                                iVar15 = local_1d4;
                                if (local_1d4 < 0) {
                                  iVar15 = -local_1d4;
                                }
                                iVar20 = local_1cc;
                                if (local_1cc < 0) {
                                  iVar20 = -local_1cc;
                                }
                                if (iVar15 < iVar20) {
                                  iVar15 = iVar20;
                                }
                                iVar34 = local_1b0 + 1;
                                iVar20 = FUN_0042127c(iVar15);
                                iVar15 = local_1d4;
                                if (local_1d4 < 0) {
                                  iVar15 = -local_1d4;
                                }
                                iVar24 = local_1cc;
                                if (local_1cc < 0) {
                                  iVar24 = -local_1cc;
                                }
                                if (iVar24 <= iVar15) {
                                  iVar24 = iVar15;
                                }
                                iVar15 = FUN_0042127c(iVar24);
                                uVar11 = -(-(uint)(0 < iVar15 - ((int)(local_1b0 + 1) >> 1)) &
                                          (iVar34 >> 1) - iVar20);
                                iVar15 = (1 << (uVar11 & 0x1f)) >> 1;
                                local_220[3] = iVar15 + local_1d0 >> (uVar11 & 0x1f);
                                local_220[5] = -(local_238[3] * local_18c[3] +
                                                local_238[4] * local_17c[0]);
                                local_220[4] = (int)(iVar15 - local_1d8) >> (uVar11 & 0x1f);
                              }
                              else {
                                FUN_0041910c(local_220 + 3,local_c4,(uint)local_130,local_1b0);
                              }
                              uVar11 = 0;
                              free(local_c4);
                              iVar24 = local_6c;
                              iVar34 = local_70;
                              iVar20 = local_74;
                              iVar15 = local_78;
                              iVar27 = 0;
                              puVar17 = local_220 + 10;
                              goto LAB_0041b998;
                            }
LAB_0041b7fc:
                            local_30 = iVar32;
                            local_34 = uVar11;
                            uVar11 = local_1b0 + 2;
                            iVar32 = (int)(local_d0 + (uint)local_128) >> (uVar11 & 0x1f);
                            iVar24 = local_cc + (int)local_118 >> (uVar11 & 0x1f);
                            iVar20 = (int)((uint)local_128 - local_d0) >> (uVar11 & 0x1f);
                            iVar38 = (int)local_118 - local_cc >> (uVar11 & 0x1f);
                            if ((int)local_c8 <= (int)(uint)local_108) {
                              local_c8 = local_c8 << 1 | 1;
                              local_b0 = (undefined4 *)realloc(local_b0,local_c8 << 3);
                            }
                            iVar13 = FUN_0041a944(local_fc,local_100,local_ec,iVar32,iVar24,iVar20,
                                                  iVar38);
                            if (iVar13 == 0) {
                              local_38 = local_b0 + (uint)local_108 * 2;
                              iVar20 = FUN_00419c90(local_fc,local_100,iVar32,iVar24,iVar20,iVar38,1
                                                    ,local_38);
                              if (iVar20 < 0) goto LAB_0041cef4;
                              if (iVar20 != 0) goto LAB_0041b880;
                              iVar24 = (*local_38 - local_1b8) * local_1c0 +
                                       (local_38[1] - local_1b4) * local_1bc;
                              iVar20 = local_30 +
                                       (*local_38 - local_1b8) * local_1c8 +
                                       (local_38[1] - local_1b4) * local_1c4 >> 1;
                              if (iVar34 < local_e0 + iVar24) {
                                iVar34 = iVar34 + iVar24 >> 1;
                              }
                              iVar32 = local_90 + ((int)local_90 >> 2);
                              local_108._0_4_ = (uint)local_108 + 1;
                              iVar24 = 1;
                              if (1 < iVar32) {
                                iVar24 = iVar32;
                              }
                              local_128 = CONCAT44(local_128._4_4_,
                                                   local_a8 +
                                                   iVar20 * local_1d8 + iVar34 * local_1d4);
                              local_118 = CONCAT44(local_118._4_4_,
                                                   local_a4 +
                                                   iVar20 * local_1d0 + iVar34 * local_1cc);
                              if (iVar24 < (int)(uint)local_108) {
                                local_30 = iVar20;
                                FUN_0041910c(local_238 + 3,local_b0,(uint)local_108,local_1b0);
                                iVar24 = FUN_00417ca0(&local_1d8,local_238 + 3,1,local_e0,
                                                      local_164 + 2);
                                iVar20 = local_30;
                                if (iVar24 < 0) {
                                  local_90 = (uint)local_108;
                                }
                                else {
                                  local_90 = (uint)local_108;
                                  local_9c = local_164[2] * local_1d8 + local_e0 * local_1d4;
                                  local_a0 = local_164[2] * local_1d0 + local_e0 * local_1cc;
                                }
                              }
                            }
                            else if (iVar13 < 0) {
LAB_0041cef4:
                              local_120 = CONCAT44(local_120._4_4_,(int)local_120 + 1);
                              iVar20 = local_30;
                            }
                            else {
LAB_0041b880:
                              local_120 = local_120 & 0xffffffff00000000;
                              iVar20 = local_30;
                            }
                            uVar25 = 0x7fffffff;
                            if (iVar34 < local_e0 + iVar34) {
                              uVar25 = (int)local_120;
                              iVar34 = local_e0 + iVar34;
                            }
                            local_128 = CONCAT44(local_128._4_4_,(uint)local_128 + local_9c);
                            local_120 = CONCAT44(local_120._4_4_,uVar25);
                            local_118 = CONCAT44(local_118._4_4_,(int)local_118 + local_a0);
                            uVar11 = local_34;
                            iVar32 = iVar20 + local_164[2];
                          }
                        } while( true );
                      }
                      if ((-1 < (int)(local_220[3] * *local_280 + local_220[4] * local_280[1] +
                                     local_220[5])) &&
                         (-1 < (int)(local_220[5] +
                                    local_220[3] * *local_2cc + local_220[4] * local_2cc[1]))) {
                        iVar15 = FUN_00417ca0(&local_1d8,local_220 + 3,0,(int)local_110,local_164);
                        if (-1 < iVar15) {
                          iVar15 = local_164[0] * -2;
                          goto LAB_0041b4b4;
                        }
                      }
                    }
                  }
                  goto LAB_0041ae68;
                }
                goto LAB_0041ae6c;
              }
            }
            goto LAB_0041acc8;
          }
          local_84 = local_e8 + 4;
        }
        else {
          local_84 = local_e8 + 4;
        }
        goto LAB_0041ca48;
      }
    }
LAB_0041ca60:
    local_80 = local_80 + 1;
    if (local_60 == local_b4) goto LAB_0041cf70;
    local_d4 = local_5c;
  } while( true );
  while( true ) {
    iVar32 = local_238[uVar16 * 3 + 1] * local_238[iVar27 * 3 + 2] -
             local_238[iVar27 * 3 + 1] * local_238[uVar16 * 3 + 2];
    iVar27 = local_238[iVar27 * 3] * local_238[uVar16 * 3 + 2] -
             local_238[uVar16 * 3] * local_238[iVar27 * 3 + 2];
    if (iVar29 < 0) {
      iVar29 = -iVar29;
      iVar32 = -iVar32;
      iVar27 = -iVar27;
    }
    uVar16 = (iVar32 + (iVar32 >> 0x1f ^ (iVar29 >> 1) + (iVar32 >> 0x1f))) / iVar29;
    if (iVar29 == 0) {
      trap(0x1c00);
    }
    uVar39 = (iVar27 + (iVar27 >> 0x1f ^ (iVar29 >> 1) + (iVar27 >> 0x1f))) / iVar29;
    if (iVar29 == 0) {
      trap(0x1c00);
    }
    *puVar17 = uVar16;
    puVar17[1] = uVar39;
    iVar32 = local_1dc;
    iVar29 = local_1e0;
    if (((((int)uVar16 < iVar15) || (iVar20 <= (int)uVar16)) || ((int)uVar39 < iVar34)) ||
       (iVar24 <= (int)uVar39)) goto LAB_0041ae68;
    iVar27 = (int)uVar11 >> 1;
    puVar17 = puVar17 + 2;
    if (uVar11 == 4) break;
LAB_0041b998:
    uVar16 = uVar11 & 1;
    iVar27 = iVar27 + 2;
    iVar29 = local_238[uVar16 * 3] * local_238[iVar27 * 3 + 1] -
             local_238[uVar16 * 3 + 1] * local_238[iVar27 * 3];
    uVar11 = uVar11 + 1;
    if (iVar29 == 0) goto LAB_0041ae68;
  }
  iVar27 = local_2c0 + local_2bc + local_30c + local_354;
  piVar28 = local_1f4;
  uVar11 = local_220[10];
  iVar24 = local_1f0;
  iVar20 = local_1e8;
  iVar15 = local_1ec;
  iVar34 = local_1e4;
  if (4 < iVar27) {
    iVar15 = iVar27 + 0x10;
    local_40 = iVar27 + 10;
    FUN_00417e44(&local_27c,0,0,iVar15,0,0,iVar15,iVar15,iVar15,local_220[10],local_1f4,local_1f0,
                 local_1ec,local_1e8,local_1e4,local_1e0,local_1dc);
    iVar38 = FUN_00419f1c(&local_190,&local_27c,local_40,local_40,4,local_fc,local_100,local_ec);
    iVar34 = local_1e4;
    iVar20 = local_1e8;
    iVar15 = local_1ec;
    piVar28 = local_1f4;
    uVar11 = local_220[10];
    iVar24 = local_1f0;
    if (-1 < iVar38) {
      local_54 = iVar27 + 4;
      local_58 = local_1e8 - local_1f0;
      local_30 = local_220[10];
      local_3c = local_1f0;
      local_38 = local_1f4;
      iVar32 = local_1e8 * local_1ec - local_1e4 * local_1f0;
      local_44 = local_18c[0];
      iVar24 = (local_1e4 - local_1ec) * local_220[10];
      local_130 = CONCAT44(local_130._4_4_,iVar24);
      iVar27 = (local_1e4 - local_1ec) * local_190;
      local_138 = CONCAT44(local_138._4_4_,iVar27);
      local_4c = local_40 * iVar32 + local_54 * (iVar24 - local_58 * (int)local_1f4) +
                 (iVar27 - local_58 * local_18c[0]) * 6;
      uVar11 = (int)local_4c >> 0x1f;
      lVar3 = (longlong)(int)(local_54 * local_190) *
              (longlong)(int)(iVar32 - local_58 * (int)local_1f4) +
              (longlong)(int)(local_220[10] * 6) * (longlong)(int)(iVar32 - local_58 * local_18c[0])
              + (longlong)(int)(local_40 * local_220[10]) * (longlong)iVar27 +
              CONCAT44(uVar11,uVar11);
      if ((int)local_4c < 0) {
        local_4c = -local_4c;
      }
      uVar31 = (uint)((ulonglong)lVar3 >> 0x20) ^ uVar11;
      uVar16 = (int)uVar31 >> 0x1f;
      local_128 = CONCAT44(local_128._4_4_,(int)local_4c >> 1);
      uVar39 = (uint)lVar3 ^ uVar11;
      uVar16 = uVar16 ^ ((int)local_4c >> 1) + uVar16;
      uVar33 = uVar39 + uVar16;
      local_50 = (int)local_4c >> 0x1f;
      local_48 = uVar11;
      iVar29 = FUN_00421998(uVar33,(uint)(uVar33 < uVar39) + uVar31 + ((int)uVar16 >> 0x1f),local_4c
                            ,local_50);
      lVar3 = (longlong)(int)(local_54 * local_44) * (longlong)(int)(iVar32 + (uint)local_130) +
              (longlong)((int)local_38 * 6) * (longlong)(int)(iVar32 + (uint)local_138) +
              (longlong)(int)(local_40 * (int)local_38) * (longlong)(int)(local_58 * -local_44) +
              CONCAT44(local_48,uVar11);
      uVar11 = (uint)lVar3 ^ uVar11;
      uVar31 = (uint)((ulonglong)lVar3 >> 0x20) ^ local_48;
      uVar16 = (int)uVar31 >> 0x1f;
      uVar16 = uVar16 ^ (uint)local_128 + uVar16;
      uVar39 = uVar11 + uVar16;
      iVar32 = FUN_00421998(uVar39,(uint)(uVar39 < uVar11) + uVar31 + ((int)uVar16 >> 0x1f),local_4c
                            ,local_50);
      piVar28 = local_38;
      uVar11 = local_30;
      iVar24 = local_3c;
    }
  }
  local_50 = iVar24 - uVar11;
  local_40 = iVar15 - (int)piVar28;
  local_54 = iVar20 - uVar11;
  uVar16 = -local_40;
  if (-1 < (int)local_40) {
    uVar16 = local_40;
  }
  uVar39 = iVar34 - (int)piVar28;
  local_138 = CONCAT44(local_138._4_4_,uVar16);
  local_44 = -local_50;
  if (-1 < (int)local_50) {
    local_44 = local_50;
  }
  local_128 = CONCAT44(local_128._4_4_,iVar29 - uVar11);
  iVar27 = (iVar29 - iVar20) * local_40 - local_50 * (iVar32 - iVar34);
  if ((int)uVar16 <= (int)local_44) {
    uVar16 = local_44;
  }
  iVar20 = (iVar29 - iVar20) * (iVar32 - iVar15) - (iVar29 - iVar24) * (iVar32 - iVar34);
  local_34 = iVar27 + iVar20;
  local_118 = CONCAT44(local_118._4_4_,iVar32 - (int)piVar28);
  iVar15 = local_54 * (iVar32 - iVar15) - (iVar29 - iVar24) * uVar39;
  local_38 = piVar28;
  local_30 = uVar11;
  local_3c = FUN_0042127c(uVar16);
  iVar34 = iVar15 + iVar20;
  uVar11 = -local_34;
  if (-1 < (int)local_34) {
    uVar11 = local_34;
  }
  iVar24 = FUN_0042127c(uVar11);
  uVar11 = -uVar39;
  if (-1 < (int)uVar39) {
    uVar11 = uVar39;
  }
  local_58 = -local_54;
  if (-1 < (int)local_54) {
    local_58 = local_54;
  }
  local_130 = CONCAT44(local_130._4_4_,uVar11);
  if ((int)uVar11 <= (int)local_58) {
    uVar11 = local_58;
  }
  local_3c = local_3c + iVar24;
  local_48 = FUN_0042127c(uVar11);
  iVar24 = -iVar34;
  if (-1 < iVar34) {
    iVar24 = iVar34;
  }
  iVar29 = FUN_0042127c(iVar24);
  iVar24 = -iVar27;
  if (-1 < iVar27) {
    iVar24 = iVar27;
  }
  iVar32 = -iVar15;
  if (-1 < iVar15) {
    iVar32 = iVar15;
  }
  local_48 = local_48 + iVar29;
  if (iVar24 < iVar32) {
    iVar24 = iVar32;
  }
  iVar29 = -iVar20;
  if (-1 < iVar20) {
    iVar29 = iVar20;
  }
  local_120 = CONCAT44(local_120._4_4_,iVar29);
  if (iVar24 < iVar29) {
    iVar24 = iVar29;
  }
  iVar24 = FUN_0042127c(iVar24);
  uVar16 = -(uint)(local_3c < (int)local_48) & local_3c - local_48;
  iVar29 = local_3c - uVar16;
  lVar3 = (longlong)(int)local_54 * (longlong)iVar34;
  uVar11 = -(uint)(iVar29 < iVar24) & iVar29 - iVar24;
  local_108 = (longlong)(int)local_34 * (longlong)(int)local_40;
  local_110._0_4_ = (int)lVar3;
  local_40 = -((int)(iVar29 - uVar11) < 0x11 ^ 1) & uVar11 + (uVar16 - local_3c) + 0x10;
  uVar11 = -local_40;
  iVar38 = 1 << (uVar11 & 0x1f);
  local_244 = local_30;
  uVar33 = iVar38 >> 1;
  uVar31 = uVar33 + (int)local_108;
  local_110._4_4_ = (int)((ulonglong)lVar3 >> 0x20);
  iVar24 = iVar38 >> 0x1f;
  lVar5 = (longlong)iVar34 * (longlong)(int)uVar39 + CONCAT44(iVar24,uVar33);
  local_240 = local_38;
  lVar4 = (longlong)(int)local_50 * (longlong)(int)local_34 + CONCAT44(iVar24,uVar33);
  iVar32 = (int)((ulonglong)lVar4 >> 0x20);
  iVar29 = (uint)(uVar31 < uVar33) + iVar24 + (int)((ulonglong)local_108 >> 0x20);
  iVar24 = (uint)(uVar33 + (int)local_110 < uVar33) + iVar24 + local_110._4_4_;
  iVar34 = (int)((ulonglong)lVar5 >> 0x20);
  uVar16 = ~uVar11;
  uVar39 = uVar11 & 0x20;
  local_270 = iVar34 * 2 << (uVar16 & 0x1f) | (uint)lVar5 >> (uVar11 & 0x1f);
  if (uVar39 != 0) {
    local_270 = iVar34 >> (uVar11 & 0x1f);
  }
  local_27c = iVar32 * 2 << (uVar16 & 0x1f) | (uint)lVar4 >> (uVar11 & 0x1f);
  if (uVar39 != 0) {
    local_27c = iVar32 >> (uVar11 & 0x1f);
  }
  local_278 = iVar24 * 2 << (uVar16 & 0x1f) | uVar33 + (int)local_110 >> (uVar11 & 0x1f);
  if (uVar39 != 0) {
    local_278 = iVar24 >> (uVar11 & 0x1f);
  }
  local_274 = iVar29 * 2 << (uVar16 & 0x1f) | uVar31 >> (uVar11 & 0x1f);
  if (uVar39 != 0) {
    local_274 = iVar29 >> (uVar11 & 0x1f);
  }
  local_26c = (int)(iVar27 + uVar33) >> (uVar11 & 0x1f);
  local_268 = (int)(iVar15 + uVar33) >> (uVar11 & 0x1f);
  if ((int)uVar11 < 0xf) {
    local_24c = iVar20 << (local_40 + 0xe & 0x1f);
  }
  else {
    local_24c = iVar20 + (iVar38 >> 0xf) >> (-local_40 - 0xe & 0x1f);
  }
  uVar16 = local_58;
  if ((int)local_58 <= (int)local_44) {
    uVar16 = local_44;
  }
  uVar39 = -(uint)local_128;
  if (-1 < (int)(uint)local_128) {
    uVar39 = (uint)local_128;
  }
  if ((int)uVar16 < (int)uVar39) {
    uVar16 = uVar39;
  }
  local_110 = lVar3;
  iVar15 = FUN_0042127c(uVar16);
  uVar16 = local_27c;
  if ((int)local_27c < 0) {
    uVar16 = -local_27c;
  }
  uVar39 = local_274;
  if ((int)local_274 < 0) {
    uVar39 = -local_274;
  }
  if ((int)uVar39 <= (int)uVar16) {
    uVar39 = uVar16;
  }
  iVar34 = FUN_0042127c(uVar39);
  iVar15 = iVar15 + iVar34;
  iVar34 = -(int)local_118;
  if (-1 < (int)local_118) {
    iVar34 = (int)local_118;
  }
  iVar24 = (uint)local_138;
  if ((int)(uint)local_138 < (int)(uint)local_130) {
    iVar24 = (uint)local_130;
  }
  if (iVar34 <= iVar24) {
    iVar34 = iVar24;
  }
  iVar34 = FUN_0042127c(iVar34);
  uVar16 = local_278;
  if ((int)local_278 < 0) {
    uVar16 = -local_278;
  }
  uVar39 = local_270;
  if ((int)local_270 < 0) {
    uVar39 = -local_270;
  }
  if ((int)uVar39 <= (int)uVar16) {
    uVar39 = uVar16;
  }
  iVar24 = FUN_0042127c(uVar39);
  iVar27 = FUN_0042127c((int)local_120);
  uVar16 = -(uint)(iVar15 < iVar34 + iVar24) & iVar15 - (iVar34 + iVar24);
  uVar39 = -((int)(local_40 + iVar27 + (iVar15 - uVar16)) < 0x1e ^ 1) &
           ((uVar16 - iVar15) - (local_40 + iVar27)) + 0x1d;
  uVar16 = -uVar39;
  iVar15 = 1 << (uVar16 & 0x1f);
  uVar11 = uVar11 - uVar39;
  iVar34 = uVar33 << (uVar16 & 0x1f);
  lVar4 = CONCAT44(iVar15 >> 0x1f,iVar15 >> 1);
  lVar5 = (longlong)(int)local_270 * (longlong)local_26c + lVar4;
  lVar3 = (longlong)(int)local_27c * (longlong)local_268 + lVar4;
  lVar4 = (longlong)(int)local_274 * (longlong)(int)local_278 + lVar4;
  uVar30 = ~uVar11;
  local_130._0_4_ = (uint)((longlong)local_26c * (longlong)(int)local_278);
  local_f8 = (uint)local_130 - (int)lVar3;
  local_138._0_4_ = (uint)((longlong)(int)local_274 * (longlong)local_268);
  local_108._0_4_ = (uint)local_138 - (int)lVar5;
  lVar9 = (longlong)iVar20 * (longlong)(int)-local_278 + (longlong)iVar34;
  local_128._0_4_ = (uint)((longlong)(int)local_270 * (longlong)(int)local_27c);
  local_118._4_4_ = (undefined4)((ulonglong)((longlong)iVar20 * (longlong)(int)-local_278) >> 0x20);
  lVar6 = (longlong)(int)local_270 * (longlong)iVar20 + (longlong)iVar34;
  local_138._4_4_ = (int)((ulonglong)((longlong)(int)local_274 * (longlong)local_268) >> 0x20);
  iVar24 = (int)((ulonglong)lVar6 >> 0x20);
  uVar36 = (uint)local_128 - (int)lVar4;
  lVar7 = (longlong)iVar20 * (longlong)(int)local_27c + (longlong)iVar34;
  bVar1 = (uint)local_130 < local_f8;
  local_130._4_4_ = (int)((ulonglong)((longlong)local_26c * (longlong)(int)local_278) >> 0x20);
  lVar8 = (longlong)iVar20 * (longlong)(int)-local_274 + (longlong)iVar34;
  iVar15 = (int)((ulonglong)lVar8 >> 0x20);
  iVar32 = (int)((ulonglong)lVar9 >> 0x20);
  bVar2 = (uint)local_128 < uVar36;
  local_128._4_4_ = (int)((ulonglong)((longlong)(int)local_270 * (longlong)(int)local_27c) >> 0x20);
  local_130 = CONCAT44(local_130._4_4_,iVar24);
  iVar29 = (int)((ulonglong)lVar7 >> 0x20);
  iVar34 = (local_130._4_4_ - (int)((ulonglong)lVar3 >> 0x20)) - (uint)bVar1;
  local_128 = CONCAT44(local_128._4_4_,iVar15);
  uVar39 = ~uVar16;
  iVar27 = (local_138._4_4_ - (int)((ulonglong)lVar5 >> 0x20)) -
           (uint)((uint)local_138 < (uint)local_108);
  local_f4 = iVar27 * 2 << (uVar39 & 0x1f);
  uVar31 = iVar24 * 2 << (uVar30 & 0x1f);
  local_138 = CONCAT44(local_138._4_4_,uVar31);
  iVar38 = (local_128._4_4_ - (int)((ulonglong)lVar4 >> 0x20)) - (uint)bVar2;
  local_118 = CONCAT44(local_118._4_4_,iVar34);
  local_23c = 0xe;
  uVar26 = iVar34 * 2 << (uVar39 & 0x1f);
  local_120 = CONCAT44((int)((ulonglong)((longlong)iVar20 * (longlong)(int)-local_274) >> 0x20),
                       uVar26);
  uVar33 = iVar38 * 2 << (uVar39 & 0x1f);
  local_110 = CONCAT44(local_110._4_4_,uVar33);
  uVar39 = uVar11 & 0x20;
  local_264 = uVar31 | (uint)lVar6 >> (uVar11 & 0x1f);
  if (uVar39 != 0) {
    local_264 = iVar24 >> (uVar11 & 0x1f);
  }
  local_260 = iVar32 * 2 << (uVar30 & 0x1f) | (uint)lVar9 >> (uVar11 & 0x1f);
  if (uVar39 != 0) {
    local_260 = iVar32 >> (uVar11 & 0x1f);
  }
  local_25c = (iVar15 << 1) << (uVar30 & 0x1f) | (uint)lVar8 >> (uVar11 & 0x1f);
  if (uVar39 != 0) {
    local_25c = iVar15 >> (uVar11 & 0x1f);
  }
  local_258 = iVar29 * 2 << (uVar30 & 0x1f) | (uint)lVar7 >> (uVar11 & 0x1f);
  if (uVar39 != 0) {
    local_258 = iVar29 >> (uVar11 & 0x1f);
  }
  local_254 = local_f4 | (uint)local_108 >> (uVar16 & 0x1f);
  if ((uVar16 & 0x20) != 0) {
    local_254 = iVar27 >> (uVar16 & 0x1f);
  }
  local_248 = uVar33 | uVar36 >> (uVar16 & 0x1f);
  local_250 = uVar26 | local_f8 >> (uVar16 & 0x1f);
  if ((uVar16 & 0x20) != 0) {
    local_248 = iVar38 >> (uVar16 & 0x1f);
    local_250 = iVar34 >> (uVar16 & 0x1f);
  }
  FUN_00417430(&local_288,&local_27c,*local_280,local_280[1]);
  FUN_00417430(&local_2d4,&local_27c,*local_2cc,local_2cc[1]);
  FUN_00417430(&local_320,&local_27c,*local_318,local_318[1]);
  FUN_00418b3c(&local_314,&local_27c);
  iVar15 = FUN_00417594(&local_314,local_2d4 - local_288,local_2d4 - local_288);
  if (iVar15 < 0) goto LAB_0041ae68;
  FUN_00418b3c(&local_360,&local_27c);
  iVar15 = FUN_00417594(&local_360,local_31c - local_284,local_31c - local_284);
  if (iVar15 < 0) goto LAB_0041ae68;
  iVar15 = local_308 - local_358;
  if (local_308 == local_358) {
    iVar15 = local_308;
    if (6 < local_308) goto joined_r0x0041d598;
  }
  else {
    if (iVar15 < 0) {
      iVar15 = -iVar15;
    }
    if (3 < iVar15) goto LAB_0041ae68;
joined_r0x0041d598:
    iVar15 = -1;
    if (3 < local_308) {
      iVar15 = FUN_00419950(&local_314,&local_27c,local_fc,local_100,local_ec,0);
      iVar20 = iVar15 - local_308;
      if (iVar20 < 0) {
        iVar20 = -iVar20;
      }
      if (3 < iVar20) {
        iVar15 = -1;
      }
    }
    iVar20 = iVar15;
    if (3 < local_358) {
      iVar24 = FUN_00419950(&local_360,&local_27c,local_fc,local_100,local_ec,1);
      iVar34 = iVar24 - local_358;
      if (iVar34 < 0) {
        iVar34 = -iVar34;
      }
      if ((iVar34 < 4) && (iVar20 = iVar24, -1 < iVar15)) {
        if ((-1 < iVar24) && (iVar24 != iVar15)) goto LAB_0041ae68;
        goto LAB_0041c348;
      }
    }
    iVar15 = iVar20;
    if (iVar15 < 0) goto LAB_0041ae68;
  }
LAB_0041c348:
  FUN_00418b3c(&local_2c8,&local_27c);
  iVar20 = FUN_00417594(&local_2c8,local_2d4 - local_320,local_31c - local_284);
  if (-1 < iVar20) {
    iVar20 = local_2bc - local_308;
    if (iVar20 < 0) {
      iVar20 = -iVar20;
    }
    if (iVar20 < 2) {
      iVar20 = local_2c0 - local_358;
      if (iVar20 < 0) {
        iVar20 = -iVar20;
      }
      if (iVar20 < 2) {
        uVar16 = 0;
        local_48 = local_2c4 * local_268;
        iVar24 = local_2c8 * 5 + local_288;
        iVar20 = 0;
        local_30 = 6;
        iVar34 = local_2c4 * -3 + local_284;
        local_164[2] = 0;
        iVar27 = iVar24 * local_27c + iVar34 * local_278;
        local_40 = iVar24 * local_26c + iVar34 * local_268 + local_24c;
        local_3c = local_2c4 * local_278;
        iVar34 = iVar24 * local_274 + iVar34 * local_270;
        local_38 = (int *)(local_2c4 * local_270);
        uVar11 = 0;
        do {
          local_34 = uVar11;
          if (iVar20 != local_30) {
            local_34 = uVar11 + 1;
            FUN_00419894(local_164 + 4,&local_244,&local_240,iVar27,iVar34,local_40);
            iVar24 = FUN_0041785c(local_fc,local_100,local_ec,local_154,local_150);
            uVar16 = uVar16 | iVar24 << (uVar11 & 0x1f);
            local_164[2] = uVar16;
            if (7 < iVar20) goto code_r0x0041c504;
          }
          iVar27 = iVar27 + local_3c;
          iVar34 = iVar34 + (int)local_38;
          local_40 = local_40 + local_48;
          iVar20 = iVar20 + 1;
          uVar11 = local_34;
        } while( true );
      }
    }
  }
LAB_0041ae68:
  bVar1 = local_148 < (int)uVar21;
LAB_0041ae6c:
  piVar19 = piVar19 + 1;
  if (bVar1) goto LAB_0041ca30;
  goto LAB_0041ae74;
code_r0x0041c504:
  uVar11 = 0;
  local_48 = 6;
  local_3c = -local_27c * local_2c8;
  local_164[0] = 0;
  local_30 = local_2c8 * -local_274;
  piVar28 = (int *)(local_2c8 * -local_26c);
  while( true ) {
    iVar24 = iVar20 + -1;
    if (iVar20 < 1) break;
    iVar27 = iVar27 + local_3c;
    iVar34 = iVar34 + local_30;
    local_40 = local_40 + (int)piVar28;
    iVar20 = iVar24;
    if (iVar24 != local_48) {
      local_38 = piVar28;
      FUN_00419894(local_164 + 4,&local_244,&local_240,iVar27,iVar34,local_40);
      iVar24 = FUN_0041785c(local_fc,local_100,local_ec,local_154,local_150);
      uVar11 = uVar11 | iVar24 << (local_34 & 0x1f);
      local_34 = local_34 + 1;
      piVar28 = local_38;
      local_164[0] = uVar11;
    }
  }
  iVar27 = local_314 * 3 + local_2d4;
  local_40 = 0;
  iVar24 = local_310 * 5 + local_2d0;
  uVar39 = 0;
  local_48 = 8;
  local_34 = iVar27 * local_27c + iVar24 * local_278;
  local_3c = local_314 * -local_27c;
  local_30 = local_314 * -local_274;
  iVar20 = local_314 * -local_26c;
  local_4c = uVar11;
  iVar34 = iVar27 * local_26c + iVar24 * local_268 + local_24c;
  iVar24 = iVar27 * local_274 + iVar24 * local_270;
  do {
    iVar29 = iVar24 + local_30;
    iVar27 = local_34;
    local_34 = local_34 + local_3c;
    FUN_00419894(local_164 + 4,&local_244,&local_240,iVar27,iVar24,iVar34);
    iVar24 = FUN_0041785c(local_fc,local_100,local_ec,local_154,local_150);
    uVar31 = local_4c;
    uVar11 = uVar39 & 0x1f;
    uVar39 = uVar39 + 1;
    local_40 = local_40 | iVar24 << uVar11;
    iVar34 = iVar34 + iVar20;
    iVar24 = iVar29;
    local_164[3] = local_40;
  } while (uVar39 != local_48);
  iVar20 = local_360 * 5 + local_320;
  uVar11 = 0;
  local_4c = 0xf;
  local_138 = CONCAT44(local_138._4_4_,local_35c * local_268);
  iVar34 = local_35c * -3 + local_31c;
  local_38 = (int *)(iVar20 * local_27c + iVar34 * local_278);
  iVar24 = iVar20 * local_26c + iVar34 * local_268 + local_24c;
  local_48 = local_35c * local_278;
  local_34 = iVar20 * local_274 + iVar34 * local_270;
  local_3c = local_35c * local_270;
  do {
    piVar28 = local_38;
    local_38 = (int *)((int)local_38 + local_48);
    iVar20 = local_34;
    local_34 = local_34 + local_3c;
    FUN_00419894(local_164 + 4,&local_244,&local_240,piVar28,iVar20,iVar24);
    iVar24 = iVar24 + (uint)local_138;
    iVar20 = FUN_0041785c(local_fc,local_100,local_ec,local_154,local_150);
    uVar11 = uVar11 | iVar20 << (uVar39 & 0x1f);
    uVar39 = uVar39 + 1;
    local_164[1] = uVar11;
  } while (uVar39 != local_4c);
  uVar39 = 2;
  uVar33 = 1;
  if (local_40 == uVar16) {
    uVar33 = 2;
  }
  if (uVar31 != uVar11) {
    uVar39 = 4;
  }
  iVar20 = 0;
  uVar11 = 4;
  uVar26 = uVar33;
  do {
    local_14c = (uVar31 | uVar16) ^ 0x5412;
    local_58 = uVar39;
    local_50 = uVar33;
    local_40 = uVar11;
    uVar16 = FUN_00420ad0(&local_14c);
    uVar11 = local_40;
    uVar33 = local_50;
    uVar39 = local_58;
    local_14c = local_14c >> 10;
    if ((int)uVar16 < 0) {
      uVar16 = local_40;
    }
    if (iVar20 == 0) {
      iVar34 = 0;
LAB_0041c90c:
      iVar20 = iVar20 + 1;
      local_17c[iVar34 + -1] = local_14c;
      local_18c[iVar34 + -1] = 1;
      local_238[iVar34] = uVar16;
    }
    else {
      if (local_18c[3] == local_14c) {
        iVar34 = 0;
      }
      else {
        iVar34 = 0;
        puVar17 = local_17c;
        do {
          iVar34 = iVar34 + 1;
          if (iVar34 == iVar20) goto LAB_0041c90c;
          uVar31 = *puVar17;
          puVar17 = puVar17 + 1;
        } while (local_14c != uVar31);
      }
      uVar31 = local_238[iVar34];
      local_18c[iVar34 + -1] = local_18c[iVar34 + -1] + 1;
      if ((int)uVar16 < (int)uVar31) {
        local_238[iVar34] = uVar16;
      }
    }
    if ((int)uVar39 <= (int)uVar26) break;
    uVar16 = uVar26 & 1;
    iVar34 = (int)uVar26 >> 1;
    uVar26 = uVar26 + uVar33;
    uVar16 = local_164[uVar16 + 2];
    uVar31 = local_164[iVar34];
  } while( true );
  if (iVar20 == 1) {
    iVar34 = 0;
    bVar1 = (int)local_238[0] < 4;
  }
  else {
    puVar17 = local_238;
    piVar28 = local_18c;
    iVar24 = 1;
    iVar34 = 0;
    bVar1 = (int)local_238[0] < 4;
    uVar11 = local_238[0];
    do {
      puVar17 = puVar17 + 1;
      if ((bVar1) || (uVar16 = *puVar17, 3 < (int)*puVar17)) {
        if (local_18c[iVar34 + -1] < *piVar28) {
          uVar16 = *puVar17;
          goto LAB_0041d690;
        }
        if ((*piVar28 == local_18c[iVar34 + -1]) && (uVar16 = *puVar17, (int)*puVar17 < (int)uVar11)
           ) goto LAB_0041d690;
      }
      else {
LAB_0041d690:
        uVar11 = uVar16;
        bVar1 = (int)uVar11 < 4;
        iVar34 = iVar24;
      }
      iVar24 = iVar24 + 1;
      piVar28 = piVar28 + 1;
    } while (iVar24 != iVar20);
  }
  if (((!bVar1) || ((int)local_17c[iVar34 + -1] < 0)) ||
     (iVar20 = FUN_0040288c(local_220 + 6,local_8c,local_280,local_2cc,local_318,iVar15,
                            local_17c[iVar34 + -1],local_fc,local_100,local_ec), iVar20 < 0))
  goto LAB_0041ae68;
  if (iVar15 < 0) {
    cVar10 = local_dc[-1];
    goto joined_r0x0041dab8;
  }
  iVar15 = local_d8[1];
  if (iVar15 < local_d8[2]) {
    iVar20 = *local_d8;
  }
  else {
    uVar11 = local_d8[2] << 1 | 1;
    local_d8[2] = uVar11;
    iVar20 = realloc(*local_d8,uVar11 * 0x30);
    iVar15 = local_d8[1];
    *local_d8 = iVar20;
  }
  local_d8[1] = iVar15 + 1;
  puVar14 = (uint *)(iVar20 + iVar15 * 0x30);
  puVar17 = local_220 + 6;
  do {
    puVar18 = puVar17 + 4;
    uVar16 = puVar17[1];
    uVar11 = puVar17[2];
    uVar21 = puVar17[3];
    *puVar14 = *puVar17;
    puVar14[1] = uVar16;
    puVar14[2] = uVar11;
    puVar14[3] = uVar21;
    puVar14 = puVar14 + 4;
    puVar17 = puVar18;
  } while (puVar18 != &local_1d8);
  iVar20 = 4;
  iVar15 = *local_d8 + local_d8[1] * 0x30 + -0x30;
  do {
    iVar20 = iVar20 + -1;
    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) >> 2;
    *(int *)(iVar15 + 0x14) = *(int *)(iVar15 + 0x14) >> 2;
    iVar15 = iVar15 + 8;
  } while (iVar20 != 0);
  local_148 = local_1e0 - local_1f0;
  *local_140 = '\x01';
  local_dc[-1] = '\x01';
  local_80[-2] = '\x01';
  iVar20 = 0;
  local_144 = local_1e4 - local_1dc;
  local_138 = CONCAT44(local_138._4_4_,local_220[10] - local_1e8);
  local_128 = CONCAT44(local_128._4_4_,(int)local_1f4 - local_1e4);
  local_130 = CONCAT44(local_130._4_4_,local_1e8);
  local_120 = CONCAT44(local_120._4_4_,local_1e4);
  iVar15 = 0;
  piVar19 = local_7c;
  pcVar37 = local_98;
  do {
    iVar15 = iVar15 + 1;
    if (*pcVar37 == '\0') {
      iVar24 = piVar19[1];
      iVar34 = *piVar19;
      if (-1 < (int)((local_1f0 - local_220[10]) * (iVar24 - (int)local_1f4) +
                    (local_1ec - (int)local_1f4) * (local_220[10] - iVar34))) {
        if (((-1 < (local_1e0 - local_1f0) * (iVar24 - local_1ec) +
                   (local_1dc - local_1ec) * (local_1f0 - iVar34)) &&
            (-1 < (local_1e8 - local_1e0) * (iVar24 - local_1dc) +
                  (local_1e4 - local_1dc) * (local_1e0 - iVar34))) &&
           (-1 < (int)((local_220[10] - local_1e8) * (iVar24 - local_1e4) +
                      ((int)local_1f4 - local_1e4) * (local_1e8 - iVar34)))) {
          iVar20 = iVar20 + 1;
          *pcVar37 = '\x02';
        }
      }
    }
    pcVar37 = pcVar37 + 1;
    piVar19 = piVar19 + 4;
  } while (iVar15 < local_b4);
  if (2 < iVar20) {
    iVar15 = malloc(iVar20 << 4);
    iVar34 = 0;
    iVar20 = 0;
    piVar19 = local_7c;
    do {
      while( true ) {
        pcVar37 = local_98 + iVar34;
        iVar34 = iVar34 + 1;
        if (*pcVar37 != '\x02') break;
        piVar28 = piVar19 + 1;
        iVar27 = piVar19[2];
        piVar23 = (int *)(iVar15 + iVar20 * 0x10);
        iVar24 = piVar19[3];
        iVar20 = iVar20 + 1;
        iVar29 = *piVar19;
        piVar19 = piVar19 + 4;
        piVar23[1] = *piVar28;
        *piVar23 = iVar29;
        piVar23[2] = iVar27;
        piVar23[3] = iVar24;
        if (iVar34 >= local_b4) goto LAB_0041da78;
      }
      piVar19 = piVar19 + 4;
    } while (iVar34 < local_b4);
LAB_0041da78:
    FUN_0041ab68(local_8c,local_d8,iVar15,iVar20,local_fc,local_100,local_ec);
    free(iVar15);
  }
  iVar15 = 0;
  pcVar37 = local_98;
  do {
    while( true ) {
      iVar15 = iVar15 + 1;
      if (*pcVar37 != '\x02') break;
      *pcVar37 = '\x01';
      pcVar37 = pcVar37 + 1;
      if (iVar15 >= local_b4) goto LAB_0041d9b8;
    }
    pcVar37 = pcVar37 + 1;
  } while (iVar15 < local_b4);
LAB_0041d9b8:
  cVar10 = local_dc[-1];
joined_r0x0041dab8:
  if (cVar10 != '\0') {
    cVar10 = local_80[-2];
    goto LAB_0041ca48;
  }
LAB_0041acc8:
  local_140 = local_140 + 1;
  local_13c = local_13c + 4;
  if (local_140 == local_e4) goto LAB_0041ce44;
  goto LAB_0041ace0;
LAB_0041ca30:
  cVar10 = local_dc[-1];
  goto joined_r0x0041dab8;
LAB_0041ce44:
  cVar10 = local_80[-2];
LAB_0041ca48:
  local_dc = local_dc + 1;
  local_e8 = local_84;
  if (cVar10 != '\0') goto LAB_0041ca60;
  goto LAB_0041ac5c;
}



// ==== FUN_0041dac8 @ 0041dac8 size=232

undefined4 FUN_0041dac8(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint in_t0;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  
  piVar13 = (int *)(param_1 + param_2 * 0xc + 0xb10);
  iVar10 = piVar13[1];
  if (iVar10 < piVar13[2]) {
    iVar14 = *piVar13;
  }
  else {
    iVar10 = piVar13[2] * 2 + 1;
    piVar13[2] = iVar10;
    iVar14 = realloc(*piVar13,iVar10 * 0x14);
    iVar10 = piVar13[1];
    *piVar13 = iVar14;
  }
  piVar13[1] = iVar10 + 1U;
  uVar1 = param_3 + 3 & 3;
  puVar15 = (uint *)(iVar14 + iVar10 * 0x14);
  uVar2 = param_3 + 7 & 3;
  iVar14 = *(int *)((param_3 + 7) - uVar2);
  uVar3 = param_3 + 0xb & 3;
  iVar4 = *(int *)((param_3 + 0xb) - uVar3);
  uVar5 = param_3 & 3;
  uVar12 = *(uint *)(param_3 + 0xc);
  uVar11 = *(uint *)(param_3 + 0x10);
  uVar6 = param_3 + 4 & 3;
  uVar8 = *(uint *)((param_3 + 4) - uVar6);
  uVar7 = param_3 + 8 & 3;
  uVar9 = *(uint *)((param_3 + 8) - uVar7);
  *puVar15 = (*(int *)((param_3 + 3) - uVar1) << (3 - uVar1) * 8 |
             in_t0 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar5) * 8 |
             *(uint *)(param_3 - uVar5) >> uVar5 * 8;
  puVar15[1] = (iVar14 << (3 - uVar2) * 8 | param_4 & 0xffffffffU >> (uVar2 + 1) * 8) &
               -1 << (4 - uVar6) * 8 | uVar8 >> uVar6 * 8;
  puVar15[2] = (iVar4 << (3 - uVar3) * 8 | iVar10 + 1U & 0xffffffffU >> (uVar3 + 1) * 8) &
               -1 << (4 - uVar7) * 8 | uVar9 >> uVar7 * 8;
  puVar15[3] = uVar12;
  puVar15[4] = uVar11;
  return 0;
}



// ==== FUN_0041f230 @ 0041f230 size=988

undefined4 FUN_0041f230(int param_1,uint param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      *param_4 = 0;
      return 1;
    }
    *param_4 = *(byte *)(param_1 + ((-(*(byte *)(param_1 + param_3) & 1) & 0xff) +
                                    (uint)*(byte *)(param_1 + param_3) >> 1) + 0x100);
    return 1;
  }
  bVar6 = (byte)param_2;
  if (param_3 == 0) {
    *param_4 = 0;
    param_4[1] = bVar6;
    return 2;
  }
  uVar10 = (uint)*(byte *)(param_1 + param_2);
  uVar9 = (uint)(uVar10 % 0x11 == 0);
  uVar2 = (uint)*(byte *)(param_1 + param_3);
  if (uVar9 != 0) {
    param_2 = (uint)*(byte *)(param_1 + uVar10 + 0x1fe);
    param_3 = (uint)*(byte *)(param_1 + uVar2 + 0x1fd);
    uVar10 = (uint)*(byte *)(param_1 + param_2);
    uVar2 = (uint)*(byte *)(param_1 + param_3);
  }
  uVar5 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar10 * 2 + 0x100));
  uVar7 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar2 * 2 + 0x100));
  uVar3 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar5 * 2 + 0x100));
  uVar8 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar7 * 2 + 0x100));
  uVar4 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar3 * 2 + 0x100));
  uVar3 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar3 + uVar4 + 0x100));
  uVar2 = (uint)(byte)(*(byte *)(param_1 + uVar4 + uVar8 + 0x100) ^
                       *(byte *)(param_1 + uVar8 * 2 + 0x100) ^
                       *(byte *)(param_1 + uVar3 + uVar7 + 0x100) ^
                      *(byte *)(param_1 + uVar2 +
                                (uint)*(byte *)(param_1 +
                                               (uint)*(byte *)(param_1 + uVar5 + uVar3 + 0x100)) +
                               0x100));
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)*(byte *)(param_1 + uVar10 + (uint)*(byte *)(param_1 + uVar2) + 0x100);
  }
  if ((uint)*(byte *)(param_1 + uVar3) % 0x11 != 0) {
    return 0;
  }
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + ((uint)*(byte *)(param_1 + uVar3) -
                                      (uint)*(byte *)(param_1 +
                                                     (*(byte *)(param_1 + uVar4 * 2 + 0x100) ^
                                                     param_2))) + 0x1ff);
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar3) * 2 + 0x100) ^
                    *(byte *)(param_1 + uVar10 + (uint)*(byte *)(param_1 + uVar3) + 0x100));
    }
  }
  uVar7 = 0;
  uVar4 = 0;
  if ((uVar2 ^ param_3) != 0) {
    uVar2 = (uint)*(byte *)((param_1 - uVar5) + (uint)*(byte *)(param_1 + (uVar2 ^ param_3)) + 0x1ff
                           );
    uVar4 = 0;
    if (uVar2 != 0) {
      bVar1 = *(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar2) + 0x1dd);
      uVar4 = (uint)bVar1;
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar2 = (uint)(*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar4) * 2 + 0x100) ^
                      *(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar4) + 0x1dd));
        if (uVar2 != 0) {
          uVar2 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar2) + 0x1ee);
          if (uVar2 != 0) {
            uVar7 = (uint)*(byte *)(param_1 + ((uint)*(byte *)(param_1 + uVar2) -
                                              (uint)*(byte *)(param_1 +
                                                             (uint)(*(byte *)(param_1 + 0x1ee) ^
                                                                   *(byte *)(param_1 + 0x1bb)))) +
                                   0x1ff);
            if (uVar7 != 0) {
              uVar4 = (uint)(byte)(*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar7) + 0x1ee) ^
                                   *(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar7) * 2 + 0x100)
                                  ^ bVar1);
              goto LAB_0041f530;
            }
          }
        }
      }
    }
    uVar7 = 0;
  }
LAB_0041f530:
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar4) + 0x122);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar2) + 0x155);
    }
  }
  if (uVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar7) + 0x111);
  }
  if ((uVar4 ^ uVar2) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + uVar10 + (uint)*(byte *)(param_1 + (uVar4 ^ uVar2)) + 0x100);
  }
  bVar1 = *(byte *)(param_1 + uVar9 + (uint)*(byte *)(param_1 + (uVar2 ^ uVar3)) + 0x100);
  *param_4 = bVar1;
  param_4[1] = bVar1 ^ bVar6;
  return 2;
}



// ==== FUN_0041f60c @ 0041f60c size=700

int FUN_0041f60c(int param_1,int param_2,uint param_3,uint param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_4 == 0) {
    iVar6 = FUN_0041f230();
    if (param_3 == 0) {
      return iVar6;
    }
    param_5[iVar6] = 0;
    return iVar6 + 1;
  }
  bVar2 = (byte)param_2;
  if (param_2 == 0) {
    if (param_3 == 0) {
LAB_0041f67c:
      uVar7 = *(byte *)(param_1 + param_4) / 3;
      iVar6 = param_1 + uVar7;
      if ((uint)*(byte *)(param_1 + param_4) != uVar7 * 3) {
        return 0;
      }
      bVar1 = *(byte *)(iVar6 + 0x100);
      *param_5 = bVar2 ^ bVar1;
      bVar2 = bVar2 ^ *(byte *)(iVar6 + 0x155);
      param_5[1] = bVar2;
      param_5[2] = bVar2 ^ bVar1;
      return 3;
    }
    bVar1 = *(byte *)(param_1 + param_3);
LAB_0041f6f8:
    uVar8 = (uint)bVar1;
    uVar7 = (-(uVar8 & 1) & 0xff) + uVar8 >> 1;
    bVar1 = *(byte *)(param_1 + uVar7 + uVar8 + 0x100);
LAB_0041f71c:
    uVar5 = *(undefined1 *)
             (param_1 + ((uint)*(byte *)(param_1 + param_4) - (uint)*(byte *)(param_1 + (uint)bVar1)
                        ) + 0x1ff);
  }
  else {
    if (param_3 == 0) {
      uVar7 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + param_2) * 2 + 0x100);
      if (uVar7 == 0) goto LAB_0041f67c;
      bVar1 = *(byte *)(param_1 + uVar7);
      goto LAB_0041f6f8;
    }
    uVar8 = (uint)*(byte *)(param_1 + param_2);
    uVar7 = *(byte *)(param_1 + uVar8 * 2 + 0x100) ^ param_3;
    param_4 = param_4 ^ *(byte *)(param_1 + uVar8 + (uint)*(byte *)(param_1 + param_3) + 0x100);
    if (uVar7 == 0) {
      if (param_4 != 0) goto LAB_0041f67c;
      goto LAB_0041f7f8;
    }
    uVar5 = 0;
    uVar8 = (uint)*(byte *)(param_1 + uVar7);
    uVar7 = (-(uVar8 & 1) & 0xff) + uVar8 >> 1;
    bVar1 = *(byte *)(param_1 + uVar8 + uVar7 + 0x100);
    if (param_4 != 0) goto LAB_0041f71c;
  }
  iVar6 = FUN_0041f230(param_1,uVar5,1,param_5);
  if (iVar6 < 1) {
    return 0;
  }
  uVar8 = (uint)*(byte *)(param_1 + (uint)*param_5);
  if (uVar8 != 0) {
    uVar3 = uVar8 / 3;
    if (uVar8 == uVar3 * 3) {
      bVar4 = bVar2 ^ *(byte *)(param_1 + uVar7 +
                                (uint)*(byte *)(param_1 +
                                               (uint)(*(byte *)((param_1 - uVar3) + 0x1ff) ^
                                                     *(byte *)(param_1 + uVar3 + 0x100))) + 0x100);
      *param_5 = bVar4;
      bVar1 = bVar2 ^ *(byte *)(param_1 + uVar7 +
                                (uint)*(byte *)(param_1 +
                                               (uint)(*(byte *)((param_1 - uVar3) + 0x1aa) ^
                                                     *(byte *)(param_1 + uVar3 + 0x155))) + 0x100);
      param_5[1] = bVar1;
      param_5[2] = bVar2 ^ bVar4 ^ bVar1;
      return 3;
    }
    return 0;
  }
LAB_0041f7f8:
  *param_5 = bVar2;
  return 1;
}



// ==== FUN_0041f8c8 @ 0041f8c8 size=868

int FUN_0041f8c8(int param_1,int param_2,uint param_3,int param_4,uint param_5,byte *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_5 == 0) {
    iVar2 = FUN_0041f60c();
    if (param_4 == 0) {
      return iVar2;
    }
    param_6[iVar2] = 0;
    return iVar2 + 1;
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      uVar5 = 0;
      if (param_3 != 0) {
        uVar5 = *(undefined1 *)
                 (param_1 + ((-(*(byte *)(param_1 + param_3) & 1) & 0xff) +
                             (uint)*(byte *)(param_1 + param_3) >> 1) + 0x100);
      }
      iVar2 = FUN_0041f230(param_1,uVar5,
                           *(undefined1 *)
                            (param_1 + ((-(*(byte *)(param_1 + param_5) & 1) & 0xff) +
                                        (uint)*(byte *)(param_1 + param_5) >> 1) + 0x100),param_6);
      return iVar2;
    }
    pbVar7 = param_6;
    iVar2 = FUN_0041f60c();
    if (0 < iVar2) {
      uVar10 = (uint)*param_6;
      iVar2 = FUN_0041f230(param_1,*(undefined1 *)
                                    (param_1 + ((uint)*(byte *)(param_1 + param_4) -
                                               (uint)*(byte *)(param_1 + uVar10)) + 0x1ff),param_5,
                           param_6,pbVar7);
      if (1 < iVar2) {
        bVar1 = param_6[1];
        iVar2 = FUN_0041f230(param_1,uVar10,*param_6,param_6,pbVar7);
        iVar3 = FUN_0041f230(param_1,uVar10,bVar1,param_6 + iVar2);
        return iVar3 + iVar2;
      }
    }
    return 0;
  }
  uVar10 = (uint)*(byte *)(param_1 + param_2);
  if (param_4 == 0) {
LAB_0041fbec:
    if (param_3 == 0) {
      uVar9 = 0;
      goto LAB_0041fa00;
    }
    uVar6 = 0;
    uVar9 = 0;
    uVar4 = 0;
LAB_0041f9e8:
    param_5 = param_5 ^ uVar4;
    if (uVar6 != 0) {
      uVar4 = (uint)*(byte *)(param_1 + uVar6);
      goto LAB_0041fb1c;
    }
  }
  else {
    uVar6 = (uint)*(byte *)(param_1 + (*(byte *)(param_1 + param_4) - uVar10) + 0x1ff);
    if (uVar6 == 0) goto LAB_0041fbec;
    uVar4 = (uint)*(byte *)(param_1 + uVar6);
    uVar9 = (uint)*(byte *)(param_1 + ((-(uVar4 & 1) & 0xff) + uVar4 >> 1) + 0x100);
    if (param_3 != 0) {
      uVar4 = (uint)*(byte *)(param_1 + uVar4 + (uint)*(byte *)(param_1 + param_3) + 0x100);
      goto LAB_0041f9e8;
    }
LAB_0041fb1c:
    param_5 = param_5 ^ *(byte *)(param_1 + uVar4 * 2 + 0x100);
  }
  if (param_5 == 0) {
    iVar2 = FUN_0041f230(param_1,param_2,uVar6 ^ param_3,param_6);
    if ((iVar2 == 2) && ((*param_6 == uVar9 || (param_6[1] == uVar9)))) {
      return 2;
    }
    param_6[iVar2] = (byte)uVar9;
    return iVar2 + 1;
  }
LAB_0041fa00:
  iVar2 = 0xff - (uint)*(byte *)(param_1 + param_5);
  if (uVar9 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*(byte *)(param_1 + uVar10 + (uint)*(byte *)(param_1 + uVar9) + 0x100);
  }
  uVar5 = 0;
  if ((uVar6 ^ param_3) != 0) {
    uVar5 = *(undefined1 *)(param_1 + iVar2 + (uint)*(byte *)(param_1 + (uVar6 ^ param_3)) + 0x100);
  }
  iVar2 = FUN_0041f8c8(param_1,0,uVar5,*(undefined1 *)(param_1 + uVar10 + iVar2 + 0x100),
                       *(undefined1 *)(param_1 + iVar2 + 0x100),param_6);
  if (0 < iVar2) {
    pbVar7 = param_6;
    do {
      pbVar8 = pbVar7 + 1;
      *pbVar7 = (byte)uVar9 ^
                *(byte *)((param_1 - (uint)*(byte *)(param_1 + (uint)*pbVar7)) + 0x1ff);
      pbVar7 = pbVar8;
    } while (pbVar8 != param_6 + iVar2);
  }
  return iVar2;
}



// ==== FUN_0041fc2c @ 0041fc2c size=104

void FUN_0041fc2c(undefined1 *param_1,uint param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  iVar3 = 0;
  uVar4 = 1;
  puVar5 = param_1 + 0x1ff;
  do {
    iVar3 = iVar3 + 1;
    *puVar5 = (char)uVar4;
    puVar5[-0xff] = (char)uVar4;
    uVar4 = (-(uVar4 >> 7) & param_2 ^ uVar4 << 1) & 0xff;
    puVar5 = puVar5 + 1;
  } while (iVar3 != 0x100);
  puVar5 = param_1;
  do {
    pbVar1 = puVar5 + 0x100;
    cVar2 = (char)puVar5;
    puVar5 = puVar5 + 1;
    param_1[*pbVar1] = cVar2 - (char)param_1;
  } while (puVar5 != param_1 + 0xff);
  *param_1 = 0;
  return;
}



// ==== FUN_0041fc94 @ 0041fc94 size=1840

int FUN_0041fc94(int param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte local_438 [256];
  byte local_338 [256];
  byte local_238 [255];
  byte abStack_139 [257];
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_7 <= param_5) {
    if (param_5 < 1) {
      return 0;
    }
    iVar7 = 0;
    do {
      bVar2 = 0;
      if (0 < param_4) {
        uVar5 = (uint)*param_3;
        pbVar12 = param_3;
        while (pbVar12 = pbVar12 + 1, pbVar12 != param_3 + param_4) {
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 +
                                                             (uint)*(byte *)(param_1 + param_2 +
                                                                             iVar7 + 0x100)) +
                                    (uint)*(byte *)(param_1 + uVar5) + 0x100);
          }
          uVar5 = *pbVar12 ^ uVar4;
        }
        bVar2 = (byte)uVar5;
      }
      pbVar12 = local_338 + iVar7;
      iVar7 = iVar7 + 1;
      *pbVar12 = bVar2;
    } while (iVar7 != param_5);
    local_38 = (uint)local_338[0];
    if (local_338[0] == 0) {
      pbVar12 = local_338;
      do {
        pbVar12 = pbVar12 + 1;
        if (pbVar12 == local_338 + param_5) {
          return 0;
        }
      } while (*pbVar12 == 0);
    }
    iVar7 = 4;
    if (3 < param_5) {
      iVar7 = param_5;
    }
    memset(abStack_139 + 1,0,iVar7 + 1);
    abStack_139[1] = 1;
    if (0 < param_7) {
      iVar7 = 1;
      do {
        bVar2 = *(byte *)(param_6 + iVar7 + -1);
        pbVar12 = abStack_139 + iVar7;
        do {
          bVar3 = 0;
          if (*pbVar12 != 0) {
            bVar3 = *(byte *)(param_1 + (param_4 - (uint)bVar2) +
                              (uint)*(byte *)(param_1 + (uint)*pbVar12) + 0xff);
          }
          pbVar16 = pbVar12 + -1;
          pbVar12[1] = bVar3 ^ pbVar12[1];
          pbVar12 = pbVar16;
        } while (abStack_139 != pbVar16);
        bVar1 = iVar7 != param_7;
        iVar7 = iVar7 + 1;
      } while (bVar1);
    }
    pbVar12 = local_438;
    iVar14 = param_7 + 1;
    memcpy(pbVar12,abStack_139 + 1,param_5 + 1);
    iVar7 = 0;
    iVar13 = param_7;
    if (iVar14 <= param_5) {
      iVar11 = 0xff;
      iVar15 = iVar14;
      do {
        while( true ) {
          local_34 = iVar14;
          local_30 = iVar7;
          local_2c = iVar11;
          memmove(local_438 + 1,pbVar12,iVar14);
          iVar11 = local_2c;
          iVar7 = local_30;
          local_438[0] = 0;
          if (-1 < iVar13) break;
LAB_0041ff74:
          iVar15 = iVar15 + 1;
          iVar14 = iVar15 - iVar7;
          if (param_5 < iVar15) {
            iVar14 = iVar13 + 1;
            goto LAB_0041ff88;
          }
        }
        pbVar18 = abStack_139 + iVar13 + 2;
        pbVar16 = local_338 + iVar15;
        pbVar17 = abStack_139 + 1;
        uVar5 = 0;
        do {
          while( true ) {
            uVar4 = 0;
            if (*pbVar17 != 0) break;
LAB_0041fea4:
            pbVar17 = pbVar17 + 1;
            uVar5 = uVar5 ^ uVar4;
            pbVar16 = pbVar16 + -1;
            if (pbVar17 == pbVar18) goto LAB_0041fee4;
          }
          if (pbVar16[-1] != 0) {
            uVar4 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + (uint)*pbVar17) +
                                    (uint)*(byte *)(param_1 + (uint)pbVar16[-1]) + 0x100);
            goto LAB_0041fea4;
          }
          pbVar17 = pbVar17 + 1;
          pbVar16 = pbVar16 + -1;
        } while (pbVar17 != pbVar18);
LAB_0041fee4:
        if (uVar5 == 0) goto LAB_0041ff74;
        uVar5 = (uint)*(byte *)(param_1 + uVar5);
        if (iVar13 < local_34) {
          iVar7 = local_2c - uVar5;
          uVar4 = 0;
          pbVar16 = pbVar12;
          pbVar18 = abStack_139 + 1;
          while( true ) {
            bVar2 = *pbVar18;
            bVar3 = 0;
            if (bVar2 != 0) {
              bVar3 = *(byte *)(param_1 + iVar7 + (uint)*(byte *)(param_1 + (uint)bVar2) + 0x100);
            }
            bVar9 = 0;
            *pbVar16 = bVar3;
            if (uVar4 != 0) {
              bVar9 = *(byte *)(param_1 + uVar5 + (uint)*(byte *)(param_1 + uVar4) + 0x100);
            }
            *pbVar18 = bVar9 ^ bVar2;
            pbVar16 = pbVar16 + 1;
            if (pbVar18 + 1 == abStack_139 + local_34 + 2) break;
            uVar4 = (uint)*pbVar16;
            pbVar18 = pbVar18 + 1;
          }
          iVar7 = iVar15 - iVar13;
          iVar13 = local_34;
          goto LAB_0041ff74;
        }
        pbVar16 = local_438;
        uVar4 = 0;
        pbVar17 = abStack_139 + 1;
        while( true ) {
          pbVar16 = pbVar16 + 1;
          bVar2 = 0;
          if (uVar4 != 0) {
            bVar2 = *(byte *)(param_1 + uVar5 + (uint)*(byte *)(param_1 + uVar4) + 0x100);
          }
          *pbVar17 = bVar2 ^ *pbVar17;
          if (pbVar17 + 1 == pbVar18) break;
          uVar4 = (uint)*pbVar16;
          pbVar17 = pbVar17 + 1;
        }
        iVar15 = iVar15 + 1;
        iVar14 = iVar15 - iVar7;
      } while (iVar15 <= param_5);
      iVar14 = iVar13 + 1;
    }
LAB_0041ff88:
    local_34 = iVar14;
    memset(local_238,0,param_5);
    iVar7 = local_34;
    if (param_5 < local_34) {
      iVar7 = param_5;
    }
    iVar14 = 0;
    if (0 < iVar7) {
      do {
        if (abStack_139[iVar14 + 1] != 0) {
          iVar11 = param_5 - iVar14;
          if (param_5 <= param_5 - iVar14) {
            iVar11 = param_5;
          }
          bVar2 = *(byte *)(param_1 + (uint)abStack_139[iVar14 + 1]);
          if (0 < iVar11) {
            pbVar16 = local_338;
            uVar5 = local_38;
            pbVar18 = local_238 + iVar14;
            while( true ) {
              pbVar16 = pbVar16 + 1;
              bVar3 = 0;
              if (uVar5 != 0) {
                bVar3 = *(byte *)(param_1 + (uint)bVar2 + (uint)*(byte *)(param_1 + uVar5) + 0x100);
              }
              *pbVar18 = bVar3 ^ *pbVar18;
              if (pbVar16 == local_338 + iVar11) break;
              uVar5 = (uint)*pbVar16;
              pbVar18 = pbVar18 + 1;
            }
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar7);
    }
    if ((0 < iVar13) && (iVar13 - param_7 <= param_5 - param_7 >> 1)) {
      if (iVar13 < 5) {
        iVar7 = FUN_0041f8c8(param_1,abStack_139[2],abStack_139[3],abStack_139[4],abStack_139[5],
                             pbVar12);
        if (iVar7 < 1) {
          return -1;
        }
        iVar14 = 0;
        pbVar16 = pbVar12;
        do {
          bVar2 = *pbVar16;
          pbVar16 = pbVar16 + 1;
          if (bVar2 != 0) {
            bVar2 = *(byte *)(param_1 + (uint)bVar2);
            if ((int)(uint)bVar2 < param_4) {
              pbVar12[iVar14] = bVar2;
              iVar14 = iVar14 + 1;
            }
          }
        } while (pbVar16 != pbVar12 + iVar7);
      }
      else {
        if (param_4 < 1) {
          return -1;
        }
        iVar14 = 0;
        iVar7 = 0;
        do {
          bVar2 = 0;
          uVar5 = 0;
          pbVar16 = abStack_139 + iVar13 + 1;
          do {
            while( true ) {
              bVar3 = *pbVar16;
              if (bVar3 != 0) break;
              pbVar16 = pbVar16 + -1;
              uVar5 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar5 + iVar7 + 0x100));
              if (abStack_139 == pbVar16) goto LAB_004200e4;
            }
            pbVar16 = pbVar16 + -1;
            bVar2 = bVar2 ^ *(byte *)(param_1 + uVar5 + (uint)*(byte *)(param_1 + (uint)bVar3) +
                                     0x100);
            uVar5 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + uVar5 + iVar7 + 0x100));
          } while (abStack_139 != pbVar16);
LAB_004200e4:
          pbVar16 = pbVar12 + iVar14;
          if (bVar2 == 0) {
            iVar14 = iVar14 + 1;
            *pbVar16 = (byte)iVar7;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != param_4);
      }
      if (iVar13 <= iVar14) {
        pbVar16 = pbVar12 + iVar13;
        do {
          uVar4 = (uint)*pbVar12;
          pbVar18 = local_238;
          uVar5 = 0;
          uVar10 = 0;
          iVar7 = 0xff - uVar4;
          do {
            uVar8 = 0;
            if (*pbVar18 != 0) {
              uVar8 = (uint)*(byte *)(param_1 + uVar5 + (uint)*(byte *)(param_1 + (uint)*pbVar18) +
                                     0x100);
            }
            pbVar18 = pbVar18 + 1;
            uVar10 = uVar10 ^ uVar8;
            uVar5 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + iVar7 + uVar5 + 0x100));
          } while (pbVar18 != local_238 + param_5);
          pbVar18 = abStack_139 + 2;
          uVar8 = 0;
          uVar5 = (uVar4 * param_2) % 0xff + iVar7;
          do {
            uVar6 = 0;
            if (*pbVar18 != 0) {
              uVar6 = (uint)*(byte *)(param_1 + uVar5 + (uint)*(byte *)(param_1 + (uint)*pbVar18) +
                                     0x100);
            }
            pbVar18 = pbVar18 + 2;
            uVar8 = uVar8 ^ uVar6;
            uVar5 = (uint)*(byte *)(param_1 +
                                   (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 +
                                                                            (uint)*(byte *)(param_1 
                                                  + iVar7 * 2 + 0x100)) + uVar5 + 0x100));
          } while (pbVar18 != abStack_139 + (param_5 - 1U & 0xfffffffe) + 4);
          if (uVar10 == 0) {
            bVar2 = 0;
          }
          else {
            bVar2 = *(byte *)(param_1 + ((uint)*(byte *)(param_1 + uVar10) -
                                        (uint)*(byte *)(param_1 + uVar8)) + 0x1ff);
          }
          pbVar12 = pbVar12 + 1;
          param_3[(param_4 + -1) - uVar4] = bVar2 ^ param_3[(param_4 + -1) - uVar4];
        } while (pbVar12 != pbVar16);
        return iVar13;
      }
    }
  }
  return -1;
}



// ==== FUN_004203c4 @ 004203c4 size=636

void FUN_004203c4(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = param_1 + 0x101;
  uVar3 = param_1[0x201];
  iVar4 = param_1[0x203] + 1 + param_1[0x202];
  param_1[0x203] = param_1[0x203] + 1;
  puVar1 = puVar8;
  piVar5 = param_1 + 1;
  do {
    uVar7 = *puVar1;
    puVar2 = puVar1 + 4;
    uVar6 = (uVar3 << 0xd ^ uVar3) + puVar1[0x80];
    uVar3 = uVar6 + *(int *)((int)puVar8 + (uVar7 & 0x3fc)) + iVar4;
    *puVar1 = uVar3;
    iVar4 = uVar7 + *(int *)((int)puVar8 + (uVar3 >> 8 & 0x3fc));
    *piVar5 = iVar4;
    uVar7 = puVar1[1];
    uVar3 = (uVar6 >> 6 ^ uVar6) + puVar1[0x81];
    uVar6 = uVar3 + *(int *)((int)puVar8 + (uVar7 & 0x3fc)) + iVar4;
    puVar1[1] = uVar6;
    iVar4 = uVar7 + *(int *)((int)puVar8 + (uVar6 >> 8 & 0x3fc));
    piVar5[1] = iVar4;
    uVar7 = puVar1[2];
    uVar3 = (uVar3 * 4 ^ uVar3) + puVar1[0x82];
    uVar6 = uVar3 + *(int *)((int)puVar8 + (uVar7 & 0x3fc)) + iVar4;
    puVar1[2] = uVar6;
    iVar4 = uVar7 + *(int *)((int)puVar8 + (uVar6 >> 8 & 0x3fc));
    piVar5[2] = iVar4;
    uVar6 = puVar1[3];
    uVar3 = (uVar3 >> 0x10 ^ uVar3) + puVar1[0x83];
    uVar7 = uVar3 + *(int *)((int)puVar8 + (uVar6 & 0x3fc)) + iVar4;
    puVar1[3] = uVar7;
    iVar4 = uVar6 + *(int *)((int)puVar8 + (uVar7 >> 8 & 0x3fc));
    piVar5[3] = iVar4;
    puVar1 = puVar2;
    piVar5 = piVar5 + 4;
  } while (puVar2 != param_1 + 0x181);
  piVar5 = param_1 + 0x81;
  do {
    uVar7 = *puVar2;
    puVar1 = puVar2 + 4;
    uVar6 = (uVar3 << 0xd ^ uVar3) + puVar2[-0x80];
    uVar3 = uVar6 + *(int *)((int)puVar8 + (uVar7 & 0x3fc)) + iVar4;
    *puVar2 = uVar3;
    iVar4 = uVar7 + *(int *)((int)puVar8 + (uVar3 >> 8 & 0x3fc));
    *piVar5 = iVar4;
    uVar7 = puVar2[1];
    uVar3 = (uVar6 >> 6 ^ uVar6) + puVar2[-0x7f];
    uVar6 = uVar3 + *(int *)((int)puVar8 + (uVar7 & 0x3fc)) + iVar4;
    puVar2[1] = uVar6;
    iVar4 = uVar7 + *(int *)((int)puVar8 + (uVar6 >> 8 & 0x3fc));
    piVar5[1] = iVar4;
    uVar7 = puVar2[2];
    uVar3 = (uVar3 * 4 ^ uVar3) + puVar2[-0x7e];
    uVar6 = uVar3 + *(int *)((int)puVar8 + (uVar7 & 0x3fc)) + iVar4;
    puVar2[2] = uVar6;
    iVar4 = uVar7 + *(int *)((int)puVar8 + (uVar6 >> 8 & 0x3fc));
    piVar5[2] = iVar4;
    uVar6 = puVar2[3];
    uVar3 = (uVar3 >> 0x10 ^ uVar3) + puVar2[-0x7d];
    uVar7 = uVar3 + *(int *)((int)puVar8 + (uVar6 & 0x3fc)) + iVar4;
    puVar2[3] = uVar7;
    iVar4 = uVar6 + *(int *)((int)puVar8 + (uVar7 >> 8 & 0x3fc));
    piVar5[3] = iVar4;
    puVar2 = puVar1;
    piVar5 = piVar5 + 4;
  } while (puVar1 != param_1 + 0x201);
  param_1[0x202] = iVar4;
  param_1[0x201] = uVar3;
  *param_1 = 0x100;
  return;
}



// ==== FUN_00420640 @ 00420640 size=208

void FUN_00420640(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar7 = 2;
  uVar3 = 0;
  pbVar4 = &DAT_00425c40;
  puVar8 = param_1;
  do {
    uVar1 = uVar7;
    puVar6 = param_1 + uVar3 + 1;
    puVar5 = param_1 + (uVar3 + 3 & 7);
    uVar7 = *puVar6 << (*pbVar4 & 0x1f) ^ *puVar8;
    *puVar8 = uVar7;
    puVar2 = param_1 + (uVar1 & 7);
    *puVar5 = *puVar5 + uVar7;
    *puVar6 = *puVar6 + *puVar2;
    uVar7 = *puVar2 >> (pbVar4[1] & 0x1f) ^ puVar8[1];
    puVar8[1] = uVar7;
    param_1[uVar1 + 2 & 7] = param_1[uVar1 + 2 & 7] + uVar7;
    *puVar2 = *puVar2 + *puVar5;
    uVar7 = uVar1 + 2;
    uVar3 = uVar1;
    pbVar4 = pbVar4 + 2;
    puVar8 = puVar8 + 2;
  } while (uVar1 != 8);
  return;
}



// ==== FUN_00420710 @ 00420710 size=744

void FUN_00420710(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int local_40 [9];
  
  *(undefined4 *)(param_1 + 0x80c) = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  piVar8 = (int *)(param_1 + 0x404);
  *(undefined4 *)(param_1 + 0x804) = 0;
  puVar7 = (uint *)(param_1 + 4);
  local_40[7] = -0x61c88647;
  local_40[6] = -0x61c88647;
  local_40[5] = -0x61c88647;
  local_40[4] = -0x61c88647;
  local_40[3] = -0x61c88647;
  local_40[2] = -0x61c88647;
  local_40[1] = -0x61c88647;
  local_40[0] = -0x61c88647;
  FUN_00420640(local_40);
  FUN_00420640(local_40);
  FUN_00420640(local_40);
  FUN_00420640(local_40);
  uVar5 = 0x400;
  if ((int)param_3 < 0x401) {
    uVar5 = param_3;
  }
  iVar6 = (int)uVar5 >> 2;
  iVar1 = 0;
  puVar4 = puVar7;
  if (iVar6 < 1) {
    iVar1 = 0;
    iVar6 = 0;
  }
  else {
    do {
      uVar10 = iVar1 * 4;
      iVar1 = iVar1 + 1;
      *puVar4 = (uint)*(byte *)(param_2 + (uVar10 | 3)) << 0x18 |
                (uint)*(byte *)(param_2 + (uVar10 | 2)) << 0x10 | (uint)*(byte *)(param_2 + uVar10)
                | (uint)*(byte *)(param_2 + (uVar10 | 1)) << 8;
      puVar4 = puVar4 + 1;
    } while (iVar1 != iVar6);
    iVar1 = iVar6 << 2;
  }
  uVar5 = uVar5 & 3;
  if (uVar5 != 0) {
    uVar2 = (uint)*(byte *)(param_2 + iVar6 * 4);
    *(uint *)((int)puVar7 + iVar1) = uVar2;
    uVar10 = 1;
    if (uVar5 != 1) {
      do {
        uVar11 = uVar10 + 1;
        uVar2 = uVar2 + ((uint)*(byte *)(param_2 + (uVar10 | iVar6 * 4)) << ((uVar10 & 3) << 3));
        *(uint *)((int)puVar7 + iVar1) = uVar2;
        uVar10 = uVar11;
      } while (uVar11 != uVar5);
    }
    iVar6 = iVar6 + 1;
    iVar1 = iVar6 * 4;
  }
  iVar9 = 0;
  memset((int)puVar7 + iVar1,0,(0x100 - iVar6) * 4);
  do {
    piVar3 = (int *)((int)puVar7 + iVar9);
    piVar13 = local_40;
    do {
      piVar12 = piVar13 + 1;
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      *piVar13 = *piVar13 + iVar1;
      piVar13 = piVar12;
    } while (local_40 + 8 != piVar12);
    FUN_00420640(local_40);
    piVar13 = (int *)(iVar9 + (int)piVar8);
    iVar9 = iVar9 + 0x20;
    *piVar13 = local_40[0];
    piVar13[1] = local_40[1];
    piVar13[2] = local_40[2];
    piVar13[3] = local_40[3];
    piVar13[4] = local_40[4];
    piVar13[5] = local_40[5];
    piVar13[6] = local_40[6];
    piVar13[7] = local_40[7];
  } while (iVar9 != 0x400);
  iVar1 = 0x20;
  do {
    piVar13 = piVar8;
    piVar3 = local_40;
    do {
      piVar12 = piVar3 + 1;
      iVar6 = *piVar13;
      piVar13 = piVar13 + 1;
      *piVar3 = *piVar3 + iVar6;
      piVar3 = piVar12;
    } while (local_40 + 8 != piVar12);
    iVar1 = iVar1 + -1;
    FUN_00420640(local_40);
    *piVar8 = local_40[0];
    piVar8[1] = local_40[1];
    piVar8[2] = local_40[2];
    piVar8[3] = local_40[3];
    piVar8[4] = local_40[4];
    piVar8[5] = local_40[5];
    piVar8[6] = local_40[6];
    piVar8[7] = local_40[7];
    piVar8 = piVar8 + 8;
  } while (iVar1 != 0);
  FUN_004203c4(param_1);
  return;
}



// ==== FUN_004209f8 @ 004209f8 size=136

void FUN_004209f8(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  do {
    if (iVar2 == 0) {
      FUN_004203c4(param_1);
      iVar2 = *param_1;
    }
    *param_1 = iVar2 + -1;
    if (param_2 == 0) {
      trap(0x1c00);
    }
    uVar1 = param_1[iVar2] - (uint)param_1[iVar2] % param_2;
    iVar2 = iVar2 + -1;
  } while (uVar1 + (param_2 - 1) < uVar1);
  return;
}



// ==== FUN_00420a80 @ 00420a80 size=80

uint FUN_00420a80(uint param_1)

{
  return (int)(param_1 << 0x1e) >> 0x1f & 0xa6eU ^ (int)(param_1 << 0x1d) >> 0x1f & 0x11ebU ^
         -(param_1 & 1) & 0x537 ^ (int)(param_1 << 0x1c) >> 0x1f & 0x23d6U ^
         (int)(param_1 << 0x1b) >> 0x1f & 0x429bU;
}



// ==== FUN_00420ad0 @ 00420ad0 size=932

/* WARNING: Type propagation algorithm not settling */

int FUN_00420ad0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint local_20 [4];
  
  uVar11 = *param_1;
  uVar6 = 0;
  uVar12 = 0;
  do {
    uVar5 = uVar12 & 0x1f;
    pbVar4 = &DAT_00425c60 + uVar12;
    uVar12 = uVar12 + 1;
    if ((1 << uVar5 & uVar11) != 0) {
      uVar6 = uVar6 ^ *pbVar4;
    }
  } while (uVar12 != 0xf);
  uVar5 = 0;
  uVar7 = 0;
  pbVar4 = &DAT_00425c60;
  uVar12 = uVar5;
  do {
    uVar1 = uVar5 & 0x1f;
    uVar5 = uVar5 + 1;
    if ((1 << uVar1 & uVar11) != 0) {
      uVar7 = uVar7 ^ *pbVar4;
    }
    pbVar4 = pbVar4 + 3;
  } while ((pbVar4 != &UNK_00425c6f) ||
          (uVar5 = uVar12 + 5, pbVar4 = &DAT_00425c60, uVar12 = uVar5, uVar5 != 0xf));
  uVar5 = 0;
  uVar12 = 0;
  do {
    uVar1 = uVar5 & 0x1f;
    uVar9 = uVar5 + 1;
    uVar8 = uVar5 + 2;
    uVar5 = uVar5 + 3;
    if ((1 << uVar1 & uVar11) != 0) {
      uVar12 = uVar12 ^ 1;
    }
    if ((1 << (uVar9 & 0x1f) & uVar11) != 0) {
      uVar12 = uVar12 ^ 6;
    }
    if ((1 << (uVar8 & 0x1f) & uVar11) != 0) {
      uVar12 = uVar12 ^ 7;
    }
  } while (uVar5 != 0xf);
  uVar5 = uVar7;
  if (uVar6 == 0) {
    uVar1 = 0;
    if (uVar7 == 0) {
      if (uVar12 != 0) {
        return -1;
      }
      return 0;
    }
LAB_00420bf8:
    if ((uVar1 ^ uVar12) == 0) goto LAB_00420e10;
    uVar12 = (uint)(byte)(&UNK_00425c6f)
                         [(int)(char)(&DAT_00425c50)[uVar1 ^ uVar12] -
                          (int)(char)(&DAT_00425c50)[uVar5]];
    if (uVar6 != 0) {
      if (uVar12 == 0) goto LAB_00420e40;
      uVar7 = (uint)(byte)(&DAT_00425c60)
                          [(int)(char)(&DAT_00425c50)[uVar6] + (int)(char)(&DAT_00425c50)[uVar12]];
      goto LAB_00420c70;
    }
    iVar10 = 3;
  }
  else {
    if ((byte)(&DAT_00425c60)[(char)(&DAT_00425c50)[uVar6] * 2] == 0) {
LAB_00420e34:
      uVar1 = 0;
    }
    else {
      uVar5 = (byte)(&DAT_00425c60)
                    [(int)(char)(&DAT_00425c50)[uVar6] +
                     (int)(char)(&DAT_00425c50)
                                [(byte)(&DAT_00425c60)[(char)(&DAT_00425c50)[uVar6] * 2]]] ^ uVar7;
      if (uVar7 == 0) goto LAB_00420e34;
      uVar1 = (uint)(byte)(&DAT_00425c60)
                          [(int)(char)(&DAT_00425c50)
                                      [(byte)(&DAT_00425c60)[(char)(&DAT_00425c50)[uVar6] * 2]] +
                           (int)(char)(&DAT_00425c50)[uVar7]];
    }
    if (uVar5 != 0) goto LAB_00420bf8;
LAB_00420e10:
    if (uVar6 == 0) {
      if (uVar5 == 0) {
        return -1;
      }
      uVar12 = 0;
      iVar10 = 3;
    }
    else {
LAB_00420e40:
      uVar12 = 0;
      uVar7 = 0;
LAB_00420c70:
      uVar5 = uVar5 ^ uVar7;
      if (uVar5 == 0) {
        iVar10 = 2;
        if (uVar12 == 0) {
          if (uVar6 == 0) {
            return -1;
          }
          iVar2 = 1;
          local_20[0] = (uint)(char)(&DAT_00425c50)[uVar6];
          goto LAB_00420d4c;
        }
      }
      else {
        iVar10 = 3;
      }
    }
  }
  iVar2 = 0;
  uVar7 = 0;
  do {
    while( true ) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = (uint)(byte)(&DAT_00425c60)
                            [(int)(char)(&DAT_00425c50)[(byte)(&DAT_00425c60)[uVar7 * 2]] +
                             (int)(char)(&DAT_00425c50)[uVar6]];
      }
      if (uVar12 == 0) break;
      if ((uVar1 ^ (byte)(&DAT_00425c60)
                         [uVar7 + (int)(char)(&DAT_00425c50)[(byte)(&DAT_00425c60)[uVar7 * 2]]] ^
          (uint)(byte)(&DAT_00425c60)[uVar7 + (int)(char)(&DAT_00425c50)[uVar12]]) != uVar5)
      goto LAB_00420cc8;
LAB_00420d24:
      local_20[iVar2] = uVar7;
      uVar7 = uVar7 + 1;
      iVar2 = iVar2 + 1;
      if (uVar7 == 0xf) goto LAB_00420d3c;
    }
    if ((uVar1 ^ (byte)(&DAT_00425c60)
                       [uVar7 + (int)(char)(&DAT_00425c50)[(byte)(&DAT_00425c60)[uVar7 * 2]]]) ==
        uVar5) goto LAB_00420d24;
LAB_00420cc8:
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0xf);
LAB_00420d3c:
  if (iVar2 < iVar10) {
    return -1;
  }
LAB_00420d4c:
  iVar10 = 1;
  puVar3 = local_20;
  uVar11 = uVar11 ^ 1 << (local_20[0] & 0x1f);
  if (1 < iVar2) {
    do {
      puVar3 = puVar3 + 1;
      iVar10 = iVar10 + 1;
      uVar11 = uVar11 ^ 1 << (*puVar3 & 0x1f);
    } while (iVar10 < iVar2);
  }
  uVar6 = FUN_00420a80(uVar11 >> 10);
  if (uVar11 != uVar6) {
    return -1;
  }
  *param_1 = uVar11;
  return iVar2;
}



// ==== FUN_00420e74 @ 00420e74 size=968

int FUN_00420e74(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint local_40;
  
  if ((param_2 < 1) || (param_3 < 1)) {
    return 0;
  }
  iVar4 = malloc(param_2 * param_3);
  iVar19 = param_2 + 7 >> 3;
  if (iVar19 < 0x11) {
    iVar16 = 4;
    iVar19 = 0x10;
  }
  else if (iVar19 < 0x21) {
    iVar16 = 5;
    iVar19 = 0x20;
  }
  else if (iVar19 < 0x41) {
    iVar16 = 6;
    iVar19 = 0x40;
  }
  else {
    if (0x80 < iVar19) {
      uVar15 = 0x80;
      local_40 = 7;
      iVar16 = 8;
      goto LAB_00420efc;
    }
    iVar16 = 7;
    iVar19 = 0x80;
  }
  local_40 = iVar16 - 1;
  uVar15 = iVar19 >> 1;
LAB_00420efc:
  iVar19 = param_3 + 7 >> 3;
  if (iVar19 < 0x11) {
    iVar17 = 4;
    iVar19 = 3;
    uVar18 = 8;
  }
  else if (iVar19 < 0x21) {
    iVar17 = 5;
    iVar19 = 4;
    uVar18 = 0x10;
  }
  else if (iVar19 < 0x41) {
    iVar17 = 6;
    iVar19 = 5;
    uVar18 = 0x20;
  }
  else {
    iVar17 = 7;
    if (iVar19 < 0x81) {
      iVar19 = 6;
      uVar18 = 0x40;
    }
    else {
      uVar18 = 0x80;
      iVar19 = 7;
      iVar17 = 8;
    }
  }
  piVar5 = (int *)malloc(param_2 << 2);
  pbVar8 = param_1 + param_2;
  piVar6 = piVar5;
  pbVar20 = param_1;
  do {
    bVar1 = *pbVar20;
    pbVar20 = pbVar20 + 1;
    *piVar6 = ((uint)bVar1 << iVar19) + (uint)bVar1;
    piVar6 = piVar6 + 1;
  } while (pbVar20 != pbVar8);
  uVar11 = 1;
  if (1 < uVar18) {
    bVar2 = 1 < param_3;
    do {
      uVar7 = uVar11;
      if ((bool)(bVar2 ^ 1)) {
        uVar7 = param_3 - 1;
      }
      piVar6 = piVar5;
      pbVar20 = param_1 + uVar7 * param_2;
      do {
        pbVar21 = pbVar20 + 1;
        *piVar6 = *piVar6 + (uint)*pbVar20;
        piVar6 = piVar6 + 1;
        pbVar20 = pbVar21;
      } while (pbVar21 != pbVar8 + uVar7 * param_2);
      uVar11 = uVar11 + 1;
      bVar2 = (int)uVar11 < param_3;
    } while (uVar11 != uVar18);
  }
  iVar10 = param_3 - uVar18;
  uVar11 = ~uVar18;
  iVar22 = uVar18 + 1;
  iVar19 = 0;
  iVar9 = 0;
  while( true ) {
    uVar7 = (*piVar5 << (local_40 & 0x1f)) + *piVar5;
    if (1 < uVar15) {
      uVar23 = 1;
      do {
        uVar12 = uVar23;
        if (param_2 <= (int)uVar23) {
          uVar12 = param_2 - 1;
        }
        uVar23 = uVar23 + 1;
        uVar7 = uVar7 + piVar5[uVar12];
      } while (uVar23 != uVar15);
    }
    iVar24 = 0;
    uVar23 = uVar15;
    while( true ) {
      iVar3 = iVar24 + iVar19;
      pcVar13 = (char *)(iVar4 + iVar19 + iVar24);
      iVar24 = iVar24 + 1;
      iVar14 = uVar23 + (-((int)uVar23 < param_2 ^ 1) & (param_2 - uVar15) - iVar24);
      uVar23 = uVar23 + 1;
      *pcVar13 = -(param_1[iVar3] + 3 << iVar16 + iVar17 < uVar7);
      if (iVar24 == param_2) break;
      uVar7 = uVar7 + (piVar5[iVar14] -
                      piVar5[-(-(uint)(0 < (int)(iVar24 + ~uVar15)) & (uVar15 + 1) - iVar24)]);
    }
    iVar9 = iVar9 + 1;
    if (iVar9 == param_3) break;
    iVar24 = -(-(uint)(0 < (int)(iVar9 + uVar11)) & iVar22 - iVar9) * param_2;
    piVar6 = piVar5;
    pbVar20 = param_1 + iVar24;
    do {
      pbVar21 = pbVar20 + 1;
      *piVar6 = (*piVar6 - (uint)*pbVar20) +
                (uint)pbVar20[(uVar18 + (-((int)uVar18 < param_3 ^ 1) & iVar10 - iVar9)) * param_2 -
                              iVar24];
      piVar6 = piVar6 + 1;
      pbVar20 = pbVar21;
    } while (pbVar21 != pbVar8 + iVar24);
    uVar18 = uVar18 + 1;
    iVar19 = iVar19 + param_2;
  }
  free(piVar5);
  return iVar4;
}



// ==== FUN_0042123c @ 0042123c size=64

void FUN_0042123c(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xf;
  uVar2 = 0x8000;
  iVar1 = 0;
  do {
    uVar3 = iVar1 * 2 + uVar2 << (uVar4 & 0x1f);
    uVar4 = uVar4 - 1;
    if (uVar3 <= param_1) {
      iVar1 = iVar1 + uVar2;
      param_1 = param_1 - uVar3;
    }
    uVar2 = uVar2 >> 1;
  } while (uVar4 != 0xffffffff);
  return;
}



// ==== FUN_0042127c @ 0042127c size=104

int FUN_0042127c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0x10;
  uVar4 = 8;
  if ((param_1 & 0xffff0000) == 0) {
    uVar2 = 0;
  }
  uVar1 = 4;
  uVar5 = 2;
  if ((param_1 >> uVar2 & 0xff00) == 0) {
    uVar4 = 0;
  }
  uVar3 = (param_1 >> uVar2) >> uVar4;
  if ((uVar3 & 0xf0) == 0) {
    uVar1 = 0;
  }
  uVar3 = uVar3 >> uVar1;
  if ((uVar3 & 0xc) == 0) {
    uVar5 = 0;
  }
  uVar3 = uVar3 >> uVar5;
  return (uint)(uVar3 != 0) + (uVar4 | uVar2 | uVar1 | uVar5 | uVar3 >> 1 & 1);
}



// ==== FUN_004212e4 @ 004212e4 size=348

uint FUN_004212e4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = -param_1;
  if (-1 < (int)param_1) {
    uVar8 = param_1;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  uVar2 = -(uint)(param_2 < uVar8) & (uVar8 ^ param_2);
  param_2 = uVar2 ^ param_2;
  iVar3 = FUN_0042127c(param_2);
  uVar5 = 2;
  uVar4 = (int)~(0x1fU - iVar3) >> 0x1f & 0x1fU - iVar3;
  param_2 = param_2 << (uVar4 & 0x1f);
  iVar3 = (int)((ulonglong)((uVar2 ^ uVar8) << (uVar4 & 0x1f)) * 0x9b74edaa >> 0x20);
  iVar9 = ((int)param_2 >> 0x1f) * -0x648b1257 + (int)((ulonglong)param_2 * 0x9b74eda9 >> 0x20);
  uVar8 = iVar9 >> 0x1f;
  iVar6 = (iVar9 + uVar8 ^ uVar8) + iVar3;
  iVar9 = iVar9 - (iVar3 + uVar8 ^ uVar8);
  uVar8 = iVar9 >> 0x1f;
  iVar3 = ((iVar9 + 1 >> 1) + uVar8 ^ uVar8) + iVar6;
  iVar9 = iVar9 - ((iVar6 + 1U >> 1) + uVar8 ^ uVar8);
  do {
    uVar8 = uVar5 & 0x1f;
    uVar7 = iVar3 + 1;
    uVar1 = iVar9 >> 0x1f;
    uVar2 = uVar5 & 0x1f;
    uVar5 = uVar5 + 2;
    iVar3 = iVar3 + ((iVar9 + ((1 << uVar8) >> 1) >> uVar2) + uVar1 ^ uVar1);
    iVar9 = (iVar9 - ((uVar7 >> 2) + uVar1 ^ uVar1)) * 2;
  } while (uVar5 != 0x20);
  return iVar3 + ((uint)(1 << (uVar4 & 0x1f)) >> 1) >> (uVar4 & 0x1f);
}



// ==== FUN_00421440 @ 00421440 size=164

void FUN_00421440(int param_1)

{
  puts("\n***** - Abnormal Sound Detection - V20161229.2 - *****");
  *(undefined4 *)(param_1 + 0x260) = 0x55;
  *(undefined2 *)(param_1 + 0x1e0) = 0;
  *(undefined2 *)(param_1 + 0x25c) = 0;
  *(undefined2 *)(param_1 + 0x25e) = 0;
  *(undefined2 *)(param_1 + 0x266) = 0;
  *(undefined2 *)(param_1 + 0x264) = 0;
  memset(param_1 + 0x20c,0,0xa0);
  memset(param_1 + 0x140,0,0xa0);
  memset(param_1 + 0x234,0,0xa0);
  memset(param_1 + 0xa0,0,0xa0);
  memset(param_1 + 0x1e4,0,0xa0);
  memset(param_1,0,0xa0);
  return;
}



// ==== FUN_004214e4 @ 004214e4 size=1184

/* WARNING: Removing unreachable block (ram,0x00421690) */

undefined4 FUN_004214e4(short *param_1,int param_2,float *param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float fVar11;
  float fVar12;
  double dVar10;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  
  if ((int)param_4 - 0x1eU < 0x47) {
    param_3[0x98] = param_4;
  }
  else {
    param_3[0x98] = 1.1911e-43;
  }
  fVar11 = 0.0;
  if (param_2 < 1) {
    fVar5 = 0.0;
    fVar7 = 0.0;
  }
  else {
    iVar2 = 0;
    fVar5 = 0.0;
    fVar7 = 0.0;
    uVar14 = DAT_00425cc0;
    do {
      uVar13 = (undefined4)uVar14;
      if (iVar2 < param_2 + -1) {
        iVar3 = (int)*param_1;
        if (iVar3 * param_1[1] < 0) {
          fVar7 = (float)((int)fVar7 + 1);
        }
      }
      else {
        iVar3 = (int)*param_1;
      }
      fVar11 = (float)iVar3 * DAT_00425cb8;
      if (fVar11 < 0.0) {
        fVar11 = -fVar11;
      }
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 1;
      uVar14 = CONCAT44(fVar11 * fVar11,uVar13);
      if ((double)CONCAT44(iVar3,uVar13) < (double)fVar11) {
        fVar5 = (float)((int)fVar5 + 1);
      }
      fVar11 = (float)((ulonglong)(double)fVar11 >> 0x20) + fVar11 * fVar11;
    } while (iVar2 != param_2);
  }
  iVar2 = (*(short *)(param_3 + 0x78) + 1) * 0x10000;
  pfVar9 = param_3 + *(short *)(param_3 + 0x78);
  pfVar9[0x50] = fVar7;
  *pfVar9 = fVar11;
  pfVar9[0x28] = fVar5;
  *(short *)(param_3 + 0x78) = (short)((uint)iVar2 >> 0x10);
  fVar11 = 0.0;
  if (((iVar2 >> 0x10) % 0x28) * 0x10000 >> 0x10 != 0) {
    return 0;
  }
  iVar2 = 0x28;
  fVar7 = 0.0;
  fVar5 = 0.0;
  pfVar9 = param_3;
  do {
    fVar12 = *pfVar9;
    pfVar1 = pfVar9 + 0x28;
    iVar2 = iVar2 + -1;
    fVar5 = (float)((int)fVar5 + (int)pfVar9[0x50]);
    pfVar9 = pfVar9 + 1;
    fVar11 = fVar11 + fVar12;
    fVar7 = (float)((int)fVar7 + (int)*pfVar1);
  } while (iVar2 != 0);
  fVar12 = (float)SQRT((double)(fVar11 / DAT_00425cbc));
  dVar10 = (double)CONCAT44((int)((ulonglong)SQRT((double)(fVar11 / DAT_00425cbc)) >> 0x20),fVar12);
  fVar11 = 0.0;
  if (fVar12 != 0.0) {
    fVar15 = fVar11;
    log10((double)fVar12 / DAT_00425cc8);
    fVar11 = (float)(dVar10 * DAT_00425cd0);
    if (fVar11 < fVar15) {
      fVar11 = -fVar11;
    }
  }
  iVar2 = (int)*(short *)((int)param_3 + 0x25e);
  param_3[iVar2 + 0x79] = fVar11;
  param_3[iVar2 + 0x83] = fVar5;
  param_3[iVar2 + 0x8d] = fVar7;
  if (*(short *)(param_3 + 0x97) == 0) {
    iVar2 = (iVar2 + 1) * 0x10000;
    *(short *)((int)param_3 + 0x25e) = (short)((uint)iVar2 >> 0x10);
    if (((iVar2 >> 0x10) % 10) * 0x10000 >> 0x10 == 0) {
LAB_00421720:
      *(undefined2 *)(param_3 + 0x97) = 1;
      goto LAB_00421724;
    }
LAB_004218a4:
    *(undefined2 *)(param_3 + 0x78) = 0;
    fVar5 = 0.0;
    iVar3 = 0;
    iVar2 = 0;
    fVar7 = (float)(int)param_3[0x98];
  }
  else {
    if ((iVar2 % 10) * 0x10000 >> 0x10 == 0) goto LAB_00421720;
    if (*(short *)(param_3 + 0x97) != 1) goto LAB_004218a4;
LAB_00421724:
    fVar11 = param_3[0x79];
    *(undefined2 *)(param_3 + 0x99) = 0;
    iVar6 = 0;
    fVar5 = 0.0;
    iVar8 = 0;
    iVar4 = 0;
    fVar7 = (float)(int)param_3[0x98];
    iVar3 = 0;
    iVar2 = 0;
    pfVar9 = param_3;
    while( true ) {
      if (fVar7 < fVar11) {
        *(short *)(param_3 + 0x99) = (short)iVar4;
      }
      iVar4 = iVar4 + 1;
      if (1000 < (int)pfVar9[0x83]) {
        iVar2 = iVar2 + 1;
      }
      if (fVar7 < fVar11) {
        iVar8 = iVar8 + 1;
      }
      if (5 < (int)pfVar9[0x8d]) {
        iVar3 = iVar3 + 1;
      }
      if (fVar7 < fVar11) {
        fVar5 = fVar5 + fVar11;
        iVar6 = iVar6 + 1;
      }
      if (iVar4 == 10) break;
      fVar11 = pfVar9[0x7a];
      pfVar9 = pfVar9 + 1;
    }
    if (iVar6 < 3) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = fVar5 / (float)iVar6;
    }
    iVar4 = 9;
    pfVar9 = param_3;
    do {
      iVar4 = iVar4 + -1;
      pfVar9[0x83] = pfVar9[0x84];
      pfVar9[0x79] = pfVar9[0x7a];
      pfVar9[0x8d] = pfVar9[0x8e];
      pfVar9 = pfVar9 + 1;
    } while (iVar4 != 0);
    param_3[0x96] = 0.0;
    param_3[0x82] = 0.0;
    param_3[0x8c] = 0.0;
    *(undefined2 *)((int)param_3 + 0x25e) = 9;
    *(undefined2 *)(param_3 + 0x78) = 0;
    if (2 < iVar8) goto LAB_00421824;
  }
  if (fVar5 <= fVar7) {
    return 0;
  }
LAB_00421824:
  if ((3 < iVar2) && (2 < iVar3)) {
    if (0 < *(short *)(param_3 + 0x99)) {
      *(short *)(param_3 + 0x99) = 9 - *(short *)(param_3 + 0x99);
    }
    memset(param_3 + 0x8d,0,0x28);
    memset(param_3 + 0x79,0,0x28);
    memset(param_3 + 0x83,0,0x28);
    return 1;
  }
  return 0;
}



// ==== FUN_00421998 @ 00421998 size=1480

void FUN_00421998(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((int)param_2 < 0) {
    param_2 = -(uint)(param_1 != 0) - param_2;
  }
  if ((int)param_4 < 0) {
    param_3 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_00436a70[param_3 >> iVar1] + iVar1);
      if (uVar2 != 0) {
        param_3 = param_3 << (uVar2 & 0x1f);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_00436a70[param_3 >> iVar1] + iVar1);
      if ((uVar2 != 0) && (param_3 = param_3 << (uVar2 & 0x1f), param_3 >> 0x10 == 0)) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
  }
  else if (param_4 <= param_2) {
    if (param_4 < 0x10000) {
      iVar1 = 8;
      if (param_4 < 0x100) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x10;
      if (0xffffff < param_4) {
        iVar1 = 0x18;
      }
    }
    uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_00436a70[param_4 >> iVar1] + iVar1);
    if ((uVar2 != 0) &&
       ((param_4 << (uVar2 & 0x1f) |
        param_3 >> ((uint)(byte)PTR___clz_tab_00436a70[param_4 >> iVar1] + iVar1 & 0x1f)) >> 0x10 ==
        0)) {
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
    }
  }
  return;
}



// ==== FUN_00421f60 @ 00421f60 size=72

void FUN_00421f60(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00436714;
  pcVar2 = DAT_00436714;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



