/* librtstream — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== FUN_00019e80 @ 00019e80 size=72

void FUN_00019e80(void)

{
  if (((undefined *)0x6 < PTR___DT_PLTGOT_00063258 + (3 - (int)(PTR_DAT_0006325c + 0x3250))) &&
     (PTR__ITM_deregisterTMCloneTable_00063ab0 != (undefined *)0x0)) {
    (*(code *)PTR__ITM_deregisterTMCloneTable_00063ab0)();
    return;
  }
  return;
}



// ==== FUN_00019ec8 @ 00019ec8 size=80

void FUN_00019ec8(void)

{
  if ((((int)PTR___DT_PLTGOT_00063258 - (int)(PTR_DAT_0006325c + 0x3250) >> 2) -
       ((int)PTR___DT_PLTGOT_00063258 - (int)(PTR_DAT_0006325c + 0x3250) >> 0x1f) >> 1 != 0) &&
     (PTR__ITM_registerTMCloneTable_0006338c != (undefined *)0x0)) {
    (*(code *)PTR__ITM_registerTMCloneTable_0006338c)();
    return;
  }
  return;
}



// ==== FUN_00019f18 @ 00019f18 size=216

void FUN_00019f18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0006325c;
  if (PTR_DAT_0006325c[0x3bf0] == '\0') {
    if (PTR___cxa_finalize_00063af4 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00063af4)(*(undefined4 *)PTR_LOOP_00063260);
    }
    puVar2 = PTR_DAT_0006325c;
    puVar3 = PTR_DAT_0006325c + 0x303c;
    iVar6 = (int)PTR_DAT_00063264 - (int)puVar3;
    while (uVar4 = *(uint *)(puVar2 + 0x3bf4), iVar5 = uVar4 + 1, uVar4 < (iVar6 >> 2) - 1U) {
      *(int *)(puVar2 + 0x3bf4) = iVar5;
      (**(code **)(puVar3 + iVar5 * 4))();
    }
    (*(code *)(PTR_LAB_00063268 + -0x6180))();
    puVar1[0x3bf0] = 1;
  }
  return;
}



// ==== FUN_00019ff0 @ 00019ff0 size=68

void FUN_00019ff0(void)

{
  if ((*(int *)(PTR_DAT_0006325c + 0x304c) != 0) &&
     (PTR__Jv_RegisterClasses_00063484 != (undefined *)0x0)) {
    (*(code *)PTR__Jv_RegisterClasses_00063484)(PTR_DAT_0006325c + 0x304c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001a038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_LAB_00063268 + -0x6138))();
  return;
}



// ==== FUN_0001a060 @ 0001a060 size=116

undefined4 FUN_0001a060(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    return 0xffffffcc;
  }
  if ((*param_1 & 0x8000) == 0) {
    if (param_1[1] == 0) {
      return 0xffffffcc;
    }
    if (param_1[2] == 0) {
      return 0xffffffcc;
    }
    if (param_1[3] == 0) {
      return 0xffffffcc;
    }
    uVar1 = param_1[4];
  }
  else {
    if (param_1[1] == 0) {
      return 0xffffffcc;
    }
    if (param_1[2] == 0) {
      return 0xffffffcc;
    }
    uVar1 = param_1[3];
  }
  uVar2 = 0xffffffcc;
  if (uVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== FUN_0001a0d4 @ 0001a0d4 size=120

void FUN_0001a0d4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0006325c;
  iVar3 = 0;
  while( true ) {
    iVar2 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(puVar1 + 0x3c08));
    if (iVar2 <= iVar3) {
      return;
    }
    iVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(puVar1 + 0x3c08),iVar3);
    if (param_1 == *(int *)(iVar2 + 4)) break;
    iVar3 = iVar3 + 1;
  }
  return;
}



// ==== FUN_0001a158 @ 0001a158 size=40

undefined4 FUN_0001a158(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (-1 < param_2)) {
    iVar1 = (*(code *)PTR_rts_queue_count_00063a84)();
    if (param_2 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001a1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(param_1);
      return uVar2;
    }
  }
  return 0;
}



// ==== FUN_0001a1c8 @ 0001a1c8 size=80

void FUN_0001a1c8(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    SYNC(0);
    *(int *)(iVar1 + 0x88) = *(int *)(iVar1 + 0x88) + -1;
    SYNC(0);
  }
  (*(code *)PTR_rts_free_000638d4)();
  return;
}



// ==== FUN_0001a298 @ 0001a298 size=172

undefined4 FUN_0001a298(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != 0) && (iVar3 = 0, *(int *)(param_1 + 100) != 0)) {
    for (; iVar1 = (*(code *)PTR_rts_queue_count_00063a84)(*(undefined4 *)(param_1 + 100)),
        iVar3 < iVar1; iVar3 = iVar3 + 1) {
      uVar2 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 100),iVar3);
      uVar2 = (*(code *)PTR_rts_av_pipe_poll_00063a48)(uVar2);
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// ==== FUN_0001a344 @ 0001a344 size=228

void FUN_0001a344(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_28 [7];
  
  if (param_1 == (int *)0x0) {
    piVar3 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cd0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61f0,0x525,piVar3);
    uVar2 = 0x525;
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
    param_1 = piVar3;
  }
  else {
    if (*param_1 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61f0,0x526,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c74);
    }
    if (*param_1 != 0) goto LAB_0001a414;
    uVar2 = 0x526;
    piVar3 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c74);
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (piVar3,puVar1,uVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61fc);
LAB_0001a414:
    if (param_1[2] == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61f0,0x527,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c68);
    }
    if (param_1[2] != 0) break;
    uVar2 = 0x527;
    piVar3 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c68);
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  (*(code *)PTR_rts_av_get_buffer_profile_0006386c)(param_1[2],local_28);
  if (local_28[0] == 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c58,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61f0,0x52c);
  }
  (*(code *)*param_1)(param_1[1],local_28,param_1[2]);
  return;
}



// ==== FUN_0001a4e4 @ 0001a4e4 size=104

void FUN_0001a4e4(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      (*(code *)PTR_rts_av_put_buffer_00063548)();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    (*(code *)PTR_rts_free_000638d4)(param_1);
    return;
  }
  return;
}



// ==== FUN_0001a54c @ 0001a54c size=128

undefined4 FUN_0001a54c(int param_1,undefined4 *param_2,uint *param_3,undefined *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  code *pcVar8;
  int local_30 [6];
  
  if (param_1 == 0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6190,0x578,puVar6);
    param_3 = (uint *)&DAT_00000578;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8);
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0001a61c;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c30;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6190,0x579,puVar6);
    param_3 = (uint *)&DAT_00000579;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8);
  }
  do {
    param_4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61a0;
    while( true ) {
      (*(code *)PTR___assert_000637b8)(puVar6);
LAB_0001a61c:
      puVar6 = PTR_rts_av_get_buffer_0006379c;
      if (param_3 == (uint *)0x0) break;
      if (((param_4 == (undefined *)0x0) || (pcVar8 = (code *)*param_2, pcVar8 == (code *)0x0)) ||
         ((-1 < (int)param_2[3] && ((uint)param_2[3] <= param_3[2])))) {
        return 0;
      }
      if (*param_3 < (uint)param_2[2]) {
        *param_3 = *param_3 + 1;
        uVar1 = FUN_0001a8b4(4);
        return uVar1;
      }
      if (param_3[1] < (uint)param_2[4]) {
        param_3[1] = param_3[1] + 1;
        uVar1 = FUN_0001a8b4();
        return uVar1;
      }
      param_3[2] = param_3[2] + 1;
      param_3[1] = 0;
      iVar7 = param_2[5];
      uVar1 = param_2[1];
      (*(code *)puVar6)(param_4);
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c;
      if (iVar7 == 1) {
        (*(code *)PTR_rts_av_post_00063744)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61b0);
        local_30[0] = 0;
        local_30[1] = 0;
        local_30[2] = 0;
        local_30[3] = 0;
        local_30[4] = 0;
        (*(code *)PTR_rts_av_get_buffer_profile_0006386c)(param_4,local_30);
        if (local_30[0] == 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c58,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61bc,0x55c);
        }
        (*pcVar8)(uVar1,local_30,param_4);
        (*(code *)PTR_rts_av_put_buffer_00063548)(param_4);
        (*(code *)PTR_rts_av_wait_00063a58)(puVar6 + -0x61b0);
        return 0;
      }
      iVar7 = *(int *)(param_1 + 0x78);
      if (iVar7 == 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61d0,0x537,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c2c);
        iVar7 = *(int *)(param_1 + 0x78);
      }
      if (iVar7 != 0) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          iVar7 = (*(code *)PTR_rts_pthreadpool_init_00063664)(1);
          *(int *)(param_1 + 0xe0) = iVar7;
          if (iVar7 == 0) {
            return 0xfffffff5;
          }
        }
        puVar2 = (undefined4 *)
                 (*(code *)PTR___rts_calloc_00063a28)
                           (1,0xc,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61d0,0x541);
        puVar6 = PTR_rts_pthreadpool_add_task_000639b0;
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffff5;
        }
        puVar4 = PTR_LAB_00063268 + -0x5cbc;
        uVar3 = *(undefined4 *)(param_1 + 0xe0);
        puVar5 = PTR_LAB_00063268 + -0x5b1c;
        puVar2[2] = param_4;
        *puVar2 = pcVar8;
        puVar2[1] = uVar1;
        uVar1 = (*(code *)puVar6)(uVar3,puVar4,puVar2,puVar5);
        iVar7 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
        if (iVar7 == 0) {
          return uVar1;
        }
        (*(code *)PTR_rts_free_000638d4)(puVar2);
        return uVar1;
      }
      param_3 = (uint *)0x537;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c2c;
      param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8);
      param_4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x61e4;
    }
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cd0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6190,0x57a,puVar6);
    param_3 = (uint *)0x57a;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8);
  } while( true );
}



// ==== FUN_0001a8b4 @ 0001a8b4 size=40

undefined4 FUN_0001a8b4(void)

{
  return 0;
}



// ==== FUN_0001a8dc @ 0001a8dc size=76

undefined4 FUN_0001a8dc(undefined *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d90,0x16d,puVar2);
    param_1 = puVar2;
    (*(code *)PTR___assert_000637b8)
              (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x16d,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5da0);
  }
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = 0, *(int *)(puVar2 + 0x128) != 0)) {
    if (*(int *)(puVar2 + 0x18) != 0) {
      *(int *)(*(int *)(puVar2 + 0x124) + 8) = *(int *)(*(int *)(puVar2 + 0x124) + 8) + -1;
    }
    if (*(code **)(puVar2 + 0x34) == (code *)0x0) {
      uVar1 = 0;
      *(undefined4 *)(puVar2 + 0x128) = 0;
    }
    else {
      uVar1 = (**(code **)(puVar2 + 0x34))(puVar2);
      *(undefined4 *)(puVar2 + 0x128) = 0;
    }
  }
  return uVar1;
}



// ==== FUN_0001a9b8 @ 0001a9b8 size=36

undefined4 FUN_0001a9b8(int *param_1,undefined *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c30);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0c,0x300,param_1);
    uVar1 = 0x300;
  }
  else {
    if (param_2 != (undefined *)0x0) goto LAB_0001aa70;
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cd0);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0c,0x301,param_1);
    uVar1 = 0x301;
  }
  param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8;
  (*(code *)PTR___assert_000637b8)
            (param_1,param_2,uVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f18);
LAB_0001aa70:
  uVar1 = 0xffffffef;
  if ((*param_1 != 0) && (uVar2 = param_1[3], uVar2 != 0)) {
    uVar1 = 0xffffffef;
    if ((int)uVar2 < 1) {
      uVar1 = 0;
    }
    else if (*(uint *)(param_2 + 8) < uVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== FUN_0001b1fc @ 0001b1fc size=704

void FUN_0001b1fc(undefined4 *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 != (undefined4 *)0x0) {
    puVar8 = (undefined *)*param_1;
    (*(code *)PTR_rts_av_wait_00063a58)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f58);
    if (puVar8 == (undefined *)0x0) goto LAB_0001b31c;
    bVar1 = true;
    if (*(int *)(puVar8 + 0x74) == 0) goto LAB_0001b2b0;
    bVar1 = *(int *)(puVar8 + 0x158) != param_1[1];
    goto LAB_0001b2b0;
  }
  puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b98;
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f58,0x297,puVar7);
  uVar5 = 0x297;
  puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f64;
  puVar8 = puVar7;
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar7,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,uVar5,puVar6);
LAB_0001b31c:
    bVar1 = true;
LAB_0001b2b0:
    (*(code *)PTR_rts_av_post_00063744)(puVar2 + -0x5f58);
    if (bVar1) break;
    if (puVar8 == (undefined *)0x0) {
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f74,0x281,puVar7);
      uVar5 = 0x281;
      puVar8 = puVar7;
    }
    else {
      if ((*(int *)(puVar8 + 0x3c) != 0) ||
         ((*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f74,0x282,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b90),
         *(int *)(puVar8 + 0x3c) != 0)) {
        puVar2 = PTR_rts_get_monotonic_raw_time_0006355c;
        *(int *)(puVar8 + 0x140) = *(int *)(puVar8 + 0x140) + 1;
        uVar12 = (*(code *)puVar2)();
        if (*(code **)(puVar8 + 0x3c) == (code *)0x0) {
          iVar3 = -0x35;
        }
        else {
          iVar3 = (**(code **)(puVar8 + 0x3c))(puVar8);
        }
        uVar13 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
        uVar9 = (uint)uVar13 - (int)uVar12;
        iVar10 = ((int)((ulonglong)uVar13 >> 0x20) - (int)((ulonglong)uVar12 >> 0x20)) -
                 (uint)((uint)uVar13 < uVar9);
        if (*(int *)(puVar8 + 0x10) == 0) {
          uVar11 = 40000000;
        }
        else {
          uVar11 = *(int *)(puVar8 + 0x10) * 1000000;
        }
        if (((iVar10 != 0) || (uVar11 < uVar9)) ||
           ((iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar3), iVar4 != 0 && (iVar3 != -0x11)))) {
          uVar5 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(puVar8);
          (*(code *)PTR___udivdi3_00063af8)(uVar9,iVar10,1000000,0,uVar5);
          (*(code *)PTR_rts_log_000635ec)
                    (3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b7c,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f74,0x28e);
        }
        return;
      }
      uVar5 = 0x282;
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b90;
    }
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f84;
  }
  return;
}



// ==== FUN_0001b4bc @ 0001b4bc size=336

void FUN_0001b4bc(undefined *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60b0,0x2ea,puVar3);
    param_1 = puVar3;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x2ea,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60c0);
  }
  if (((*(int *)(param_1 + 0x88) != 0) && (*(int *)(puVar3 + 0xd4) != 0)) &&
     ((*(code *)PTR_rts_pthreadpool_del_tasks_0006390c)
                (*(int *)(puVar3 + 0xd4),PTR_LAB_00063268 + -0x4e04,puVar3,
                 PTR___compare_task_00063b0c,PTR_LAB_00063268 + -0x5e38),
     puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c, *(int *)(puVar3 + 0x88) != 0)) {
    (*(code *)PTR_rts_av_post_00063744)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60b0);
    uVar2 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(puVar3);
    (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b4c,uVar2);
    while (*(int *)(puVar3 + 0x88) != 0) {
      (*(code *)PTR_rts_delay_0006332c)(3000,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x60b0);
    return;
  }
  return;
}



// ==== FUN_0001b6a4 @ 0001b6a4 size=128

undefined4 FUN_0001b6a4(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  *(undefined4 *)(param_1 + 0x74) = 0;
  puVar1 = PTR_rts_av_del_poll_fd_00063378;
  if (*(int *)(param_1 + 0xf8) != 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    (*(code *)puVar1)();
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  (*(code *)(PTR_LAB_00063268 + -0x49f4))(param_1);
  puVar2 = PTR_rts_av_post_00063744;
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  iVar5 = *(int *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  (*(code *)puVar2)(puVar1 + -0x6080);
  if (iVar5 != 0) {
    (*(code *)PTR_rts_pthreadpool_destroy_0006384c)(iVar5);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x6080);
  iVar5 = 0;
  if (*(int *)(param_1 + 0x68) == 0) {
LAB_0001b760:
    pcVar9 = *(code **)(param_1 + 0x30);
  }
  else {
    while (*(int *)(param_1 + 0x68) != 0) {
      iVar4 = (*(code *)PTR_rts_queue_count_00063a84)();
      if (iVar4 <= iVar5) goto LAB_0001b760;
      uVar6 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 0x68),iVar5);
      (*(code *)PTR_rts_av_pipe_clear_0006382c)(uVar6);
      iVar5 = iVar5 + 1;
    }
    pcVar9 = *(code **)(param_1 + 0x30);
  }
  uVar6 = 0xffffffcb;
  if (pcVar9 != (code *)0x0) {
    uVar6 = (*pcVar9)(param_1);
  }
  iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    for (; (*(int *)(param_1 + 100) != 0 &&
           (iVar4 = (*(code *)PTR_rts_queue_count_00063a84)(), iVar5 < iVar4)); iVar5 = iVar5 + 1) {
      uVar3 = (*(code *)PTR_rts_queue_enumerate_00063ac8)(*(undefined4 *)(param_1 + 100),iVar5);
      (*(code *)PTR_rts_av_pipe_clear_0006382c)(uVar3);
    }
  }
  iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
  pcVar9 = (code *)(PTR_LAB_00063268 + -0x4ec0);
  if (iVar5 == 0) {
    uVar10 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
    iVar5 = *(int *)(param_1 + 0x134);
    uVar8 = (uint)uVar10 - *(int *)(param_1 + 0x130);
    uVar3 = (*pcVar9)(param_1);
    uVar7 = *(undefined4 *)(param_1 + 0x138);
    (*(code *)PTR___udivdi3_00063af8)
              (uVar8,((int)((ulonglong)uVar10 >> 0x20) - iVar5) - (uint)((uint)uVar10 < uVar8),
               1000000,0,*(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x140),
               *(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x14c),
               *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
    (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b1c,uVar3,uVar7)
    ;
  }
  else {
    uVar3 = (*pcVar9)(param_1);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b3c,puVar1 + -0x6080,0x410,uVar3,
               uVar6);
  }
  return uVar6;
}



// ==== FUN_0001c924 @ 0001c924 size=4

undefined4 FUN_0001c924(undefined *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  puVar6 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60e4,0x3b4,puVar6);
    param_1 = puVar6;
    (*(code *)PTR___assert_000637b8)
              (puVar6,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0x3b4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60f4);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    return 0;
  }
  *(undefined4 *)(puVar6 + 0x74) = 1;
  uVar7 = 0;
  if ((*(int *)(puVar6 + 0x1c) != 0) && (uVar7 = 0, *(int *)(puVar6 + 0x128) == 0)) {
    if (*(int *)(puVar6 + 0x124) == 0) {
      if (*(int *)(puVar6 + 0x18) == 0) {
        iVar3 = (*(code *)PTR___rts_calloc_00063a28)
                          (1,0xc,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6110,0x147);
        *(int *)(puVar6 + 0x124) = iVar3;
        if (iVar3 != 0) goto LAB_0001ca18;
        uVar7 = 0xfffffff5;
      }
      else {
        uVar7 = (*(code *)PTR_rts_av_get_unit_owner_00063a60)();
        piVar2 = (int *)(*(code *)PTR_rts_av_get_stream_buffer_obj_00063820)(uVar7);
        iVar3 = *piVar2;
        *(int **)(puVar6 + 0x124) = piVar2;
        if (iVar3 != 0) goto LAB_0001c9d8;
LAB_0001ca18:
        iVar3 = *(int *)(puVar6 + 0x124);
        uVar7 = (*(code *)PTR___rts_calloc_00063a28)
                          (4,*(undefined4 *)(puVar6 + 0x1c),
                           PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6110,0x14d);
        iVar4 = *(int *)(puVar6 + 0x124);
        *(undefined4 *)(iVar3 + 4) = uVar7;
        iVar3 = *(int *)(iVar4 + 4);
        uVar8 = 0;
        if (iVar3 == 0) {
          uVar7 = 0xfffffff5;
        }
        else {
          for (; uVar8 < *(uint *)(puVar6 + 0x1c); uVar8 = uVar8 + 1) {
            iVar4 = (*(code *)PTR_rts_av_new_buffer_000639e0)(0);
            *(int *)(iVar3 + uVar8 * 4) = iVar4;
            if (iVar4 == 0) {
              uVar7 = 0xfffffff5;
              goto LAB_0001caf8;
            }
            (*(code *)PTR_rts_av_set_buffer_observer_000639c4)(iVar4,puVar6);
          }
          puVar9 = *(undefined4 **)(puVar6 + 0x124);
          uVar7 = (*(code *)PTR_rts_queue_init_000635dc)();
          piVar2 = *(int **)(puVar6 + 0x124);
          *puVar9 = uVar7;
          uVar7 = 0;
          if (*piVar2 != 0) goto LAB_0001cb0c;
          uVar7 = 0xfffffff6;
        }
LAB_0001caf8:
        (*(code *)(PTR_LAB_00063268 + -0x53f8))(puVar6);
      }
    }
    else {
LAB_0001c9d8:
      uVar7 = 0;
    }
LAB_0001cb0c:
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
    if (iVar3 == 0) {
      if (*(code **)(puVar6 + 0x28) != (code *)0x0) {
        uVar7 = (**(code **)(puVar6 + 0x28))(puVar6);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
        if (iVar3 != 0) {
          (*(code *)(PTR_LAB_00063268 + -0x53f8))(puVar6);
          goto LAB_0001cb90;
        }
      }
      *(undefined4 *)(puVar6 + 0x128) = 1;
      if (*(int *)(puVar6 + 0x18) != 0) {
        *(int *)(*(int *)(puVar6 + 0x124) + 8) = *(int *)(*(int *)(puVar6 + 0x124) + 8) + 1;
      }
    }
  }
LAB_0001cb90:
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
  if (iVar3 == 0) {
    if (*(code **)(puVar6 + 0x2c) == (code *)0x0) {
      uVar7 = 0xffffffcb;
    }
    else {
      uVar7 = (**(code **)(puVar6 + 0x2c))(puVar6);
    }
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
    if (iVar3 == 0) {
      (*(code *)(PTR_LAB_00063268 + -0x5544))(puVar6);
      if (((*(int *)(puVar6 + 0x78) != 0) && (-1 < *(int *)(puVar6 + 0x100))) &&
         (*(int *)(puVar6 + 0x104) != 0)) {
        iVar3 = (*(code *)PTR_rts_av_get_stream_loop_00063a54)();
        puVar1 = PTR_rts_av_add_poll_fd_00063864;
        if (iVar3 == 0) goto LAB_0001ccf8;
        *(undefined **)(puVar6 + 0xfc) = PTR_LAB_00063268 + -0x22f0;
        *(undefined **)(puVar6 + 0x108) = puVar6;
        uVar7 = (*(code *)puVar1)(iVar3,puVar6 + 0xfc);
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
        if (iVar4 == 0) {
          *(int *)(puVar6 + 0xf8) = iVar3;
        }
        else {
          pcVar10 = (code *)(PTR_LAB_00063268 + -0x4ec0);
          *(undefined4 *)(puVar6 + 0xf8) = 0;
          uVar5 = (*pcVar10)(puVar6);
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6a8c,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60e4,0x3d1,uVar5,uVar7);
          uVar7 = 0;
        }
      }
      uVar11 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
      *(undefined8 *)(puVar6 + 0x130) = uVar11;
      *(undefined4 *)(puVar6 + 0x138) = 0;
      *(undefined4 *)(puVar6 + 0x13c) = 0;
      *(undefined4 *)(puVar6 + 0x144) = 0;
      *(undefined4 *)(puVar6 + 0x148) = 0;
      *(undefined4 *)(puVar6 + 0x140) = 0;
      *(undefined4 *)(puVar6 + 0x14c) = 0;
      *(undefined4 *)(puVar6 + 0x150) = 0;
      *(int *)(puVar6 + 0x158) = *(int *)(puVar6 + 0x158) + 1;
      goto LAB_0001ccf8;
    }
  }
  *(undefined4 *)(puVar6 + 0x74) = 0;
LAB_0001ccf8:
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar7);
  if (iVar3 != 0) {
    uVar5 = (*(code *)(PTR_LAB_00063268 + -0x4ec0))(puVar6);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6a64,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x60e4,0x3e5,uVar5,uVar7);
    (*(code *)(PTR_LAB_00063268 + -0x5724))(puVar6);
  }
  return uVar7;
}



// ==== FUN_0001f530 @ 0001f530 size=40

uint FUN_0001f530(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 1;
  if ((param_1 & 2) != 0) {
    uVar1 = param_1 & 1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x80000000;
  }
  return uVar1;
}



// ==== FUN_000213e0 @ 000213e0 size=76

int * FUN_000213e0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(PTR_DAT_0006325c + 0x3c30);
  while( true ) {
    if (puVar1 == (undefined4 *)(PTR_DAT_0006325c + 0x3c30)) {
      return (int *)0x0;
    }
    if (puVar1[-4] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + -4;
}



// ==== FUN_0002142c @ 0002142c size=220

void FUN_0002142c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 4) != 0) &&
       (iVar3 = (*(code *)PTR_rts_av_get_unit_status_000632c4)(), iVar3 != 0)) {
      (*(code *)PTR_rts_av_disable_unit_0006331c)(*(undefined4 *)(param_1 + 4));
    }
    puVar1 = PTR_DAT_0006325c;
    piVar4 = *(int **)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x10);
    iVar5 = *(int *)(PTR_DAT_0006325c + 0x3c38);
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *(int *)(param_1 + 0x10) = param_1 + 0x10;
    *(int *)(param_1 + 0x14) = param_1 + 0x10;
    if ((iVar5 != 0) && (*(int *)(param_1 + 4) != 0)) {
      (*(code *)PTR_rts_av_stream_del_00063b5c)();
    }
    if (*(int *)(param_1 + 8) != 0) {
      (*(code *)PTR_rts_av_delete_pipe_0006366c)();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      (*(code *)PTR_rts_av_delete_pipe_0006366c)();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_rts_av_delete_unit_00063acc)();
    }
    puVar2 = PTR_rts_free_000638d4;
    *(undefined4 *)(param_1 + 4) = 0;
    (*(code *)puVar2)(param_1);
    if (*(undefined **)(puVar1 + 0x3c30) == PTR_DAT_0006325c + 0x3c30) {
      (*(code *)PTR_rts_av_cancel_00063644)(*(undefined4 *)(puVar1 + 0x3c38));
      return;
    }
  }
  return;
}



// ==== FUN_0002339c @ 0002339c size=124

undefined4 FUN_0002339c(undefined *param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_3 == 0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5424,0x3bf,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x3bf,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5430);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x5424);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar4 = 0xfffffff1;
  }
  else {
    puVar3 = (undefined *)(*(code *)PTR_rts_av_get_unit_id_000635a0)(*(undefined4 *)(iVar2 + 4));
    if (puVar3 == param_2) {
      uVar4 = (*(code *)PTR_rts_av_get_unit_attr_00063808)(*(undefined4 *)(iVar2 + 4),param_3);
    }
    else {
      uVar4 = 0xffffffe9;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5620,puVar1 + -0x5424,0x3cd,param_1,
                 puVar3,(uint)puVar3 >> 8,(uint)puVar3 >> 0x10,(uint)puVar3 >> 0x18,param_2,
                 (uint)param_2 >> 8,(uint)param_2 >> 0x10,(uint)param_2 >> 0x18);
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5424);
  return uVar4;
}



// ==== FUN_00023804 @ 00023804 size=284

undefined4 FUN_00023804(undefined *param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_3 == 0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5544,0x3df,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x57a4;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x3df,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5550);
  }
  (*(code *)PTR_rts_av_wait_00063a58)(puVar1 + -0x5544);
  iVar2 = (*(code *)(PTR_LAB_00063268 + 0x13e0))(param_1);
  if (iVar2 == 0) {
    uVar4 = 0xfffffff1;
  }
  else {
    puVar3 = (undefined *)(*(code *)PTR_rts_av_get_unit_id_000635a0)(*(undefined4 *)(iVar2 + 4));
    if (puVar3 == param_2) {
      uVar4 = (*(code *)PTR_rts_av_set_unit_attr_000633cc)(*(undefined4 *)(iVar2 + 4),param_3);
    }
    else {
      uVar4 = 0xffffffe9;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5620,puVar1 + -0x5544,0x3ed,param_1,
                 puVar3,(uint)puVar3 >> 8,(uint)puVar3 >> 0x10,(uint)puVar3 >> 0x18,param_2,
                 (uint)param_2 >> 8,(uint)param_2 >> 0x10,(uint)param_2 >> 0x18);
    }
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x5544);
  return uVar4;
}



// ==== FUN_00024048 @ 00024048 size=64

void FUN_00024048(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1[7] != 0)) && (*param_1 != 0)) {
    (*(code *)PTR_rts_av_loop_run_lk_000633ec)();
    return;
  }
  return;
}



// ==== FUN_00024694 @ 00024694 size=376

undefined4 FUN_00024694(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int unaff_gp;
  
  if (param_1 != (int *)0x0) {
    pcVar3 = *(code **)(unaff_gp + -0x76e0);
    if (*param_1 != 0) {
      (**(code **)(unaff_gp + -0x7bfc))();
      pcVar3 = *(code **)(unaff_gp + -0x76e0);
    }
    iVar1 = (*pcVar3)(param_1[3]);
    if (iVar1 == 0) goto LAB_00024720;
    iVar1 = 0;
    while (iVar1 != 0) {
      (**(code **)(unaff_gp + -0x76e4))(param_1,iVar1);
      (**(code **)(unaff_gp + -0x7774))(iVar1);
      iVar1 = (**(code **)(unaff_gp + -0x76e0))(param_1[3]);
      if (iVar1 != 0) break;
LAB_00024720:
      iVar1 = (**(code **)(unaff_gp + -0x7778))(param_1[3],0);
    }
    if (param_1[3] != 0) {
      (**(code **)(unaff_gp + -0x7f74))();
    }
    pcVar3 = *(code **)(unaff_gp + -0x7eb8);
    uVar2 = *(undefined4 *)(unaff_gp + -0x7bd4);
    param_1[3] = 0;
    (*pcVar3)(param_1[4],uVar2);
    if (param_1[4] != 0) {
      (**(code **)(unaff_gp + -0x7f74))();
    }
    iVar1 = *(int *)(unaff_gp + -0x7fd8);
    pcVar3 = *(code **)(unaff_gp + -0x7eb8);
    param_1[4] = 0;
    (*pcVar3)(param_1[5],iVar1 + 0x3f8c);
    if (param_1[5] != 0) {
      (**(code **)(unaff_gp + -0x7f74))();
    }
    pcVar3 = *(code **)(unaff_gp + -0x7a50);
    param_1[5] = 0;
    (*pcVar3)(param_1 + 8);
    if (param_1[7] != 0) {
      (**(code **)(unaff_gp + -0x7f84))();
    }
    pcVar3 = *(code **)(unaff_gp + -0x796c);
    param_1[7] = 0;
    (*pcVar3)(param_1);
  }
  return 0;
}



// ==== FUN_00025f74 @ 00025f74 size=104

void FUN_00025f74(int *param_1,int param_2)

{
  if (param_2 != 0) {
    (*(code *)PTR_rts_av_delete_buffer_000639b4)(param_2);
  }
  if (param_1 != (int *)0x0) {
    SYNC(0);
    *param_1 = *param_1 + -1;
    SYNC(0);
  }
  return;
}



// ==== FUN_000287c4 @ 000287c4 size=20

undefined4
FUN_000287c4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int in_v1;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  uint in_t8;
  int unaff_gp;
  
  if ((int)in_t8 < unaff_s4) {
    if (unaff_s0 == 0) {
      trap(0x1c00);
    }
    if (in_v1 == 0) {
      trap(0x1c00);
    }
    iVar1 = (param_2 - in_t8 % unaff_s0) * unaff_s5 + in_t8 / unaff_s0;
    iVar3 = iVar1 + 7;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    uVar5 = in_t8 + 7;
    if (-1 < (int)in_t8) {
      uVar5 = in_t8;
    }
    pbVar4 = (byte *)(unaff_s1 + (iVar3 >> 3));
    if (in_v1 == 0) {
      trap(0x1c00);
    }
    *pbVar4 = (byte)(((int)(uint)*(byte *)(unaff_s2 + ((int)uVar5 >> 3)) >>
                      ((int)in_t8 % in_v1 & 0x1fU) & 1U) << (iVar1 % in_v1 & 0x1fU)) | *pbVar4;
    uVar2 = FUN_000287c4();
    return uVar2;
  }
  (**(code **)(unaff_gp + -0x7938))();
  (**(code **)(param_5 + -0x796c))();
  return 0;
}



// ==== FUN_0002885c @ 0002885c size=240

undefined4
FUN_0002885c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int in_v1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  uint in_t8;
  int unaff_gp;
  uint uVar5;
  
  while ((int)in_t8 < unaff_s4) {
    if (unaff_s0 == 0) {
      trap(0x1c00);
    }
    uVar5 = (int)in_t8 % in_v1;
    if (in_v1 == 0) {
      trap(0x1c00);
    }
    iVar1 = (param_2 - in_t8 % unaff_s0) + (unaff_s5 - in_t8 / unaff_s0) * unaff_s0;
    iVar2 = iVar1 + 7;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    uVar4 = in_t8 + 7;
    if (-1 < (int)in_t8) {
      uVar4 = in_t8;
    }
    pbVar3 = (byte *)(unaff_s1 + (iVar2 >> 3));
    in_t8 = in_t8 + 1;
    if (in_v1 == 0) {
      trap(0x1c00);
    }
    *pbVar3 = (byte)(((int)(uint)*(byte *)(unaff_s2 + ((int)uVar4 >> 3)) >> (uVar5 & 0x1f) & 1U) <<
                    (iVar1 % in_v1 & 0x1fU)) | *pbVar3;
  }
  (**(code **)(unaff_gp + -0x7938))();
  (**(code **)(param_5 + -0x796c))();
  return 0;
}



// ==== FUN_00029090 @ 00029090 size=136

void FUN_00029090(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_s1;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4280);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40bc,0x32,puVar5);
    uVar4 = 0x32;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4278;
    param_1 = puVar5;
    param_2 = unaff_s1;
  }
  else {
    if (param_1[8] == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40bc,0x33,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4214);
    }
    if (param_1[8] != 0) goto LAB_00029168;
    uVar4 = 0x33;
    puVar5 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4214);
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4278;
  }
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar5,puVar2,uVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40d4);
LAB_00029168:
    if (param_2 != 0) break;
    puVar5 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40bc,0x34,puVar5);
    uVar4 = 0x34;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4278;
    param_1 = puVar5;
  }
  (*(code *)PTR_rts_v4l2_put_buffer_by_index_00063aec)(*param_1,*(undefined4 *)(param_2 + 0x14));
  uVar6 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  uVar7 = (*(code *)PTR_rts_av_get_buffer_ts_00063294)(param_2);
  uVar1 = (uint)uVar6 - (int)uVar7;
  iVar3 = ((int)((ulonglong)uVar6 >> 0x20) - (int)((ulonglong)uVar7 >> 0x20)) -
          (uint)((uint)uVar6 < uVar1);
  if ((iVar3 != 0) || (60000000 < uVar1)) {
    uVar6 = (*(code *)PTR___udivdi3_00063af8)(uVar1,iVar3,1000000,0);
    (*(code *)PTR_rts_log_000635ec)
              (3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x41d4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40bc,0x3b,uVar6);
  }
  return;
}



// ==== FUN_00029274 @ 00029274 size=92

int FUN_00029274(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



// ==== FUN_0002990c @ 0002990c size=156

undefined4 FUN_0002990c(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    uVar1 = 0;
    if (param_1[8] != 0) {
      (*(code *)PTR_rts_av_set_unit_poll_fd_0006395c)(param_1[0xe],0xffffffff,0);
      (*(code *)(PTR_LAB_00063270 + -0x7130))(param_1,0);
      if (-1 < *param_1) {
        (*(code *)PTR_rts_isp_v4l2_close_0006389c)();
      }
      uVar1 = 0;
      *param_1 = -1;
      param_1[8] = 0;
    }
  }
  return uVar1;
}



// ==== FUN_000299a8 @ 000299a8 size=156

undefined4 FUN_000299a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    (*(code *)(PTR_LAB_00063270 + -0x66f4))();
    do {
      iVar2 = param_1 + iVar1;
      if (*(int *)(iVar2 + 0x28) != 0) {
        (*(code *)PTR_rts_av_delete_buffer_000639b4)();
      }
      iVar1 = iVar1 + 4;
      *(undefined4 *)(iVar2 + 0x28) = 0;
    } while (iVar1 != 0x10);
    (*(code *)PTR_rts_free_000638d4)(param_1);
  }
  return 0;
}



// ==== FUN_00029e4c @ 00029e4c size=4

undefined4 FUN_00029e4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = *(undefined4 *)(param_1 + 0x74);
  uStack_14 = *(undefined4 *)(param_1 + 0x80);
  uVar1 = (*(code *)PTR_rts_isp_mem_realloc_000637d0)(*(undefined4 *)(param_1 + 0xdc),&uStack_20);
  iVar2 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(uVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x78) = uStack_20;
    *(undefined4 *)(param_1 + 0x7c) = uStack_1c;
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_osd2_encode_000635e8)
              (4,PTR_LAB_00063268 + -0x4060,PTR_LAB_00063268 + -0x3d40,0x7f,uVar1);
  }
  return uVar1;
}



// ==== FUN_00029f80 @ 00029f80 size=4

undefined4 FUN_00029f80(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4038;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d70,0x37,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,0x37,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d88);
  }
  if (*(undefined **)(param_1 + 0xe8) == param_1) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3fd4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d70,0x3a);
    uVar1 = 0xffffffe1;
  }
  return uVar1;
}



// ==== FUN_0002a0b0 @ 0002a0b0 size=156

void FUN_0002a0b0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (*(code *)PTR_rts_av_to_af_t_000632c0)();
    if (-1 < *(int *)(iVar2 + 0xdc)) {
      (*(code *)PTR_rts_isp_ctrl_close_00063660)();
    }
    puVar1 = PTR_rts_free_buffer_000639e8;
    *(undefined4 *)(iVar2 + 0xdc) = 0xffffffff;
    (*(code *)puVar1)(iVar2 + 0xe0);
    (*(code *)(PTR_LAB_00063270 + -0x6100))(iVar2);
    (*(code *)PTR_rts_free_000638d4)(iVar2);
    return;
  }
  return;
}



// ==== FUN_0002aaf0 @ 0002aaf0 size=256

undefined4 FUN_0002aaf0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_60 = param_2;
  local_1c = param_2;
  uVar2 = (*(code *)PTR_rts_v4l2_queryctrl_000639ec)(param_1,&local_60);
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar3 == 0) {
    uVar2 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)(param_1,&local_1c);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    puVar1 = PTR_memcpy_00063908;
    if ((iVar3 == 0) && (uVar2 = 0, param_3 != (undefined4 *)0x0)) {
      *param_3 = local_5c;
      (*(code *)puVar1)(param_3 + 1,auStack_58,0x20);
      param_3[9] = local_38;
      param_3[10] = local_34;
      param_3[0xb] = local_30;
      param_3[0xc] = local_2c;
      param_3[0xe] = local_28;
      param_3[0xd] = local_18;
    }
  }
  return uVar2;
}



// ==== FUN_0002acec @ 0002acec size=168

undefined4 FUN_0002acec(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [2];
  
  uVar1 = (*(code *)PTR_rts_isp_get_gray_mode_00063650)(param_1,local_18);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    (*(code *)PTR_strcpy_000636f8)(param_2 + 4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ca0);
    *(undefined4 *)(param_2 + 0x28) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 1;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = local_18[0];
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0002ad94 @ 0002ad94 size=220

int FUN_0002ad94(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_rts_isp_get_wdr_mode_00063848)();
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar1);
  if (iVar2 == 0) {
    if (iVar1 == 1) {
      uVar3 = 1;
    }
    else if (iVar1 == 2) {
      uVar3 = 2;
    }
    else {
      if (iVar1 != 0) {
        return -0x31;
      }
      uVar3 = 0;
    }
    (*(code *)PTR_strcpy_000636f8)(param_2 + 4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3c94);
    *(undefined4 *)(param_2 + 0x28) = 2;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 1;
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = uVar3;
    iVar1 = 0;
  }
  return iVar1;
}



// ==== FUN_0002ae70 @ 0002ae70 size=164

undefined4 FUN_0002ae70(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_rts_isp_get_wdr_level_000637fc)();
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    (*(code *)PTR_strcpy_000636f8)(param_2 + 4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3c88);
    *(undefined4 *)(param_2 + 0x28) = 100;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 1;
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0002af14 @ 0002af14 size=936

undefined4 FUN_0002af14(undefined4 param_1,undefined *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3c74;
    (*(code *)PTR___assert_000637b8)
              (PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3c7c,param_2,0x2a5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x387c);
  }
  if (param_2 + -0x27 < (undefined *)0x10) {
                    /* WARNING: Could not emulate address calculation at 0x0002af78 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_s_snd_device_0004ffec_0x14_0006326c +
                                        (int)(param_2 + -0x27) * 4 + -0x3a30)))();
    return uVar1;
  }
  return 0xffffffe3;
}



// ==== FUN_0002b528 @ 0002b528 size=228

undefined4 FUN_0002b528(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_70 [52];
  uint local_3c;
  undefined4 local_24;
  uint local_20;
  
  uVar1 = (*(code *)(PTR_LAB_00063270 + -0x5510))(param_1,0x98f900,auStack_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    if (*param_2 == 0) {
      local_3c = local_3c & ~(1 << (param_3 != 0));
    }
    else {
      local_3c = local_3c | 1 << (param_3 != 0);
    }
    local_24 = 0x98f900;
    local_20 = local_3c;
    uVar1 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(param_1,&local_24);
  }
  return uVar1;
}



// ==== FUN_0002c7f4 @ 0002c7f4 size=128

void FUN_0002c7f4(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_free_buffer_000639e8)(param_1 + 0x168);
    (*(code *)PTR_rts_free_buffer_000639e8)(param_1 + 0x170);
    (*(code *)PTR_rts_free_buffer_000639e8)(param_1 + 0x178);
                    /* WARNING: Could not recover jumptable at 0x0002c85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(PTR_LAB_00063270 + -0x389c))(param_1);
    return;
  }
  return;
}



// ==== FUN_0002c9a4 @ 0002c9a4 size=140

void FUN_0002c9a4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (*(code *)PTR_rts_av_to_awb_t_00063838)();
    if (-1 < *(int *)(iVar2 + 0x164)) {
      (*(code *)PTR_rts_isp_ctrl_close_00063660)();
    }
    puVar1 = PTR_LAB_00063270;
    *(undefined4 *)(iVar2 + 0x164) = 0xffffffff;
    (*(code *)(puVar1 + -0x380c))(iVar2);
    (*(code *)PTR_rts_free_000638d4)(iVar2);
    return;
  }
  return;
}



// ==== FUN_0002d070 @ 0002d070 size=68

undefined4 FUN_0002d070(void)

{
  int iVar1;
  int iVar2;
  int in_a3;
  undefined4 uVar3;
  int unaff_s0;
  undefined4 unaff_s1;
  int unaff_gp;
  int in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  if (in_a3 != *(int *)(unaff_s0 + 0x10c)) {
    (**(code **)(unaff_gp + -0x7c54))(1,*(int *)(unaff_gp + -0x7fd4) + -0x34e4);
    in_stack_00000020 = 0x98091a;
    in_stack_00000024 = *(undefined4 *)(unaff_s0 + 0x90);
    unaff_s1 = (**(code **)(in_stack_00000018 + -0x7ec4))
                         (*(undefined4 *)(unaff_s0 + 0x164),&stack0x00000020);
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s1);
    unaff_gp = in_stack_00000018;
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_s0 + 0x10c) = *(undefined4 *)(unaff_s0 + 0x90);
      unaff_s1 = 0;
    }
    else {
      (**(code **)(in_stack_00000018 + -0x7c54))
                (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x34c0,
                 *(int *)(in_stack_00000018 + -0x7fd4) + -0x31ec,0x11a);
    }
  }
  iVar1 = (**(code **)(unaff_gp + -0x7ec0))(unaff_s1);
  if (iVar1 == 0) {
    unaff_s1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x3c30))();
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(unaff_s1);
    if (iVar1 == 0) {
      uVar3 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x393c))();
      return uVar3;
    }
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar3 = 0x1ed;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3630;
  }
  else {
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4);
    uVar3 = 0x1e7;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x33a4;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,iVar2 + -0x3178,uVar3);
  return unaff_s1;
}



// ==== FUN_0002d9f0 @ 0002d9f0 size=144

undefined4 FUN_0002d9f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 local_70;
  undefined1 local_6e [62];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  char local_1a [6];
  
  local_28 = 0x9a0901;
  uVar1 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)(*(undefined4 *)(param_1 + 0x15c),&local_28);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar5 = local_24;
  if (iVar2 == 0) {
    local_28 = 0x98f903;
    uVar1 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)(*(undefined4 *)(param_1 + 0x15c),&local_28);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 == 0) {
      uVar6 = (undefined2)local_24;
      uVar1 = (*(code *)PTR_rts_isp_get_ae_gain_00063a34)
                        (*(undefined4 *)(param_1 + 0x15c),&local_20);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
      if (iVar2 == 0) {
        local_28 = 0x9a0902;
        uVar1 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)
                          (*(undefined4 *)(param_1 + 0x15c),&local_28);
        iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
        if (iVar2 != 0) {
          uVar5 = 0xd6;
          puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x30c0;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29ec;
          goto LAB_0002dae4;
        }
        uVar1 = (*(code *)PTR_rts_isp_get_ae_target_delta_00063708)
                          (*(undefined4 *)(param_1 + 0x15c),local_1a);
        iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
        if (iVar2 == 0) {
          uVar1 = (*(code *)PTR_rts_isp_get_ae_gain_max_000633bc)
                            (*(undefined4 *)(param_1 + 0x15c),&local_70);
          iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
          if (iVar2 == 0) {
            uVar1 = (*(code *)PTR_rts_isp_get_ae_min_fps_0006394c)
                              (*(undefined4 *)(param_1 + 0x15c),local_6e);
            iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
            if (iVar2 == 0) {
              local_30 = *(undefined4 *)(param_1 + 0x74);
              local_2c = *(undefined4 *)(param_1 + 0x160);
              uVar1 = (*(code *)PTR_rts_isp_get_ae_weight_000633f4)
                                (*(undefined4 *)(param_1 + 0x15c),&local_30);
              iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
              if (iVar2 != 0) {
                (*(code *)PTR_rts_log_000635ec)
                          (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2ff8,
                           PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29ec,0xf2,uVar1);
                return uVar1;
              }
              *(undefined2 *)(param_1 + 0x84) = local_1e;
              *(undefined2 *)(param_1 + 0x86) = local_1c;
              *(undefined4 *)(param_1 + 0x88) = local_24;
              *(undefined2 *)(param_1 + 0xfc) = local_1e;
              *(undefined2 *)(param_1 + 0xfe) = local_1c;
              *(undefined4 *)(param_1 + 0x100) = local_24;
              puVar3 = PTR_memcpy_00063908;
              *(undefined4 *)(param_1 + 0x7c) = uVar5;
              *(undefined2 *)(param_1 + 0x80) = uVar6;
              *(undefined2 *)(param_1 + 0x82) = local_20;
              *(int *)(param_1 + 0xa0) = (int)local_1a[0];
              *(undefined2 *)(param_1 + 0xa4) = local_70;
              *(undefined1 *)(param_1 + 0xa6) = local_6e[0];
              *(undefined4 *)(param_1 + 0xf4) = uVar5;
              *(undefined2 *)(param_1 + 0xf8) = uVar6;
              *(undefined2 *)(param_1 + 0xfa) = local_20;
              *(int *)(param_1 + 0x118) = (int)local_1a[0];
              *(undefined2 *)(param_1 + 0x11c) = local_70;
              *(undefined1 *)(param_1 + 0x11e) = local_6e[0];
              (*(code *)puVar3)(*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x160),
                                *(undefined4 *)(param_1 + 0x164));
              return 0;
            }
            uVar5 = 0xea;
            puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3020;
            puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29ec;
          }
          else {
            uVar5 = 0xe4;
            puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3048;
            puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29ec;
          }
        }
        else {
          uVar5 = 0xdd;
          puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3074;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29ec;
        }
      }
      else {
        uVar5 = 0xcc;
        puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3098;
        puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29ec;
      }
      (*(code *)PTR_rts_log_000635ec)(4,puVar3,puVar4,uVar5,uVar1);
      return uVar1;
    }
    uVar5 = 0xc5;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x30c0;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29ec;
  }
  else {
    uVar5 = 0xbd;
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x30c0;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29ec;
  }
LAB_0002dae4:
  (*(code *)PTR_rts_log_000635ec)(4,puVar3,puVar4,uVar5,local_28,uVar1);
  return uVar1;
}



// ==== FUN_0002df20 @ 0002df20 size=56

void FUN_0002df20(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_free_buffer_000639e8)(param_1 + 0x160);
    (*(code *)PTR_rts_free_buffer_000639e8)(param_1 + 0x168);
    (*(code *)PTR_rts_free_buffer_000639e8)(param_1 + 0x170);
    (*(code *)PTR_rts_free_buffer_000639e8)(param_1 + 0x178);
    (*(code *)(PTR_LAB_00063270 + -0x2178))(param_1);
    return;
  }
  return;
}



// ==== FUN_0002e0e0 @ 0002e0e0 size=4

void FUN_0002e0e0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (*(code *)PTR_to_ae_t_00063ad4)();
    if (-1 < *(int *)(iVar2 + 0x15c)) {
      (*(code *)PTR_rts_isp_ctrl_close_00063660)();
    }
    puVar1 = PTR_LAB_00063270;
    *(undefined4 *)(iVar2 + 0x15c) = 0xffffffff;
    (*(code *)(puVar1 + -0x20e0))(iVar2);
    (*(code *)PTR_rts_free_000638d4)(iVar2);
    return;
  }
  return;
}



// ==== FUN_0002f160 @ 0002f160 size=724

undefined4 FUN_0002f160(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_4c;
  undefined1 local_44;
  int local_40;
  int local_3c;
  undefined4 local_24;
  undefined4 local_20;
  
  puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (((param_1 == 0) || (pcVar4 = (code *)PTR_H264EncGetRateCtrl_00063a5c, param_2 == 0)) &&
     (((*(code *)PTR_rts_log_000635ec)
                 (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                  PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2238,0xf5,
                  PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2970), param_1 == 0 ||
      (pcVar4 = (code *)PTR_H264EncGetRateCtrl_00063a5c, param_2 == 0)))) {
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar2 + -0x2970,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0xf5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2250);
  }
  iVar1 = (*pcVar4)(param_1,&local_90);
  if (iVar1 != 0) {
    uVar3 = 0xf9;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28f4;
LAB_0002f26c:
    (*(code *)PTR_rts_log_000635ec)
              (4,puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2238,uVar3,iVar1);
    return 0xffffffe5;
  }
  iVar1 = (*(code *)PTR_H264EncGetCodingCtrl_00063374)(param_1,&local_158);
  if (iVar1 != 0) {
    uVar3 = 0xff;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28c8;
    goto LAB_0002f26c;
  }
  local_44 = 4;
  iVar1 = *(int *)(param_2 + 4);
  local_90 = 1;
  local_88 = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  if (iVar1 == 4) {
    local_84 = *(uint *)(param_2 + 0x14);
    local_80 = *(int *)(param_2 + 0x1c);
    local_7c = *(int *)(param_2 + 0x18);
  }
  else {
    if (iVar1 == 8) {
      local_40 = *(int *)(param_2 + 0xc);
      local_3c = *(int *)(param_2 + 0x10);
      local_80 = *(int *)(param_2 + 0x1c);
      local_7c = *(int *)(param_2 + 0x18);
      *(uint *)(param_2 + 8) = (uint)(local_3c + local_40) >> 1;
      local_84 = (uint)(local_7c + local_80) >> 1;
      local_4c = 1;
      goto LAB_0002f338;
    }
    if (iVar1 != 2) goto LAB_0002f338;
    local_84 = *(uint *)(param_2 + 0x14);
    local_80 = 10;
    local_7c = 0x33;
  }
  local_4c = 0;
LAB_0002f338:
  local_78 = *(undefined4 *)(param_2 + 8);
  local_24 = *(undefined4 *)(param_2 + 0x5c);
  local_68 = *(undefined4 *)(param_2 + 0x20);
  local_6c = *(undefined4 *)(param_2 + 0x24);
  local_74 = *(undefined4 *)(param_2 + 0x4c);
  local_70 = *(undefined4 *)(param_2 + 0x50);
  local_8c = *(undefined4 *)(param_2 + 0x58);
  local_20 = *(undefined4 *)(param_2 + 0x60);
  if (-1 < *(int *)(param_2 + 0x54)) {
    local_5c = *(int *)(param_2 + 0x54);
  }
  local_158 = *(undefined4 *)(param_2 + 0x28);
  local_154 = *(undefined4 *)(param_2 + 0x2c);
  local_140 = 0;
  local_14c = *(undefined4 *)(param_2 + 0x30);
  local_13c = 0;
  local_148 = *(undefined4 *)(param_2 + 0x34);
  local_128 = 0;
  local_144 = *(undefined4 *)(param_2 + 0x38);
  local_124 = 0;
  local_138 = *(undefined4 *)(param_2 + 0x3c);
  local_120 = 0;
  local_134 = *(undefined4 *)(param_2 + 0x40);
  local_11c = 0;
  local_130 = *(undefined4 *)(param_2 + 0x44);
  local_118 = 0;
  local_12c = 1;
  local_b4 = *(undefined4 *)(param_2 + 0x48);
  local_114 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_b8 = 0;
  iVar1 = (*(code *)PTR_H264EncSetRateCtrl_0006357c)(param_1,&local_90);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_H264EncSetCodingCtrl_00063b28)(param_1,&local_158);
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = 0x14e;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2870;
  }
  else {
    uVar3 = 0x148;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x289c;
  }
  (*(code *)PTR_rts_log_000635ec)
            (4,puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2238,uVar3,iVar1);
  return 0xffffffe4;
}



// ==== FUN_0002f4a4 @ 0002f4a4 size=140

undefined4 FUN_0002f4a4(undefined *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_e8 [144];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2844;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2368,0x28c,puVar4);
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x28c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x237c);
  }
  if (*(int *)(param_1 + 0x254) == 0) {
    uVar3 = 0xffffffe1;
  }
  else {
    iVar2 = (*(code *)PTR_H264EncGetCodingCtrl_00063374)(*(int *)(param_1 + 0x254),auStack_e8);
    if (iVar2 == 0) {
      puVar5 = puVar4 + 0x25c;
      (*(code *)PTR_pthread_mutex_lock_00063ae8)(puVar5);
      *(undefined4 *)(puVar4 + 0x1f0) = local_58;
      *(undefined4 *)(puVar4 + 0x1f8) = 3;
      puVar1 = PTR_H264EncGetMbSizeInfo_0006375c;
      *(undefined4 *)(puVar4 + 0x1fc) = local_54;
      *(undefined4 *)(puVar4 + 0x200) = local_50;
      *(undefined4 *)(puVar4 + 0x204) = local_4c;
      iVar2 = (*(code *)puVar1)(*(undefined4 *)(puVar4 + 0x254),&local_20);
      puVar1 = PTR_pthread_mutex_unlock_00063890;
      if (iVar2 == 0) {
        *(undefined4 *)(puVar4 + 0x1e8) = local_18;
        *(undefined4 *)(puVar4 + 0x1e4) = local_1c;
        puVar4[0x1ec] = local_20;
        puVar4[0x1ed] = local_1f;
        (*(code *)puVar1)(puVar5);
        return 0;
      }
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x283c,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2368,0x2a3,iVar2);
      (*(code *)PTR_pthread_mutex_unlock_00063890)(puVar5);
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28c8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2368,0x293,iVar2);
    }
    uVar3 = 0xffffffe5;
  }
  return uVar3;
}



// ==== FUN_0002f6f4 @ 0002f6f4 size=20

undefined1 FUN_0002f6f4(undefined *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x27e4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22dc,0x218,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x218,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22f0);
  }
  uVar1 = 2;
  if ((*(int *)(param_1 + 0x90) == 0) && (uVar1 = 1, *(int *)(param_1 + 0x58) == 0)) {
    uVar1 = *(int *)(param_1 + 0x6c) != 0;
  }
  return uVar1;
}



// ==== FUN_0002f80c @ 0002f80c size=44

void FUN_0002f80c(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_to_h1_t_000635b0)();
    (*(code *)PTR_pthread_mutex_destroy_00063828)(iVar1 + 0x25c);
    if (*(int *)(iVar1 + 500) != 0) {
      (*(code *)PTR_rts_free_000638d4)();
    }
    *(undefined4 *)(iVar1 + 500) = 0;
    if (*(int *)(iVar1 + 0x228) != 0) {
      (*(code *)PTR_rts_free_000638d4)();
    }
    *(undefined4 *)(iVar1 + 0x228) = 0;
    (*(code *)PTR_rts_free_000638d4)(iVar1);
    return;
  }
  return;
}



// ==== FUN_00031820 @ 00031820 size=40

int FUN_00031820(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if ((iVar1 == 0) || (*(int *)(iVar1 + 500) == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



// ==== FUN_00031930 @ 00031930 size=32

void FUN_00031930(undefined4 param_1)

{
  (*(code *)PTR_rts_av_find_attribute_0006340c)
            (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x219c);
  return;
}



// ==== FUN_00031950 @ 00031950 size=80

void FUN_00031950(void)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00063270 + 0x1930))();
  if (iVar1 != 0) {
    (*(code *)PTR_to_h264_ctrl_00063710)(iVar1);
    return;
  }
  return;
}



// ==== FUN_0003265c @ 0003265c size=64

void FUN_0003265c(uint *param_1)

{
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0x1f) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0003268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_rts_av_set_buffer_offset_000635bc)(param_1,0x20 - (*param_1 & 0x1f));
    return;
  }
  return;
}



// ==== FUN_00033760 @ 00033760 size=208

undefined4 FUN_00033760(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffff5;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 500) != 0) {
      (*(code *)PTR_memset_000637dc)(param_1 + 0x13c,0,0x30);
      (*(code *)PTR_memset_000637dc)(param_1 + 0x16c,0,0x28);
      if (*(int *)(param_1 + 0xe0) != 0) {
        (*(code *)PTR_H264EncRelease_00063780)();
      }
      pcVar2 = (code *)(PTR_LAB_00063270 + 0x1930);
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0x1f8) = 0;
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined4 *)(param_1 + 500) = 0;
      uVar1 = (*pcVar2)(*(undefined4 *)(param_1 + 0x27c));
      (*(code *)PTR_set_h1_ctrl_owner_00063ae0)
                (uVar1,0,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== FUN_00033830 @ 00033830 size=240

undefined4 FUN_00033830(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    (*(code *)(PTR_LAB_00063270 + 0x3760))();
    if (-1 < *(int *)(param_1 + 0x120)) {
      (*(code *)PTR_rts_isp_v4l2_close_0006389c)();
    }
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
    iVar1 = 0;
    if (*(int *)(param_1 + 0x210) == 0) {
      iVar1 = *(int *)(param_1 + 0x20c);
    }
    else {
      do {
        iVar2 = param_1 + iVar1;
        if (*(int *)(iVar2 + 0x1c8) != 0) {
          (*(code *)PTR_rts_queue_destroy_000632cc)();
        }
        iVar1 = iVar1 + 4;
        *(undefined4 *)(iVar2 + 0x1c8) = 0;
      } while (iVar1 != 0xc);
      iVar1 = *(int *)(param_1 + 0x20c);
    }
    if (iVar1 != 0) {
      (*(code *)PTR_rts_av_delete_buffer_000639b4)(*(undefined4 *)(param_1 + 0x1e0));
    }
    (*(code *)PTR_rts_free_000638d4)(param_1);
  }
  return 0;
}



// ==== FUN_00035c18 @ 00035c18 size=96

undefined4 FUN_00035c18(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      (*(code *)PTR_rts_osd2_release_000639c8)();
    }
    puVar1 = PTR_rts_free_000638d4;
    *(undefined4 *)(param_1 + 0x14) = 0;
    (*(code *)puVar1)(param_1);
  }
  return 0;
}



// ==== FUN_00035fcc @ 00035fcc size=408

undefined4 FUN_00035fcc(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int unaff_s4;
  undefined8 uVar7;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == (undefined *)0x0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x14f0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x12c4,0xe9,puVar6);
    uVar5 = 0xe9;
    param_2 = unaff_s4;
  }
  else {
    puVar6 = param_1;
    if (-1 < param_2) goto LAB_0003609c;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c88;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x12c4,0xea,puVar6);
    uVar5 = 0xea;
  }
  param_1 = puVar6;
  (*(code *)PTR___assert_000637b8)
            (puVar6,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558,uVar5,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x12dc);
LAB_0003609c:
  uVar5 = (*(code *)PTR_rts_av_get_unit_loop_0006364c)(*(undefined4 *)(param_1 + 0x7c));
  uVar7 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  *(int *)(puVar6 + 0x74) = (int)((ulonglong)uVar7 >> 0x20);
  puVar2 = PTR_rts_av_wait_00063a58;
  *(int *)(puVar6 + 0x70) = (int)uVar7;
  (*(code *)puVar2)(puVar1 + -0x12c4);
  *(int *)(puVar6 + 0x78) = *(int *)(puVar6 + 0x78) + 1;
  puVar2 = PTR_rts_av_add_task_00063900;
  *(undefined **)(puVar6 + 0x40) = PTR_LAB_00063270 + 0x6504;
  *(undefined4 *)(puVar6 + 0x48) = 10;
  *(undefined **)(puVar6 + 0x44) = puVar6;
  uVar3 = (*(code *)puVar2)(uVar5,puVar6 + 0x40);
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (iVar4 != 0) {
    *(int *)(puVar6 + 0x78) = *(int *)(puVar6 + 0x78) + -1;
    uVar5 = speex_resampler_get_output_stride(4,puVar2 + -0x14e8,puVar1 + -0x12c4,0xf7,uVar3);
    return uVar5;
  }
  *(undefined4 *)(puVar6 + 0x28) = 5;
  puVar2 = PTR_rts_av_add_poll_fd_00063864;
  *(undefined **)(puVar6 + 0x20) = PTR_LAB_00063270 + 0x6400;
  *(int *)(puVar6 + 0x24) = param_2;
  *(undefined **)(puVar6 + 0x2c) = puVar6;
  uVar5 = (*(code *)puVar2)(uVar5,puVar6 + 0x20);
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
  if (iVar4 != 0) {
    (*(code *)PTR_rts_av_del_task_000637f0)(puVar6 + 0x40);
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    *(int *)(puVar6 + 0x78) = *(int *)(puVar6 + 0x78) + -1;
    (*(code *)PTR_rts_log_000635ec)(4,puVar2 + -0x14b8,puVar1 + -0x12c4,0x103,uVar5);
  }
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x12c4);
  return 0;
}



// ==== FUN_000362dc @ 000362dc size=116

undefined4 FUN_000362dc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x14f0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x131c,0xaa,puVar4);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558;
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,param_2,0xaa,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1334);
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar2 = 0xffffffef;
  }
  else {
    uVar2 = (*(code *)PTR_rts_osd2_check_done_0006369c)(*(undefined4 *)(puVar4 + 0x14));
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    puVar1 = PTR_rts_av_del_poll_fd_00063378;
    if ((iVar3 == 0) || (param_2 != (undefined *)0x0)) {
      *(int *)(puVar4 + 0x78) = *(int *)(puVar4 + 0x78) + -1;
      (*(code *)puVar1)(puVar4 + 0x20);
      *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
      puVar1 = PTR_rts_av_del_task_000637f0;
      *(undefined4 *)(puVar4 + 0x20) = 0;
      *(undefined4 *)(puVar4 + 0x2c) = 0;
      (*(code *)puVar1)(puVar4 + 0x40);
      (*(code *)PTR_rts_osd2_make_rdy_00063818)(*(undefined4 *)(puVar4 + 0x14));
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== FUN_00036504 @ 00036504 size=36

void FUN_00036504(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1348,0xd6,puVar3);
    rts_audio_codec_check_encode_id(puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558,0xd6);
    return;
  }
  puVar3 = *(undefined **)(param_1 + 4);
  pcVar5 = (code *)PTR_rts_get_monotonic_raw_time_0006355c;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x14f0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1348,0xd8,puVar3);
    pcVar5 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1558,0xd8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x135c);
  }
  uVar6 = (*pcVar5)();
  uVar4 = (uint)uVar6 - *(int *)(puVar3 + 0x70);
  uVar1 = (*(code *)(PTR_LAB_00063270 + 0x62dc))
                    (puVar3,(int)((ulonglong)uVar6 >> 0x20) - *(int *)(puVar3 + 0x74) !=
                            (uint)((uint)uVar6 < uVar4) || 299999999 < uVar4);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    *(int *)(puVar3 + 0x6c) = *(int *)(puVar3 + 0x6c) + 1;
  }
  return;
}



// ==== FUN_00036ca0 @ 00036ca0 size=52

undefined4 FUN_00036ca0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x70) + param_2 * 0x44;
    local_18 = *(undefined4 *)(iVar2 + 0x20);
    uVar1 = *(int *)(param_1 + 0x88) * 1000;
    local_14 = ((*(int *)(param_1 + 0x84) * *(int *)(iVar2 + 0x24) + uVar1) - 1) / uVar1;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    local_10 = ((uVar1 + *(int *)(param_1 + 0x84) * *(int *)(iVar2 + 0x28)) - 1) / uVar1;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    uVar3 = (*(code *)PTR_rts_osd2_set_attr_000634ac)
                      (*(undefined4 *)(param_1 + 0x8c),param_2,&local_18);
    return uVar3;
  }
  return 0xfffffff6;
}



// ==== FUN_00036d64 @ 00036d64 size=20

undefined4 FUN_00036d64(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1270;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xeac,0x26,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1264,0x26,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xec8);
  }
  if (*(undefined **)(param_1 + 0x90) == param_1) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x11f8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xeac,0x29);
    uVar1 = 0xffffffe1;
  }
  return uVar1;
}



// ==== FUN_00036e94 @ 00036e94 size=116

void FUN_00036e94(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_to_osdenc_t_00063588)();
    if (*(int *)(iVar1 + 0x70) != 0) {
      (*(code *)PTR_rts_free_000638d4)();
    }
    *(undefined4 *)(iVar1 + 0x70) = 0;
    (*(code *)PTR_rts_free_000638d4)(iVar1);
    return;
  }
  return;
}



// ==== FUN_00038180 @ 00038180 size=92

int FUN_00038180(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x44) == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



// ==== FUN_00039258 @ 00039258 size=104

void FUN_00039258(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_memset_000637dc)(param_1 + 0x20,0,0x18);
  (*(code *)PTR_rts_av_set_buffer_callback_00063998)(*(undefined4 *)(param_1 + 0x38),0,0);
  (*(code *)PTR_rts_queue_clear_00063388)
            (*(undefined4 *)(param_1 + 0x3c),PTR_rts_av_put_buffer_00063548);
  iVar2 = *(int *)(param_1 + 0x38);
  iVar1 = (*(code *)PTR_rts_av_get_buffer_refs_00063538)(iVar2);
  if (iVar1 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xc7c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x96c,0x119);
  }
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    (*(code *)PTR_free_dma_memory_00063580)(*(undefined4 *)(param_1 + 0x1c),iVar2);
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
  }
  if (-1 < *(int *)(param_1 + 0x1c)) {
    (*(code *)PTR_rts_isp_mem_close_000634b0)();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  if (*(int *)(param_1 + 0x18) != 0) {
    (*(code *)PTR_rtsjpgenc_release_00063a7c)();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// ==== FUN_00039b84 @ 00039b84 size=184

undefined4 FUN_00039b84(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      (*(code *)(PTR_LAB_00063274 + -0x6da8))();
    }
    if (-1 < *(int *)(param_1 + 0x40)) {
      (*(code *)PTR_rts_isp_v4l2_close_0006389c)();
    }
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    if (*(int *)(param_1 + 0x3c) != 0) {
      (*(code *)PTR_rts_queue_destroy_000632cc)();
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      (*(code *)PTR_rts_av_delete_buffer_000639b4)();
    }
    puVar1 = PTR_rts_free_000638d4;
    *(undefined4 *)(param_1 + 0x38) = 0;
    (*(code *)puVar1)(param_1);
  }
  return 0;
}



// ==== FUN_0003a000 @ 0003a000 size=88

void FUN_0003a000(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = (*(code *)PTR_to_mjpeg_t_00063528)(), iVar1 != 0)) {
    (*(code *)PTR_rts_free_000638d4)(iVar1);
    return;
  }
  return;
}



// ==== FUN_0003a970 @ 0003a970 size=108

undefined4 FUN_0003a970(int param_1,int param_2)

{
  uint local_10 [3];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    local_10[0] = (uint)(param_2 != 0);
    (*(code *)PTR_RTAecNs_API_Set_00063658)(*(int *)(param_1 + 0x18),local_10,4,0);
    return 0;
  }
  return 0xfffffff6;
}



// ==== FUN_0003ae78 @ 0003ae78 size=216

void FUN_0003ae78(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      (*(code *)PTR_RTAecNs_API_free_00063544)();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      (*(code *)PTR_rts_audio_fifo_free_00063474)();
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      (*(code *)PTR_rts_audio_fifo_free_00063474)();
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      (*(code *)PTR_rts_audio_fifo_free_00063474)();
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      (*(code *)PTR_rts_free_000638d4)();
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      (*(code *)PTR_rts_free_000638d4)();
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



// ==== FUN_0003b32c @ 0003b32c size=2488

/* WARNING: Removing unreachable block (ram,0x0003b858) */
/* WARNING: Removing unreachable block (ram,0x0003b87c) */

