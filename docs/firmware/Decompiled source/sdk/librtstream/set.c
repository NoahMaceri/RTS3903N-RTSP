/* librtstream — "set" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== set_af_ctrl @ 0001a428 size=188

void set_af_ctrl(undefined4 param_1,int param_2)

{
  undefined4 *unaff_s0;
  int in_t8;
  int unaff_gp;
  int iStack00000010;
  int in_stack_00000018;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  do {
    iStack00000010 = in_t8 + -0x6c68;
    (**(code **)(unaff_gp + -0x7c54))
              (param_1,param_2 + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x61f0,0x527);
    do {
      if (unaff_s0[2] != 0) {
        in_stack_00000020 = 0;
        in_stack_00000024 = 0;
        in_stack_00000028 = 0;
        in_stack_0000002c = 0;
        in_stack_00000030 = 0;
        (**(code **)(in_stack_00000018 + -0x79d4))(unaff_s0[2],&stack0x00000020);
        if (in_stack_00000020 == 0) {
          (**(code **)(in_stack_00000018 + -0x7c54))
                    (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6c58,
                     *(int *)(in_stack_00000018 + -0x7fd4) + -0x61f0,0x52c);
        }
        (*(code *)*unaff_s0)(unaff_s0[1],&stack0x00000020,unaff_s0[2]);
        return;
      }
      (**(code **)(in_stack_00000018 + -0x7a88))
                (*(int *)(in_stack_00000018 + -0x7fd4) + -0x6c68,
                 *(int *)(in_stack_00000018 + -0x7fd4) + -0x6cc8,0x527,
                 *(int *)(in_stack_00000018 + -0x7fd4) + -0x61fc);
      in_t8 = *(int *)(in_stack_00000018 + -0x7fd4);
    } while (unaff_s0[2] != 0);
    param_1 = 4;
    param_2 = *(int *)(in_stack_00000018 + -0x7fd4);
    unaff_gp = in_stack_00000018;
  } while( true );
}



// ==== set_awb_ctrl @ 0001cd70 size=8

void set_awb_ctrl(void)

{
  return;
}



// ==== set_ae_ctrl @ 0001e540 size=376

undefined4 set_ae_ctrl(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int unaff_s0;
  code *unaff_s2;
  int *piVar4;
  code *pcVar5;
  int in_stack_00000018;
  
  (*unaff_s2)();
  (**(code **)(in_stack_00000018 + -0x7c54))
            (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x68d4,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x5d80,0x20c);
  uVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x53f8))();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 != 0) {
    (*unaff_s2)();
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x68d4,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x5d80,0x211);
  }
  if (*(code **)(unaff_s0 + 0x24) == (code *)0x0) {
    uVar1 = 0xffffffcb;
  }
  else {
    uVar1 = (**(code **)(unaff_s0 + 0x24))();
  }
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 != 0) {
    (*unaff_s2)();
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x68b0,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x5d80,0x216);
  }
  piVar3 = *(int **)(unaff_s0 + 0x80);
  piVar4 = (int *)**(int **)(unaff_s0 + 0x80);
  while (piVar3 != (int *)(unaff_s0 + 0x80)) {
    (**(code **)(in_stack_00000018 + -0x7788))();
    piVar3 = piVar4;
    piVar4 = (int *)*piVar4;
  }
  iVar2 = *(int *)(unaff_s0 + 0x80);
  piVar4 = *(int **)(unaff_s0 + 0x84);
  pcVar5 = *(code **)(in_stack_00000018 + -0x796c);
  *(int **)(iVar2 + 4) = piVar4;
  *piVar4 = iVar2;
  *(int **)(unaff_s0 + 0x80) = piVar3;
  *(int **)(unaff_s0 + 0x84) = piVar3;
  (*pcVar5)();
  return 0;
}



// ==== set_h264_bind_isp_flag @ 0001f914 size=20

undefined4 set_h264_bind_isp_flag(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x796c))();
  return 0;
}



// ==== set_h1_ctrl @ 0001fbc8 size=120

undefined4 set_h1_ctrl(undefined4 param_1)

{
  int unaff_s0;
  int unaff_gp;
  int iStack00000010;
  int in_stack_00000018;
  
  iStack00000010 = unaff_s0 + -0x5cf0;
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x5998,
             0x105);
  (**(code **)(in_stack_00000018 + -0x7a88))
            (unaff_s0 + -0x5cf0,*(int *)(in_stack_00000018 + -0x7fd4) + -0x5ce8,0x105,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x59a8);
  *(undefined4 *)(unaff_s0 + -0x5cec) = 0;
  if (*(int *)(unaff_s0 + -0x5cd4) != 0) {
    (**(code **)(in_stack_00000018 + -0x7e28))(*(int *)(unaff_s0 + -0x5cd4),0x120);
  }
  return 0;
}



// ==== set_h1_roi @ 000202a0 size=216

undefined4 set_h1_roi(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_s0;
  int *unaff_s1;
  int iVar4;
  int in_stack_00000020;
  undefined4 in_stack_00000028;
  
  do {
    iVar4 = *unaff_s0;
    do {
      if (iVar4 != 0) {
        in_stack_00000028 = (*(code *)(*(int *)(in_stack_00000020 + -0x7fd8) + -0xad0))(unaff_s0[2])
        ;
        iVar4 = (**(code **)(in_stack_00000020 + -0x7b1c))(*unaff_s1,3,unaff_s0[1],&stack0x00000028)
        ;
        uVar3 = 0;
        if (iVar4 < 0) {
          puVar1 = (undefined4 *)(**(code **)(in_stack_00000020 + -0x7f8c))();
          (**(code **)(in_stack_00000020 + -0x786c))(*puVar1);
          (**(code **)(in_stack_00000020 + -0x7c54))
                    (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x5c24,
                     *(int *)(in_stack_00000020 + -0x7fd4) + -0x5a2c,0x166);
          uVar3 = 0xffffffe4;
        }
        return uVar3;
      }
      uVar3 = 0x15f;
      iVar4 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x5c2c;
      iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x5ce8;
      while( true ) {
        while( true ) {
          (**(code **)(in_stack_00000020 + -0x7a88))
                    (iVar4,iVar2,uVar3,*(int *)(in_stack_00000020 + -0x7fd4) + -0x5a40);
          unaff_s1 = *(int **)(iVar4 + 0x10);
          if (unaff_s1 == (int *)0x0) {
            (**(code **)(in_stack_00000020 + -0x7c54))
                      (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x5be8,
                       *(int *)(in_stack_00000020 + -0x7fd4) + -0x5a2c,0x155);
            return 0xfffffff4;
          }
          iVar4 = (*(code *)(*(int *)(in_stack_00000020 + -0x7fd8) + -0x90c))(unaff_s1);
          if (iVar4 == 0) {
            return 0xfffffff1;
          }
          iVar4 = *unaff_s1;
          if (iVar4 < 0) {
            (**(code **)(in_stack_00000020 + -0x7c54))
                      (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x6cf0,
                       *(int *)(in_stack_00000020 + -0x7fd4) + -0x5a2c,0x15d);
            iVar4 = *unaff_s1;
          }
          if (-1 < iVar4) break;
          uVar3 = 0x15d;
          iVar4 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x5c94;
          iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x5ce8;
        }
        iVar4 = unaff_s0[1];
        if (iVar4 < 0) {
          (**(code **)(in_stack_00000020 + -0x7c54))
                    (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x6cf0,
                     *(int *)(in_stack_00000020 + -0x7fd4) + -0x5a2c,0x15e);
          iVar4 = unaff_s0[1];
        }
        if (-1 < iVar4) break;
        uVar3 = 0x15e;
        iVar4 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x5c3c;
        iVar2 = *(int *)(in_stack_00000020 + -0x7fd4) + -0x5ce8;
      }
      iVar4 = *unaff_s0;
    } while (iVar4 != 0);
    (**(code **)(in_stack_00000020 + -0x7c54))
              (4,*(int *)(in_stack_00000020 + -0x7fd4) + -0x6cf0,
               *(int *)(in_stack_00000020 + -0x7fd4) + -0x5a2c,0x15f);
  } while( true );
}



// ==== set_h1_ctrl_owner @ 000208c8 size=44

void set_h1_ctrl_owner(void)

{
  return;
}



// ==== set_h1_roi_map @ 00021334 size=172

void set_h1_roi_map(void)

{
  bool bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int in_stack_00000018;
  
  iVar2 = *(int *)(unaff_s0 + 0x68);
  pcVar4 = *(code **)(in_stack_00000018 + -0x7758);
  if (iVar2 != unaff_s0) {
    pcVar4 = *(code **)(in_stack_00000018 + -0x7a88);
    (*pcVar4)(*(int *)(in_stack_00000018 + -0x7fd4) + -0x5888,
              *(int *)(in_stack_00000018 + -0x7fd4) + -0x58dc,0x4f,
              *(int *)(in_stack_00000018 + -0x7fd4) + -0x5870);
  }
  (*pcVar4)(unaff_s0 + 0xc);
  if (*(int *)(unaff_s0 + 8) < 1) {
    bVar1 = false;
  }
  else {
    iVar3 = *(int *)(unaff_s0 + 8) + -1;
    *(int *)(unaff_s0 + 8) = iVar3;
    bVar1 = iVar3 == 0;
  }
  (**(code **)(in_stack_00000018 + -0x79b0))(unaff_s0 + 0xc);
  if (bVar1) {
    (**(code **)(in_stack_00000018 + -0x791c))(iVar2);
    return;
  }
  return;
}



// ==== set_h1_observer @ 000216e8 size=72

undefined4 set_h1_observer(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_gp;
  int in_stack_00000010;
  
  (**(code **)(unaff_gp + -0x7d0c))();
  *(undefined4 *)(unaff_s0 + 0x24) = 0;
  *(undefined4 *)(unaff_s0 + 0x28) = 0;
  (**(code **)(in_stack_00000010 + -0x79b0))(unaff_s1 + 0x3c14);
  return 0;
}



// ==== __set_isp_buffer_number @ 00028ed0 size=448

undefined4 __set_isp_buffer_number(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_s1;
  uint uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4280);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x408c,0x4d,puVar5);
    uVar4 = 0x4d;
    param_1 = puVar5;
    param_2 = unaff_s1;
  }
  else {
    if (param_1[8] == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x408c,0x4e,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4214);
    }
    if (param_1[8] != 0) goto LAB_00028fa8;
    uVar4 = 0x4e;
    puVar5 = (undefined4 *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4214);
  }
  (*(code *)PTR___assert_000637b8)
            (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4278,uVar4,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x40a4);
LAB_00028fa8:
  if (param_2 != param_1[9]) {
    uVar4 = *param_1;
    if (param_1[9] != 0) {
      (*(code *)PTR_free_v4l2_buffers_00063960)(uVar4,param_1 + 10);
      param_1[9] = 0;
    }
    if (param_2 == 0) {
      return 0;
    }
    iVar3 = (*(code *)PTR_req_v4l2_buffers_000632fc)(uVar4,param_1 + 10,param_2,1);
    puVar1 = PTR_LAB_00063270;
    if (iVar3 < 1) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4200,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x408c,0x5e,iVar3);
      return 0xfffffff5;
    }
    param_1[9] = iVar3;
    for (uVar6 = 0; puVar2 = PTR_rts_av_set_buffer_callback_00063998, uVar6 < (uint)param_1[9];
        uVar6 = uVar6 + 1) {
      iVar3 = param_1[uVar6 + 10];
      *(uint *)(iVar3 + 0x14) = uVar6;
      (*(code *)puVar2)(iVar3,param_1,puVar1 + -0x6f70);
    }
  }
  return 0;
}



// ==== __set_af_attr_buffer @ 00029f00 size=128

void __set_af_attr_buffer(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4038;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d00,0x45,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,0x45,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d18);
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xe0);
  return;
}



// ==== set_mjpeg_ctrl @ 0002a08c size=36

void set_mjpeg_ctrl(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7a88))
            (param_1,*(int *)(unaff_gp + -0x7fd4) + -0x4034,0x25,
             *(int *)(unaff_gp + -0x7fd4) + -0x3cd8);
  return;
}



// ==== set_af_ctrl @ 0002a428 size=304

undefined4 set_af_ctrl(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d4c,0xd4,puVar4);
    uVar3 = 0xd4;
    puVar2 = puVar4;
  }
  else {
    puVar2 = (undefined *)(*(code *)PTR_rts_av_to_af_t_000632c0)();
    pcVar5 = (code *)(PTR_LAB_00063270 + -0x6080);
    iVar1 = (*pcVar5)(puVar2);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d4c,0xd7,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ee8);
    }
    iVar1 = (*pcVar5)(puVar2);
    if (iVar1 == 0) goto LAB_0002a524;
    uVar3 = 0xd7;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ee8;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d58);
LAB_0002a524:
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(0);
    if (iVar1 == 0) {
      uVar3 = (*(code *)(PTR_LAB_00063270 + -0x61b0))(puVar2);
      return uVar3;
    }
    uVar3 = 0xe1;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3f38;
  }
  else {
    uVar3 = 0xdb;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ec0;
  }
  (*(code *)PTR_rts_log_000635ec)
            (4,puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d4c,uVar3,0);
  return 0;
}



// ==== set_mjpeg_ctrl_owner @ 0002a538 size=68

undefined4 set_mjpeg_ctrl_owner(void)

{
  int unaff_gp;
  undefined4 uStack00000010;
  
  uStack00000010 = 0;
  (**(code **)(unaff_gp + -0x7c54))
            (4,*(int *)(unaff_gp + -0x7fd4) + -0x3ec0,*(int *)(unaff_gp + -0x7fd4) + -0x3d4c,0xdb);
  return 0;
}



// ==== __set_awb_attr_buffer @ 0002c764 size=144

void __set_awb_attr_buffer(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x371c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3114,0x47,param_1);
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,0x47,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x312c);
  }
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x178);
  return;
}



// ==== set_awb_ctrl @ 0002cd70 size=256

int set_awb_ctrl(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int unaff_s2;
  uint uVar9;
  undefined4 local_18;
  uint local_14;
  
  if (param_1 == 0) {
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3178,0x1e0,puVar7);
    uVar5 = 0x1e0;
    puVar4 = puVar7;
LAB_0002ce64:
    (*(code *)PTR___assert_000637b8)
              (puVar7,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,uVar5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3188);
  }
  else {
    puVar4 = (undefined *)(*(code *)PTR_rts_av_to_awb_t_00063838)();
    pcVar8 = (code *)(PTR_LAB_00063270 + -0x378c);
    iVar2 = (*pcVar8)(puVar4);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3178,0x1e3,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35bc);
    }
    unaff_s2 = (*pcVar8)(puVar4);
    if (unaff_s2 != 0) {
      uVar5 = 0x1e3;
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35bc;
      goto LAB_0002ce64;
    }
  }
  uVar9 = *(uint *)(puVar4 + 0x78);
  iVar2 = -0x15;
  if (2 < uVar9) goto LAB_0002d2d0;
  uVar1 = *(uint *)(puVar4 + 0xf4);
  if (uVar9 != uVar1) {
    if (uVar1 == 1) {
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35d0;
    }
    else if (uVar1 == 2) {
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35c8;
    }
    else {
      puVar7 = (undefined *)0x0;
      if (uVar1 == 0) {
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35dc;
      }
    }
    if (uVar9 == 1) {
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35d0;
    }
    else if (uVar9 == 2) {
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35c8;
    }
    else {
      puVar6 = (undefined *)0x0;
      if (uVar9 == 0) {
        puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35dc;
      }
    }
    (*(code *)PTR_rts_log_000635ec)
              (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3594,puVar7,puVar6);
    local_18 = 0x98090c;
    local_14 = *(uint *)(puVar4 + 0x78);
    iVar2 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(*(undefined4 *)(puVar4 + 0x164),&local_18);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
    if (iVar3 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3578,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x31c8,0x188,iVar2);
      goto LAB_0002d2d0;
    }
    *(undefined4 *)(puVar4 + 0xf4) = *(undefined4 *)(puVar4 + 0x78);
  }
  iVar2 = *(int *)(puVar4 + 0x78);
  if (iVar2 == 1) {
    iVar2 = unaff_s2;
    if (*(int *)(puVar4 + 0x7c) == *(int *)(puVar4 + 0xf8)) goto LAB_0002d2d0;
    (*(code *)PTR_rts_log_000635ec)
              (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3550,*(undefined2 *)(puVar4 + 0xf8),
               *(undefined2 *)(puVar4 + 0xfa),*(undefined2 *)(puVar4 + 0x7c),
               *(undefined2 *)(puVar4 + 0x7e));
    local_18 = *(undefined4 *)(puVar4 + 0x7c);
    iVar2 = (*(code *)PTR_rts_isp_set_awb_auto_gain_adjustment_000632e4)
                      (*(undefined4 *)(puVar4 + 0x164),&local_18);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
    if (iVar3 == 0) {
      *(undefined2 *)(puVar4 + 0xf8) = *(undefined2 *)(puVar4 + 0x7c);
      *(undefined2 *)(puVar4 + 0xfa) = *(undefined2 *)(puVar4 + 0x7e);
      iVar2 = 0;
      goto LAB_0002d2d0;
    }
    uVar5 = 0xfc;
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x351c;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x31d8;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 0) {
        iVar2 = FUN_0002d070();
        return iVar2;
      }
      iVar2 = -0x15;
      goto LAB_0002d2d0;
    }
    if (*(short *)(puVar4 + 0xa4) != *(short *)(puVar4 + 0x120)) {
      (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3494);
      local_18 = 0x98090e;
      local_14 = (uint)*(ushort *)(puVar4 + 0xa4);
      iVar2 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(*(undefined4 *)(puVar4 + 0x164),&local_18);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
      if (iVar3 != 0) {
        uVar5 = 0x137;
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3470;
        puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3200;
        goto LAB_0002d21c;
      }
      *(undefined2 *)(puVar4 + 0x120) = *(undefined2 *)(puVar4 + 0xa4);
    }
    if (*(short *)(puVar4 + 0xa6) != *(short *)(puVar4 + 0x122)) {
      (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3444);
      local_18 = 0x98f902;
      local_14 = (uint)*(ushort *)(puVar4 + 0xa6);
      iVar2 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(*(undefined4 *)(puVar4 + 0x164),&local_18);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
      if (iVar3 != 0) {
        uVar5 = 0x146;
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3420;
        puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3200;
        goto LAB_0002d21c;
      }
      *(undefined2 *)(puVar4 + 0x122) = *(undefined2 *)(puVar4 + 0xa6);
    }
    iVar2 = unaff_s2;
    if (*(short *)(puVar4 + 0xa8) == *(short *)(puVar4 + 0x124)) goto LAB_0002d2d0;
    (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x33f4);
    local_18 = 0x98090f;
    local_14 = (uint)*(ushort *)(puVar4 + 0xa8);
    iVar2 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(*(undefined4 *)(puVar4 + 0x164),&local_18);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
    if (iVar3 == 0) {
      *(undefined2 *)(puVar4 + 0x124) = *(undefined2 *)(puVar4 + 0xa8);
      iVar2 = 0;
      goto LAB_0002d2d0;
    }
    uVar5 = 0x155;
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x33d0;
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3200;
  }
LAB_0002d21c:
  (*(code *)PTR_rts_log_000635ec)(4,puVar7,puVar6,uVar5,iVar2);
LAB_0002d2d0:
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
  if (iVar3 == 0) {
    iVar2 = (*(code *)(PTR_LAB_00063270 + -0x3c30))(puVar4);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
    if (iVar3 == 0) {
      iVar2 = (*(code *)(PTR_LAB_00063270 + -0x393c))(puVar4);
      return iVar2;
    }
    uVar5 = 0x1ed;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3630;
  }
  else {
    uVar5 = 0x1e7;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x33a4;
  }
  (*(code *)PTR_rts_log_000635ec)
            (4,puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3178,uVar5,iVar2);
  return iVar2;
}



// ==== set_ae_ctrl @ 0002e540 size=92

undefined4 set_ae_ctrl(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 local_18;
  uint local_14;
  
  if (param_1 == 0) {
    puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a0c,0x205,puVar6);
    uVar3 = 0x205;
    puVar2 = puVar6;
LAB_0002e62c:
    (*(code *)PTR___assert_000637b8)
              (puVar6,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,uVar3,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a18);
  }
  else {
    puVar2 = (undefined *)(*(code *)PTR_to_ae_t_00063ad4)();
    pcVar7 = (code *)(PTR_LAB_00063270 + -0x2050);
    iVar1 = (*pcVar7)(puVar2);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a0c,0x208,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e3c);
    }
    iVar1 = (*pcVar7)(puVar2);
    if (iVar1 != 0) {
      uVar3 = 0x208;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e3c;
      goto LAB_0002e62c;
    }
  }
  uVar8 = *(uint *)(puVar2 + 0x7c);
  uVar3 = 0xffffffeb;
  if (1 < uVar8) goto LAB_0002eb68;
  if (*(uint *)(puVar2 + 0xf4) != uVar8) {
    if (*(uint *)(puVar2 + 0xf4) == 0) {
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35d0;
    }
    else {
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e44;
    }
    if (uVar8 == 0) {
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35d0;
    }
    else {
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e44;
    }
    (*(code *)PTR_rts_log_000635ec)
              (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e14,puVar6,puVar4);
    local_18 = 0x9a0901;
    local_14 = *(uint *)(puVar2 + 0x7c);
    uVar3 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(*(undefined4 *)(puVar2 + 0x15c),&local_18);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar1 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2df8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a58,0x1ad,local_18,uVar3);
      goto LAB_0002eb68;
    }
    *(undefined4 *)(puVar2 + 0xf4) = *(undefined4 *)(puVar2 + 0x7c);
    uVar8 = *(uint *)(puVar2 + 0x7c);
  }
  if (uVar8 == 0) {
    iVar1 = (*(code *)PTR_memcmp_000634cc)
                      (*(undefined4 *)(puVar2 + 0x114),*(undefined4 *)(puVar2 + 0x9c),
                       *(undefined4 *)(puVar2 + 0x74));
    if (iVar1 == 0) {
LAB_0002e7e0:
      if (*(int *)(puVar2 + 0x118) != *(int *)(puVar2 + 0xa0)) {
        (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2d94);
        uVar3 = (*(code *)PTR_rts_isp_set_ae_target_delta_000636ac)
                          (*(undefined4 *)(puVar2 + 0x15c),(int)(char)puVar2[0xa0]);
        iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar1 != 0) {
          uVar5 = 0x178;
          puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2d70;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a68;
          goto LAB_0002eb34;
        }
        *(undefined4 *)(puVar2 + 0x118) = *(undefined4 *)(puVar2 + 0xa0);
      }
      if (*(short *)(puVar2 + 0x11c) != *(short *)(puVar2 + 0xa4)) {
        (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2d44);
        uVar3 = (*(code *)PTR_rts_isp_set_ae_gain_max_00063320)
                          (*(undefined4 *)(puVar2 + 0x15c),*(undefined2 *)(puVar2 + 0xa4));
        iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar1 != 0) {
          uVar5 = 0x183;
          puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2d24;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a68;
          goto LAB_0002eb34;
        }
        *(undefined2 *)(puVar2 + 0x11c) = *(undefined2 *)(puVar2 + 0xa4);
      }
      uVar3 = 0;
      if (puVar2[0x11e] == puVar2[0xa6]) goto LAB_0002eb58;
      (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2cfc);
      uVar3 = (*(code *)PTR_rts_isp_set_ae_min_fps_000634dc)
                        (*(undefined4 *)(puVar2 + 0x15c),puVar2[0xa6]);
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar1 == 0) {
        puVar2[0x11e] = puVar2[0xa6];
        goto LAB_0002eb50;
      }
      uVar5 = 0x18e;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2cdc;
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a68;
    }
    else {
      (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2dd0);
      local_18 = *(undefined4 *)(puVar2 + 0x74);
      local_14 = *(uint *)(puVar2 + 0x9c);
      uVar3 = (*(code *)PTR_rts_isp_set_ae_weight_00063450)
                        (*(undefined4 *)(puVar2 + 0x15c),&local_18);
      iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar1 == 0) {
        (*(code *)PTR_memcpy_00063908)
                  (*(undefined4 *)(puVar2 + 0x114),*(undefined4 *)(puVar2 + 0x9c),
                   *(undefined4 *)(puVar2 + 0x74));
        goto LAB_0002e7e0;
      }
      uVar5 = 0x16a;
      puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2dbc;
      puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a68;
    }
LAB_0002eb34:
    (*(code *)PTR_rts_log_000635ec)(4,puVar6,puVar4,uVar5,uVar3);
  }
  else {
    uVar3 = 0xffffffeb;
    if (uVar8 == 1) {
      if ((*(short *)(puVar2 + 0x82) != *(short *)(puVar2 + 0xfa)) ||
         (*(int *)(puVar2 + 0x84) != *(int *)(puVar2 + 0xfc))) {
        (*(code *)PTR_rts_log_000635ec)
                  (1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2cb4,*(short *)(puVar2 + 0xfa),
                   *(undefined2 *)(puVar2 + 0xfc),*(undefined2 *)(puVar2 + 0xfe),
                   *(short *)(puVar2 + 0x82),*(undefined2 *)(puVar2 + 0x84),
                   *(undefined2 *)(puVar2 + 0x86));
        local_18 = *(undefined4 *)(puVar2 + 0x82);
        local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)(puVar2 + 0x86));
        uVar3 = (*(code *)PTR_rts_isp_set_ae_gain_00063b04)
                          (*(undefined4 *)(puVar2 + 0x15c),&local_18);
        iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar1 != 0) {
          uVar5 = 300;
          puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2c84;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a78;
          goto LAB_0002eb34;
        }
        *(undefined2 *)(puVar2 + 0xfa) = *(undefined2 *)(puVar2 + 0x82);
        *(undefined2 *)(puVar2 + 0xfc) = *(undefined2 *)(puVar2 + 0x84);
        *(undefined2 *)(puVar2 + 0xfe) = *(undefined2 *)(puVar2 + 0x86);
      }
      if (*(short *)(puVar2 + 0x80) != *(short *)(puVar2 + 0xf8)) {
        (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2c60);
        local_18 = 0x98f903;
        local_14 = (uint)*(ushort *)(puVar2 + 0x80);
        uVar3 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(*(undefined4 *)(puVar2 + 0x15c),&local_18)
        ;
        iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar1 != 0) {
          uVar5 = 0x13e;
          puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2c3c;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a78;
          goto LAB_0002eb34;
        }
        *(undefined2 *)(puVar2 + 0xf8) = *(undefined2 *)(puVar2 + 0x80);
      }
      uVar3 = 0;
      if (*(int *)(puVar2 + 0x88) != *(int *)(puVar2 + 0x100)) {
        (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2c10);
        local_18 = 0x9a0902;
        local_14 = *(uint *)(puVar2 + 0x88);
        uVar3 = (*(code *)PTR_rts_v4l2_set_ctrl_0006337c)(*(undefined4 *)(puVar2 + 0x15c),&local_18)
        ;
        iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar1 != 0) {
          uVar5 = 0x14d;
          puVar6 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2bec;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a78;
          goto LAB_0002eb34;
        }
        *(undefined4 *)(puVar2 + 0x100) = *(undefined4 *)(puVar2 + 0x88);
LAB_0002eb50:
        uVar3 = 0;
      }
    }
  }
LAB_0002eb58:
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
LAB_0002eb68:
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar1 == 0) {
    uVar3 = (*(code *)(PTR_LAB_00063270 + -0x2610))(puVar2);
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar1 == 0) {
      uVar3 = (*(code *)(PTR_LAB_00063270 + -0x2230))(puVar2);
      return uVar3;
    }
    uVar5 = 0x212;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e94;
  }
  else {
    uVar5 = 0x20c;
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2bbc;
  }
  (*(code *)PTR_rts_log_000635ec)
            (4,puVar2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a0c,uVar5,uVar3);
  return uVar3;
}



// ==== set_h264_bind_isp_flag @ 0002f914 size=88

void set_h264_bind_isp_flag(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_to_h1_t_000635b0)();
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 600) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 600) = 1;
    }
  }
  return;
}



// ==== set_h1_ctrl @ 0002fbc8 size=928

int set_h1_ctrl(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  code *pcVar6;
  int unaff_s2;
  uint uVar7;
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x21d4,0x337,puVar5);
    uVar4 = 0x337;
    puVar1 = puVar5;
LAB_0002fcc0:
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,uVar4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x21e0);
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_h1_t_000635b0)();
    pcVar6 = (code *)(PTR_LAB_00063270 + -0x9c0);
    iVar2 = (*pcVar6)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x21d4,0x33a,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c);
    }
    unaff_s2 = (*pcVar6)(puVar1);
    if (unaff_s2 != 0) {
      uVar4 = 0x33a;
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c;
      goto LAB_0002fcc0;
    }
  }
  if (*(int *)(puVar1 + 600) != 0) {
    *(undefined4 *)(puVar1 + 0x9c) = *(undefined4 *)(puVar1 + 0x110);
  }
  uVar7 = *(uint *)(puVar1 + 0x70);
  *(uint *)(puVar1 + 0x6c) = *(uint *)(puVar1 + 0xe0);
  if (((uVar7 & *(uint *)(puVar1 + 0xe0)) != 0) && ((uVar7 - 1 & uVar7) == 0)) {
    uVar4 = 0x4000;
    if ((*(uint *)(puVar1 + 0x74) < 0x4000) ||
       (uVar4 = 0x1400000, 0x1400000 < *(uint *)(puVar1 + 0x74))) {
      *(undefined4 *)(puVar1 + 0x74) = uVar4;
    }
    uVar4 = 0x4000;
    if ((*(uint *)(puVar1 + 0x78) < 0x4000) ||
       (uVar4 = 0x1400000, 0x1400000 < *(uint *)(puVar1 + 0x78))) {
      *(undefined4 *)(puVar1 + 0x78) = uVar4;
    }
    uVar4 = 0x4000;
    if ((*(uint *)(puVar1 + 0x7c) < 0x4000) ||
       (uVar4 = 0x1400000, 0x1400000 < *(uint *)(puVar1 + 0x7c))) {
      *(undefined4 *)(puVar1 + 0x7c) = uVar4;
    }
    if ((uVar7 != 8) || (*(uint *)(puVar1 + 0x7c) <= *(uint *)(puVar1 + 0x78))) {
      if (*(uint *)(puVar1 + 0x90) == 0) {
        uVar4 = 1;
LAB_0002fdc8:
        *(undefined4 *)(puVar1 + 0x90) = uVar4;
      }
      else {
        uVar4 = 0x96;
        if (0x96 < *(uint *)(puVar1 + 0x90)) goto LAB_0002fdc8;
      }
      if (*(int *)(puVar1 + 0xb8) != 0) {
        *(undefined4 *)(puVar1 + 0xb8) = 1;
      }
      if (*(int *)(puVar1 + 0xc0) < 0) {
        *(undefined4 *)(puVar1 + 0xc0) = 0;
      }
      if (0x7f < *(uint *)(puVar1 + 0x94)) {
        *(undefined4 *)(puVar1 + 0x94) = 0x7f;
      }
      if (*(int *)(puVar1 + 0x98) != 0) {
        *(undefined4 *)(puVar1 + 0x98) = 1;
      }
      if (*(int *)(puVar1 + 0x9c) != 0) {
        *(undefined4 *)(puVar1 + 0x9c) = 1;
      }
      if (*(int *)(puVar1 + 0xa0) != 0) {
        *(undefined4 *)(puVar1 + 0xa0) = 1;
      }
      if (2 < *(uint *)(puVar1 + 0xa4)) {
        *(undefined4 *)(puVar1 + 0xa4) = 2;
      }
      if (*(int *)(puVar1 + 0xa8) != 0) {
        *(undefined4 *)(puVar1 + 0xa8) = 1;
      }
      if (2 < *(uint *)(puVar1 + 0xac)) {
        *(undefined4 *)(puVar1 + 0xac) = 2;
      }
      if (2 < *(uint *)(puVar1 + 0xb0)) {
        *(undefined4 *)(puVar1 + 0xb0) = 2;
      }
      goto LAB_0002fe7c;
    }
  }
  unaff_s2 = -0x15;
LAB_0002fe7c:
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(unaff_s2);
  if (iVar2 == 0) {
    if (*(int *)(puVar1 + 0x254) != 0) {
      iVar2 = (*(code *)(PTR_LAB_00063270 + -0xea0))(*(int *)(puVar1 + 0x254),puVar1 + 0x6c);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar2);
      if (iVar3 != 0) {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2738,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2220,0x1af,iVar2);
        return iVar2;
      }
    }
    (*(code *)PTR_memcpy_00063908)(puVar1 + 0xe0,puVar1 + 0x6c,0x74);
    unaff_s2 = 0;
    if (*(code **)(puVar1 + 0x274) != (code *)0x0) {
      (**(code **)(puVar1 + 0x274))(*(undefined4 *)(puVar1 + 0x278));
    }
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2760,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2220,0x1a8);
  }
  return unaff_s2;
}



// ==== set_h1_roi @ 000302a0 size=1064

int set_h1_roi(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  int unaff_s1;
  code *pcVar10;
  undefined *in_t8;
  undefined1 auStack_d8 [88];
  undefined4 local_80 [5];
  undefined4 local_6c [5];
  undefined4 local_58;
  undefined4 local_54;
  
  if (param_1 == 0) {
    puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22ac,0x351,puVar9);
    uVar5 = 0x351;
    puVar1 = puVar9;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_h1_t_000635b0)();
    pcVar10 = (code *)(PTR_LAB_00063270 + -0x9c0);
    iVar2 = (*pcVar10)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22ac,0x354,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c);
    }
    unaff_s1 = (*pcVar10)(puVar1);
    puVar9 = puVar1 + 0x70;
    puVar4 = (undefined *)0x1;
    uVar5 = 0xfffffff1;
    in_t8 = puVar1;
    if (unaff_s1 == 0) goto LAB_00030434;
    uVar5 = 0x354;
    puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c;
  }
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960;
  (*(code *)PTR___assert_000637b8)();
  while( true ) {
    *(undefined **)(in_t8 + 0x174) = puVar4;
    if (*(int *)(in_t8 + 0x188) < -0xf) {
      *(undefined4 *)(in_t8 + 0x188) = uVar5;
    }
    else if (0 < *(int *)(in_t8 + 0x188)) {
      *(undefined4 *)(in_t8 + 0x188) = 0;
    }
    if ((int)*(uint *)(in_t8 + 0x178) < 0) {
      *(undefined4 *)(in_t8 + 0x178) = 0;
    }
    else if (*(uint *)(puVar1 + 0x24c) < *(uint *)(in_t8 + 0x178)) {
      *(uint *)(in_t8 + 0x178) = *(uint *)(puVar1 + 0x24c);
    }
    if ((int)*(uint *)(in_t8 + 0x180) < 0) {
      *(undefined4 *)(in_t8 + 0x180) = 0;
    }
    else if (*(uint *)(puVar1 + 0x24c) < *(uint *)(in_t8 + 0x180)) {
      *(uint *)(in_t8 + 0x180) = *(uint *)(puVar1 + 0x24c);
    }
    if ((int)*(uint *)(in_t8 + 0x17c) < 0) {
      *(undefined4 *)(in_t8 + 0x17c) = 0;
    }
    else if (*(uint *)(puVar1 + 0x250) < *(uint *)(in_t8 + 0x17c)) {
      *(uint *)(in_t8 + 0x17c) = *(uint *)(puVar1 + 0x250);
    }
    if ((int)*(uint *)(in_t8 + 0x184) < 0) {
      *(undefined4 *)(in_t8 + 0x184) = 0;
    }
    else if (*(uint *)(puVar1 + 0x250) < *(uint *)(in_t8 + 0x184)) {
      *(uint *)(in_t8 + 0x184) = *(uint *)(puVar1 + 0x250);
    }
    if ((*(int *)(in_t8 + 0x180) <= *(int *)(in_t8 + 0x178)) ||
       (*(int *)(in_t8 + 0x184) <= *(int *)(in_t8 + 0x17c))) break;
    do {
      in_t8 = in_t8 + 0x38;
      if (in_t8 == puVar9) goto LAB_000304c0;
LAB_00030434:
    } while (*(int *)(in_t8 + 0x174) == 0);
  }
  unaff_s1 = -0x15;
LAB_000304c0:
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(unaff_s1);
  if (iVar2 == 0) {
    unaff_s1 = 0;
    if (*(int *)(puVar1 + 0x254) != 0) {
      iVar2 = (*(code *)PTR_H264EncGetCodingCtrl_00063374)(*(int *)(puVar1 + 0x254),auStack_d8);
      if (iVar2 == 0) {
        iVar2 = (*(code *)(PTR_LAB_00063270 + -0x90c))(auStack_d8);
        if (iVar2 == 2) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x26b8,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22c8,0x23b,0xffffffb7);
          unaff_s1 = -0x49;
        }
        else {
          iVar2 = 0;
          puVar9 = puVar1;
          do {
            iVar6 = *(int *)(puVar9 + 0x174);
            if (iVar2 == 1) {
              if (iVar6 != 0) {
                local_54 = *(undefined4 *)(puVar9 + 0x188);
              }
              iVar6 = *(int *)(puVar9 + 0x174);
              puVar3 = local_6c;
            }
            else {
              puVar3 = local_80;
              if (iVar6 != 0) {
                local_58 = *(undefined4 *)(puVar9 + 0x188);
              }
            }
            uVar7 = 0;
            if (iVar6 == 0) {
              *puVar3 = 0;
            }
            else {
              uVar8 = *(uint *)(puVar9 + 0x178);
              *puVar3 = 1;
              if (7 < uVar8) {
                uVar7 = uVar8 - 8 >> 4;
              }
              uVar8 = *(uint *)(puVar9 + 0x17c);
              puVar3[2] = uVar7;
              uVar7 = 0;
              if (7 < uVar8) {
                uVar7 = uVar8 - 8 >> 4;
              }
              uVar8 = *(uint *)(puVar9 + 0x180);
              puVar3[1] = uVar7;
              uVar7 = 0;
              if (7 < uVar8) {
                uVar7 = uVar8 - 8 >> 4;
              }
              uVar8 = *(uint *)(puVar9 + 0x184);
              puVar3[4] = uVar7;
              uVar7 = 0;
              if (7 < uVar8) {
                uVar7 = uVar8 - 8 >> 4;
              }
              puVar3[3] = uVar7;
            }
            iVar2 = iVar2 + 1;
            puVar9 = puVar9 + 0x38;
          } while (iVar2 != 2);
          iVar2 = (*(code *)PTR_H264EncSetCodingCtrl_00063b28)
                            (*(undefined4 *)(puVar1 + 0x254),auStack_d8);
          unaff_s1 = 0;
          if (iVar2 != 0) {
            (*(code *)PTR_rts_log_000635ec)
                      (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2738,
                       PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22c8,0x25f,iVar2);
            unaff_s1 = iVar2;
          }
        }
      }
      else {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28c8,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22c8,0x234,iVar2);
        unaff_s1 = -0x1b;
      }
    }
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x26e0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x22c8,0x22b);
  }
  return unaff_s1;
}



// ==== set_h1_ctrl_owner @ 000308c8 size=408

undefined4 set_h1_ctrl_owner(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int unaff_s1;
  code *pcVar6;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x232c,0x36b,puVar5);
    uVar4 = 0x36b;
    puVar2 = puVar5;
    param_2 = unaff_s1;
    param_3 = unaff_s4;
    param_4 = unaff_s5;
LAB_000309d0:
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,uVar4,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2340);
  }
  else {
    puVar2 = (undefined *)(*(code *)PTR_to_h1_t_000635b0)();
    pcVar6 = (code *)(PTR_LAB_00063270 + -0x9c0);
    iVar3 = (*pcVar6)(puVar2);
    if (iVar3 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x232c,0x36e,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c);
    }
    iVar3 = (*pcVar6)(puVar2);
    if (iVar3 != 0) {
      uVar4 = 0x36e;
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c;
      goto LAB_000309d0;
    }
  }
  *(int *)(puVar2 + 0x254) = param_2;
  *(undefined4 *)(puVar2 + 0x24c) = param_3;
  *(undefined4 *)(puVar2 + 0x250) = param_4;
  if (param_2 == 0) {
    return 0;
  }
  (*(code *)PTR_memcpy_00063908)(puVar2 + 0x6c,puVar2 + 0xe0,0x74);
  uVar4 = (*(code *)PTR_set_h1_ctrl_000633b0)(param_1);
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
  if (iVar3 != 0) {
    return uVar4;
  }
  uVar4 = (*(code *)PTR_set_h1_roi_00063a88)(param_1);
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
  if (iVar3 != 0) {
    return uVar4;
  }
  if (*(int *)(puVar2 + 0x254) == 0) {
    uVar4 = 0xffffffe1;
  }
  else {
    uVar4 = (*(code *)(PTR_LAB_00063270 + -0xb5c))(puVar2);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    if (iVar3 == 0) {
      iVar3 = (*(code *)PTR_H264EncGetMbSizeInfo_0006375c)
                        (*(undefined4 *)(puVar2 + 0x254),auStack_30);
      if (iVar3 == 0) {
        if (*(int *)(puVar2 + 500) != 0) {
          (*(code *)PTR_rts_free_000638d4)();
        }
        *(undefined4 *)(puVar2 + 500) = 0;
        if (*(int *)(puVar2 + 0x228) != 0) {
          (*(code *)PTR_rts_free_000638d4)();
        }
        puVar1 = PTR___rts_calloc_00063a28;
        *(undefined4 *)(puVar2 + 0x228) = 0;
        iVar3 = (*(code *)puVar1)(local_2c * local_28,1,puVar5 + -0x2354,0x2ce);
        *(int *)(puVar2 + 500) = iVar3;
        if (iVar3 != 0) {
          (*(code *)PTR_memcpy_00063908)(puVar2 + 0x218,puVar2 + 0x1e4,0x34);
          iVar3 = (*(code *)PTR___rts_calloc_00063a28)
                            (local_2c * local_28,1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2354
                             ,0x2d7);
          *(int *)(puVar2 + 0x228) = iVar3;
          uVar4 = 0;
          if (iVar3 != 0) goto LAB_00030c08;
          if (*(int *)(puVar2 + 500) != 0) {
            (*(code *)PTR_rts_free_000638d4)();
          }
          *(undefined4 *)(puVar2 + 500) = 0;
          if (*(int *)(puVar2 + 0x228) != 0) {
            (*(code *)PTR_rts_free_000638d4)();
          }
          *(undefined4 *)(puVar2 + 0x228) = 0;
        }
        uVar4 = 0xfffffff5;
      }
      else {
        uVar4 = 0xffffffe5;
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x283c,puVar5 + -0x2354,0x2c6,iVar3)
        ;
      }
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x269c,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2354,0x2c0,uVar4);
    }
  }
LAB_00030c08:
  iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar4);
  if (iVar3 == 0) {
    return 0;
  }
  return uVar4;
}



// ==== set_h1_roi_map @ 00031334 size=468

undefined4 set_h1_roi_map(undefined *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_d8 [144];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x266c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2548,0x41a,puVar4);
    param_1 = puVar4;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,0x41a,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2558);
  }
  uVar3 = 0;
  if (*(int *)(param_1 + -4) != 0) {
    if (*(int *)(puVar4 + 0x70) == 0) {
      uVar3 = 0xffffffe1;
    }
    else {
      iVar2 = (*(code *)PTR_H264EncGetCodingCtrl_00063374)(*(int *)(puVar4 + 0x70),auStack_d8);
      if (iVar2 == 0) {
        puVar5 = puVar4 + 0x78;
        (*(code *)PTR_pthread_mutex_lock_00063ae8)(puVar5);
        local_48 = *(undefined4 *)(puVar4 + 0x40);
        *(undefined4 *)(puVar4 + 0x48) = 3;
        local_44 = *(undefined4 *)(puVar4 + 0x4c);
        local_40 = *(undefined4 *)(puVar4 + 0x50);
        local_3c = *(undefined4 *)(puVar4 + 0x54);
        iVar2 = (*(code *)PTR_H264EncSetCodingCtrl_00063b28)
                          (*(undefined4 *)(puVar4 + 0x70),auStack_d8);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_H264EncSetRoiMap_000635cc)
                            (*(undefined4 *)(puVar4 + 0x70),*(undefined4 *)(puVar4 + 0x44));
          puVar1 = PTR_pthread_mutex_unlock_00063890;
          if (iVar2 == 0) {
            *(undefined4 *)(puVar4 + -4) = 0;
            (*(code *)puVar1)(puVar5);
            return 0;
          }
          uVar3 = 0x43e;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2644;
        }
        else {
          uVar3 = 0x437;
          puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2870;
        }
        (*(code *)PTR_rts_log_000635ec)
                  (4,puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2548,uVar3,iVar2);
        (*(code *)PTR_pthread_mutex_unlock_00063890)(puVar5);
        uVar3 = 0xffffffe4;
      }
      else {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x28c8,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2548,0x426,iVar2);
        uVar3 = 0xffffffe5;
      }
    }
  }
  return uVar3;
}



// ==== set_h1_observer @ 000316e8 size=220

void set_h1_observer(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x25d0,0x476,puVar4);
    uVar3 = 0x476;
    puVar1 = puVar4;
    param_2 = unaff_s2;
    param_3 = unaff_s3;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_h1_t_000635b0)();
    pcVar5 = (code *)(PTR_LAB_00063270 + -0x9c0);
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x25d0,0x479,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c);
    }
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 == 0) goto LAB_000317f0;
    uVar3 = 0x479;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x278c;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2960,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x25e0);
LAB_000317f0:
  *(undefined4 *)(puVar1 + 0x274) = param_2;
  *(undefined4 *)(puVar1 + 0x278) = param_3;
  return;
}



// ==== __set_video_full_range @ 00033364 size=180

void __set_video_full_range(int param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_LAB_00063270;
  if (param_1 == 0) {
    puVar2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x177c,0xac,puVar2);
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188;
    puVar3 = PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar2,param_2,0xac,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1794);
  }
  iVar1 = (*(code *)(puVar3 + 0x1950))();
  if (iVar1 != 0) {
    if (param_2 == (undefined *)0x0) {
      *(undefined4 *)(iVar1 + 0x30) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x30) = 1;
    }
  }
  (*(code *)PTR_rts_av_set_h264_ctrl_0006371c)(iVar1);
  return;
}



// ==== set_mjpeg_ctrl @ 0003a08c size=652

undefined4 set_mjpeg_ctrl(int param_1)

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
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x638,0xc2,puVar5);
    uVar3 = 0xc2;
    puVar1 = puVar5;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_mjpeg_t_00063528)();
    pcVar6 = (code *)(PTR_LAB_00063274 + -0x6130);
    iVar2 = (*pcVar6)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x638,0xc5,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x898);
    }
    iVar2 = (*pcVar6)(puVar1);
    if (iVar2 == 0) goto LAB_0003a190;
    uVar3 = 0xc5;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x898;
  }
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x648;
  while( true ) {
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x938,uVar3,puVar4);
LAB_0003a190:
    puVar5 = PTR_RTS_IS_ERR_00063380;
    if (puVar1 != (undefined *)0x0) break;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x940;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x694,0x75,puVar5);
    uVar3 = 0x75;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6a8;
    puVar1 = puVar5;
  }
  if ((*(uint *)(puVar1 + 0x6c) & 0xf) < 2) {
    puVar1[0x6c] = puVar1[0x6c] & 0xf0 | 2;
  }
  iVar2 = (*(code *)puVar5)(0);
  if (iVar2 == 0) {
    if ((*(uint *)(puVar1 + 0x6c) & 0xf) != (*(uint *)(puVar1 + 0x84) & 0xf)) {
      (*(code *)PTR_rts_log_000635ec)(1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x844);
      local_18[0] = local_18[0] & 0xf0 | (byte)*(undefined4 *)(puVar1 + 0x6c) & 0xf;
      if (*(int *)(puVar1 + 0x9c) != 0) {
        uVar3 = (*(code *)PTR_rtsjpgenc_set_coding_ctrl_00063584)(*(int *)(puVar1 + 0x9c),local_18);
        iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar2 != 0) {
          (*(code *)PTR_rts_log_000635ec)
                    (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x814,
                     PTR_s_snd_device_0004ffec_0x14_0006326c + -0x694,0x87,uVar3);
          return uVar3;
        }
      }
      puVar1[0x84] = puVar1[0x84] & 0xf0 | (byte)*(undefined4 *)(puVar1 + 0x6c) & 0xf;
    }
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x86c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x694,0x79);
  }
  return 0;
}



// ==== set_mjpeg_ctrl_owner @ 0003a538 size=360

void set_mjpeg_ctrl_owner(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int unaff_s2;
  code *pcVar5;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x708,0xdb,puVar4);
    uVar3 = 0xdb;
    puVar1 = puVar4;
    param_2 = unaff_s2;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_mjpeg_t_00063528)();
    pcVar5 = (code *)(PTR_LAB_00063274 + -0x6130);
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x708,0xde,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x898);
    }
    iVar2 = (*pcVar5)(puVar1);
    if (iVar2 == 0) goto LAB_0003a640;
    uVar3 = 0xde;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x898;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x938,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x720);
LAB_0003a640:
  *(int *)(puVar1 + 0x9c) = param_2;
  if (param_2 != 0) {
    (*(code *)PTR_memcpy_00063908)(puVar1 + 0x6c,puVar1 + 0x84,0x18);
                    /* WARNING: Could not recover jumptable at 0x0003a67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_set_mjpeg_ctrl_000638ec)(param_1);
    return;
  }
  return;
}



// ==== __set_aec_profile @ 0003af50 size=560

undefined4 __set_aec_profile(undefined *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_s1;
  int iVar4;
  code *pcVar5;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x398,0x108,param_1);
    uVar3 = 0x108;
  }
  else {
    unaff_s1 = param_2;
    if (param_2 != (int *)0x0) goto LAB_0003b01c;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x398,0x109,param_1);
    uVar3 = 0x109;
  }
  param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0);
  (*(code *)PTR___assert_000637b8)
            (param_1,param_2,uVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ac);
LAB_0003b01c:
  if (*param_2 != 0x8001) {
    return 0xffffffeb;
  }
  if (unaff_s1[1] != 0) {
    if (unaff_s1[3] == 0) {
      return 0xffffffeb;
    }
    if (unaff_s1[2] != 0) {
      uVar3 = (*(code *)PTR_rts_audio_check_argument_00063330)();
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar2 != 0) {
        return uVar3;
      }
      if (((unaff_s1[1] == 16000) || (unaff_s1[1] == 8000)) && (unaff_s1[2] == 0x10)) {
        iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
        if (iVar2 == 0) {
          return 0xfffffff6;
        }
        iVar4 = unaff_s1[1];
        if (((*(int *)(iVar2 + 0xcc) == iVar4) && (*(int *)(iVar2 + 200) == unaff_s1[3])) &&
           (*(int *)(iVar2 + 0xc4) == unaff_s1[2])) {
          return 0;
        }
        *(int *)(iVar2 + 0xcc) = iVar4;
        *(int *)(iVar2 + 200) = unaff_s1[3];
        *(int *)(iVar2 + 0xc4) = unaff_s1[2];
        puVar1 = PTR_rts_audio_calc_block_align_00063524;
        if (iVar4 == 16000) {
          uVar3 = 0x100;
        }
        else {
          uVar3 = 0x80;
        }
        *(undefined4 *)(iVar2 + 0xd0) = uVar3;
        *(undefined4 *)(iVar2 + 0x10) = uVar3;
        iVar4 = (*(code *)puVar1)();
        *(int *)(iVar2 + 0x14) = iVar4;
        pcVar5 = (code *)(PTR_LAB_00063274 + -0x5188);
        *(int *)(iVar2 + 0x80) = *(int *)(iVar2 + 0x10) * iVar4;
        (*pcVar5)(iVar2);
        return 0;
      }
    }
  }
  return 0xffffffeb;
}



// ==== __set_resample_profile @ 0003fd88 size=464

undefined4 __set_resample_profile(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa58,0xcc,piVar4);
    uVar3 = 0xcc;
  }
  else {
    piVar4 = param_2;
    if (param_2 != (int *)0x0) goto LAB_0003fe54;
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa58,0xcd,piVar4);
    uVar3 = 0xcd;
  }
  param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770);
  (*(code *)PTR___assert_000637b8)
            (piVar4,param_2,uVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa40);
LAB_0003fe54:
  uVar3 = 0xffffffeb;
  if ((((*param_2 == 0x8001) && (uVar3 = 0xffffffeb, piVar4[1] != 0)) && (piVar4[3] != 0)) &&
     (uVar3 = 0xffffffeb, piVar4[2] != 0)) {
    uVar3 = (*(code *)PTR_rts_audio_check_argument_00063330)();
    iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar1 == 0) {
      piVar2 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
      if (piVar2 == (int *)0x0) {
        uVar3 = 0xffffffe1;
      }
      else {
        uVar3 = 0;
        if (((piVar2[0x13] != piVar4[1]) || (piVar2[0x12] != piVar4[3])) ||
           (piVar2[0x11] != piVar4[2])) {
          piVar2[0x13] = piVar4[1];
          piVar2[0x12] = piVar4[3];
          piVar2[0x11] = piVar4[2];
          if (*piVar2 != 0) {
            (*(code *)PTR_rts_audio_resample_free_00063aa8)();
          }
          *piVar2 = 0;
        }
      }
    }
  }
  return uVar3;
}



// ==== __set_resample_attr @ 0003ff58 size=408

undefined4 __set_resample_attr(undefined *param_1,undefined *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *unaff_s1;
  int iVar4;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9fc,0x96,param_1);
    uVar3 = 0x96;
  }
  else {
    unaff_s1 = param_2;
    if (param_2 != (undefined *)0x0) goto LAB_00040024;
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x126c;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9fc,0x97,param_1);
    uVar3 = 0x97;
  }
  param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770;
  (*(code *)PTR___assert_000637b8)
            (param_1,param_2,uVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x9e8);
LAB_00040024:
  uVar3 = (*(code *)PTR_rts_audio_check_argument_00063330)
                    (*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x40),
                     *(undefined4 *)(unaff_s1 + 0x44));
  iVar1 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
  if (iVar1 == 0) {
    piVar2 = (int *)(*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
    if (piVar2 == (int *)0x0) {
      uVar3 = 0xffffffe1;
    }
    else {
      iVar1 = *(int *)(unaff_s1 + 0x40);
      iVar4 = *(int *)(unaff_s1 + 0x44);
      uVar3 = 0;
      if (((piVar2[0x27] != *(int *)(unaff_s1 + 0x48)) || (piVar2[0x25] != iVar1)) ||
         (piVar2[0x26] != iVar4)) {
        piVar2[0x27] = *(int *)(unaff_s1 + 0x48);
        piVar2[0x25] = iVar1;
        piVar2[0x26] = iVar4;
        if (*piVar2 != 0) {
          (*(code *)PTR_rts_audio_resample_free_00063aa8)();
        }
        *piVar2 = 0;
      }
    }
  }
  return uVar3;
}



// ==== __set_amixer_profile @ 00042278 size=408

undefined4 __set_amixer_profile(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1384,0x354,piVar4);
    uVar3 = 0x354;
  }
  else {
    piVar4 = param_2;
    if (param_2 != (int *)0x0) goto LAB_00042344;
    piVar4 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6ac8);
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1384,0x355,piVar4);
    uVar3 = 0x355;
  }
  param_2 = (int *)(PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0);
  (*(code *)PTR___assert_000637b8)
            (piVar4,param_2,uVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x136c);
LAB_00042344:
  uVar3 = 0xffffffeb;
  if ((((*param_2 == 0x8001) && (uVar3 = 0xffffffeb, piVar4[1] != 0)) && (piVar4[3] != 0)) &&
     (uVar3 = 0xffffffeb, piVar4[2] != 0)) {
    uVar3 = (*(code *)PTR_rts_audio_check_argument_00063330)();
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_rts_av_get_unit_priv_00063344)(param_1);
      puVar1 = PTR_rts_audio_calc_block_align_00063524;
      if (iVar2 == 0) {
        uVar3 = 0xfffffff6;
      }
      else {
        *(int *)(iVar2 + 0xe8) = piVar4[1];
        *(int *)(iVar2 + 0xe4) = piVar4[3];
        *(int *)(iVar2 + 0xe0) = piVar4[2];
        uVar3 = (*(code *)puVar1)();
        *(undefined4 *)(iVar2 + 0xf0) = uVar3;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



