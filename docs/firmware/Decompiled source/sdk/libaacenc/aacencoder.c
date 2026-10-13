/* libaacenc — "aacencoder" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libaacenc.h"

// ==== AACEncoder_API_Process @ 00016ef8 size=160

/* WARNING: Control flow encountered bad instruction data */

void AACEncoder_API_Process(int param_1,short *param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 8) == 1) {
    if (0 < param_4) {
      piVar4 = *(int **)(param_1 + 0x10);
      uVar2 = (int)param_2 + 0x2021U & 3;
      puVar3 = (uint *)(((int)param_2 + 0x2021U) - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)(param_4 << 1) >> (3 - uVar2) * 8;
      do {
        sVar1 = *param_2;
        param_2 = param_2 + 1;
        *piVar4 = (int)sVar1 << 9;
        piVar4 = piVar4 + 1;
      } while (param_2 != (short *)(param_4 << 1));
    }
    (*(code *)PTR_AAC_113_0004bb8c)(param_1 + 0x20,param_3);
                    /* WARNING: Could not recover jumptable at 0x00016fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_AAC_059_0004bba8)(param_1 + 0x20,*(undefined4 *)(param_1 + 0x18),param_1 + 0x10);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== AACEncoder_API_Set @ 00017008 size=328

undefined4
AACEncoder_API_Set(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_AAC_008_0004bc2c;
  if (param_4 == 0) {
    puVar2 = (undefined *)*param_2;
    if (((((puVar2 == &UNK_00017700) || (puVar2 == (undefined *)0x15888)) ||
         (puVar2 == (undefined *)0xfa00)) ||
        ((((puVar2 == (undefined *)0xbb80 || (puVar2 == (undefined *)0xac44)) ||
          ((puVar2 == (undefined *)0x7d00 ||
           ((puVar2 == (undefined *)0x5dc0 || (puVar2 == (undefined *)0x5622)))))) ||
         (puVar2 == (undefined *)0x3e80)))) ||
       (((puVar2 == (undefined *)0x2ee0 || (puVar2 == (undefined *)0x2b11)) ||
        (puVar2 == (undefined *)0x1f40)))) {
      iVar4 = param_2[1];
      iVar3 = (int)puVar2 << 1;
      *param_1 = puVar2;
      if (iVar3 < iVar4) {
        param_1[1] = iVar3;
      }
      else {
        param_1[1] = iVar4;
        iVar3 = iVar4;
      }
      if (puVar2 == (undefined *)0x1f40) {
        param_1[1] = iVar3;
      }
      else if (puVar2 == (undefined *)0x3e80) {
        param_1[1] = iVar3;
      }
      (*(code *)PTR_AAC_008_0004bc2c)(param_1[6],puVar2,iVar3,param_1[2]);
      return 0;
    }
  }
  else if (param_4 == 1) {
    uVar1 = *param_2;
    param_1[2] = uVar1;
    (*(code *)puVar2)(param_1[6],*param_1,param_1[1],uVar1);
    return 0;
  }
  return 0xffffffff;
}



// ==== AACEncoder_API_Get @ 00017150 size=72

undefined4
AACEncoder_API_Get(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    if (param_4 == 1) {
      *param_2 = param_1[2];
    }
    return 0;
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return 0;
}



// ==== AACEncoder_API_GetBlockLen @ 00017198 size=24

int AACEncoder_API_GetBlockLen(int param_1)

{
  return *(int *)(param_1 + 8) << 0xb;
}



// ==== AACEncoder_API_free @ 000171b0 size=140

void AACEncoder_API_free(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      (*(code *)PTR_AAC_Free_0004bd5c)();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      (*(code *)PTR_AACENC_context_free_0004bc18)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    UNRECOVERED_JUMPTABLE = PTR_AAC_Free_0004bd5c;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00017224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}



// ==== AACEncoder_API_context_Create @ 00017348 size=268

int AACEncoder_API_context_Create(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (*(code *)PTR_get_hw_version_0004bb60)();
  if (1 < (uVar1 & 0xffff) - 1) {
    (*(code *)PTR_puts_0004bcec)(PTR_DAT_0004bae4 + 0x4528);
    return 0;
  }
  iVar2 = (*(code *)PTR_AAC_Malloc_0004bcb8)(0x7548);
  if (iVar2 != 0) {
    (*(code *)PTR_AAC_273_0004bcb4)(iVar2);
    iVar3 = (*(code *)PTR_AAC_274_0004bb5c)(iVar2);
    if (iVar3 == 0) {
      return iVar2;
    }
    (*(code *)PTR_puts_0004bcec)(PTR_DAT_0004bae4 + 0x4518);
    (*(code *)PTR_AACENC_context_free_0004bc18)(iVar2 + 0x20,*(undefined4 *)(iVar2 + 0x18));
    (*(code *)PTR_AACEncoder_API_free_0004bc90)(iVar2);
    return 0;
  }
  return 0;
}



