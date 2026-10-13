/* librtstream — "get" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== get_af_ctrl @ 0001a5cc size=364

undefined4 get_af_ctrl(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int unaff_s0;
  int iVar7;
  int unaff_s1;
  code *pcVar8;
  code *pcVar9;
  int iStack00000010;
  int in_stack_00000018;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  iVar7 = unaff_s0 + -0x6c30;
  iStack00000010 = iVar7;
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6190,0x579);
  puVar5 = (uint *)&DAT_00000579;
  iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
  do {
    iVar6 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x61a0;
    while( true ) {
      puVar4 = (undefined4 *)(iVar3 + -0x6cc8);
      (**(code **)(in_stack_00000018 + -0x7a88))(iVar7);
      if (puVar5 == (uint *)0x0) break;
      if (((iVar6 == 0) || (pcVar8 = (code *)*puVar4, pcVar8 == (code *)0x0)) ||
         ((-1 < (int)puVar4[3] && ((uint)puVar4[3] <= puVar5[2])))) {
        return 0;
      }
      if (*puVar5 < (uint)puVar4[2]) {
        *puVar5 = *puVar5 + 1;
        uVar1 = FUN_0001a8b4(4);
        return uVar1;
      }
      if (puVar5[1] < (uint)puVar4[4]) {
        puVar5[1] = puVar5[1] + 1;
        uVar1 = FUN_0001a8b4();
        return uVar1;
      }
      pcVar9 = *(code **)(in_stack_00000018 + -0x7aa4);
      puVar5[2] = puVar5[2] + 1;
      puVar5[1] = 0;
      iVar7 = puVar4[5];
      uVar1 = puVar4[1];
      (*pcVar9)(iVar6);
      if (iVar7 == 1) {
        iVar7 = *(int *)(in_stack_00000018 + -0x7fd4);
        (**(code **)(in_stack_00000018 + -0x7afc))(iVar7 + -0x61b0);
        in_stack_00000020 = 0;
        in_stack_00000024 = 0;
        in_stack_00000028 = 0;
        in_stack_0000002c = 0;
        in_stack_00000030 = 0;
        (**(code **)(in_stack_00000018 + -0x79d4))(iVar6,&stack0x00000020);
        if (in_stack_00000020 == 0) {
          (**(code **)(in_stack_00000018 + -0x7c54))
                    (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6c58,
                     *(int *)(in_stack_00000018 + -0x7fd4) + -0x61bc,0x55c);
        }
        (*pcVar8)(uVar1,&stack0x00000020,iVar6);
        (**(code **)(in_stack_00000018 + -0x7cf8))(iVar6);
        (**(code **)(in_stack_00000018 + -0x77e8))(iVar7 + -0x61b0);
        return 0;
      }
      iVar7 = *(int *)(unaff_s1 + 0x78);
      if (iVar7 == 0) {
        iStack00000010 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x6c2c;
        (**(code **)(in_stack_00000018 + -0x7c54))
                  (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6cf0,
                   *(int *)(in_stack_00000018 + -0x7fd4) + -0x61d0,0x537);
        iVar7 = *(int *)(unaff_s1 + 0x78);
      }
      if (iVar7 != 0) {
        if (*(int *)(unaff_s1 + 0xe0) == 0) {
          iVar7 = (**(code **)(in_stack_00000018 + -0x7bdc))(1);
          *(int *)(unaff_s1 + 0xe0) = iVar7;
          if (iVar7 == 0) {
            return 0xfffffff5;
          }
        }
        puVar4 = (undefined4 *)
                 (**(code **)(in_stack_00000018 + -0x7818))
                           (1,0xc,*(int *)(in_stack_00000018 + -0x7fd4) + -0x61d0,0x541);
        if (puVar4 == (undefined4 *)0x0) {
          return 0xfffffff5;
        }
        iVar7 = *(int *)(in_stack_00000018 + -0x7fd8);
        iVar3 = *(int *)(in_stack_00000018 + -0x7fd8);
        pcVar9 = *(code **)(in_stack_00000018 + -0x7890);
        uVar2 = *(undefined4 *)(unaff_s1 + 0xe0);
        puVar4[2] = iVar6;
        *puVar4 = pcVar8;
        puVar4[1] = uVar1;
        uVar1 = (*pcVar9)(uVar2,iVar7 + -0x5cbc,puVar4,iVar3 + -0x5b1c);
        iVar7 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
        if (iVar7 == 0) {
          return uVar1;
        }
        (**(code **)(in_stack_00000018 + -0x796c))(puVar4);
        return uVar1;
      }
      puVar5 = (uint *)0x537;
      iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
      iVar7 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x6c2c;
      iVar6 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x61e4;
    }
    iVar7 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x6cd0;
    iStack00000010 = iVar7;
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6cf0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x6190,0x57a);
    puVar5 = (uint *)0x57a;
    iVar3 = *(int *)(in_stack_00000018 + -0x7fd4);
  } while( true );
}



// ==== __get_unit_id_str @ 0001b140 size=188

undefined * __get_unit_id_str(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pcVar3 = (code *)PTR_rts_av_get_unit_id_000635a0;
  if (param_1 == 0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d58,0xfe,puVar2);
    pcVar3 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cc8,0xfe,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5d6c);
  }
  uVar1 = (*pcVar3)();
  puVar2 = PTR_DAT_0006325c;
  PTR_DAT_0006325c[0x3c00] = (char)uVar1;
  puVar2[0x3c01] = (char)((uint)uVar1 >> 8);
  puVar2[0x3c02] = (char)((uint)uVar1 >> 0x10);
  puVar2[0x3c03] = (char)((uint)uVar1 >> 0x18);
  puVar2[0x3c04] = 0;
  return puVar2 + 0x3c00;
}



// ==== get_awb_ctrl @ 0001d390 size=304

void get_awb_ctrl(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_s0;
  int iVar4;
  code *pcVar5;
  int unaff_gp;
  int in_stack_00000020;
  
  (*(code *)(*(int *)(unaff_gp + -0x7fd8) + -0x4b44))();
  if (*(int *)(unaff_s0 + 0xd8) == 0) {
    iVar4 = *(int *)(in_stack_00000020 + -0x7fd4);
    pcVar5 = *(code **)(in_stack_00000020 + -0x7afc);
    iVar3 = *(int *)(unaff_s0 + 0xd4);
    *(undefined4 *)(unaff_s0 + 0xd4) = 0;
    (*pcVar5)(iVar4 + -0x62a8);
    if (iVar3 != 0) {
      (**(code **)(in_stack_00000020 + -0x79f4))(iVar3);
    }
    (**(code **)(in_stack_00000020 + -0x77e8))(iVar4 + -0x62a8);
  }
  else {
    pcVar5 = *(code **)(in_stack_00000020 + -0x77e0);
    *(undefined4 *)(unaff_s0 + 0xd4) = 0;
    *(undefined4 *)(unaff_s0 + 0xd8) = 0;
    uVar1 = (*pcVar5)();
    uVar2 = (**(code **)(in_stack_00000020 + -0x7ca0))();
    (**(code **)(in_stack_00000020 + -0x7f90))(uVar1,uVar2);
  }
  *(undefined4 *)(unaff_s0 + 0x78) = 0;
  iVar3 = (**(code **)(in_stack_00000020 + -0x7ec0))(0);
  if (iVar3 != 0) {
    (*(code *)(*(int *)(in_stack_00000020 + -0x7fd8) + -0x4ec0))();
    (**(code **)(in_stack_00000020 + -0x7c54))
              (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x69a4,
               *(int *)(in_stack_00000020 + -0x7fd4) + -0x6294,0x680);
  }
  return;
}



// ==== get_ae_ctrl @ 0001ec24 size=144

undefined4 get_ae_ctrl(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_gp;
  int iStack00000010;
  
  iVar3 = *(int *)(unaff_gp + -0x7fd4) + -0x6c38;
  iStack00000010 = iVar3;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x66a0,0x86e);
  uVar2 = 0x86e;
  iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x6cc8;
  (**(code **)(unaff_gp + -0x7a88))();
  if (*(int *)(iVar3 + 0x74) != 0) {
    return 0xffffffb6;
  }
  if ((0 < iVar1) && ((uVar2 & 7) != 0)) {
    *(int *)(iVar3 + 0x100) = iVar1;
    *(uint *)(iVar3 + 0x104) = uVar2 & 7;
    return 0;
  }
  *(undefined4 *)(iVar3 + 0x100) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x104) = 0;
  return 0;
}



// ==== get_h1_ctrl @ 0001ff68 size=16

void get_h1_ctrl(void)

{
  return;
}



// ==== get_h1_roi @ 000206c8 size=512

undefined4 get_h1_roi(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_v0;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_v1;
  uint uVar6;
  undefined4 *unaff_s0;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int unaff_s3;
  int unaff_s6;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int in_stack_00000018;
  
  uVar13 = CONCAT44(in_v1,in_v0);
  uVar10 = unaff_s6 + 0x423f;
  while( true ) {
    iVar7 = unaff_s0[6];
    (**(code **)(in_stack_00000018 + -0x77e8))(unaff_s3 + -0x5ae0);
    iVar12 = *(int *)(in_stack_00000018 + -0x7fd8);
    piVar2 = (int *)*(int *)unaff_s0[4];
    piVar8 = (int *)unaff_s0[4];
    while( true ) {
      piVar1 = piVar2;
      puVar11 = piVar8 + -4;
      if (puVar11 == unaff_s0) break;
      if (0 < piVar8[-2]) {
        uVar3 = uVar10 - piVar8[2];
        uVar6 = uVar3 + (int)uVar13;
        uVar14 = (**(code **)(in_stack_00000018 + -0x7748))
                           (uVar6,(uint)(uVar6 < uVar3) +
                                  (((int)((ulonglong)uVar13 >> 0x20) - (uint)(uVar10 < uVar3)) -
                                  piVar8[3]),1000000,0);
        uVar3 = (uint)((ulonglong)uVar14 >> 0x20);
        uVar6 = piVar8[4];
        if ((uVar3 < (uint)((int)uVar6 >> 0x1f)) ||
           (((int)uVar6 >> 0x1f == uVar3 && ((uint)uVar14 < uVar6)))) {
          piVar8[4] = uVar6 - (uint)uVar14;
        }
        else {
          iVar4 = (*(code *)(iVar12 + -0x854))();
          if ((iVar4 != 0) && ((code *)*puVar11 != (code *)0x0)) {
            (*(code *)*puVar11)(puVar11);
          }
          *(undefined8 *)(piVar8 + 2) = uVar13;
          piVar8[4] = piVar8[-2];
        }
        if (piVar8[4] < iVar7) {
          iVar7 = piVar8[4];
        }
      }
      piVar2 = (int *)*piVar1;
      piVar8 = piVar1;
    }
    puVar9 = (uint *)&stack0x00000020;
    (**(code **)(in_stack_00000018 + -0x7afc))(*(int *)(in_stack_00000018 + -0x7fd4) + -0x5ae0);
    iVar7 = (**(code **)(in_stack_00000018 + -0x77f0))(*unaff_s0,puVar9,3,iVar7);
    (**(code **)(in_stack_00000018 + -0x77e8))(*(int *)(in_stack_00000018 + -0x7fd4) + -0x5af0);
    iVar4 = *(int *)(in_stack_00000018 + -0x7fd8);
    for (iVar12 = 0; iVar12 < iVar7; iVar12 = iVar12 + 1) {
      piVar8 = (int *)puVar9[2];
      if (((piVar8 != (int *)0x0) && (*piVar8 != 0)) &&
         (iVar5 = (*(code *)(iVar4 + -0x90c))(), iVar5 != 0)) {
        uVar10 = *puVar9 & 1;
        if ((*puVar9 & 4) != 0) {
          uVar10 = uVar10 | 2;
        }
        (*(code *)*piVar8)(piVar8,uVar10);
      }
      puVar9 = puVar9 + 4;
    }
    (**(code **)(in_stack_00000018 + -0x7afc))(*(int *)(in_stack_00000018 + -0x7fd4) + -0x5af0);
    if (unaff_s0[1] == 0) break;
    uVar10 = 999999;
    uVar13 = (**(code **)(in_stack_00000018 + -0x7ce4))();
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x5b7c);
  unaff_s0[7] = 0;
  return 0;
}



// ==== get_mjpeg_ctrl @ 0002a318 size=268

void get_mjpeg_ctrl(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s3;
  code *in_t9;
  int in_stack_00000018;
  
  (*in_t9)();
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(0);
    if (iVar1 == 0) {
      uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x61b0))();
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar2);
      if (iVar1 == 0) {
        *(int *)(unaff_s0 + 0xe8) = unaff_s0;
        return;
      }
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3f14;
      uVar2 = 0xc3;
    }
    else {
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3f38;
      uVar2 = 0xbd;
    }
  }
  else {
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x3f60;
    uVar2 = 0xb7;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,unaff_s3 + -0x3ce8,uVar2);
  (**(code **)(in_stack_00000018 + -0x7788))();
  return;
}



// ==== get_af_ctrl @ 0002a5cc size=212

undefined4 get_af_ctrl(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d94,0xed,puVar4);
    uVar3 = 0xed;
    puVar1 = puVar4;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_rts_av_to_af_t_000632c0)();
    pcVar5 = (code *)(PTR_LAB_00063270 + -0x6080);
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d94,0xf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ee8);
    }
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 == 0) goto LAB_0002a6c8;
    uVar3 = 0xf0;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ee8;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3da0);
LAB_0002a6c8:
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(0);
  if (iVar2 == 0) {
    uVar3 = (*(code *)(PTR_LAB_00063270 + -0x61b0))(puVar1);
    return uVar3;
  }
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3f38,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d94,0xf4,0);
  return 0;
}



// ==== __get_isp_snr_crop @ 0002b2bc size=620

undefined4 __get_isp_snr_crop(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_9c [10];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58 [3];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  
  if (param_1 < 0) {
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c88);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38d4,0x3eb,param_2);
    uVar3 = 0x3eb;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0002b38c;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3b74);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38d4,0x3ec,param_2);
    uVar3 = 0x3ec;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3c74,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38e8);
LAB_0002b38c:
  uVar3 = (*(code *)PTR_rts_v4l2_queryctrl_000639ec)();
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar1 == 0) {
    local_9c[0] = 0x98f905;
    uVar3 = (*(code *)PTR_rts_v4l2_queryctrl_000639ec)(param_1,local_9c);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar1 == 0) {
      local_2c = 2;
      local_1c = local_58;
      local_30 = 0;
      local_58[0] = 0x98f904;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_44 = 0x98f905;
      uVar3 = (*(code *)PTR_rts_v4l2_get_ext_ctrls_0006370c)(param_1);
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar1 == 0) {
        *param_2 = local_b8;
        param_2[1] = local_74;
        param_2[2] = local_b4;
        param_2[3] = local_70;
        param_2[4] = local_b0;
        param_2[5] = local_6c;
        param_2[6] = local_ac;
        param_2[7] = local_68;
        param_2[8] = local_4c;
        param_2[9] = local_38;
        return 0;
      }
      uVar5 = 0x402;
      puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3b14;
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38d4;
    }
    else {
      uVar5 = 0x3f7;
      puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3b40;
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38d4;
    }
  }
  else {
    uVar5 = 0x3f1;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3b6c;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x38d4;
  }
  (*(code *)PTR_rts_log_000635ec)(4,puVar2,puVar4,uVar5,uVar3);
  return uVar3;
}



// ==== __get_awb_ctrl @ 0002c3d0 size=756

undefined4 __get_awb_ctrl(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  
  local_38 = 0x98090c;
  uVar4 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)(*(undefined4 *)(param_1 + 0x164),&local_38);
  iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
  uVar8 = local_34;
  if (iVar5 == 0) {
    uVar4 = (*(code *)PTR_rts_isp_get_awb_auto_gain_adjustment_00063844)
                      (*(undefined4 *)(param_1 + 0x164),&local_30);
    iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
    if (iVar5 == 0) {
      local_38 = 0x98091a;
      uVar4 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)(*(undefined4 *)(param_1 + 0x164),&local_38);
      iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
      uVar3 = local_34;
      if (iVar5 == 0) {
        local_38 = 0x98090e;
        uVar4 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)
                          (*(undefined4 *)(param_1 + 0x164),&local_38);
        iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        uVar1 = (undefined2)local_34;
        if (iVar5 != 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x37d4,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3150,0xbc,uVar4);
          return uVar4;
        }
        local_38 = 0x98f902;
        uVar4 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)
                          (*(undefined4 *)(param_1 + 0x164),&local_38);
        iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        uVar2 = (undefined2)local_34;
        if (iVar5 != 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x37a4,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3150,0xc4,uVar4);
          return uVar4;
        }
        local_38 = 0x98090f;
        uVar4 = (*(code *)PTR_rts_v4l2_get_ctrl_00063810)
                          (*(undefined4 *)(param_1 + 0x164),&local_38);
        iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
        if (iVar5 != 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3774,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3150,0xcc,uVar4);
          return uVar4;
        }
        *(undefined4 *)(param_1 + 0x78) = uVar8;
        *(undefined2 *)(param_1 + 0x7c) = local_30;
        *(undefined2 *)(param_1 + 0x7e) = local_2e;
        *(undefined4 *)(param_1 + 0x90) = uVar3;
        *(undefined2 *)(param_1 + 0xa4) = uVar1;
        *(undefined2 *)(param_1 + 0xa6) = uVar2;
        *(undefined2 *)(param_1 + 0xa8) = (undefined2)local_34;
        *(undefined4 *)(param_1 + 0xf4) = uVar8;
        *(undefined2 *)(param_1 + 0xf8) = local_30;
        *(undefined2 *)(param_1 + 0xfa) = local_2e;
        *(undefined4 *)(param_1 + 0x10c) = uVar3;
        *(undefined2 *)(param_1 + 0x120) = uVar1;
        *(undefined2 *)(param_1 + 0x122) = uVar2;
        *(undefined2 *)(param_1 + 0x124) = (undefined2)local_34;
        return 0;
      }
      uVar8 = 0xb4;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3800;
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3150;
    }
    else {
      uVar8 = 0xab;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3838;
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3150;
    }
  }
  else {
    uVar8 = 0xa4;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3860;
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3150;
  }
  (*(code *)PTR_rts_log_000635ec)(4,puVar6,puVar7,uVar8,uVar4);
  return uVar4;
}



// ==== get_awb_ctrl @ 0002d390 size=184

undefined4 get_awb_ctrl(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3210,0x1f9,puVar4);
    uVar3 = 0x1f9;
    puVar1 = puVar4;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_rts_av_to_awb_t_00063838)();
    pcVar5 = (code *)(PTR_LAB_00063270 + -0x378c);
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3210,0x1fc,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35bc);
    }
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 == 0) goto LAB_0002d48c;
    uVar3 = 0x1fc;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35bc;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3220);
LAB_0002d48c:
  uVar3 = (*(code *)(PTR_LAB_00063270 + -0x3c30))(puVar1);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar2 == 0) {
    uVar3 = (*(code *)(PTR_LAB_00063270 + -0x393c))(puVar1);
    return uVar3;
  }
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3630,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3210,0x200,uVar3);
  return uVar3;
}



// ==== get_ae_ctrl @ 0002ec24 size=388

undefined4 get_ae_ctrl(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a84,0x21e,puVar4);
    uVar3 = 0x21e;
    puVar1 = puVar4;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_ae_t_00063ad4)();
    pcVar5 = (code *)(PTR_LAB_00063270 + -0x2050);
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a84,0x221,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e3c);
    }
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 == 0) goto LAB_0002ed20;
    uVar3 = 0x221;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e3c;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a90);
LAB_0002ed20:
  uVar3 = (*(code *)(PTR_LAB_00063270 + -0x2610))(puVar1);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar2 == 0) {
    uVar3 = (*(code *)(PTR_LAB_00063270 + -0x2230))(puVar1);
    return uVar3;
  }
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e94,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a84,0x225,uVar3);
  return uVar3;
}



// ==== get_h1_ctrl @ 0002ff68 size=824

int get_h1_ctrl(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int unaff_s1;
  code *pcVar6;
  int iVar7;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_11c;
  undefined1 auStack_f8 [4];
  undefined4 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x225c,0x345,puVar5);
    uVar3 = 0x345;
    puVar1 = puVar5;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_h1_t_000635b0)();
    pcVar6 = (code *)(PTR_LAB_00063270 + -0x9c0);
    iVar7 = (*pcVar6)(puVar1);
    if (iVar7 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x225c,0x348,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c);
    }
    unaff_s1 = (*pcVar6)(puVar1);
    if (unaff_s1 == 0) goto LAB_00030070;
    uVar3 = 0x348;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c;
  }
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2268;
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,uVar3,puVar4);
LAB_00030070:
    if (puVar1 != (undefined *)0x0) break;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2844;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2278,0x18d,puVar5);
    uVar3 = 0x18d;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2288;
    puVar1 = puVar5;
  }
  iVar7 = *(int *)(puVar1 + 0x254);
  if (iVar7 == 0) {
    return unaff_s1;
  }
  local_84 = *(undefined4 *)(puVar1 + 0xe0);
  local_80 = *(undefined4 *)(puVar1 + 0xe4);
  iVar2 = (*(code *)PTR_H264EncGetRateCtrl_00063a5c)(iVar7,auStack_f8);
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_H264EncGetCodingCtrl_00063374)(iVar7,&local_1c0);
    if (iVar2 == 0) {
      local_7c = local_e0;
      local_28 = local_8c;
      local_78 = local_a8;
      local_74 = local_a4;
      local_70 = local_ec;
      local_6c = local_e4;
      local_68 = local_e8;
      local_64 = local_d0;
      local_60 = local_d4;
      local_2c = local_f4;
      local_24 = local_88;
      local_38 = local_dc;
      local_34 = local_d8;
      local_30 = local_c4;
      local_5c = local_1c0;
      local_58 = local_1bc;
      local_54 = local_1b4;
      local_50 = local_1b0;
      local_4c = local_1ac;
      local_48 = local_1a0;
      local_44 = local_19c;
      local_40 = local_198;
      local_3c = local_11c;
      goto LAB_00030210;
    }
    uVar3 = 0xcc;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28c8;
  }
  else {
    uVar3 = 0xc6;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28f4;
  }
  unaff_s1 = -0x1b;
  (*(code *)PTR_rts_log_000635ec)
            (4,puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22a0,uVar3,iVar2);
LAB_00030210:
  iVar7 = (*(code *)PTR_RTS_IS_ERR_00063380)(unaff_s1);
  if (iVar7 == 0) {
    (*(code *)PTR_memcpy_00063908)(puVar1 + 0x6c,&local_84,0x74);
    unaff_s1 = 0;
    (*(code *)PTR_memcpy_00063908)(puVar1 + 0xe0,&local_84,0x74);
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x270c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2278,0x198,unaff_s1);
  }
  return unaff_s1;
}



// ==== get_h1_roi @ 000306c8 size=512

int get_h1_roi(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int unaff_s1;
  code *pcVar5;
  undefined1 auStack_d8 [88];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22fc,0x35d,puVar4);
    uVar3 = 0x35d;
    puVar1 = puVar4;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_h1_t_000635b0)();
    pcVar5 = (code *)(PTR_LAB_00063270 + -0x9c0);
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22fc,0x360,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c);
    }
    unaff_s1 = (*pcVar5)(puVar1);
    if (unaff_s1 == 0) goto LAB_000307c8;
    uVar3 = 0x360;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2308);
LAB_000307c8:
  if (*(int *)(puVar1 + 0x254) != 0) {
    iVar2 = (*(code *)PTR_H264EncGetCodingCtrl_00063374)(*(int *)(puVar1 + 0x254),auStack_d8);
    if (iVar2 == 0) {
      if (local_80 == 0) {
        *(undefined4 *)(puVar1 + 0x174) = 0;
      }
      else {
        *(undefined4 *)(puVar1 + 0x174) = 1;
        *(undefined4 *)(puVar1 + 0x188) = local_58;
        *(int *)(puVar1 + 0x178) = local_78 << 4;
        *(int *)(puVar1 + 0x17c) = local_7c << 4;
        *(int *)(puVar1 + 0x180) = local_70 << 4;
        *(int *)(puVar1 + 0x184) = local_74 << 4;
      }
      if (local_6c == 0) {
        *(undefined4 *)(puVar1 + 0x174) = 0;
      }
      else {
        *(undefined4 *)(puVar1 + 0x174) = 1;
        *(undefined4 *)(puVar1 + 0x188) = local_54;
        *(int *)(puVar1 + 0x178) = local_64 << 4;
        *(int *)(puVar1 + 0x17c) = local_68 << 4;
        *(int *)(puVar1 + 0x180) = local_5c << 4;
        *(int *)(puVar1 + 0x184) = local_60 << 4;
      }
    }
    else {
      unaff_s1 = -0x1b;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28c8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2318,0x1ef,iVar2);
    }
  }
  return unaff_s1;
}



// ==== __get_h1_epoll_fd @ 0003269c size=588

undefined4 __get_h1_epoll_fd(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int unaff_s5;
  undefined8 uVar7;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == (undefined *)0x0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2190;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x18cc,0x4f6,puVar6);
    uVar5 = 0x4f6;
    param_2 = unaff_s5;
LAB_0003275c:
    param_1 = puVar6;
    (*(code *)PTR___assert_000637b8)
              (puVar6,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,uVar5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x18e0);
  }
  else {
    puVar6 = param_1;
    if (param_2 < 0) {
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c88;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x18cc,0x4f7,puVar6);
      uVar5 = 0x4f7;
      goto LAB_0003275c;
    }
  }
  uVar5 = (*(code *)PTR_rts_av_get_unit_loop_0006364c)(*(undefined4 *)(param_1 + 0x27c));
  uVar7 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  *(int *)(puVar6 + 0x274) = (int)((ulonglong)uVar7 >> 0x20);
  puVar4 = PTR_rts_av_wait_00063a58;
  *(int *)(puVar6 + 0x270) = (int)uVar7;
  (*(code *)puVar4)(puVar1 + -0x18cc);
  *(int *)(puVar6 + 0x278) = *(int *)(puVar6 + 0x278) + 1;
  puVar4 = PTR_rts_av_add_task_00063900;
  *(undefined **)(puVar6 + 0x240) = PTR_LAB_00063270 + 0x49ac;
  *(undefined4 *)(puVar6 + 0x248) = 10;
  *(undefined **)(puVar6 + 0x244) = puVar6;
  uVar2 = (*(code *)puVar4)(uVar5,puVar6 + 0x240);
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (iVar3 == 0) {
    *(undefined4 *)(puVar6 + 0x228) = 5;
    puVar4 = PTR_rts_av_add_poll_fd_00063864;
    *(undefined **)(puVar6 + 0x220) = PTR_LAB_00063270 + 0x48a8;
    *(int *)(puVar6 + 0x224) = param_2;
    *(undefined **)(puVar6 + 0x22c) = puVar6;
    uVar2 = (*(code *)puVar4)(uVar5,puVar6 + 0x220);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 == 0) {
      uVar2 = 0;
      goto LAB_000328b4;
    }
    (*(code *)PTR_rts_av_del_task_000637f0)(puVar6 + 0x240);
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    uVar5 = 0x511;
    *(int *)(puVar6 + 0x278) = *(int *)(puVar6 + 0x278) + -1;
    puVar4 = puVar4 + -0x1ff0;
  }
  else {
    uVar5 = 0x505;
    *(int *)(puVar6 + 0x278) = *(int *)(puVar6 + 0x278) + -1;
    puVar4 = puVar4 + -0x201c;
  }
  (*(code *)PTR_rts_log_000635ec)(4,puVar4,puVar1 + -0x18cc,uVar5,uVar2);
LAB_000328b4:
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0x18cc);
  return uVar2;
}



// ==== __get_jpgenc_epoll_fd @ 0003839c size=580

undefined4 __get_jpgenc_epoll_fd(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int unaff_s5;
  undefined8 uVar7;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == (undefined *)0x0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0xdb4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa2c,0x234,puVar6);
    uVar5 = 0x234;
    param_2 = unaff_s5;
LAB_0003845c:
    param_1 = puVar6;
    (*(code *)PTR___assert_000637b8)
              (puVar6,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xe20,uVar5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa44);
  }
  else {
    puVar6 = param_1;
    if (param_2 < 0) {
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5c88;
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0xa2c,0x235,puVar6);
      uVar5 = 0x235;
      goto LAB_0003845c;
    }
  }
  uVar5 = (*(code *)PTR_rts_av_get_unit_loop_0006364c)(*(undefined4 *)(param_1 + 0xb4));
  uVar7 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  *(int *)(puVar6 + 0xac) = (int)((ulonglong)uVar7 >> 0x20);
  puVar4 = PTR_rts_av_wait_00063a58;
  *(int *)(puVar6 + 0xa8) = (int)uVar7;
  (*(code *)puVar4)(puVar1 + -0xa2c);
  *(int *)(puVar6 + 0xb0) = *(int *)(puVar6 + 0xb0) + 1;
  puVar4 = PTR_rts_av_add_task_00063900;
  *(undefined **)(puVar6 + 0x78) = PTR_LAB_00063274 + -0x6684;
  *(undefined4 *)(puVar6 + 0x80) = 10;
  *(undefined **)(puVar6 + 0x7c) = puVar6;
  uVar2 = (*(code *)puVar4)(uVar5,puVar6 + 0x78);
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (iVar3 == 0) {
    *(undefined4 *)(puVar6 + 0x60) = 5;
    puVar4 = PTR_rts_av_add_poll_fd_00063864;
    *(undefined **)(puVar6 + 0x58) = PTR_LAB_00063274 + -0x6788;
    *(int *)(puVar6 + 0x5c) = param_2;
    *(undefined **)(puVar6 + 100) = puVar6;
    uVar2 = (*(code *)puVar4)(uVar5,puVar6 + 0x58);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar2);
    if (iVar3 == 0) goto LAB_000385ac;
    (*(code *)PTR_rts_av_del_task_000637f0)(puVar6 + 0x78);
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    uVar5 = 0x24e;
    *(int *)(puVar6 + 0xb0) = *(int *)(puVar6 + 0xb0) + -1;
    puVar4 = puVar4 + -0x14b8;
  }
  else {
    uVar5 = 0x242;
    *(int *)(puVar6 + 0xb0) = *(int *)(puVar6 + 0xb0) + -1;
    puVar4 = puVar4 + -0x14e8;
  }
  (*(code *)PTR_rts_log_000635ec)(4,puVar4,puVar1 + -0xa2c,uVar5,uVar2);
LAB_000385ac:
  (*(code *)PTR_rts_av_post_00063744)(puVar1 + -0xa2c);
  return uVar2;
}



// ==== get_mjpeg_ctrl @ 0003a318 size=544

undefined4 get_mjpeg_ctrl(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  byte local_18 [8];
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b8,0xce,puVar5);
    uVar3 = 0xce;
    puVar1 = puVar5;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_mjpeg_t_00063528)();
    pcVar6 = (code *)(PTR_LAB_00063274 + -0x6130);
    iVar2 = (*pcVar6)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6b8,0xd1,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x898);
    }
    iVar2 = (*pcVar6)(puVar1);
    if (iVar2 == 0) goto LAB_0003a41c;
    uVar3 = 0xd1;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x898;
  }
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c8;
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x938,uVar3,puVar4);
LAB_0003a41c:
    if (puVar1 != (undefined *)0x0) break;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x940;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6dc,0x5b,puVar5);
    uVar3 = 0x5b;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6f0;
    puVar1 = puVar5;
  }
  if (*(int *)(puVar1 + 0x9c) == 0) {
    uVar3 = 0xffffffe1;
  }
  else {
    uVar3 = (*(code *)PTR_rtsjpgenc_get_coding_ctrl_000632a8)(*(int *)(puVar1 + 0x9c),local_18);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    puVar5 = PTR_memcpy_00063908;
    if (iVar2 == 0) {
      puVar1[0x6c] = puVar1[0x6c] & 0xf0 | local_18[0] & 0xf;
      *(undefined2 *)(puVar1 + 0x6e) = 0xf;
      *(undefined2 *)(puVar1 + 0x70) = 2;
      *(undefined2 *)(puVar1 + 0x72) = 1;
      (*(code *)puVar5)(puVar1 + 0x84,puVar1 + 0x6c,0x18);
      uVar3 = 0;
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x7f4,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6dc,0x62);
    }
  }
  return uVar3;
}



// ==== __get_aec_profile @ 0003aaf0 size=264

undefined4 __get_aec_profile(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3c0,0xf3,param_2);
    uVar2 = 0xf3;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0003abac;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3c0,0xf4,param_2);
    uVar2 = 0xf4;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d4);
LAB_0003abac:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    *param_2 = 0x8001;
    param_2[1] = *(undefined4 *)(iVar1 + 0xcc);
    param_2[2] = *(undefined4 *)(iVar1 + 0xc4);
    uVar2 = 0;
    param_2[3] = *(undefined4 *)(iVar1 + 200);
  }
  return uVar2;
}



// ==== __get_resample_profile @ 0003fc80 size=264

undefined4 __get_resample_profile(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa28,0xb7,param_2);
    uVar2 = 0xb7;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0003fd3c;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa28,0xb8,param_2);
    uVar2 = 0xb8;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa10);
LAB_0003fd3c:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else {
    *param_2 = 0x8001;
    param_2[1] = *(undefined4 *)(iVar1 + 0x9c);
    param_2[3] = *(undefined4 *)(iVar1 + 0x98);
    uVar2 = 0;
    param_2[2] = *(undefined4 *)(iVar1 + 0x94);
  }
  return uVar2;
}



// ==== __get_resample_attr @ 000407cc size=256

undefined4 __get_resample_attr(int param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9d4,0x82,param_2);
    uVar2 = 0x82;
  }
  else {
    if (param_2 != (undefined *)0x0) goto LAB_00040888;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9d4,0x83,param_2);
    uVar2 = 0x83;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9c0);
LAB_00040888:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar2 = 0xffffffe1;
  }
  else {
    (*(code *)PTR_memcpy_00063908)(param_2,iVar1 + 0x54,0x50);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== __get_amixer_profile @ 00042170 size=264

undefined4 __get_amixer_profile(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1354,0x33f,param_2);
    uVar2 = 0x33f;
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_0004222c;
    param_2 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1354,0x340,param_2);
    uVar2 = 0x340;
  }
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,uVar2,
             PTR_s_snd_device_0004ffec_0x14_0006326c + 0x133c);
LAB_0004222c:
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    *param_2 = 0x8001;
    param_2[1] = *(undefined4 *)(iVar1 + 0xe8);
    param_2[2] = *(undefined4 *)(iVar1 + 0xe0);
    uVar2 = 0;
    param_2[3] = *(undefined4 *)(iVar1 + 0xe4);
  }
  return uVar2;
}



