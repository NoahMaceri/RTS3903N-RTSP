/* librtstream — "to" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== to_af_ctrl @ 0001a14c size=12

void to_af_ctrl(void)

{
  return;
}



// ==== to_awb_ctrl @ 0001ca30 size=40

undefined4 to_awb_ctrl(void)

{
  undefined4 uVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  code *in_t9;
  code *pcVar7;
  undefined8 uVar8;
  int in_stack_00000018;
  
  iVar2 = *(int *)(unaff_s0 + 0x124);
  uVar1 = (*in_t9)();
  iVar5 = *(int *)(unaff_s0 + 0x124);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = *(int *)(iVar5 + 4);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar1 = 0xfffffff5;
LAB_0001caf8:
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x53f8))();
  }
  else {
    for (; uVar3 < *(uint *)(unaff_s0 + 0x1c); uVar3 = uVar3 + 1) {
      iVar5 = (**(code **)(in_stack_00000018 + -0x7860))(0);
      *(int *)(iVar2 + uVar3 * 4) = iVar5;
      if (iVar5 == 0) {
        uVar1 = 0xfffffff5;
        goto LAB_0001caf8;
      }
      (**(code **)(in_stack_00000018 + -0x787c))(iVar5);
    }
    puVar4 = *(undefined4 **)(unaff_s0 + 0x124);
    uVar1 = (**(code **)(in_stack_00000018 + -0x7c64))();
    piVar6 = *(int **)(unaff_s0 + 0x124);
    *puVar4 = uVar1;
    uVar1 = 0;
    if (*piVar6 == 0) {
      uVar1 = 0xfffffff6;
      goto LAB_0001caf8;
    }
  }
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    if (*(code **)(unaff_s0 + 0x28) != (code *)0x0) {
      uVar1 = (**(code **)(unaff_s0 + 0x28))();
      iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
      if (iVar2 != 0) {
        (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x53f8))();
        goto LAB_0001cb8c;
      }
    }
    *(undefined4 *)(unaff_s0 + 0x128) = 1;
    pcVar7 = *(code **)(in_stack_00000018 + -0x7ec0);
    if (*(int *)(unaff_s0 + 0x18) != 0) {
      *(int *)(*(int *)(unaff_s0 + 0x124) + 8) = *(int *)(*(int *)(unaff_s0 + 0x124) + 8) + 1;
      goto LAB_0001cb8c;
    }
  }
  else {
LAB_0001cb8c:
    pcVar7 = *(code **)(in_stack_00000018 + -0x7ec0);
  }
  iVar2 = (*pcVar7)(uVar1);
  if (iVar2 == 0) {
    if (*(code **)(unaff_s0 + 0x2c) == (code *)0x0) {
      uVar1 = 0xffffffcb;
    }
    else {
      uVar1 = (**(code **)(unaff_s0 + 0x2c))();
    }
    iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5544))();
      if (*(int *)(unaff_s0 + 0x78) == 0) {
LAB_0001ccb8:
        pcVar7 = *(code **)(in_stack_00000018 + -0x7ce4);
      }
      else {
        pcVar7 = *(code **)(in_stack_00000018 + -0x7ce4);
        if ((-1 < *(int *)(unaff_s0 + 0x100)) && (*(int *)(unaff_s0 + 0x104) != 0)) {
          iVar2 = (**(code **)(in_stack_00000018 + -0x77ec))();
          if (iVar2 == 0) goto LAB_0001ccf8;
          pcVar7 = *(code **)(in_stack_00000018 + -0x79dc);
          *(int *)(unaff_s0 + 0xfc) = *(int *)(in_stack_00000018 + -0x7fd8) + -0x22f0;
          *(int *)(unaff_s0 + 0x108) = unaff_s0;
          uVar1 = (*pcVar7)(iVar2,unaff_s0 + 0xfc);
          iVar5 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
          if (iVar5 == 0) {
            *(int *)(unaff_s0 + 0xf8) = iVar2;
          }
          else {
            iVar2 = *(int *)(in_stack_00000018 + -0x7fd8);
            *(undefined4 *)(unaff_s0 + 0xf8) = 0;
            (*(code *)(iVar2 + -0x4ec0))();
            uVar1 = 0;
            (**(code **)(in_stack_00000018 + -0x7c54))
                      (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6a8c,
                       *(int *)(in_stack_00000018 + -0x7fd4) + -0x60e4,0x3d1);
          }
          goto LAB_0001ccb8;
        }
      }
      uVar8 = (*pcVar7)();
      *(undefined8 *)(unaff_s0 + 0x130) = uVar8;
      *(undefined4 *)(unaff_s0 + 0x138) = 0;
      *(undefined4 *)(unaff_s0 + 0x13c) = 0;
      *(undefined4 *)(unaff_s0 + 0x144) = 0;
      *(undefined4 *)(unaff_s0 + 0x148) = 0;
      *(undefined4 *)(unaff_s0 + 0x140) = 0;
      *(undefined4 *)(unaff_s0 + 0x14c) = 0;
      *(undefined4 *)(unaff_s0 + 0x150) = 0;
      *(int *)(unaff_s0 + 0x158) = *(int *)(unaff_s0 + 0x158) + 1;
      goto LAB_0001ccf8;
    }
  }
  *(undefined4 *)(unaff_s0 + 0x74) = 0;
LAB_0001ccf8:
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 != 0) {
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))();
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6a64,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x60e4,0x3e5);
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5724))();
  }
  return uVar1;
}



// ==== to_ae_ctrl @ 0001e16c size=52

undefined4 to_ae_ctrl(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x6c38;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x64f0,0x7cd,
             iVar1);
  (**(code **)(unaff_gp + -0x7a88))
            (iVar1,*(int *)(unaff_gp + -0x7fd4) + -0x6cc8,0x7cd,
             *(int *)(unaff_gp + -0x7fd4) + -0x6508);
  return *(undefined4 *)(iVar1 + 0xdc);
}



// ==== to_h1_t @ 0001f790 size=28

undefined4 to_h1_t(int param_1,int param_2)

{
  int *piVar1;
  int in_t8;
  
  do {
    piVar1 = (int *)(in_t8 + 0x14);
    in_t8 = *piVar1 + -0x14;
    if (*piVar1 == param_1) {
      return 0;
    }
  } while (in_t8 != param_2);
  return 1;
}



// ==== to_h264_ctrl @ 0001f8ac size=132

void to_h264_ctrl(void)

{
  int *in_v0;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_s2;
  int unaff_s3;
  int unaff_gp;
  int in_stack_00000018;
  
  if (in_v0 != (int *)0x0) {
    iVar1 = (**(code **)(unaff_gp + -0x7b44))(1);
    *in_v0 = iVar1;
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)(**(code **)(in_stack_00000018 + -0x7f8c))();
      (**(code **)(in_stack_00000018 + -0x786c))(*puVar2);
      (**(code **)(in_stack_00000018 + -0x7c54))
                (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x5c68,unaff_s3 + -0x5900,0xe3);
      (**(code **)(in_stack_00000018 + -0x796c))();
    }
    else {
      uVar3 = (**(code **)(in_stack_00000018 + -0x7c94))(iVar1,1);
      (**(code **)(in_stack_00000018 + -0x7c94))(iVar1,2,uVar3 | 1);
      in_v0[2] = (int)(in_v0 + 2);
      in_v0[3] = (int)(in_v0 + 2);
      in_v0[4] = (int)(in_v0 + 4);
      in_v0[5] = (int)(in_v0 + 4);
      in_v0[1] = 0;
      if (unaff_s2 < 1) {
        in_v0[6] = 100;
      }
      else {
        in_v0[6] = unaff_s2;
      }
    }
  }
  return;
}



// ==== to_h264_roi @ 0001f8e0 size=52

undefined4 to_h264_roi(void)

{
  undefined4 *in_v0;
  int unaff_s3;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x786c))(*in_v0);
  (**(code **)(in_stack_00000018 + -0x7c54))
            (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x5c68,unaff_s3 + -0x5900,0xe3);
  (**(code **)(in_stack_00000018 + -0x796c))();
  return 0;
}



// ==== to_h1_roi_map @ 0001f96c size=40

void to_h1_roi_map(void)

{
  int unaff_s0;
  undefined4 unaff_s2;
  
  *(undefined4 *)(unaff_s0 + 4) = 0;
  *(undefined4 *)(unaff_s0 + 0x18) = unaff_s2;
  return;
}



// ==== to_mjpeg_t @ 00029f84 size=176

undefined4 to_mjpeg_t(int param_1)

{
  undefined4 uVar1;
  int in_t9;
  int unaff_gp;
  int iVar2;
  
  iVar2 = unaff_gp + 0x12c0 + in_t9;
  if (param_1 == 0) {
    param_1 = *(int *)(iVar2 + -0x7fd4) + -0x4038;
    (**(code **)(iVar2 + -0x7c54))
              (4,*(int *)(iVar2 + -0x7fd4) + -0x6cf0,*(int *)(iVar2 + -0x7fd4) + -0x3d70,0x37,
               param_1);
    (**(code **)(iVar2 + -0x7a88))
              (param_1,*(int *)(iVar2 + -0x7fd4) + -0x4034,0x37,*(int *)(iVar2 + -0x7fd4) + -0x3d88)
    ;
  }
  if (*(int *)(param_1 + 0xe8) == param_1) {
    uVar1 = 0;
  }
  else {
    (**(code **)(iVar2 + -0x7c54))
              (4,*(int *)(iVar2 + -0x7fd4) + -0x3fd4,*(int *)(iVar2 + -0x7fd4) + -0x3d70,0x3a);
    uVar1 = 0xffffffe1;
  }
  return uVar1;
}



// ==== to_mjpeg_ctrl @ 0002a058 size=52

void to_mjpeg_ctrl(undefined4 param_1)

{
  int iVar1;
  int unaff_gp;
  int iStack00000010;
  
  iVar1 = *(int *)(unaff_gp + -0x7fd4) + -0x58e0;
  iStack00000010 = iVar1;
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x3cc8,
             0x25);
  (**(code **)(unaff_gp + -0x7a88))
            (iVar1,*(int *)(unaff_gp + -0x7fd4) + -0x4034,0x25,
             *(int *)(unaff_gp + -0x7fd4) + -0x3cd8);
  return;
}



// ==== to_af_ctrl @ 0002a14c size=52

int to_af_ctrl(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rts_av_to_af_t_000632c0)();
  return iVar1 + 0x6c;
}



// ==== to_awb_ctrl @ 0002ca30 size=52

int to_awb_ctrl(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rts_av_to_awb_t_00063838)();
  return iVar1 + 0x6c;
}



// ==== to_ae_t @ 0002e064 size=124

int to_ae_t(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2980,0x2a,puVar1);
    param_1 = (*(code *)PTR___assert_000637b8)
                        (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,0x2a,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2988);
  }
  return param_1;
}



// ==== to_ae_ctrl @ 0002e16c size=52

int to_ae_ctrl(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_to_ae_t_00063ad4)();
  return iVar1 + 0x6c;
}



// ==== to_h1_t @ 0002f790 size=56

int to_h1_t(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x21b0,0x44,puVar1);
    param_1 = (*(code *)PTR___assert_000637b8)
                        (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x44,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + -0x21b8);
  }
  return param_1;
}



// ==== to_h264_ctrl @ 0002f8ac size=52

int to_h264_ctrl(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_to_h1_t_000635b0)();
  return iVar1 + 0x6c;
}



// ==== to_h264_roi @ 0002f8e0 size=52

int to_h264_roi(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_to_h1_t_000635b0)();
  return iVar1 + 0x154;
}



// ==== to_h1_roi_map @ 0002f96c size=52

int to_h1_roi_map(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_to_h1_t_000635b0)();
  return iVar1 + 0x1e4;
}



// ==== to_mjpeg_t @ 00039f84 size=124

int to_mjpeg_t(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x608,0x24,puVar1);
    param_1 = (*(code *)PTR___assert_000637b8)
                        (puVar1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x938,0x24,
                         PTR_s_snd_device_0004ffec_0x14_0006326c + -0x614);
  }
  return param_1;
}



// ==== to_mjpeg_ctrl @ 0003a058 size=52

int to_mjpeg_ctrl(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_to_mjpeg_t_00063528)();
  return iVar1 + 0x6c;
}



