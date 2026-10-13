/* librtstream — "speex" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== speex_resampler_destroy @ 000355b8 size=144

undefined4 speex_resampler_destroy(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_gp;
  
  pcVar4 = *(code **)(unaff_gp + -0x7efc);
  if (param_1 == 0) {
    iVar3 = *(int *)(unaff_gp + -0x7fd4);
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x6cf0,*(int *)(unaff_gp + -0x7fd4) + -0x1828,0x67b
              );
    pcVar4 = *(code **)(unaff_gp + -0x7a88);
    (*pcVar4)(iVar3 + -0x6c38,*(int *)(unaff_gp + -0x7fd4) + -0x2188,0x67b,
              *(int *)(unaff_gp + -0x7fd4) + -0x1844);
  }
  iVar3 = (*pcVar4)();
  if (iVar3 == 0) {
    uVar1 = 0xffffffe1;
  }
  else {
    uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fd0) + 0x1e1c))(iVar3 + 0x18);
    iVar2 = (**(code **)(unaff_gp + -0x7ec0))(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00035690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(unaff_gp + -0x795c))(iVar3);
      return uVar1;
    }
    (**(code **)(unaff_gp + -0x7c54))
              (4,*(int *)(unaff_gp + -0x7fd4) + -0x1ac8,*(int *)(unaff_gp + -0x7fd4) + -0x1828,0x683
              );
  }
  return uVar1;
}



// ==== speex_resampler_process_int @ 00035644 size=104

void speex_resampler_process_int(void)

{
  int iVar1;
  code *in_t9;
  int in_stack_00000018;
  
  iVar1 = (*in_t9)();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000018 + -0x7c54))
              (4,*(int *)(in_stack_00000018 + -0x7fd4) + -0x1ac8,
               *(int *)(in_stack_00000018 + -0x7fd4) + -0x1828,0x683);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00035690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000018 + -0x795c))();
  return;
}



// ==== speex_resampler_process_float @ 00035878 size=148

undefined4 speex_resampler_process_float(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int in_t9;
  code *pcVar3;
  int unaff_gp;
  int iVar4;
  
  iVar4 = unaff_gp + 0x59cc + in_t9;
  uVar2 = *(uint *)(param_1 + 0x9c);
  if ((int)uVar2 < 1) {
    uVar1 = 0xffffffef;
  }
  else {
    if (0x40 < uVar2) {
      uVar2 = 0x40;
    }
    pcVar3 = *(code **)(iVar4 + -0x7a64);
    *param_2 = uVar2;
    (*pcVar3)(param_2 + 1,0,0x40);
    (**(code **)(iVar4 + -0x7938))(param_2 + 1,param_1 + 0xa0,*param_2);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== speex_resampler_process_interleaved_float @ 00035b68 size=64

undefined4 speex_resampler_process_interleaved_float(void)

{
  undefined4 uVar1;
  int iVar2;
  code *in_t9;
  int in_stack_00000010;
  
  uVar1 = (*in_t9)();
  iVar2 = (**(code **)(in_stack_00000010 + -0x7ec0))(uVar1);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== speex_resampler_get_rate @ 00035d88 size=20

void speex_resampler_get_rate(void)

{
  int in_v0;
  int unaff_s0;
  undefined4 unaff_s1;
  code *pcVar1;
  int in_stack_00000010;
  
  if (in_v0 < 500) {
    *(undefined4 *)(unaff_s0 + 0x18) = 1;
  }
  else {
    *(undefined4 *)(unaff_s0 + 0x18) = 0;
  }
  pcVar1 = *(code **)(in_stack_00000010 + -0x7af4);
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x7c) = unaff_s1;
  (*pcVar1)();
  (**(code **)(in_stack_00000010 + -0x7c54))
            (1,*(int *)(in_stack_00000010 + -0x7fd4) + -0x1570,*(undefined4 *)(unaff_s0 + 0x18),
             *(undefined4 *)(unaff_s0 + 0x1c));
  return;
}



// ==== speex_resampler_set_rate_frac @ 00035d9c size=100

void speex_resampler_set_rate_frac(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  code *pcVar1;
  int unaff_gp;
  int in_stack_00000010;
  
  *(undefined4 *)(unaff_s0 + 0x18) = 0;
  *(undefined4 *)(unaff_s0 + 0x18) = 1;
  pcVar1 = *(code **)(unaff_gp + -0x7af4);
  *(undefined4 *)(unaff_s0 + 0x1c) = 0;
  *(undefined4 *)(unaff_s0 + 0x7c) = unaff_s1;
  (*pcVar1)();
  (**(code **)(in_stack_00000010 + -0x7c54))
            (1,*(int *)(in_stack_00000010 + -0x7fd4) + -0x1570,*(undefined4 *)(unaff_s0 + 0x18),
             *(undefined4 *)(unaff_s0 + 0x1c));
  return;
}



// ==== speex_resampler_set_rate @ 00035ed8 size=52

undefined4 speex_resampler_set_rate(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *in_t9;
  code *pcVar4;
  int in_stack_00000018;
  
  (*in_t9)();
  pcVar4 = *(code **)(in_stack_00000018 + -0x7a88);
  (*pcVar4)();
  iVar2 = (*pcVar4)();
  if (iVar2 == 0) {
    uVar3 = 0xfffffff6;
  }
  else {
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    pcVar4 = *(code **)(in_stack_00000018 + -0x7b60);
    if (*(int *)(iVar2 + 0x18) == 0) {
      bVar1 = *(int *)(iVar2 + 0x1c) == 0;
      if (bVar1) {
        (*pcVar4)(*(undefined4 *)(iVar2 + 0x14),0,0);
        uVar3 = *(undefined4 *)(iVar2 + 0x14);
      }
      else {
        (*pcVar4)();
        uVar3 = *(undefined4 *)(iVar2 + 0x14);
      }
      (**(code **)(in_stack_00000018 + -0x797c))(uVar3,!bVar1);
      uVar3 = 0;
    }
    else {
      (*pcVar4)(*(undefined4 *)(iVar2 + 0x14),iVar2,*(int *)(in_stack_00000018 + -0x7fd0) + 0x5fcc);
      (**(code **)(in_stack_00000018 + -0x797c))(*(undefined4 *)(iVar2 + 0x14),0);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// ==== speex_resampler_get_ratio @ 00035f0c size=20

undefined4 speex_resampler_get_ratio(void)

{
  bool bVar1;
  int in_v0;
  undefined4 uVar2;
  code *pcVar3;
  int in_stack_00000018;
  
  if (in_v0 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    *(undefined4 *)(in_v0 + 0x68) = 0;
    *(undefined4 *)(in_v0 + 0x6c) = 0;
    pcVar3 = *(code **)(in_stack_00000018 + -0x7b60);
    if (*(int *)(in_v0 + 0x18) == 0) {
      bVar1 = *(int *)(in_v0 + 0x1c) == 0;
      if (bVar1) {
        (*pcVar3)(*(undefined4 *)(in_v0 + 0x14),0,0);
        uVar2 = *(undefined4 *)(in_v0 + 0x14);
      }
      else {
        (*pcVar3)();
        uVar2 = *(undefined4 *)(in_v0 + 0x14);
      }
      (**(code **)(in_stack_00000018 + -0x797c))(uVar2,!bVar1);
      uVar2 = 0;
    }
    else {
      (*pcVar3)();
      (**(code **)(in_stack_00000018 + -0x797c))(*(undefined4 *)(in_v0 + 0x14),0);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== speex_resampler_set_quality @ 00035f20 size=80

void speex_resampler_set_quality(void)

{
  bool bVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000018;
  
  *(undefined4 *)(unaff_s0 + 0x6c) = 0;
  pcVar3 = *(code **)(unaff_gp + -0x7b60);
  if (unaff_s1 == 0) {
    bVar1 = *(int *)(unaff_s0 + 0x1c) == 0;
    if (bVar1) {
      (*pcVar3)(*(undefined4 *)(unaff_s0 + 0x14),0,0);
      uVar2 = *(undefined4 *)(unaff_s0 + 0x14);
    }
    else {
      (*pcVar3)();
      uVar2 = *(undefined4 *)(unaff_s0 + 0x14);
    }
    (**(code **)(in_stack_00000018 + -0x797c))(uVar2,!bVar1);
  }
  else {
    (*pcVar3)();
    (**(code **)(in_stack_00000018 + -0x797c))(*(undefined4 *)(unaff_s0 + 0x14),0);
  }
  return;
}



// ==== speex_resampler_init_frac @ 00035f70 size=64

void speex_resampler_init_frac(void)

{
  int unaff_s0;
  code *in_t9;
  int in_stack_00000018;
  
  (*in_t9)();
  (**(code **)(in_stack_00000018 + -0x797c))(*(undefined4 *)(unaff_s0 + 0x14),1);
  return;
}



// ==== speex_resampler_init @ 00036164 size=64

undefined4 speex_resampler_init(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s1;
  undefined4 unaff_s4;
  int in_t8;
  code *pcVar3;
  int unaff_gp;
  int in_stack_00000018;
  
  pcVar3 = *(code **)(unaff_gp + -0x79dc);
  *(int *)(unaff_s0 + 0x20) = in_t8 + 0x6400;
  *(undefined4 *)(unaff_s0 + 0x24) = unaff_s4;
  *(int *)(unaff_s0 + 0x2c) = unaff_s0;
  uVar1 = (*pcVar3)();
  iVar2 = (**(code **)(in_stack_00000018 + -0x7ec0))(uVar1);
  if (iVar2 != 0) {
    (**(code **)(in_stack_00000018 + -0x7a50))();
    iVar2 = *(int *)(in_stack_00000018 + -0x7fd4);
    *(int *)(unaff_s0 + 0x78) = *(int *)(unaff_s0 + 0x78) + -1;
    (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar2 + -0x14b8,unaff_s1 + -0x12c4,0x103);
  }
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s1 + -0x12c4);
  return 0;
}



// ==== speex_resampler_get_quality @ 000361a4 size=12

undefined4 speex_resampler_get_quality(void)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int in_stack_00000018;
  
  iVar1 = *(int *)(in_stack_00000018 + -0x7fd4);
  *(int *)(unaff_s0 + 0x78) = *(int *)(unaff_s0 + 0x78) + -1;
  (**(code **)(in_stack_00000018 + -0x7c54))(4,iVar1 + -0x14b8,unaff_s1 + -0x12c4,0x103);
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s1 + -0x12c4);
  return 0;
}



// ==== speex_resampler_set_input_stride @ 000361b0 size=8

undefined4
speex_resampler_set_input_stride(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_gp;
  int in_stack_00000018;
  
  iVar1 = *(int *)(unaff_gp + -0x7fd4);
  *(int *)(unaff_s0 + 0x78) = *(int *)(unaff_s0 + 0x78) + -1;
  (**(code **)(unaff_gp + -0x7c54))(param_1,iVar1 + -0x14b8,param_3,0x103);
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s1 + -0x12c4);
  return 0;
}



// ==== speex_resampler_get_input_stride @ 000361b8 size=12

undefined4 speex_resampler_get_input_stride(undefined4 param_1)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int in_t8;
  int unaff_gp;
  int in_stack_00000018;
  
  iVar1 = *(int *)(unaff_gp + -0x7fd4);
  *(int *)(unaff_s0 + 0x78) = in_t8 + -1;
  (**(code **)(unaff_gp + -0x7c54))(param_1,iVar1 + -0x14b8);
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s1 + -0x12c4);
  return 0;
}



// ==== speex_resampler_set_output_stride @ 000361c4 size=8

undefined4 speex_resampler_set_output_stride(undefined4 param_1,int param_2)

{
  int unaff_s1;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7c54))(param_1,param_2 + -0x14b8);
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s1 + -0x12c4);
  return 0;
}



// ==== speex_resampler_get_output_stride @ 000361cc size=12

undefined4 speex_resampler_get_output_stride(void)

{
  int unaff_s1;
  int unaff_gp;
  int in_stack_00000018;
  
  (**(code **)(unaff_gp + -0x7c54))();
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s1 + -0x12c4);
  return 0;
}



// ==== speex_resampler_get_input_latency @ 000361d8 size=12

undefined4 speex_resampler_get_input_latency(void)

{
  int unaff_s1;
  int in_stack_00000018;
  
  (**(code **)(in_stack_00000018 + -0x7afc))(unaff_s1 + -0x12c4);
  return 0;
}



// ==== speex_resampler_get_output_latency @ 000361e4 size=44

undefined4 speex_resampler_get_output_latency(void)

{
  return 0;
}



// ==== speex_resampler_skip_zeros @ 00036218 size=60

undefined4 speex_resampler_skip_zeros(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_t9;
  code *pcVar3;
  int unaff_gp;
  int iVar4;
  
  iVar4 = unaff_gp + in_t9;
  pcVar3 = *(code **)(iVar4 + -0x7efc);
  if (param_1 == 0) {
    iVar2 = *(int *)(iVar4 + -0x7fd4) + -0x6c38;
    (**(code **)(iVar4 + -0x7c54))
              (4,*(int *)(iVar4 + -0x7fd4) + -0x6cf0,*(int *)(iVar4 + -0x7fd4) + -0x1370,299,iVar2);
    pcVar3 = *(code **)(iVar4 + -0x7a88);
    (*pcVar3)(iVar2,*(int *)(iVar4 + -0x7fd4) + -0x1558,299,*(int *)(iVar4 + -0x7fd4) + -0x1384);
  }
  iVar2 = (*pcVar3)();
  if (iVar2 == 0) {
    uVar1 = 0xfffffff6;
  }
  else {
    uVar1 = 0;
    if (*(int *)(iVar2 + 0x18) != 0) {
      (**(code **)(iVar4 + -0x7c54))
                (1,*(int *)(iVar4 + -0x7fd4) + -0x148c,*(undefined4 *)(iVar2 + 0x68),
                 *(undefined4 *)(iVar2 + 0x6c));
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== speex_resampler_reset_mem @ 00036254 size=128

undefined4 speex_resampler_reset_mem(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *in_t9;
  code *pcVar3;
  int in_stack_00000018;
  
  (*in_t9)(param_1,param_2,param_3 + -0x1370);
  pcVar3 = *(code **)(in_stack_00000018 + -0x7a88);
  (*pcVar3)();
  iVar1 = (*pcVar3)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x18) != 0) {
      (**(code **)(in_stack_00000018 + -0x7c54))
                (1,*(int *)(in_stack_00000018 + -0x7fd4) + -0x148c,*(undefined4 *)(iVar1 + 0x68),
                 *(undefined4 *)(iVar1 + 0x6c));
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== speex_resampler_strerror @ 000362d4 size=8

void speex_resampler_strerror(void)

{
  return;
}



// ==== speex_alloc @ 00044b60 size=40

void speex_alloc(undefined4 param_1)

{
  (*(code *)PTR___rts_calloc_00063a28)(param_1,1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1554,5)
  ;
  return;
}



// ==== speex_realloc @ 00044e1c size=1848

/* WARNING: Control flow encountered bad instruction data */

