/* librtsaec — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsaec.h"

// ==== FUN_00016438 @ 00016438 size=80

void FUN_00016438(void)

{
  if ((((int)PTR___DT_PLTGOT_00050be8 - (int)(PTR_IPCam_098_112__00050bec + 0xbe0) >> 2) -
       ((int)PTR___DT_PLTGOT_00050be8 - (int)(PTR_IPCam_098_112__00050bec + 0xbe0) >> 0x1f) >> 1 !=
       0) && (PTR__ITM_registerTMCloneTable_00051124 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_00051124)();
    return;
  }
  return;
}



// ==== FUN_00016488 @ 00016488 size=180

void FUN_00016488(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_IPCam_098_112__00050bec;
  if (PTR_IPCam_098_112__00050bec[0x1730] == '\0') {
    if (PTR___cxa_finalize_0005136c != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0005136c)(*(undefined4 *)PTR_LOOP_00050bf0);
    }
    puVar2 = PTR_IPCam_098_112__00050bec;
    puVar3 = PTR_IPCam_098_112__00050bec + -0x3ff8;
    iVar6 = (int)PTR_DAT_00050bf4 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x1734), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x1734) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_00050bf8 + 0x63f0))();
    puVar1[0x1730] = 1;
  }
  return;
}



// ==== FUN_00016560 @ 00016560 size=80

void FUN_00016560(void)

{
  if ((*(int *)(PTR_IPCam_098_112__00050bec + -0x3ff0) != 0) &&
     (PTR__Jv_RegisterClasses_00050cb0 != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_00050cb0)(PTR_IPCam_098_112__00050bec + -0x3ff0);
  }
                    /* WARNING: Could not recover jumptable at 0x000165a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_00050bf8 + 0x6438))();
  return;
}



// ==== FUN_0003ae80 @ 0003ae80 size=1472

void FUN_0003ae80(int param_1,uint param_2,uint param_3,uint param_4)

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
      uVar2 = 0x20 - ((uint)(byte)PTR_DAT_00050c0c[param_3 >> iVar1] + iVar1);
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
      uVar2 = 0x20 - ((uint)(byte)PTR_DAT_00050c0c[param_3 >> iVar1] + iVar1);
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
    uVar2 = 0x20 - ((uint)(byte)PTR_DAT_00050c0c[param_4 >> iVar1] + iVar1);
    if ((uVar2 != 0) &&
       ((param_4 << (uVar2 & 0x1f) |
        param_3 >> ((uint)(byte)PTR_DAT_00050c0c[param_4 >> iVar1] + iVar1 & 0x1f)) >> 0x10 == 0)) {
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
    }
  }
  return;
}



// ==== FUN_0003b440 @ 0003b440 size=88

void FUN_0003b440(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_IPCam_098_112__00050bec + -0x4000);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



