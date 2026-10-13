/* librtstream — "alloc" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== alloc_af_ctrl @ 0001a180 size=72

undefined4
alloc_af_ctrl(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  int iStack00000018;
  
  iStack00000018 = param_2;
  iVar1 = (**(code **)(unaff_gp + -0x77bc))();
  if (iStack00000018 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001a1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_5 + -0x7778))();
    return uVar2;
  }
  return 0;
}



// ==== alloc_awb_ctrl @ 0001ca64 size=780

undefined4 alloc_awb_ctrl(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_s0;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  code *in_t9;
  code *pcVar7;
  undefined8 uVar8;
  int in_stack_00000018;
  
  iVar1 = (*in_t9)(param_1,param_2,param_3 + -0x6110,0x147);
  *(int *)(unaff_s0 + 0x124) = iVar1;
  if (iVar1 == 0) {
    uVar4 = 0xfffffff5;
  }
  else {
    iVar1 = *(int *)(unaff_s0 + 0x124);
    uVar4 = (**(code **)(in_stack_00000018 + -0x7818))
                      (4,*(undefined4 *)(unaff_s0 + 0x1c),
                       *(int *)(in_stack_00000018 + -0x7fd4) + -0x6110,0x14d);
    iVar2 = *(int *)(unaff_s0 + 0x124);
    *(undefined4 *)(iVar1 + 4) = uVar4;
    iVar1 = *(int *)(iVar2 + 4);
    uVar3 = 0;
    if (iVar1 == 0) {
      uVar4 = 0xfffffff5;
    }
    else {
      for (; uVar3 < *(uint *)(unaff_s0 + 0x1c); uVar3 = uVar3 + 1) {
        iVar2 = (**(code **)(in_stack_00000018 + -0x7860))(0);
        *(int *)(iVar1 + uVar3 * 4) = iVar2;
        if (iVar2 == 0) {
          uVar4 = 0xfffffff5;
          goto LAB_0001caf8;
        }
        (**(code **)(in_stack_00000018 + -0x787c))(iVar2);
      }
      puVar5 = *(undefined4 **)(unaff_s0 + 0x124);
      uVar4 = (**(code **)(in_stack_00000018 + -0x7c64))();
      piVar6 = *(int **)(unaff_s0 + 0x124);
      *puVar5 = uVar4;
      uVar4 = 0;
      if (*piVar6 != 0) goto LAB_0001cb0c;
      uVar4 = 0xfffffff6;
    }
LAB_0001caf8:
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x53f8))();
  }
LAB_0001cb0c:
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
  if (iVar1 == 0) {
    if (*(code **)(unaff_s0 + 0x28) != (code *)0x0) {
      uVar4 = (**(code **)(unaff_s0 + 0x28))();
      iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
      if (iVar1 != 0) {
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
  iVar1 = (*pcVar7)(uVar4);
  if (iVar1 == 0) {
    if (*(code **)(unaff_s0 + 0x2c) == (code *)0x0) {
      uVar4 = 0xffffffcb;
    }
    else {
      uVar4 = (**(code **)(unaff_s0 + 0x2c))();
    }
    iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
    if (iVar1 == 0) {
      (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5544))();
      if (*(int *)(unaff_s0 + 0x78) == 0) {
LAB_0001ccb8:
        pcVar7 = *(code **)(in_stack_00000018 + -0x7ce4);
      }
      else {
        pcVar7 = *(code **)(in_stack_00000018 + -0x7ce4);
        if ((-1 < *(int *)(unaff_s0 + 0x100)) && (*(int *)(unaff_s0 + 0x104) != 0)) {
          iVar1 = (**(code **)(in_stack_00000018 + -0x77ec))();
          if (iVar1 == 0) goto LAB_0001ccf8;
          pcVar7 = *(code **)(in_stack_00000018 + -0x79dc);
          *(int *)(unaff_s0 + 0xfc) = *(int *)(in_stack_00000018 + -0x7fd8) + -0x22f0;
          *(int *)(unaff_s0 + 0x108) = unaff_s0;
          uVar4 = (*pcVar7)(iVar1,unaff_s0 + 0xfc);
          iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
          if (iVar2 == 0) {
            *(int *)(unaff_s0 + 0xf8) = iVar1;
          }
          else {
            iVar1 = *(int *)(in_stack_00000018 + -0x7fd8);
            *(undefined4 *)(unaff_s0 + 0xf8) = 0;
            (*(code *)(iVar1 + -0x4ec0))();
            uVar4 = 0;
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
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar4);
  if (iVar1 != 0) {
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x4ec0))();
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x6a64,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x60e4,0x3e5);
    (*(code *)(*(int *)(in_stack_00000018 + -0x7fd8) + -0x5724))();
  }
  return uVar4;
}



// ==== alloc_ae_ctrl @ 0001e1a0 size=56

undefined4 alloc_ae_ctrl(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_s0;
  code *in_t9;
  int in_stack_00000018;
  
  (*in_t9)(param_1,param_2,param_3 + -0x64f0);
  (**(code **)(in_stack_00000018 + -0x7a88))();
  return *(undefined4 *)(unaff_s0 + 0xdc);
}



// ==== alloc_h1_ctrl @ 0001f9a0 size=8

void alloc_h1_ctrl(void)

{
  return;
}



// ==== __alloc_h1_buffer @ 00024ae8 size=184

undefined4 __alloc_h1_buffer(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_s1;
  int unaff_gp;
  int in_stack_00000018;
  
  iVar2 = 0x16b;
  iVar1 = *(int *)(unaff_gp + -0x7fd4);
  while( true ) {
    (**(code **)(unaff_gp + -0x7a88))
              (param_1,iVar1 + -0x5120,iVar2,*(int *)(unaff_gp + -0x7fd4) + -0x4f1c);
    if (iVar2 != 0) break;
    param_1 = *(int *)(unaff_gp + -0x7fd4) + -0x5098;
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x4f08,0x16d
              );
    iVar2 = 0x16d;
    iVar1 = *(int *)(in_stack_00000018 + -0x7fd4);
    unaff_gp = in_stack_00000018;
  }
  iVar1 = (**(code **)(unaff_gp + -0x7c9c))();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x78d0))(*(undefined4 *)(unaff_s1 + 0x10),iVar1);
    (**(code **)(in_stack_00000018 + -0x7bd4))(iVar1);
  }
  return 0;
}



// ==== alloc_dma_memory @ 000268e0 size=316

undefined4 alloc_dma_memory(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffff6;
  }
  else if (param_1 < 1) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4820,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4510,0x22);
    uVar1 = 0xffffffe6;
  }
  else {
    local_18 = *(undefined4 *)(param_2 + 0xc);
    local_1c = *(undefined4 *)(param_2 + 4);
    local_20 = 0;
    uVar3 = *(uint *)(param_2 + 0x10) & 0xc;
    local_14 = 0;
    if (uVar3 == 4) {
      local_14 = 1;
    }
    else if (uVar3 == 8) {
      local_14 = 2;
    }
    else if (uVar3 != 0) {
      local_14 = 3;
    }
    uVar1 = (*(code *)PTR_rts_isp_mem_realloc_000637d0)(param_1,&local_20);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 == 0) {
      (*(code *)PTR_rts_av_init_buffer_00063984)(param_2,local_20,local_1c,local_18);
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x47f8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4510,0x3c);
      uVar1 = 0xfffffff5;
    }
  }
  return uVar1;
}



// ==== alloc_af_ctrl @ 0002a180 size=408

undefined4 alloc_af_ctrl(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                    (1,0xec,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3ce8,0xa8);
  if (iVar2 != 0) {
    (*(code *)PTR_rts_av_obj_init_00063620)(iVar2,PTR_LAB_00063270 + -0x5f50);
    uVar3 = (*(code *)PTR_rts_av_obj_get_0006388c)(iVar2);
    iVar4 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
    *(int *)(iVar2 + 0xdc) = iVar4;
    if (iVar4 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3fa8,puVar1 + -0x3ce8,0xb1);
    }
    else {
      iVar4 = (*(code *)PTR_rts_isp_get_af_window_num_00063a90)(&local_30);
      iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar4);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_rts_alloc_buffer_000636e4)(iVar2 + 0xe0,iVar4 << 2);
        iVar6 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar5);
        pcVar9 = (code *)(PTR_LAB_00063270 + -0x6100);
        if (iVar6 == 0) {
          *(int *)(iVar2 + 0x74) = iVar4;
          *(undefined4 *)(iVar2 + 0x6c) = local_30;
          *(undefined4 *)(iVar2 + 0x70) = local_2c;
          (*pcVar9)(iVar2);
          iVar5 = 0;
        }
        else {
          (*(code *)PTR_rts_free_buffer_000639e8)(iVar2 + 0xe0);
          (*pcVar9)(iVar2);
        }
      }
      else {
        (*(code *)PTR_rts_log_000635ec)
                  (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3f8c,
                   PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3d2c,0x61,iVar4);
        iVar5 = iVar4;
      }
      iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar5);
      if (iVar4 == 0) {
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(0);
        if (iVar4 == 0) {
          iVar5 = (*(code *)(PTR_LAB_00063270 + -0x61b0))(iVar2);
          iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar5);
          if (iVar4 == 0) {
            *(int *)(iVar2 + 0xe8) = iVar2;
            return uVar3;
          }
          puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3f14;
          uVar8 = 0xc3;
        }
        else {
          iVar5 = 0;
          puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3f38;
          uVar8 = 0xbd;
        }
      }
      else {
        puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3f60;
        uVar8 = 0xb7;
      }
      (*(code *)PTR_rts_log_000635ec)(4,puVar7,puVar1 + -0x3ce8,uVar8,iVar5);
    }
    (*(code *)PTR_rts_av_obj_put_00063ab8)(uVar3);
  }
  return 0;
}



// ==== alloc_mjpeg_ctrl @ 0002a6a0 size=152

undefined4 alloc_mjpeg_ctrl(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7a88))
            (*(int *)(in_stack_00000018 + -0x7fd4) + -0x3ee8,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x4034,0xf0,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x3da0);
  iVar1 = (**(code **)(in_stack_00000018 + -0x7ec0))(0);
  if (iVar1 == 0) {
    uVar2 = (*(code *)(*(int *)(in_stack_00000018 + -0x7fd0) + -0x61b0))();
    return uVar2;
  }
  (**(code **)(in_stack_00000018 + -0x7c54))
            (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x3f38,
             *(int *)(in_stack_00000018 + -0x7fd4) + -0x3d94,0xf4);
  return 0;
}



// ==== alloc_awb_ctrl @ 0002ca64 size=28

undefined4 alloc_awb_ctrl(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                    (1,0x184,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x30fc,0x1b4);
  if (iVar2 == 0) {
    return 0;
  }
  (*(code *)PTR_rts_av_obj_init_00063620)(iVar2,PTR_LAB_00063270 + -0x365c);
  uVar3 = (*(code *)PTR_rts_av_obj_get_0006388c)(iVar2);
  iVar4 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  *(int *)(iVar2 + 0x164) = iVar4;
  if (iVar4 < 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3fa8,puVar1 + -0x30fc,0x1bd);
    goto LAB_0002cd28;
  }
  uVar5 = (*(code *)PTR_rts_isp_get_awb_window_num_00063ae4)(&local_28);
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
  if (iVar4 == 0) {
    uVar6 = (*(code *)PTR_rts_alloc_buffer_000636e4)(iVar2 + 0x168,uVar5);
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
    if (iVar4 == 0) {
      uVar6 = (*(code *)PTR_rts_alloc_buffer_000636e4)(iVar2 + 0x170,uVar5);
      iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
      if (iVar4 == 0) {
        uVar6 = (*(code *)PTR_rts_alloc_buffer_000636e4)(iVar2 + 0x178,uVar5);
        iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
        puVar7 = PTR_LAB_00063270;
        if (iVar4 == 0) {
          *(undefined4 *)(iVar2 + 0x6c) = local_28;
          *(undefined4 *)(iVar2 + 0x74) = uVar5;
          *(undefined4 *)(iVar2 + 0x70) = local_24;
          (*(code *)(puVar7 + -0x389c))(iVar2);
          *(undefined4 *)(iVar2 + 0xe8) = local_28;
          *(undefined4 *)(iVar2 + 0xf0) = uVar5;
          *(undefined4 *)(iVar2 + 0xec) = local_24;
          uVar6 = 0;
          goto LAB_0002cc5c;
        }
      }
    }
    (*(code *)(PTR_LAB_00063270 + -0x380c))(iVar2);
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3688,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3140,0x67,uVar5);
    uVar6 = uVar5;
  }
LAB_0002cc5c:
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
  if (iVar4 == 0) {
    uVar6 = (*(code *)(PTR_LAB_00063270 + -0x3c30))(iVar2);
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
    if (iVar4 == 0) {
      uVar6 = (*(code *)(PTR_LAB_00063270 + -0x393c))(iVar2);
      iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar6);
      if (iVar4 == 0) {
        *(int *)(iVar2 + 0x180) = iVar2;
        return uVar3;
      }
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3608;
      uVar5 = 0x1cf;
    }
    else {
      puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3630;
      uVar5 = 0x1c9;
    }
  }
  else {
    puVar7 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x365c;
    uVar5 = 0x1c3;
  }
  (*(code *)PTR_rts_log_000635ec)(4,puVar7,puVar1 + -0x30fc,uVar5,uVar6);
LAB_0002cd28:
  (*(code *)PTR_rts_av_obj_put_00063ab8)(uVar3);
  return 0;
}



// ==== alloc_ae_ctrl @ 0002e1a0 size=4

undefined4 alloc_ae_ctrl(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                    (1,0x184,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2998,0x1d9);
  if (iVar2 == 0) {
    return 0;
  }
  (*(code *)PTR_rts_av_obj_init_00063620)(iVar2,PTR_LAB_00063270 + -0x1f20);
  uVar3 = (*(code *)PTR_rts_av_obj_get_0006388c)(iVar2);
  iVar4 = (*(code *)PTR_rts_isp_ctrl_open_00063964)();
  *(int *)(iVar2 + 0x15c) = iVar4;
  if (iVar4 < 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x3fa8,puVar1 + -0x2998,0x1e2);
    goto LAB_0002e4f4;
  }
  iVar4 = (*(code *)PTR_rts_isp_get_ae_window_num_00063938)(&local_28);
  iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar4);
  if (iVar5 == 0) {
    iVar5 = (*(code *)PTR_rts_isp_get_ae_histogram_num_000636b8)();
    iVar7 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar5);
    if (iVar7 == 0) {
      iVar7 = (*(code *)PTR_rts_alloc_buffer_000636e4)(iVar2 + 0x160,iVar4);
      iVar6 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar7);
      if (iVar6 == 0) {
        iVar7 = (*(code *)PTR_rts_alloc_buffer_000636e4)(iVar2 + 0x168,iVar4);
        iVar6 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar7);
        if (iVar6 == 0) {
          iVar7 = (*(code *)PTR_rts_alloc_buffer_000636e4)(iVar2 + 0x170,iVar4);
          iVar6 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar7);
          if (iVar6 == 0) {
            iVar7 = (*(code *)PTR_rts_alloc_buffer_000636e4)(iVar2 + 0x178,iVar5 << 1);
            iVar6 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar7);
            puVar8 = PTR_LAB_00063270;
            if (iVar6 == 0) {
              *(undefined4 *)(iVar2 + 0x6c) = local_28;
              *(int *)(iVar2 + 0x74) = iVar4;
              *(undefined4 *)(iVar2 + 0x70) = local_24;
              *(int *)(iVar2 + 0x78) = iVar5;
              (*(code *)(puVar8 + -0x2178))(iVar2);
              *(undefined4 *)(iVar2 + 0xe4) = local_28;
              *(int *)(iVar2 + 0xec) = iVar4;
              *(int *)(iVar2 + 0xf0) = iVar5;
              *(undefined4 *)(iVar2 + 0xe8) = local_24;
              iVar7 = 0;
              goto LAB_0002e428;
            }
          }
        }
      }
      (*(code *)(PTR_LAB_00063270 + -0x20e0))(iVar2);
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2eec,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29dc,0x76,iVar5);
      iVar7 = iVar5;
    }
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2f18,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x29dc,0x6f,iVar4);
    iVar7 = iVar4;
  }
LAB_0002e428:
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar7);
  if (iVar4 == 0) {
    iVar7 = (*(code *)(PTR_LAB_00063270 + -0x2610))(iVar2);
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar7);
    if (iVar4 == 0) {
      iVar7 = (*(code *)(PTR_LAB_00063270 + -0x2230))(iVar2);
      iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(iVar7);
      if (iVar4 == 0) {
        *(int *)(iVar2 + 0x180) = iVar2;
        return uVar3;
      }
      puVar8 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e70;
      uVar9 = 500;
    }
    else {
      puVar8 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2e94;
      uVar9 = 0x1ee;
    }
  }
  else {
    puVar8 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2ebc;
    uVar9 = 0x1e8;
  }
  (*(code *)PTR_rts_log_000635ec)(4,puVar8,puVar1 + -0x2998,uVar9,iVar7);
LAB_0002e4f4:
  (*(code *)PTR_rts_av_obj_put_00063ab8)(uVar3);
  return 0;
}



// ==== alloc_h1_ctrl @ 0002f9a0 size=48

undefined4 alloc_h1_ctrl(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  iVar2 = (*(code *)PTR___rts_calloc_00063a28)
                    (1,0x280,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x21c8,0x30d);
  if (iVar2 != 0) {
    (*(code *)PTR_rts_av_obj_init_00063620)(iVar2,PTR_LAB_00063270 + -0x7f4);
    uVar3 = (*(code *)PTR_rts_av_obj_get_0006388c)(iVar2);
    *(int *)(iVar2 + 0x27c) = iVar2;
    (*(code *)PTR_pthread_mutex_init_00063490)(iVar2 + 0x25c,0);
    *(undefined4 *)(iVar2 + 0x6c) = 0xe;
    *(undefined4 *)(iVar2 + 0x90) = 0x96;
    *(undefined4 *)(iVar2 + 0x74) = 0x100000;
    *(undefined4 *)(iVar2 + 0xc0) = 0xf;
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c;
    *(undefined4 *)(iVar2 + 0x78) = 0x1400000;
    uVar6 = *(undefined4 *)(puVar5 + -0x21a0);
    *(undefined4 *)(iVar2 + 0x7c) = 0x4000;
    *(undefined4 *)(iVar2 + 0x80) = 0xffffffff;
    puVar5 = PTR_memcpy_00063908;
    *(undefined4 *)(iVar2 + 200) = uVar6;
    *(undefined4 *)(iVar2 + 0x84) = 0x33;
    *(undefined4 *)(iVar2 + 0x88) = 10;
    *(undefined4 *)(iVar2 + 0xcc) = 10;
    *(undefined4 *)(iVar2 + 0x70) = 2;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 1;
    *(undefined4 *)(iVar2 + 0xa0) = 0;
    *(undefined4 *)(iVar2 + 0xa4) = 0;
    *(undefined4 *)(iVar2 + 0xa8) = 1;
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(undefined4 *)(iVar2 + 0xb0) = 2;
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 1;
    (*(code *)puVar5)(iVar2 + 0xe0,iVar2 + 0x6c,0x74);
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(0);
    puVar5 = PTR_RTS_IS_ERR_00063380;
    if (iVar4 == 0) {
      *(int *)(iVar2 + 0x158) = iVar2 + 0x170;
      *(undefined4 *)(iVar2 + 0x18c) = 0xfffffff1;
      *(undefined4 *)(iVar2 + 0x1c4) = 0xfffffff1;
      *(undefined4 *)(iVar2 + 0x154) = 1;
      *(undefined4 *)(iVar2 + 0x15c) = 2;
      *(undefined4 *)(iVar2 + 0x170) = 0;
      *(undefined4 *)(iVar2 + 0x174) = 0;
      *(undefined4 *)(iVar2 + 400) = 0;
      *(undefined4 *)(iVar2 + 0x194) = 1;
      *(undefined4 *)(iVar2 + 0x1a8) = 1;
      *(undefined4 *)(iVar2 + 0x1ac) = 0;
      *(undefined4 *)(iVar2 + 0x1c8) = 0;
      *(undefined4 *)(iVar2 + 0x1cc) = 1;
      iVar2 = (*(code *)puVar5)(0);
      if (iVar2 == 0) {
        return uVar3;
      }
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x27b0;
      uVar6 = 800;
    }
    else {
      puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x27dc;
      uVar6 = 0x31a;
    }
    (*(code *)PTR_rts_log_000635ec)(4,puVar5,puVar1 + -0x21c8,uVar6,0);
    (*(code *)PTR_rts_av_obj_put_00063ab8)(uVar3);
  }
  return 0;
}



// ==== __alloc_h1_buffer @ 00034ae8 size=2740

/* WARNING: Removing unreachable block (ram,0x000353a8) */
/* WARNING: Removing unreachable block (ram,0x00034c60) */
/* WARNING: Removing unreachable block (ram,0x00034dd4) */
/* WARNING: Removing unreachable block (ram,0x000354e8) */

