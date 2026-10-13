/* rmm — "modet" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== modet_init @ 0040d6e4 size=308

void modet_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5,int param_6,int param_7,int param_8)

{
  DAT_004369c0 = param_5;
  DAT_004369c4 = param_6;
  if (param_7 == 1) {
    DAT_004369b4 = 0x2d;
    DAT_004369b0 = 4;
  }
  else if (param_7 == 2) {
    DAT_004369b4 = 0x41;
    DAT_004369b0 = 6;
  }
  else if (param_7 == 0) {
    DAT_004369b4 = 0x19;
    DAT_004369b0 = 3;
  }
  else {
    DAT_004369b4 = 0x50;
  }
  if (param_8 == 1) {
    DAT_004369b4 = DAT_004369b4 + 0x19;
    DAT_004369b0 = DAT_004369b0 + 1;
  }
  if (param_5 < 8) {
    DAT_004369c0 = 8;
  }
  if (param_6 < 8) {
    DAT_004369c4 = 8;
  }
  DAT_004369b8 = param_3;
  DAT_004369bc = param_4;
  DAT_004369c8 = param_2;
  DAT_004369cc = param_1;
  FUN_00413f64("motion_detect.c","modet_init",0x54,"%s img wid-hei:%d-%d, thresh:%d\n");
  return;
}



// ==== modet_isBiggerMove @ 0040db34 size=280

undefined4 modet_isBiggerMove(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  iVar1 = time(0);
  uVar2 = 0;
  if (in_stack_00000020 != 0) {
    if ((((in_stack_0000003c - in_stack_0000001c < 600) || (iVar1 - DAT_004377f8 < 900)) ||
        (in_stack_00000024 <= param_2)) || (in_stack_0000002c - param_4 < 0x15)) {
      uVar2 = 0;
    }
    else {
      FUN_00413f64("motion_detect.c","modet_isBiggerMove",0x11c,
                   "Bigger move. old:%d, new:%d, thresh:%d. ms:%d-%d oldtick:%d now:%d\n",param_4,
                   in_stack_0000002c,0x14,param_2,in_stack_00000024,in_stack_0000001c,
                   in_stack_0000003c);
      uVar2 = 1;
      DAT_004377f8 = iVar1;
    }
  }
  return uVar2;
}



// ==== modet_process @ 0040dc4c size=1708

/* WARNING: Removing unreachable block (ram,0x0040de50) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 *
modet_process(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int *local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int local_34;
  int local_30;
  
  iVar13 = DAT_004369c4;
  iVar5 = DAT_004369c0;
  DAT_004377f4 = DAT_004377f4 + 1;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  iVar2 = motrk_getLastImg();
  uVar16 = local_a8;
  if (iVar2 == 0) goto LAB_0040df48;
  local_80 = iVar13 + 7;
  iVar11 = iVar5 + 7;
  if (local_80 < 0) {
    local_80 = iVar13 + 0xe;
  }
  if (iVar11 < 0) {
    iVar11 = iVar5 + 0xe;
  }
  local_80 = local_80 >> 3;
  local_64 = DAT_004377f0;
  iVar11 = iVar11 >> 3;
  if (DAT_004377f0 == (int *)0x0) {
    local_34 = iVar2;
    DAT_004377f0 = (int *)malloc(iVar11 * local_80 * 4);
    iVar2 = local_34;
    if (0 < local_80) goto LAB_0040dd1c;
LAB_0040e0b8:
    iVar13 = 0;
    local_7c = 0;
    iVar8 = 0;
    local_68 = 0;
    local_6c = 0;
    local_78 = 0;
    local_70 = 0;
    local_74 = 0;
    iVar12 = 0;
    local_64 = DAT_004377f0;
  }
  else {
    if (local_80 < 1) goto LAB_0040e0b8;
LAB_0040dd1c:
    local_64 = DAT_004377f0;
    local_58 = local_80 + -1;
    local_50 = local_80 + -3;
    local_54 = iVar11 * 4;
    local_4c = iVar11 + -3;
    iVar13 = 0;
    iVar5 = 0;
    local_60 = DAT_004377f0;
    local_7c = 0;
    local_68 = 0;
    local_6c = 0;
    local_78 = 0;
    local_70 = 0;
    local_74 = 0;
    do {
      iVar12 = iVar5 << 3;
      if (local_58 == iVar5) {
        iVar12 = DAT_004369c4 + -8;
      }
      if (iVar11 < 1) {
        iVar8 = 0;
      }
      else {
        iVar9 = 0;
        local_5c = (uint)(iVar5 < local_50);
        piVar10 = local_60;
        do {
          if ((param_3 != 1) ||
             ((((2 < iVar5 && (local_5c != 0)) && (2 < iVar9)) && (iVar9 < local_4c)))) {
            if (iVar11 + -1 == iVar9) {
              iVar8 = DAT_004369c0 + -8;
              if (param_2 != 0) goto LAB_0040ddb4;
              iVar14 = 0;
            }
            else {
              iVar8 = iVar9 << 3;
              iVar14 = 0;
              if (param_2 != 0) {
LAB_0040ddb4:
                iVar14 = 0;
                iVar7 = 8;
                local_30 = 0;
                do {
                  iVar15 = iVar8;
                  do {
                    pbVar6 = (byte *)(iVar14 + param_2 + iVar12 * DAT_004369c0 + iVar15);
                    pbVar3 = (byte *)(iVar14 + iVar2 + iVar12 * DAT_004369c0 + iVar15);
                    iVar15 = iVar15 + 1;
                    iVar4 = (uint)*pbVar6 - (uint)*pbVar3;
                    local_30 = local_30 + iVar4 * iVar4;
                  } while (iVar15 != iVar8 + 8);
                  iVar7 = iVar7 + -1;
                  iVar14 = iVar14 + DAT_004369c0;
                } while (iVar7 != 0);
                iVar8 = local_30;
                if (local_30 < 0) {
                  iVar8 = local_30 + 7;
                }
                iVar8 = iVar8 >> 3;
                if (iVar8 < 0) {
                  iVar8 = iVar8 + 7;
                }
                iVar14 = (int)SQRT((double)(iVar8 >> 3));
              }
            }
            bVar1 = DAT_004369b4 <= iVar14;
            *piVar10 = iVar14;
            if (bVar1) {
              local_a0 = local_a0 + 1;
            }
            if (local_a4 < iVar14) {
              local_a4 = iVar14;
            }
            if (iVar14 < 0x3d) {
              if (iVar14 < 0x33) {
                if (iVar14 < 0x29) {
                  if (iVar14 < 0x1f) {
                    if (iVar14 < 0x15) {
                      if (iVar14 < 0xb) {
                        local_70 = (uint)(0 < iVar14) + local_70;
                      }
                      else {
                        local_74 = local_74 + 1;
                      }
                    }
                    else {
                      local_78 = local_78 + 1;
                    }
                  }
                  else {
                    local_6c = local_6c + 1;
                  }
                }
                else {
                  local_68 = local_68 + 1;
                }
              }
              else {
                local_7c = local_7c + 1;
              }
            }
            else {
              iVar13 = iVar13 + 1;
            }
          }
          iVar9 = iVar9 + 1;
          piVar10 = piVar10 + 1;
          iVar8 = iVar11;
        } while (iVar9 != iVar11);
      }
      iVar5 = iVar5 + 1;
      local_60 = local_60 + iVar11;
      iVar12 = local_80;
      local_48 = param_1;
    } while (iVar5 != local_80);
  }
  local_9c = FUN_0040d8f8(local_64,local_80,iVar11,&local_90,&local_94,&local_98);
  iVar5 = time(0);
  if (local_9c < DAT_004369b0) {
    if ((0 < local_a0) && (DAT_004377e4 = DAT_004377e4 + 1, 100 < iVar5 - DAT_004377e0)) {
      FUN_00413f64("motion_detect.c","modet_process",0x1c6,
                   "small action[%d/%d] (small:%d)!  msarr[%d][%d]: %d, cnt:%d/%d, thresh:%d, time:%d sec\n"
                   ,DAT_004377ec,DAT_004377f4,DAT_004377e4,iVar12,iVar8,local_a4,local_9c,local_a0,
                   DAT_004369b4,iVar5);
      DAT_004377e0 = iVar5;
    }
  }
  else {
    iVar12 = DAT_004377ec + 1;
    local_8c = param_5;
    DAT_004377ec = iVar12;
    iVar11 = FUN_0040da50(0,local_a4,local_a0,local_9c,local_98,local_94,local_90,param_5,param_3,
                          param_4);
    iVar2 = 1;
    if (iVar12 != 1) {
      iVar2 = iVar11;
    }
    if (0x3b < iVar5 - DAT_004377e8) {
      gettimeofday(&local_88,0);
      FUN_00413f64("motion_detect.c","modet_process",0x1a2,
                   "IsMotion(%d/%d)(small:%d)------ y-x[%d][%d]: ms-cnt(thresh):%d(ave:%d)-%d/%d(%d-%d), msSta(60-0):%d-%d-%d-%d-%d-%d-%d time:%d(%ld-%ld). . discd:%d, nt:%d\n"
                   ,DAT_004377ec,DAT_004377f4,DAT_004377e4,local_90,local_94,local_a4,local_98,
                   local_9c,local_a0,DAT_004369b4,DAT_004369b0,iVar13,local_7c,local_68,local_6c,
                   local_78,local_74,local_70,local_8c,local_88,local_84,iVar2,param_3);
      DAT_004377e8 = iVar5;
    }
    uVar16 = 1;
    if (iVar2 == 1) {
      uVar16 = local_a8;
    }
  }
LAB_0040df48:
  *param_1 = uVar16;
  param_1[1] = local_a4;
  param_1[2] = local_a0;
  param_1[3] = local_9c;
  param_1[4] = local_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  param_1[7] = local_8c;
  return param_1;
}