undefined4 FUN_0003b32c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  uint uVar16;
  undefined4 *local_38 [2];
  int local_30;
  
  local_38[0] = (undefined4 *)0x0;
  if (param_1 != 0) goto LAB_0003b4a8;
  puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3e0,0x252,puVar10);
  uVar8 = 0x252;
  puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0;
  puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ec;
LAB_0003b49c:
  (*(code *)PTR___assert_000637b8)(puVar10,puVar7,uVar8,puVar9);
LAB_0003b4a8:
  piVar3 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
  puVar10 = PTR_LAB_00063274;
  if (piVar3 == (int *)0x0) {
    return 0xfffffff6;
  }
  iVar12 = 10;
  puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x574;
  puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x584;
  do {
    (*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,local_38);
    if (local_38[0] != (undefined4 *)0x0) {
      iVar2 = (*(code *)PTR_rts_av_get_buffer_source_00063714)();
      if (iVar2 == 0) {
        iVar2 = -0x1f;
      }
      else {
        iVar2 = (*(code *)PTR_rts_av_get_pipe_id_000639d8)(iVar2);
      }
      puVar4 = local_38[0];
      if (iVar2 == piVar3[0x35]) {
        if (piVar3[8] == 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x404,0x153,puVar9);
        }
        uVar8 = 0x153;
        if (piVar3[8] == 0) {
          puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x584;
        }
        else {
          if (puVar4 != (undefined4 *)0x0) {
            uVar8 = (*(code *)PTR_rts_audio_fifo_size_00063470)();
            uVar13 = puVar4[10];
            iVar14 = puVar4[0xb];
            iVar5 = (*(code *)PTR_rts_audio_calc_ts_delta_00063980)(uVar8,piVar3[0x33]);
            uVar6 = uVar13 - iVar5;
            uVar16 = (uint)puVar4[2] / (uint)piVar3[5];
            if (piVar3[5] == 0) {
              trap(0x1c00);
            }
            iVar2 = piVar3[8];
            piVar3[10] = uVar6;
            piVar3[0xb] = (iVar14 - (iVar5 >> 0x1f)) - (uint)(uVar13 < uVar6);
LAB_0003bb98:
            (*(code *)PTR_rts_audio_fifo_write_0006363c)(iVar2,*puVar4,uVar16);
LAB_0003bba8:
            if (local_38[0] != (undefined4 *)0x0) {
              (*(code *)PTR_rts_av_put_buffer_00063548)();
            }
            local_38[0] = (undefined4 *)0x0;
            bVar1 = false;
            goto LAB_0003b5e0;
          }
          puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x404,0x154,puVar10);
          uVar8 = 0x154;
        }
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0;
        puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x41c;
      }
      else {
        iVar2 = piVar3[7];
        if (iVar2 == 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x434,0x177,puVar7);
          iVar2 = piVar3[7];
        }
        if (iVar2 == 0) {
          uVar8 = 0x177;
          puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x574;
        }
        else {
          if (puVar4 != (undefined4 *)0x0) {
            iVar2 = (*(code *)PTR_rts_audio_is_end_000632a4)(puVar4);
            if (iVar2 == 0) {
              if (piVar3[1] == 0) {
                piVar3[1] = 1;
              }
              if (*piVar3 == 0) {
                (*(code *)PTR_pthread_mutex_lock_00063ae8)(piVar3 + 0x11);
                *piVar3 = 1;
                (*(code *)(puVar10 + -0x5690))(piVar3,piVar3[0x10]);
                (*(code *)PTR_pthread_mutex_unlock_00063890)(piVar3 + 0x11);
              }
              if (piVar3[2] == 0) {
                uVar8 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar3[7]);
                iVar2 = (*(code *)PTR_rts_audio_calc_ts_delta_00063980)(uVar8,piVar3[0x33]);
                uVar16 = puVar4[10] - iVar2;
                piVar3[0xd] = (puVar4[0xb] - (iVar2 >> 0x1f)) - (uint)((uint)puVar4[10] < uVar16);
                piVar3[0xc] = uVar16;
                piVar3[2] = 1;
              }
              iVar2 = piVar3[7];
              uVar16 = (uint)puVar4[2] / (uint)piVar3[5];
              if (piVar3[5] == 0) {
                trap(0x1c00);
              }
              goto LAB_0003bb98;
            }
            piVar3[1] = 0;
            piVar3[3] = 0;
            goto LAB_0003bba8;
          }
          puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x434,0x178,puVar10);
          uVar8 = 0x178;
        }
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0;
        puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x44c;
      }
      goto LAB_0003b49c;
    }
    bVar1 = true;
