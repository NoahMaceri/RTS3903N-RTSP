/* librtsisp — "rts" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsisp.h"

// ==== rts_hw_id_init @ 00012560 size=80

undefined4 processEntry rts_hw_id_init(void)

{
  undefined *puVar1;
  undefined2 local_10;
  undefined2 local_e;
  
  puVar1 = PTR_rts_hw_id_0002b58c;
  (*(code *)PTR_rts_get_hw_id_0002b590)(&local_10);
  *(undefined2 *)puVar1 = local_10;
  *(undefined2 *)(puVar1 + 2) = local_e;
  return 0;
}



// ==== rts_isp_get_ae_window_num @ 00012770 size=60

int rts_isp_get_ae_window_num(int *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (2 < *(ushort *)PTR_rts_hw_id_0002b58c) {
    iVar1 = 10;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar1;
    param_1[1] = iVar1;
  }
  return iVar1 * iVar1;
}



// ==== rts_isp_get_ae_histogram_num @ 000129b4 size=8

undefined4 rts_isp_get_ae_histogram_num(void)

{
  return 0x40;
}



// ==== rts_isp_get_awb_window_num @ 000129bc size=60

int rts_isp_get_awb_window_num(int *param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (2 < *(ushort *)PTR_rts_hw_id_0002b58c) {
    iVar1 = 10;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar1;
    param_1[1] = iVar1;
  }
  return iVar1 * iVar1;
}



// ==== rts_isp_get_af_window_num @ 000129f8 size=28

undefined4 rts_isp_get_af_window_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 5;
    param_1[1] = 5;
  }
  return 0x19;
}



// ==== rts_isp_get_3a_version @ 00012a14 size=228

int rts_isp_get_3a_version(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  int local_28 [3];
  undefined2 local_1c;
  undefined1 local_1a;
  
  if (param_2 == 0) {
    return -10;
  }
  local_28[1] = param_2 + 4;
  local_28[2] = param_2 + 8;
  iVar2 = 0;
  local_28[0] = param_2;
  do {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa84,iVar2,3,0,0,&local_1c);
    if (iVar1 != 0) {
      return iVar1;
    }
    piVar3 = local_28 + iVar2;
    iVar2 = iVar2 + 1;
    puVar4 = (undefined2 *)*piVar3;
    *puVar4 = local_1c;
    *(undefined1 *)(puVar4 + 1) = local_1a;
  } while (iVar2 != 3);
  return 0;
}



// ==== rts_isp_get_ae_gain @ 00012af8 size=156

void rts_isp_get_ae_gain(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa89,0,6,0,0,&local_10);
  if ((iVar1 == 0) && (param_2 != (undefined2 *)0x0)) {
    *param_2 = CONCAT11(local_f,local_10);
    param_2[1] = CONCAT11(local_d,local_e);
    param_2[2] = CONCAT11(local_b,local_c);
  }
  return;
}



// ==== rts_isp_set_ae_gain @ 00012b94 size=168

undefined4 rts_isp_set_ae_gain(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  
  if (param_2 == (ushort *)0x0) {
    return 0xfffffff6;
  }
  uVar1 = *param_2;
  if ((0xff < uVar1) && (uVar2 = param_2[1], 0xff < uVar2)) {
    local_e = (undefined1)uVar2;
    local_d = (undefined1)(uVar2 >> 8);
    local_10 = (undefined1)uVar1;
    local_c = (undefined1)param_2[2];
    local_b = (undefined1)(param_2[2] >> 8);
    local_f = (undefined1)(uVar1 >> 8);
    uVar3 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa09,0,6,0,0,&local_10);
    return uVar3;
  }
  return 0xffffffcf;
}



// ==== rts_isp_get_ae_weight @ 00012c3c size=32

void rts_isp_get_ae_weight(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00012c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0002b4c8 + 0x27ac))(param_1,param_2,0xa8a);
  return;
}



// ==== rts_isp_set_ae_weight @ 00012c5c size=32

void rts_isp_set_ae_weight(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00012c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0002b4c8 + 0x27ac))(param_1,param_2,0xa0a);
  return;
}



// ==== rts_isp_get_ae_statis @ 00012c7c size=1136

/* WARNING: Removing unreachable block (ram,0x00013038) */

int rts_isp_get_ae_statis(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 auStack_50 [2];
  uint local_40;
  undefined2 *local_3c;
  uint local_38;
  undefined2 *local_34;
  int local_30;
  undefined1 *local_2c;
  
  puVar3 = (undefined *)(*(code *)PTR_rts_isp_get_cmd_data_limit_0002b5c0)(0xa8b);
  uVar4 = (*(code *)PTR_rts_isp_get_ae_window_num_0002b524)(0);
  local_30 = uVar4 + 1;
  uVar5 = (*(code *)PTR_rts_isp_get_ae_histogram_num_0002b550)();
  iVar14 = uVar5 * 2;
  iVar15 = (int)(puVar3 + local_30 + -1) / (int)puVar3;
  if (puVar3 == (undefined *)0x0) {
    trap(0x1c00);
  }
  if (puVar3 == (undefined *)0x0) {
    trap(0x1c00);
  }
  iVar13 = iVar15 + (int)(puVar3 + iVar14 + -1) / (int)puVar3;
  local_38 = iVar13 * 0xc;
  iVar1 = -(local_38 + 10 & 0xfffffff8);
  local_34 = (undefined2 *)(&stack0xffffffb8 + iVar1);
  iVar2 = -(uVar4 + 8 & 0xfffffff8);
  iVar8 = -(iVar14 + 7U & 0xfffffff8);
  local_2c = &stack0xffffffb8 + iVar8 + iVar2 + iVar1;
  if (param_2 == (undefined1 *)0x0) {
    puVar12 = PTR_DAT_0002b4cc + -0x5f14;
    *(undefined **)((int)auStack_50 + iVar8 + iVar2 + iVar1) = puVar12;
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5d78,0xed);
    uVar10 = 0xed;
    puVar9 = PTR_DAT_0002b4cc + -0x5fd8;
    puVar3 = puVar12;
  }
  else {
    iVar6 = *(int *)(param_2 + 8);
    if (iVar6 == 0) {
      *(undefined **)((int)auStack_50 + iVar8 + iVar2 + iVar1) = PTR_DAT_0002b4cc + -0x5f50;
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5d78,0xee);
      iVar6 = *(int *)(param_2 + 8);
    }
    if (iVar6 != 0) goto LAB_00012e40;
    uVar10 = 0xee;
    puVar12 = PTR_DAT_0002b4cc + -0x5f50;
    puVar9 = PTR_DAT_0002b4cc + -0x5fd8;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        (*(code *)PTR___assert_0002b4f8)(puVar12,puVar9,uVar10,PTR_DAT_0002b4cc + -0x5d90);
LAB_00012e40:
        if (*(uint *)(param_2 + 4) < uVar4) {
          *(undefined **)((int)auStack_50 + iVar8 + iVar2 + iVar1) = PTR_DAT_0002b4cc + -0x5f40;
          (*(code *)PTR_rts_log_0002b548)
                    (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5d78,0xef);
        }
        if (uVar4 <= *(uint *)(param_2 + 4)) break;
        uVar10 = 0xef;
        puVar12 = PTR_DAT_0002b4cc + -0x5f40;
        puVar9 = PTR_DAT_0002b4cc + -0x5fd8;
      }
      iVar6 = *(int *)(param_2 + 0x10);
      if (iVar6 == 0) {
        *(undefined **)((int)auStack_50 + iVar8 + iVar2 + iVar1) = PTR_DAT_0002b4cc + -0x5f1c;
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5d78,0xf0);
        iVar6 = *(int *)(param_2 + 0x10);
      }
      if (iVar6 != 0) break;
      uVar10 = 0xf0;
      puVar12 = PTR_DAT_0002b4cc + -0x5f1c;
      puVar9 = PTR_DAT_0002b4cc + -0x5fd8;
    }
    if (*(uint *)(param_2 + 0xc) < uVar5) {
      *(undefined **)((int)auStack_50 + iVar8 + iVar2 + iVar1) = PTR_DAT_0002b4cc + -0x5f0c;
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5d78,0xf1);
    }
    if (uVar5 <= *(uint *)(param_2 + 0xc)) break;
    uVar10 = 0xf1;
    puVar12 = PTR_DAT_0002b4cc + -0x5f0c;
    puVar9 = PTR_DAT_0002b4cc + -0x5fd8;
  }
  iVar6 = 0;
  iVar8 = 0;
  puVar7 = local_34;
  while (iVar8 < iVar15) {
    iVar8 = iVar8 + 1;
    *puVar7 = 0xa8b;
    *(char *)(puVar7 + 1) = (char)iVar8;
    puVar12 = (undefined *)(local_30 - iVar6);
    if ((int)puVar3 < local_30 - iVar6) {
      puVar12 = puVar3;
    }
    puVar11 = &stack0xffffffb8 + iVar2 + iVar1 + iVar6;
    *(char *)((int)puVar7 + 3) = (char)puVar12;
    puVar7[2] = 0;
    iVar6 = iVar6 + ((uint)puVar12 & 0xff);
    puVar7[3] = 0;
    *(undefined1 **)(puVar7 + 4) = puVar11;
    puVar7 = puVar7 + 6;
  }
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  iVar8 = 0;
  puVar7 = local_34 + iVar15 * 6;
  while (iVar15 < iVar13) {
    iVar15 = iVar15 + 1;
    puVar12 = (undefined *)(iVar14 - iVar8);
    if ((int)puVar3 < iVar14 - iVar8) {
      puVar12 = puVar3;
    }
    *(char *)((int)puVar7 + 3) = (char)puVar12;
    puVar11 = local_2c + iVar8;
    *puVar7 = 0xa8b;
    *(char *)(puVar7 + 1) = (char)iVar15;
    iVar8 = iVar8 + ((uint)puVar12 & 0xff);
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 **)(puVar7 + 4) = puVar11;
    puVar7 = puVar7 + 6;
  }
  local_40 = local_38 / 0xc;
  local_3c = local_34;
  iVar15 = (*(code *)PTR_rts_isp_exec_ext_cmds_0002b4f4)(param_1,&local_40);
  puVar3 = PTR_memcpy_0002b598;
  if (iVar15 == 0) {
    *param_2 = (&stack0xffffffb8)[iVar2 + iVar1];
    (*(code *)puVar3)(*(undefined4 *)(param_2 + 8),&stack0xffffffb9 + iVar2 + iVar1,uVar4);
    for (iVar15 = 0; iVar15 < (int)uVar5; iVar15 = iVar15 + 1) {
      *(ushort *)(*(int *)(param_2 + 0x10) + iVar15 * 2) = CONCAT11(*local_2c,local_2c[1]);
      local_2c = local_2c + 2;
    }
    iVar15 = 0;
  }
  return iVar15;
}



// ==== rts_isp_get_ae_target_delta @ 000130ec size=108

int rts_isp_get_ae_target_delta(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 local_10 [8];
  
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa8e,0,1,0,0,local_10);
    if (iVar1 == 0) {
      *param_2 = local_10[0];
    }
  }
  return iVar1;
}



// ==== rts_isp_set_ae_target_delta @ 00013158 size=76

void rts_isp_set_ae_target_delta(undefined4 param_1,undefined1 param_2)

{
  undefined1 local_10 [12];
  
  local_10[0] = param_2;
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa0e,0,1,0,0,local_10);
  return;
}



// ==== rts_isp_set_ae_gain_max @ 000131a4 size=88

void rts_isp_set_ae_gain_max(undefined4 param_1,uint param_2)

{
  undefined1 local_10;
  undefined1 local_f;
  
  local_10 = (undefined1)(param_2 & 0xffff);
  local_f = (undefined1)((param_2 & 0xffff) >> 8);
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa10,0,2,0,0,&local_10);
  return;
}



// ==== rts_isp_get_ae_gain_max @ 000131fc size=116

void rts_isp_get_ae_gain_max(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa90,0,2,0,0,&local_10);
  if ((iVar1 == 0) && (param_2 != (undefined2 *)0x0)) {
    *param_2 = CONCAT11(local_f,local_10);
  }
  return;
}



// ==== rts_isp_set_ae_min_fps @ 00013270 size=76

void rts_isp_set_ae_min_fps(undefined4 param_1,undefined1 param_2)

{
  undefined1 local_10 [12];
  
  local_10[0] = param_2;
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa12,0,1,0,0,local_10);
  return;
}



// ==== rts_isp_get_ae_min_fps @ 000132bc size=104

void rts_isp_get_ae_min_fps(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 local_10 [8];
  
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa92,0,1,0,0,local_10);
  if ((iVar1 == 0) && (param_2 != (undefined1 *)0x0)) {
    *param_2 = local_10[0];
  }
  return;
}



// ==== rts_isp_get_awb_statis @ 00013324 size=888

/* WARNING: Removing unreachable block (ram,0x00013650) */

void rts_isp_get_awb_statis(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined4 auStack_40 [2];
  uint local_30;
  undefined1 *local_2c;
  
  uVar2 = (*(code *)PTR_rts_isp_get_cmd_data_limit_0002b5c0)(0xa8c);
  uVar3 = (*(code *)PTR_rts_isp_get_awb_window_num_0002b54c)(0);
  iVar16 = (int)(uVar3 + uVar2 + -1) / (int)uVar2;
  if (uVar2 == 0) {
    trap(0x1c00);
  }
  iVar1 = -(iVar16 * 0x24 + 10U & 0xfffffff8);
  if (param_2 == (uint *)0x0) {
    puVar12 = (uint *)(PTR_DAT_0002b4cc + -0x5f14);
    *(uint **)((int)auStack_40 + iVar1) = puVar12;
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5da8,0x17e);
    uVar9 = 0x17e;
    puVar7 = PTR_DAT_0002b4cc + -0x5fd8;
    param_2 = puVar12;
  }
  else {
    if (*param_2 < uVar3) {
      *(undefined **)((int)auStack_40 + iVar1) = PTR_DAT_0002b4cc + -0x5f40;
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5da8,0x17f)
      ;
    }
    if (uVar3 <= *param_2) goto LAB_0001347c;
    uVar9 = 0x17f;
    puVar12 = (uint *)(PTR_DAT_0002b4cc + -0x5f40);
    puVar7 = PTR_DAT_0002b4cc + -0x5fd8;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        (*(code *)PTR___assert_0002b4f8)(puVar12,puVar7,uVar9,PTR_DAT_0002b4cc + -24000);
