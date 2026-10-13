/* librtstream — "refresh" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== refresh_af_statis @ 0001a738 size=104

undefined4 refresh_af_statis(void)

{
  int unaff_s2;
  code *unaff_s3;
  int in_stack_00000018;
  int in_stack_00000020;
  
  if (in_stack_00000020 == 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6c58,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x61bc,0x55c);
  }
  (*unaff_s3)();
  (**(code **)(in_stack_00000018 + -0x7cf8))();
  (**(code **)(in_stack_00000018 + -0x77e8))(unaff_s2 + -0x61b0);
  return 0;
}



// ==== refresh_awb_statis @ 0001d514 size=200

undefined4 refresh_awb_statis(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_gp;
  int iStack00000010;
  int in_stack_00000018;
  
  if (param_1 == 0) {
    param_1 = *(int *)(unaff_gp + -0x7fd4) + -0x6c38;
    iStack00000010 = param_1;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x62f4,0x6af
              );
    uVar2 = 0x6af;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4);
  }
  else {
    uVar2 = 0;
    if (param_2 != (int *)0x0) goto LAB_0001d5b4;
    param_1 = *(int *)(unaff_gp + -0x7fd4) + -0x697c;
    iStack00000010 = param_1;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x62f4,0x6b0
              );
    uVar2 = 0x6b0;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4);
  }
  param_2 = (int *)(iVar1 + -0x6cc8);
  uVar2 = (**(code **)(in_stack_00000018 + -0x7a88))
                    (param_1,param_2,uVar2,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6310);
LAB_0001d5b4:
  puVar3 = *(undefined4 **)(param_1 + 0x84);
  *(int **)(param_1 + 0x84) = param_2;
  *param_2 = param_1 + 0x80;
  param_2[1] = (int)puVar3;
  *puVar3 = param_2;
  return uVar2;
}



// ==== refresh_ae_statis @ 0001eda8 size=488

int refresh_ae_statis(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_s1;
  undefined4 uVar4;
  int unaff_s4;
  code *pcVar5;
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7f3c))();
  iVar1 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5f2c))();
  (**(code **)(in_stack_00000018 + -0x7d7c))(*(undefined4 *)(unaff_s4 + 0x3c08));
  if (iVar1 == 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6890,unaff_s1 + -0x5d38,0x1a8);
    return 0;
  }
  iVar2 = (**(code **)(in_stack_00000018 + -0x7818))(1,0x160,unaff_s1 + -0x5d38,0x1ac);
  if (iVar2 == 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6870,unaff_s1 + -0x5d38,0x1ae);
    return 0;
  }
  (**(code **)(in_stack_00000018 + -0x7938))(iVar2,iVar1,100);
  *(int *)(iVar2 + 0x80) = iVar2 + 0x80;
  pcVar5 = *(code **)(in_stack_00000018 + -0x7de4);
  *(int *)(iVar2 + 0x84) = iVar2 + 0x80;
  *(undefined4 *)(iVar2 + 0x100) = 0xffffffff;
  (*pcVar5)(iVar2,1);
  *(undefined4 *)(iVar2 + 0x128) = 0;
  pcVar5 = *(code **)(in_stack_00000018 + -0x7c28);
  *(undefined4 *)(iVar2 + 0x124) = 0;
  uVar3 = (*pcVar5)(iVar2);
  if ((int)uVar3 < 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6840,unaff_s1 + -0x5d38,0x1bc);
  }
  else {
    if ((uVar3 & 1) != 0) {
      iVar1 = (**(code **)(in_stack_00000018 + -0x7c64))();
      *(int *)(iVar2 + 0x68) = iVar1;
      if (iVar1 == 0) {
        pcVar5 = *(code **)(in_stack_00000018 + -0x7774);
        goto LAB_0001f0b0;
      }
    }
    pcVar5 = *(code **)(in_stack_00000018 + -0x78b4);
    if ((uVar3 & 2) != 0) {
      iVar1 = (**(code **)(in_stack_00000018 + -0x7c64))();
      *(int *)(iVar2 + 100) = iVar1;
      if (iVar1 == 0) goto LAB_0001f0ac;
      pcVar5 = *(code **)(in_stack_00000018 + -0x78b4);
    }
    uVar4 = 0xffffffcb;
    (*pcVar5)(iVar2,1);
    if (*(code **)(iVar2 + 0x20) != (code *)0x0) {
      uVar4 = (**(code **)(iVar2 + 0x20))(iVar2);
    }
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
    if (iVar1 == 0) {
      if ((param_2 != 0) && (*(code **)(iVar2 + 0x40) != (code *)0x0)) {
        uVar4 = (**(code **)(iVar2 + 0x40))(iVar2,param_2);
        iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
        if (iVar1 != 0) {
          (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))(iVar2);
          uVar4 = 0x1d8;
          iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x67f8;
          goto LAB_0001f09c;
        }
      }
      if (*(code **)(iVar2 + 0x60) == (code *)0x0) {
        return iVar2;
      }
      (**(code **)(iVar2 + 0x60))(&stack0x00000020);
      if (*(code **)(iVar2 + 0x4c) == (code *)0x0) {
        uVar4 = 0xffffffcb;
      }
      else {
        uVar4 = (**(code **)(iVar2 + 0x4c))(iVar2,&stack0x00000020);
      }
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
      if (iVar1 == 0) {
        return iVar2;
      }
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))(iVar2);
      uVar4 = 0x1e3;
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x67d4;
    }
    else {
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))(iVar2);
      uVar4 = 0x1d0;
      iVar1 = *(int *)(in_stack_00000018 + -0x7fd4) + -0x6820;
    }
LAB_0001f09c:
    (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1,unaff_s1 + -0x5d38,uVar4);
  }
LAB_0001f0ac:
  pcVar5 = *(code **)(in_stack_00000018 + -0x7774);
LAB_0001f0b0:
  (*pcVar5)(iVar2);
  return 0;
}



// ==== __refresh_af_statis @ 00029e50 size=176

undefined4 __refresh_af_statis(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x74);
  local_14 = *(undefined4 *)(param_1 + 0x80);
  uVar1 = (*(code *)PTR_rts_isp_get_af_statis_000637d4)(*(undefined4 *)(param_1 + 0xdc),&local_20);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x78) = local_20;
    *(undefined4 *)(param_1 + 0x7c) = local_1c;
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4060,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d40,0x7f,uVar1);
  }
  return uVar1;
}



// ==== refresh_af_statis @ 0002a738 size=196

void refresh_af_statis(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3db4,0xff,puVar4);
    uVar3 = 0xff;
    puVar1 = puVar4;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_rts_av_to_af_t_000632c0)();
    iVar2 = (*(code *)(PTR_LAB_00063270 + -0x6080))(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3db4,0x102,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ee8);
    }
    iVar2 = (*(code *)(PTR_LAB_00063270 + -0x6080))(puVar1);
    if (iVar2 == 0) goto LAB_0002a834;
    uVar3 = 0x102;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ee8;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4034,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3dc8);
LAB_0002a834:
  (*(code *)(PTR_LAB_00063270 + -0x61b0))(puVar1);
  return;
}



// ==== __refresh_awb_statis @ 0002c6c4 size=160

undefined4 __refresh_awb_statis(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x74);
  local_14 = *(undefined4 *)(param_1 + 0x168);
  local_10 = *(undefined4 *)(param_1 + 0x170);
  local_c = *(undefined4 *)(param_1 + 0x178);
  uVar1 = (*(code *)PTR_rts_isp_get_awb_statis_00063a78)(*(undefined4 *)(param_1 + 0x164),&local_18)
  ;
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3744,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3168,0x93,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== refresh_awb_statis @ 0002d514 size=196

void refresh_awb_statis(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3234,0x20b,puVar4);
    uVar3 = 0x20b;
    puVar1 = puVar4;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_rts_av_to_awb_t_00063838)();
    iVar2 = (*(code *)(PTR_LAB_00063270 + -0x378c))(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3234,0x20e,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35bc);
    }
    iVar2 = (*(code *)(PTR_LAB_00063270 + -0x378c))(puVar1);
    if (iVar2 == 0) goto LAB_0002d610;
    uVar3 = 0x20e;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x35bc;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3718,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3248);
LAB_0002d610:
  (*(code *)(PTR_LAB_00063270 + -0x393c))(puVar1);
  return;
}



// ==== __refresh_ae_statis @ 0002ddd0 size=184

undefined4 __refresh_ae_statis(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_1 + 0x170);
  local_24 = *(undefined4 *)(param_1 + 0x74);
  local_18 = *(undefined4 *)(param_1 + 0x178);
  local_1c = *(undefined4 *)(param_1 + 0x78);
  uVar1 = (*(code *)PTR_rts_isp_get_ae_statis_00063948)(*(undefined4 *)(param_1 + 0x15c),local_28);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xb8) = local_28[0];
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fd0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2a00,0xa8,uVar1);
  }
  return uVar1;
}



// ==== refresh_ae_statis @ 0002eda8 size=48

void refresh_ae_statis(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x58e0;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2aa4,0x230,puVar4);
    uVar3 = 0x230;
    puVar1 = puVar4;
  }
  else {
    puVar1 = (undefined *)(*(code *)PTR_to_ae_t_00063ad4)();
    iVar2 = (*(code *)(PTR_LAB_00063270 + -0x2050))(puVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2aa4,0x233,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e3c);
    }
    iVar2 = (*(code *)(PTR_LAB_00063270 + -0x2050))(puVar1);
    if (iVar2 == 0) goto LAB_0002eea4;
    uVar3 = 0x233;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e3c;
  }
  (*(code *)PTR___assert_000637b8)
            (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2fa4,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2ab8);
LAB_0002eea4:
  (*(code *)(PTR_LAB_00063270 + -0x2230))(puVar1);
  return;
}