LAB_0003b5e0:
    iVar2 = piVar3[8];
    if (iVar2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45c,0x228,puVar9);
      iVar2 = piVar3[8];
    }
    if (iVar2 == 0) {
      uVar8 = 0x228;
      puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x584;
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0;
      goto LAB_0003b788;
    }
    iVar2 = piVar3[7];
    if (iVar2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45c,0x229,puVar7);
      iVar2 = piVar3[7];
    }
    if (iVar2 == 0) {
      uVar8 = 0x229;
      puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x574;
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0;
      goto LAB_0003b788;
    }
    iVar2 = piVar3[0x1e];
    if (iVar2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45c,0x22a,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x564);
      iVar2 = piVar3[0x1e];
    }
    if (iVar2 == 0) {
      uVar8 = 0x22a;
      puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x564;
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0;
      goto LAB_0003b788;
    }
    iVar2 = piVar3[0x1f];
    if (iVar2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45c,0x22b,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x554);
      iVar2 = piVar3[0x1f];
    }
    if (iVar2 == 0) {
      uVar8 = 0x22b;
      puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x554;
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0;
      goto LAB_0003b788;
    }
    iVar2 = piVar3[0x37];
    if (iVar2 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x45c,0x22c,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x544);
      iVar2 = piVar3[0x37];
    }
    if (iVar2 == 0) break;
    iVar2 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar3[8]);
    if (piVar3[4] <= iVar2) {
      (*(code *)PTR_memset_000637dc)(piVar3[0x1e],0,piVar3[0x20]);
      (*(code *)PTR_memset_000637dc)(piVar3[0x1f],0,piVar3[0x20]);
      (*(code *)PTR_rts_audio_fifo_read_000633d8)(piVar3[8],piVar3[0x1e],piVar3[4]);
      iVar2 = piVar3[10];
      iVar5 = piVar3[0xb];
      uVar16 = (*(code *)PTR_rts_audio_calc_ts_delta_00063980)(piVar3[4],piVar3[0x33]);
      piVar3[10] = uVar16 + iVar2;
      piVar3[0xb] = (uint)(uVar16 + iVar2 < uVar16) + ((int)uVar16 >> 0x1f) + iVar5;
      puVar15 = PTR_LAB_00063274;
      if (*piVar3 != 0) {
        iVar11 = piVar3[0x33];
        iVar14 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar3[7]);
        if ((0 < iVar14) && (piVar3[0xc] - iVar2 < 5000)) {
          local_30 = ((15000 - (piVar3[0xc] - iVar2)) * (iVar11 / 100)) / 10000;
          if (iVar14 <= local_30) {
            local_30 = iVar14;
          }
          (*(code *)PTR_rts_audio_fifo_drain_00063458)(piVar3[7],local_30);
          iVar14 = (*(code *)PTR_rts_audio_calc_ts_delta_00063980)(local_30,iVar11);
          uVar6 = piVar3[0xc];
          uVar16 = uVar6 + iVar14;
          piVar3[0xc] = uVar16;
          piVar3[0xd] = (uint)(uVar16 < uVar6) + piVar3[0xd] + (iVar14 >> 0x1f);
        }
        iVar14 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar3[7]);
        puVar15 = PTR_LAB_00063274;
        if (iVar14 < piVar3[4]) {
          if (piVar3[1] == 0) {
            if (0 < iVar14) {
              local_30 = iVar14;
              (*(code *)PTR_rts_audio_fifo_read_000633d8)(piVar3[7],piVar3[0x1f],iVar14);
              iVar14 = local_30;
              goto LAB_0003b9dc;
            }
            iVar14 = piVar3[3];
            piVar3[3] = iVar14 + 1;
            if (2 < iVar14 + 1) {
              (*(code *)PTR_pthread_mutex_lock_00063ae8)(piVar3 + 0x11);
              *piVar3 = 0;
              (*(code *)(puVar10 + -0x5690))(piVar3,0);
              (*(code *)PTR_pthread_mutex_unlock_00063890)(piVar3 + 0x11);
              (*(code *)PTR_rts_audio_fifo_reset_000632d0)(piVar3[7]);
              piVar3[0xc] = 0;
              piVar3[0xd] = 0;
              piVar3[3] = 0;
              puVar15 = PTR_LAB_00063274;
            }
          }
        }
        else if ((uint)((piVar3[0xc] + -5000) - iVar2) < 0x7531) {
          (*(code *)PTR_rts_audio_fifo_read_000633d8)(piVar3[7],piVar3[0x1f]);
          iVar14 = piVar3[4];
LAB_0003b9dc:
          iVar14 = (*(code *)PTR_rts_audio_calc_ts_delta_00063980)(iVar14,iVar11);
          uVar6 = piVar3[0xc];
          uVar16 = uVar6 + iVar14;
          piVar3[0xc] = uVar16;
          piVar3[0xd] = (uint)(uVar16 < uVar6) + piVar3[0xd] + (iVar14 >> 0x1f);
          puVar15 = PTR_LAB_00063274;
        }
      }
      (*(code *)(puVar15 + -0x4e80))(piVar3);
      if (piVar3[0xe] == 0 && piVar3[0xf] == 0) {
        piVar3[0xe] = iVar2;
        piVar3[0xf] = iVar5;
      }
      (*(code *)PTR_rts_audio_fifo_write_0006363c)(piVar3[9],piVar3[0x1e],piVar3[4]);
      if ((((piVar3[0x36] < 6) &&
           (iVar2 = (*(code *)PTR_rts_audio_fifo_size_00063470)(piVar3[9]), 0 < iVar2)) &&
          (iVar2 * piVar3[5] != 0)) &&
         (puVar4 = (undefined4 *)(*(code *)PTR_rts_audio_new_buffer_00063770)(piVar3 + 0x36),
         puVar4 != (undefined4 *)0x0)) {
        (*(code *)PTR_rts_audio_fifo_read_000633d8)(piVar3[9],*puVar4,iVar2);
        (*(code *)PTR_rts_audio_calc_volume_00063b1c)(puVar4,iVar2,piVar3[0x31],piVar3[0x32]);
        iVar14 = piVar3[5];
        iVar5 = piVar3[0xe];
        puVar4[0xb] = piVar3[0xf];
        puVar4[10] = iVar5;
        iVar5 = piVar3[0x37];
        puVar4[2] = iVar2 * iVar14;
        piVar3[0xf] = 0;
        puVar15 = PTR_rts_av_push_back_output_buffer_lk_00063a0c;
        piVar3[0xe] = 0;
        (*(code *)puVar15)(iVar5,puVar4);
        (*(code *)PTR_rts_av_put_buffer_00063548)(puVar4);
      }
      piVar3[2] = 0;
    }
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(0);
    if (iVar2 != 0) {
      return 0;
    }
    iVar12 = iVar12 + -1;
    if (bVar1) {
      return 0;
    }
    if (iVar12 == 0) {
      return 0;
    }
  } while( true );
  uVar8 = 0x22c;
  puVar10 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x544;
  puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0;