undefined4 __alloc_h1_buffer(uint *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  uint *puVar16;
  code *pcVar17;
  uint local_38;
  uint local_34;
  uint local_2c [2];
  
  puVar10 = param_1;
  if (param_1 != (uint *)0x0) goto LAB_00034cf0;
  param_1 = (uint *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2190);
  (*(code *)PTR_rts_log_000635ec)
            (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x159c,0x3d9,param_1);
  uVar8 = 0x3d9;
  puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x15b0;
  puVar10 = param_1;
  do {
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,uVar8,puVar9);
LAB_00034cf0:
    if (param_1[0x7c] != 0) {
      return 0;
    }
    uVar6 = (*(code *)PTR_rts_isp_mem_open_000637e8)(0x82);
    puVar10[0x47] = uVar6;
    if ((int)uVar6 < 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1bd8,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x159c,0x3e0);
      return 0xffffffe8;
    }
    uVar6 = (*(code *)PTR_rts_av_get_unit_buffer_obj_00063b64)(puVar10[0x9f]);
    puVar10[0x79] = uVar6;
    puVar9 = PTR_alloc_dma_memory_000637a8;
    if (uVar6 == 0) {
      return 0xfffffff6;
    }
    if (puVar10[0x83] == 0) {
      uVar8 = (*(code *)PTR_rts_get_v4l2_fmt_from_av_fmt_00063a18)(puVar10[6]);
      uVar11 = puVar10[7];
      uVar13 = puVar10[8];
      uVar7 = uVar11;
      uVar6 = uVar13;
      if (-1 < (int)puVar10[0x48]) {
        local_2c[0] = 0;
        local_38 = 0;
        (*(code *)PTR_rts_v4l2_get_max_frmsize_00063918)(puVar10[0x48],uVar8,local_2c,&local_38);
        uVar7 = local_2c[0];
        uVar6 = local_38;
        if (local_38 * local_2c[0] <= uVar13 * uVar11) {
          uVar7 = uVar11;
          uVar6 = uVar13;
        }
      }
      uVar6 = uVar6 * uVar7;
      if (0x12c00 < uVar6) {
        uVar6 = (uVar6 * 5) / 10;
      }
      iVar4 = 0;
      puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1bb4;
      goto LAB_00034dec;
    }
    uVar7 = puVar10[0x78];
    *(undefined4 *)(uVar7 + 4) = 0x1000;
    uVar6 = puVar10[0x47];
    *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 0xc;
    uVar8 = (*(code *)puVar9)(uVar6);
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
    if (iVar4 != 0) {
      uVar8 = 0xfffffff5;
      goto LAB_00035078;
    }
    (*(code *)PTR_rts_isp_set_dma_info_00063434)
              (*(undefined4 *)(puVar10[0x78] + 0xc),
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1ba8);
    piVar15 = *(int **)(puVar10[0x79] + 4);
    iVar4 = *(int *)(puVar10[0x79] + 8);
    if ((int)puVar10[0x48] < 0) {
      uVar6 = puVar10[8];
      uVar7 = puVar10[7];
LAB_00034c34:
      uVar11 = uVar6 * uVar7;
      if (0x12c00 < uVar11) {
        uVar11 = (uVar11 * 5) / 10;
      }
    }
    else {
      uVar11 = 0xffffffe5;
      uVar8 = (*(code *)PTR_rts_isp_get_snr_fmt_000638f0)(puVar10[0x48],&local_38);
      iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
      uVar6 = local_34;
      uVar7 = local_38;
      if (iVar5 == 0) goto LAB_00034c34;
    }
    if (iVar4 == 0) goto LAB_00034f88;
    if (uVar11 <= *(uint *)(*piVar15 + 4)) goto LAB_0003506c;
    uVar6 = puVar10[0x79];
    if (uVar6 == 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x15fc,0x2c9,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1b9c);
      uVar6 = puVar10[0x79];
    }
    if (uVar6 != 0) break;
    uVar8 = 0x2c9;
    param_1 = (uint *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1b9c);
    puVar9 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1620;
  } while( true );
  piVar14 = *(int **)(uVar6 + 4);
  (*(code *)PTR_rts_av_get_buffer_0006379c)(*piVar14);
  (*(code *)PTR_rts_av_set_buffer_callback_00063998)(*piVar14,puVar10,PTR_LAB_00063270 + 0x2268);
  (*(code *)PTR_rts_av_put_buffer_00063548)(*piVar14);
  (*(code *)PTR_rts_queue_clear_00063388)
            (*(undefined4 *)puVar10[0x79],PTR_rts_av_put_buffer_00063548);
  iVar4 = (*(code *)PTR_rts_av_new_buffer_000639e0)(0);
  *piVar14 = iVar4;
  if (iVar4 != 0) {
    (*(code *)PTR_rts_av_set_buffer_observer_000639c4)(iVar4,puVar10[0x9f]);
  }