undefined4 speex_realloc(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  
  puVar4 = PTR_DAT_0006325c;
  uVar8 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 == 0) {
    trap(0x1c00);
  }
  uVar17 = *(uint *)(param_1 + 0x18);
  iVar18 = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x28) = uVar8 % uVar2;
  *(uint *)(param_1 + 0x24) = uVar8 / uVar2;
  piVar9 = (int *)(puVar4 + *(int *)(param_1 + 0x10) * 0x14 + 0x3050);
  uVar11 = piVar9[1];
  iVar13 = *piVar9;
  *(uint *)(param_1 + 0x30) = uVar11;
  *(int *)(param_1 + 0x18) = iVar13;
  if (uVar2 < uVar8) {
    fVar20 = (float)piVar9[2];
    if (uVar2 == 0) {
      trap(0x1c00);
    }
    *(uint *)(param_1 + 0x18) = ((iVar13 * uVar8) / uVar2 - 1 & 0xfffffff8) + 8;
    *(float *)(param_1 + 0x2c) = ((float)uVar2 * fVar20) / (float)uVar8;
    if (uVar2 << 1 < uVar8) {
      *(uint *)(param_1 + 0x30) = uVar11 >> 1;
    }
    if (uVar2 << 2 < uVar8) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) >> 1;
    }
    if (uVar2 << 3 < uVar8) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) >> 1;
    }
    if (uVar2 << 4 < uVar8) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) >> 1;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x2c) = piVar9[3];
  }
  uVar11 = *(uint *)(param_1 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x30);
  uVar8 = uVar10 * uVar11 + 8;
  if (uVar8 < uVar11 * uVar2) {
LAB_00045550:
    if (uVar10 == 0) {
      trap(0x1c00);
    }
    bVar7 = false;
    if (uVar11 <= 0x3ffffff7 / uVar10) goto LAB_00044fe8;
LAB_00045578:
    puVar4 = PTR_LAB_00063274;
    uVar5 = 1;
    *(uint *)(param_1 + 0x18) = uVar17;
    *(undefined **)(param_1 + 0x54) = puVar4 + 0x489c;
  }
  else {
    if (uVar2 == 0) {
      trap(0x1c00);
    }
    if (0x3fffffff / uVar2 < uVar11) goto LAB_00045550;
    bVar7 = true;
    uVar8 = uVar11 * uVar2;
LAB_00044fe8:
    if (*(uint *)(param_1 + 0x50) < uVar8) {
      iVar13 = (*(code *)PTR___rts_realloc_000634f8)
                         (*(undefined4 *)(param_1 + 0x4c),uVar8 << 1,
                          PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1544,9);
      if (iVar13 == 0) goto LAB_00045578;
      *(int *)(param_1 + 0x4c) = iVar13;
      *(uint *)(param_1 + 0x50) = uVar8;
    }
    puVar4 = PTR_LAB_00063274;
    iVar13 = *(int *)(param_1 + 0x18);
    if (bVar7) {
      uVar2 = *(uint *)(param_1 + 0xc);
      for (uVar8 = 0; uVar8 != uVar2; uVar8 = uVar8 + 1) {
        for (iVar16 = 0; iVar16 != iVar13; iVar16 = iVar16 + 1) {
          iVar3 = *(int *)(param_1 + 0x4c);
          uVar1 = (*(code *)(puVar4 + 0x4bb0))
                            (*(undefined4 *)(param_1 + 0x2c),
                             (float)((1 - iVar13 / 2) + iVar16) - (float)uVar8 / (float)uVar2);
          *(undefined2 *)(iVar3 + (iVar16 + uVar8 * iVar13) * 2) = uVar1;
        }
      }
      puVar4 = PTR_LAB_00063274 + 0x43d0;
    }
    else {
      if (-4 < iVar13 * *(int *)(param_1 + 0x30) + 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar4 = PTR_LAB_00063274 + 0x452c;
    }
    *(undefined **)(param_1 + 0x54) = puVar4;
    uVar2 = (iVar13 + *(int *)(param_1 + 0x20)) - 1;
    if (*(uint *)(param_1 + 0x1c) < uVar2) {
      uVar8 = *(uint *)(param_1 + 0x14);
      if (uVar8 == 0) {
        trap(0x1c00);
      }
      if ((0x3fffffff / uVar8 < uVar2) ||
         (iVar13 = (*(code *)PTR___rts_realloc_000634f8)
                             (*(undefined4 *)(param_1 + 0x48),uVar8 * 2 * uVar2,
                              PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1544,9), iVar13 == 0))
      goto LAB_00045578;
      *(int *)(param_1 + 0x48) = iVar13;
      *(uint *)(param_1 + 0x1c) = uVar2;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar18 = *(int *)(param_1 + 0x14);
      iVar13 = *(int *)(param_1 + 0x1c);
      for (iVar16 = 0; uVar5 = 0, iVar16 != iVar13 * iVar18; iVar16 = iVar16 + 1) {
        *(undefined2 *)(*(int *)(param_1 + 0x48) + iVar16 * 2) = 0;
      }
    }
    else if (uVar17 < *(uint *)(param_1 + 0x18)) {
      iVar19 = *(int *)(param_1 + 0x14);
      iVar16 = 0;
      iVar3 = iVar19 + -1;
      iVar13 = iVar19 * 4;
      while( true ) {
        iVar13 = iVar13 + -4;
        iVar19 = iVar19 + -1;
        uVar5 = 0;
        if (iVar19 == -1) break;
        puVar12 = (uint *)(*(int *)(param_1 + 0x44) + iVar13);
        uVar8 = *puVar12;
        iVar6 = (uVar17 - 1) + uVar8;
        uVar2 = uVar8 * 2 + uVar17;
        iVar14 = (iVar16 + iVar3 * iVar18 + 0x7fffffff + iVar6) * 2;
        while( true ) {
          iVar6 = iVar6 + -1;
          if (iVar6 == -1) break;
          puVar15 = (undefined2 *)(*(int *)(param_1 + 0x48) + iVar14);
          iVar14 = iVar14 + -2;
          *(undefined2 *)
           (*(int *)(param_1 + 0x48) + (iVar6 + uVar8 + iVar19 * *(int *)(param_1 + 0x1c)) * 2) =
               *puVar15;
        }
        for (uVar11 = 0; uVar11 != uVar8; uVar11 = uVar11 + 1) {
          *(undefined2 *)
           (*(int *)(param_1 + 0x48) + (uVar11 + iVar19 * *(int *)(param_1 + 0x1c)) * 2) = 0;
        }
        *puVar12 = 0;
        uVar8 = *(uint *)(param_1 + 0x18);
        if (uVar2 < uVar8) {
          uVar11 = uVar2 - 1;
          for (uVar10 = 0; uVar10 < uVar11; uVar10 = uVar10 + 1) {
            iVar6 = iVar19 * *(int *)(param_1 + 0x1c);
            *(undefined2 *)(*(int *)(param_1 + 0x48) + ((uVar8 + iVar6 + -2) - uVar10) * 2) =
                 *(undefined2 *)(*(int *)(param_1 + 0x48) + ((uVar2 + iVar6 + -2) - uVar10) * 2);
          }
          for (; uVar11 < uVar8 - 1; uVar11 = uVar11 + 1) {
            *(undefined2 *)
             (*(int *)(param_1 + 0x48) +
             ((uVar8 + iVar19 * *(int *)(param_1 + 0x1c) + -2) - uVar11) * 2) = 0;
          }
          piVar9 = (int *)(*(int *)(param_1 + 0x3c) + iVar13);
          *piVar9 = *piVar9 + (uVar8 - uVar2 >> 1);
        }
        else {
          uVar2 = uVar2 - uVar8 >> 1;
          *puVar12 = uVar2;
          for (uVar11 = 0; uVar11 < uVar8 - 1; uVar11 = uVar11 + 1) {
            iVar6 = uVar11 + iVar19 * *(int *)(param_1 + 0x1c);
            *(undefined2 *)(*(int *)(param_1 + 0x48) + iVar6 * 2) =
                 *(undefined2 *)(*(int *)(param_1 + 0x48) + (iVar6 + uVar2) * 2);
          }
        }
        iVar16 = iVar16 - iVar18;
      }
    }
    else {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x18) < uVar17) {
        for (; uVar2 < *(uint *)(param_1 + 0x14); uVar2 = uVar2 + 1) {
          puVar12 = (uint *)(*(int *)(param_1 + 0x44) + uVar2 * 4);
          uVar11 = *puVar12;
          uVar8 = uVar17 - *(int *)(param_1 + 0x18) >> 1;
          *puVar12 = uVar8;
          iVar18 = *(int *)(param_1 + 0x18);
          for (iVar13 = 0; iVar13 != iVar18 + -1 + uVar8 + uVar11; iVar13 = iVar13 + 1) {
            iVar16 = iVar13 + uVar2 * *(int *)(param_1 + 0x1c);
            *(undefined2 *)(*(int *)(param_1 + 0x48) + iVar16 * 2) =
                 *(undefined2 *)(*(int *)(param_1 + 0x48) + (iVar16 + uVar8) * 2);
          }
          *puVar12 = uVar11 + uVar8;
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



// ==== speex_resampler_destroy @ 000455b8 size=140

void speex_resampler_destroy(int param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)(PTR_LAB_00063274 + 0x4b88);
  (*pcVar1)(*(undefined4 *)(param_1 + 0x48));
  (*pcVar1)(*(undefined4 *)(param_1 + 0x4c));
  (*pcVar1)(*(undefined4 *)(param_1 + 0x3c));
  (*pcVar1)(*(undefined4 *)(param_1 + 0x44));
  (*pcVar1)(*(undefined4 *)(param_1 + 0x40));
  (*pcVar1)(param_1);
  return;
}



// ==== speex_resampler_process_int @ 00045644 size=564

bool speex_resampler_process_int
               (int param_1,int param_2,undefined2 *param_3,uint *param_4,int param_5,int *param_6)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_40;
  uint local_3c;
  uint *local_38;
  int *local_34;
  undefined *local_30;
  int local_2c;
  
  iVar3 = *param_6;
  local_30 = (undefined *)(param_2 * 4);
  uVar4 = *param_4;
  local_2c = *(int *)(param_1 + 0x48);
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x58);
  if (*(int *)(*(int *)(param_1 + 0x44) + (int)local_30) != 0) {
    iVar1 = (*(code *)(PTR_LAB_00063274 + 0x4a2c))(param_1,param_2,&param_5,iVar3);
    iVar3 = iVar3 - iVar1;
  }
  if (*(int *)(*(int *)(param_1 + 0x44) + (int)local_30) == 0) {
    local_38 = &local_3c;
    local_34 = &local_40;
    uVar7 = iVar6 - (iVar8 + -1);
    iVar6 = local_2c + iVar6 * 2 * param_2;
    local_2c = iVar5 << 1;
    iVar6 = iVar6 + iVar8 * 2;
    local_30 = PTR_LAB_00063274;
    while ((uVar4 != 0 && (iVar3 != 0))) {
      local_3c = uVar7;
      if (uVar4 <= uVar7) {
        local_3c = uVar4;
      }
      uVar9 = 0;
      if (param_3 == (undefined2 *)0x0) {
        for (; uVar9 != local_3c; uVar9 = uVar9 + 1) {
          *(undefined2 *)(iVar6 + uVar9 * 2 + -2) = 0;
        }
      }
      else {
        puVar2 = param_3;
        for (uVar9 = 0; uVar9 != local_3c; uVar9 = uVar9 + 1) {
          *(undefined2 *)(iVar6 + uVar9 * 2 + -2) = *puVar2;
          puVar2 = (undefined2 *)((int)puVar2 + local_2c);
        }
      }
      local_40 = iVar3;
      (*(code *)(local_30 + 0x492c))(param_1,param_2,&local_3c,param_5,&local_40);
      iVar3 = iVar3 - local_40;
      uVar4 = uVar4 - local_3c;
      param_5 = param_5 + local_40 * 2 * *(int *)(param_1 + 0x5c);
      if (param_3 != (undefined2 *)0x0) {
        param_3 = (undefined2 *)((int)param_3 + local_3c * 2 * iVar5);
      }
    }
  }
  *param_4 = *param_4 - uVar4;
  *param_6 = *param_6 - iVar3;
  return *(undefined **)(param_1 + 0x54) == PTR_LAB_00063274 + 0x489c;
}



