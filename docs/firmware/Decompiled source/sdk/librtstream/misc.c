/* librtstream — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== entry @ 00019070 size=60

undefined4 processEntry entry(void)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b30,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1b38,0x85,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1c10);
  iVar1 = *(int *)(puVar2 + 0x4a1b0);
  (**(code **)(puVar2 + 0x4a2dc))(*(undefined4 *)(iVar1 + 0x3c08),*(undefined4 *)(puVar2 + 0x4a828))
  ;
  (**(code **)(puVar2 + 0x4a220))(*(undefined4 *)(iVar1 + 0x3c08));
  return 0;
}



// ==== __release_unit_manager @ 000190ac size=88

undefined4 __release_unit_manager(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0006325c;
  (*(code *)PTR_rts_queue_clear_00063388)
            (*(undefined4 *)(PTR_DAT_0006325c + 0x3c08),PTR_rts_free_000638d4);
  (*(code *)PTR_rts_queue_destroy_000632cc)(*(undefined4 *)(puVar1 + 0x3c08));
  return 0;
}



// ==== __release_context @ 00019104 size=92

undefined4 __release_context(void)

{
  (*(code *)PTR_rts_av_release_000636e8)();
  (*(code *)PTR_pthread_mutex_destroy_00063828)(PTR_DAT_0006325c + 0x3c14);
  (*(code *)PTR_pthread_mutexattr_destroy_00063448)(PTR_DAT_0006325c + 0x3c2c);
  return 0;
}



// ==== __compare_task @ 0001a040 size=32

bool __compare_task(int *param_1,int param_2)

{
  if (param_1 != (int *)0x0) {
    return param_2 == *param_1;
  }
  return false;
}



// ==== __resume_unit @ 0001aabc size=128

undefined4 __resume_unit(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6120,0x394,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x394,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6130);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  return 0;
}



// ==== __uninit_buffer @ 0001ac08 size=356

undefined4 __uninit_buffer(undefined *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5db0,0x11a,puVar2);
    param_1 = puVar2;
    (*(code *)PTR___assert_000637b8)
              (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x11a,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -24000);
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar5 = *(int *)(puVar2 + 0x124);
    uVar1 = 0xfffffff6;
    if (iVar5 != 0) {
      if ((*(int *)(puVar2 + 0x18) == 0) || (*(int *)(iVar5 + 8) == 0)) {
        piVar3 = *(int **)(iVar5 + 4);
        uVar4 = 0;
        if (piVar3 == (int *)0x0) {
          iVar5 = *(int *)(puVar2 + 0x124);
        }
        else {
          for (; uVar4 < *(uint *)(puVar2 + 0x1c); uVar4 = uVar4 + 1) {
            if (*piVar3 != 0) {
              (*(code *)PTR_rts_av_delete_buffer_000639b4)();
            }
            *piVar3 = 0;
            piVar3 = piVar3 + 1;
          }
          iVar5 = *(int *)(puVar2 + 0x124);
        }
        (*(code *)PTR_rts_free_000638d4)(*(undefined4 *)(iVar5 + 4));
        if (**(int **)(puVar2 + 0x124) != 0) {
          (*(code *)PTR_rts_queue_destroy_000632cc)();
        }
        iVar5 = *(int *)(puVar2 + 0x18);
        **(undefined4 **)(puVar2 + 0x124) = 0;
        if (iVar5 == 0) {
          (*(code *)PTR_rts_free_000638d4)();
        }
      }
      *(undefined4 *)(puVar2 + 0x124) = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== profile @ 0001cd78 size=1128

undefined4 profile(undefined *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_s2;
  int iVar8;
  int local_48 [5];
  undefined1 auStack_34 [4];
  int local_30;
  int local_2c;
  
  if (param_1 == (undefined *)0x0) {
    param_3 = 0x4e1;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    param_2 = unaff_s2;
LAB_0001cde4:
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,param_3,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x605c);
  }
  else {
    puVar5 = param_1;
    if (param_2 == 0) {
      param_3 = 0x4e2;
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
      goto LAB_0001cde4;
    }
  }
  if ((*(int *)(puVar5 + 100) != 0) &&
     (iVar8 = (*(code *)PTR_rts_queue_empty_00063b60)(), iVar8 == 0)) {
    uVar2 = 0;
    if ((*(int *)(param_1 + 100) != 0) &&
       (iVar8 = (*(code *)PTR_rts_queue_empty_00063b60)(), iVar8 == 0)) {
      for (iVar8 = 0;
          iVar3 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(param_1 + 100)),
          iVar8 < iVar3; iVar8 = iVar8 + 1) {
        iVar3 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 100),iVar8);
        if (iVar3 != param_3) {
          local_48[0] = 0;
          local_48[1] = 0;
          local_48[2] = 0;
          local_48[3] = 0;
          local_48[4] = 0;
          (*(code *)PTR_rts_av_get_tr_profile_00063a64)(iVar3,local_48);
          if (local_48[0] != 0) {
            uVar2 = (*(code *)PTR_rts_av_cmp_profile_000633e8)(local_48,param_2);
            iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
            if (iVar3 != 0) {
              uVar2 = 0xffffffb7;
              break;
            }
          }
        }
      }
    }
    iVar8 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar8 != 0) {
      return uVar2;
    }
    if (param_3 == 0) {
      return uVar2;
    }
  }
  iVar8 = *(int *)(param_1 + 0x74);
  if (iVar8 != 0) {
    uVar2 = (*(code *)(PTR_LAB_00063268 + -0x495c))(param_1);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 != 0) {
      uVar6 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(param_1);
      uVar7 = 0x4ef;
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6a40;
      goto LAB_0001d1ac;
    }
  }
  uVar2 = (*(code *)(PTR_LAB_00063268 + -0x5fa0))(param_2);
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if ((iVar3 == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))(param_1,auStack_34);
    }
    bVar1 = true;
    if (local_30 == *(int *)(param_2 + 4)) {
      bVar1 = local_2c != *(int *)(param_2 + 8);
    }
    if (*(code **)(param_1 + 0x4c) == (code *)0x0) {
      uVar2 = 0xffffffcb;
    }
    else {
      uVar2 = (**(code **)(param_1 + 0x4c))(param_1,param_2);
    }
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 == 0) {
      if (bVar1) {
        uVar2 = (*(code *)(PTR_LAB_00063268 + -0x5724))(param_1);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
        if (iVar3 != 0) goto LAB_0001d144;
      }
      (*(code *)PTR_memcpy_00063908)(param_1 + 0xe4,param_2,0x14);
      if (*(int *)(param_1 + 0x68) != 0) {
        uVar2 = (*(code *)PTR_rts_av_get_unit_profile_00063408)(param_1,local_48);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
        if (iVar3 == 0) {
          for (iVar3 = 0;
              iVar4 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(param_1 + 0x68)),
              iVar3 < iVar4; iVar3 = iVar3 + 1) {
            uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)
                              (*(undefined4 *)(param_1 + 0x68),iVar3);
            uVar2 = (*(code *)PTR_rts_av_set_tr_profile_000638f8)(uVar2,local_48);
            iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
            if (iVar4 != 0) {
              uVar6 = 0x4d1;
              puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6a00;
              goto LAB_0001d134;
            }
          }
        }
        else {
          uVar6 = 0x4c8;
          puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6a1c;
LAB_0001d134:
          (*(code *)PTR_rts_log_000635ec)
                    (4,puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60d4,uVar6);
        }
      }
    }
  }
LAB_0001d144:
  if (iVar8 == 0) {
    return uVar2;
  }
  uVar2 = (*(code *)(PTR_LAB_00063268 + -0x36dc))(param_1);
  iVar8 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar8 == 0) {
    return uVar2;
  }
  uVar6 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(param_1);
  uVar7 = 0x4fa;
  puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69e0;
LAB_0001d1ac:
  (*(code *)PTR_rts_log_000635ec)
            (4,puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6074,uVar7,uVar6,uVar2);
  return uVar2;
}



// ==== __poll_task @ 0001dd10 size=152

void __poll_task(int param_1,uint param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = PTR_rts_av_check_and_run_unit_00063638;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xc), *(int *)(iVar1 + 0x120) == 0)) {
    if ((param_2 & *(uint *)(param_1 + 8)) != 0) {
      *(int *)(iVar1 + 0x150) = *(int *)(iVar1 + 0x150) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001dd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(iVar1);
      return;
    }
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6914,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6100,0x3a8,*(uint *)(param_1 + 8),
               param_2);
  }
  return;
}



// ==== __del_poll_fd @ 0001f558 size=412

undefined4 __del_poll_fd(int *param_1,undefined *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_1 == (int *)0x0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5cf0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5958,0x57,puVar6);
    uVar5 = 0x57;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    param_2 = puVar6;
  }
  else {
    if (*param_1 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5958,0x58,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94);
    }
    if (-1 < *param_1) goto LAB_0001f628;
    uVar5 = 0x58;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c94;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar6,puVar4,uVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5968);
LAB_0001f628:
    if (param_2 != (undefined *)0x0) break;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x427c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5958,0x59,puVar6);
    uVar5 = 0x59;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    param_2 = puVar6;
  }
  (*(code *)PTR_rts_log_000635ec)
            (0,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c80,*(undefined4 *)(param_2 + 4));
  puVar6 = PTR_epoll_ctl_00063724;
  piVar1 = *(int **)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x14);
  iVar3 = *param_1;
  uVar5 = *(undefined4 *)(param_2 + 4);
  *(int **)(iVar2 + 4) = piVar1;
  *piVar1 = iVar2;
  *(undefined **)(param_2 + 0x14) = param_2 + 0x14;
  *(undefined **)(param_2 + 0x18) = param_2 + 0x14;
  *(undefined4 *)(param_2 + 0x10) = 0;
  (*(code *)puVar6)(iVar3,2,uVar5,0);
  if (*(int *)(param_2 + 0x1c) != 0) {
    (*(code *)PTR_rts_av_obj_put_00063ab8)();
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return 0;
}



// ==== __create_chn @ 00021730 size=332

uint __create_chn(undefined *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x707369) {
    if (param_2 == 0) {
      puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5148,0x12d,puVar3);
      (*(code *)PTR___assert_000637b8)
                (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4,0x12d,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5158);
      goto LAB_000217cc;
    }
    iVar2 = (*(code *)PTR_rts_isp_v4l2_open_000639a0)(*(undefined4 *)(param_2 + 4));
    if (iVar2 < 0) {
      uVar5 = 0xffffffeb;
    }
    else {
      (*(code *)PTR_rts_isp_v4l2_close_0006389c)(iVar2);
      uVar5 = *(uint *)(param_2 + 4);
    }
    puVar4 = (uint *)0x0;
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
    uVar6 = uVar5;
    if (iVar2 != 0) goto LAB_00021a58;
  }
  else {
LAB_000217cc:
    if (puVar3 == (undefined *)0x3264736f) {
LAB_00021824:
      uVar6 = 0x1e;
    }
    else if (puVar3 < (undefined *)0x32647370) {
      uVar6 = 100;
      if (puVar3 == (undefined *)0x64736f) goto LAB_00021824;
    }
    else {
      uVar6 = 10;
      if ((puVar3 != (undefined *)0x34363268) && (uVar6 = 0x14, puVar3 != (undefined *)0x67706a6d))
      {
        uVar6 = 100;
      }
    }
    for (puVar9 = *(undefined4 **)(PTR_DAT_0006325c + 0x3c30);
        (puVar9 != (undefined4 *)(PTR_DAT_0006325c + 0x3c30) && ((uint)puVar9[-4] <= uVar6));
        puVar9 = (undefined4 *)*puVar9) {
      uVar6 = uVar6 + (uVar6 == puVar9[-4]);
    }
  }
  uVar5 = 0xfffffff3;
  puVar4 = (uint *)0x0;
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(uVar6);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (iVar2 != 0) goto LAB_00021a58;
  puVar4 = (uint *)(*(code *)PTR___rts_calloc_00063a28)
                             (1,0x18,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5164,0xd2);
  puVar1 = PTR_rts_av_new_unit_000638bc;
  if (puVar4 == (uint *)0x0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5750,puVar3 + -0x5164,0xd4);
  }
  else {
    puVar8 = puVar4 + 4;
    puVar4[4] = (uint)puVar8;
    puVar4[5] = (uint)puVar8;
    *puVar4 = uVar6;
    uVar6 = (*(code *)puVar1)(param_1,param_2);
    puVar4[1] = uVar6;
    puVar1 = PTR_DAT_0006325c;
    if (uVar6 != 0) {
      piVar7 = *(int **)(PTR_DAT_0006325c + 0x3c30);
      puVar3 = PTR_DAT_0006325c + 0x3c30;
      if (piVar7 == (int *)puVar3) {
        uVar5 = (*(code *)PTR_rts_av_apply_00063300)(*(undefined4 *)(PTR_DAT_0006325c + 0x3c38));
        iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
        if (iVar2 == 0) {
          puVar9 = *(undefined4 **)(puVar1 + 0x3c34);
          *(uint **)(puVar1 + 0x3c34) = puVar8;
          puVar4[4] = (uint)piVar7;
          goto LAB_00021aec;
        }
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5718,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5170,0xf2,uVar5);
      }
      else {
        for (; piVar7 != (int *)puVar3; piVar7 = (int *)*piVar7) {
          if (*puVar4 < (uint)piVar7[-4]) {
            puVar9 = (undefined4 *)piVar7[1];
            piVar7[1] = (int)puVar8;
            puVar4[4] = (uint)piVar7;
            puVar4[5] = (uint)puVar9;
            *puVar9 = puVar8;
            goto LAB_00021af4;
          }
        }
        puVar9 = *(undefined4 **)(PTR_DAT_0006325c + 0x3c34);
        *(uint **)(PTR_DAT_0006325c + 0x3c34) = puVar8;
        puVar4[4] = (uint)puVar3;
LAB_00021aec:
        puVar4[5] = (uint)puVar9;
        *puVar9 = puVar8;
LAB_00021af4:
        uVar5 = 0;
      }
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
      if (iVar2 == 0) {
        (*(code *)PTR_rts_av_stream_add_tail_00063880)(*(undefined4 *)(puVar1 + 0x3c38),puVar4[1]);
        uVar5 = *puVar4;
      }
      goto LAB_00021a58;
    }
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5738,puVar3 + -0x5164,0xdf,
               (uint)param_1 & 0xff,(uint)param_1 >> 8 & 0xff,(uint)param_1 >> 0x10 & 0xff,
               (uint)param_1 >> 0x18);
    (*(code *)(PTR_LAB_00063268 + 0x142c))(puVar4);
  }
  uVar5 = 0xfffffff5;
  puVar4 = (uint *)0x0;
LAB_00021a58:
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
  if ((iVar2 != 0) && (puVar4 != (uint *)0x0)) {
    (*(code *)(PTR_LAB_00063268 + 0x142c))(puVar4);
    uVar6 = rts_h1encoder_set_attr();
    return uVar6;
  }
  return uVar5;
}



// ==== __stream_keep_active @ 00023e60 size=300

void __stream_keep_active(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int *unaff_s1;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e9c,0x68,puVar3);
    uVar2 = 0x68;
  }
  else {
    unaff_s1 = *(int **)(param_1 + 4);
    if (unaff_s1 != (int *)0x0) goto LAB_00023f20;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x50c8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e9c,0x6b,puVar3);
    uVar2 = 0x6b;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4eb4);
LAB_00023f20:
  iVar4 = 0;
  if (*unaff_s1 != 0) {
    while (unaff_s1[3] != 0) {
      iVar1 = (*(code *)PTR_rts_queue_count_00063a84)();
      if (iVar1 <= iVar4) {
        return;
      }
      uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(unaff_s1[3],iVar4);
      (*(code *)PTR_rts_av_keep_unit_active_000635d8)(uVar2);
      iVar4 = iVar4 + 1;
    }
  }
  return;
}



// ==== __del_handler @ 00023f8c size=188

void __del_handler(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      (*(code *)PTR_rts_queue_rm_00063970)(*(int *)(param_1 + 0xc),param_1);
    }
    puVar2 = PTR_rts_av_post_00063744;
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    iVar4 = *(int *)(param_1 + 4);
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ec4;
    *(undefined4 *)(param_1 + 4) = 0;
    (*(code *)puVar2)(puVar3);
    if (iVar4 != 0) {
      (*(code *)PTR_rts_pthreadpool_destroy_0006384c)(iVar4);
    }
    (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x4ec4);
    (*(code *)PTR_rts_free_000638d4)(param_1);
    return;
  }
  return;
}



// ==== __trigger_event_lk @ 00024088 size=124

void __trigger_event_lk(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 != 0) {
    (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5010);
    (*(code *)PTR_rts_av_trigger_unit_000637f4)(param_1);
                    /* WARNING: Could not recover jumptable at 0x000240e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5010);
    return;
  }
  return;
}



// ==== __find_handler @ 00024104 size=216

void __find_handler(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int unaff_s2;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x508c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f64,0x185,puVar3);
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5120,0x185,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f74);
    param_2 = unaff_s2;
    goto LAB_0002418c;
  }
  puVar3 = (undefined *)0x0;
  while( true ) {
    iVar2 = (*(code *)PTR_rts_queue_count_00063a84)(param_1);
    if (iVar2 <= (int)puVar3) {
      return;
    }
LAB_0002418c:
    piVar1 = (int *)(*(code *)PTR_rts_queue_enumerate_00063ac8)(param_1,puVar3);
    if (*piVar1 == param_2) break;
    puVar3 = puVar3 + 1;
  }
  return;
}



// ==== __find_pipe @ 0002480c size=192

undefined4 __find_pipe(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 <= iVar3) {
      return 0;
    }
    uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 0x10),iVar3);
    iVar1 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)(uVar2);
    if ((param_2 == iVar1) &&
       (iVar1 = (*(code *)PTR_rts_av_get_pipe_dst_000634d8)(uVar2), param_3 == iVar1)) break;
    iVar3 = iVar3 + 1;
  }
  return uVar2;
}



// ==== update_v4l2_profile @ 00026e38 size=208

undefined4 update_v4l2_profile(undefined *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x47d8,0xec,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4548);
  }
  uVar1 = (*(code *)PTR_rts_v4l2_get_fmt_00063428)();
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    uVar1 = (*(code *)PTR_rts_v4l2_get_frmival_00063840)(param_1,&local_24,&local_28);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_rts_get_av_fmt_from_v4l2_fmt_000636cc)(local_18);
      *param_2 = uVar1;
      param_2[1] = local_1c;
      param_2[2] = local_20;
      param_2[3] = local_24;
      param_2[4] = local_28;
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4750,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x455c,0xf6);
    }
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4770,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x455c,0xf0);
  }
  return uVar1;
}



// ==== req_v4l2_buffers @ 00027b74 size=232

int req_v4l2_buffers(undefined *param_1,int param_2,int param_3,undefined *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_2 == 0) {
    param_3 = 0x281;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4694;
    param_4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4618;
    (*(code *)PTR___assert_000637b8)(param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x47d8);
  }
  if (param_3 < 1) {
    iVar5 = -0x15;
  }
  else {
    iVar5 = 0;
    iVar1 = (*(code *)PTR_rts_v4l2_request_bufs_00063a04)();
    if (iVar1 < 1) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x468c,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x462c,0x288);
      iVar5 = -0xb;
    }
    else {
      do {
        uVar6 = *(undefined4 *)(param_2 + iVar5 * 4);
        iVar2 = (*(code *)PTR_rts_v4l2_query_mmap_buf_000633d4)(param_1,iVar5,&local_2c,&local_30);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
        if (iVar3 != 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4670,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x462c,0x295);
          (*(code *)PTR_free_v4l2_buffers_00063960)(param_1,param_2,iVar1);
          return iVar2;
        }
        if (param_4 != (undefined *)0x0) {
          uVar4 = (*(code *)PTR_rts_isp_get_video_phy_addr_000635c8)(param_1,local_2c);
          (*(code *)PTR_rts_av_init_buffer_00063984)(uVar6,local_2c,local_30,uVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar1);
    }
  }
  return iVar5;
}



// ==== mirror @ 0002abf0 size=252

undefined4 mirror(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 local_68 [12];
  int local_38;
  int local_34;
  undefined4 local_30;
  
  uVar1 = (*(code *)(PTR_LAB_00063270 + -0x5510))(param_1,0x98f900,local_68);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    uVar4 = (uint)(param_3 != 0);
    if (uVar4 == 0) {
      puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ca8;
    }
    else {
      puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3cb0;
    }
    (*(code *)PTR_strcpy_000636f8)(param_2 + 1,puVar3);
    param_2[10] = 1;
    param_2[0xb] = 1;
    param_2[9] = 0;
    param_2[0xc] = local_38 >> uVar4 & 1;
    param_2[0xe] = local_30;
    param_2[0xd] = local_34 >> uVar4 & 1;
    *param_2 = local_68[0];
    uVar1 = 0;
  }
  return uVar1;
}



// ==== compute_max_peak @ 00031aa0 size=88

undefined4
compute_max_peak(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *in_t9;
  
  iVar1 = (*in_t9)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    if (param_2 != 0) {
      if (*(int *)(iVar1 + 500) == 0) {
        return 0xffffffef;
      }
      (**(code **)(param_5 + -0x7938))(param_2,iVar1,0x18);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== __osdenc_epoll_cb @ 00036400 size=260

void __osdenc_epoll_cb(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c40;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x12f0,0xc5,puVar3);
    uVar2 = 0xc5;
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0xc);
    puVar4 = PTR_LAB_00063270;
    if (puVar3 != (undefined *)0x0) goto LAB_000364c0;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x14f0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x12f0,200,puVar3);
    uVar2 = 200;
  }
  puVar4 = PTR___assert_000637b8;
  (*(code *)PTR___assert_000637b8)
            (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1304);
LAB_000364c0:
  uVar2 = (*(code *)(puVar4 + 0x62dc))(puVar3,0);
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar1 == 0) {
    *(int *)(puVar3 + 0x68) = *(int *)(puVar3 + 0x68) + 1;
  }
  return;
}



// ==== __exec_aec_cmd @ 0003a9dc size=276

undefined4 __exec_aec_cmd(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x31c,0x2b0,param_2);
    uVar2 = 0x2b0;
  }
  else {
    if (param_2 != (int *)0x0) goto LAB_0003aa98;
    param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x590);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x31c,0x2b1,param_2);
    uVar2 = 0x2b1;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x32c);
LAB_0003aa98:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 != 0) {
    if (*param_2 != 0x3d036172) {
      return 0xffffffcb;
    }
    if ((int *)param_2[5] != (int *)0x0) {
      *(int *)param_2[5] = iVar1 + 0x5c;
      return 0;
    }
  }
  return 0xfffffff6;
}



// ==== __pre_disconnect_aec @ 0003abf8 size=288

undefined4 __pre_disconnect_aec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int unaff_s1;
  int iVar5;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x344,0xc3,puVar4);
    uVar3 = 0xc3;
    param_2 = unaff_s1;
  }
  else {
    if (param_2 != 0) goto LAB_0003acbc;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x344,0xc4,puVar4);
    uVar3 = 0xc4;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35c);
LAB_0003acbc:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    iVar5 = *(int *)(iVar1 + 0xd4);
    iVar2 = (*(code *)PTR_rts_av_get_pipe_id_000639d8)(param_2);
    uVar3 = 0;
    if (iVar5 == iVar2) {
      *(undefined4 *)(iVar1 + 0xd4) = 0xffffffff;
    }
  }
  return uVar3;
}



// ==== __post_connect_aec @ 0003ad18 size=352

undefined4 __post_connect_aec(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x370,0xa7,param_2);
    uVar4 = 0xa7;
  }
  else {
    if (param_2 != (undefined *)0x0) goto LAB_0003addc;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x370,0xa8,param_2);
    uVar4 = 0xa8;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,uVar4,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -900);
LAB_0003addc:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar4 = 0xfffffff6;
  }
  else {
    iVar2 = (*(code *)PTR_rts_av_get_pipe_src_000636f0)(param_2);
    if (iVar2 != 0) {
      iVar3 = (*(code *)PTR_rts_av_get_unit_id_000635a0)(iVar2);
      if ((iVar3 != 0x61637561) &&
         (iVar2 = (*(code *)PTR_rts_av_find_src_by_id_000632ac)(iVar2), iVar2 == 0)) {
        return 0;
      }
      uVar4 = (*(code *)PTR_rts_av_get_pipe_id_000639d8)(param_2);
      *(undefined4 *)(iVar1 + 0xd4) = uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ==== __process_aec_ns @ 0003b180 size=428

undefined4 __process_aec_ns(undefined *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int local_1828 [512];
  int local_1028 [512];
  int local_828 [512];
  int *local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  
  puVar5 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x588;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x480,0x1df,puVar5);
    param_1 = puVar5;
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,0x1df,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x494);
  }
  iVar6 = *(int *)(param_1 + 200);
  puVar7 = *(undefined2 **)(puVar5 + 0x78);
  iVar3 = *(int *)(puVar5 + 0x7c);
  iVar4 = *(int *)(puVar5 + 0x10);
  iVar1 = 0;
  local_1c = 0;
  local_24 = 0;
  local_28 = local_828;
  local_20 = local_1028;
  for (iVar8 = 0; iVar1 = iVar1 + iVar6 * 2, iVar8 < iVar4; iVar8 = iVar8 + 1) {
    local_828[iVar8] = (int)*(short *)(iVar3 + iVar6 * -2 + iVar1) << 9;
    local_1028[iVar8] = (int)*(short *)((int)puVar7 + iVar1 + iVar6 * -2) << 9;
  }
  (*(code *)PTR_RTAecNs_API_Process_000632d4)
            (*(undefined4 *)(puVar5 + 0x18),&local_20,&local_28,local_1828);
  iVar1 = *(int *)(puVar5 + 0x10);
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    iVar4 = local_1828[iVar3] >> 9;
    uVar2 = 0x7fff;
    if ((iVar4 < 0x7fff) && (uVar2 = (undefined2)iVar4, iVar4 < -0x7fff)) {
      uVar2 = 0x8000;
    }
    *puVar7 = uVar2;
    if (iVar6 == 2) {
      puVar7[1] = uVar2;
    }
    puVar7 = puVar7 + iVar6;
  }
  return 0;
}



// ==== audio_fd @ 0003c3e8 size=508

void audio_fd(int param_1,undefined *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x278,0x31,puVar5);
    uVar4 = 0x31;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x294;
    iVar3 = 0;
    param_2 = puVar5;
  }
  else {
    if (*(int *)(param_1 + 0x78) == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x278,0x32,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x230);
    }
    iVar3 = *(int *)(param_1 + 0x78);
    if (iVar3 != 0) goto LAB_0003c4c0;
    uVar4 = 0x32;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x230;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x294;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar5,puVar2,uVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x260);
LAB_0003c4c0:
    puVar5 = PTR_rts_av_get_buffer_0006379c;
    if (param_2 != (undefined *)0x0) break;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x278,0x33,puVar5);
    uVar4 = 0x33;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x294;
    param_2 = puVar5;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  uVar4 = (*(code *)puVar5)(param_2);
  (*(code *)PTR_rts_queue_push_back_00063310)(iVar3,uVar4);
  uVar6 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  uVar7 = (*(code *)PTR_rts_av_get_buffer_ts_00063294)(param_2);
  uVar1 = (uint)uVar6 - (int)uVar7;
  iVar3 = ((int)((ulonglong)uVar6 >> 0x20) - (int)((ulonglong)uVar7 >> 0x20)) -
          (uint)((uint)uVar6 < uVar1);
  if ((iVar3 != 0) || (60000000 < uVar1)) {
    uVar6 = (*(code *)PTR___udivdi3_00063af8)(uVar1,iVar3,1000000,0);
    (*(code *)PTR_rts_log_000635ec)
              (3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x218,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x278,0x3c,uVar6);
  }
  return;
}



// ==== __process_encode_input @ 0003eba4 size=552

undefined4 __process_encode_input(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_s1;
  int *unaff_s2;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  int in_stack_00000018;
  undefined4 *in_stack_00000020;
  
  if (in_stack_00000020 != (undefined4 *)0x0) {
    uVar7 = in_stack_00000020[10];
    iVar9 = in_stack_00000020[0xb];
    iVar1 = (**(code **)(in_stack_00000018 + -0x78c0))();
    uVar2 = uVar7 - iVar1;
    uVar6 = in_stack_00000020[2];
    *(uint *)(unaff_s1 + 0x60) = uVar2;
    pcVar12 = *(code **)(in_stack_00000018 + -0x7c04);
    if (*(uint *)(unaff_s1 + 0x68) == 0) {
      trap(0x1c00);
    }
    uVar5 = *in_stack_00000020;
    *(uint *)(unaff_s1 + 100) = (iVar9 - (iVar1 >> 0x1f)) - (uint)(uVar7 < uVar2);
    uVar5 = (*pcVar12)(*(undefined4 *)(unaff_s1 + 0x5c),uVar5,uVar6 / *(uint *)(unaff_s1 + 0x68));
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar5);
    if (iVar1 != 0) {
      (**(code **)(in_stack_00000018 + -0x7c54))
                (4,*(int *)(in_stack_00000018 + -0x7fd4) + 0x3e0,
                 *(int *)(in_stack_00000018 + -0x7fd4) + 0x628,0x12a);
    }
    if (in_stack_00000020 != (undefined4 *)0x0) {
      (**(code **)(in_stack_00000018 + -0x7cf8))();
    }
  }
  iVar1 = *(int *)(in_stack_00000018 + -0x7fcc);
  uVar5 = 0;
  do {
    iVar9 = (**(code **)(in_stack_00000018 + -0x7dd0))(unaff_s2[0x17]);
    iVar8 = *(int *)(*unaff_s2 + 0x14);
    if (iVar9 < iVar8) {
      return uVar5;
    }
    piVar3 = (int *)(**(code **)(in_stack_00000018 + -0x7efc))();
    if (piVar3 == (int *)0x0) {
      uVar5 = 0xfffffff6;
    }
    else {
      if (0 < iVar8) {
        iVar9 = iVar8 * piVar3[0x1a];
        if (0 < iVar9) {
          puVar4 = (undefined4 *)(**(code **)(in_stack_00000018 + -0x7ad0))(0,iVar9);
          if (puVar4 == (undefined4 *)0x0) {
            uVar5 = 0xfffffff5;
          }
          else {
            (**(code **)(in_stack_00000018 + -0x7e68))(piVar3[0x17],*puVar4,iVar8);
            iVar11 = *piVar3;
            iVar10 = piVar3[0x18];
            puVar4[2] = iVar9;
            iVar9 = piVar3[0x19];
            pcVar12 = *(code **)(in_stack_00000018 + -0x78c0);
            uVar5 = *(undefined4 *)(iVar11 + 4);
            puVar4[10] = iVar10;
            puVar4[0xb] = iVar9;
            uVar2 = (*pcVar12)(iVar8,uVar5);
            uVar6 = uVar2 + iVar10;
            piVar3[0x18] = uVar6;
            piVar3[0x19] = (uint)(uVar6 < uVar2) + ((int)uVar2 >> 0x1f) + iVar9;
            uVar5 = (*(code *)(iVar1 + -0x18f0))();
            (**(code **)(in_stack_00000018 + -0x7cf8))(puVar4);
          }
          goto LAB_0003ed84;
        }
      }
      uVar5 = 0xffffffdc;
    }
LAB_0003ed84:
    iVar9 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar5);
    if (iVar9 != 0) {
      return uVar5;
    }
  } while( true );
}



// ==== __stop_resample @ 00040398 size=188

undefined4 __stop_resample(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x940,0x72,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770,0x72,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x930);
  }
  piVar1 = (int *)(*pcVar4)();
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffe1;
  }
  else {
    if (*piVar1 != 0) {
      (*(code *)PTR_rts_audio_resample_free_00063aa8)();
    }
    *piVar1 = 0;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== compute_max_peak @ 00041aa0 size=1060

/* WARNING: Removing unreachable block (ram,0x00041ca4) */
/* WARNING: Removing unreachable block (ram,0x00041db8) */

