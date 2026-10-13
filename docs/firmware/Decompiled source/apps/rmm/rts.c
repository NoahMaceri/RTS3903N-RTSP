/* rmm — "rts" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== rts_amixer_init @ 00411bc8 size=420

int rts_amixer_init(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 auStack_48 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  int local_20;
  
  (*(code *)PTR_sprintf_00436ab4)(auStack_38,PTR_LAB_00436a54 + 0x4f2c,0);
  iVar1 = (*(code *)PTR_snd_ctl_elem_id_sizeof_00436aec)();
  iVar1 = -(iVar1 + 0xeU & 0xfffffff8);
  uVar2 = (*(code *)PTR_snd_ctl_elem_id_sizeof_00436aec)();
  puVar5 = &stack0xffffffc0 + iVar1;
  (*(code *)PTR_memset_00436ae8)(puVar5,0,uVar2);
  iVar3 = (*(code *)PTR_snd_hctl_open_00436ad4)(local_28,auStack_38,0);
  if (iVar3 < 0) {
    uVar2 = 0xa7;
    *(undefined4 *)((int)auStack_48 + iVar1) = 0;
    puVar4 = PTR_LAB_00436a54 + 0x4f34;
  }
  else {
    iVar3 = (*(code *)PTR_snd_hctl_load_00436acc)(local_28[0]);
    if (-1 < iVar3) {
      (*(code *)PTR_snd_ctl_elem_id_set_interface_00436aa0)(puVar5,2);
      (*(code *)PTR_snd_ctl_elem_id_set_name_00436ae4)(puVar5,param_1);
      local_20 = (*(code *)PTR_snd_hctl_find_elem_00436b20)(local_28[0],puVar5);
      if (local_20 != 0) {
        return local_20;
      }
      *(undefined4 *)((int)auStack_48 + iVar1) = param_1;
      (*(code *)PTR_rts_log_00436ac8)(4,PTR_LAB_00436a54 + 0x4f74,PTR_LAB_00436a54 + 0x5030,0xb6);
      return local_20;
    }
    uVar2 = 0xad;
    *(undefined4 *)((int)auStack_48 + iVar1) = 0;
    puVar4 = PTR_LAB_00436a54 + 0x4f54;
  }
  (*(code *)PTR_rts_log_00436ac8)(4,puVar4,PTR_LAB_00436a54 + 0x5030,uVar2);
  return 0;
}



// ==== rts_av_set_callback @ 00425e70 size=16

void rts_av_set_callback(void)

{
  (*(code *)PTR_rts_av_set_callback_0043673c)();
  return;
}



// ==== rts_queue_empty @ 00425e80 size=4

void rts_queue_empty(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_queue_empty_00436740)();
  return;
}



// ==== rts_av_unbind @ 00425f10 size=4

void rts_av_unbind(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_unbind_00436764)();
  return;
}



// ==== rts_av_enable_chn @ 00425f50 size=4

void rts_av_enable_chn(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_enable_chn_00436774)();
  return;
}



// ==== rts_av_new_buffer @ 00425f80 size=16

void rts_av_new_buffer(void)

{
  (*(code *)PTR_rts_av_new_buffer_00436780)();
  return;
}



// ==== rts_av_stop_recv @ 00425f90 size=4

void rts_av_stop_recv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_stop_recv_00436784)();
  return;
}



// ==== rts_av_disable_chn @ 00425fc0 size=4

void rts_av_disable_chn(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_disable_chn_00436790)();
  return;
}



// ==== rts_av_delete_buffer @ 00425fd0 size=16

void rts_av_delete_buffer(void)

{
  (*(code *)PTR_rts_av_delete_buffer_00436794)();
  return;
}



// ==== rts_av_bind @ 00425fe0 size=4

void rts_av_bind(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_bind_00436798)();
  return;
}



// ==== rts_av_set_buffer_callback @ 00425ff0 size=16

void rts_av_set_buffer_callback(void)

{
  (*(code *)PTR_rts_av_set_buffer_callback_0043679c)();
  return;
}



// ==== rts_av_get_isp_daynight_statis @ 00426000 size=4

void rts_av_get_isp_daynight_statis(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042600c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_get_isp_daynight_statis_004367a0)();
  return;
}



// ==== rts_av_set_aec_ctrl @ 00426010 size=16

void rts_av_set_aec_ctrl(void)

{
  (*(code *)PTR_rts_av_set_aec_ctrl_004367a4)();
  return;
}



// ==== rts_av_get_chn_status @ 00426040 size=4

void rts_av_get_chn_status(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042604c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_get_chn_status_004367b0)();
  return;
}



// ==== rts_av_start_send @ 00426060 size=4

void rts_av_start_send(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_start_send_004367b8)();
  return;
}



// ==== rts_free @ 00426070 size=16

void rts_free(void)

{
  (*(code *)PTR_rts_free_004367bc)();
  return;
}



// ==== rts_av_send @ 004260c0 size=16

void rts_av_send(void)

{
  (*(code *)PTR_rts_av_send_004367d0)();
  return;
}



// ==== rts_av_create_h264_chn @ 00426100 size=16

void rts_av_create_h264_chn(void)

{
  (*(code *)PTR_rts_av_create_h264_chn_004367e0)();
  return;
}



// ==== rts_av_poll @ 00426160 size=4

void rts_av_poll(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042616c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_poll_004367f8)();
  return;
}



// ==== rts_av_get_buffer @ 00426170 size=16

void rts_av_get_buffer(void)

{
  (*(code *)PTR_rts_av_get_buffer_004367fc)();
  return;
}



// ==== rts_av_stop_send @ 00426190 size=16

void rts_av_stop_send(void)

{
  (*(code *)PTR_rts_av_stop_send_00436804)();
  return;
}



// ==== rts_av_get_profile @ 004261a0 size=4

void rts_av_get_profile(void)

{
                    /* WARNING: Could not recover jumptable at 0x004261ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_get_profile_00436808)();
  return;
}



// ==== rts_av_set_profile @ 004261b0 size=16

void rts_av_set_profile(void)

{
  (*(code *)PTR_rts_av_set_profile_0043680c)();
  return;
}



// ==== rts_av_create_audio_mixer_chn @ 004261d0 size=16

void rts_av_create_audio_mixer_chn(void)

{
  (*(code *)PTR_rts_av_create_audio_mixer_chn_00436814)();
  return;
}



// ==== rts_av_set_h264_ctrl @ 004261f0 size=16

void rts_av_set_h264_ctrl(void)

{
  (*(code *)PTR_rts_av_set_h264_ctrl_0043681c)();
  return;
}



// ==== rts_av_release @ 00426200 size=16

void rts_av_release(void)

{
  (*(code *)PTR_rts_av_release_00436820)();
  return;
}



// ==== rts_av_create_isp_chn @ 00426230 size=4

void rts_av_create_isp_chn(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042623c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_isp_chn_0043682c)();
  return;
}



// ==== rts_av_get_h264_ctrl @ 00426250 size=4

void rts_av_get_h264_ctrl(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042625c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_get_h264_ctrl_00436834)();
  return;
}



// ==== rts_av_get_isp_ctrl @ 00426260 size=16

void rts_av_get_isp_ctrl(void)

{
  (*(code *)PTR_rts_av_get_isp_ctrl_00436838)();
  return;
}



// ==== rts_av_query_aec_ctrl @ 00426270 size=4

void rts_av_query_aec_ctrl(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042627c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_query_aec_ctrl_0043683c)();
  return;
}



// ==== rts_av_query_h264_ctrl @ 004262a0 size=4

void rts_av_query_h264_ctrl(void)

{
                    /* WARNING: Could not recover jumptable at 0x004262ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_query_h264_ctrl_00436848)();
  return;
}



// ==== rts_av_destroy_chn @ 004262e0 size=4

void rts_av_destroy_chn(void)

{
                    /* WARNING: Could not recover jumptable at 0x004262ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_destroy_chn_00436858)();
  return;
}



// ==== rts_log @ 00426340 size=4

void rts_log(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_log_00436870)();
  return;
}



// ==== rts_queue_init @ 00426350 size=16

void rts_queue_init(void)

{
  (*(code *)PTR_rts_queue_init_00436874)();
  return;
}



// ==== rts_av_request_h264_key_frame @ 00426360 size=4

void rts_av_request_h264_key_frame(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042636c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_request_h264_key_frame_00436878)();
  return;
}



// ==== rts_av_init @ 00426370 size=16

void rts_av_init(void)

{
  (*(code *)PTR_rts_av_init_0043687c)();
  return;
}



// ==== rts_av_release_h264_ctrl @ 004263a0 size=4

void rts_av_release_h264_ctrl(void)

{
                    /* WARNING: Could not recover jumptable at 0x004263ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_release_h264_ctrl_00436888)();
  return;
}



// ==== rts_av_create_mjpeg_chn @ 004263b0 size=16

void rts_av_create_mjpeg_chn(void)

{
  (*(code *)PTR_rts_av_create_mjpeg_chn_0043688c)();
  return;
}



// ==== rts_av_create_audio_aec_chn @ 004263d0 size=4

void rts_av_create_audio_aec_chn(void)

{
                    /* WARNING: Could not recover jumptable at 0x004263dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_create_audio_aec_chn_00436894)();
  return;
}



// ==== __rts_malloc @ 004263e0 size=20

void __rts_malloc(void)

{
  (*(code *)PTR___rts_malloc_00436898)();
  return;
}



// ==== rts_av_put_buffer @ 00426400 size=16

void rts_av_put_buffer(void)

{
  (*(code *)PTR_rts_av_put_buffer_004368a0)();
  return;
}



// ==== rts_av_create_audio_capture_chn @ 00426460 size=16

void rts_av_create_audio_capture_chn(void)

{
  (*(code *)PTR_rts_av_create_audio_capture_chn_004368b8)();
  return;
}



// ==== rts_av_recv @ 004264b0 size=4

void rts_av_recv(void)

{
                    /* WARNING: Could not recover jumptable at 0x004264bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_recv_004368cc)();
  return;
}



// ==== rts_av_create_audio_resample_chn @ 004264c0 size=16

void rts_av_create_audio_resample_chn(void)

{
  (*(code *)PTR_rts_av_create_audio_resample_chn_004368d0)();
  return;
}



// ==== rts_av_release_aec_ctrl @ 00426530 size=16

void rts_av_release_aec_ctrl(void)

{
  (*(code *)PTR_rts_av_release_aec_ctrl_004368ec)();
  return;
}



// ==== rts_av_create_osd_chn @ 004265b0 size=16

void rts_av_create_osd_chn(void)

{
  (*(code *)PTR_rts_av_create_osd_chn_0043690c)();
  return;
}



// ==== rts_queue_clear @ 004265d0 size=4

void rts_queue_clear(void)

{
                    /* WARNING: Could not recover jumptable at 0x004265dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_queue_clear_00436914)();
  return;
}



// ==== RTS_IS_ERR @ 004265e0 size=16

void RTS_IS_ERR(void)

{
  (*(code *)PTR_RTS_IS_ERR_00436918)();
  return;
}



// ==== rts_av_set_buffer_profile @ 00426610 size=16

void rts_av_set_buffer_profile(void)

{
  (*(code *)PTR_rts_av_set_buffer_profile_00436924)();
  return;
}



// ==== rts_av_set_isp_ctrl @ 00426620 size=4

void rts_av_set_isp_ctrl(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042662c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_set_isp_ctrl_00436928)();
  return;
}



// ==== rts_queue_pop @ 00426630 size=16

void rts_queue_pop(void)

{
  (*(code *)PTR_rts_queue_pop_0043692c)();
  return;
}



// ==== rts_av_is_idle @ 00426640 size=4

void rts_av_is_idle(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042664c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rts_av_is_idle_00436930)();
  return;
}



// ==== rts_queue_push_back @ 00426660 size=16

void rts_queue_push_back(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042666c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00436938)();
  return;
}



// ==== rts_av_start_recv @ 00426680 size=4

void rts_av_start_recv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042668c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00436940)();
  return;
}



// ==== rts_queue_destroy @ 00426690 size=16

void rts_queue_destroy(void)

{
  (*DAT_00436944)();
  return;
}



// ==== rts_av_create_audio_encode_chn @ 004266e0 size=16

void rts_av_create_audio_encode_chn(void)

{
  (*(code *)PTR_rts_av_create_audio_encode_chn_00436958)();
  return;
}



// ==== rts_av_create_audio_playback_chn @ 00426700 size=20

void rts_av_create_audio_playback_chn(void)

{
  (*(code *)PTR_rts_av_create_audio_playback_chn_00436960)();
  return;
}