// ==== speex_resampler_process_float @ 00045878 size=20

/* WARNING: Control flow encountered bad instruction data */

void speex_resampler_process_float(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== speex_resampler_process_interleaved_float @ 00045b68 size=272

bool speex_resampler_process_interleaved_float
               (int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = *param_5;
  uVar7 = *param_3;
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x14);
  for (uVar3 = 0; puVar1 = PTR_speex_resampler_process_float_00063504,
      uVar3 < *(uint *)(param_1 + 0x14); uVar3 = uVar3 + 1) {
    iVar2 = param_2 + uVar3 * 4;
    *param_5 = uVar6;
    *param_3 = uVar7;
    if (param_2 == 0) {
      iVar2 = 0;
    }
    (*(code *)puVar1)(param_1,uVar3,iVar2,param_3,param_4 + uVar3 * 4,param_5);
  }
  puVar1 = PTR_LAB_00063274 + 0x489c;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  return *(undefined **)(param_1 + 0x54) == puVar1;
}



// ==== speex_resampler_process_interleaved_int @ 00045c78 size=272

bool speex_resampler_process_interleaved_int
               (int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = *param_5;
  uVar7 = *param_3;
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x14);
  for (uVar3 = 0; puVar1 = PTR_speex_resampler_process_int_00063500,
      uVar3 < *(uint *)(param_1 + 0x14); uVar3 = uVar3 + 1) {
    iVar2 = param_2 + uVar3 * 2;
    *param_5 = uVar6;
    *param_3 = uVar7;
    if (param_2 == 0) {
      iVar2 = 0;
    }
    (*(code *)puVar1)(param_1,uVar3,iVar2,param_3,param_4 + uVar3 * 2,param_5);
  }
  puVar1 = PTR_LAB_00063274 + 0x489c;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  return *(undefined **)(param_1 + 0x54) == puVar1;
}



