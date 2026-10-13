/* librtsosd2 — "write" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsosd2.h"

// ==== __write_each_blk_info_cmd @ 00011da4 size=676

undefined4 __write_each_blk_info_cmd(undefined *param_1,undefined *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_00027598 + 0x5d90;
    param_2 = PTR_00027598 + 0x5d38;
    (*(code *)PTR___assert_000275b8)(puVar4,param_2,0x155,PTR_00027598 + 0x64ac);
  }
  if (*(int *)(puVar4 + 0x5c) == 1) {
    iVar5 = *(int *)(puVar4 + 0x38);
    if ((iVar5 == 0) || (*(int *)(puVar4 + 0x48) == 0)) {
      uVar2 = 0xfffffff6;
    }
    else {
      iVar10 = *(int *)(puVar4 + 4);
      iVar9 = *(int *)(puVar4 + 8);
      uVar8 = *(int *)(puVar4 + 0xc) - iVar10;
      uVar11 = (int)uVar8 >> 0x1f;
      uVar7 = *(int *)(puVar4 + 0x10) - iVar9;
      uVar14 = *(undefined4 *)(puVar4 + 0x50);
      uVar12 = (int)uVar7 >> 0x1f;
      uVar2 = (*(code *)PTR___get_color_mode_val_0002760c)(*(undefined4 *)(puVar4 + 0x14));
      uVar13 = *(undefined4 *)(param_1 + 0x24);
      bVar6 = param_1[0x34] & 0xeb | 9;
      bVar1 = 0xfd;
      if (param_2 == (undefined *)0x0) {
        bVar6 = param_1[0x34] & 0xeb | 0xb;
        bVar1 = 0xf7;
      }
      (*(code *)PTR_memset_00027624)(iVar5,0,0x20);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,0,2);
      uVar3 = (*(code *)PTR___make_attribute_00027694)(bVar6 & bVar1);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,1,uVar3);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,7,iVar10);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,8,iVar9);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,9,(uVar11 ^ uVar8) - uVar11);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,10,(uVar12 ^ uVar7) - uVar12);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,0xc,2);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,0xd,uVar2);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,0xb,uVar14);
      if (*(int *)(param_1 + 0x14) == 0x100) {
        (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,0xe,uVar13);
      }
      if (param_2 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        (*(code *)PTR_rts_osd2_set_cmd_00027674)(iVar5,2,*(undefined4 *)(param_2 + 0x40));
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0xffffffc1;
  }
  return uVar2;
}



// ==== __write_enable_blk_info_cmd @ 00012048 size=404

int __write_enable_blk_info_cmd(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  puVar2 = PTR_00027598;
  bVar1 = true;
  iVar7 = param_1 + 0x10;
  iVar5 = 0;
  do {
    iVar8 = iVar5;
    if (((*(int *)(iVar7 + 0x5c) == 1) && (*(int *)(iVar7 + 0x4c) != 0)) &&
       (iVar3 = (*(code *)(puVar2 + 0x1a5c))(param_1,iVar7 + 4), iVar3 == 0)) {
      if (*(int *)(iVar7 + 0x28) == 0) {
        *(undefined4 *)(iVar7 + 0x58) = 0;
      }
      else {
        uVar4 = *(uint *)(iVar7 + 0x58);
        bVar1 = true;
        uVar6 = *(uint *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x30);
        if (uVar6 == 0) {
          trap(0x1c00);
        }
        *(uint *)(iVar7 + 0x58) = (uVar4 + 1) % uVar6;
        if (*(uint *)(iVar7 + 0x2c) <= uVar4) {
          bVar1 = false;
          goto LAB_00012168;
        }
      }
      iVar8 = iVar7;
      if ((iVar5 != 0) &&
         (iVar5 = (*(code *)PTR___write_each_blk_info_cmd_00027654)(iVar5,iVar7), iVar5 < 0)) {
        (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x5de8,PTR_00027598 + 0x6490,0x1c5);
        return iVar5;
      }
    }
LAB_00012168:
    iVar7 = iVar7 + 0x60;
    iVar5 = iVar8;
    if (iVar7 == param_1 + 0x250) {
      if (iVar8 == 0) {
        iVar5 = -0xf;
        if (!bVar1) {
          iVar5 = 0;
        }
        return iVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x000121ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar5 = (*(code *)PTR___write_each_blk_info_cmd_00027654)(iVar8,0);
      return iVar5;
    }
  } while( true );
}



// ==== __write_frame_info_cmd @ 00012234 size=360

undefined4 __write_frame_info_cmd(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  bVar1 = *(byte *)(param_1 + 0x250);
  uVar3 = *(undefined4 *)(param_1 + 0x254);
  uVar8 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar6 = *param_2;
  uVar5 = param_2[1];
  uVar4 = *(undefined4 *)(param_1 + 0x270);
  (*(code *)PTR_memset_00027624)(uVar3,0,0x20);
  (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar3,0,0);
  uVar2 = (*(code *)PTR___make_attribute_00027694)(bVar1 & 0xe9 | 9);
  (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar3,1,uVar2);
  (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar3,3,uVar8);
  (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar3,4,uVar7);
  (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar3,5,uVar6);
  (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar3,6,uVar5);
  (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar3,2,uVar4);
  return 0;
}



// ==== __write_color_table_info_cmd @ 0001239c size=292

undefined4 __write_color_table_info_cmd(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x250);
  iVar2 = 6;
  uVar4 = *(undefined4 *)(param_1 + 0x268);
  uVar6 = *(undefined4 *)(param_1 + 0x278);
  param_1 = param_1 + 0x10;
  do {
    iVar2 = iVar2 + -1;
    if (*(int *)(param_1 + 0x5c) == 1) {
      uVar5 = *(undefined4 *)(param_1 + 0x40);
      (*(code *)PTR_memset_00027624)(uVar4,0,0x20);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar4,0,1);
      uVar3 = (*(code *)PTR___make_attribute_00027694)(bVar1 & 0xe9 | 9);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar4,1,uVar3);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar4,0x10,uVar6);
      (*(code *)PTR_rts_osd2_set_cmd_00027674)(uVar4,2,uVar5);
      return 0;
    }
    param_1 = param_1 + 0x60;
  } while (iVar2 != 0);
  return 0xffffffc1;
}



