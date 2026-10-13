/* librtscamkit — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtscamkit.h"

// ==== FUN_00011d40 @ 00011d40 size=72

void FUN_00011d40(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_000283c8 + (3 - (int)(PTR_DAT_000283cc + -0x7c40))) &&
     (PTR__ITM_deregisterTMCloneTable_00028484 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_00028484)();
    return;
  }
  return;
}



// ==== FUN_00011d88 @ 00011d88 size=80

void FUN_00011d88(void)

{
  if ((((int)PTR___DT_PLTGOT_000283c8 - (int)(PTR_DAT_000283cc + -0x7c40) >> 2) -
       ((int)PTR___DT_PLTGOT_000283c8 - (int)(PTR_DAT_000283cc + -0x7c40) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_000284ac != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_000284ac)();
    return;
  }
  return;
}



// ==== FUN_00011dd8 @ 00011dd8 size=216

void FUN_00011dd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_000283cc;
  if (PTR_DAT_000283cc[-0x7ac0] == '\0') {
    if (PTR___cxa_finalize_000284e8 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_000284e8)(*(undefined4 *)PTR_LOOP_000283d0);
    }
    puVar2 = PTR_DAT_000283cc;
    puVar3 = PTR_DAT_000283cc + -0x7e0c;
    iVar6 = (int)PTR_DAT_000283d4 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + -0x7abc), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + -0x7abc) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_000283d8 + 0x1d40))();
    puVar1[-0x7ac0] = 1;
  }
  return;
}



// ==== FUN_00011eb0 @ 00011eb0 size=80

void FUN_00011eb0(void)

{
  if ((*(int *)(PTR_DAT_000283cc + -0x7e00) != 0) &&
     (PTR__Jv_RegisterClasses_00028404 != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_00028404)(PTR_DAT_000283cc + -0x7e00);
  }
                    /* WARNING: Could not recover jumptable at 0x00011ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_000283d8 + 0x1d88))();
  return;
}



// ==== FUN_00013e30 @ 00013e30 size=152

int FUN_00013e30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (PTR_DAT_000283cc[-0x7de8] != '\0') {
    iVar2 = (*(code *)PTR_fprintf_000284b8)
                      (param_1,PTR_000283d8 + 0x7cf0,PTR_DAT_000283cc + -0x7de8);
  }
  iVar1 = (*(code *)PTR_vfprintf_000283f4)(param_1,param_2,param_3);
  return iVar2 + iVar1;
}



// ==== FUN_00014a9c @ 00014a9c size=200

undefined4 FUN_00014a9c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 < 1) {
    iVar3 = 8;
    iVar2 = 0;
    puVar5 = PTR_000283d8 + 0x7fa0;
    do {
      iVar1 = (*(code *)PTR___rts_calloc_000284f8)(1,0xc,puVar5,0x28);
      if (iVar1 != 0) {
        piVar6 = *(int **)(param_1 + 0x24);
        *(int *)(param_1 + 0x24) = iVar1 + 4;
        iVar2 = iVar2 + 1;
        *(int *)(iVar1 + 4) = param_1 + 0x20;
        *(int **)(iVar1 + 8) = piVar6;
        *piVar6 = iVar1 + 4;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(int *)(param_1 + 0x28) = iVar4 + iVar2;
  }
  return *(undefined4 *)(param_1 + 0x28);
}



// ==== FUN_00014b64 @ 00014b64 size=184

int FUN_00014b64(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar3 = PTR_000283d8;
  iVar5 = 0;
  piVar4 = (int *)**(int **)(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0x20);
  while( true ) {
    piVar1 = piVar4;
    if (piVar2 == (int *)(param_1 + 0x20)) {
      return iVar5;
    }
    (*(code *)(puVar3 + 0x4a80))();
    if (piVar2 + -1 != (int *)0x0) {
      (*(code *)PTR_rts_free_00028434)(piVar2 + -1);
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 8) break;
    piVar4 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  return 8;
}



// ==== FUN_00014c1c @ 00014c1c size=216

undefined4 FUN_00014c1c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)(param_1 + 0x20)) {
    (*(code *)(PTR_000283d8 + 0x4a80))(piVar1);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    if (piVar1 != (int *)0x4) {
      puVar2 = *(undefined4 **)(param_1 + 0x1c);
      piVar1[-1] = param_2;
      *(int **)(param_1 + 0x1c) = piVar1;
      *piVar1 = param_1 + 0x18;
      piVar1[1] = (int)puVar2;
      *puVar2 = piVar1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return 0;
    }
  }
  (*(code *)PTR_rts_log_00028488)
            (4,PTR_000283d8 + 0x7d30,PTR_000283d8 + 0x7f88,0x98,PTR_000283d8 + 0x7f88);
  return 0xfffffff5;
}



// ==== FUN_00014e8c @ 00014e8c size=156

int FUN_00014e8c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = (*(code *)PTR_rts_queue_empty_000284d8)();
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_1 + 0x18);
    (*(code *)(PTR_000283d8 + 0x4a80))(piVar2);
    iVar1 = piVar2[-1];
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    puVar3 = *(undefined4 **)(param_1 + 0x24);
    piVar2[-1] = 0;
    *(int **)(param_1 + 0x24) = piVar2;
    piVar2[1] = (int)puVar3;
    *piVar2 = param_1 + 0x20;
    *puVar3 = piVar2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// ==== FUN_00014f28 @ 00014f28 size=160

undefined4 FUN_00014f28(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)PTR_rts_queue_empty_000284d8)();
  if (((iVar1 == 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x2c))) {
    iVar1 = 0;
    for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)(param_1 + 0x18);
        piVar2 = (int *)*piVar2) {
      if (iVar1 == param_2) {
        return piVar2[-1];
      }
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}



// ==== FUN_00015004 @ 00015004 size=244

undefined4 FUN_00015004(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)(*(code *)PTR___find_node_000284c0)(param_1,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xfffffff1;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x20);
    if (piVar5 != (int *)(param_1 + 0x20)) {
      (*(code *)(PTR_000283d8 + 0x4a80))(piVar5);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      if (piVar5 != (int *)0x4) {
        *puVar1 = param_2;
        if (param_4 == 0) {
          iVar4 = puVar1[1];
          *(int **)(iVar4 + 4) = piVar5;
          *piVar5 = iVar4;
          piVar5[1] = (int)(puVar1 + 1);
          puVar1[1] = piVar5;
        }
        else {
          puVar3 = (undefined4 *)puVar1[2];
          puVar1[2] = piVar5;
          *piVar5 = (int)(puVar1 + 1);
          piVar5[1] = (int)puVar3;
          *puVar3 = piVar5;
        }
        return 0;
      }
    }
    uVar2 = 0xfffffff5;
  }
  return uVar2;
}



// ==== FUN_00016ff0 @ 00016ff0 size=88

void FUN_00016ff0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_000283cc + -0x7e14);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



