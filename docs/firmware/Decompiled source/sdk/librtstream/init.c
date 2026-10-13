/* librtstream — "init" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== __init_unit_manager @ 00019160 size=80

undefined4 __init_unit_manager(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  uVar3 = (*(code *)PTR_rts_queue_init_000635dc)();
  puVar2 = PTR_rts_set_log_ident_000635f4;
  puVar1 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  *(undefined4 *)(PTR_DAT_0006325c + 0x3c08) = uVar3;
  (*(code *)puVar2)(puVar1 + -0x6c18);
  return 0;
}



// ==== __init_context @ 000191b0 size=180

undefined4 __init_context(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_DAT_0006325c;
  puVar2 = PTR_DAT_0006325c + 0x3c14;
  (*(code *)PTR_memset_000637dc)(puVar2,0,0x30);
  puVar3 = PTR_DAT_0006325c;
  (*(code *)PTR_pthread_mutexattr_init_0006346c)(PTR_DAT_0006325c + 0x3c2c);
  (*(code *)PTR_pthread_mutexattr_settype_00063adc)(puVar3 + 0x3c2c,1);
  (*(code *)PTR_pthread_mutex_init_00063490)(puVar2,puVar3 + 0x3c2c);
  puVar3 = PTR_DAT_0006325c + 0x3c30;
  *(undefined **)(puVar1 + 0x3c30) = puVar3;
  *(undefined **)(puVar1 + 0x3c34) = puVar3;
  *(uint *)(PTR_DAT_0006325c + 0x3c10) = *(uint *)(PTR_DAT_0006325c + 0x3c10) | 7;
  return 0;
}



// ==== __init_aec @ 0003bce4 size=324

undefined4 __init_aec(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == 0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4e4,0x75,puVar4);
    puVar3 = (undefined *)0x75;
    (*(code *)PTR___assert_000637b8)
              (puVar4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x5f0,0x75,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4f0);
  }
  puVar1 = (undefined4 *)(*(code *)PTR___rts_calloc_00063a28)(1,0xe0,puVar3 + -0x4e4,0x77);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xfffffff5;
  }
  else {
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar3 = PTR_pthread_mutex_init_00063490;
    puVar1[0x35] = 0xffffffff;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[0x10] = 0;
    (*(code *)puVar3)(puVar1 + 0x11,0);
    (*(code *)PTR_rts_av_set_input_limit_0006398c)(param_1,2);
    (*(code *)PTR_rts_av_set_unit_event_trigger_0006345c)(param_1,0);
    puVar3 = PTR_rts_av_set_unit_priv_0006374c;
    puVar1[0x37] = param_1;
    (*(code *)puVar3)(param_1,puVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== __init_resample @ 00040998 size=192

undefined4 __init_resample(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x8d0,0x22,param_1);
    puVar3 = (undefined *)0x22;
    (*(code *)PTR___assert_000637b8)
              (param_1,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x770,0x22,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x8c0);
  }
  iVar1 = (*(code *)PTR___rts_calloc_00063a28)(1,0xa8,puVar3 + 0x8d0,0x24);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff5;
  }
  else {
    (*(code *)PTR_rts_av_set_unit_priv_0006374c)(param_1,iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== __init_amixer @ 00042410 size=300

undefined4 __init_amixer(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  
  puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c;
  if (param_1 == 0) {
    puVar5 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6c38;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1078,0xa5,puVar5);
    puVar4 = (undefined *)0xa5;
    (*(code *)PTR___assert_000637b8)
              (puVar5,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xee0,0xa5,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x1068);
  }
  piVar1 = (int *)(*(code *)PTR___rts_calloc_00063a28)(1,0x114,puVar4 + 0x1078,0xa7);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0xfffffff5;
  }
  else {
    piVar1[0x3d] = 0;
    piVar1[0x3e] = 0;
    iVar2 = 0;
    piVar1[0x3f] = 0;
    piVar1[0x40] = 0;
    piVar1[0x41] = 0;
    piVar6 = piVar1;
    do {
      piVar6[2] = iVar2;
      iVar2 = iVar2 + 1;
      piVar6[4] = 0;
      piVar6[5] = 1;
      piVar6[6] = 0;
      piVar6[3] = 0;
      *piVar6 = (int)piVar1;
      piVar6 = piVar6 + 8;
    } while (iVar2 != 5);
    (*(code *)PTR_rts_av_set_input_limit_0006398c)(param_1,5);
    puVar4 = PTR_rts_av_set_unit_priv_0006374c;
    piVar1[0x43] = param_1;
    (*(code *)puVar4)(param_1,piVar1);
    uVar3 = 0;
  }
  return uVar3;
}



