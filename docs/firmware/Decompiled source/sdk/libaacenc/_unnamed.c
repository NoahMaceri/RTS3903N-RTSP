/* libaacenc — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libaacenc.h"

// ==== FUN_00012788 @ 00012788 size=80

void FUN_00012788(void)

{
  if ((((int)PTR___DT_PLTGOT_0004bac8 - (int)(PTR_DAT_0004bacc + -0x4540) >> 2) -
       ((int)PTR___DT_PLTGOT_0004bac8 - (int)(PTR_DAT_0004bacc + -0x4540) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_0004bc3c != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_0004bc3c)();
    return;
  }
  return;
}



// ==== FUN_000127d8 @ 000127d8 size=216

void FUN_000127d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0004bacc;
  if (PTR_DAT_0004bacc[-0x4200] == '\0') {
    if (PTR___cxa_finalize_0004bce8 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0004bce8)(*(undefined4 *)PTR_LOOP_0004bad0);
    }
    puVar2 = PTR_DAT_0004bacc;
    puVar3 = PTR_DAT_0004bad8 + 0x5008;
    iVar6 = (int)PTR_DAT_0004bad4 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + -0x41fc), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + -0x41fc) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_0004badc + 0x2740))();
    puVar1[-0x4200] = 1;
  }
  return;
}



// ==== FUN_000128b0 @ 000128b0 size=80

void FUN_000128b0(void)

{
  if ((*(int *)(PTR_DAT_0004bad8 + 0x5010) != 0) &&
     (PTR__Jv_RegisterClasses_0004bb1c != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_0004bb1c)(PTR_DAT_0004bad8 + 0x5010);
  }
                    /* WARNING: Could not recover jumptable at 0x000128f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0004badc + 0x2788))();
  return;
}



// ==== FUN_00020c50 @ 00020c50 size=1472

void FUN_00020c50(int param_1,uint param_2,uint param_3,uint param_4)

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
      uVar2 = 0x20 - ((uint)(byte)PTR_DAT_0004baec[param_3 >> iVar1] + iVar1);
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
      uVar2 = 0x20 - ((uint)(byte)PTR_DAT_0004baec[param_3 >> iVar1] + iVar1);
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
    uVar2 = 0x20 - ((uint)(byte)PTR_DAT_0004baec[param_4 >> iVar1] + iVar1);
    if ((uVar2 != 0) &&
       ((param_4 << (uVar2 & 0x1f) |
        param_3 >> ((uint)(byte)PTR_DAT_0004baec[param_4 >> iVar1] + iVar1 & 0x1f)) >> 0x10 == 0)) {
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
    }
  }
  return;
}



// ==== FUN_00021210 @ 00021210 size=88

void FUN_00021210(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_0004bad8 + 0x5000);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