LAB_0003b788:
  puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x46c;
  goto LAB_0003b49c;
}



// ==== FUN_0003be28 @ 0003be28 size=492

undefined4 FUN_0003be28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  pcVar5 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a0,0xd5,puVar3);
    pcVar5 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,0xd5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4ac);
  }
  iVar1 = (*pcVar5)();
  if (iVar1 == 0) {
    return 0xfffffff6;
  }
  if (*(int *)(iVar1 + 0x18) != 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0xcc) == 0) {
    return 0xffffffe1;
  }
  iVar2 = (*(code *)PTR_RTAecNs_API_context_Create_00063824)();
  *(int *)(iVar1 + 0x18) = iVar2;
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_rts_audio_fifo_alloc_00063804)
                      (*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200),0x400);
    *(int *)(iVar1 + 0x1c) = iVar2;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_rts_audio_fifo_alloc_00063804)
                        (*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200),0x400);
      *(int *)(iVar1 + 0x20) = iVar2;
      if (iVar2 != 0) {
        iVar2 = (*(code *)PTR_rts_audio_fifo_alloc_00063804)
                          (*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200),0x400);
        *(int *)(iVar1 + 0x24) = iVar2;
        puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                            (1,*(undefined4 *)(iVar1 + 0x80),
                             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4b8,99);
          *(int *)(iVar1 + 0x78) = iVar2;
          if (iVar2 != 0) {
            iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                              (1,*(undefined4 *)(iVar1 + 0x80),puVar3 + -0x4b8,0x67);
            *(int *)(iVar1 + 0x7c) = iVar2;
            if (iVar2 != 0) {
              uVar4 = 0;
              goto LAB_0003bfb4;
            }
          }
        }
      }
    }
  }
  uVar4 = 0xfffffff5;
  (*(code *)(PTR_LAB_00063274 + -0x5188))(iVar1);