LAB_0001347c:
        uVar13 = param_2[1];
        if (uVar13 == 0) {
          *(undefined **)((int)auStack_40 + iVar1) = PTR_DAT_0002b4cc + -0x5ee4;
          (*(code *)PTR_rts_log_0002b548)
                    (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5da8,0x180);
          uVar13 = param_2[1];
        }
        if (uVar13 != 0) break;
        uVar9 = 0x180;
        puVar12 = (uint *)(PTR_DAT_0002b4cc + -0x5ee4);
        puVar7 = PTR_DAT_0002b4cc + -0x5fd8;
      }
      uVar13 = param_2[2];
      if (uVar13 == 0) {
        *(undefined **)((int)auStack_40 + iVar1) = PTR_DAT_0002b4cc + -0x5ed4;
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5da8,0x181);
        uVar13 = param_2[2];
      }
      if (uVar13 != 0) break;
      uVar9 = 0x181;
      puVar12 = (uint *)(PTR_DAT_0002b4cc + -0x5ed4);
      puVar7 = PTR_DAT_0002b4cc + -0x5fd8;
    }
    uVar13 = param_2[3];
    if (uVar13 == 0) {
      *(undefined **)((int)auStack_40 + iVar1) = PTR_DAT_0002b4cc + -0x5ec4;
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5da8,0x182)
      ;
      uVar13 = param_2[3];
    }
    iVar5 = 0;
    iVar4 = 0;
    if (uVar13 != 0) break;
    uVar9 = 0x182;
    puVar12 = (uint *)(PTR_DAT_0002b4cc + -0x5ec4);
    puVar7 = PTR_DAT_0002b4cc + -0x5fd8;
  }
  iVar14 = 0;
  if (-1 < iVar16) {
    iVar14 = iVar16;
  }
  do {
    if (iVar4 == 1) {
      uVar13 = param_2[2];
    }
    else if (iVar4 == 2) {
      uVar13 = param_2[3];
    }
    else {
      uVar13 = param_2[1];
    }
    iVar8 = 0;
    puVar15 = (undefined2 *)(&stack0xffffffc8 + iVar1 + iVar5 * 0xc);
    for (iVar6 = 0; iVar6 < iVar16; iVar6 = iVar6 + 1) {
      *(char *)(puVar15 + 1) = (char)iVar6 + (char)iVar5;
      uVar10 = uVar3 - iVar8;
      if ((int)uVar2 < (int)(uVar3 - iVar8)) {
        uVar10 = uVar2;
      }
      iVar11 = uVar13 + iVar8;
      *(char *)((int)puVar15 + 3) = (char)uVar10;
      *puVar15 = 0xa8c;
      iVar8 = iVar8 + (uVar10 & 0xff);
      puVar15[2] = 0;
      puVar15[3] = 0;
      *(int *)(puVar15 + 4) = iVar11;
      puVar15 = puVar15 + 6;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + iVar14;
  } while (iVar4 != 3);
  local_30 = (uint)(iVar16 * 0x24) / 0xc;
  local_2c = &stack0xffffffc8 + iVar1;
  (*(code *)PTR_rts_isp_exec_ext_cmds_0002b4f4)(param_1,&local_30);
  return;
}



// ==== rts_isp_get_awb_ct_gain @ 0001369c size=132

int rts_isp_get_awb_ct_gain(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  
  if (param_3 == (undefined1 *)0x0) {
    iVar1 = -10;
  }
  else if ((int)param_2 < 0) {
    iVar1 = -0x15;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)
                      (param_1,0xa8d,param_2 & 0xff,2,0,0,&local_10);
    if (iVar1 == 0) {
      *param_3 = local_10;
      param_3[1] = local_f;
    }
  }
  return iVar1;
}



// ==== rts_isp_set_awb_auto_gain_adjustment @ 00013720 size=196

void rts_isp_set_awb_auto_gain_adjustment(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = PTR_DAT_0002b4cc + -0x5eb4;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5de8,0x1c7,puVar1);
    (*(code *)PTR___assert_0002b4f8)
              (puVar1,PTR_DAT_0002b4cc + -0x5fd8,0x1c7,PTR_DAT_0002b4cc + -0x5e10);
  }
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)();
  return;
}



// ==== rts_isp_get_awb_auto_gain_adjustment @ 000137e4 size=212

void rts_isp_get_awb_auto_gain_adjustment(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  
  if (param_2 == (undefined2 *)0x0) {
    param_2 = (undefined2 *)(PTR_DAT_0002b4cc + -0x5eb4);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5e38,0x1d8,param_2);
    (*(code *)PTR___assert_0002b4f8)
              (param_2,PTR_DAT_0002b4cc + -0x5fd8,0x1d8,PTR_DAT_0002b4cc + -0x5e60);
  }
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)();
  if (iVar1 == 0) {
    *param_2 = CONCAT11(local_f,local_10);
    param_2[1] = CONCAT11(local_d,local_e);
  }
  return;
}



// ==== rts_isp_get_af_statis @ 000138b8 size=828

/* WARNING: Removing unreachable block (ram,0x00013af0) */

int rts_isp_get_af_statis(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined4 auStack_40 [2];
  uint local_30;
  undefined2 *local_2c;
  
  uVar4 = (*(code *)PTR_rts_isp_get_af_window_num_0002b5e0)(0);
  iVar12 = (uVar4 + 2) * 4;
  uVar5 = (*(code *)PTR_rts_isp_get_cmd_data_limit_0002b5c0)(0xa91);
  iVar15 = (int)(iVar12 + uVar5 + -1) / (int)uVar5;
  if (uVar5 == 0) {
    trap(0x1c00);
  }
  iVar1 = -(iVar12 + 7U & 0xfffffff8);
  pbVar11 = &stack0xffffffc8 + iVar1;
  uVar3 = iVar15 * 0xc;
  iVar2 = -(uVar3 + 10 & 0xfffffff8);
  if (param_2 == (uint *)0x0) {
    pbVar10 = PTR_DAT_0002b4cc + -0x5f14;
    *(byte **)((int)auStack_40 + iVar2 + iVar1) = pbVar10;
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5e78,499);
    uVar9 = 499;
    puVar8 = PTR_DAT_0002b4cc + -0x5fd8;
    pbVar11 = pbVar10;
  }
  else {
    if (param_2[2] < uVar4) {
      *(undefined **)((int)auStack_40 + iVar2 + iVar1) = PTR_DAT_0002b4cc + -0x5f40;
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5e78,500);
    }
    if (uVar4 <= param_2[2]) goto LAB_00013a30;
    uVar9 = 500;
    pbVar10 = PTR_DAT_0002b4cc + -0x5f40;
    puVar8 = PTR_DAT_0002b4cc + -0x5fd8;
  }
  while( true ) {
    (*(code *)PTR___assert_0002b4f8)(pbVar10,puVar8,uVar9,PTR_DAT_0002b4cc + -0x5e90);
LAB_00013a30:
    uVar13 = param_2[3];
    if (uVar13 == 0) {
      *(undefined **)((int)auStack_40 + iVar2 + iVar1) = PTR_DAT_0002b4cc + -0x5ea8;
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5e78,0x1f5)
      ;
      uVar13 = param_2[3];
    }
    if (uVar13 != 0) break;
    uVar9 = 0x1f5;
    pbVar10 = PTR_DAT_0002b4cc + -0x5ea8;
    puVar8 = PTR_DAT_0002b4cc + -0x5fd8;
  }
  iVar7 = 0;
  puVar14 = (undefined2 *)(&stack0xffffffc8 + iVar2 + iVar1);
  for (iVar6 = 0; iVar6 < iVar15; iVar6 = iVar6 + 1) {
    *(char *)(puVar14 + 1) = (char)iVar6;
    uVar13 = iVar12 - iVar7;
    if ((int)uVar5 < iVar12 - iVar7) {
      uVar13 = uVar5;
    }
    pbVar10 = pbVar11 + iVar7;
    *(char *)((int)puVar14 + 3) = (char)uVar13;
    *puVar14 = 0xa91;
    iVar7 = iVar7 + (uVar13 & 0xff);
    puVar14[2] = 0;
    puVar14[3] = 0;
    *(byte **)(puVar14 + 4) = pbVar10;
    puVar14 = puVar14 + 6;
  }
  local_30 = uVar3 / 0xc;
  local_2c = (undefined2 *)(&stack0xffffffc8 + iVar2 + iVar1);
  iVar12 = (*(code *)PTR_rts_isp_exec_ext_cmds_0002b4f4)(param_1,&local_30);
  if (iVar12 == 0) {
    *param_2 = (uint)pbVar11[1] << 8 | (uint)pbVar11[2] << 0x10 | (uint)*pbVar11 |
               (uint)pbVar11[3] << 0x18;
    param_2[1] = (uint)pbVar11[5] << 8 | (uint)pbVar11[6] << 0x10 | (uint)pbVar11[4] |
                 (uint)pbVar11[7] << 0x18;
    for (iVar12 = 0; iVar12 < (int)uVar4; iVar12 = iVar12 + 1) {
      *(uint *)(param_2[3] + iVar12 * 4) =
           (uint)pbVar11[9] << 8 | (uint)pbVar11[10] << 0x10 | (uint)pbVar11[8] |
           (uint)pbVar11[0xb] << 0x18;
      pbVar11 = pbVar11 + 4;
    }
    iVar12 = 0;
  }
  return iVar12;
}



// ==== rts_wq_lock_ctrl @ 00013cb4 size=284

undefined4 rts_wq_lock_ctrl(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_res4 [3];
  
  if ((param_1 + 0x7ffb93ffU < 5) && ((1 << (param_1 + 0x7ffb93ffU & 0x1f) & 0x1bU) != 0)) {
    local_res4[0] = param_2;
    iVar2 = (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5d24,0x82);
    if (iVar2 < 0) {
      uVar6 = 0xffffffe8;
    }
    else {
      iVar3 = (*(code *)PTR_ioctl_0002b5d4)(iVar2,param_1,local_res4);
      uVar1 = local_res4[0];
      uVar6 = 0;
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
        uVar5 = (*(code *)PTR_strerror_0002b5c8)(*puVar4);
        uVar6 = 0xffffffd1;
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x5d14,PTR_DAT_0002b4cc + -0x571c,0x423,param_1,uVar1,uVar5
                  );
      }
      (*(code *)PTR_close_0002b4e4)(iVar2);
    }
  }
  else {
    uVar6 = 0xffffffeb;
  }
  return uVar6;
}



// ==== rts_isp_v4l2_open @ 00013dd0 size=200

int rts_isp_v4l2_open(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [64];
  
  if (-1 < param_1) {
    (*(code *)PTR_snprintf_0002b5b8)(auStack_48,0x40,PTR_DAT_0002b4cc + -0x5cec,param_1 + 0x33);
    iVar1 = (*(code *)PTR_rts_v4l2_open_0002b52c)(auStack_48,0x82);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      uVar3 = (*(code *)PTR_strerror_0002b5c8)(*puVar2);
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x5cdc,PTR_DAT_0002b4cc + -0x5560,0x36,auStack_48,uVar3);
      iVar1 = -0x18;
    }
    return iVar1;
  }
  return -0x15;
}



// ==== rts_isp_v4l2_close @ 00013e98 size=68

undefined4 rts_isp_v4l2_close(int param_1)

{
  if (-1 < param_1) {
    (*(code *)PTR_close_0002b4e4)();
    return 0;
  }
  return 0;
}



// ==== rts_isp_ctrl_open @ 00013edc size=36

void rts_isp_ctrl_open(void)

