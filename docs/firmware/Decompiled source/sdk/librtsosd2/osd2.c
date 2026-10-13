/* librtsosd2 — "osd2" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsosd2.h"

// ==== osd2_alloc_dma @ 00011b14 size=196

undefined4 osd2_alloc_dma(undefined *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0x68;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_00027598 + 0x5d30;
  }
  else {
    uVar1 = 0x69;
    if (param_2 != (int *)0x0) goto LAB_00011b70;
    param_1 = PTR_00027598 + 0x5d94;
  }
  param_2 = (int *)(PTR_00027598 + 0x5d38);
  (*(code *)PTR___assert_000275b8)(param_1,param_2,uVar1,PTR_00027598 + 0x64d8);
LAB_00011b70:
  if (*(int *)(param_1 + 0x28c) == 0) {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x29c);
    if (0x1000U - iVar3 < (uint)param_2[1]) {
      uVar1 = 0xfffffff5;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x294);
      *param_2 = *(int *)(param_1 + 0x28c) + iVar3;
      uVar1 = 0;
      param_2[2] = iVar3 + iVar2;
      *(uint *)(param_1 + 0x29c) = (param_2[1] + 3U & 0xfffffffc) + iVar3;
    }
  }
  return uVar1;
}



// ==== osd2_encode_frame @ 0001383c size=268

int osd2_encode_frame(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    (*(code *)PTR___assert_000275b8)
              (PTR_00027598 + 0x5d30,PTR_00027598 + 0x5d38,0x438,PTR_00027598 + 0x62c4);
  }
  iVar1 = (*(code *)PTR___write_enable_blk_info_cmd_000275ac)();
  if (iVar1 < 0) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x603c,PTR_00027598 + 0x62b0,0x43c);
  }
  else {
    (*(code *)PTR_rts_osd2_set_register_000276c8)(*param_1,2,param_1[0x97]);
    (*(code *)PTR_osd2_ewl_start_hw_00027644)(*param_1);
    iVar2 = (*(code *)PTR_osd2_ewl_wait_hw_ready_00027610)(*param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6064,PTR_00027598 + 0x62b0,0x446,iVar2);
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



// ==== osd2_dump_register @ 00014304 size=304

undefined4 osd2_dump_register(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  puVar4 = PTR_00027598 + 0x6028;
  iVar3 = 0;
  do {
    uVar1 = (*(code *)PTR_osd2_ewl_read_reg_00027650)(param_1,iVar3);
    iVar2 = iVar3 + 4;
    (*(code *)PTR_printf_000276d4)(puVar4,iVar3,uVar1);
    iVar3 = iVar2;
  } while (iVar2 != 0x60);
  piVar5 = (int *)(PTR_DAT_0002758c + 0x7098);
  puVar4 = PTR_00027598 + 0x65cc;
  iVar3 = 0;
  do {
    piVar6 = piVar5;
    iVar2 = 0;
    do {
      iVar7 = iVar2 + 1;
      if (*piVar6 == iVar3) {
        piVar6 = piVar5 + iVar2 * 6;
        goto LAB_000143d4;
      }
      piVar6 = piVar6 + 6;
      iVar2 = iVar7;
    } while (iVar7 != 0x29);
    piVar6 = (int *)0x0;
LAB_000143d4:
    iVar2 = iVar3 + 1;
    uVar1 = (*(code *)PTR_rts_osd2_get_register_000276cc)(param_1,iVar3);
    (*(code *)PTR_printf_000276d4)(puVar4,uVar1,piVar6[5]);
    iVar3 = iVar2;
    if (iVar2 == 0x29) {
      return 0;
    }
  } while( true );
}



// ==== osd2_dump_color_table @ 0001490c size=280

undefined4 osd2_dump_color_table(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  puVar1 = PTR_00027598;
  iVar4 = 0x243;
  iVar6 = *param_1;
  puVar7 = PTR_00027598 + 0x6c60;
  do {
    iVar3 = 3;
    do {
      iVar2 = (*(code *)(puVar1 + 0x48b0))(iVar4,iVar3);
      if (iVar2 == 0) {
        return 0xfffffff6;
      }
      for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar2 + 6); iVar5 = iVar5 + 1) {
        (*(code *)PTR_rts_log_00027630)
                  (1,puVar7,iVar4,iVar3,iVar5,
                   *(undefined1 *)(iVar6 + iVar5 + (uint)*(byte *)(iVar2 + 5)));
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0x23f);
  return 0;
}



// ==== osd2_set_default_color_table @ 00014a24 size=256

undefined4 osd2_set_default_color_table(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = PTR_00027598;
  iVar5 = *param_1;
  if (iVar5 != 0) {
    iVar6 = 0x243;
    do {
      iVar4 = 3;
      do {
        iVar2 = (*(code *)(puVar1 + 0x48b0))(iVar6,iVar4);
        iVar7 = 0;
        if (iVar2 == 0) {
          return 0xfffffff6;
        }
        for (; iVar3 = *(byte *)(iVar2 + 6) - 1, iVar7 < (int)(uint)*(byte *)(iVar2 + 6);
            iVar7 = iVar7 + 1) {
          if (iVar3 == 0) {
            trap(0x1c00);
          }
          *(char *)(iVar5 + iVar7 + (uint)*(byte *)(iVar2 + 5)) = (char)iVar7 * (char)(0xff / iVar3)
          ;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0x23f);
    *(undefined1 *)(iVar5 + 0xc0) = 0;
    *(undefined1 *)(iVar5 + 0xc1) = 0xff;
  }
  return 0;
}



// ==== osd2_set_color_table @ 00014b24 size=444

undefined4
osd2_set_color_table
          (int *param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5,
          undefined1 param_6,byte param_7)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  byte *pbVar6;
  byte local_28 [4];
  undefined1 local_24 [4];
  
  local_28[0] = param_7;
  local_28[2] = param_5;
  local_28[3] = param_6;
  if ((param_1 != (int *)0x0) && (iVar4 = *param_1, iVar4 != 0)) {
    pcVar5 = (code *)(PTR_00027598 + 0x48b0);
    local_28[1] = param_4;
    if (param_2 != 0x100) {
      local_24[1] = (undefined1)((uint)param_3 >> 0x18);
      local_24[3] = (undefined1)((uint)param_3 >> 8);
      local_24[2] = (undefined1)((uint)param_3 >> 0x10);
      iVar1 = 0;
      local_24[0] = (char)param_3;
      while( true ) {
        iVar2 = (*pcVar5)(param_2,iVar1);
        if (iVar2 == 0) {
          (*(code *)PTR_rts_log_00027630)
                    (4,PTR_00027598 + 0x6c70,PTR_00027598 + 0x6cc8,0xa0,param_2);
          return 0xfffffff6;
        }
        pbVar6 = local_28 + iVar1;
        if ((uint)*(byte *)(iVar2 + 6) < (uint)*pbVar6) break;
        puVar3 = local_24 + iVar1;
        iVar1 = iVar1 + 1;
        *(undefined1 *)(iVar4 + (uint)*pbVar6 + (uint)*(byte *)(iVar2 + 5)) = *puVar3;
        if (iVar1 == 4) {
          return 0;
        }
      }
      (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6c90,PTR_00027598 + 0x6cc8,0xa4);
      return 0xffffffeb;
    }
    iVar1 = (*pcVar5)(0x100,4);
    if (iVar1 != 0) {
      if ((uint)param_7 <= (uint)*(byte *)(iVar1 + 6)) {
        *(char *)(iVar4 + (uint)param_7 + (uint)*(byte *)(iVar1 + 5)) = (char)param_3;
        return 0;
      }
      return 0xffffffdc;
    }
  }
  return 0xfffffff6;
}



// ==== osd2_get_color_table @ 00014ce0 size=432

uint osd2_get_color_table
               (int *param_1,int param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5,
               byte param_6)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  code *pcVar6;
  byte local_28 [4];
  byte local_24 [4];
  
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_28[0] = param_6;
  local_28[3] = param_5;
  if ((param_1 == (int *)0x0) || (iVar4 = *param_1, iVar4 == 0)) {
    return 0xfffffff6;
  }
  iVar3 = 0;
  pcVar6 = (code *)(PTR_00027598 + 0x48b0);
  local_28[1] = param_3;
  local_28[2] = param_4;
  if (param_2 == 0x100) {
    iVar3 = (*pcVar6)(0x100,4);
    pbVar5 = (byte *)(iVar4 + (uint)*(byte *)(iVar3 + 5));
    local_24[0] = *pbVar5;
    local_24[1] = pbVar5[1];
  }
  else {
    do {
      iVar1 = (*pcVar6)(param_2,iVar3);
      if (iVar1 == 0) {
        (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6c70,PTR_00027598 + 0x6cb0,0xc5,param_2);
        return 0;
      }
      pbVar5 = local_28 + iVar3;
      if ((uint)*(byte *)(iVar1 + 6) < (uint)*pbVar5) {
        (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6c90,PTR_00027598 + 0x6cb0,0xc9);
        return 0;
      }
      pbVar2 = local_24 + iVar3;
      iVar3 = iVar3 + 1;
      *pbVar2 = *(byte *)(iVar4 + (uint)*pbVar5 + (uint)*(byte *)(iVar1 + 5));
    } while (iVar3 != 4);
  }
  return (uint)local_24[1] << 0x18 | (uint)local_24[2] << 0x10 | (uint)local_24[0] |
         (uint)local_24[3] << 8;
}



// ==== osd2_ewl_release @ 00014f9c size=128

undefined4 osd2_ewl_release(int *param_1)

{
  undefined *puVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (*(code *)PTR_rts_reg_osd2_close_000276b0)();
    }
    puVar1 = PTR_pthread_cond_destroy_000275c8;
    *param_1 = 0;
    (*(code *)puVar1)(param_1 + 10);
    (*(code *)PTR_pthread_mutex_destroy_000275e8)(param_1 + 3);
    (*(code *)PTR_rts_free_000275d8)(param_1);
  }
  return 0;
}



// ==== osd2_ewl_init @ 0001501c size=312

int osd2_ewl_init(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_00027598;
  iVar2 = (*(code *)PTR___rts_calloc_000276b4)(1,0x68,PTR_00027598 + 0x7064,0x23);
  if (iVar2 == 0) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6d70,puVar1 + 0x7064,0x25);
  }
  else {
    (*(code *)PTR_pthread_mutex_init_000275bc)(iVar2 + 0xc,0);
    (*(code *)PTR_pthread_cond_init_00027638)(iVar2 + 0x28,0);
    iVar3 = (*(code *)PTR_rts_wq_lock_allocation_0002769c)(0x831);
    if (iVar3 == 0) {
      (*(code *)PTR_rts_wq_lock_set_name_000276ac)(0x831,PTR_00027598 + 0x5d30);
      *(undefined4 *)(iVar2 + 4) = 0x831;
      return iVar2;
    }
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6da0,puVar1 + 0x7064,0x2e,iVar3);
    (*(code *)PTR_osd2_ewl_release_000275d0)(iVar2);
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6dd0,puVar1 + 0x7064,0x37,puVar1 + 0x7064);
  }
  return 0;
}



// ==== osd2_ewl_read_reg @ 00015154 size=112

void osd2_ewl_read_reg(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = 0x4f;
  if (param_1 == (int *)0x0) {
    puVar1 = PTR_00027598 + 0x64f0;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)PTR_rts_reg_read_reg_00027668;
    if (*param_1 != 0) goto LAB_000151b8;
    uVar2 = 0x50;
    puVar1 = PTR_00027598 + 0x6e54;
  }
  UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000275b8;
  (*(code *)PTR___assert_000275b8)(puVar1,PTR_00027598 + 0x6df4,uVar2,PTR_00027598 + 0x7050);
LAB_000151b8:
                    /* WARNING: Could not recover jumptable at 0x000151bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ==== osd2_ewl_write_reg @ 000151c4 size=116

void osd2_ewl_write_reg(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0x5b;
    puVar1 = PTR_00027598 + 0x64f0;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)PTR_rts_reg_write_reg_000276e4;
    if (*param_1 != 0) goto LAB_0001522c;
    uVar2 = 0x5c;
    puVar1 = PTR_00027598 + 0x6e54;
  }
  UNRECOVERED_JUMPTABLE = (code *)PTR___assert_000275b8;
  (*(code *)PTR___assert_000275b8)(puVar1,PTR_00027598 + 0x6df4,uVar2,PTR_00027598 + 0x703c);
LAB_0001522c:
                    /* WARNING: Could not recover jumptable at 0x00015230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ==== osd2_ewl_reserve_hw @ 00015238 size=332

undefined4 osd2_ewl_reserve_hw(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    piVar2 = (int *)(PTR_00027598 + 0x64f0);
    (*(code *)PTR___assert_000275b8)(piVar2,PTR_00027598 + 0x6df4,0x66,PTR_00027598 + 0x7028);
  }
  if ((*piVar2 == 0) && (iVar1 = (*(code *)PTR_rts_reg_osd2_open_000276e8)(), iVar1 != 0)) {
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6e64,PTR_00027598 + 0x7014,0x6b);
    uVar3 = 0xffffffe8;
  }
  else {
    iVar1 = (*(code *)PTR_rts_wq_lock_wait_00027648)(param_1[1]);
    if (iVar1 == 0) {
      (*(code *)PTR_rts_osd2_set_register_000276c8)(param_1,0,1);
      iVar1 = (*(code *)PTR_rts_osd2_get_register_000276cc)(param_1,0x11);
      uVar3 = 0;
      if (iVar1 == 0) {
        (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6eb8,PTR_00027598 + 0x7014,0x7b);
        (*(code *)PTR_rts_wq_lock_post_00027634)(param_1[1]);
        uVar3 = 0xffffffe0;
      }
    }
    else {
      (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6e90,PTR_00027598 + 0x7014,0x72,iVar1);
      uVar3 = 0xffffffdd;
    }
  }
  return uVar3;
}



// ==== osd2_ewl_release_hw @ 00015384 size=148

void osd2_ewl_release_hw(int *param_1)

{
  if (param_1 == (int *)0x0) {
    (*(code *)PTR___assert_000275b8)
              (PTR_00027598 + 0x64f0,PTR_00027598 + 0x6df4,0x86,PTR_00027598 + 0x7000);
  }
  (*(code *)PTR_rts_osd2_set_register_000276c8)();
  (*(code *)PTR_rts_wq_lock_post_00027634)(param_1[1]);
  if (*param_1 != 0) {
    (*(code *)PTR_rts_reg_osd2_close_000276b0)();
  }
  *param_1 = 0;
  return;
}



// ==== osd2_ewl_start_hw @ 00015418 size=172

void osd2_ewl_start_hw(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0x92;
    puVar1 = PTR_00027598 + 0x64f0;
  }
  else {
    uVar2 = 0x93;
    if (*param_1 != 0) goto LAB_00015480;
    puVar1 = PTR_00027598 + 0x6e54;
  }
  (*(code *)PTR___assert_000275b8)(puVar1,PTR_00027598 + 0x6df4,uVar2,PTR_00027598 + 0x6fec);
LAB_00015480:
  if ((param_1[0x16] == 0) && (param_1[2] != 0)) {
    (*(code *)PTR_rts_reg_handle_sigio_000275dc)();
  }
                    /* WARNING: Could not recover jumptable at 0x000154bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_osd2_set_register_000276c8)(param_1,1,1);
  return;
}



// ==== osd2_ewl_check_done @ 000154c4 size=152

undefined4 osd2_ewl_check_done(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_osd2_get_register_000276cc;
  if (param_1 == 0) {
    puVar2 = PTR_00027598 + 0x64f0;
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x6fd8,0xa0,puVar2);
    pcVar4 = (code *)PTR___assert_000275b8;
    (*(code *)PTR___assert_000275b8)(puVar2,PTR_00027598 + 0x6df4,0xa0,PTR_00027598 + 0x6fc4);
  }
  iVar1 = (*pcVar4)();
  uVar3 = 0xffffffef;
  if (iVar1 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}



// ==== osd2_ewl_make_rdy @ 0001555c size=200

undefined4 osd2_ewl_make_rdy(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_00027598 + 0x64f0;
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x6fb0,0xad,puVar2);
    param_1 = puVar2;
    (*(code *)PTR___assert_000275b8)(puVar2,PTR_00027598 + 0x6df4,0xad,PTR_00027598 + 0x6f9c);
  }
  (*(code *)PTR_pthread_mutex_lock_000275e4)(param_1 + 0xc);
  puVar1 = PTR_pthread_cond_signal_000276d8;
  *(undefined4 *)(puVar2 + 0x60) = 1;
  (*(code *)puVar1)(puVar2 + 0x28);
  (*(code *)PTR_pthread_mutex_unlock_00027614)(param_1 + 0xc);
  return 0;
}



// ==== osd2_ewl_wait_hw_ready @ 00015624 size=672

undefined4 osd2_ewl_wait_hw_ready(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar5 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(PTR_00027598 + 0x64f0);
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x6f84,0x11b,puVar5);
    param_1 = puVar5;
    (*(code *)PTR___assert_000275b8)(puVar5,PTR_00027598 + 0x6df4,0x11b,PTR_00027598 + 0x6f6c);
  }
  puVar1 = PTR_rts_reg_get_handle_000275f0;
  if (param_1[0x16] == 0) {
    iVar3 = 300;
    if (puVar5[2] == 0) {
      do {
        (*(code *)PTR_rts_delay_000276bc)(1000,0);
        uVar2 = (*(code *)PTR_osd2_ewl_check_done_000275ec)(puVar5);
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00027604)(uVar2);
        if (iVar4 == 0) break;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    else {
      iVar3 = 300;
      local_1c = 1000000;
      local_20 = 0;
      (*(code *)PTR_sigemptyset_000276d0)(auStack_30);
      (*(code *)PTR_sigaddset_00027684)(auStack_30,0x16);
      (*(code *)PTR_pthread_sigmask_00027640)(1,auStack_30,auStack_40);
      do {
        uVar2 = (*(code *)PTR_osd2_ewl_check_done_000275ec)(puVar5);
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00027604)(uVar2);
        if (iVar4 == 0) break;
        iVar3 = iVar3 + -1;
        (*(code *)PTR_sigtimedwait_00027618)(auStack_30,0,&local_20);
      } while (iVar3 != 0);
      (*(code *)PTR_pthread_sigmask_00027640)(2,auStack_30,0);
    }
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00027604)(uVar2);
    if (iVar3 != 0) {
      return uVar2;
    }
  }
  else {
    puVar5[0x18] = 0;
    uVar2 = (*(code *)puVar1)(*puVar5);
    uVar2 = (*(code *)puVar5[0x16])(puVar5[0x17],uVar2);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00027604)(uVar2);
    if (iVar3 != 0) {
      (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6ed8,PTR_00027598 + 0x6f58,0xd9,uVar2);
      return uVar2;
    }
    puVar6 = puVar5 + 3;
    (*(code *)PTR_pthread_mutex_lock_000275e4)(puVar6);
    if (puVar5[0x18] == 0) {
      (*(code *)PTR_pthread_cond_wait_000275e0)(puVar5 + 10,puVar6);
    }
    puVar1 = PTR_pthread_mutex_unlock_00027614;
    puVar5[0x18] = 0;
    (*(code *)puVar1)(puVar6);
  }
  uVar2 = (*(code *)(PTR_00027598 + 0x4e90))(puVar5);
  return uVar2;
}



// ==== osd2_ewl_set_epoll_hook @ 000158c4 size=132

undefined4 osd2_ewl_set_epoll_hook(undefined *param_1,undefined *param_2,undefined4 param_3)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_00027598 + 0x64f0;
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x6f40,300,param_1);
    param_3 = 300;
    param_2 = PTR_00027598 + 0x6df4;
    (*(code *)PTR___assert_000275b8)();
  }
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined **)(param_1 + 0x5c) = param_2;
  return 0;
}



// ==== osd2_ewl_use_sigio @ 00015948 size=144

undefined4 osd2_ewl_use_sigio(undefined *param_1,undefined *param_2)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_00027598 + 0x64f0;
    (*(code *)PTR_rts_log_00027630)(4,PTR_00027598 + 0x6158,PTR_00027598 + 0x6f14,0x138,param_1);
    param_2 = PTR_00027598 + 0x6df4;
    (*(code *)PTR___assert_000275b8)(param_1,param_2,0x138,PTR_00027598 + 0x6f00);
  }
  if (param_2 == (undefined *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return 0;
}



