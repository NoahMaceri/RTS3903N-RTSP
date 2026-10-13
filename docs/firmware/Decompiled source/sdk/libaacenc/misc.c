/* libaacenc — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "libaacenc.h"

// ==== entry @ 00012740 size=72

void processEntry entry(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_0004bac8 + (3 - (int)(PTR_DAT_0004bacc + -0x4540))) &&
     (PTR__ITM_deregisterTMCloneTable_0004bbfc != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_0004bbfc)();
    return;
  }
  return;
}



// ==== AACENC_context_create @ 00012918 size=128

int AACENC_context_create(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*(code *)PTR_AAC_Malloc_0004bcb8)(0xc00);
  uVar3 = (*(code *)PTR_AAC_Malloc_0004bcb8)(0x6000);
  puVar1 = PTR_AAC_189_0004bc84;
  *(undefined4 *)(iVar2 + 0xb98) = uVar3;
  (*(code *)puVar1)(param_1);
  (*(code *)PTR_AAC_010_0004bcf8)();
  return iVar2;
}



// ==== AACENC_context_free @ 00012998 size=120

void AACENC_context_free(undefined4 param_1,undefined4 *param_2)

{
  (*(code *)PTR_AAC_067_0004bcc8)(param_2 + 10,*param_2);
  (*(code *)PTR_AAC_193_0004bafc)(param_1);
  (*(code *)PTR_AAC_Free_0004bd5c)(param_2[0x2e6]);
                    /* WARNING: Could not recover jumptable at 0x00012a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_AAC_Free_0004bd5c)(param_2);
  return;
}



// ==== get_hw_version @ 0001933c size=116

undefined4 get_hw_version(void)

{
  undefined4 uVar1;
  undefined4 local_18 [2];
  
  uVar1 = (*(code *)PTR_open_0004bb4c)(PTR_DAT_0004bae4 + 0x45d0,2);
  (*(code *)PTR_AAC_276_0004bbec)(uVar1,0xb886f010,local_18);
  (*(code *)PTR_AAC_160_0004bb10)(uVar1);
  return local_18[0];
}