{
                    /* WARNING: Could not recover jumptable at 0x00013ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5cac,0x82);
  return;
}



// ==== rts_isp_ctrl_close @ 00013f00 size=68

undefined4 rts_isp_ctrl_close(int param_1)

{
  if (-1 < param_1) {
    (*(code *)PTR_close_0002b4e4)();
    return 0;
  }
  return 0;
}



// ==== rts_isp_soc_open @ 00013f44 size=36

void rts_isp_soc_open(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00013f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5c9c,param_1);
  return;
}



// ==== rts_isp_soc_close @ 00013f68 size=68

undefined4 rts_isp_soc_close(int param_1)

{
  if (-1 < param_1) {
    (*(code *)PTR_close_0002b4e4)();
    return 0;
  }
  return 0;
}



// ==== rts_isp_soc_detach @ 00013fac size=132

int rts_isp_soc_detach(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_rts_isp_soc_open_0002b55c)(0x82);
  if (iVar1 < 0) {
    iVar1 = -0x18;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0x20007340);
    (*(code *)PTR_rts_isp_soc_close_0002b5a4)(iVar1);
    iVar1 = -(uint)(iVar2 != 0);
  }
  return iVar1;
}



// ==== rts_isp_soc_attach @ 00014030 size=132

int rts_isp_soc_attach(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_rts_isp_soc_open_0002b55c)(0x82);
  if (iVar1 < 0) {
    iVar1 = -0x18;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0x20007341);
    (*(code *)PTR_rts_isp_soc_close_0002b5a4)(iVar1);
    iVar1 = -(uint)(iVar2 != 0);
  }
  return iVar1;
}



// ==== rts_exec_vendor_cmd @ 000140b4 size=172

undefined4 rts_exec_vendor_cmd(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  if (-1 < param_1) {
    local_10 = param_2;
    local_c = param_3;
    iVar1 = (*(code *)PTR_ioctl_0002b5d4)(param_1,0xc0087201,&local_10);
    uVar3 = 0;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      uVar3 = (*(code *)PTR_strerror_0002b5c8)(*puVar2);
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x5c90,PTR_DAT_0002b4cc + -0x5574,0x89,uVar3);
      uVar3 = 0xffffffd1;
    }
    return uVar3;
  }
  return 0xffffffe6;
}



// ==== rts_isp_mem_open @ 00014160 size=36

void rts_isp_mem_open(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001417c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5c6c,param_1);
  return;
}



// ==== rts_isp_mem_close @ 00014184 size=40

void rts_isp_mem_close(int param_1)

{
  if (-1 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_close_0002b4e4)();
    return;
  }
  return;
}



// ==== rts_isp_mem_alloc @ 000141ac size=384

undefined4 rts_isp_mem_alloc(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int local_28;
  undefined4 local_24;
  int local_20 [5];
  
  puVar1 = PTR_ioctl_0002b5d4;
  if (param_1 < 0) {
    uVar3 = 0xffffffe6;
  }
  else if (param_2 == (int *)0x0) {
    uVar3 = 0xfffffff6;
  }
  else {
    local_28 = param_2[1];
    if (local_28 == 0) {
      uVar3 = 0xffffffeb;
    }
    else {
      local_20[2] = param_2[3];
      *param_2 = 0;
      param_2[2] = 0;
      local_24 = 0;
      local_20[0] = 0;
      local_20[1] = 0;
      iVar2 = (*(code *)puVar1)(param_1,0xc0147338,&local_28);
      if (iVar2 == 0) {
        iVar2 = (*(code *)PTR_mmap_0002b584)(0,local_28,3,1,param_1,local_24);
        *param_2 = iVar2;
        puVar1 = PTR___errno_location_0002b504;
        if (iVar2 == -1) {
          *param_2 = 0;
          puVar4 = (undefined4 *)(*(code *)puVar1)();
          uVar5 = *puVar4;
          uVar3 = (*(code *)PTR_strerror_0002b5c8)(uVar5);
          (*(code *)PTR_rts_log_0002b548)
                    (4,PTR_DAT_0002b4cc + -0x5c40,PTR_DAT_0002b4cc + -0x5588,0xb8,uVar5,uVar3);
          (*(code *)PTR_ioctl_0002b5d4)(param_1,0x80047339,local_20);
          uVar3 = 0xffffffce;
        }
        else {
          uVar3 = 0;
          param_2[1] = local_28;
          param_2[2] = local_20[0];
        }
      }
      else {
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x5c60,PTR_DAT_0002b4cc + -0x5588,0xb0);
        uVar3 = 0xfffffff5;
      }
    }
  }
  return uVar3;
}



// ==== rts_isp_mem_free @ 0001432c size=152

undefined4 rts_isp_mem_free(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 0) {
    uVar1 = 0xffffffe6;
  }
  else {
    if (param_2 != (int *)0x0) {
      if (*param_2 != 0) {
        (*(code *)PTR_munmap_0002b5b0)(*param_2,param_2[1]);
      }
      if (param_2[2] != 0) {
        (*(code *)PTR_ioctl_0002b5d4)(param_1,0x80047339,param_2 + 2);
      }
      *param_2 = 0;
      param_2[2] = 0;
      param_2[1] = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_isp_mem_realloc @ 000143c4 size=456

undefined4 rts_isp_mem_realloc(int param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_28;
  undefined4 local_24;
  int local_20 [4];
  
  if (param_1 < 0) {
    uVar4 = 0xffffffe6;
  }
  else if (param_2 == (int *)0x0) {
    uVar4 = 0xfffffff6;
  }
  else {
    local_20[0] = param_2[2];
    if (((param_2[1] != param_3) || (*param_2 == 0)) || (local_20[0] == 0)) {
      local_20[2] = param_2[3];
      local_24 = 0;
      local_20[1] = 0;
      local_28 = param_3;
      if ((*param_2 != 0) && (local_20[0] != 0)) {
        (*(code *)PTR_rts_isp_mem_free_0002b588)(param_1,param_2);
      }
      if (param_3 == 0) {
        return 0;
      }
      iVar2 = (*(code *)PTR_ioctl_0002b5d4)(param_1,0xc0147340,&local_28);
      puVar1 = PTR_mmap_0002b584;
      if (iVar2 != 0) {
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x5c18,PTR_DAT_0002b4cc + -0x559c,0xf9);
        return 0xfffffff5;
      }
      *param_2 = 0;
      iVar2 = (*(code *)puVar1)(0,local_28,3,1,param_1,local_24);
      *param_2 = iVar2;
      puVar1 = PTR___errno_location_0002b504;
      if (iVar2 == -1) {
        *param_2 = 0;
        puVar3 = (undefined4 *)(*(code *)puVar1)();
        uVar5 = *puVar3;
        uVar4 = (*(code *)PTR_strerror_0002b5c8)(uVar5);
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x5c40,PTR_DAT_0002b4cc + -0x559c,0x103,uVar5,uVar4);
        (*(code *)PTR_ioctl_0002b5d4)(param_1,0x80047339,local_20);
        return 0xffffffce;
      }
      param_2[1] = local_28;
      param_2[2] = local_20[0];
      param_2[3] = local_20[2];
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ==== rts_isp_mem_set_info @ 0001458c size=200

undefined4 rts_isp_mem_set_info(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined1 auStack_3c [40];
  
  if (param_1 < 0) {
    uVar2 = 0xffffffe6;
  }
  else if (param_3 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_memset_0002b534)(&local_40,0,0x24);
    local_40 = param_2;
    (*(code *)PTR_strncpy_0002b560)(auStack_3c,param_3,0x1f);
    iVar1 = (*(code *)PTR_ioctl_0002b5d4)(param_1,0x80247341,&local_40);
    uVar2 = 0xffffffd1;
    if (-1 < iVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== rts_isp_alloc_dma @ 00014654 size=140

undefined4 rts_isp_alloc_dma(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_mem_open_0002b520)(0x82);
    if (iVar1 < 0) {
      uVar2 = 0xffffffe8;
    }
    else {
      uVar2 = (*(code *)PTR_rts_isp_mem_alloc_0002b540)(iVar1,param_1);
      (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
    }
  }
  return uVar2;
}



// ==== rts_isp_free_dma @ 000146e0 size=140

undefined4 rts_isp_free_dma(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_mem_open_0002b520)(0x82);
    if (iVar1 < 0) {
      uVar2 = 0xffffffe8;
    }
    else {
      uVar2 = (*(code *)PTR_rts_isp_mem_free_0002b588)(iVar1,param_1);
      (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
    }
  }
  return uVar2;
}



// ==== rts_isp_realloc_dma @ 0001476c size=156

undefined4 rts_isp_realloc_dma(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_mem_open_0002b520)(0x82);
    if (iVar1 < 0) {
      uVar2 = 0xffffffe8;
    }
    else {
      uVar2 = (*(code *)PTR_rts_isp_mem_realloc_0002b578)(iVar1,param_1,param_2);
      (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
    }
  }
  return uVar2;
}



// ==== rts_isp_set_dma_info @ 00014808 size=144

undefined4 rts_isp_set_dma_info(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_rts_isp_mem_open_0002b520)(0x82);
  if (iVar1 < 0) {
    uVar2 = 0xffffffe8;
  }
  else {
    uVar2 = (*(code *)PTR_rts_isp_mem_set_info_0002b530)(iVar1,param_1,param_2);
    (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
  }
  return uVar2;
}



// ==== rts_isp_mem_sync_device @ 00014898 size=184

undefined4 rts_isp_mem_sync_device(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = (*(code *)PTR_rts_isp_mem_open_0002b520)(0x82);
  if (iVar1 < 0) {
    uVar3 = 0xffffffe8;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0xc0047360,local_res0);
    if (iVar2 == 0) {
      (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x5bf4,PTR_DAT_0002b4cc + -0x55b4,0x173)
      ;
      (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
      uVar3 = 0xfffffff5;
    }
  }
  return uVar3;
}



// ==== rts_isp_mem_sync_cpu @ 00014950 size=184

undefined4 rts_isp_mem_sync_cpu(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = (*(code *)PTR_rts_isp_mem_open_0002b520)(0x82);
  if (iVar1 < 0) {
    uVar3 = 0xffffffe8;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0xc0047361,local_res0);
    if (iVar2 == 0) {
      (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x5bd4,PTR_DAT_0002b4cc + -0x55cc,0x188)
      ;
      (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
      uVar3 = 0xfffffff5;
    }
  }
  return uVar3;
}



// ==== rts_dma_memcpy @ 00014a08 size=544

undefined4 rts_dma_memcpy(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  
  if (param_3 < 0x20) goto LAB_00014b44;
  if ((param_1 & 0x1f) != (param_2 & 0x1f)) {
    return 0xffffffe3;
  }
  iVar4 = 0x20 - (param_1 & 0x1f);
  uVar5 = param_3 - iVar4 & 0x1f;
  iVar6 = (param_3 - iVar4) - uVar5;
  (*(code *)PTR_memcpy_0002b598)(param_1,param_2,iVar4);
  if (iVar6 == 0) {
LAB_00014a84:
    if (uVar5 == 0) {
      return 0;
    }
  }
  else {
    if (param_1 + iVar4 == 0) {
      puVar3 = PTR_DAT_0002b4cc + -0x5bb8;
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x55dc,0x1b2,puVar3);
      uVar2 = 0x1b2;
    }
    else {
      if (param_2 + iVar4 != 0) {
        iVar1 = (*(code *)PTR_rts_isp_mem_open_0002b520)(0x82);
        if (iVar1 < 0) {
          uVar2 = 0xffffffe8;
        }
        else {
          local_38 = param_1 + iVar4;
          local_34 = param_2 + iVar4;
          local_30 = iVar6;
          iVar4 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0x800c7380,&local_38);
          uVar2 = 0;
          if (iVar4 != 0) {
            uVar2 = 0xffffffd1;
            (*(code *)PTR_rts_log_0002b548)
                      (4,PTR_DAT_0002b4cc + -0x5b4c,PTR_DAT_0002b4cc + -0x55fc,0x1a3);
          }
          (*(code *)PTR_rts_isp_mem_close_0002b56c)(iVar1);
        }
        iVar4 = (*(code *)PTR_RTS_IS_ERR_0002b51c)(uVar2);
        if (iVar4 != 0) {
          return uVar2;
        }
        goto LAB_00014a84;
      }
      puVar3 = PTR_DAT_0002b4cc + -0x5b50;
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x55dc,0x1b3,puVar3);
      uVar2 = 0x1b3;
    }
    (*(code *)PTR___assert_0002b4f8)
              (puVar3,PTR_DAT_0002b4cc + -0x5bb4,uVar2,PTR_DAT_0002b4cc + -0x55ec);
  }
LAB_00014b44:
  (*(code *)PTR_memcpy_0002b598)();
  return 0;
}



// ==== rts_memcpy @ 00014c28 size=380

undefined * rts_memcpy(undefined *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int unaff_s1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_0002b4cc + -0x5bb8;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5608,0x202,param_1);
    param_3 = 0x202;
    puVar3 = PTR_DAT_0002b4cc + -0x5bb4;
    param_2 = unaff_s1;
  }
  else {
    if (param_2 != 0) goto LAB_00014cf0;
    param_1 = PTR_DAT_0002b4cc + -0x5b50;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5608,0x203,param_1);
    param_3 = 0x203;
    puVar3 = PTR_DAT_0002b4cc + -0x5bb4;
  }
  while( true ) {
    (*(code *)PTR___assert_0002b4f8)(param_1,puVar3,param_3,PTR_DAT_0002b4cc + -0x5614);
LAB_00014cf0:
    if (param_3 != 0) break;
    param_1 = PTR_DAT_0002b4cc + -0x5b34;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5608,0x204,param_1);
    param_3 = 0x204;
    puVar3 = PTR_DAT_0002b4cc + -0x5bb4;
  }
  uVar1 = (*(code *)PTR_rts_dma_memcpy_0002b4d8)();
  iVar2 = (*(code *)PTR_RTS_IS_ERR_0002b51c)(uVar1);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined *)(*(code *)PTR_memcpy_0002b598)(param_1,param_2,param_3);
    return puVar3;
  }
  return param_1;
}



// ==== rts_reg_isp_open @ 00014da4 size=544

int rts_reg_isp_open(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int local_28;
  int local_24 [2];
  
  puVar1 = PTR_DAT_0002b4cc;
  if (param_1 == (int *)0x0) {
    return -10;
  }
  piVar2 = (int *)(*(code *)PTR___rts_calloc_0002b5a8)(1,0x14,PTR_DAT_0002b4cc + -0x5628,0x236);
  if (piVar2 == (int *)0x0) {
    return -0xb;
  }
  iVar3 = (*(code *)PTR_rts_isp_ctrl_open_0002b514)();
  if (iVar3 < 0) {
    iVar7 = -0x18;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x5b2c,puVar1 + -0x5628,0x23c,PTR_DAT_0002b4cc + -0x5cac);
    goto LAB_00014f80;
  }
  iVar7 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(iVar3,0x40047334,local_24);
  if (iVar7 == 0) {
    iVar7 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(iVar3,0x40047335,&local_28);
    if (iVar7 != 0) {
      puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      uVar8 = *puVar4;
      uVar6 = 0x248;
      puVar5 = PTR_DAT_0002b4cc + -0x5ad8;
      goto LAB_00014ef0;
    }
    iVar7 = (*(code *)(PTR_0002b4c8 + 0x3c08))(local_24[0],local_28);
    if (iVar7 != 0) {
      piVar2[3] = iVar7;
      piVar2[1] = local_24[0];
      *piVar2 = iVar3;
      piVar2[2] = local_28;
      piVar2[4] = (int)piVar2;
      *param_1 = (int)piVar2;
      return 0;
    }
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x5aa8,puVar1 + -0x5628,0x24e);
    iVar7 = -0x32;
  }
  else {
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
    uVar8 = *puVar4;
    uVar6 = 0x243;
    puVar5 = PTR_DAT_0002b4cc + -0x5b08;
LAB_00014ef0:
    (*(code *)PTR_rts_log_0002b548)(4,puVar5,puVar1 + -0x5628,uVar6,uVar8);
  }
  (*(code *)PTR_rts_isp_ctrl_close_0002b5dc)(iVar3);
LAB_00014f80:
  (*(code *)PTR_rts_free_0002b508)(piVar2);
  return iVar7;
}



// ==== rts_reg_h264_open @ 00014fc4 size=532

undefined4 rts_reg_h264_open(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_20;
  int local_1c;
  
  puVar1 = PTR_DAT_0002b4cc;
  if (param_1 == (int *)0x0) {
    return 0xfffffff6;
  }
  piVar2 = (int *)(*(code *)PTR___rts_calloc_0002b5a8)(1,0x14,PTR_DAT_0002b4cc + -0x563c,0x26f);
  puVar6 = PTR_DAT_0002b4cc;
  if (piVar2 == (int *)0x0) {
    return 0xfffffff5;
  }
  iVar3 = (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5a8c,0x82);
  if (iVar3 < 0) {
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x5a78,puVar1 + -0x563c,0x275,puVar6 + -0x5a8c);
    uVar8 = 0xffffffe8;
    goto LAB_00015198;
  }
  iVar4 = (*(code *)PTR_ioctl_0002b5d4)(iVar3,0x40046803,&local_1c);
  if (iVar4 == 0) {
    iVar4 = (*(code *)PTR_ioctl_0002b5d4)(iVar3,0x40046804,&local_20);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      uVar9 = *puVar5;
      uVar7 = 0x282;
      puVar6 = PTR_DAT_0002b4cc + -0x5a24;
      goto LAB_00015108;
    }
    iVar4 = (*(code *)(PTR_0002b4c8 + 0x3c08))(local_1c,local_20);
    if (iVar4 != 0) {
      piVar2[3] = iVar4;
      piVar2[1] = local_1c;
      *piVar2 = iVar3;
      piVar2[2] = local_20;
      piVar2[4] = (int)piVar2;
      *param_1 = (int)piVar2;
      return 0;
    }
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59f4,puVar1 + -0x563c,0x288);
    uVar8 = 0xffffffce;
  }
  else {
    puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
    uVar9 = *puVar5;
    uVar7 = 0x27c;
    puVar6 = PTR_DAT_0002b4cc + -0x5a54;
LAB_00015108:
    uVar8 = 0xffffffd1;
    (*(code *)PTR_rts_log_0002b548)(4,puVar6,puVar1 + -0x563c,uVar7,uVar9);
  }
  (*(code *)PTR_close_0002b4e4)(iVar3);
LAB_00015198:
  (*(code *)PTR_rts_free_0002b508)(piVar2);
  return uVar8;
}



// ==== rts_reg_mjpg_open @ 000151d8 size=536

undefined4 rts_reg_mjpg_open(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_20;
  int local_1c;
  
  puVar1 = PTR_DAT_0002b4cc;
  if (param_1 == (int *)0x0) {
    return 0xfffffff6;
  }
  piVar2 = (int *)(*(code *)PTR___rts_calloc_0002b5a8)(1,0x14,PTR_DAT_0002b4cc + -0x5650,0x2aa);
  if (piVar2 == (int *)0x0) {
    return 0xfffffff5;
  }
  iVar3 = (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -23000,0x82);
  if (iVar3 < 0) {
    uVar8 = 0xffffffe8;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x5a78,puVar1 + -0x5650,0x2b0,PTR_DAT_0002b4cc + -0x5a8c);
    goto LAB_000153b0;
  }
  iVar4 = (*(code *)PTR_ioctl_0002b5d4)(iVar3,0x40046a01,&local_1c);
  if (iVar4 == 0) {
    iVar4 = (*(code *)PTR_ioctl_0002b5d4)(iVar3,0x40046a02,&local_20);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      uVar9 = *puVar5;
      uVar7 = 0x2bd;
      puVar6 = PTR_DAT_0002b4cc + -0x5a24;
      goto LAB_00015320;
    }
    iVar4 = (*(code *)(PTR_0002b4c8 + 0x3c08))(local_1c,local_20);
    if (iVar4 != 0) {
      piVar2[3] = iVar4;
      piVar2[1] = local_1c;
      *piVar2 = iVar3;
      piVar2[2] = local_20;
      piVar2[4] = (int)piVar2;
      *param_1 = (int)piVar2;
      return 0;
    }
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59f4,puVar1 + -0x5650,0x2c3);
    uVar8 = 0xffffffce;
  }
  else {
    puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
    uVar9 = *puVar5;
    uVar7 = 0x2b7;
    puVar6 = PTR_DAT_0002b4cc + -0x5a54;
LAB_00015320:
    uVar8 = 0xffffffd1;
    (*(code *)PTR_rts_log_0002b548)(4,puVar6,puVar1 + -0x5650,uVar7,uVar9);
  }
  (*(code *)PTR_close_0002b4e4)(iVar3);
LAB_000153b0:
  (*(code *)PTR_rts_free_0002b508)(piVar2);
  return uVar8;
}



// ==== rts_reg_close @ 000153f0 size=204

undefined4 rts_reg_close(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == (int *)0x0) || (param_1 != (int *)param_1[4])) {
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x5660,0x2e1);
    uVar1 = 0xfffffff6;
  }
  else {
    param_1[4] = 0;
    iVar2 = param_1[3];
    iVar3 = param_1[2];
    iVar4 = *param_1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = -1;
    if ((iVar2 != 0) && (iVar3 != 0)) {
      (*(code *)PTR_munmap_0002b5b0)();
    }
    if (-1 < iVar4) {
      (*(code *)PTR_close_0002b4e4)(iVar4);
    }
    (*(code *)PTR_rts_free_0002b508)(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_reg_mjpg_reset @ 00015504 size=136

undefined4 rts_reg_mjpg_reset(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (param_1 != (int *)param_1[4])) {
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x5674,0x30c);
    uVar1 = 0xfffffff6;
  }
  else if (*param_1 < 0) {
    uVar1 = 0xffffffe6;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(*param_1,0x20006a03);
    uVar1 = 0xffffffd1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== rts_reg_read_reg @ 0001558c size=272

undefined4 rts_reg_read_reg(int *param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (param_1 != (int *)param_1[4])) {
    uVar2 = 799;
    puVar1 = PTR_DAT_0002b4cc + -0x59c8;
  }
  else {
    if (0 < *param_1) {
      if ((uint)param_1[2] < param_2) {
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x5990,PTR_DAT_0002b4cc + -0x5688,0x329,param_2);
        return 0;
      }
      if ((param_2 & 3) != 0) {
        (*(code *)PTR_rts_log_0002b548)
                  (3,PTR_DAT_0002b4cc + -0x596c,PTR_DAT_0002b4cc + -0x5688,0x32e);
      }
      return *(undefined4 *)(param_1[3] + (param_2 & 0xfffffffc));
    }
    uVar2 = 0x324;
    puVar1 = PTR_DAT_0002b4cc + -0x59a8;
  }
  (*(code *)PTR_rts_log_0002b548)(4,puVar1,PTR_DAT_0002b4cc + -0x5688,uVar2);
  return 0;
}



// ==== rts_reg_write_reg @ 0001569c size=292

void rts_reg_write_reg(int *param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (param_1 != (int *)param_1[4])) {
    uVar2 = 0x33a;
    puVar1 = PTR_DAT_0002b4cc + -0x59c8;
  }
  else {
    uVar2 = 0x33f;
    if (0 < *param_1) {
      if ((uint)param_1[2] < param_2) {
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x5990,PTR_DAT_0002b4cc + -0x569c,0x344,param_2);
      }
      else {
        if ((param_2 & 3) != 0) {
          (*(code *)PTR_rts_log_0002b548)
                    (3,PTR_DAT_0002b4cc + -0x596c,PTR_DAT_0002b4cc + -0x569c,0x349);
        }
        *(undefined4 *)(param_1[3] + (param_2 & 0xfffffffc)) = param_3;
      }
      return;
    }
    puVar1 = PTR_DAT_0002b4cc + -0x59a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00015724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_log_0002b548)(4,puVar1,PTR_DAT_0002b4cc + -0x569c,uVar2);
  return;
}



// ==== rts_reg_set_reg_bit @ 000157c0 size=308

void rts_reg_set_reg_bit(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_1 == *(int *)(param_1 + 0x10))) {
    if (*(uint *)(param_1 + 8) < param_2) {
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x5990,PTR_DAT_0002b4cc + -0x56b0,0x35b,param_2);
    }
    else {
      if ((param_3 & 0xff) < 0x20) {
        uVar1 = (*(code *)PTR_rts_reg_read_reg_0002b57c)();
                    /* WARNING: Could not recover jumptable at 0x000158ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_rts_reg_write_reg_0002b5d8)(param_1,param_2,uVar1 | 1 << (param_3 & 0x1f));
        return;
      }
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x594c,PTR_DAT_0002b4cc + -0x56b0,0x361,param_3 & 0xff,
                 PTR_DAT_0002b4cc + -0x56b0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00015828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x56b0,0x356);
  return;
}



// ==== rts_reg_clr_reg_bit @ 000158f4 size=312

void rts_reg_clr_reg_bit(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_1 == *(int *)(param_1 + 0x10))) {
    if (*(uint *)(param_1 + 8) < param_2) {
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x5990,PTR_DAT_0002b4cc + -0x56c4,0x376,param_2);
    }
    else {
      if ((param_3 & 0xff) < 0x20) {
        uVar1 = (*(code *)PTR_rts_reg_read_reg_0002b57c)();
                    /* WARNING: Could not recover jumptable at 0x00015a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_rts_reg_write_reg_0002b5d8)(param_1,param_2,uVar1 & ~(1 << (param_3 & 0x1f)));
        return;
      }
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x594c,PTR_DAT_0002b4cc + -0x56c4,0x37c,param_3 & 0xff,
                 PTR_DAT_0002b4cc + -0x56c4);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x56c4,0x371);
  return;
}



// ==== rts_reg_get_handle @ 00015a2c size=96

undefined4 rts_reg_get_handle(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1 != (undefined4 *)param_1[4])) {
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x56d8,0x38a);
    uVar1 = 0xfffffff6;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



// ==== rts_reg_get_size @ 00015a8c size=96

undefined4 rts_reg_get_size(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_1 != *(int *)(param_1 + 0x10))) {
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x56ec,0x396);
    uVar1 = 0xfffffff6;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



// ==== rts_upload_fw @ 00015aec size=228

undefined4 rts_upload_fw(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int unaff_s1;
  int local_18;
  int local_14;
  
  if (param_2 == 0) {
    uVar4 = 0x3a3;
    puVar3 = PTR_DAT_0002b4cc + -0x5924;
    param_1 = unaff_s1;
  }
  else {
    if (param_1 != 0) goto LAB_00015b5c;
    uVar4 = 0x3a4;
    puVar3 = PTR_DAT_0002b4cc + -0x5920;
  }
  (*(code *)PTR___assert_0002b4f8)
            (puVar3,PTR_DAT_0002b4cc + -0x5bb4,uVar4,PTR_DAT_0002b4cc + -0x56fc);
LAB_00015b5c:
  iVar1 = (*(code *)PTR_rts_isp_soc_open_0002b55c)(0x82);
  if (iVar1 < 0) {
    uVar4 = 0xffffffe8;
  }
  else {
    local_18 = param_1;
    local_14 = param_2;
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0x80087342,&local_18);
    (*(code *)PTR_rts_isp_soc_close_0002b5a4)(iVar1);
    uVar4 = 0xffffffd1;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// ==== rts_get_fw_size @ 00015bd0 size=152

undefined4 rts_get_fw_size(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_18 [3];
  
  local_18[0] = 0;
  iVar1 = (*(code *)PTR_rts_isp_soc_open_0002b55c)(0x82);
  if (iVar1 < 0) {
    local_18[0] = 0xffffffe8;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0x40047344,local_18);
    (*(code *)PTR_rts_isp_soc_close_0002b5a4)(iVar1);
    if (iVar2 != 0) {
      local_18[0] = 0xffffffd1;
    }
  }
  return local_18[0];
}



// ==== rts_dump_fw @ 00015c68 size=228

undefined4 rts_dump_fw(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int unaff_s1;
  int local_18;
  int local_14;
  
  if (param_2 == 0) {
    uVar4 = 0x3cf;
    puVar3 = PTR_DAT_0002b4cc + -0x5924;
    param_1 = unaff_s1;
  }
  else {
    if (param_1 != 0) goto LAB_00015cd8;
    uVar4 = 0x3d0;
    puVar3 = PTR_DAT_0002b4cc + -0x5920;
  }
  (*(code *)PTR___assert_0002b4f8)
            (puVar3,PTR_DAT_0002b4cc + -0x5bb4,uVar4,PTR_DAT_0002b4cc + -0x5708);
LAB_00015cd8:
  iVar1 = (*(code *)PTR_rts_isp_soc_open_0002b55c)(0x82);
  if (iVar1 < 0) {
    uVar4 = 0xffffffe8;
  }
  else {
    local_18 = param_1;
    local_14 = param_2;
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0xc0087343,&local_18);
    (*(code *)PTR_rts_isp_soc_close_0002b5a4)(iVar1);
    uVar4 = 0xffffffd1;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// ==== rts_load_fw @ 00015d4c size=140

undefined4 rts_load_fw(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [8];
  
  local_10[0] = 0x31;
  iVar1 = (*(code *)PTR_fopen_0002b53c)(PTR_DAT_0002b4cc + -0x5914,PTR_DAT_0002b4cc + -0x58e8);
  if (iVar1 == 0) {
    uVar2 = 0xffffffe8;
  }
  else {
    (*(code *)PTR_fwrite_0002b50c)(local_10,1,1,iVar1);
    (*(code *)PTR_fclose_0002b528)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== rts_isp_get_video_phy_addr @ 00015dd8 size=84

undefined4 rts_isp_get_video_phy_addr(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [3];
  
  if (param_1 < 0) {
    uVar2 = 0;
  }
  else {
    local_10[0] = param_2;
    iVar1 = (*(code *)PTR_ioctl_0002b5d4)(param_1,0xc0047202,local_10);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = local_10[0];
    }
  }
  return uVar2;
}



// ==== rts_wq_lock_allocation @ 00015e2c size=40

void rts_wq_lock_allocation(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00015e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0002b4c8 + 0x3cb4))(0x80046c01,param_1);
  return;
}



// ==== rts_wq_lock_deallocate @ 00015e54 size=40

void rts_wq_lock_deallocate(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00015e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0002b4c8 + 0x3cb4))(0x80046c02,param_1);
  return;
}



// ==== rts_wq_lock_init @ 00015e7c size=244

undefined4 rts_wq_lock_init(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5d24,0x82);
  if (iVar1 < 0) {
    uVar5 = 0xffffffe8;
  }
  else {
    local_18 = param_1;
    local_14 = param_2;
    iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0x80086c03,&local_18);
    uVar5 = 0;
    if (iVar2 != 0) {
      uVar5 = 0xffffffd1;
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      uVar4 = (*(code *)PTR_strerror_0002b5c8)(*puVar3);
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x58e4,PTR_DAT_0002b4cc + -0x5730,0x445,param_2,uVar4);
    }
    (*(code *)PTR_close_0002b4e4)(iVar1);
  }
  return uVar5;
}



// ==== rts_wq_lock_set_name @ 00015f70 size=276

undefined4 rts_wq_lock_set_name(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined1 auStack_24 [20];
  
  if (param_2 == 0) {
    uVar5 = 0xfffffff6;
  }
  else {
    iVar1 = (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5d24,0x82);
    if (iVar1 < 0) {
      uVar5 = 0xffffffe8;
    }
    else {
      local_28 = param_1;
      (*(code *)PTR_strncpy_0002b560)(auStack_24,param_2,0xf);
      iVar2 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0x80146c06,&local_28);
      uVar5 = 0;
      if (iVar2 != 0) {
        uVar5 = 0xffffffd1;
        puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
        uVar4 = (*(code *)PTR_strerror_0002b5c8)(*puVar3);
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x58bc,PTR_DAT_0002b4cc + -0x5748,0x460,param_2,uVar4);
      }
      (*(code *)PTR_close_0002b4e4)(iVar1);
    }
  }
  return uVar5;
}



// ==== rts_wq_lock_wait @ 00016084 size=40

void rts_wq_lock_wait(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000160a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0002b4c8 + 0x3cb4))(0x80046c04,param_1);
  return;
}



// ==== rts_wq_lock_post @ 000160ac size=40

void rts_wq_lock_post(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000160cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_0002b4c8 + 0x3cb4))(0x80046c05,param_1);
  return;
}



// ==== rts_isp_check_dma_buffer @ 000160d4 size=48

bool rts_isp_check_dma_buffer(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    bVar1 = param_1[2] != 0;
  }
  return bVar1;
}



// ==== rts_reg_osd2_open @ 00016104 size=532

undefined4 rts_reg_osd2_open(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_20;
  int local_1c [2];
  
  if (param_1 == (int *)0x0) {
    return 0xfffffff6;
  }
  piVar1 = (int *)(*(code *)PTR_calloc_0002b574)(1,0x14);
  puVar5 = PTR_DAT_0002b4cc;
  if (piVar1 == (int *)0x0) {
    return 0xfffffff5;
  }
  iVar2 = (*(code *)PTR_open_0002b4fc)(PTR_DAT_0002b4cc + -0x5898,0x82);
  if (iVar2 < 0) {
    uVar7 = 0xffffffe8;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x5888,PTR_DAT_0002b4cc + -0x575c,0x48f,puVar5 + -0x5898);
    goto LAB_000162dc;
  }
  iVar3 = (*(code *)PTR_ioctl_0002b5d4)(iVar2,0x40046f01,local_1c);
  if (iVar3 == 0) {
    iVar3 = (*(code *)PTR_ioctl_0002b5d4)(iVar2,0x40046f02,&local_20);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      uVar6 = 0x49c;
      uVar8 = *puVar4;
      puVar5 = PTR_DAT_0002b4cc + -0x5834;
      goto LAB_00016244;
    }
    iVar3 = (*(code *)(PTR_0002b4c8 + 0x3c08))(local_1c[0],local_20);
    if (iVar3 != 0) {
      piVar1[3] = iVar3;
      piVar1[1] = local_1c[0];
      *piVar1 = iVar2;
      piVar1[2] = local_20;
      piVar1[4] = (int)piVar1;
      *param_1 = (int)piVar1;
      return 0;
    }
    uVar7 = 0xffffffce;
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x5804,PTR_DAT_0002b4cc + -0x575c,0x4a2);
  }
  else {
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
    uVar6 = 0x496;
    uVar8 = *puVar4;
    puVar5 = PTR_DAT_0002b4cc + -0x5864;
LAB_00016244:
    uVar7 = 0xffffffd1;
    (*(code *)PTR_rts_log_0002b548)(4,puVar5,PTR_DAT_0002b4cc + -0x575c,uVar6,uVar8);
  }
  if (iVar2 != 0) {
    (*(code *)PTR_close_0002b4e4)(iVar2);
  }
LAB_000162dc:
  (*(code *)PTR_free_0002b4e0)(piVar1);
  return uVar7;
}



// ==== rts_isp_pause @ 00016330 size=36

void rts_isp_pause(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0x20007360,0);
  return;
}



// ==== rts_isp_resume @ 00016354 size=36

void rts_isp_resume(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00016370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0x20007361,0);
  return;
}



// ==== rts_reg_h264_done @ 00016378 size=96

void rts_reg_h264_done(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1 == (int *)param_1[4])) && (-1 < *param_1)) {
                    /* WARNING: Could not recover jumptable at 0x000163d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_ioctl_0002b5d4)(*param_1,0x20006809);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000163c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x5770,0x4d0);
  return;
}



// ==== rts_reg_mjpg_done @ 000163d8 size=96

void rts_reg_mjpg_done(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1 == (int *)param_1[4])) && (-1 < *param_1)) {
                    /* WARNING: Could not recover jumptable at 0x00016430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_ioctl_0002b5d4)(*param_1,0x20006a04);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00016420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x5784,0x4dc);
  return;
}



// ==== rts_reg_osd2_done @ 00016438 size=96

void rts_reg_osd2_done(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1 == (int *)param_1[4])) && (-1 < *param_1)) {
                    /* WARNING: Could not recover jumptable at 0x00016490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_ioctl_0002b5d4)(*param_1,0x20006f03);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00016480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x5798,0x4e8);
  return;
}



// ==== rts_reg_handle_sigio @ 00016498 size=324

undefined4 rts_reg_handle_sigio(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = (*(code *)PTR_syscall_0002b5b4)(0x107e);
  if (*(int *)(PTR_DAT_0002b4bc + -0x4a00) == 0) {
    *(undefined4 *)(PTR_DAT_0002b4bc + -0x4a00) = 1;
    local_2c = PTR_0002b4c8 + 0x3c00;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_30 = 0x10000000;
    (*(code *)PTR_sigaction_0002b554)(0x16,&local_30,0);
  }
  if (((param_1 == (int *)0x0) || (param_1 != (int *)param_1[4])) || (iVar3 = *param_1, iVar3 < 0))
  {
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x59c8,PTR_DAT_0002b4cc + -0x57b0,0x506);
    uVar1 = 0xfffffff6;
  }
  else {
    (*(code *)PTR_fcntl_0002b4ec)(iVar3,0x18,uVar1);
    uVar2 = (*(code *)PTR_fcntl_0002b4ec)(iVar3,3);
    (*(code *)PTR_fcntl_0002b4ec)(iVar3,4,2);
    (*(code *)PTR_fcntl_0002b4ec)(iVar3,4,uVar2 | 0x1000);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_isp_get_hz @ 000165dc size=140

undefined4 rts_isp_get_hz(void)

{
  int iVar1;
  undefined4 local_10 [2];
  
  local_10[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_0002b53c)(PTR_DAT_0002b4cc + -0x57e8,PTR_DAT_0002b4cc + -0x57c0);
  if (iVar1 == 0) {
    local_10[0] = 0xffffffff;
  }
  else {
    (*(code *)PTR_fscanf_0002b59c)(iVar1,PTR_DAT_0002b4cc + -0x57bc,local_10);
    (*(code *)PTR_fclose_0002b528)(iVar1);
  }
  return local_10[0];
}



// ==== rts_isp_enable_ldc @ 00016670 size=184

undefined4 rts_isp_enable_ldc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_10;
  int local_c;
  
  if (*(ushort *)PTR_rts_hw_id_0002b58c < 3) {
    uVar3 = 0xffffffeb;
    if ((param_2 != 0) && (param_3 != 0)) {
      local_10 = param_3;
      local_c = param_2;
      iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0x8008733c,&local_10);
      uVar3 = 0;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x5540,PTR_DAT_0002b4cc + -0x5454,0x25,*puVar2);
        uVar3 = 0xffffffd1;
      }
    }
  }
  else {
    uVar3 = 0xffffffe3;
  }
  return uVar3;
}



// ==== rts_isp_disable_ldc @ 00016728 size=156

undefined4 rts_isp_disable_ldc(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*(ushort *)PTR_rts_hw_id_0002b58c < 3) {
    iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0x2000733d,0);
    uVar3 = 0;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x5518,PTR_DAT_0002b4cc + -0x5468,0x35,*puVar2);
      uVar3 = 0xffffffd1;
    }
  }
  else {
    uVar3 = 0xffffffe3;
  }
  return uVar3;
}



// ==== rts_isp_get_ldc_state @ 000167c4 size=156

undefined4 rts_isp_get_ldc_state(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  if (*(ushort *)PTR_rts_hw_id_0002b58c < 3) {
    iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0x4004733e,local_10);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x54f0,PTR_DAT_0002b4cc + -0x5480,0x46,*puVar2);
      local_10[0] = 0;
    }
  }
  else {
    local_10[0] = 0xffffffe3;
  }
  return local_10[0];
}



// ==== rts_isp_get_ldc @ 00016860 size=64

uint rts_isp_get_ldc(undefined4 param_1)

{
  uint uVar1;
  uint local_10 [3];
  
  uVar1 = (*(code *)PTR_rts_isp_get_isp_func_0002b5c4)(param_1,local_10);
  if (uVar1 == 0) {
    uVar1 = local_10[0] >> 1 & 1;
  }
  return uVar1;
}



// ==== rts_isp_set_ldc @ 000168a0 size=280

int rts_isp_set_ldc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte local_20 [12];
  
  iVar1 = (*(code *)PTR_rts_isp_get_ldc_0002b500)();
  if (iVar1 < 0) {
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x54c8,PTR_DAT_0002b4cc + -0x5490,0x71,iVar1);
    iVar2 = iVar1;
  }
  else if (((iVar1 == 0) || (iVar2 = 0, param_2 == 0)) && (iVar2 = 0, iVar1 != 0 || param_2 != 0)) {
    (*(code *)PTR_rts_isp_pause_0002b564)(param_1);
    iVar2 = (*(code *)PTR_rts_isp_get_isp_func_0002b5c4)(param_1,local_20);
    if (iVar2 == 0) {
      if (param_2 == 0) {
        local_20[0] = local_20[0] & 0xfd;
      }
      else {
        local_20[0] = local_20[0] | 2;
      }
      iVar2 = (*(code *)PTR_rts_isp_set_isp_func_0002b4dc)(param_1,local_20);
    }
    (*(code *)PTR_rts_isp_resume_0002b5cc)(param_1);
  }
  return iVar2;
}



// ==== rts_isp_release_grid_bitmap @ 000169c0 size=84

void rts_isp_release_grid_bitmap(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[1] != 0) {
      (*(code *)PTR_rts_free_0002b508)();
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}



// ==== rts_isp_init_grid_bitmap @ 00016a14 size=312

undefined4 rts_isp_init_grid_bitmap(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_s1;
  uint uVar5;
  
  puVar1 = PTR_DAT_0002b4cc;
  if (param_1 == (int *)0x0) {
    piVar4 = (int *)(PTR_DAT_0002b4cc + -0x5440);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5244,0x13,piVar4);
    uVar3 = 0x13;
    param_2 = unaff_s1;
  }
  else {
    piVar4 = param_1;
    if (param_2 != 0) goto LAB_00016adc;
    piVar4 = (int *)(PTR_DAT_0002b4cc + -0x53d4);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5244,0x14,piVar4);
    uVar3 = 0x14;
  }
  param_1 = piVar4;
  (*(code *)PTR___assert_0002b4f8)
            (piVar4,PTR_DAT_0002b4cc + -0x5438,uVar3,PTR_DAT_0002b4cc + -0x5260);
LAB_00016adc:
  if (param_1[1] != 0) {
    (*(code *)PTR_rts_isp_release_grid_bitmap_0002b558)();
  }
  uVar5 = param_2 + 7U >> 3;
  iVar2 = (*(code *)PTR___rts_calloc_0002b5a8)(1,uVar5,puVar1 + -0x5244,0x1b);
  piVar4[1] = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0xfffffff5;
  }
  else {
    piVar4[2] = uVar5;
    uVar3 = 0;
    *piVar4 = param_2;
  }
  return uVar3;
}



// ==== rts_isp_check_grid @ 00016b4c size=48

undefined4 rts_isp_check_grid(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0xffffffcf;
    if ((uint)(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10)) <= param_2) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xfffffff6;
}



// ==== rts_isp_check_grid_bitmap @ 00016b7c size=112

undefined4 rts_isp_check_grid_bitmap(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffff6;
  }
  uVar2 = *param_1;
  if (uVar2 <= param_2) {
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      if (uVar2 + 7 >> 3 <= param_1[2]) {
        uVar1 = 0xffffffee;
        if (uVar2 != 0) {
          uVar1 = 0;
        }
        return uVar1;
      }
      return 0xffffffdc;
    }
    return 0xffffffe1;
  }
  return 0xffffffcf;
}



// ==== rts_isp_check_rect @ 00016bec size=68

undefined4 rts_isp_check_rect(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffff6;
  }
  if (*param_1 <= param_1[2]) {
    uVar1 = 0xffffffeb;
    if (param_1[1] <= param_1[3]) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_isp_transfer_grid_bitmap @ 00016c30 size=376

int rts_isp_transfer_grid_bitmap
              (undefined4 param_1,undefined1 param_2,undefined2 param_3,int *param_4,
              undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint local_28;
  undefined2 *local_24;
  
  iVar2 = (*(code *)PTR_rts_isp_get_cmd_data_limit_0002b5c0)(param_3);
  iVar3 = (*(code *)PTR_rts_isp_check_grid_bitmap_0002b5ac)(param_4,param_5);
  if (iVar3 == 0) {
    uVar8 = iVar2 * 8;
    local_28 = (*param_4 + -1 + uVar8) / uVar8;
    if (uVar8 == 0) {
      trap(0x1c00);
    }
    puVar4 = (undefined2 *)
             (*(code *)PTR___rts_calloc_0002b5a8)(local_28,0xc,PTR_DAT_0002b4cc + -0x5280,0x6b);
    if (puVar4 == (undefined2 *)0x0) {
      iVar3 = -0xb;
    }
    else {
      iVar3 = param_4[1];
      uVar7 = 0;
      iVar2 = 0;
      puVar9 = puVar4;
      while (bVar1 = uVar7 != local_28, uVar7 = uVar7 + 1, bVar1) {
        iVar5 = *param_4;
        puVar9[3] = (short)iVar2;
        *(int *)(puVar9 + 4) = iVar3;
        uVar6 = iVar5 - iVar2;
        if (uVar8 < (uint)(iVar5 - iVar2)) {
          uVar6 = uVar8;
        }
        *puVar9 = param_3;
        iVar5 = uVar6 + 0xe;
        if (-1 < (int)(uVar6 + 7)) {
          iVar5 = uVar6 + 7;
        }
        iVar2 = iVar2 + uVar6;
        *(undefined1 *)(puVar9 + 1) = param_2;
        *(char *)((int)puVar9 + 3) = (char)(iVar5 >> 3);
        puVar9[2] = (short)uVar6;
        iVar3 = iVar3 + (iVar5 >> 3 & 0xffU);
        puVar9 = puVar9 + 6;
      }
      local_24 = puVar4;
      iVar3 = (*(code *)PTR_rts_isp_exec_ext_cmds_0002b4f4)(param_1,&local_28);
      (*(code *)PTR_rts_free_0002b508)(puVar4);
    }
  }
  return iVar3;
}



// ==== rts_isp_cvrt_grid_to_bytes @ 00016da8 size=376

void rts_isp_cvrt_grid_to_bytes(undefined4 *param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_DAT_0002b4cc + -0x53d0);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x529c,0x8e,param_1);
    uVar1 = 0x8e;
    param_2 = PTR_DAT_0002b4cc + -0x5438;
  }
  else {
    uVar1 = (uint)(param_3 < 10);
    if (param_2 != (undefined *)0x0) goto LAB_00016e64;
    param_1 = (undefined4 *)(PTR_DAT_0002b4cc + -0x53c8);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x529c,0x8f,param_1);
    uVar1 = 0x8f;
    param_2 = PTR_DAT_0002b4cc + -0x5438;
  }
  while( true ) {
    (*(code *)PTR___assert_0002b4f8)();
LAB_00016e64:
    if (uVar1 == 0) break;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x529c,0x90,
               PTR_DAT_0002b4cc + -0x53c0);
    uVar1 = 0x90;
    param_1 = (undefined4 *)(PTR_DAT_0002b4cc + -0x53a4);
    param_2 = PTR_DAT_0002b4cc + -0x5438;
  }
  *param_2 = (char)*param_1;
  param_2[1] = (char)((uint)*param_1 >> 8);
  param_2[2] = (char)param_1[1];
  param_2[3] = (char)((uint)param_1[1] >> 8);
  param_2[4] = (char)param_1[2];
  param_2[5] = (char)((uint)param_1[2] >> 8);
  param_2[6] = (char)param_1[3];
  param_2[7] = (char)((uint)param_1[3] >> 8);
  param_2[8] = (char)param_1[4];
  param_2[9] = (char)param_1[5];
  return;
}



// ==== rts_isp_cvrt_bytes_to_grid @ 00016f20 size=392

void rts_isp_cvrt_bytes_to_grid(short *param_1,uint param_2,int *param_3)

{
  undefined *puVar1;
  
  if (param_3 == (int *)0x0) {
    param_1 = (short *)(PTR_DAT_0002b4cc + -0x53d0);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x52d4,0xa1,param_1);
    param_3 = (int *)&DAT_000000a1;
    puVar1 = PTR_DAT_0002b4cc + -0x5438;
  }
  else {
    puVar1 = (undefined *)(uint)(param_2 < 10);
    if (param_1 != (short *)0x0) goto LAB_00016fdc;
    param_1 = (short *)(PTR_DAT_0002b4cc + -0x53c8);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x52d4,0xa2,param_1);
    param_3 = (int *)0xa2;
    puVar1 = PTR_DAT_0002b4cc + -0x5438;
  }
  while( true ) {
    (*(code *)PTR___assert_0002b4f8)();
LAB_00016fdc:
    if (puVar1 == (undefined *)0x0) break;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x52d4,0xa3,
               PTR_DAT_0002b4cc + -0x53c0);
    param_3 = (int *)0xa3;
    param_1 = (short *)(PTR_DAT_0002b4cc + -0x53a4);
    puVar1 = PTR_DAT_0002b4cc + -0x5438;
  }
  *param_3 = (int)*param_1;
  param_3[1] = (int)param_1[1];
  param_3[2] = (uint)(ushort)param_1[2];
  param_3[3] = (uint)(ushort)param_1[3];
  param_3[4] = (uint)*(byte *)(param_1 + 4);
  param_3[5] = (uint)*(byte *)((int)param_1 + 9);
  return;
}



// ==== rts_isp_cvrt_rect_to_bytes @ 000170a8 size=360

void rts_isp_cvrt_rect_to_bytes(undefined4 *param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(PTR_DAT_0002b4cc + -0x5398);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x530c,0xb0,param_1);
    uVar1 = 0xb0;
    param_2 = PTR_DAT_0002b4cc + -0x5438;
  }
  else {
    uVar1 = (uint)(param_3 < 8);
    if (param_2 != (undefined *)0x0) goto LAB_00017164;
    param_1 = (undefined4 *)(PTR_DAT_0002b4cc + -0x53c8);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x530c,0xb1,param_1);
    uVar1 = 0xb1;
    param_2 = PTR_DAT_0002b4cc + -0x5438;
  }
  while( true ) {
    (*(code *)PTR___assert_0002b4f8)();
LAB_00017164:
    if (uVar1 == 0) break;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x530c,0xb2,
               PTR_DAT_0002b4cc + -0x5390);
    uVar1 = 0xb2;
    param_1 = (undefined4 *)(PTR_DAT_0002b4cc + -0x5374);
    param_2 = PTR_DAT_0002b4cc + -0x5438;
  }
  *param_2 = (char)*param_1;
  param_2[1] = (char)((uint)*param_1 >> 8);
  param_2[2] = (char)param_1[1];
  param_2[3] = (char)((uint)param_1[1] >> 8);
  param_2[4] = (char)param_1[2];
  param_2[5] = (char)((uint)param_1[2] >> 8);
  param_2[6] = (char)param_1[3];
  param_2[7] = (char)((uint)param_1[3] >> 8);
  return;
}



// ==== rts_isp_cvrt_bytes_to_rect @ 00017210 size=392

void rts_isp_cvrt_bytes_to_rect(short *param_1,uint param_2,int *param_3)

{
  undefined *puVar1;
  
  if (param_3 == (int *)0x0) {
    param_1 = (short *)(PTR_DAT_0002b4cc + -0x5398);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5344,0xc1,param_1);
    param_3 = (int *)&DAT_000000c1;
    puVar1 = PTR_DAT_0002b4cc + -0x5438;
  }
  else {
    puVar1 = (undefined *)(uint)(param_2 < 8);
    if (param_1 != (short *)0x0) goto LAB_000172cc;
    param_1 = (short *)(PTR_DAT_0002b4cc + -0x53c8);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5344,0xc2,param_1);
    param_3 = (int *)0xc2;
    puVar1 = PTR_DAT_0002b4cc + -0x5438;
  }
  while( true ) {
    (*(code *)PTR___assert_0002b4f8)();
LAB_000172cc:
    if (puVar1 == (undefined *)0x0) break;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x5344,0xc3,
               PTR_DAT_0002b4cc + -0x5390);
    param_3 = (int *)0xc3;
    param_1 = (short *)(PTR_DAT_0002b4cc + -0x5374);
    puVar1 = PTR_DAT_0002b4cc + -0x5438;
  }
  *param_3 = (int)*param_1;
  param_3[1] = (int)param_1[1];
  param_3[2] = (int)param_1[2];
  param_3[3] = (int)param_1[3];
  return;
}



// ==== rts_isp_check_i2c_parm @ 000173a0 size=148

undefined4 rts_isp_check_i2c_parm(uint *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  
  uVar1 = 0xfffffff6;
  if (param_1 != (uint *)0x0) {
    uVar3 = *param_1;
    if (uVar3 < 2) {
      uVar3 = (uint)*(byte *)((int)param_1 + 5);
      if (uVar3 < 9) {
        return 0;
      }
      uVar1 = 0x14b;
      puVar2 = PTR_DAT_0002b4cc + -0x5200;
    }
    else {
      uVar1 = 0x145;
      puVar2 = PTR_DAT_0002b4cc + -0x5220;
    }
    (*(code *)PTR_rts_log_0002b548)(4,puVar2,PTR_DAT_0002b4cc + -0x4d28,uVar1,uVar3);
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}



// ==== rts_isp_get_cmd_data_limit @ 00017434 size=92

undefined4 rts_isp_get_cmd_data_limit(uint param_1)

{
  undefined4 uVar1;
  ushort local_10 [4];
  
  (*(code *)PTR_rts_get_hw_id_0002b590)(local_10);
  uVar1 = 0x20;
  if ((2 < local_10[0]) && (uVar1 = 0xc0, (param_1 & 0x80) == 0)) {
    uVar1 = 0x40;
  }
  return uVar1;
}



// ==== __rts_isp_exec_isp_cmd @ 00017490 size=244

undefined4
__rts_isp_exec_isp_cmd
          (int param_1,undefined2 param_2,undefined1 param_3,char param_4,undefined2 param_5,
          undefined2 param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 local_18;
  undefined1 local_16;
  char local_15;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  
  if (param_1 < 0) {
    uVar3 = 0xffffffe6;
  }
  else if ((param_4 == '\0') || (param_7 != 0)) {
    local_10 = param_7;
    local_14 = param_5;
    local_12 = param_6;
    local_18 = param_2;
    local_16 = param_3;
    local_15 = param_4;
    iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0xc0107331,&local_18);
    uVar3 = 0;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x51b8,PTR_DAT_0002b4cc + -0x4c94,0x3f,*puVar2);
      uVar3 = 0xffffffd1;
    }
  }
  else {
    (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x51d4,PTR_DAT_0002b4cc + -0x4c94,0x32);
    uVar3 = 0xfffffff6;
  }
  return uVar3;
}



// ==== __rts_isp_exec_ext_cmds @ 00017584 size=652

undefined4 __rts_isp_exec_ext_cmds(int param_1,int *param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined2 *puVar8;
  int local_18;
  undefined2 *local_14;
  
  puVar1 = PTR_DAT_0002b4cc;
  if (param_1 < 1) {
    piVar5 = (int *)(PTR_DAT_0002b4cc + -0x5190);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4cac,0x4c,piVar5);
    uVar4 = 0x4c;
    param_2 = (int *)(PTR_DAT_0002b4cc + -0x5188);
    piVar6 = piVar5;
  }
  else {
    piVar6 = param_2;
    if (param_2 != (int *)0x0) goto LAB_00017648;
    piVar5 = (int *)(PTR_DAT_0002b4cc + -0x5124);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4cac,0x4d,piVar5);
    uVar4 = 0x4d;
    param_2 = (int *)(PTR_DAT_0002b4cc + -0x5188);
    piVar6 = piVar5;
  }
  while( true ) {
    while( true ) {
      (*(code *)PTR___assert_0002b4f8)(piVar5,param_2,uVar4,PTR_DAT_0002b4cc + -0x4cc4);
LAB_00017648:
      if (*param_2 == 0) {
        (*(code *)PTR_rts_log_0002b548)
                  (4,PTR_DAT_0002b4cc + -0x6000,puVar1 + -0x4cac,0x4e,PTR_DAT_0002b4cc + -0x5118);
      }
      if (*piVar6 != 0) break;
      uVar4 = 0x4e;
      piVar5 = (int *)(PTR_DAT_0002b4cc + -0x5118);
      param_2 = (int *)(PTR_DAT_0002b4cc + -0x5188);
    }
    iVar7 = piVar6[1];
    if (iVar7 == 0) {
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x6000,puVar1 + -0x4cac,0x4f,PTR_DAT_0002b4cc + -0x5108);
      iVar7 = piVar6[1];
    }
    if (iVar7 != 0) break;
    uVar4 = 0x4f;
    piVar5 = (int *)(PTR_DAT_0002b4cc + -0x5108);
    param_2 = (int *)(PTR_DAT_0002b4cc + -0x5188);
  }
  local_18 = *piVar6;
  local_14 = (undefined2 *)(*(code *)PTR___rts_calloc_0002b5a8)(local_18,0x10,puVar1 + -0x4cac,0x52)
  ;
  if (local_14 == (undefined2 *)0x0) {
    uVar4 = 0xfffffff5;
  }
  else {
    puVar2 = local_14;
    for (iVar7 = 0; iVar7 != local_18; iVar7 = iVar7 + 1) {
      puVar8 = (undefined2 *)(piVar6[1] + iVar7 * 0xc);
      *puVar2 = *puVar8;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar8 + 1);
      *(undefined1 *)((int)puVar2 + 3) = *(undefined1 *)((int)puVar8 + 3);
      puVar2[2] = puVar8[2];
      puVar2[3] = puVar8[3];
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar8 + 4);
      puVar2 = puVar2 + 8;
    }
    iVar7 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0xc0087332,&local_18);
    if (local_14 != (undefined2 *)0x0) {
      (*(code *)PTR_rts_free_0002b508)();
    }
    local_14 = (undefined2 *)0x0;
    uVar4 = 0;
    if (iVar7 != 0) {
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      (*(code *)PTR_rts_log_0002b548)(4,PTR_DAT_0002b4cc + -0x50f8,puVar1 + -0x4cac,0x66,*puVar3);
      uVar4 = 0xffffffd1;
    }
  }
  return uVar4;
}



// ==== rts_isp_get_api_version @ 00017810 size=116

int rts_isp_get_api_version(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  
  if (param_2 == (undefined1 *)0x0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)PTR___rts_isp_exec_isp_cmd_0002b580)(param_1,0x18a,0,2,0,0,&local_10);
    if (iVar1 == 0) {
      *param_2 = local_10;
      param_2[1] = local_f;
    }
  }
  return iVar1;
}



// ==== rts_isp_check_api_version @ 00017884 size=720

undefined4 rts_isp_check_api_version(undefined4 param_1,uint param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_18;
  undefined1 local_17;
  
  param_2 = param_2 & 0xffff;
  local_18 = 1;
  local_17 = 0;
  (*(code *)PTR_rts_isp_get_api_version_0002b518)(param_1,&local_18);
  puVar2 = PTR_DAT_0002b4cc;
  if (param_2 == 0xa12) {
LAB_00017a98:
    uVar4 = 6;
    goto LAB_00017abc;
  }
  if (0xa12 < param_2) {
    if (param_2 < 0xa8f) {
      if (0xa88 < param_2) {
LAB_00017a90:
        uVar4 = 4;
        goto LAB_00017abc;
      }
      if (param_2 < 0xa1c) {
        if (param_2 < 0xa1a) {
          if (param_2 != 0xa15) {
            bVar1 = param_2 < 0xa18;
            if (0xa14 < param_2) goto LAB_00017a70;
            goto LAB_00017aa0;
          }
          goto LAB_00017aa8;
        }
      }
      else {
        if (param_2 == 0xa87) goto LAB_00017a80;
        if (0xa87 < param_2) goto LAB_00017ab8;
        if (param_2 < 0xa85) {
          uVar4 = 0;
          goto LAB_00017abc;
        }
      }
    }
    else {
      if (param_2 == 0xa95) {
LAB_00017aa8:
        uVar4 = 8;
        goto LAB_00017abc;
      }
      if (param_2 < 0xa96) {
        if (param_2 < 0xa93) {
          uVar4 = 6;
          goto LAB_00017abc;
        }
LAB_00017aa0:
        uVar4 = 7;
        goto LAB_00017abc;
      }
      uVar5 = 0xaaa;
      if (0xa9b < param_2) goto LAB_00017948;
      bVar1 = param_2 < 0xa98;
      if (param_2 < 0xa9a) {
LAB_00017a70:
        uVar4 = 9;
        if (bVar1) {
          uVar4 = 0;
        }
        goto LAB_00017abc;
      }
    }
LAB_00017ab0:
    uVar4 = 10;
    goto LAB_00017abc;
  }
  if (param_2 < 0x90a) {
    if (0x907 < param_2) {
LAB_00017a88:
      uVar4 = 2;
      goto LAB_00017abc;
    }
    if (param_2 == 0x605) goto LAB_00017ab8;
    if (param_2 < 0x606) {
      if (param_2 != 0x83) {
        if (0x83 < param_2) {
          uVar5 = 0x18e;
          if (param_2 == 0x18d) goto LAB_00017ab0;
          goto LAB_00017948;
        }
        if (param_2 != 3) {
          uVar4 = 0;
          goto LAB_00017abc;
        }
      }
LAB_00017a80:
      uVar4 = 1;
      goto LAB_00017abc;
    }
    if (0x70c < param_2) {
      uVar4 = param_2 - 0x78b;
      goto LAB_0001798c;
    }
    uVar5 = 0x685;
    if (0x70a < param_2) goto LAB_00017a88;
LAB_00017948:
    uVar4 = 0;
    if (param_2 != uVar5) goto LAB_00017abc;
  }
  else if (param_2 != 0xa08) {
    if (0xa08 < param_2) {
      if (param_2 != 0xa0e) {
        if (0xa0e < param_2) {
          if (0xa10 < param_2) {
            uVar4 = 0;
            goto LAB_00017abc;
          }
          goto LAB_00017a98;
        }
        if (0xa0a < param_2) {
          uVar4 = 0;
          goto LAB_00017abc;
        }
      }
      goto LAB_00017a90;
    }
    if (0xa06 < param_2) goto LAB_00017a80;
    uVar4 = 10;
    if (0xa04 < param_2) goto LAB_00017abc;
    uVar4 = param_2 - 0x988;
LAB_0001798c:
    if (1 < uVar4) {
      uVar4 = 0;
      goto LAB_00017abc;
    }
    goto LAB_00017a88;
  }
LAB_00017ab8:
  uVar4 = 0xb;
LAB_00017abc:
  uVar3 = 0;
  if ((int)((uint)CONCAT11(local_18,local_17) - (uVar4 | 0x100)) < 0) {
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x50cc,PTR_DAT_0002b4cc + -0x4ce0,0xe1,local_18,local_17,
               param_2);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x5090,puVar2 + -0x4ce0,0xe3,param_2,1,uVar4);
    uVar3 = 0xffffffe3;
  }
  return uVar3;
}



// ==== rts_isp_exec_isp_cmd @ 00017b54 size=212

void rts_isp_exec_isp_cmd
               (undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rts_isp_check_api_version_0002b510)(param_1,param_2);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00017bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___rts_isp_exec_isp_cmd_0002b580)(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



// ==== rts_isp_read_xmem @ 00017c28 size=228

int rts_isp_read_xmem(undefined4 param_1,ushort *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (*(code *)PTR_rts_isp_get_cmd_data_limit_0002b5c0)(0x81);
  if ((param_2 == (ushort *)0x0) || (*(int *)(param_2 + 2) == 0)) {
    iVar3 = -10;
  }
  else {
    for (iVar3 = 0; uVar4 = (uint)param_2[1] - iVar3, iVar3 < (int)(uint)param_2[1];
        iVar3 = iVar3 + uVar4) {
      if ((int)uVar1 < (int)uVar4) {
        uVar4 = uVar1;
      }
      iVar2 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)
                        (param_1,0x81,0,uVar4 & 0xff,0,iVar3 + (uint)*param_2 & 0xffff,
                         *(int *)(param_2 + 2) + iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



// ==== rts_isp_write_xmem @ 00017d0c size=228

int rts_isp_write_xmem(undefined4 param_1,ushort *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (*(code *)PTR_rts_isp_get_cmd_data_limit_0002b5c0)(1);
  if ((param_2 == (ushort *)0x0) || (*(int *)(param_2 + 2) == 0)) {
    iVar3 = -10;
  }
  else {
    for (iVar3 = 0; uVar4 = (uint)param_2[1] - iVar3, iVar3 < (int)(uint)param_2[1];
        iVar3 = iVar3 + uVar4) {
      if ((int)uVar1 < (int)uVar4) {
        uVar4 = uVar1;
      }
      iVar2 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)
                        (param_1,1,0,uVar4 & 0xff,0,iVar3 + (uint)*param_2 & 0xffff,
                         *(int *)(param_2 + 2) + iVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



// ==== rts_isp_read_i2c @ 00017df0 size=128

void rts_isp_read_i2c(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_0002b4c8 + 0x73a0))(param_2);
  if (iVar1 == 0) {
    (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)
              (param_1,0x82,*param_2,param_2[5],0,param_2[4],param_2 + 6);
  }
  return;
}



// ==== rts_isp_write_i2c @ 00017e70 size=192

int rts_isp_write_i2c(undefined4 param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (*(code *)(PTR_0002b4c8 + 0x73a0))(param_2);
  if (iVar2 == 0) {
    bVar1 = *(byte *)((int)param_2 + 5);
    if ((*param_2 == 1) && (4 < bVar1)) {
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x5058,PTR_DAT_0002b4cc + -0x4d3c,0x167,bVar1);
      iVar2 = -0x15;
    }
    else {
      iVar2 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)
                        (param_1,2,*param_2 & 0xff,bVar1,0,(char)param_2[1],(int)param_2 + 6);
    }
  }
  return iVar2;
}



// ==== rts_isp_read_sensor_reg @ 00017f30 size=136

undefined4 rts_isp_read_sensor_reg(undefined4 param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 != (undefined2 *)0x0) {
    bVar1 = *(byte *)(param_2 + 1);
    if (bVar1 == 0) {
      *(undefined1 *)(param_2 + 1) = 1;
      bVar1 = *(byte *)(param_2 + 1);
    }
    if (0x20 < bVar1) {
      *(undefined1 *)(param_2 + 1) = 0x20;
    }
    uVar2 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)
                      (param_1,0x83,0,*(undefined1 *)(param_2 + 1),0,*param_2,(int)param_2 + 3);
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== rts_isp_write_sensor_reg @ 00017fb8 size=136

undefined4 rts_isp_write_sensor_reg(undefined4 param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 != (undefined2 *)0x0) {
    bVar1 = *(byte *)(param_2 + 1);
    if (bVar1 == 0) {
      *(undefined1 *)(param_2 + 1) = 1;
      bVar1 = *(byte *)(param_2 + 1);
    }
    if (0x20 < bVar1) {
      *(undefined1 *)(param_2 + 1) = 0x20;
    }
    uVar2 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)
                      (param_1,3,0,*(undefined1 *)(param_2 + 1),0,*param_2,(int)param_2 + 3);
    return uVar2;
  }
  return 0xfffffff6;
}



// ==== rts_isp_get_snr_fmt @ 00018040 size=144

void rts_isp_get_snr_fmt(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  byte local_c;
  
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0x681,0,5,0,0,&local_10);
  if ((iVar1 == 0) && (param_2 != (uint *)0x0)) {
    *param_2 = (uint)CONCAT11(local_f,local_10);
    param_2[1] = (uint)CONCAT11(local_d,local_e);
    param_2[2] = (uint)local_c;
  }
  return;
}



// ==== rts_isp_get_scale_coeff @ 000180d0 size=136

void rts_isp_get_scale_coeff(undefined4 param_1,undefined1 param_2,uint *param_3)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0x682,param_2,4,0,0,&local_10);
  if ((iVar1 == 0) && (param_3 != (uint *)0x0)) {
    *param_3 = (uint)CONCAT11(local_f,local_10);
    param_3[1] = (uint)CONCAT11(local_d,local_e);
  }
  return;
}



// ==== rts_isp_get_zoom_start @ 00018158 size=136

void rts_isp_get_zoom_start(undefined4 param_1,undefined1 param_2,uint *param_3)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0x683,param_2,4,0,0,&local_10);
  if ((iVar1 == 0) && (param_3 != (uint *)0x0)) {
    *param_3 = (uint)CONCAT11(local_f,local_10);
    param_3[1] = (uint)CONCAT11(local_d,local_e);
  }
  return;
}



// ==== rts_isp_get_device_des @ 000181e0 size=168

void rts_isp_get_device_des(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0x181,0,8,0,0,&local_10);
  if ((iVar1 == 0) && (param_2 != (undefined1 *)0x0)) {
    *param_2 = local_10;
    param_2[1] = local_f;
    *(ushort *)(param_2 + 2) = CONCAT11(local_d,local_e);
    *(ushort *)(param_2 + 4) = CONCAT11(local_b,local_c);
    param_2[6] = local_a;
    param_2[7] = local_9;
  }
  return;
}



// ==== rts_isp_get_fw_version @ 00018288 size=432

int rts_isp_get_fw_version(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte abStack_1c [16];
  
  if (param_2 == (byte *)0x0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0x188,0,0x20,0,0,&local_30);
    if (iVar1 == 0) {
      param_2[1] = local_2f;
      *param_2 = local_30;
      *(uint *)(param_2 + 4) =
           (uint)local_2c << 8 | (uint)local_2d << 0x10 | (uint)local_2b | (uint)local_2e << 0x18;
      *(ushort *)(param_2 + 8) = CONCAT11(local_2a,local_29);
      *(ushort *)(param_2 + 10) = CONCAT11(local_28,local_27);
      *(ushort *)(param_2 + 0xc) = CONCAT11(local_26,local_25);
      if (local_30 >> 4 == 2) {
        pbVar2 = &local_20;
        uVar3 = 0x10;
        *(uint *)(param_2 + 0x10) = (uint)CONCAT11(local_24,local_23);
        *(uint *)(param_2 + 0x14) = (uint)CONCAT11(local_22,local_21);
      }
      else {
        if (local_30 >> 4 != 3) {
          return 0;
        }
        pbVar2 = abStack_1c;
        uVar3 = 0xc;
        *(uint *)(param_2 + 0x10) =
             (uint)local_22 << 8 | (uint)local_23 << 0x10 | (uint)local_21 | (uint)local_24 << 0x18;
        *(uint *)(param_2 + 0x14) =
             (uint)local_1e << 8 | (uint)local_1f << 0x10 | (uint)local_1d | (uint)local_20 << 0x18;
      }
      (*(code *)PTR_memcpy_0002b598)(param_2 + 0x18,pbVar2,uVar3);
    }
  }
  return iVar1;
}



// ==== rts_isp_exec_ext_cmds @ 00018438 size=428

void rts_isp_exec_ext_cmds(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 unaff_s2;
  uint uVar6;
  
  if (param_2 == (uint *)0x0) {
    puVar4 = (uint *)(PTR_DAT_0002b4cc + -0x5124);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4cf8,0xfc,puVar4);
    uVar3 = 0xfc;
    puVar2 = PTR_DAT_0002b4cc + -0x5188;
    param_2 = puVar4;
    param_1 = unaff_s2;
  }
  else {
    if (*param_2 == 0) {
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4cf8,0xfd,
                 PTR_DAT_0002b4cc + -0x5118);
    }
    if (*param_2 != 0) goto LAB_00018510;
    uVar3 = 0xfd;
    puVar4 = (uint *)(PTR_DAT_0002b4cc + -0x5118);
    puVar2 = PTR_DAT_0002b4cc + -0x5188;
  }
  while( true ) {
    (*(code *)PTR___assert_0002b4f8)(puVar4,puVar2,uVar3,PTR_DAT_0002b4cc + -0x4d10);
LAB_00018510:
    uVar6 = param_2[1];
    if (uVar6 == 0) {
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4cf8,0xfe,
                 PTR_DAT_0002b4cc + -0x5108);
      uVar6 = param_2[1];
    }
    uVar5 = 0;
    if (uVar6 != 0) break;
    uVar3 = 0xfe;
    puVar4 = (uint *)(PTR_DAT_0002b4cc + -0x5108);
    puVar2 = PTR_DAT_0002b4cc + -0x5188;
  }
  while( true ) {
    if (*param_2 <= uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000185c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___rts_isp_exec_ext_cmds_0002b4e8)(param_1,param_2);
      return;
    }
    iVar1 = (*(code *)PTR_rts_isp_check_api_version_0002b510)
                      (param_1,*(undefined2 *)(param_2[1] + uVar5 * 0xc));
    if (iVar1 != 0) break;
    uVar5 = uVar5 + 1;
  }
  return;
}



// ==== rts_isp_set_isp_func @ 000185e4 size=84

undefined4 rts_isp_set_isp_func(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa01,0,1,0,0,param_2);
    return uVar1;
  }
  return 0xfffffff6;
}



// ==== rts_isp_get_isp_func @ 00018638 size=84

undefined4 rts_isp_get_isp_func(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa81,0,1,0,0,param_2);
    return uVar1;
  }
  return 0xfffffff6;
}



// ==== rts_isp_set_dehaze @ 0001868c size=132

void rts_isp_set_dehaze(undefined4 param_1,int param_2)

{
  int iVar1;
  byte local_18 [8];
  
  iVar1 = (*(code *)PTR_rts_isp_get_isp_func_0002b5c4)(param_1,local_18);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      local_18[0] = local_18[0] & 0xfb;
    }
    else {
      local_18[0] = local_18[0] | 4;
    }
    (*(code *)PTR_rts_isp_set_isp_func_0002b4dc)(param_1,local_18);
  }
  return;
}



// ==== rts_isp_get_dehaze @ 00018710 size=72

byte rts_isp_get_dehaze(undefined4 param_1)

{
  int iVar1;
  byte bVar2;
  byte local_10 [12];
  
  iVar1 = (*(code *)PTR_rts_isp_get_isp_func_0002b5c4)(param_1,local_10);
  bVar2 = 0;
  if (iVar1 == 0) {
    bVar2 = local_10[0] >> 2 & 1;
  }
  return bVar2;
}



// ==== rts_isp_set_raw @ 00018758 size=88

undefined4 rts_isp_set_raw(undefined4 param_1,undefined1 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 5) {
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0x204,param_2,0,param_3,0,0);
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_isp_get_gray_mode @ 000187b0 size=108

int rts_isp_get_gray_mode(undefined4 param_1,uint *param_2)

{
  int iVar1;
  byte local_10 [8];
  
  if (param_2 == (uint *)0x0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa82,0,1,0,0,local_10);
    if (iVar1 == 0) {
      *param_2 = (uint)local_10[0];
    }
  }
  return iVar1;
}



// ==== rts_isp_set_gray_mode @ 0001881c size=100

undefined4 rts_isp_set_gray_mode(undefined4 param_1,byte param_2)

{
  undefined4 uVar1;
  byte local_10 [12];
  
  if (param_2 < 2) {
    local_10[0] = param_2;
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa02,0,1,0,0,local_10);
  }
  else {
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}



// ==== rts_isp_request_gpio @ 00018880 size=152

int rts_isp_request_gpio(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint local_10 [2];
  
  local_10[0] = param_2 & 0xff;
  if (local_10[0] < 8) {
    iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0xc0047350,local_10);
    iVar2 = 0;
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x5024,PTR_DAT_0002b4cc + -0x4d54,0x27a,local_10[0],iVar1);
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = -0x15;
  }
  return iVar2;
}



// ==== rts_isp_free_gpio @ 00018918 size=152

int rts_isp_free_gpio(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint local_10 [2];
  
  local_10[0] = param_2 & 0xff;
  if (local_10[0] < 8) {
    iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0xc0047351,local_10);
    iVar2 = 0;
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x4ff4,PTR_DAT_0002b4cc + -0x4d68,0x28b,local_10[0],iVar1);
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = -0x15;
  }
  return iVar2;
}



// ==== rts_isp_get_gpio_use_status @ 000189b0 size=124

int rts_isp_get_gpio_use_status(undefined4 param_1,byte param_2,uint *param_3)

{
  int iVar1;
  byte local_10 [8];
  
  if (param_3 == (uint *)0x0) {
    iVar1 = -10;
  }
  else if (param_2 < 8) {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xc81,param_2,1,0,0,local_10);
    if (iVar1 == 0) {
      *param_3 = (uint)local_10[0];
    }
  }
  else {
    iVar1 = -0x15;
  }
  return iVar1;
}



// ==== rts_isp_get_gpio_direction @ 00018a2c size=124

int rts_isp_get_gpio_direction(undefined4 param_1,byte param_2,uint *param_3)

{
  int iVar1;
  byte local_10 [8];
  
  if (param_3 == (uint *)0x0) {
    iVar1 = -10;
  }
  else if (param_2 < 8) {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xc82,param_2,1,0,0,local_10);
    if (iVar1 == 0) {
      *param_3 = (uint)local_10[0];
    }
  }
  else {
    iVar1 = -0x15;
  }
  return iVar1;
}



// ==== rts_isp_set_gpio_direction @ 00018aa8 size=112

undefined4 rts_isp_set_gpio_direction(undefined4 param_1,byte param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 local_10 [12];
  
  if ((param_2 < 8) && (param_3 < 2)) {
    local_10[0] = (undefined1)param_3;
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xc02,param_2,1,0,0,local_10);
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_isp_get_gpio_value @ 00018b18 size=124

int rts_isp_get_gpio_value(undefined4 param_1,byte param_2,uint *param_3)

{
  int iVar1;
  byte local_10 [8];
  
  if (param_3 == (uint *)0x0) {
    iVar1 = -10;
  }
  else if (param_2 < 8) {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xc83,param_2,1,0,0,local_10);
    if (iVar1 == 0) {
      *param_3 = (uint)local_10[0];
    }
  }
  else {
    iVar1 = -0x15;
  }
  return iVar1;
}



// ==== rts_isp_set_gpio_value @ 00018b94 size=112

undefined4 rts_isp_set_gpio_value(undefined4 param_1,byte param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 local_10 [12];
  
  if ((param_2 < 8) && (param_3 < 2)) {
    local_10[0] = (undefined1)param_3;
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xc03,param_2,1,0,0,local_10);
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_isp_get_streamid @ 00018c04 size=144

int rts_isp_get_streamid(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_10 [2];
  
  iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0x40047337,local_10);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x4fc8,PTR_DAT_0002b4cc + -0x4d80,0x2f8,*puVar2);
    local_10[0] = iVar1;
  }
  return local_10[0];
}



// ==== rts_isp_set_crop_window @ 00018c94 size=148

undefined4 rts_isp_set_crop_window(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_18 [8];
  
  if (param_3 != 0) {
    (*(code *)PTR_rts_isp_cvrt_rect_to_bytes_0002b568)(param_3,auStack_18,8);
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0x208,param_2,8,0,0,auStack_18);
    return uVar1;
  }
  return 0xfffffff6;
}



// ==== rts_isp_get_iq_table_attr @ 00018d28 size=144

void rts_isp_get_iq_table_attr(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  
  iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa83,0,5,0,0,&local_10);
  if ((iVar1 == 0) && (param_2 != (undefined1 *)0x0)) {
    *param_2 = local_10;
    *(ushort *)(param_2 + 2) = CONCAT11(local_e,local_f);
    *(ushort *)(param_2 + 4) = CONCAT11(local_c,local_d);
  }
  return;
}



// ==== rts_isp_set_wdr_mode @ 00018db8 size=76

void rts_isp_set_wdr_mode(undefined4 param_1,undefined1 param_2)

{
  undefined1 local_10 [12];
  
  local_10[0] = param_2;
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa05,0,1,0,0,local_10);
  return;
}



// ==== rts_isp_get_wdr_mode @ 00018e04 size=80

uint rts_isp_get_wdr_mode(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa85,0,1,0,0,local_10);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_set_wdr_level @ 00018e54 size=100

void rts_isp_set_wdr_level(undefined4 param_1,int param_2)

{
  undefined1 local_10 [12];
  
  if (param_2 < 0) {
    local_10[0] = 0;
  }
  else {
    if (100 < param_2) {
      param_2 = 100;
    }
    local_10[0] = (undefined1)param_2;
  }
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa06,0,1,0,0,local_10);
  return;
}



// ==== rts_isp_get_wdr_level @ 00018eb8 size=80

uint rts_isp_get_wdr_level(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa86,0,1,0,0,local_10);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_set_tpnr_level @ 00018f08 size=100

void rts_isp_set_tpnr_level(undefined4 param_1,int param_2)

{
  undefined1 local_10 [12];
  
  if (param_2 < 0) {
    local_10[0] = 0;
  }
  else {
    if (100 < param_2) {
      param_2 = 100;
    }
    local_10[0] = (undefined1)param_2;
  }
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa07,0,1,0,0,local_10);
  return;
}



// ==== rts_isp_get_tpnr_level @ 00018f6c size=80

uint rts_isp_get_tpnr_level(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa87,0,1,0,0,local_10);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_set_ir_mode @ 00018fbc size=76

void rts_isp_set_ir_mode(undefined4 param_1,undefined1 param_2)

{
  undefined1 local_10 [12];
  
  local_10[0] = param_2;
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa08,0,1,0,0,local_10);
  return;
}



// ==== rts_isp_get_ir_mode @ 00019008 size=80

uint rts_isp_get_ir_mode(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa88,0,1,0,0,local_10);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_set_in_out_door_mode @ 00019058 size=96

undefined4 rts_isp_set_in_out_door_mode(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 local_10 [12];
  
  if (param_2 < 3) {
    local_10[0] = (undefined1)param_2;
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa18,0,1,0,0,local_10);
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_isp_get_in_out_door_mode @ 000190b8 size=80

uint rts_isp_get_in_out_door_mode(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa98,0,1,0,0,local_10);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_get_stream_count @ 00019108 size=128

uint rts_isp_get_stream_count(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_18 [6];
  byte local_12;
  
  iVar1 = (*(code *)PTR_rts_isp_ctrl_open_0002b514)();
  if (iVar1 < 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_rts_isp_get_device_des_0002b5d0)(iVar1,auStack_18);
    (*(code *)PTR_rts_isp_ctrl_close_0002b5dc)(iVar1);
    uVar3 = (uint)local_12;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}



// ==== rts_isp_get_smart_ir_mode @ 00019188 size=80

uint rts_isp_get_smart_ir_mode(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa93,0,1,0,0,local_10);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_set_smart_ir_mode @ 000191d8 size=96

undefined4 rts_isp_set_smart_ir_mode(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 local_10 [12];
  
  if (param_2 < 5) {
    local_10[0] = (undefined1)param_2;
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa13,0,1,0,0,local_10);
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_isp_get_smart_ir_manual_level @ 00019238 size=80

uint rts_isp_get_smart_ir_manual_level(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa94,0,1,0,0,local_10);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_set_smart_ir_manual_level @ 00019288 size=96

undefined4 rts_isp_set_smart_ir_manual_level(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 local_10 [12];
  
  if (param_2 < 0x65) {
    local_10[0] = (undefined1)param_2;
    uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa14,0,1,0,0,local_10);
    return uVar1;
  }
  return 0xffffffeb;
}



// ==== rts_isp_set_dynamic_fps @ 000192e8 size=76

void rts_isp_set_dynamic_fps(undefined4 param_1,undefined1 param_2)

{
  undefined1 local_res4 [12];
  
  local_res4[0] = param_2;
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa15,0,1,0,0,local_res4);
  return;
}



// ==== rts_isp_get_dynamic_fps @ 00019334 size=80

uint rts_isp_get_dynamic_fps(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa95,0,1,0,0,local_10);
  if (uVar1 == 0) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_get_fov_mode @ 00019384 size=116

int rts_isp_get_fov_mode(undefined4 param_1,undefined1 param_2,uint *param_3)

{
  int iVar1;
  byte local_10 [8];
  
  if (param_3 == (uint *)0x0) {
    iVar1 = -10;
  }
  else {
    iVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa99,param_2,1,0,0,local_10);
    if (-1 < iVar1) {
      iVar1 = 0;
      *param_3 = (uint)local_10[0];
    }
  }
  return iVar1;
}



// ==== rts_isp_set_fov_mode @ 000193f8 size=96

void rts_isp_set_fov_mode(undefined4 param_1,undefined1 param_2,int param_3)

{
  bool local_10 [12];
  
  local_10[0] = param_3 != 0;
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa19,param_2,1,0,0,local_10);
  return;
}



// ==== rts_isp_set_noise_recuction_level @ 00019458 size=212

void rts_isp_set_noise_recuction_level(undefined4 param_1,char param_2)

{
  char *pcVar1;
  char local_res4 [12];
  
  local_res4[0] = param_2;
  if (6 < (byte)(param_2 - 1U)) {
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4da4,0x41d,
               PTR_DAT_0002b4cc + -0x4fa0);
  }
  pcVar1 = local_res4;
  if (6 < (byte)(local_res4[0] - 1U)) {
    (*(code *)PTR___assert_0002b4f8)
              (PTR_DAT_0002b4cc + -0x4fa0,PTR_DAT_0002b4cc + -0x5188,0x41d,
               PTR_DAT_0002b4cc + -0x4dc8);
  }
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa1a,0,1,0,0,pcVar1);
  return;
}



// ==== rts_isp_get_noise_recuction_level @ 0001952c size=160

void rts_isp_get_noise_recuction_level(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  code *pcVar2;
  
  pcVar2 = (code *)PTR_rts_isp_exec_isp_cmd_0002b5bc;
  if (param_2 == 0) {
    puVar1 = PTR_DAT_0002b4cc + -0x4f84;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4dec,0x426,puVar1);
    pcVar2 = (code *)PTR___assert_0002b4f8;
    (*(code *)PTR___assert_0002b4f8)
              (puVar1,PTR_DAT_0002b4cc + -0x5188,0x426,PTR_DAT_0002b4cc + -0x4e10);
  }
  (*pcVar2)();
  return;
}



// ==== rts_isp_set_detail_enhancement_level @ 000195cc size=212

void rts_isp_set_detail_enhancement_level(undefined4 param_1,char param_2)

{
  char *pcVar1;
  char local_res4 [12];
  
  local_res4[0] = param_2;
  if (6 < (byte)(param_2 - 1U)) {
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4e38,0x42f,
               PTR_DAT_0002b4cc + -0x4fa0);
  }
  pcVar1 = local_res4;
  if (6 < (byte)(local_res4[0] - 1U)) {
    (*(code *)PTR___assert_0002b4f8)
              (PTR_DAT_0002b4cc + -0x4fa0,PTR_DAT_0002b4cc + -0x5188,0x42f,
               PTR_DAT_0002b4cc + -0x4e60);
  }
  (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xa1b,0,1,0,0,pcVar1);
  return;
}



// ==== rts_isp_get_detail_enhancement_level @ 000196a0 size=160

void rts_isp_get_detail_enhancement_level(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  code *pcVar2;
  
  pcVar2 = (code *)PTR_rts_isp_exec_isp_cmd_0002b5bc;
  if (param_2 == 0) {
    puVar1 = PTR_DAT_0002b4cc + -0x4f84;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4e88,0x438,puVar1);
    pcVar2 = (code *)PTR___assert_0002b4f8;
    (*(code *)PTR___assert_0002b4f8)
              (puVar1,PTR_DAT_0002b4cc + -0x5188,0x438,PTR_DAT_0002b4cc + -0x4eb0);
  }
  (*pcVar2)();
  return;
}



// ==== rts_isp_get_color_range_desc @ 00019740 size=224

undefined4 rts_isp_get_color_range_desc(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte local_16;
  byte local_15;
  
  if (param_2 == (uint *)0x0) {
    param_2 = (uint *)(PTR_DAT_0002b4cc + -0x4f7c);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4ed0,0x443,param_2);
    (*(code *)PTR___assert_0002b4f8)
              (param_2,PTR_DAT_0002b4cc + -0x5188,0x443,PTR_DAT_0002b4cc + -0x4ef0);
  }
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)();
  iVar2 = (*(code *)PTR_RTS_IS_ERR_0002b51c)(uVar1);
  if (iVar2 == 0) {
    *param_2 = (uint)local_16;
    param_2[1] = (uint)local_15;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== rts_isp_cvrt_point_res @ 00019820 size=552

undefined4 rts_isp_cvrt_point_res(undefined4 param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined2 local_34;
  undefined2 local_32;
  undefined1 *local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 *local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  
  if (param_2 == (undefined4 *)0x0) {
    param_3 = (int *)(PTR_DAT_0002b4cc + -0x5b50);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4f08,0x459,param_3);
    uVar2 = 0x459;
    param_2 = (undefined4 *)(PTR_DAT_0002b4cc + -0x5188);
  }
  else {
    if (param_3 != (int *)0x0) goto LAB_000198e0;
    param_3 = (int *)(PTR_DAT_0002b4cc + -0x5bb8);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4f08,0x45a,param_3);
    uVar2 = 0x45a;
    param_2 = (undefined4 *)(PTR_DAT_0002b4cc + -0x5188);
  }
  while( true ) {
    param_4 = (int *)(PTR_DAT_0002b4cc + -0x4f20);
    (*(code *)PTR___assert_0002b4f8)(param_3,param_2,uVar2);
LAB_000198e0:
    if (param_4 != (int *)0x0) break;
    param_3 = (int *)(PTR_DAT_0002b4cc + -0x4f74);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x6000,PTR_DAT_0002b4cc + -0x4f08,0x45b,param_3);
    uVar2 = 0x45b;
    param_2 = (undefined4 *)(PTR_DAT_0002b4cc + -0x5188);
  }
  uVar2 = 0xffffffeb;
  if (0 < *param_4) {
    if (param_4[1] < 1) {
      uVar2 = 0xffffffeb;
    }
    else {
      local_14 = (undefined1)*param_4;
      local_38 = 0x605;
      local_35 = 6;
      local_13 = (undefined1)param_4[1];
      local_34 = (undefined2)param_2[2];
      local_2c = 0x685;
      local_18 = (undefined1)*param_2;
      local_29 = 4;
      local_17 = (undefined1)((uint)*param_2 >> 8);
      local_32 = (undefined2)param_2[3];
      local_30 = &local_18;
      local_28 = (undefined2)param_3[2];
      local_16 = (undefined1)param_2[1];
      local_20 = 2;
      local_1c = &local_38;
      local_15 = (undefined1)((uint)param_2[1] >> 8);
      local_36 = 0;
      local_2a = 0;
      local_26 = (undefined2)param_3[3];
      local_24 = local_30;
      uVar2 = (*(code *)PTR_rts_isp_exec_ext_cmds_0002b4f4)();
      iVar1 = (*(code *)PTR_RTS_IS_ERR_0002b51c)(uVar2);
      if (iVar1 == 0) {
        *param_3 = (int)CONCAT11(local_17,local_18);
        param_3[1] = (int)CONCAT11(local_15,local_16);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// ==== rts_isp_get_supported_snr_name @ 00019a48 size=164

undefined * rts_isp_get_supported_snr_name(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_0002b4bc + -0x49f0;
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0x18e,0,0x10,0,0,puVar3);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_0002b51c)(uVar1);
  if (iVar2 != 0) {
    puVar3 = (undefined *)0x0;
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x4f70,PTR_DAT_0002b4cc + -0x4f40,0x48b,uVar1);
  }
  return puVar3;
}



// ==== rts_isp_get_daynight_statis @ 00019aec size=80

uint rts_isp_get_daynight_statis(undefined4 param_1)

{
  uint uVar1;
  byte local_10 [12];
  
  uVar1 = (*(code *)PTR_rts_isp_exec_isp_cmd_0002b5bc)(param_1,0xaaa,0,1,0,0,local_10);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)local_10[0];
  }
  return uVar1;
}



// ==== rts_isp_enable_temporal_denoise @ 00019b40 size=136

undefined4 rts_isp_enable_temporal_denoise(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_res4 [3];
  
  local_res4[0] = param_2;
  iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0x8004733a,local_res4);
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x4c70,PTR_DAT_0002b4cc + -0x4bfc,0x1a,*puVar2);
    uVar3 = 0xffffffd1;
  }
  return uVar3;
}



// ==== rts_isp_get_temporal_denoise_state @ 00019bc8 size=132

undefined4 rts_isp_get_temporal_denoise_state(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = (*(code *)PTR_rts_exec_vendor_cmd_0002b538)(param_1,0x4004733b,local_10);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x4c48,PTR_DAT_0002b4cc + -0x4c20,0x28,*puVar2);
    local_10[0] = 0;
  }
  return local_10[0];
}



// ==== rts_get_hw_id @ 00019c50 size=328

undefined2 * rts_get_hw_id(undefined2 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  undefined2 local_20 [2];
  short local_1c;
  
  iVar1 = (*(code *)PTR_rts_isp_soc_open_0002b55c)(0x82);
  if (iVar1 < 0) {
    sVar5 = 0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
    uVar3 = (*(code *)PTR_strerror_0002b5c8)(*puVar2);
    (*(code *)PTR_rts_log_0002b548)
              (4,PTR_DAT_0002b4cc + -0x4bd0,PTR_DAT_0002b4cc + -0x4b80,0x28,uVar3);
    *param_1 = 0;
  }
  else {
    iVar4 = (*(code *)PTR_ioctl_0002b5d4)(iVar1,0x40087345,local_20);
    if (iVar4 == 0) {
      sVar5 = local_1c + 1;
      uVar6 = local_20[0];
    }
    else {
      sVar5 = 0;
      uVar6 = 0;
      puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0002b504)();
      uVar3 = (*(code *)PTR_strerror_0002b5c8)(*puVar2);
      (*(code *)PTR_rts_log_0002b548)
                (4,PTR_DAT_0002b4cc + -0x4bb0,PTR_DAT_0002b4cc + -0x4b80,0x31,uVar3);
    }
    (*(code *)PTR_rts_isp_soc_close_0002b5a4)(iVar1);
    *param_1 = uVar6;
  }
  param_1[1] = sVar5;
  return param_1;
}