LAB_0003bfb4:
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
  if (iVar1 == 0) {
    return 0;
  }
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x538,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4a0,0xe2);
  return uVar4;
}



// ==== FUN_0003c2f0 @ 0003c2f0 size=248

undefined4 FUN_0003c2f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffff6;
  }
  else {
    iVar2 = 0;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 100) != 0) {
        (*(code *)PTR_rts_av_set_buffer_callback_00063998)(*(int *)(iVar3 + 100),0,0);
      }
      iVar2 = iVar2 + 4;
      iVar3 = param_1 + iVar2;
    } while (iVar2 != 0x14);
    if (*(int *)(param_1 + 0x78) != 0) {
      (*(code *)PTR_rts_queue_clear_00063388)
                (*(int *)(param_1 + 0x78),PTR_rts_av_put_buffer_00063548);
      if (*(int *)(param_1 + 0x78) != 0) {
        (*(code *)PTR_rts_queue_destroy_000632cc)();
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    iVar2 = 0;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 100) != 0) {
        (*(code *)PTR_rts_av_delete_buffer_000639b4)();
        *(undefined4 *)(iVar3 + 100) = 0;
      }
      iVar2 = iVar2 + 4;
      iVar3 = param_1 + iVar2;
    } while (iVar2 != 0x14);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0003c9b4 @ 0003c9b4 size=204

