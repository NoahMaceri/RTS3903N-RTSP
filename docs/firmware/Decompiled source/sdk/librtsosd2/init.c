/* librtsosd2 — "init" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsosd2.h"

// ==== __init_osd2_blocks @ 000125e4 size=224

int __init_osd2_blocks(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_00027598;
  if (param_2 == 0) {
    iVar3 = -10;
  }
  else {
    iVar4 = 0;
    iVar3 = param_2 + 0x34;
    do {
      *(undefined4 *)(iVar3 + 0x28) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + -0xc) = 0;
      *(undefined4 *)(iVar3 + -8) = 1;
      *(undefined4 *)(iVar3 + -4) = 0;
      iVar2 = (*(code *)(puVar1 + 0x1bd8))(param_1,iVar3);
      iVar4 = iVar4 + 1;
      if (iVar2 < 0) {
        return iVar2;
      }
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + -0x14) = 0x14000;
      iVar3 = iVar3 + 0x60;
    } while (iVar4 != 6);
    iVar3 = 0;
  }
  return iVar3;
}



// ==== __init_osd2_pameters @ 000126c4 size=60

void __init_osd2_pameters(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    iVar2 = 0;
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 0x268) = 0;
    do {
      iVar1 = param_1 + iVar2;
      iVar2 = iVar2 + 0x60;
      *(undefined4 *)(iVar1 + 0x48) = 0;
    } while (iVar2 != 0x240);
  }
  return;
}



// ==== __init_osd2_color_table @ 000127f0 size=268

undefined4 __init_osd2_color_table(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_s2;
  
  iVar4 = param_1 + 0x27c;
  if (param_1 == 0) {
    uVar3 = 700;
    puVar2 = PTR_00027598 + 0x5d30;
    param_2 = unaff_s2;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_00012864;
    uVar3 = 0x2bd;
    puVar2 = PTR_00027598 + 0x5ea8;
  }
  (*(code *)PTR___assert_000275b8)(puVar2,PTR_00027598 + 0x5d38,uVar3,PTR_00027598 + 0x6408);
LAB_00012864:
  (*(code *)PTR_memset_00027624)(iVar4,0,0x10);
  *(undefined4 *)(param_1 + 0x280) = 200;
  iVar1 = (*(code *)PTR_osd2_alloc_dma_000275fc)(param_1,iVar4);
  puVar2 = PTR_osd2_set_default_color_table_000275cc;
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x27c) != 0) {
      *param_2 = *(undefined4 *)(param_1 + 0x284);
    }
    (*(code *)puVar2)(iVar4);
    uVar3 = 0;
  }
  else {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x5eb0,PTR_00027598 + 0x63f0,0x2c4);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



