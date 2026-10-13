/* librtstream — "cleanup" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== __cleanup_aec @ 0003c014 size=212

undefined4 __cleanup_aec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)PTR_rts_av_get_unit_priv_00063344;
  if (param_1 == 0) {
    puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4c8,0x92,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,0x92,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4d8);
  }
  iVar1 = (*pcVar4)();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    (*(code *)(PTR_LAB_00063274 + -0x5188))(iVar1);
    (*(code *)PTR_pthread_mutex_destroy_00063828)(iVar1 + 0x44);
    (*(code *)PTR_rts_free_000638d4)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== __cleanup_resample @ 000408cc size=204

undefined4 __cleanup_resample(int param_1)

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
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x8f4,0x31,puVar3);
    pcVar4 = (code *)PTR___assert_000637b8;
    (*(code *)PTR___assert_000637b8)
              (puVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770,0x31,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x8e0);
  }
  piVar1 = (int *)(*pcVar4)();
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffe1;
  }
  else {
    if (*piVar1 != 0) {
      (*(code *)PTR_rts_audio_resample_free_00063aa8)();
    }
    puVar3 = PTR_rts_free_000638d4;
    *piVar1 = 0;
    (*(code *)puVar3)(piVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== __cleanup_amixer @ 000438f0 size=268

undefined4 __cleanup_amixer(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x109c,200,puVar4);
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,200,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1088);
  }
  iVar1 = (*(code *)PTR_rts_av_get_unit_priv_00063344)();
  puVar4 = PTR_LAB_00063274;
  if (iVar1 == 0) {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar5 = 0;
    do {
      iVar3 = iVar1 + iVar5;
      iVar5 = iVar5 + 0x20;
      (*(code *)(puVar4 + 0x2630))(iVar3);
    } while (iVar5 != 0xa0);
    (*(code *)PTR_rts_free_000638d4)(iVar1);
    (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,0);
    uVar2 = 0;
  }
  return uVar2;
}