undefined4 FUN_0003c9b4(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    uVar1 = 0;
    if (param_1[0x16] != 0) {
      if (param_1[0x22] != 0) {
        (*(code *)PTR_rts_av_set_unit_poll_fd_0006395c)(param_1[0x22],0xffffffff,0);
      }
      if (param_1[0x17] != 0) {
        if (param_1[0x18] != 0) {
          (*(code *)(PTR_LAB_00063274 + -0x3d10))(param_1);
        }
        param_1[0x17] = 0;
        if (param_1[0x1f] != 0) {
          (*(code *)PTR_rts_audio_tfilter_free_00063608)();
        }
        param_1[0x1f] = 0;
      }
      if (*param_1 != 0) {
        (*(code *)PTR_snd_pcm_close_000638b8)();
      }
      *param_1 = 0;
      uVar1 = 0;
      param_1[0x16] = 0;
    }
  }
  return uVar1;
}



// ==== FUN_0003e130 @ 0003e130 size=116

undefined4 FUN_0003e130(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (param_1[0x17] != 0) {
      (*(code *)PTR_rts_audio_fifo_free_00063474)();
    }
    param_1[0x17] = 0;
    if (*param_1 != 0) {
      (*(code *)PTR_rts_audio_free_codec_context_000638dc)();
    }
    *param_1 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0003f740 @ 0003f740 size=136

int FUN_0003f740(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_4 = param_4 >> 3;
  iVar2 = -0x15;
  if ((param_4 != 0) && (0 < param_3)) {
    iVar1 = (int)((ulonglong)((longlong)param_2 * (longlong)param_3) >> 0x20);
    if (0 < param_2) {
      uVar3 = (0x7fffffff - param_2) / param_4;
      if (param_4 == 0) {
        trap(0x1c00);
      }
      iVar2 = (int)uVar3 >> 0x1f;
      if ((iVar2 < iVar1) ||
         ((iVar1 == iVar2 && (uVar3 < (uint)((longlong)param_2 * (longlong)param_3))))) {
        iVar2 = -0x15;
      }
      else {
        iVar2 = param_3 * param_4 * param_2;
        if (param_1 != (int *)0x0) {
          *param_1 = iVar2;
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}



// ==== FUN_00040454 @ 00040454 size=888

undefined4 FUN_00040454(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int *unaff_s1;
  int *unaff_s3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  
  local_1c = (undefined4 *)0x0;
  if (param_1 == 0) {
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9b0,0x129,puVar7);
    uVar4 = 0x129;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9a0;
    goto LAB_000405d0;
  }
  unaff_s3 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (unaff_s3 == (int *)0x0) {
    uVar4 = 0xffffffe1;
  }
  else {
    (*(code *)PTR_rts_av_pop_input_buffer_lk_000635e0)(param_1,&local_1c);
    if (local_1c == (undefined4 *)0x0) {
      uVar4 = 0xffffffef;
    }
    else {
      unaff_s1 = &local_38;
      local_38 = 0;
      local_34 = 0;
      uVar4 = 0xffffffe9;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      (*(code *)PTR_rts_av_get_buffer_profile_0006386c)(local_1c,unaff_s1);
      if (local_38 == 0x8001) {
        if (local_34 != unaff_s3[0x13]) goto LAB_000405e4;
        if (local_2c != unaff_s3[0x12]) goto LAB_000405e4;
        if (local_30 != unaff_s3[0x11]) goto LAB_000405e4;
        uVar4 = 0;
        do {
          puVar1 = local_1c;
          if (*unaff_s3 == 0) {
            (*(code *)PTR_rts_av_push_back_output_buffer_lk_00063a0c)(param_1,local_1c);
            goto LAB_000406b0;
          }
          if (local_1c != (undefined4 *)0x0) {
            local_20 = local_1c[2];
            if (((local_20 != 0) &&
                (local_24 = (*(code *)PTR_rts_audio_get_outsize_000633c8)(), 0 < local_24)) &&
               (puVar3 = (undefined4 *)
                         (*(code *)PTR_rts_audio_new_buffer_00063770)(unaff_s3 + 0x29,local_24),
               puVar3 != (undefined4 *)0x0)) {
              (*(code *)PTR_rts_av_set_buffer_observer_000639c4)(puVar3,param_1);
              (*(code *)PTR_rts_audio_resample_process_00063a3c)
                        (*unaff_s3,*puVar1,&local_20,*puVar3,&local_24);
              uVar6 = puVar1[0xb];
              puVar3[10] = puVar1[10];
              puVar3[0xb] = uVar6;
              puVar3[2] = local_24;
              puVar7 = PTR_rts_av_push_back_output_buffer_lk_00063a0c;
              puVar3[7] = puVar1[7];
              puVar3[8] = puVar1[8];
              (*(code *)puVar7)(param_1,puVar3);
              (*(code *)PTR_rts_av_put_buffer_00063548)(puVar3);
            }
            goto LAB_000406b0;
          }
          puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x394;
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + 0x990,0x107,puVar7);
          uVar4 = 0x107;
          puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x980;
LAB_000405d0:
          (*(code *)PTR___assert_000637b8)
                    (puVar7,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770,uVar4,puVar5);
LAB_000405e4:
          (*(code *)(PTR_LAB_00063274 + 0x398))(param_1);
          uVar4 = (*(code *)(PTR_LAB_00063274 + -0x278))(param_1,unaff_s1);
          iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
          if (iVar2 != 0) {
            uVar6 = 0x140;
            puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x838;
            goto LAB_00040688;
          }
          uVar4 = (*(code *)(PTR_LAB_00063274 + 0xf0))(param_1);
          iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        } while (iVar2 == 0);
        uVar6 = 0x145;
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x860;
LAB_00040688:
        (*(code *)PTR_rts_log_000635ec)
                  (4,puVar7,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9b0,uVar6,uVar4);
      }
LAB_000406b0:
      if (local_1c != (undefined4 *)0x0) {
        (*(code *)PTR_rts_av_put_buffer_00063548)();
      }
    }
  }
  return uVar4;
}



// ==== FUN_00042630 @ 00042630 size=224

undefined4 FUN_00042630(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, param_1[1] != 0)) {
    if (iVar1 != 0) {
      if (param_1[5] == 3) {
        pcVar2 = (code *)(PTR_LAB_00063274 + 0x253c);
        *(int *)(iVar1 + 0x100) = *(int *)(iVar1 + 0x100) + -1;
        (*pcVar2)(iVar1);
      }
      *(int *)(iVar1 + 0xfc) = *(int *)(iVar1 + 0xfc) + -1;
    }
    (*(code *)PTR_rts_queue_clear_00063388)(param_1[7],PTR_rts_av_put_buffer_00063548);
    if (param_1[7] != 0) {
      (*(code *)PTR_rts_queue_destroy_000632cc)();
    }
    param_1[7] = 0;
    if (param_1[1] != 0) {
      (*(code *)PTR_rts_audio_fifo_free_00063474)();
    }
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 1;
    param_1[6] = 0;
  }
  return 0;
}



// ==== FUN_00043a00 @ 00043a00 size=232

undefined4 FUN_00043a00(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_4 >> 3;
  do {
    uVar4 = 0;
    iVar1 = iVar3;
    if (param_2 < 1) {
      return 0;
    }
    while( true ) {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) break;
      uVar4 = (uint)*(byte *)(param_1 + iVar1) | uVar4 << 8;
    }
    if (param_4 == 8) {
      uVar2 = uVar4 - 0x80 & 0xff;
      uVar4 = uVar2 << 8;
      if (param_5 != 0x10) {
        uVar4 = uVar2 << 0x10;
      }
    }
    else {
      uVar2 = (int)uVar4 >> 8;
      if (param_4 == 0x10) {
        if (param_5 == 8) {
LAB_00043aa4:
          uVar4 = uVar2 + 0x80 & 0xff;
        }
        else {
          uVar4 = (uVar4 & 0xffff) << 8;
        }
      }
      else {
        if (param_5 != 0x10) {
          uVar2 = (int)uVar4 >> 0x10;
          goto LAB_00043aa4;
        }
        uVar4 = uVar2 & 0xffff;
      }
    }
    for (uVar2 = 0; (int)uVar2 < param_5 >> 3; uVar2 = uVar2 + 1) {
      *(char *)(param_3 + uVar2) = (char)((int)uVar4 >> ((uVar2 & 3) << 3));
    }
    param_1 = param_1 + iVar3;
    param_3 = param_3 + (param_5 >> 3);
    param_2 = param_2 - iVar3;
  } while( true );
}



