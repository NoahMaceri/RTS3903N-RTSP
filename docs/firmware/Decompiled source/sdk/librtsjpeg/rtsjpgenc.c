/* librtsjpeg — "rtsjpgenc" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsjpeg.h"

// ==== rtsjpgenc_set_register @ 00011f20 size=244

void rtsjpgenc_set_register(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(PTR_DAT_0002569c + 0x5178);
  piVar2 = piVar1;
  iVar4 = 0;
  while (iVar5 = iVar4 + 1, *piVar2 != param_2) {
    piVar2 = piVar2 + 6;
    iVar4 = iVar5;
    if (iVar5 == 0x36) {
      return;
    }
  }
  if (param_1 == 0) {
    return;
  }
  if ((piVar1[iVar4 * 6 + 4] & 2U) == 0) {
    return;
  }
  uVar3 = (*(code *)PTR_ewl_read_reg_00025784)(param_1,piVar1[iVar4 * 6 + 1]);
                    /* WARNING: Could not recover jumptable at 0x00011ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ewl_write_reg_000257ac)
            (param_1,piVar1[iVar4 * 6 + 1],
             uVar3 & ~piVar1[iVar4 * 6 + 2] |
             param_3 << (piVar1[iVar4 * 6 + 3] & 0x1fU) & piVar1[iVar4 * 6 + 2]);
  return;
}



// ==== rtsjpgenc_get_register @ 00012014 size=168

uint rtsjpgenc_get_register(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(PTR_DAT_0002569c + 0x5178);
  piVar2 = piVar1;
  iVar4 = 0;
  while (iVar5 = iVar4 + 1, *piVar2 != param_2) {
    piVar2 = piVar2 + 6;
    iVar4 = iVar5;
    if (iVar5 == 0x36) {
      return 0;
    }
  }
  if (param_1 == 0) {
    return 0;
  }
  if ((piVar1[iVar4 * 6 + 4] & 1U) == 0) {
    return 0;
  }
  uVar3 = (*(code *)PTR_ewl_read_reg_00025784)(param_1,piVar1[iVar4 * 6 + 1]);
  return (uVar3 & piVar1[iVar4 * 6 + 2]) >> (piVar1[iVar4 * 6 + 3] & 0x1fU);
}



// ==== rtsjpgenc_init @ 0001239c size=208

undefined4 rtsjpgenc_init(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_18 [12];
  
  if (param_1 == (int *)0x0) {
    uVar4 = 0xfffffff6;
  }
  else {
    piVar2 = (int *)(*(code *)PTR_ewl_calloc_000257a4)(1,0x70);
    if (piVar2 == (int *)0x0) {
      uVar4 = 0xfffffff5;
    }
    else {
      iVar3 = (*(code *)PTR_ewl_init_00025754)(auStack_18);
      *piVar2 = iVar3;
      puVar1 = PTR_init_dft_parameters_000257b4;
      if (iVar3 == 0) {
        (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4a28,PTR_000256a8 + 0x50cc,0xdb);
        (*(code *)PTR_ewl_free_000256cc)(piVar2);
        uVar4 = 0xffffffe1;
      }
      else {
        piVar2[0x1b] = 0;
        (*(code *)puVar1)(piVar2);
        uVar4 = 0;
        *param_1 = (int)piVar2;
      }
    }
  }
  return uVar4;
}



// ==== rtsjpgenc_release @ 0001246c size=124

undefined4 rtsjpgenc_release(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4a4c,PTR_000256a8 + 0x50b8,0xee);
    uVar1 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_ewl_release_00025720)(*param_1);
    (*(code *)PTR_ewl_free_000256cc)(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rtsjpgenc_set_config @ 000124e8 size=372

undefined4 rtsjpgenc_set_config(int param_1,uint *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4a80,PTR_000256a8 + 0x50a0,0x112);
    uVar3 = 0xfffffff6;
  }
  else {
    uVar4 = (uint)(ushort)param_2[2];
    if (0x9f < uVar4) {
      uVar1 = *(ushort *)((int)param_2 + 10);
      uVar7 = (uint)uVar1;
      if ((((0x77 < uVar7) && (((ushort)param_2[2] & 0xf) == 0)) && ((uVar1 & 7) == 0)) &&
         ((uVar5 = *param_2, uVar5 < 2 && (uVar6 = param_2[1], uVar6 < 4)))) {
        *(uint *)(param_1 + 0x18) = uVar5;
        *(uint *)(param_1 + 0x1c) = uVar6;
        if ((uVar5 == 0) && ((uVar1 & 0xf) != 0)) {
          *(undefined4 *)(param_1 + 0x20) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        *(uint *)(param_1 + 0x24) = uVar4;
        *(uint *)(param_1 + 0x28) = uVar7;
        if (1 < uVar6) {
          *(uint *)(param_1 + 0x24) = uVar7;
          *(uint *)(param_1 + 0x28) = uVar4;
        }
        *(uint *)(param_1 + 0x48) = uVar7;
        *(uint *)(param_1 + 0x44) = uVar4;
        *(uint *)(param_1 + 0x4c) = uVar4 * uVar7;
        puVar2 = PTR_set_jpgenc_component_00025770;
        uVar4 = *(int *)(param_1 + 0x28) * *(uint *)(param_1 + 0x24);
        if ((uVar5 == 1) || (*(int *)(param_1 + 0x20) != 0)) {
          uVar4 = uVar4 >> 7;
        }
        else {
          uVar4 = uVar4 >> 8;
        }
        *(uint *)(param_1 + 0x2c) = uVar4 - 1;
        *(uint *)(param_1 + 0x30) = (*(uint *)(param_1 + 0x24) >> 4) - 1;
        (*(code *)puVar2)();
        return 0;
      }
    }
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4ab4,PTR_000256a8 + 0x50a0,0x118);
    uVar3 = 0xffffffeb;
  }
  return uVar3;
}



// ==== rtsjpgenc_encode @ 000138ec size=460

int rtsjpgenc_encode(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar4 = PTR_ewl_reserve_hw_00025734;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (uint *)0x0)) {
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4e4c,PTR_000256a8 + 0x5070,0x25b);
    return -10;
  }
  uVar3 = *param_2;
  if ((uVar3 != 0) && ((uVar3 & 7) == 0)) {
    uVar1 = param_2[1];
    if ((uVar1 != 0) && ((uVar1 & 7) == 0)) {
      uVar7 = param_2[2];
      if (((uVar7 == 0) || ((uVar7 & 7) != 0)) || (param_2[4] == 0)) {
        uVar6 = 0x267;
        puVar4 = PTR_000256a8 + 0x4ea0;
      }
      else {
        uVar5 = param_2[3];
        if ((uint)(param_1[10] * param_1[9]) <= uVar5) {
          param_1[0x18] = param_2[4];
          uVar6 = *param_1;
          param_1[0x14] = uVar3;
          param_1[0x15] = uVar1;
          param_1[0x16] = uVar7;
          param_1[0x17] = uVar5;
          param_2[5] = 0;
          param_1[0x19] = 0;
          iVar2 = (*(code *)puVar4)(uVar6);
          if (iVar2 != 0) {
            (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4ef4,PTR_000256a8 + 0x5070,0x280);
            return iVar2;
          }
          iVar2 = (*(code *)PTR_encode_frame_000256b8)(param_1);
          (*(code *)PTR_ewl_release_hw_00025724)(*param_1);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_2[5] = param_1[0x19];
          return 0;
        }
        uVar6 = 0x26c;
        puVar4 = PTR_000256a8 + 0x4ec4;
      }
      goto LAB_000139c8;
    }
  }
  uVar6 = 0x261;
  puVar4 = PTR_000256a8 + 0x4e7c;
LAB_000139c8:
  (*(code *)PTR_rts_log_0002572c)(4,puVar4,PTR_000256a8 + 0x5070,uVar6);
  return -0x15;
}



// ==== rtsjpgenc_get_coding_ctrl @ 00013ab8 size=120

undefined4 rtsjpgenc_get_coding_ctrl(int param_1,byte *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == (byte *)0x0)) {
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4e4c,PTR_000256a8 + 0x5054,0x295);
    uVar1 = 0xfffffff6;
  }
  else {
    uVar1 = 0;
    *param_2 = *param_2 & 0xf0 | (byte)*(undefined4 *)(param_1 + 0x3c) & 0xf;
  }
  return uVar1;
}



// ==== rtsjpgenc_set_coding_ctrl @ 00013b30 size=184

undefined4 rtsjpgenc_set_coding_ctrl(int param_1,byte *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (param_2 == (byte *)0x0)) {
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4e4c,PTR_000256a8 + 0x5038,0x2a4);
    uVar1 = 0xfffffff6;
  }
  else {
    if ((*param_2 & 0xf) < 2) {
      *param_2 = *param_2 & 0xf0 | 2;
    }
    uVar2 = *param_2 & 0xf;
    uVar3 = 0x400 / uVar2;
    if ((*param_2 & 0xf) == 0) {
      trap(0x1c00);
    }
    *(uint *)(param_1 + 0x3c) = uVar2;
    if (0x1ff < uVar3) {
      uVar3 = 0x1ff;
    }
    *(uint *)(param_1 + 0x40) = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rtsjpgenc_set_epoll_hook @ 00013be8 size=136

void rtsjpgenc_set_epoll_hook(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_jpg_ewl_set_epoll_hook_000256c0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_000256a8 + 0x4f18);
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4164,PTR_000256a8 + 0x501c,0x2b7,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000256c8;
    (*(code *)PTR___assert_000256c8)(param_1,PTR_000256a8 + 0x4f20,0x2b7,PTR_000256a8 + 0x5000);
  }
                    /* WARNING: Could not recover jumptable at 0x00013c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



// ==== rtsjpgenc_check_done @ 00013c70 size=136

void rtsjpgenc_check_done(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_jpg_ewl_check_done_00025718;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_000256a8 + 0x4f18);
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4164,PTR_000256a8 + 0x4fe8,0x2c0,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000256c8;
    (*(code *)PTR___assert_000256c8)(param_1,PTR_000256a8 + 0x4f20,0x2c0,PTR_000256a8 + 0x4fd0);
  }
                    /* WARNING: Could not recover jumptable at 0x00013cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



// ==== rtsjpgenc_make_rdy @ 00013cf8 size=136

void rtsjpgenc_make_rdy(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_jpg_ewl_make_rdy_0002576c;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_000256a8 + 0x4f18);
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4164,PTR_000256a8 + 0x4fbc,0x2c9,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000256c8;
    (*(code *)PTR___assert_000256c8)(param_1,PTR_000256a8 + 0x4f20,0x2c9,PTR_000256a8 + 0x4fa8);
  }
                    /* WARNING: Could not recover jumptable at 0x00013d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



// ==== rtsjpgenc_use_sigio @ 00013d80 size=136

void rtsjpgenc_use_sigio(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR_jpg_ewl_use_sigio_00025744;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_000256a8 + 0x4f18);
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4164,PTR_000256a8 + 0x4f94,0x2d2,param_1);
    UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000256c8;
    (*(code *)PTR___assert_000256c8)(param_1,PTR_000256a8 + 0x4f20,0x2d2,PTR_000256a8 + 0x4f80);
  }
                    /* WARNING: Could not recover jumptable at 0x00013e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