void compute_max_peak(ushort *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort *puVar11;
  uint local_40 [7];
  ushort *puVar12;
  
  if (param_3 == 0x10) {
    uVar10 = 2;
  }
  else if (param_3 == 0x18) {
    uVar10 = 0x20;
  }
  else {
    if (param_3 != 8) {
      uVar10 = 0x19;
      goto LAB_00041d60;
    }
    uVar10 = 1;
  }
  iVar3 = (*(code *)PTR_snd_pcm_format_little_endian_0006399c)(uVar10);
  local_40[2] = 0;
  local_40[3] = 0;
  if (param_3 == 0x10) {
    param_2 = param_2 >> 1;
    sVar2 = (*(code *)PTR_snd_pcm_format_silence_16_000636d4)(uVar10);
    uVar7 = 0;
    while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
      if (iVar3 == 0) {
        uVar5 = *param_1 >> 8 | *param_1 << 8;
      }
      else {
        uVar5 = *param_1;
      }
      uVar6 = (int)(short)uVar5 >> 0x1f;
      uVar6 = (int)(((uVar6 ^ (int)(short)uVar5) - uVar6) * 0x10000) >> 0x10 ^ (int)sVar2;
      if ((int)local_40[uVar7 + 2] < (int)uVar6) {
        local_40[uVar7 + 2] = uVar6;
      }
      param_1 = param_1 + 1;
      if (param_4 == 2) {
        uVar7 = uVar7 ^ 1;
      }
    }
  }
  else if (param_3 == 0x18) {
    uVar6 = (*(code *)PTR_snd_pcm_format_silence_32_00063930)(uVar10);
    param_2 = param_2 / 3;
    uVar7 = 0;
    while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
      if (iVar3 == 0) {
        uVar9 = (uint)(byte)*param_1 << 0x10 | (uint)*(byte *)((int)param_1 + 1) << 8 |
                (uint)(byte)param_1[1];
      }
      else {
        uVar9 = (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)(byte)param_1[1] << 0x10 |
                (uint)(byte)*param_1;
      }
      if ((int)uVar9 >> 0x17 != 0) {
        uVar9 = uVar9 | 0xff000000;
      }
      uVar9 = ((int)uVar9 >> 0x1f ^ uVar9) - ((int)uVar9 >> 0x1f) ^ uVar6;
      if ((int)local_40[uVar7 + 2] < (int)uVar9) {
        local_40[uVar7 + 2] = uVar9;
      }
      param_1 = (ushort *)((int)param_1 + 3);
      if (param_4 == 2) {
        uVar7 = uVar7 ^ 1;
      }
    }
  }
  else {
    if (param_3 != 8) {
      uVar10 = 0x5f;
LAB_00041d60:
                    /* WARNING: Could not recover jumptable at 0x00041d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1a8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0xe30,uVar10);
      return;
    }
    bVar1 = (*(code *)PTR_snd_pcm_format_silence_00063510)(uVar10);
    puVar12 = param_1;
    uVar7 = 0;
    while (puVar11 = (ushort *)((int)puVar12 + 1), puVar12 != (ushort *)((int)param_1 + param_2)) {
      uVar6 = (uint)(char)(bVar1 ^ (byte)*puVar12);
      uVar9 = (int)uVar6 >> 0x1f;
      uVar9 = (uVar9 ^ uVar6) - uVar9;
      if ((int)local_40[uVar7 + 2] < (int)uVar9) {
        local_40[uVar7 + 2] = uVar9;
      }
      puVar12 = puVar11;
      if (param_4 == 2) {
        uVar7 = uVar7 ^ 1;
      }
    }
  }
  iVar3 = 1 << (param_3 - 1U & 0x1f);
  if (iVar3 < 1) {
    iVar3 = 0x7fffffff;
  }
  iVar4 = 0;
  for (iVar8 = 0; iVar8 < param_4; iVar8 = iVar8 + 1) {
    if (param_3 < 0x11) {
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      *(int *)((int)local_40 + iVar4 + 0x10) = (*(int *)((int)local_40 + iVar4 + 8) * 100) / iVar3;
    }
    else {
      if (iVar3 / 100 == 0) {
        trap(0x1c00);
      }
      *(int *)((int)local_40 + iVar4 + 0x10) = *(int *)((int)local_40 + iVar4 + 8) / (iVar3 / 100);
    }
    iVar4 = iVar4 + 4;
  }
  iVar3 = (*(code *)PTR_time_000634f0)(0);
  iVar4 = 0;
  if (0 < iVar3) {
    local_40[0] = 0;
    local_40[1] = 0;
  }
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    iVar8 = *(int *)((int)local_40 + iVar4 + 0x10);
    if (*(int *)((int)local_40 + iVar4) < iVar8) {
      *(int *)((int)local_40 + iVar4) = iVar8;
      *(int *)(param_5 + iVar4) = iVar8;
    }
    iVar4 = iVar4 + 4;
  }
  return;
}



// ==== __update_amixer_scale @ 0004253c size=244

undefined4 __update_amixer_scale(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf40;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x13b4,0x37,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,0x37,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x139c);
  }
  if (5 < *(uint *)(param_1 + 0x100)) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 3;
    return 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x000425d4 */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_s_snd_device_0004ffec_0x14_0006326c +
                                      *(uint *)(param_1 + 0x100) * 4 + 0x1050)))();
  return uVar1;
}