// ==== FUN_000443d0 @ 000443d0 size=348

void FUN_000443d0(int param_1,int param_2,int param_3,int *param_4,undefined2 *param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar7 = *(int *)(param_1 + 0x18);
  piVar8 = (int *)(*(int *)(param_1 + 0x3c) + param_2 * 4);
  puVar4 = (uint *)(*(int *)(param_1 + 0x40) + param_2 * 4);
  iVar13 = *(int *)(param_1 + 0x5c);
  iVar1 = 0;
  iVar14 = *piVar8;
  uVar2 = *puVar4;
  iVar10 = *(int *)(param_1 + 0x4c);
  iVar11 = *(int *)(param_1 + 0x24);
  iVar15 = *(int *)(param_1 + 0x28);
  uVar9 = *(uint *)(param_1 + 0xc);
  iVar12 = *param_4;
  while ((iVar14 < iVar12 && (iVar1 < *param_6))) {
    iVar3 = 0;
    for (iVar6 = 0; iVar6 < iVar7; iVar6 = iVar6 + 1) {
      iVar3 = iVar3 + (int)*(short *)(iVar10 + uVar2 * iVar7 * 2 + iVar6 * 2) *
                      (int)*(short *)(param_3 + iVar14 * 2 + iVar6 * 2);
    }
    uVar5 = 0x7fff;
    if ((iVar3 < 0x3fff8000) && (uVar5 = 0x8001, -0x3fff8000 < iVar3)) {
      uVar5 = (undefined2)(iVar3 + 0x4000 >> 0xf);
    }
    uVar2 = uVar2 + iVar15;
    iVar1 = iVar1 + 1;
    *param_5 = uVar5;
    iVar14 = iVar14 + iVar11;
    if (uVar9 <= uVar2) {
      uVar2 = uVar2 - uVar9;
      iVar14 = iVar14 + 1;
    }
    param_5 = param_5 + iVar13;
  }
  *piVar8 = iVar14;
  *puVar4 = uVar2;
  return;
}



