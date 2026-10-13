/* librtstream — "register" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "librtstream.h"

// ==== __register_isp @ 00019264 size=108

undefined4 __register_isp(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_1c;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 1;
  local_5c = 1;
  local_50 = PTR_rts_isp_init_000637e4;
  local_4c = PTR_rts_isp_cleanup_0006356c;
  local_6c = 0x707369;
  local_44 = PTR_rts_isp_start_000637e0;
  local_40 = PTR_rts_isp_stop_00063738;
  local_38 = PTR_rts_isp_check_ready_00063854;
  local_34 = PTR_rts_isp_run_00063a08;
  local_2c = PTR_rts_isp_get_attr_00063728;
  local_30 = PTR_rts_isp_set_attr_00063b34;
  local_28 = PTR_rts_isp_get_profile_000636bc;
  local_24 = PTR_rts_isp_set_profile_00063700;
  local_1c = PTR_rts_isp_query_ability_00063368;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x416c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x4140,0x1e7,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_h1encoder @ 0001936c size=92

undefined4 __register_h1encoder(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_18;
  undefined *local_14;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 3;
  local_6c = 0x34363268;
  local_5c = 1;
  local_54 = 2;
  local_50 = PTR_rts_h1encoder_init_000633fc;
  local_4c = PTR_rts_h1encoder_cleanup_0006349c;
  local_44 = PTR_rts_h1encoder_start_000634d4;
  local_40 = PTR_rts_h1encoder_stop_000638a8;
  local_38 = PTR_rts_h1encoder_check_ready_00063718;
  local_34 = PTR_rts_h1encoder_run_000637a0;
  local_2c = PTR_rts_h1encoder_get_attr_0006336c;
  local_30 = PTR_rts_h1encoder_set_attr_00063508;
  local_28 = PTR_rts_h1encoder_get_profile_0006354c;
  local_24 = PTR_rts_h1encoder_set_profile_00063358;
  local_20 = PTR_rts_h1encoder_exec_cmd_0006365c;
  local_18 = PTR_rts_h1encoder_post_connect_00063a94;
  local_14 = PTR_rts_h1encoder_pre_disconnect_000638a0;
  local_48 = PTR_rts_h1encoder_alloc_buffer_00063ac4;
  local_3c = PTR_rts_h1encoder_free_buffer_000634bc;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1aa0,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1a60,0x8cf,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_osdenc @ 000194a0 size=104

undefined4 __register_osdenc(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  ushort local_c [2];
  
  (*(code *)PTR_rts_get_hw_id_00063a24)(local_c);
  if (2 < local_c[0]) {
    (*(code *)PTR_memset_000637dc)(&local_70,0,100);
    local_70 = 3;
    local_6c = 0x3264736f;
    local_5c = 1;
    local_50 = PTR_rts_av_osdenc_init_000638cc;
    local_4c = PTR_rts_av_osdenc_cleanup_00063b08;
    local_44 = PTR_rts_av_osdenc_start_00063b18;
    local_40 = PTR_rts_av_osdenc_stop_00063498;
    local_38 = PTR_rts_av_osdenc_check_ready_000633f8;
    local_34 = PTR_rts_av_osdenc_run_00063aa0;
    local_28 = PTR_rts_av_osdenc_get_profile_000636d0;
    local_24 = PTR_rts_av_osdenc_set_profile_00063334;
    local_20 = PTR_rts_av_osdenc_exec_cmd_00063814;
    uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
    iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
    if (iVar2 != 0) {
      (*(code *)PTR_rts_log_000635ec)
                (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1448,
                 PTR_s_snd_device_0004ffec_0x14_0006326c + -0x1410,0x203,uVar1);
      return uVar1;
    }
  }
  return 0;
}



// ==== __register_mjpeg @ 000195c0 size=276

undefined4 __register_mjpeg(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_18;
  undefined *local_14;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 3;
  local_6c = 0x67706a6d;
  local_5c = 1;
  local_50 = PTR_rts_jpgencoder_init_00063430;
  local_4c = PTR_rts_jpgencoder_cleanup_0006358c;
  local_44 = PTR_rts_jpgencoder_start_000633dc;
  local_40 = PTR_rts_jpgencoder_stop_00063898;
  local_38 = PTR_rts_jpgencoder_check_ready_00063350;
  local_34 = PTR_rts_jpgencoder_run_00063348;
  local_2c = PTR_rts_jpgencoder_get_attr_000636a4;
  local_30 = PTR_rts_jpgencoder_set_attr_000636ec;
  local_28 = PTR_rts_jpgencoder_get_profile_0006376c;
  local_24 = PTR_rts_jpgencoder_set_profile_000633b4;
  local_20 = PTR_rts_jpgencoder_exec_cmd_0006344c;
  local_18 = PTR_rts_jpgencoder_post_connect_00063290;
  local_14 = PTR_rts_jpgencoder_pre_disconnect_00063958;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0xc10,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0xbe0,0x3b7,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_aec @ 000196dc size=320

undefined4 __register_aec(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 3;
  local_6c = 0x636561;
  local_68 = 1;
  local_50 = PTR_LAB_00063274 + -0x431c;
  local_4c = PTR_LAB_00063274 + -0x3fec;
  local_44 = PTR_LAB_00063274 + -0x41d8;
  local_40 = PTR_LAB_00063274 + -0x56a0;
  local_38 = PTR_LAB_00063274 + -0x5698;
  local_34 = PTR_LAB_00063274 + -0x4cd4;
  local_28 = PTR_LAB_00063274 + -0x5510;
  local_24 = PTR_LAB_00063274 + -0x50b0;
  local_18 = PTR_LAB_00063274 + -0x52e8;
  local_14 = PTR_LAB_00063274 + -0x5408;
  local_20 = PTR_LAB_00063274 + -0x5624;
  local_10 = PTR_rts_audio_default_profile_00063b50;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + -0x520,
               PTR_s_snd_device_0004ffec_0x14_0006326c + -0x30c,0x2fe,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_encoder @ 0001981c size=116

undefined4 __register_encoder(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_1c;
  undefined *local_10;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 3;
  local_6c = 0x636e6561;
  local_50 = PTR_rts_audio_encode_init_000633ac;
  local_4c = PTR_rts_audio_encode_cleanup_00063698;
  local_44 = PTR_rts_audio_encode_start_0006393c;
  local_40 = PTR_rts_audio_encode_stop_000636b4;
  local_38 = PTR_rts_audio_encode_check_ready_00063aac;
  local_34 = PTR_rts_audio_encode_run_0006383c;
  local_2c = PTR_rts_audio_encode_get_attr_00063994;
  local_30 = PTR_rts_audio_encode_set_attr_000632f0;
  local_28 = PTR_rts_audio_encode_get_profile_000633a4;
  local_24 = PTR_rts_audio_encode_set_profile_0006361c;
  local_1c = PTR_rts_audio_encode_query_ability_00063b24;
  local_10 = PTR_rts_audio_default_profile_00063b50;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x460,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x4a4,0x2c7,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_resample @ 00019928 size=284

undefined4 __register_resample(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_10;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 3;
  local_6c = 0x6d737261;
  local_50 = PTR_LAB_00063274 + 0x998;
  local_4c = PTR_LAB_00063274 + 0x8cc;
  local_44 = PTR_LAB_00063274 + 0xf0;
  local_40 = PTR_LAB_00063274 + 0x398;
  local_38 = PTR_LAB_00063274 + 0x2ec;
  local_34 = PTR_LAB_00063274 + 0x454;
  local_2c = PTR_LAB_00063274 + 0x7cc;
  local_30 = PTR_LAB_00063274 + -0xa8;
  local_28 = PTR_LAB_00063274 + -0x380;
  local_24 = PTR_LAB_00063274 + -0x278;
  local_10 = PTR_rts_audio_default_profile_00063b50;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x88c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xa70,0x16b,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_capture @ 00019a54 size=252

undefined4 __register_capture(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 1;
  local_6c = 0x61637561;
  local_50 = PTR_rts_audio_capture_init_000633c4;
  local_4c = PTR_rts_audio_cleanup_0006329c;
  local_44 = PTR_rts_audio_start_00063858;
  local_40 = PTR_rts_audio_stop_00063878;
  local_38 = PTR_rts_audio_check_ready_000637b4;
  local_34 = PTR_rts_audio_capture_run_000634f4;
  local_2c = PTR_rts_audio_get_attr_000636dc;
  local_30 = PTR_rts_audio_set_attr_00063884;
  local_28 = PTR_rts_audio_get_profile_00063a14;
  local_24 = PTR_rts_audio_set_profile_00063688;
  local_60 = 100;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xafc,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xb30,0x84,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_decoder @ 00019b58 size=132

undefined4 __register_decoder(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_28;
  undefined *local_24;
  undefined *local_10;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 3;
  local_6c = 0x63656461;
  local_50 = PTR_rts_audio_decode_init_00063ab4;
  local_4c = PTR_rts_audio_decode_cleanup_000639b8;
  local_44 = PTR_rts_audio_decode_start_000633a0;
  local_40 = PTR_rts_audio_decode_stop_00063764;
  local_38 = PTR_rts_audio_decode_check_ready_00063398;
  local_34 = PTR_rts_audio_decode_run_00063678;
  local_28 = PTR_rts_audio_decode_get_profile_00063a38;
  local_24 = PTR_rts_audio_decode_set_profile_00063990;
  local_10 = PTR_rts_audio_default_profile_00063b50;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xc10,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xc40,0x143,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_playback @ 00019c4c size=268

undefined4 __register_playback(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 3;
  local_6c = 0x6c707561;
  local_64 = 1;
  local_50 = PTR_rts_audio_playback_init_0006377c;
  local_4c = PTR_rts_audio_cleanup_0006329c;
  local_44 = PTR_rts_audio_start_00063858;
  local_40 = PTR_rts_audio_stop_00063878;
  local_38 = PTR_rts_audio_playback_check_ready_00063894;
  local_34 = PTR_rts_audio_playback_run_00063624;
  local_2c = PTR_rts_audio_get_attr_000636dc;
  local_30 = PTR_rts_audio_set_attr_00063884;
  local_28 = PTR_rts_audio_get_profile_00063a14;
  local_24 = PTR_rts_audio_set_profile_00063688;
  local_60 = 3000;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0xe74,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0xeb0,0x7b,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



// ==== __register_amixer @ 00019d58 size=124

undefined4 __register_amixer(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_28;
  undefined *local_24;
  undefined *local_14;
  undefined *local_10;
  
  (*(code *)PTR_memset_000637dc)(&local_70,0,100);
  local_70 = 3;
  local_6c = 0x78696d61;
  local_50 = PTR_LAB_00063274 + 0x2410;
  local_4c = PTR_LAB_00063274 + 0x38f0;
  local_44 = PTR_LAB_00063274 + 0x2160;
  local_40 = PTR_LAB_00063274 + 0x2168;
  local_38 = PTR_LAB_00063274 + 0x298c;
  local_34 = PTR_LAB_00063274 + 0x2af0;
  local_28 = PTR_LAB_00063274 + 0x2170;
  local_24 = PTR_LAB_00063274 + 0x2278;
  local_14 = PTR_LAB_00063274 + 10000;
  local_10 = PTR_rts_audio_default_profile_00063b50;
  local_68 = 1;
  uVar1 = (*(code *)PTR_rts_av_register_unit_000635b8)(&local_70);
  iVar2 = (*(code *)PTR_RTS_IS_ERR_00063380)(uVar1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (*(code *)PTR_rts_log_000635ec)
              (4,PTR_s_snd_device_0004ffec_0x14_0006326c + 0x101c,
               PTR_s_snd_device_0004ffec_0x14_0006326c + 0x13fc,0x389,uVar1);
    uVar3 = uVar1;
  }
  return uVar3;
}