LAB_00034f88:
  puVar9 = PTR_alloc_dma_memory_000637a8;
  iVar5 = *piVar15;
  uVar6 = puVar10[0x47];
  *(uint *)(iVar5 + 4) = uVar11;
  *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0xc;
  uVar8 = (*(code *)puVar9)(uVar6,iVar5);
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
  if (iVar4 == 0) {
    (*(code *)PTR_rts_isp_set_dma_info_00063434)
              (*(undefined4 *)(iVar5 + 0xc),PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1bb4);
    iVar4 = (*(code *)PTR_rts_av_get_buffer_0006379c)(*piVar15);
    (*(code *)PTR_rts_av_set_buffer_callback_00063998)
              (iVar4,*(undefined4 *)puVar10[0x79],PTR_LAB_00063270 + 0x1f30);
    (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
    (*(code *)PTR_rts_av_set_buffer_ts_00063850)(iVar4);
    if (iVar4 != 0) {
      (*(code *)PTR_rts_av_put_buffer_00063548)(iVar4);
    }
LAB_0003506c:
    uVar8 = 0;
  }
  else {
    pcVar17 = (code *)(PTR_LAB_00063270 + 0x3664);
LAB_0003505c:
    uVar8 = 0xfffffff5;
    (*pcVar17)(puVar10);
  }
  goto LAB_00035078;
  while( true ) {
    iVar4 = iVar4 + 4;
    (*(code *)PTR_rts_isp_set_dma_info_00063434)(*(undefined4 *)(iVar12 + 0xc),puVar9);
    if (iVar4 == 8) break;
LAB_00034dec:
    puVar3 = PTR_alloc_dma_memory_000637a8;
    uVar7 = puVar10[0x47];
    iVar12 = *(int *)(*(int *)(puVar10[0x79] + 4) + iVar4);
    *(uint *)(iVar12 + 4) = uVar6;
    *(uint *)(iVar12 + 0x10) = *(uint *)(iVar12 + 0x10) | 0xc;
    uVar8 = (*(code *)puVar3)(uVar7,iVar12);
    iVar5 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
    if (iVar5 != 0) {
      pcVar17 = (code *)(PTR_LAB_00063270 + 0x252c);
      goto LAB_0003505c;
    }
  }
  iVar4 = 0;
  puVar9 = PTR_LAB_00063270 + 0x1f30;
  do {
    iVar5 = (*(code *)PTR_rts_av_get_buffer_0006379c)
                      (*(undefined4 *)(*(int *)(puVar10[0x79] + 4) + iVar4));
    (*(code *)PTR_rts_av_set_buffer_callback_00063998)(iVar5,*(undefined4 *)puVar10[0x79],puVar9);
    (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
    (*(code *)PTR_rts_av_set_buffer_ts_00063850)(iVar5);
    if (iVar5 != 0) {
      (*(code *)PTR_rts_av_put_buffer_00063548)(iVar5);
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 8);
  uVar8 = 0;
LAB_00035078:
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
  if (iVar4 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1b88,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x159c,0x3ee,uVar8);
    goto LAB_00035474;
  }
  (*(code *)PTR_memset_000637dc)(puVar10 + 0x39,0,0x38);
  puVar10[0x3a] = 1;
  puVar10[0x39] = 0;
  puVar10[0x3c] = puVar10[7];
  puVar10[0x3d] = puVar10[8];
  if (puVar10[5] != 0) {
    puVar10[0x3c] = puVar10[7] - 0x10;
    puVar10[0x3d] = puVar10[8] - 0x10;
  }
  puVar9 = PTR_LAB_00063270;
  if (puVar10[4] != 0) {
    uVar6 = puVar10[0x3d];
    puVar10[0x3d] = puVar10[0x3c];
    puVar10[0x3c] = uVar6;
  }
  (*(code *)(puVar9 + 0x1cc4))(puVar10);
  pcVar2 = (char *)(puVar10[0x3d] * puVar10[0x3c]);
  uVar7 = puVar10[0x3e];
  uVar6 = 0x10;
  if ((pcVar2 < (char *)0x220001) && (uVar6 = 0xf, pcVar2 < (char *)0x1fe001)) {
    if ((char *)0x140000 < pcVar2) {
      bVar1 = uVar7 < 0x1f;
      uVar6 = 0xe;
      uVar7 = 0xd;
LAB_000351f8:
      if (bVar1) {
        uVar6 = uVar7;
      }
      goto LAB_0003522c;
    }
    uVar6 = 0xb;
    if (((char *)0xe1000 < pcVar2) || (uVar6 = 10, (char *)0x65400 < pcVar2)) goto LAB_0003522c;
    if (pcVar2 < (char *)0x54601) {
      if ("_lk" < pcVar2) goto LAB_000351f0;
      uVar6 = 8;
      if ((pcVar2 < "") && (uVar6 = 7, pcVar2 < "")) {
        uVar6 = 6;
      }
      goto LAB_0003522c;
    }
    if (uVar7 < 0x1a) {
LAB_000351f0:
      bVar1 = uVar7 < 0x10;
      uVar6 = 9;
      uVar7 = 8;
      goto LAB_000351f8;
    }
    uVar7 = *puVar10;
  }
  else {
LAB_0003522c:
    uVar7 = *puVar10;
  }
  if (uVar7 < uVar6) {
    *puVar10 = uVar6;
  }
  puVar9 = PTR_H264EncInit_V2_00063870;
  uVar6 = 0x28;
  if (*puVar10 - 1 < 0x10) {
    uVar6 = (uint)(char)PTR_s_snd_device_0004ffec_0x14_0006326c[*puVar10 - 0x1a71];
  }
  puVar16 = puVar10 + 0x65;
  puVar10[0x3b] = uVar6;
  puVar10[0x42] = 1;
  puVar10[0x40] = 0;
  puVar10[0x41] = 0;
  iVar4 = (*(code *)puVar9)(puVar10 + 0x39,puVar10 + 0x38,puVar10[0x48],puVar16);
  if (iVar4 == 0) {
    if (puVar10[0x38] != 0) {
      (*(code *)PTR_H264EncRelease_00063780)();
    }
    puVar9 = PTR_rts_isp_mem_realloc_000637d0;
    puVar10[0x38] = 0;
    uVar8 = (*(code *)puVar9)(puVar10[0x47],puVar16,puVar10[0x66]);
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
    if (iVar4 == 0) {
      (*(code *)PTR_rts_isp_set_dma_info_00063434)
                (puVar10[0x67],PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1b28);
    }
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -7000,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1684,0x3c5,iVar4,0x3c5);
    uVar8 = 0xffffffe2;
  }
  iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
  puVar9 = PTR_LAB_00063270;
  if (iVar4 == 0) {
    if (puVar10[0x84] == 0) {
LAB_00035388:
      puVar10[0x7c] = 1;
      return 0;
    }
    iVar4 = 0;
    do {
      uVar6 = (*(code *)PTR_rts_av_new_buffer_000639e0)(puVar10[iVar4 / 3 + 0x75] + 0x1f);
      puVar10[iVar4 + 0x69] = uVar6;
      if (uVar6 == 0) {
        uVar8 = 0xfffffff5;
        (*(code *)(PTR_LAB_00063270 + 0x23f8))(puVar10);
        goto LAB_000353f8;
      }
      iVar4 = iVar4 + 1;
      (*(code *)(puVar9 + 0x265c))(uVar6);
    } while (iVar4 != 9);
    iVar4 = 0;
    puVar9 = PTR_LAB_00063270 + 0x20cc;
    iVar5 = 0;
    do {
      iVar5 = (*(code *)PTR_rts_av_get_buffer_0006379c)
                        (*(undefined4 *)((int)puVar10 + iVar5 + 0x1a4));
      (*(code *)PTR_rts_av_set_buffer_callback_00063998)(iVar5,puVar10[iVar4 / 3 + 0x72],puVar9);
      (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
      (*(code *)PTR_rts_av_set_buffer_ts_00063850)(iVar5);
      if (iVar5 != 0) {
        (*(code *)PTR_rts_av_put_buffer_00063548)(iVar5);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar4 * 4;
    } while (iVar4 != 9);
    uVar8 = 0;
LAB_000353f8:
    iVar4 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar8);
    if (iVar4 == 0) goto LAB_00035388;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1af0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x159c,0x3fb);
    uVar6 = puVar10[0x67];
    (*(code *)PTR_rts_isp_free_dma_0006341c)(puVar16);
    puVar10[0x67] = uVar6;
  }
  else {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1b1c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x159c,0x3f4,uVar8);
  }
  if (puVar10[0x83] == 0) {
    pcVar17 = (code *)(PTR_LAB_00063270 + 0x252c);
  }
  else {
    pcVar17 = (code *)(PTR_LAB_00063270 + 0x3664);
  }
  (*pcVar17)(puVar10);