// ==== speex_resampler_get_rate @ 00045d88 size=20

void speex_resampler_get_rate(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_1;
  *param_3 = param_1[1];
  return;
}



// ==== speex_resampler_set_rate_frac @ 00045d9c size=316

undefined4
speex_resampler_set_rate_frac(int *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[3];
  if ((((*param_1 != param_4) || (param_1[1] != param_5)) || (param_1[2] != param_2)) ||
     (uVar1 != param_3)) {
    param_1[1] = param_5;
    uVar4 = 2;
    *param_1 = param_4;
    param_1[2] = param_2;
    param_1[3] = param_3;
    while( true ) {
      uVar5 = param_1[3];
      if ((uint)param_1[2] <= (uint)param_1[3]) {
        uVar5 = param_1[2];
      }
      if (uVar5 < uVar4) break;
      while( true ) {
        if (uVar4 == 0) {
          trap(0x1c00);
        }
        if ((uint)param_1[2] % uVar4 != 0) break;
        if (uVar4 == 0) {
          trap(0x1c00);
        }
        if ((uint)param_1[3] % uVar4 != 0) break;
        param_1[2] = (uint)param_1[2] / uVar4;
        param_1[3] = (uint)param_1[3] / uVar4;
      }
      uVar4 = uVar4 + 1;
    }
    uVar4 = 0;
    if (uVar1 != 0) {
      for (; uVar4 < (uint)param_1[5]; uVar4 = uVar4 + 1) {
        puVar3 = (uint *)(param_1[0x10] + uVar4 * 4);
        uVar5 = (*puVar3 * param_1[3]) / uVar1;
        if (uVar1 == 0) {
          trap(0x1c00);
        }
        *puVar3 = uVar5;
        if ((uint)param_1[3] <= uVar5) {
          *puVar3 = param_1[3] - 1;
        }
      }
    }
    if (param_1[0xd] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00045e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(PTR_LAB_00063274 + 0x4e1c))();
      return uVar2;
    }
  }
  return 0;
}



