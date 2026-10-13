/* librtsosd2 — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsosd2.h"

// ==== entry @ 000117f0 size=72

void processEntry entry(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_00027588 + (3 - (int)(PTR_DAT_0002758c + 0x7580))) &&
     (PTR__ITM_deregisterTMCloneTable_00027628 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_00027628)();
    return;
  }
  return;
}



// ==== __make_attribute @ 00011d30 size=8

uint __make_attribute(uint param_1)

{
  return param_1 & 0x1f;
}



// ==== __get_color_mode_val @ 00011d38 size=108

undefined4 __get_color_mode_val(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x241) {
    return 2;
  }
  if (param_1 < 0x242) {
    if (param_1 == 0x100) {
      return 0;
    }
    uVar1 = 1;
    iVar2 = 0x240;
  }
  else {
    if (param_1 == 0x243) {
      return 4;
    }
    if (param_1 < 0x243) {
      return 3;
    }
    uVar1 = 5;
    iVar2 = 0x244;
  }
  if (param_1 == iVar2) {
    return uVar1;
  }
  return 0xff;
}



// ==== __check_blk_valid_num @ 000124c0 size=292

int __check_blk_valid_num(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_00027598;
  iVar5 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x14);
  iVar4 = 0;
  puVar6 = PTR_00027598 + 0x5e2c;
  puVar7 = PTR_00027598 + 0x6458;
  do {
    if (puVar3[0x16] == 1) {
      iVar2 = (*(code *)(puVar1 + 0x1a5c))(param_1,puVar3);
      if (iVar2 == 0) {
        iVar5 = iVar5 + 1;
      }
      else if (*(int *)(param_1 + 700) != 0) {
        (*(code *)PTR_rts_log_00027630)
                  (4,puVar6,puVar7,0x23e,iVar4,*puVar3,puVar3[1],puVar3[2],puVar3[3],
                   *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      }
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0x18;
  } while (iVar4 != 6);
  if (*(int *)(param_1 + 700) != 0) {
    *(undefined4 *)(param_1 + 700) = 0;
  }
  return iVar5;
}



// ==== __alloc_osd2_dma_buf @ 00012700 size=196

undefined4 __alloc_osd2_dma_buf(undefined *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_00027598 + 0x5d30;
    (*(code *)PTR___assert_000275b8)(puVar4,PTR_00027598 + 0x5d38,0x278,PTR_00027598 + 0x6420);
  }
  puVar1 = PTR_rts_isp_alloc_dma_000276e0;
  *(undefined4 *)(puVar4 + 0x290) = 0x1000;
  *(undefined4 *)(puVar4 + 0x29c) = 0;
  uVar2 = (*(code *)puVar1)();
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00027604)(uVar2);
  if (iVar3 == 0) {
    (*(code *)PTR_rts_isp_set_dma_info_000275a8)
              (*(undefined4 *)(param_1 + 0x294),PTR_00027598 + 0x5e9c);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== __free_osd2_dma_buf @ 000127c4 size=44

void __free_osd2_dma_buf(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000127e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_isp_free_dma_000275b4)(param_1 + 0x28c);
    return;
  }
  return;
}



