/* libh1encoder — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libh1encoder.h"

// ==== FUN_00014d78 @ 00014d78 size=80

void FUN_00014d78(void)

{
  if ((((int)PTR___DT_PLTGOT_000463e8 - (int)(PTR_DAT_000463ec + 0x63e0) >> 2) -
       ((int)PTR___DT_PLTGOT_000463e8 - (int)(PTR_DAT_000463ec + 0x63e0) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_000465b0 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_000465b0)();
    return;
  }
  return;
}



// ==== FUN_00014dc8 @ 00014dc8 size=216

void FUN_00014dc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_000463ec;
  if (PTR_DAT_000463ec[0x66d0] == '\0') {
    if (PTR___cxa_finalize_00046640 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00046640)(*(undefined4 *)PTR_LOOP_000463f0);
    }
    puVar2 = PTR_DAT_000463ec;
    puVar3 = PTR_DAT_000463ec + -0x1ff8;
    iVar6 = (int)PTR_DAT_000463f4 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x66d4), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x66d4) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_000463f8 + 0x4d30))();
    puVar1[0x66d0] = 1;
  }
  return;
}



// ==== FUN_00014ea0 @ 00014ea0 size=80

void FUN_00014ea0(void)

{
  if ((*(int *)(PTR_DAT_000463ec + -0x1ff0) != 0) &&
     (PTR__Jv_RegisterClasses_00046440 != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_00046440)(PTR_DAT_000463ec + -0x1ff0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000463f8 + 0x4d78))();
  return;
}



// ==== FUN_00018cd0 @ 00018cd0 size=668

void FUN_00018cd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int aiStack_430 [254];
  int local_38 [4];
  
  iVar1 = (*(uint *)(param_1 + 8) >> 4) * (*(uint *)(param_1 + 0xc) >> 4);
  (*(code *)PTR_memset_00046528)(aiStack_430,0,0x400);
  if (iVar1 < 1) {
    local_38[1] = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar4 = iVar2 + 1;
      iVar2 = (*(code *)PTR_EncAsicGetMvOutput_00046534)(param_2,iVar2);
      piVar3 = aiStack_430 + *(byte *)(iVar2 + 0x1d);
      *piVar3 = *piVar3 + 1;
      iVar2 = iVar4;
    } while (iVar4 != iVar1);
  }
  piVar3 = local_38;
  iVar4 = 0;
  iVar2 = 0xff;
  do {
    iVar4 = iVar4 + local_38[1];
    if (iVar1 >> 9 < iVar4) {
      iVar6 = 0xeb;
      if (iVar2 < 0xec) {
        iVar6 = iVar2;
      }
      local_38[2] = 0xff - iVar6;
LAB_00018ddc:
      iVar2 = 0;
      if (iVar1 < 1) {
        iVar4 = 0x9ec;
        iVar2 = 0x9ec;
        iVar5 = 1;
      }
      else {
        iVar5 = 0;
        iVar7 = 0;
        iVar4 = 0;
        do {
          iVar8 = iVar4 + 1;
          iVar4 = (*(code *)PTR_EncAsicGetMvOutput_00046534)(param_2,iVar4);
          if (iVar6 <= (int)(uint)*(byte *)(iVar4 + 0x1d)) {
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + (uint)*(byte *)(iVar4 + 0x1e);
            iVar7 = iVar7 + (uint)*(byte *)(iVar4 + 0x1f);
          }
          iVar4 = iVar8;
        } while (iVar8 != iVar1);
        if (iVar5 == 0) {
          iVar5 = 1;
          iVar2 = (0x7f - iVar2) * 0x14;
          iVar4 = (0x7f - iVar7) * 0x14;
        }
        else {
          if (iVar5 == 0) {
            trap(0x1c00);
          }
          if (iVar5 == 0) {
            trap(0x1c00);
          }
          iVar2 = (0x7f - iVar2 / iVar5) * 0x14;
          iVar4 = (0x7f - iVar7 / iVar5) * 0x14;
        }
      }
      if (local_38[2] == 0) {
        trap(0x1c00);
      }
      *(int *)(param_1 + 0x70) = iVar2 / local_38[2];
      if ((iVar6 != 0x96) && (iVar1 >> 9 < iVar5)) {
        if (local_38[2] == 0) {
          trap(0x1c00);
        }
        *(int *)(param_1 + 0x74) = iVar4 / local_38[2];
        return;
      }
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      return;
    }
    iVar6 = 0x96;
    if (iVar2 + -1 == 0x96) {
      local_38[2] = 0x69;
      goto LAB_00018ddc;
    }
    local_38[1] = *piVar3;
    piVar3 = piVar3 + -1;
    iVar2 = iVar2 + -1;
  } while( true );
}



// ==== FUN_0001dc70 @ 0001dc70 size=820

uint FUN_0001dc70(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  
  puVar4 = PTR_DAT_000463fc;
  uVar10 = *param_1;
  uVar13 = param_1[1];
  uVar8 = param_1[4];
  uVar11 = param_1[2];
  uVar5 = param_1[3];
  if ((uVar10 == 0 && uVar13 == 0) && (uVar11 == 0 && uVar5 == 0)) {
    return uVar8;
  }
  uVar16 = 0xffffffff;
  uVar12 = 1;
  iVar9 = -1;
  if (-1 < (int)uVar13) {
    iVar9 = 1;
  }
  if ((int)uVar5 < 0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar16 = 0;
  }
  uVar14 = uVar8;
  iVar18 = 0x7fffffff;
  do {
    iVar15 = *(int *)(puVar4 + ((int)(uVar14 * 10) >> 8) * 4 + -0x6b14);
    uVar6 = uVar10;
    if (iVar15 == 0) {
LAB_0001de54:
      iVar15 = uVar6 + uVar11 + param_2 * -0x100;
      iVar1 = -iVar15;
      if (-1 < iVar15) {
        iVar1 = iVar15;
      }
    }
    else {
      iVar1 = iVar9 * iVar15;
      uVar6 = uVar10 + iVar1 / 2;
      uVar6 = (*(code *)PTR___divdi3_000466ac)
                        (uVar6,(uint)(uVar6 < uVar10) + uVar13 + (iVar1 - (iVar1 >> 0x1f) >> 0x1f),
                         iVar15,iVar15 >> 0x1f);
      lVar2 = (longlong)iVar15 * (longlong)iVar15;
      if (lVar2 == 0) goto LAB_0001de54;
      lVar3 = lVar2 * CONCAT44(uVar16,uVar12);
      lVar3 = lVar3 + (ulonglong)(uint)-(int)(lVar3 >> 0x3f);
      iVar15 = (int)((ulonglong)lVar3 >> 0x20);
      uVar17 = iVar15 * -0x80000000 | (uint)lVar3 >> 1;
      uVar7 = uVar17 + uVar11;
      iVar15 = (*(code *)PTR___divdi3_000466ac)
                         (uVar7,(uint)(uVar7 < uVar17) + (iVar15 >> 1) + uVar5,(int)lVar2,
                          (int)((ulonglong)lVar2 >> 0x20));
      iVar15 = uVar6 + iVar15 + param_2 * -0x100;
      iVar1 = -iVar15;
      if (-1 < iVar15) {
        iVar1 = iVar15;
      }
    }
    if (iVar18 <= iVar1) break;
    if (iVar15 < 1) {
      if ((int)uVar14 < 0x1a) goto LAB_0001de88;
      uVar14 = uVar14 - 0x1a;
    }
    else {
      if (0x32ff < (int)uVar14) break;
      uVar14 = uVar14 + 0x1a;
    }
    iVar18 = iVar1;
  } while (uVar14 < 0x3301);
  if (0x3300 < (int)uVar14) {
    uVar14 = 0x3300;
  }
LAB_0001de88:
  if (param_3 != 0) {
    iVar9 = uVar14 - uVar8;
    if (iVar9 < 0x201) {
      if (iVar9 < -0x200) {
        uVar14 = uVar8 - 0x200;
      }
      return uVar14;
    }
    if (iVar9 < 0x601) {
      return uVar8 + 0x200;
    }
    uVar14 = uVar8 + 0x300;
  }
  return uVar14;
}



// ==== FUN_0001dfa4 @ 0001dfa4 size=300

uint FUN_0001dfa4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar7 == 0) {
    return 0;
  }
  iVar3 = iVar7;
  if ((param_2 != -1) && (iVar3 = param_2, iVar7 < param_2)) {
    iVar3 = iVar7;
  }
  iVar5 = 0;
  uVar1 = 0;
  iVar8 = iVar3;
  do {
    iVar8 = iVar8 + -1;
    if (iVar8 == -1) {
      if (iVar3 == 0) {
        return uVar1;
      }
      iVar2 = -1;
      if (-1 < iVar5) {
        iVar2 = 1;
      }
      iVar2 = iVar2 * iVar3;
      uVar4 = uVar1 + iVar2 / 2;
      uVar1 = (*(code *)PTR___divdi3_000466ac)
                        (uVar4,(uint)(uVar4 < uVar1) + iVar5 + (iVar2 - (iVar2 >> 0x1f) >> 0x1f),
                         iVar3,iVar3 >> 0x1f);
      return uVar1;
    }
    iVar6 = iVar7;
    if (iVar2 != 0) {
      iVar6 = iVar2;
    }
    iVar2 = iVar6 + -1;
    iVar6 = *(int *)(param_1 + (iVar6 + 0xf) * 4);
    uVar4 = uVar1 + iVar6;
    iVar5 = (uint)(uVar4 < uVar1) + iVar5 + (iVar6 >> 0x1f);
    uVar1 = uVar4;
  } while (-1 < iVar5);
  uVar1 = (*(code *)PTR___divdi3_000466ac)
                    (0xffffffff,0x7fffffff,iVar3 - iVar8,iVar3 - iVar8 >> 0x1f);
  return uVar1;
}



// ==== FUN_0001e0d0 @ 0001e0d0 size=52

void FUN_0001e0d0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (param_2 == 0) {
      trap(0x1c00);
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) / param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// ==== FUN_0001e104 @ 0001e104 size=140

void FUN_0001e104(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x70) = 3;
  if (param_2 != 0x7fffffff) {
    *(int *)(param_1 + 0x40) = param_2 - *(int *)(param_1 + 0x48);
    if (param_2 < 1) {
      if ((param_2 != 0) &&
         (iVar1 = *(int *)(param_1 + 0x44) + param_2, iVar1 < *(int *)(param_1 + 0x44))) {
        *(int *)(param_1 + 0x44) = iVar1;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x44) + param_2;
      if (*(int *)(param_1 + 0x44) < iVar1) {
        *(int *)(param_1 + 0x44) = iVar1;
      }
    }
    *(int *)(param_1 + 0x48) = param_2;
    return;
  }
  (*(code *)(PTR_LAB_00046400 + -0x1f30))(param_1,param_3);
  return;
}



// ==== FUN_0001e9cc @ 0001e9cc size=284

int FUN_0001e9cc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_128 [36];
  int local_98 [36];
  
  piVar1 = local_128;
  piVar6 = (int *)(PTR_DAT_000463fc + -0x6c74);
  do {
    piVar7 = piVar6 + 4;
    iVar5 = piVar6[1];
    iVar4 = piVar6[2];
    iVar3 = piVar6[3];
    *piVar1 = *piVar6;
    piVar1[1] = iVar5;
    piVar1[2] = iVar4;
    piVar1[3] = iVar3;
    piVar1 = piVar1 + 4;
    piVar6 = piVar7;
  } while (piVar7 != (int *)(PTR_DAT_000463fc + -0x6b54));
  iVar3 = 0x1100;
  if (param_1 < 0xf4241) {
    if (param_1 >> 5 == 0) {
      return 0x3300;
    }
    param_2 = param_2 >> 8;
    iVar3 = param_2 * 3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    iVar3 = (iVar3 >> 2) + 0x15e;
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    iVar4 = (*(code *)PTR_H264Calculate_000465d4)
                      (((param_2 + 0xfa) * (param_1 >> 5)) / iVar3,22000,param_2 << 6);
    iVar3 = -1;
    piVar1 = local_128;
    do {
      iVar5 = iVar3;
      iVar2 = *piVar1;
      iVar3 = iVar5 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < iVar4);
    iVar3 = local_128[iVar5 + 0x25] << 8;
  }
  return iVar3;
}



// ==== FUN_0001f3e4 @ 0001f3e4 size=2224

/* WARNING: Removing unreachable block (ram,0x0001f5f4) */
/* WARNING: Removing unreachable block (ram,0x0001fbd4) */