// ==== speex_resampler_set_rate @ 00045ed8 size=52

void speex_resampler_set_rate(void)

{
  (*(code *)PTR_speex_resampler_set_rate_frac_00063454)();
  return;
}



// ==== speex_resampler_get_ratio @ 00045f0c size=20

void speex_resampler_get_ratio(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 8);
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  return;
}



// ==== speex_resampler_set_quality @ 00045f20 size=80

undefined4 speex_resampler_set_quality(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (10 < param_2) {
    return 3;
  }
  if ((*(uint *)(param_1 + 0x10) != param_2) &&
     (*(uint *)(param_1 + 0x10) = param_2, *(int *)(param_1 + 0x34) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00045f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_LAB_00063274 + 0x4e1c))();
    return uVar1;
  }
  return 0;
}



// ==== speex_resampler_init_frac @ 00045f70 size=500

undefined4 *
speex_resampler_init_frac
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          uint param_6,int *param_7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_6 < 0xb) {
    pcVar5 = (code *)(PTR_LAB_00063274 + 0x4b60);
    puVar2 = (undefined4 *)(*pcVar5)(0x60);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[4] = 0xffffffff;
      puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
      puVar2[5] = param_1;
      param_1 = param_1 << 2;
      uVar7 = *(undefined4 *)(puVar1 + 0x1af0);
      puVar2[0x16] = 1;
      puVar2[0x17] = 1;
      puVar2[8] = 0xa0;
      puVar2[0xb] = uVar7;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[0x14] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0;
      uVar7 = (*pcVar5)(param_1);
      puVar2[0xf] = uVar7;
      uVar7 = (*pcVar5)(param_1);
      puVar2[0x11] = uVar7;
      iVar3 = (*pcVar5)(param_1);
      puVar2[0x10] = iVar3;
      for (iVar6 = 0; iVar6 != param_1; iVar6 = iVar6 + 4) {
        *(undefined4 *)(puVar2[0xf] + iVar6) = 0;
        *(undefined4 *)(puVar2[0x11] + iVar6) = 0;
        *(undefined4 *)(iVar3 + iVar6) = 0;
      }
      (*(code *)PTR_speex_resampler_set_quality_000635e4)(puVar2,param_6);
      (*(code *)PTR_speex_resampler_set_rate_frac_00063454)(puVar2,param_2,param_3,param_4,param_5);
      iVar3 = (*(code *)(PTR_LAB_00063274 + 0x4e1c))(puVar2);
      if (iVar3 == 0) {
        puVar2[0xd] = 1;
        puVar4 = puVar2;
      }
      else {
        puVar4 = (undefined4 *)0x0;
        (*(code *)PTR_speex_resampler_destroy_000638b4)(puVar2);
      }
      if (param_7 == (int *)0x0) {
        return puVar4;
      }
      *param_7 = iVar3;
      return puVar4;
    }
  }
  else if (param_7 != (int *)0x0) {
    *param_7 = 3;
  }
  return (undefined4 *)0x0;
}