LAB_00035474:
  if (-1 < (int)puVar10[0x47]) {
    (*(code *)PTR_rts_isp_mem_close_000634b0)();
  }
  puVar10[0x47] = 0xffffffff;
  return uVar8;
}



// ==== alloc_mjpeg_ctrl @ 0003a6a0 size=348

undefined4 alloc_mjpeg_ctrl(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  iVar3 = (*(code *)PTR___rts_calloc_00063a28)
                    (1,0xa4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x628,0xa5);
  if (iVar3 != 0) {
    (*(code *)PTR_rts_av_obj_init_00063620)(iVar3,PTR_LAB_00063274 + -0x6000);
    uVar4 = (*(code *)PTR_rts_av_obj_get_0006388c)(iVar3);
    *(int *)(iVar3 + 0xa0) = iVar3;
    puVar2 = PTR_memcpy_00063908;
    *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) & 0xf0 | 2;
    *(undefined2 *)(iVar3 + 0x6e) = 0xf;
    *(undefined2 *)(iVar3 + 0x70) = 2;
    *(undefined2 *)(iVar3 + 0x72) = 1;
    (*(code *)puVar2)(iVar3 + 0x84,iVar3 + 0x6c,0x18);
    iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(0);
    if (iVar3 == 0) {
      uVar5 = (*(code *)PTR_set_mjpeg_ctrl_owner_000634ec)(uVar4,param_1);
      iVar3 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar5);
      if (iVar3 == 0) {
        return uVar4;
      }
    }
    else {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x7c4,puVar1 + -0x628,0xb0,0);
    }
    (*(code *)PTR_rts_av_obj_put_00063ab8)(uVar4);
  }
  return 0;
}