// ==== __amixer_pre_disconnect @ 00042710 size=376

undefined4 __amixer_pre_disconnect(int param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x13e4,0x328,param_2);
    uVar4 = 0x328;
  }
  else {
    if (param_2 != (undefined *)0x0) goto LAB_000427d4;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x69bc;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x13e4,0x329,param_2);
    uVar4 = 0x329;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,uVar4,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x13cc);
LAB_000427d4:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar4 = 0xfffffff6;
  }
  else {
    uVar2 = (*(code *)PTR_rts_av_get_pipe_id_000639d8)(param_2);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if ((iVar3 == 0) && (uVar2 < 5)) {
      (*(code *)(PTR_LAB_00063274 + 0x2630))(iVar1 + uVar2 * 0x20);
      uVar4 = 0;
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf48,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + 0x13e4,0x331,uVar2);
      uVar4 = 0xffffffcc;
    }
  }
  return uVar4;
}



// ==== __is_droppable @ 00042888 size=128

uint __is_droppable(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x12c4,0x11d,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,0x11d,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x12b4);
  }
  return *(uint *)(param_1 + 0xc) & 1;
}



// ==== client @ 00042908 size=132

bool client(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1190,0x127,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,0x127,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1180);
  }
  return *(int *)(param_1 + 0x14) == 3;
}



// ==== client_00042a38 @ 00042a38 size=184

bool client_00042a38(undefined *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0xf70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1224,0x10c,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,0x10c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x120c);
  }
  if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    bVar1 = false;
    if (*(int *)(param_1 + 0x14) == 3) {
      iVar2 = (*(code *)PTR_rts_audio_fifo_size_00063470)(*(undefined4 *)(param_1 + 4));
      bVar1 = 0x4000 < iVar2;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