// ==== speex_resampler_init @ 00046164 size=64

void speex_resampler_init(void)

{
  (*(code *)PTR_speex_resampler_init_frac_00063968)();
  return;
}



// ==== speex_resampler_get_quality @ 000461a4 size=12

void speex_resampler_get_quality(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return;
}



// ==== speex_resampler_set_input_stride @ 000461b0 size=8

void speex_resampler_set_input_stride(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ==== speex_resampler_get_input_stride @ 000461b8 size=12

void speex_resampler_get_input_stride(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  return;
}



// ==== speex_resampler_set_output_stride @ 000461c4 size=8

void speex_resampler_set_output_stride(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ==== speex_resampler_get_output_stride @ 000461cc size=12

void speex_resampler_get_output_stride(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x5c);
  return;
}



// ==== speex_resampler_get_input_latency @ 000461d8 size=12

uint speex_resampler_get_input_latency(int param_1)

{
  return *(uint *)(param_1 + 0x18) >> 1;
}



// ==== speex_resampler_get_output_latency @ 000461e4 size=52

uint speex_resampler_get_output_latency(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 0) {
    trap(0x1c00);
  }
  return ((*(uint *)(param_1 + 0x18) >> 1) * *(int *)(param_1 + 0xc) + (uVar1 >> 1)) / uVar1;
}



