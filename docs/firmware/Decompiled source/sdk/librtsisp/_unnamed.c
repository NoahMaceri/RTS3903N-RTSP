/* librtsisp — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsisp.h"

// ==== FUN_000125b0 @ 000125b0 size=72

void FUN_000125b0(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_0002b4b8 + (3 - (int)(PTR_DAT_0002b4bc + -0x4b50))) &&
     (PTR__ITM_deregisterTMCloneTable_0002b544 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_0002b544)();
    return;
  }
  return;
}



// ==== FUN_000125f8 @ 000125f8 size=80

void FUN_000125f8(void)

{
  if ((((int)PTR___DT_PLTGOT_0002b4b8 - (int)(PTR_DAT_0002b4bc + -0x4b50) >> 2) -
       ((int)PTR___DT_PLTGOT_0002b4b8 - (int)(PTR_DAT_0002b4bc + -0x4b50) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_0002b570 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_0002b570)();
    return;
  }
  return;
}



// ==== FUN_00012648 @ 00012648 size=216

void FUN_00012648(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0002b4bc;
  if (PTR_DAT_0002b4bc[-0x4a10] == '\0') {
    if (PTR___cxa_finalize_0002b594 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0002b594)(*(undefined4 *)PTR_LOOP_0002b4c0);
    }
    puVar2 = PTR_DAT_0002b4bc;
    puVar3 = PTR_DAT_0002b4bc + -0x4b60;
    iVar6 = (int)PTR_DAT_0002b4c4 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + -0x4a0c), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + -0x4a0c) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_0002b4c8 + 0x25b0))();
    puVar1[-0x4a10] = 1;
  }
  return;
}



// ==== FUN_00012720 @ 00012720 size=80

void FUN_00012720(void)

{
  if ((*(int *)(PTR_DAT_0002b4bc + -0x4b58) != 0) &&
     (PTR__Jv_RegisterClasses_0002b4f0 != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_0002b4f0)(PTR_DAT_0002b4bc + -0x4b58);
  }
                    /* WARNING: Could not recover jumptable at 0x00012768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0002b4c8 + 0x25f8))();
  return;
}



// ==== FUN_000127ac @ 000127ac size=520

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000127ac(undefined4 param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  uint auStack_40 [2];
  int local_30;
  undefined2 *local_2c;
  
  iVar2 = (*(code *)PTR_rts_isp_get_cmd_data_limit_0002b5c0)(param_3);
  iVar3 = (*(code *)PTR_rts_isp_get_ae_window_num_0002b524)(0);
  iVar13 = (iVar3 + iVar2 + -1) / iVar2;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  iVar1 = -(iVar13 * 0xc + 10U & 0xfffffff8);
  if ((param_3 & 0xff7f) == 0xa0a) {
    if (param_2 != (uint *)0x0) {
      uVar4 = (*(code *)PTR_rts_isp_get_ae_window_num_0002b524)(0);
      uVar11 = *param_2;
      if (uVar11 < uVar4) {
        *(uint *)((int)auStack_40 + iVar1) = uVar4;
        *(uint *)((int)auStack_40 + iVar1 + 4) = uVar11;
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x5f78,PTR_DAT_0002b4cc + -0x5d4c,0x9a);
        return 0xffffffcf;
      }
      if (param_2[1] == 0) {
        return 0xfffffff6;
      }
      iVar9 = 0;
      puVar12 = (undefined2 *)(&stack0xffffffc8 + iVar1);
      for (iVar7 = 0; iVar7 < iVar13; iVar7 = iVar7 + 1) {
        *(char *)(puVar12 + 1) = (char)iVar7;
        iVar5 = iVar3 - iVar9;
        if (iVar2 < iVar3 - iVar9) {
          iVar5 = iVar2;
        }
        *puVar12 = (short)param_3;
        *(char *)((int)puVar12 + 3) = (char)iVar5;
        puVar12[2] = 0;
        puVar12[3] = 0;
        iVar8 = param_2[1] + iVar9;
        iVar9 = iVar9 + iVar5;
        *(int *)(puVar12 + 4) = iVar8;
        puVar12 = puVar12 + 6;
      }
      local_30 = iVar13;
      local_2c = (undefined2 *)(&stack0xffffffc8 + iVar1);
      uVar6 = (*(code *)PTR_rts_isp_exec_ext_cmds_0002b4f4)(param_1,&stack0xffffffd0);
      return uVar6;
    }
    puVar10 = PTR_DAT_0002b4cc + -0x5fe0;
    *(undefined **)((int)auStack_40 + iVar1) = puVar10;
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5d4c,0x94);
    (*(code *)PTR___assert_0002b4f8)
              (puVar10,PTR_DAT_0002b4cc + -0x5fd8,0x94,PTR_DAT_0002b4cc + -0x5d60);
  }
  return 0xffffffbd;
}



// ==== FUN_00013c08 @ 00013c08 size=172

int FUN_00013c08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5d30,0x12);
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_mmap_0002b584)(0,param_2,3,1,iVar1,param_1);
    (*(code *)PTR_close_0002b4e4)(iVar1);
    if (iVar2 == -1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



// ==== FUN_00019da0 @ 00019da0 size=88

void FUN_00019da0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_0002b4bc + -0x4b68);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



