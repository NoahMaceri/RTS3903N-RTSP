/* librtsosd2 — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsosd2.h"

// ==== FUN_00011838 @ 00011838 size=80

void FUN_00011838(void)

{
  if ((((int)PTR___DT_PLTGOT_00027588 - (int)(PTR_DAT_0002758c + 0x7580) >> 2) -
       ((int)PTR___DT_PLTGOT_00027588 - (int)(PTR_DAT_0002758c + 0x7580) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_00027658 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_00027658)();
    return;
  }
  return;
}



// ==== FUN_00011888 @ 00011888 size=216

void FUN_00011888(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0002758c;
  if (PTR_DAT_0002758c[0x7700] == '\0') {
    if (PTR___cxa_finalize_00027698 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00027698)(*(undefined4 *)PTR_LOOP_00027590);
    }
    puVar2 = PTR_DAT_0002758c;
    puVar3 = PTR_DAT_0002758c + 0x708c;
    iVar6 = (int)PTR_DAT_00027594 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x7704), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x7704) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_00027598 + 0x17f0))();
    puVar1[0x7700] = 1;
  }
  return;
}



// ==== FUN_00011960 @ 00011960 size=80

void FUN_00011960(void)

{
  if ((*(int *)(PTR_DAT_0002758c + 0x7094) != 0) &&
     (PTR__Jv_RegisterClasses_000275b0 != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_000275b0)(PTR_DAT_0002758c + 0x7094);
  }
                    /* WARNING: Could not recover jumptable at 0x000119a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_00027598 + 0x1838))();
  return;
}



// ==== FUN_00011a5c @ 00011a5c size=184

undefined4 FUN_00011a5c(undefined *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x192;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_00027598 + 0x5d30;
  }
  else {
    uVar1 = 0x193;
    if (param_2 != (uint *)0x0) goto LAB_00011ab8;
    param_1 = PTR_00027598 + 0x5d90;
  }
  param_2 = (uint *)(PTR_00027598 + 0x5d38);
  (*(code *)PTR___assert_000275b8)(param_1,param_2,uVar1,PTR_00027598 + 0x6470);
LAB_00011ab8:
  uVar1 = 0xffffffeb;
  if ((*param_2 <= *(uint *)(param_1 + 8)) &&
     (uVar1 = 0xffffffeb, param_2[2] <= *(uint *)(param_1 + 8))) {
    if (*(uint *)(param_1 + 0xc) < param_2[1]) {
      uVar1 = 0xffffffeb;
    }
    else {
      uVar1 = 0xffffffeb;
      if (param_2[3] <= *(uint *)(param_1 + 0xc)) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



// ==== FUN_00011bd8 @ 00011bd8 size=176

int FUN_00011bd8(int param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  uVar3 = 0x93;
  if (param_1 == 0) {
    puVar2 = PTR_00027598 + 0x5d30;
  }
  else {
    pcVar4 = (code *)PTR_osd2_alloc_dma_000275fc;
    if (param_2 != (undefined *)0x0) goto LAB_00011c38;
    uVar3 = 0x94;
    puVar2 = PTR_00027598 + 0x5d9c;
  }
  param_2 = PTR_00027598 + 0x5d38;
  pcVar4 = (code *)PTR___assert_000275b8;
  (*(code *)PTR___assert_000275b8)(puVar2,param_2,uVar3,PTR_00027598 + 0x6448);
LAB_00011c38:
  *(undefined4 *)(param_2 + 8) = 0x20;
  iVar1 = (*pcVar4)();
  if (iVar1 != 0) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x5da4,PTR_00027598 + 0x6438,0x99,iVar1);
  }
  return iVar1;
}



// ==== FUN_00014440 @ 00014440 size=64

byte * FUN_00014440(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x10;
    iVar2 = iVar2 + 1;
    if ((byte)PTR_DAT_0002758c[iVar1 + 0x7470] == param_1) {
      return PTR_DAT_0002758c + iVar1 + 0x7470;
    }
  } while (iVar2 != 0x11);
  return (byte *)0x0;
}



// ==== FUN_000148b0 @ 000148b0 size=92

int * FUN_000148b0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(PTR_00027598 + 0x6ce0);
  while ((*piVar2 != param_1 || (*(byte *)(piVar2 + 1) != param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
    if (iVar1 == 0x11) {
      return (int *)0x0;
    }
  }
  return (int *)((int)(PTR_00027598 + 0x6ce0) + iVar1 * 2 * 4);
}



// ==== FUN_00014e90 @ 00014e90 size=268

undefined4 FUN_00014e90(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_rts_reg_osd2_done_0002763c)(*param_1);
  iVar1 = (*(code *)PTR_rts_osd2_get_register_000276cc)(param_1,0x16);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_rts_osd2_get_register_000276cc)(param_1,0x17);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_rts_osd2_get_register_000276cc)(param_1,0x15);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_rts_osd2_get_register_000276cc)(param_1,0x12);
        uVar2 = 0;
        if (iVar1 != 0) {
          (*(code *)PTR_rts_osd2_set_register_000276c8)(param_1,0x12,1);
          uVar2 = 0xffffffd9;
        }
      }
      else {
        (*(code *)PTR_rts_osd2_set_register_000276c8)(param_1,0x15,1);
        uVar2 = 0xffffffbc;
      }
    }
    else {
      (*(code *)PTR_rts_osd2_set_register_000276c8)(param_1,0x17,1);
      uVar2 = 0xffffffbd;
    }
  }
  else {
    (*(code *)PTR_rts_osd2_set_register_000276c8)(param_1,0x16,1);
    uVar2 = 0xffffffbe;
  }
  return uVar2;
}



// ==== FUN_000159e0 @ 000159e0 size=88

void FUN_000159e0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_0002758c + 0x7084);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



