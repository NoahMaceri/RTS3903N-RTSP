/* librtstream — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== _init @ 00018ff4 size=120

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00019ff0();
  iVar1 = (*(code *)(PTR_s_snd_device_0004ffec_0x14_0006326c + -0x7c90))();
  return iVar1;
}



// ==== _fini @ 000392c0 size=180

void _fini(void)

{
  int iVar1;
  int unaff_s0;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000010;
  
  iVar2 = *(int *)(unaff_s0 + 0x38);
  iVar1 = (**(code **)(in_stack_00000010 + -0x7d08))(iVar2);
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000010 + -0x7c54))
              (4,*(int *)(in_stack_00000010 + -0x7fd4) + -0xc7c,
               *(int *)(in_stack_00000010 + -0x7fd4) + -0x96c,0x119);
  }
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    (**(code **)(in_stack_00000010 + -0x7cc0))(*(undefined4 *)(unaff_s0 + 0x1c),iVar2);
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
  }
  if (-1 < *(int *)(unaff_s0 + 0x1c)) {
    (**(code **)(in_stack_00000010 + -0x7d90))();
  }
  *(undefined4 *)(unaff_s0 + 0x1c) = 0xffffffff;
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    (**(code **)(in_stack_00000010 + -0x77c4))();
  }
  *(undefined4 *)(unaff_s0 + 0x18) = 0;
  *(undefined4 *)(unaff_s0 + 0x44) = 0;
  return;
}



// ==== __start_resample @ 000400f0 size=508

undefined4 __start_resample(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  code *pcVar6;
  
  pcVar6 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x91c,0x42,puVar5);
    pcVar6 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770,0x42,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x908);
  }
  piVar1 = (int *)(*pcVar6)();
  if (piVar1 == (int *)0x0) {
    return 0xffffffe1;
  }
  if (piVar1[0x27] != 0) {
    if (piVar1[0x25] == 0) {
      return 0;
    }
    if (piVar1[0x26] == 0) {
      return 0;
    }
    if (piVar1[0x13] == 0) {
      return 0;
    }
    if (piVar1[0x11] == 0) {
      return 0;
    }
    if (piVar1[0x12] != 0) {
      if (((piVar1[0x13] == piVar1[0x27]) && (piVar1[0x11] == piVar1[0x25])) &&
         (piVar1[0x12] == piVar1[0x26])) {
        return 0;
      }
      iVar2 = (*(code *)PTR_rts_audio_resample_init_00063b20)();
      *piVar1 = iVar2;
      if (iVar2 == 0) {
        return 0xfffffff5;
      }
      uVar3 = (*(code *)PTR_rts_audio_set_in_param_00063784)
                        (iVar2,piVar1[0x13],piVar1[0x11],piVar1[0x12]);
      iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
      if (iVar2 == 0) {
        uVar3 = (*(code *)PTR_rts_audio_set_out_param_00063830)
                          (*piVar1,piVar1[0x27],piVar1[0x25],piVar1[0x26]);
        iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar3);
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = 100;
        puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x808;
      }
      else {
        uVar4 = 0x5e;
        puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x7d8;
      }
      (*(code *)PTR_rts_log_000635ec)
                (4,puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x91c,uVar4,uVar3);
      if (*piVar1 != 0) {
        (*(code *)PTR_rts_audio_resample_free_00063aa8)();
      }
      *piVar1 = 0;
      return uVar3;
    }
  }
  return 0;
}



// ==== _fini @ 000492c0 size=80

void _fini(void)

{
  (*(code *)(PTR_LAB_00063268 + -0x60e8))();
  return;
}