// ==== FUN_0004492c @ 0004492c size=256

undefined4 FUN_0004492c(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x18);
  puVar4 = (undefined2 *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x1c) * 2 * param_2);
  *(undefined4 *)(param_1 + 0x38) = 1;
  uVar1 = (**(code **)(param_1 + 0x54))(param_1,param_2,puVar4,param_3,param_4,param_5);
  piVar3 = (int *)(*(int *)(param_1 + 0x3c) + param_2 * 4);
  if (*piVar3 < *param_3) {
    *param_3 = *piVar3;
  }
  *param_5 = uVar1;
  *piVar3 = *piVar3 - *param_3;
  iVar2 = *param_3;
  for (iVar6 = 0; iVar6 < iVar5 + -1; iVar6 = iVar6 + 1) {
    *puVar4 = puVar4[iVar2];
    puVar4 = puVar4 + 1;
  }
  return 0;
}



// ==== FUN_00044a2c @ 00044a2c size=308

void FUN_00044a2c(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_resc;
  int local_28 [2];
  
  local_28[0] = *(int *)(*(int *)(param_1 + 0x44) + param_2 * 4);
  iVar4 = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18);
  local_resc = param_4;
  (*(code *)(PTR_LAB_00063274 + 0x492c))(param_1,param_2,local_28,*param_3,&local_resc);
  piVar3 = (int *)(*(int *)(param_1 + 0x44) + param_2 * 4);
  iVar6 = *piVar3 - local_28[0];
  *piVar3 = iVar6;
  if (iVar6 != 0) {
    iVar7 = 0;
    iVar4 = iVar4 + iVar5 * 2 * param_2;
    do {
      iVar5 = iVar4 + (iVar2 + local_28[0]) * 2 + iVar7;
      iVar1 = iVar4 + iVar2 * 2 + iVar7;
      iVar7 = iVar7 + 2;
      *(undefined2 *)(iVar1 + -2) = *(undefined2 *)(iVar5 + -2);
    } while (iVar7 != iVar6 * 2);
  }
  *param_3 = *param_3 + local_resc * 2 * *(int *)(param_1 + 0x5c);
  return;
}



// ==== FUN_00044b88 @ 00044b88 size=40

void FUN_00044b88(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_rts_free_000638d4)();
    return;
  }
  return;
}



// ==== FUN_00044bb0 @ 00044bb0 size=20

/* WARNING: Control flow encountered bad instruction data */

void FUN_00044bb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_00046bc4 @ 00046bc4 size=264

void FUN_00046bc4(undefined1 *param_1,code *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  do {
    if (uVar3 == 0x7f) {
      iVar1 = 0x2000;
    }
    else {
      iVar1 = (*param_2)(((int)(char)param_3 ^ uVar3) & 0xff);
      iVar2 = (*param_2)(((int)(char)param_3 ^ uVar3 + 1) & 0xff);
      iVar1 = iVar1 + iVar2 + 4 >> 3;
    }
    for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      param_1[iVar4 + 0x2000] = (byte)uVar3 ^ param_3;
      if (0 < iVar4) {
        param_1[0x2000 - iVar4] = (byte)uVar3 ^ param_3 ^ 0x80;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x80);
  *param_1 = param_1[1];
  return;
}



// ==== FUN_000470f0 @ 000470f0 size=20

/* WARNING: Control flow encountered bad instruction data */

void FUN_000470f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_00047154 @ 00047154 size=116

void FUN_00047154(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  
  uVar2 = param_1;
  if (-((int)param_1 >> 0x1f) != 0) {
    uVar2 = -param_1;
  }
  *param_2 = (char)-((int)param_1 >> 0x1f);
  iVar4 = 0;
  uVar1 = uVar2;
  if ((uVar2 & 0xff00) != 0) {
    uVar1 = uVar2 >> 8;
    iVar4 = 8;
  }
  uVar3 = 0x20;
  uVar1 = (uint)(uVar2 != 0) + iVar4 + (uint)(byte)PTR_rts_log2_tab_000638b0[uVar1];
  param_2[1] = (char)uVar1;
  if ((uVar2 != 0) != 0) {
    uVar3 = (undefined1)((int)(uVar2 << 6) >> (uVar1 & 0x1f));
  }
  param_2[2] = uVar3;
  return;
}



// ==== FUN_00048370 @ 00048370 size=88

void FUN_00048370(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_0006325c + 0x3034);
  pcVar2 = (code *)*puVar1;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