// ==== speex_resampler_skip_zeros @ 00046218 size=60

void speex_resampler_skip_zeros(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x14); uVar1 = uVar1 + 1) {
    *(uint *)(*(int *)(param_1 + 0x3c) + uVar1 * 4) = *(uint *)(param_1 + 0x18) >> 1;
  }
  return;
}



// ==== speex_resampler_reset_mem @ 00046254 size=128

undefined4 speex_resampler_reset_mem(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  for (uVar3 = 0; uVar1 = *(uint *)(param_1 + 0x14), uVar3 < uVar1; uVar3 = uVar3 + 1) {
    iVar2 = uVar3 * 4;
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar2) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x44) + iVar2) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar2) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  for (iVar4 = 0; iVar4 != uVar1 * (iVar2 + -1); iVar4 = iVar4 + 1) {
    *(undefined2 *)(*(int *)(param_1 + 0x48) + iVar4 * 2) = 0;
  }
  return 0;
}



// ==== speex_resampler_strerror @ 000462d4 size=124

undefined * speex_resampler_strerror(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x000462f4 */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)
             (*(code *)(&_gp_1 + *(int *)(PTR_s_snd_device_0004ffec_0x14_0006326c +
                                         param_1 * 4 + 0x1530)))();
    return puVar1;
  }
  return PTR_s_snd_device_0004ffec_0x14_0006326c + 0x14f8;
}