void FUN_0001f3e4(ulonglong *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  
  iVar17 = (int)param_1[0xe];
  if (iVar17 == 0) {
    uVar7 = 0;
    local_40 = 0;
    local_3c = 0;
    iVar18 = 0;
    iVar16 = 0;
    iVar10 = 0;
  }
  else {
    iVar16 = -iVar17;
    iVar10 = iVar17 * 4;
    iVar20 = 0;
    iVar18 = 0;
    uVar8 = 0;
    do {
      iVar9 = iVar20 + iVar10;
      iVar20 = iVar20 + -4;
      iVar9 = *(int *)((int)param_1 + iVar9 + 0x10);
      uVar7 = uVar8 + iVar9;
      iVar18 = (uint)(uVar7 < uVar8) + iVar18 + (iVar9 >> 0x1f);
      uVar8 = uVar7;
    } while (iVar20 != iVar17 * -4);
    local_3c = (int)((ulonglong)uVar7 * (ulonglong)uVar7 >> 0x20);
    local_3c = iVar18 * uVar7 * 2 + local_3c;
    local_40 = (uint)((ulonglong)uVar7 * (ulonglong)uVar7);
  }
  iVar19 = (int)param_1 + iVar10 + 0x14;
  iVar9 = (int)param_1 + iVar10 + 0x40;
  iVar12 = 0;
  lVar4 = 0;
  iVar10 = iVar19;
  iVar20 = iVar9;
  do {
    bVar3 = iVar12 == iVar16;
    iVar12 = iVar12 + -1;
    iVar21 = iVar17 >> 0x1f;
    iVar11 = iVar19;
    if (bVar3) {
      uVar13 = 0xfffffff0;
      uVar14 = 0xffffffff;
      if (-1 < lVar4) {
        uVar13 = 0x10;
        uVar14 = 0;
      }
      uVar22 = lVar4 + CONCAT44(uVar14,uVar13);
      uVar8 = (uint)uVar22 + 0x1f;
      if ((longlong)uVar22 < 0) {
        uVar22 = CONCAT44((uint)(uVar8 < (uint)uVar22) + (int)(uVar22 >> 0x20),uVar8);
      }
      lVar6 = 0;
      lVar4 = 0;
      local_48 = (longlong)uVar22 >> 5;
      iVar10 = 0;
      local_34 = (int)(uVar22 & 0x1fffffffe0);
      local_38 = (uint)((uVar22 & 0x1fffffffe0) >> 0x20) | (int)((ulonglong)local_48 >> 0x20) << 5;
      if (iVar16 != 0) goto LAB_0001f574;
      goto LAB_0001f950;
    }
    piVar1 = (int *)(iVar10 + -4);
    piVar2 = (int *)(iVar20 + -4);
    iVar10 = iVar10 + -4;
    iVar20 = iVar20 + -4;
    lVar4 = (longlong)*piVar1 * (longlong)*piVar1 * (longlong)(*piVar2 * 0x100) + lVar4;
  } while (-1 < lVar4);
  local_34 = -0x20;
  local_38 = 0x7fffffff;
  iVar10 = 0;
  local_48 = 0x3ffffffffffffff;
  lVar4 = 0;
  do {
    while( true ) {
      lVar6 = lVar4;
      if (iVar10 == iVar16) goto LAB_0001f950;
LAB_0001f574:
      uVar22 = (ulonglong)lVar4 >> 0x20;
      uVar15 = (uint)lVar4;
      uVar8 = *(uint *)(iVar11 + -4);
      iVar20 = *(int *)(iVar9 + -4) * 0x100;
      lVar6 = (longlong)(int)uVar8 * (longlong)(int)uVar8 * (longlong)(int)uVar8;
      uVar13 = 0xfffffff0;
      uVar14 = 0xffffffff;
      if (-1 < lVar6) {
        uVar13 = 0x10;
        uVar14 = 0;
      }
      lVar5 = lVar6 + CONCAT44(uVar14,uVar13);
      if (lVar6 <= *(int *)(iVar9 + -4) << 0x18) break;
      uVar8 = (uint)lVar5 + 0x1f;
      if (lVar5 < 0) {
        lVar5 = CONCAT44((uint)(uVar8 < (uint)lVar5) + (int)((ulonglong)lVar5 >> 0x20),uVar8);
      }
      iVar10 = iVar10 + -1;
      iVar11 = iVar11 + -4;
      iVar9 = iVar9 + -4;
      lVar4 = (lVar5 >> 5) * (longlong)iVar20 + lVar4;
      if (lVar4 < 0) goto LAB_0001f670;
    }
    iVar10 = iVar10 + -1;
    iVar12 = -0x10;
    iVar11 = iVar11 + -4;
    if (-1 < iVar20) {
      iVar12 = 0x10;
    }
    iVar9 = iVar9 + -4;
    iVar20 = iVar20 + iVar12;
    if (iVar20 < 0) {
      iVar20 = iVar20 + 0x1f;
    }
    lVar5 = ((ulonglong)uVar8 * ((longlong)(int)uVar8 * (longlong)(int)uVar8 & 0xffffffffU) &
            0xffffffff) * (ulonglong)(uint)(iVar20 >> 5);
    iVar12 = (int)lVar5;
    iVar20 = (int)((ulonglong)lVar6 >> 0x20) * (iVar20 >> 5) + (iVar20 >> 0x1f) * (int)lVar6 +
             (int)((ulonglong)lVar5 >> 0x20);
    lVar4 = lVar4 + CONCAT44(iVar20,iVar12);
  } while (-1 < (int)((uint)(uVar15 + iVar12 < uVar15) + (int)uVar22 + iVar20));
LAB_0001f670:
  iVar10 = -1;
  if ((int)local_48 != 0 || local_48._4_4_ != 0) goto LAB_0001f998;
LAB_0001f684:
  iVar10 = 0;
LAB_0001f688:
  uVar23 = CONCAT44(local_38,local_34);
  if (iVar17 == 0) {
    lVar4 = 0;
  }
  else {
    iVar20 = 0;
    lVar4 = 0;
    do {
      iVar9 = iVar19 + iVar20;
      iVar20 = iVar20 + -4;
      iVar9 = *(int *)(iVar9 + -4);
      lVar4 = (longlong)iVar9 * (longlong)iVar9 * (longlong)iVar17 + lVar4;
    } while (iVar20 != iVar16 << 2);
  }
  uVar8 = (uint)lVar4;
  if (uVar8 == local_40 &&
      (int)((ulonglong)lVar4 >> 0x20) - local_3c == (uint)(uVar8 < uVar8 - local_40)) {
    uVar8 = (uint)*param_1;
    iVar10 = *(int *)((int)param_1 + 4);
    uVar22 = *param_1;
    iVar16 = iVar17;
    if (uVar8 == 0 && iVar10 == 0) goto joined_r0x0001f7c4;
    uVar22 = (*(code *)PTR___divdi3_000466ac)(uVar8 << 1,uVar8 >> 0x1f | iVar10 << 1,3,0);
    if ((longlong)uVar22 < -0x40000) {
      uVar22 = 0xfffffffffffc0000;
      goto LAB_0001f780;
    }
    if ((longlong)uVar22 < 0x100000000) {
      if ((int)(uVar22 >> 0x20) == 0) {
        if (0x3ffff < (uint)uVar22) goto LAB_0001f774;
        goto LAB_0001f780;
      }
      if (-0x3a900000001 < (longlong)uVar22) goto LAB_0001f780;
LAB_0001fb24:
      uVar22 = 0xfffffc57de8f8637;
LAB_0001fb30:
      iVar10 = iVar18 * (uint)uVar22;
      if (((int)(uVar22 >> 0x20) == 0x3a8) && (0x217079c9 < (uint)uVar22)) goto LAB_0001f798;
    }
    else {
LAB_0001f774:
      uVar22 = 0x3ffff;
LAB_0001f780:
      if (((int)(uVar22 >> 0x20) == -0x3a9) && ((uint)uVar22 < 0xde8f8637)) goto LAB_0001fb24;
      if ((longlong)uVar22 < 0x3a900000000) goto LAB_0001fb30;
LAB_0001f798:
      uVar22 = 0x3a8217079c9;
      iVar10 = iVar18 * 0x217079c9;
    }
  }
  else {
    uVar8 = (*(code *)PTR_H264Calculate_000465d4)(iVar10,0x20);
    iVar16 = (int)uVar8 >> 0x1f;
    if (((int)uVar8 < 0) && (uVar8 < 0xfffc0000)) {
      uVar8 = 0xfffc0000;
      goto LAB_0001fadc;
    }
    if (iVar16 < 1) {
      if (-1 < (int)uVar8) {
        if (0x3ffff < uVar8) goto LAB_0001fad0;
        goto LAB_0001fadc;
      }
      if (-0x3aa < iVar16) goto LAB_0001fadc;
LAB_0001fb6c:
      iVar16 = -0x3a9;
      uVar8 = 0xde8f8637;
LAB_0001fb78:
      iVar10 = iVar18 * uVar8;
      if ((iVar16 == 0x3a8) && (0x217079c9 < uVar8)) goto LAB_0001faf4;
    }
    else {
LAB_0001fad0:
      iVar16 = 0;
      uVar8 = 0x3ffff;
LAB_0001fadc:
      if ((iVar16 == -0x3a9) && (uVar8 < 0xde8f8637)) goto LAB_0001fb6c;
      if (iVar16 < 0x3a9) goto LAB_0001fb78;
LAB_0001faf4:
      iVar16 = 0x3a8;
      uVar8 = 0x217079c9;
      iVar10 = iVar18 * 0x217079c9;
    }
    uVar22 = CONCAT44(iVar16,uVar8);
    iVar16 = (int)param_1[0xe];
  }
  lVar4 = (ulonglong)uVar7 * (uVar22 & 0xffffffff);
  uVar8 = (uint)lVar4;
  iVar10 = iVar10 + (int)(uVar22 >> 0x20) * uVar7 + (int)((ulonglong)lVar4 >> 0x20);
joined_r0x0001f7c4:
  uVar24 = CONCAT44(iVar10,uVar8);
  if (iVar17 != 0) {
    iVar18 = -1;
    if (-1 < local_48) {
      iVar18 = 1;
    }
    iVar18 = iVar18 * iVar17;
    uVar7 = iVar18 / 2 + local_34;
    uVar23 = (*(code *)PTR___divdi3_000466ac)
                       (uVar7,(uint)(uVar7 < (uint)(iVar18 / 2)) +
                              (iVar18 - (iVar18 >> 0x1f) >> 0x1f) + local_38,iVar17,iVar21);
    local_30 = 1;
    if (iVar10 < 0) {
      local_30 = -1;
    }
    local_30 = local_30 * iVar17;
    uVar8 = local_30 / 2 + uVar8;
    uVar24 = (*(code *)PTR___divdi3_000466ac)
                       (uVar8,(uint)(uVar8 < (uint)(local_30 / 2)) +
                              (local_30 - (local_30 >> 0x1f) >> 0x1f) + iVar10,iVar17,iVar21);
  }
  uVar7 = (uint)uVar23 - (int)uVar24;
  if (0 < iVar16) {
    *param_1 = uVar22;
    *(uint *)(param_1 + 1) = uVar7;
    *(uint *)((int)param_1 + 0xc) =
         ((int)((ulonglong)uVar23 >> 0x20) - (int)((ulonglong)uVar24 >> 0x20)) -
         (uint)((uint)uVar23 < uVar7);
  }
  return;
LAB_0001f950:
  iVar20 = (int)((ulonglong)lVar6 >> 0x20);
  uVar23 = (*(code *)PTR___divdi3_000466ac)(0xffffffff,0x7fffffff,iVar17,iVar21);
  iVar10 = (int)((ulonglong)uVar23 >> 0x20);
  if ((iVar20 < iVar10) || ((iVar10 == iVar20 && ((uint)lVar6 < (uint)uVar23)))) {
    iVar10 = iVar17 * (uint)lVar6;
  }
  else {
    iVar10 = -1;
  }
  if ((int)local_48 == 0 && local_48._4_4_ == 0) goto LAB_0001f684;
LAB_0001f998:
  uVar23 = (*(code *)PTR___divdi3_000466ac)(0xffffffff,0x7fffffff,(int)local_48,local_48._4_4_);
  iVar20 = (int)((ulonglong)uVar23 >> 0x20);
  if ((iVar18 < iVar20) || ((iVar20 == iVar18 && (uVar7 < (uint)uVar23)))) {
    iVar10 = iVar10 - uVar7 * (int)local_48;
  }
  else {
    iVar10 = iVar10 + 1;
  }
  goto LAB_0001f688;
}



