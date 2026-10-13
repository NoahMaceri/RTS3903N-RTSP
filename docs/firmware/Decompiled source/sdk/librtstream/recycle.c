/* librtstream — "recycle" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== __recycle_h1_buffer @ 00031f30 size=392

void __recycle_h1_buffer(int param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int unaff_s1;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x15c4,0x196,puVar4);
    uVar3 = 0x196;
    param_1 = unaff_s1;
  }
  else {
    puVar4 = param_2;
    if (param_1 != 0) goto LAB_00031ff8;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x20d4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x15c4,0x197,puVar4);
    uVar3 = 0x197;
  }
  param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188;
  (*(code *)PTR___assert_000637b8)
            (puVar4,param_2,uVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x15d8);
LAB_00031ff8:
  uVar3 = (*(code *)PTR_rts_av_get_buffer_0006379c)(param_2);
  (*(code *)PTR_rts_queue_push_back_00063310)(param_1,uVar3);
  uVar5 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  uVar6 = (*(code *)PTR_rts_av_get_buffer_ts_00063294)(puVar4);
  uVar1 = (uint)uVar5 - (int)uVar6;
  iVar2 = ((int)((ulonglong)uVar5 >> 0x20) - (int)((ulonglong)uVar6 >> 0x20)) -
          (uint)((uint)uVar5 < uVar1);
  if ((iVar2 == 0) && (uVar1 < 0x3938701)) {
    return;
  }
  uVar5 = (*(code *)PTR___udivdi3_00063af8)(uVar1,iVar2,1000000,0);
  (*(code *)PTR_rts_log_000635ec)
            (3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x20c8,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x15c4,0x19e,uVar5);
  rts_audio_playback_init();
  return;
}



// ==== __recycle_h1_transbuf @ 000320cc size=412

void __recycle_h1_transbuf(int param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int unaff_s1;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == (undefined *)0x0) {
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x16cc,0x1a6,puVar4);
    uVar3 = 0x1a6;
    param_1 = unaff_s1;
  }
  else {
    puVar4 = param_2;
    if (param_1 != 0) goto LAB_00032194;
    puVar4 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x20d4;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x16cc,0x1a7,puVar4);
    uVar3 = 0x1a7;
  }
  param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188;
  (*(code *)PTR___assert_000637b8)
            (puVar4,param_2,uVar3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x16e4);
LAB_00032194:
  uVar3 = (*(code *)PTR_rts_av_get_buffer_0006379c)(param_2);
  (*(code *)PTR_rts_queue_push_back_00063310)(param_1,uVar3);
  uVar5 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  uVar6 = (*(code *)PTR_rts_av_get_buffer_ts_00063294)(puVar4);
  uVar1 = (uint)uVar5 - (int)uVar6;
  iVar2 = ((int)((ulonglong)uVar5 >> 0x20) - (int)((ulonglong)uVar6 >> 0x20)) -
          (uint)((uint)uVar5 < uVar1);
  if ((iVar2 != 0) || (60000000 < uVar1)) {
    uVar5 = (*(code *)PTR___udivdi3_00063af8)(uVar1,iVar2,1000000,0);
    (*(code *)PTR_rts_log_000635ec)
              (3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x20a8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x16cc,0x1ae,uVar5);
  }
  return;
}



// ==== __recycle_h1_buffer_and_free @ 00032268 size=400

void __recycle_h1_buffer_and_free(undefined *param_1,undefined *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined *)0x0) {
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2190;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1640,0x1b7,param_2);
    uVar3 = 0x1b7;
  }
  else {
    if (param_2 != (undefined *)0x0) goto LAB_0003232c;
    param_2 = PTR_s_snd_device_0004ffec_0x14_0006326c + 0x398;
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x6cf0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1640,0x1b8,param_2);
    uVar3 = 0x1b8;
  }
  param_1 = param_2;
  (*(code *)PTR___assert_000637b8)
            (param_2,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x2188,uVar3,
             PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1660);
LAB_0003232c:
  (*(code *)PTR_free_dma_memory_00063580)(*(undefined4 *)(param_1 + 0x11c));
  uVar4 = (*(code *)PTR_rts_get_monotonic_raw_time_0006355c)();
  uVar5 = (*(code *)PTR_rts_av_get_buffer_ts_00063294)(param_2);
  uVar1 = (uint)uVar4 - (int)uVar5;
  iVar2 = ((int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20)) -
          (uint)((uint)uVar4 < uVar1);
  if ((iVar2 != 0) || (60000000 < uVar1)) {
    uVar4 = (*(code *)PTR___udivdi3_00063af8)(uVar1,iVar2,1000000,0);
    (*(code *)PTR_rts_log_000635ec)
              (3,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x20c8,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1640,0x1bf,uVar4);
  }
  (*(code *)PTR_rts_av_delete_buffer_000639b4)(param_2);
  return;
}



