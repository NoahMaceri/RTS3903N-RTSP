/* librtsjpeg — "ewl" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtsjpeg.h"

// ==== ewl_read_reg @ 00011520 size=52

undefined4 ewl_read_reg(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00011544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_rts_reg_read_reg_00025764)();
    return uVar1;
  }
  return 0xfffffff6;
}



// ==== ewl_write_reg @ 00011554 size=52

void ewl_write_reg(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00011578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_reg_write_reg_000257bc)();
    return;
  }
  return;
}



// ==== ewl_reset_hw @ 00011588 size=52

void ewl_reset_hw(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000115ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_reg_mjpg_reset_00025704)();
    return;
  }
  return;
}



// ==== ewl_reserve_hw @ 000115bc size=220

undefined4 ewl_reserve_hw(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else if ((*(int *)(param_1 + 4) == 0) &&
          (iVar1 = (*(code *)PTR_rts_reg_mjpg_open_00025778)(param_1 + 4), iVar1 != 0)) {
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4110,PTR_000256a8 + 0x4384,0x7f);
    uVar2 = 0xffffffe8;
  }
  else {
    iVar1 = (*(code *)PTR_rts_wq_lock_wait_00025750)(*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
      (*(code *)PTR_rtsjpgenc_set_register_000256bc)(param_1,1,1);
      uVar2 = 0;
    }
    else {
      (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x413c,PTR_000256a8 + 0x4384,0x86,iVar1);
      uVar2 = 0xffffffdd;
    }
  }
  return uVar2;
}



// ==== ewl_release_hw @ 00011698 size=92

void ewl_release_hw(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_wq_lock_post_00025730)(*(undefined4 *)(param_1 + 8));
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_rts_reg_mjpg_close_00025780)();
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// ==== ewl_start_hw @ 000116f4 size=272

void ewl_start_hw(undefined *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_000256a8 + 0x4184;
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4164,PTR_000256a8 + 0x4374,0x9f,puVar2);
    uVar1 = 0x9f;
    param_1 = puVar2;
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      (*(code *)PTR_rts_log_0002572c)
                (4,PTR_000256a8 + 0x4164,PTR_000256a8 + 0x4374,0xa0,PTR_000256a8 + 0x41e8);
    }
    uVar1 = 0xa0;
    if (*(int *)(param_1 + 4) != 0) goto LAB_000117c0;
    puVar2 = PTR_000256a8 + 0x41e8;
  }
  (*(code *)PTR___assert_000256c8)(puVar2,PTR_000256a8 + 0x4188,uVar1,PTR_000256a8 + 0x4364);
LAB_000117c0:
  if ((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    (*(code *)PTR_rts_reg_handle_sigio_000256e8)();
  }
                    /* WARNING: Could not recover jumptable at 0x000117fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rtsjpgenc_set_register_000256bc)(param_1,0,1);
  return;
}



// ==== ewl_wait_hw_ready @ 000118c0 size=628

undefined4 ewl_wait_hw_ready(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = PTR_rts_reg_get_handle_000256fc;
  if (param_1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar3 = 300;
      if (*(int *)(param_1 + 0xc) == 0) {
        do {
          (*(code *)PTR_rts_delay_000257a0)(1000,0);
          uVar2 = (*(code *)PTR_jpg_ewl_check_done_00025718)(param_1);
          iVar4 = (*(code *)PTR_RTS_IS_ERR_00025708)(uVar2);
          if (iVar4 == 0) break;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      else {
        iVar3 = 300;
        local_1c = 1000000;
        local_20 = 0;
        (*(code *)PTR_sigemptyset_000257a8)(auStack_30);
        (*(code *)PTR_sigaddset_0002577c)(auStack_30,0x16);
        (*(code *)PTR_pthread_sigmask_00025748)(1,auStack_30,auStack_40);
        do {
          uVar2 = (*(code *)PTR_jpg_ewl_check_done_00025718)(param_1);
          iVar4 = (*(code *)PTR_RTS_IS_ERR_00025708)(uVar2);
          if (iVar4 == 0) break;
          iVar3 = iVar3 + -1;
          (*(code *)PTR_sigtimedwait_00025714)(auStack_30,0,&local_20);
        } while (iVar3 != 0);
        (*(code *)PTR_pthread_sigmask_00025748)(2,auStack_30,0);
      }
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00025708)(uVar2);
      if (iVar3 != 0) {
        return uVar2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
      uVar2 = (*(code *)puVar1)(*(undefined4 *)(param_1 + 4));
      uVar2 = (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c),uVar2);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00025708)(uVar2);
      if (iVar3 != 0) {
        (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x41f8,PTR_000256a8 + 0x4350,0xd3,uVar2);
        return uVar2;
      }
      iVar3 = param_1 + 0x10;
      (*(code *)PTR_pthread_mutex_lock_000256f0)(iVar3);
      if (*(int *)(param_1 + 0x60) == 0) {
        (*(code *)PTR_pthread_cond_wait_000256ec)(param_1 + 0x28,iVar3);
      }
      puVar1 = PTR_pthread_mutex_unlock_00025710;
      *(undefined4 *)(param_1 + 0x60) = 0;
      (*(code *)puVar1)(iVar3);
    }
    uVar2 = 0;
    (*(code *)PTR_rts_reg_mjpg_done_00025794)(*(undefined4 *)(param_1 + 4));
  }
  return uVar2;
}



// ==== ewl_malloc @ 00011c48 size=36

void ewl_malloc(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___rts_malloc_00025774)(param_1,PTR_000256a8 + 0x42ec,0x13f);
  return;
}



// ==== ewl_free @ 00011c6c size=40

void ewl_free(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00011c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_free_000256e4)();
    return;
  }
  return;
}



// ==== ewl_release @ 00011c94 size=160

undefined4 ewl_release(int *param_1)

{
  undefined *puVar1;
  
  if (param_1 != (int *)0x0) {
    if (-1 < *param_1) {
      (*(code *)PTR_rts_isp_mem_close_00025758)();
    }
    *param_1 = -1;
    if (param_1[1] != 0) {
      (*(code *)PTR_rts_reg_mjpg_close_00025780)();
    }
    puVar1 = PTR_pthread_cond_destroy_000256dc;
    param_1[1] = 0;
    (*(code *)puVar1)(param_1 + 10);
    (*(code *)PTR_pthread_mutex_destroy_000256f8)(param_1 + 4);
    (*(code *)PTR_ewl_free_000256cc)(param_1);
  }
  return 0;
}



// ==== ewl_calloc @ 00011d34 size=36

void ewl_calloc(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00011d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___rts_calloc_0002579c)(param_1,param_2,PTR_000256a8 + 0x42e0,0x14c);
  return;
}



// ==== ewl_init @ 00011d58 size=372

int * ewl_init(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(code *)PTR_ewl_calloc_000257a4)(1,0x68);
  if (piVar1 == (int *)0x0) {
    (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4220,PTR_000256a8 + 0x4394,0x26);
  }
  else {
    iVar2 = (*(code *)PTR_rts_isp_mem_open_0002570c)(0x12);
    *piVar1 = iVar2;
    if (iVar2 < 0) {
      (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4250,PTR_000256a8 + 0x4394,0x2c);
    }
    else {
      (*(code *)PTR_pthread_mutex_init_000256d4)(piVar1 + 4,0);
      (*(code *)PTR_pthread_cond_init_0002573c)(piVar1 + 10,0);
      iVar2 = (*(code *)PTR_rts_wq_lock_allocation_0002578c)(0x3901);
      if (iVar2 == 0) {
        (*(code *)PTR_rts_wq_lock_set_name_00025798)(0x3901,PTR_000256a8 + 0x42a8);
        piVar1[2] = 0x3901;
        return piVar1;
      }
      (*(code *)PTR_rts_log_0002572c)(4,PTR_000256a8 + 0x4278,PTR_000256a8 + 0x4394,0x35,iVar2);
    }
    (*(code *)PTR_ewl_release_00025720)(piVar1);
    (*(code *)PTR_rts_log_0002572c)
              (4,PTR_000256a8 + 0x42b0,PTR_000256a8 + 0x4394,0x3e,PTR_000256a8 + 0x4394);
  }
  return (int *)0x0;
}