// ==== FUN_00020348 @ 00020348 size=220

int FUN_00020348(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 + 0xffffffeU < 0x1ffffffd) && (*param_1 + 0xffffffeU < 0x1ffffffd)) {
    iVar1 = *param_1 + param_2 * 2;
    iVar2 = -0x32;
    if (-1 < iVar1) {
      iVar2 = 0x32;
    }
    return (iVar1 * 2 + iVar2) / 100;
  }
  iVar1 = (*(code *)PTR_H264Calculate_000465d4)(param_2,4,100);
  iVar2 = (*(code *)PTR_H264Calculate_000465d4)(*param_1,2,100);
  return iVar1 + iVar2;
}



// ==== FUN_00020424 @ 00020424 size=792

void FUN_00020424(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0xc) == 1) {
    bVar4 = *(int *)(param_1 + 0x3d4) <= *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0xa0);
  }
  else {
    bVar4 = true;
  }
  if ((*(int *)(param_1 + 0x30) != 2) && (*(int *)(param_1 + 0x30) != 7)) {
    iVar5 = *(int *)(param_1 + 0x3d0);
    iVar1 = (*(code *)(PTR_LAB_00046400 + 0x348))(param_1 + 0x214,*(undefined4 *)(param_1 + 0x218));
    uVar2 = (*(code *)PTR_H264Calculate_000465d4)
                      (iVar5 - iVar1,0x80,*(undefined4 *)(param_1 + 0x14));
    iVar1 = param_1 + 0x150;
    goto LAB_000204b0;
  }
  iVar7 = *(int *)(param_1 + 0x3e4);
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar5 = *(int *)(param_1 + 1000);
  iVar1 = iVar6;
  if (iVar7 == 0) {
LAB_000204f8:
    if (iVar5 != -1) goto LAB_00020504;
    iVar3 = *(int *)(param_1 + 0x3ec);
    iVar7 = iVar3;
  }
  else {
    iVar3 = -1;
    if (iVar5 != 0) {
      if (-1 < iVar7) {
        iVar3 = 1;
      }
      iVar1 = (iVar7 + (iVar5 * iVar3) / 2) / iVar5;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      goto LAB_000204f8;
    }
LAB_00020504:
    iVar7 = *(int *)(param_1 + 0x3ec);
    iVar3 = -1;
    iVar5 = iVar5 + 1;
    if (-1 < iVar7) {
      iVar3 = 1;
    }
    iVar3 = (iVar7 + (iVar5 * iVar3) / 2) / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
  }
  *(int *)(param_1 + 0x3f0) = iVar3;
  if (iVar7 != 0) {
    uVar2 = (*(code *)(PTR_LAB_00046400 + -0x205c))(param_1 + 0x250,1);
    iVar5 = (*(code *)PTR_H264Calculate_000465d4)(uVar2,*(undefined4 *)(param_1 + 0x14),0x80);
    iVar5 = iVar5 * 100;
    iVar7 = *(int *)(param_1 + 0x3ec);
    if (iVar7 != 0) {
      iVar3 = -1;
      if (-1 < iVar5) {
        iVar3 = 1;
      }
      iVar5 = (iVar5 + (iVar7 * iVar3) / 2) / iVar7;
      if (iVar7 == 0) {
        trap(0x1c00);
      }
    }
    iVar3 = *(int *)(param_1 + 0x3bc);
    *(int *)(param_1 + 0x360) = iVar1;
    iVar7 = 0x5f;
    if (iVar5 < 0x60) {
      iVar7 = iVar5;
    }
    uVar2 = *(undefined4 *)(PTR_DAT_000463fc + (iVar1 * 10 >> 8) * 4 + -0x6b14);
    iVar5 = param_1 + iVar3 * 4;
    *(int *)(iVar5 + 0x390) = iVar7;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar5 + 0x364) = uVar2;
    if (9 < iVar3) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x3bc) = iVar3;
    if (*(int *)(param_1 + 0x3c0) < 10) {
      *(int *)(param_1 + 0x3c0) = *(int *)(param_1 + 0x3c0) + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  *(int *)(param_1 + 0x40) = (iVar6 + iVar1) / 2;
  if ((*(int *)(param_1 + 0x34) != 2) && (*(int *)(param_1 + 0x34) != 7)) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x3d0);
  iVar1 = (*(code *)(PTR_LAB_00046400 + 0x348))(param_1 + 0x314,*(undefined4 *)(param_1 + 0x318));
  iVar5 = iVar5 - iVar1;
  if (iVar5 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3d0) << 1;
    if (iVar5 <= iVar1) {
      iVar1 = iVar5;
    }
  }
  uVar2 = (*(code *)PTR_H264Calculate_000465d4)(iVar1,0x80,*(undefined4 *)(param_1 + 0x14));
  iVar1 = param_1 + 0x250;
LAB_000204b0:
  uVar2 = (*(code *)(PTR_LAB_00046400 + -0x2390))(iVar1,uVar2,bVar4);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return;
}



// ==== FUN_000286b0 @ 000286b0 size=88

void FUN_000286b0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_000463ec + -0x2000);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



