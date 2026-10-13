/* librtsjpeg — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsjpeg.h"

// ==== FUN_000113a8 @ 000113a8 size=80

void FUN_000113a8(void)

{
  if ((((int)PTR___DT_PLTGOT_00025698 - (int)(PTR_DAT_0002569c + 0x5690) >> 2) -
       ((int)PTR___DT_PLTGOT_00025698 - (int)(PTR_DAT_0002569c + 0x5690) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_00025760 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_00025760)();
    return;
  }
  return;
}



// ==== FUN_000113f8 @ 000113f8 size=216

void FUN_000113f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0002569c;
  if (PTR_DAT_0002569c[0x57d0] == '\0') {
    if (PTR___cxa_finalize_00025788 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00025788)(*(undefined4 *)PTR_LOOP_000256a0);
    }
    puVar2 = PTR_DAT_0002569c;
    puVar3 = PTR_DAT_0002569c + 0x516c;
    iVar6 = (int)PTR_DAT_000256a4 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x57d4), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x57d4) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_000256a8 + 0x1360))();
    puVar1[0x57d0] = 1;
  }
  return;
}



// ==== FUN_000114d0 @ 000114d0 size=80

void FUN_000114d0(void)

{
  if ((*(int *)(PTR_DAT_0002569c + 0x5174) != 0) &&
     (PTR__Jv_RegisterClasses_000256c4 != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_000256c4)(PTR_DAT_0002569c + 0x5174);
  }
                    /* WARNING: Could not recover jumptable at 0x00011518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000256a8 + 0x13a8))();
  return;
}



// ==== FUN_00013e10 @ 00013e10 size=88

void FUN_00013e10(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_0002569c + 0x5164);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



