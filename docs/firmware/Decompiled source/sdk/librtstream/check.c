/* librtstream — "check" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== __check_poll_fd @ 0001f6f4 size=156

undefined4 __check_poll_fd(undefined *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x427c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59e0,0x48,param_1);
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8);
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x48,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x59f0);
  }
  if (param_1 == (undefined *)param_2[4]) {
    for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)(param_1 + 8);
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1 + -5 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}



// ==== __check_loop_task @ 0001f7ac size=180

undefined4 __check_loop_task(undefined *param_1,undefined *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c70;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a74,0x7a,param_1);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5ce8;
    (*(code *)PTR___assert_000637b8)
              (param_1,param_2,0x7a,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5a88);
  }
  uVar1 = 0;
  if (param_1 == *(undefined **)(param_2 + 0xc)) {
    piVar2 = *(int **)(param_1 + 0x10);
    while( true ) {
      if (piVar2 + -4 == (int *)param_1) {
        return 0;
      }
      if (piVar2 + -4 == (int *)param_2) break;
      piVar2 = (int *)*piVar2;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// ==== check_v4l2_profile @ 00026b98 size=640

undefined4 check_v4l2_profile(undefined *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 auStack_70 [8];
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_44;
  uint local_30;
  
  puVar4 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    puVar4 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x47d8);
    (*(code *)PTR___assert_000637b8)
              (param_1,puVar4,0xcc,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4534);
  }
  iVar5 = 0;
  iVar1 = (*(code *)PTR_rts_get_v4l2_fmt_from_av_fmt_00063a18)(*puVar4);
  do {
    uVar2 = (*(code *)PTR_rts_v4l2_enum_fmt_00063a4c)(param_1,iVar5,auStack_70);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 != 0) {
      uVar2 = 0xffffffe3;
      break;
    }
    iVar5 = iVar5 + 1;
    uVar2 = 0;
  } while (local_44 != iVar1);
  iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  if (iVar5 == 0) {
    uVar6 = param_2[1];
    iVar5 = 0;
    uVar8 = param_2[2];
    do {
      while( true ) {
        uVar2 = (*(code *)PTR_rts_v4l2_enum_frmsizes_00063a20)(param_1,iVar1,iVar5,auStack_70);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
        if (iVar3 != 0) {
          uVar2 = 0xffffffe3;
          goto LAB_00026d60;
        }
        uVar2 = 0;
        if (local_68 == 1) break;
        if ((local_64 <= uVar6) && (uVar6 <= local_60)) {
          if (local_5c == 0) {
            trap(0x1c00);
          }
          if ((((uVar6 - local_64) % local_5c == 0) && (local_58 <= uVar8)) && (uVar8 <= local_54))
          {
            if (local_50 == 0) {
              trap(0x1c00);
            }
            if ((uVar8 - local_58) % local_50 == 0) goto LAB_00026d60;
          }
        }
LAB_00026d50:
        iVar5 = iVar5 + 1;
      }
      if (uVar6 != local_64) goto LAB_00026d50;
      iVar5 = iVar5 + 1;
    } while (uVar8 != local_60);
LAB_00026d60:
    iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar5 == 0) {
      uVar7 = param_2[1];
      local_30 = 1;
      uVar9 = param_2[2];
      uVar6 = param_2[3];
      uVar8 = param_2[4];
      iVar5 = 0;
      while( true ) {
        uVar2 = (*(code *)PTR_rts_v4l2_enum_frmival_000639a4)
                          (param_1,iVar1,uVar7,uVar9,iVar5,auStack_70);
        iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
        if (iVar3 != 0) break;
        if (((local_60 == local_30) && (local_5c == uVar6)) && (uVar2 = 0, local_58 == uVar8))
        goto LAB_00026df8;
        iVar5 = iVar5 + 1;
      }
      uVar2 = 0xffffffe3;
LAB_00026df8:
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// ==== __check_awb_initialized @ 0002c874 size=180

undefined4 __check_awb_initialized(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x371c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x31a0,0x39,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,0x39,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x31b8);
  }
  if (*(undefined **)(param_1 + 0x180) == param_1) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x36b8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x31a0,0x3c);
    uVar1 = 0xffffffe1;
  }
  return uVar1;
}



// ==== __check_ae_initialized @ 0002dfb0 size=160

undefined4 __check_ae_initialized(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a30,0x3c,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,0x3c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a48);
  }
  if (*(undefined **)(param_1 + 0x180) == param_1) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2f44,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a30,0x3f);
    uVar1 = 0xffffffe1;
  }
  return uVar1;
}



// ==== __check_h1_initialized @ 0002f640 size=180

undefined4 __check_h1_initialized(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2844;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x21f8,0x76,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x76,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2210);
  }
  if (*(undefined **)(param_1 + 0x27c) == param_1) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2814,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x21f8,0x79);
    uVar1 = 0xffffffe1;
  }
  return uVar1;
}



// ==== __check_h1_profile @ 00031e1c size=180

undefined4 __check_h1_profile(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1858,0x65d,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,0x65d,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x186c);
  }
  if ((((*param_1 - 1U < 4) && ((1 << (*param_1 - 1U & 0x1f) & 0xdU) != 0)) &&
      (param_1[1] - 0x90U < 0xf61)) &&
     (((param_1[2] - 0x60U < 0xf91 && (uVar3 = param_1[3], uVar3 != 0)) &&
      ((uVar1 = param_1[4], uVar1 != 0 && (uVar3 <= uVar1)))))) {
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    uVar2 = 0xffffffeb;
    if (uVar1 / uVar3 < 0x10000) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffeb;
}



// ==== __check_mjpeg_initialized @ 00039ed0 size=180

undefined4 __check_mjpeg_initialized(undefined *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x940;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x664,0x36,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x938,0x36,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x680);
  }
  if (*(undefined **)(param_1 + 0xa0) == param_1) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x8c8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x664,0x39);
    uVar1 = 0xffffffe1;
  }
  return uVar1;
}



// ==== __check_resample_ready @ 000402ec size=172

undefined4 __check_resample_ready(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x968,0xf1,puVar2);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770,0xf1,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x950);
  }
  iVar1 = (*pcVar4)();
  uVar3 = 0xffffffec;
  if (iVar1 == 0) {
    uVar3 = 0xffffffe1;
  }
  else if (*(int *)(iVar1 + 0xa4) < 5) {
    uVar3 = 0;
  }
  return uVar3;
}



// ==== __check_amixer_ready @ 0004298c size=172

undefined4 __check_amixer_ready(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x10c8,0xe5,puVar2);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,0xe5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x10b0);
  }
  iVar1 = (*pcVar4)();
  uVar3 = 0xffffffec;
  if (iVar1 == 0) {
    uVar3 = 0xfffffff6;
  }
  else if (*(int *)(iVar1 + 0x108) < 1) {
    uVar3 = 0;
  }
  return uVar3;
}



