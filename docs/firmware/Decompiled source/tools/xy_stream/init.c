/* xy_stream — "init" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "xy_stream.h"

// ==== init_stream_info @ 00402610 size=32

void init_stream_info(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// ==== init_main_stream @ 004028c8 size=740

int init_main_stream(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = *param_1;
  local_2c = 2;
  iVar1 = rts_av_create_isp_chn(&local_2c);
  if (iVar1 < 0) {
    pcVar6 = "<%s, %d>fail to create isp chn, ret = %d\n";
    uVar7 = 0x1bf;
    iVar5 = iVar1;
  }
  else {
    rts_log(1,"isp chn : %d\n",iVar1);
    local_3c = param_1[1];
    local_40 = 1;
    local_38 = param_1[2];
    local_34 = 1;
    local_30 = param_1[3];
    iVar2 = rts_av_set_profile(iVar1,&local_40);
    if (iVar2 != 0) {
      pcVar6 = "<%s, %d>set isp profile fail, ret = %d\n";
      uVar7 = 0x1cc;
LAB_00402b30:
      rts_log(4,pcVar6,"init_main_stream",uVar7,iVar2);
      return iVar2;
    }
    iVar3 = rts_av_create_osd_chn();
    if (iVar3 < 0) {
      pcVar6 = "<%s, %d>fail to create osd chn, ret = %d\n";
      uVar7 = 0x1d2;
      iVar5 = iVar3;
    }
    else {
      local_58 = 0xc;
      local_54 = 0xffffffff;
      local_50 = param_1[4];
      local_44 = 0;
      local_4c = param_1[3];
      local_48 = param_1[5];
      iVar4 = rts_av_create_h264_chn(&local_58);
      if (iVar4 < 0) {
        pcVar6 = "<%s, %d>fail to create h264 chn, ret = %d\n";
        uVar7 = 0x1df;
        iVar5 = iVar4;
      }
      else {
        rts_log(1,"h264 chn : %d\n",iVar4);
        local_24 = param_1[5];
        iVar5 = rts_av_create_mjpeg_chn(&local_24);
        if (-1 < iVar5) {
          rts_log(1,"jpg chn : %d\n",iVar5);
          iVar2 = rts_av_bind(iVar1,iVar3);
          if (iVar2 == 0) {
            iVar2 = rts_av_bind(iVar3,iVar4);
            if (iVar2 == 0) {
              iVar2 = rts_av_bind(iVar3,iVar5);
              if (iVar2 == 0) {
                rts_av_enable_chn(iVar1);
                rts_av_enable_chn(iVar3);
                rts_av_enable_chn(iVar4);
                rts_av_start_recv(iVar4);
                uVar7 = param_1[1];
                param_2[2] = iVar1;
                *param_2 = uVar7;
                uVar7 = param_1[2];
                param_2[3] = iVar4;
                param_2[4] = iVar5;
                param_2[5] = iVar3;
                param_2[1] = uVar7;
                return 0;
              }
              pcVar6 = "<%s, %d>fail to bind isp and mjpeg, ret %d\n";
              uVar7 = 0x1fc;
            }
            else {
              pcVar6 = "<%s, %d>fail to bind osd and h264, ret %d\n";
              uVar7 = 0x1f6;
            }
          }
          else {
            pcVar6 = "<%s, %d>fail to bind isp and osd, ret %d\n";
            uVar7 = 0x1f0;
          }
          goto LAB_00402b30;
        }
        pcVar6 = "<%s, %d>fail to create jpg chn, ret = %d\n";
        uVar7 = 0x1e8;
      }
    }
  }
  rts_log(4,pcVar6,"init_main_stream",uVar7,iVar5);
  return -0x18;
}



// ==== init_sub_stream @ 00402bac size=588

int init_sub_stream(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_28 = *param_1;
  local_2c = 2;
  iVar1 = rts_av_create_isp_chn(&local_2c);
  if (iVar1 < 0) {
    pcVar5 = "<%s, %d>fail to create isp chn, ret = %d\n";
    uVar6 = 0x22f;
    iVar4 = iVar1;
  }
  else {
    rts_log(1,"isp chn : %d\n",iVar1);
    local_3c = param_1[1];
    local_40 = 1;
    local_38 = param_1[2];
    local_34 = 1;
    local_30 = param_1[3];
    iVar2 = rts_av_set_profile(iVar1,&local_40);
    if (iVar2 != 0) {
      pcVar5 = "<%s, %d>set isp profile fail, ret = %d\n";
      uVar6 = 0x23c;
LAB_00402d90:
      rts_log(4,pcVar5,"init_sub_stream",uVar6,iVar2);
      return iVar2;
    }
    iVar3 = rts_av_create_osd_chn();
    if (iVar3 < 0) {
      pcVar5 = "<%s, %d>fail to create osd chn, ret = %d\n";
      uVar6 = 0x242;
      iVar4 = iVar3;
    }
    else {
      local_58 = 0xc;
      local_50 = param_1[4];
      local_54 = 0xffffffff;
      local_4c = param_1[3];
      local_44 = 0;
      local_48 = param_1[5];
      iVar4 = rts_av_create_h264_chn(&local_58);
      if (-1 < iVar4) {
        rts_log(1,"h264 chn : %d\n",iVar4);
        iVar2 = rts_av_bind(iVar1,iVar3);
        if (iVar2 == 0) {
          iVar2 = rts_av_bind(iVar3,iVar4);
          if (iVar2 == 0) {
            rts_av_enable_chn(iVar1);
            rts_av_enable_chn(iVar3);
            rts_av_enable_chn(iVar4);
            rts_av_start_recv(iVar4);
            *(int *)(param_2 + 8) = iVar1;
            *(int *)(param_2 + 0xc) = iVar4;
            *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
            *(int *)(param_2 + 0x14) = iVar3;
            return 0;
          }
          pcVar5 = "<%s, %d>fail to bind osd and h264, ret %d\n";
          uVar6 = 0x25d;
        }
        else {
          pcVar5 = "<%s, %d>fail to bind isp and osd, ret %d\n";
          uVar6 = 599;
        }
        goto LAB_00402d90;
      }
      pcVar5 = "<%s, %d>fail to create h264 chn, ret = %d\n";
      uVar6 = 0x24f;
    }
  }
  rts_log(4,pcVar5,"init_sub_stream",uVar6,iVar4);
  return -0x18;
}



// ==== init_raw_stream @ 00402df8 size=284

int init_raw_stream(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = *param_1;
  local_1c = 2;
  iVar1 = rts_av_create_isp_chn(&local_1c);
  if (iVar1 < 0) {
    rts_log(4,"<%s, %d>fail to create isp chn, ret = %d\n","init_raw_stream",0x28d,iVar1);
    iVar2 = -0x18;
  }
  else {
    rts_log(1,"isp chn : %d\n",iVar1);
    local_2c = param_1[1];
    local_30 = 1;
    local_28 = param_1[2];
    local_24 = 1;
    local_20 = param_1[3];
    iVar2 = rts_av_set_profile(iVar1,&local_30);
    if (iVar2 == 0) {
      rts_av_enable_chn(iVar1);
      rts_av_start_recv(iVar1);
      *(int *)(param_2 + 8) = iVar1;
      *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
    }
    else {
      rts_log(4,"<%s, %d>set isp profile fail, ret = %d\n","init_raw_stream",0x29a,iVar2);
    }
  }
  return iVar2;
}



// ==== init_aac_audio_server @ 00402f78 size=1932

int init_aac_audio_server(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_2c [2];
  
  if (DAT_00414f18 != 0) {
    return -0x20;
  }
  DAT_00414e40 = -1;
  DAT_00414e38 = -1;
  DAT_00414e34 = -1;
  DAT_00414e44 = -1;
  DAT_00414e28 = -1;
  DAT_00414e2c = -1;
  DAT_00414e30 = -1;
  DAT_00414e48 = -1;
  DAT_00414f18 = 1;
  iVar1 = rts_av_init();
  iVar2 = RTS_IS_ERR(iVar1);
  if (iVar2 != 0) {
    return iVar1;
  }
  strcpy(&DAT_00414e60,"hw:0,1");
  DAT_00414ea0 = param_2;
  DAT_00414ea4 = param_3;
  DAT_00414ea8 = param_1;
  strcpy(&DAT_00414eb0,"hw:0,1");
  DAT_00414ef8 = 16000;
  DAT_00414ef0 = 0x10;
  DAT_00414ef4 = 1;
  DAT_00414f00 = 7;
  DAT_00414f14 = rts_queue_init();
  if (DAT_00414f14 == 0) {
    return -0xb;
  }
  DAT_00414f04 = rts_av_new_buffer(0x1400);
  if ((DAT_00414f04 == 0) || (DAT_00414f08 = rts_av_new_buffer(0x1400), DAT_00414f08 == 0)) {
    iVar1 = -0xb;
    goto LAB_0040369c;
  }
  DAT_00414e5c = aacDecoder_Open(2,1);
  iVar1 = 0;
  if (DAT_00414e5c == 0) {
    iVar1 = -1;
    rts_log(4,"<%s, %d>Error opening aac decoder\n","fdk_aac_decode_init",0x2ea);
  }
  iVar2 = RTS_IS_ERR(iVar1);
  if (iVar2 != 0) {
    rts_log(4,"<%s, %d>fdk aac decode fail.\n","init_aac_audio_server",0x497);
    goto LAB_0040369c;
  }
  DAT_00414e40 = rts_av_create_audio_resample_chn(DAT_00414ea8,DAT_00414ea0,DAT_00414ea4);
  iVar1 = RTS_IS_ERR(DAT_00414e40);
  if (iVar1 == 0) {
    rts_log(1,"audio resample chn : %d\n",DAT_00414e40);
    DAT_00414e38 = rts_av_create_audio_mixer_chn();
    iVar2 = RTS_IS_ERR(DAT_00414e38);
    iVar1 = DAT_00414e38;
    if (iVar2 != 0) goto LAB_004035ac;
    rts_log(1,"audio mixer chn : %d\n",DAT_00414e38);
    DAT_00414e34 = rts_av_create_audio_playback_chn(&DAT_00414e60);
    iVar2 = RTS_IS_ERR(DAT_00414e34);
    iVar1 = DAT_00414e34;
    if (iVar2 != 0) goto LAB_004035ac;
    rts_log(1,"audio playback chn : %d\n",DAT_00414e34);
    DAT_00414e44 = rts_av_create_audio_resample_chn(DAT_00414ef8,DAT_00414ef0,DAT_00414ef4);
    iVar2 = RTS_IS_ERR(DAT_00414e44);
    iVar1 = DAT_00414e44;
    if (iVar2 != 0) goto LAB_004035ac;
    rts_log(1,"audio resample chn : %d\n",DAT_00414e44);
    DAT_00414e2c = rts_av_create_audio_capture_chn(&DAT_00414eb0);
    iVar2 = RTS_IS_ERR(DAT_00414e2c);
    iVar1 = DAT_00414e2c;
    if (iVar2 != 0) goto LAB_004035ac;
    rts_log(1,"audio capture chn : %d\n",DAT_00414e2c);
    DAT_00414e28 = rts_av_create_audio_aec_chn();
    iVar2 = RTS_IS_ERR(DAT_00414e28);
    iVar1 = DAT_00414e28;
    if (iVar2 != 0) goto LAB_004035ac;
    rts_log(1,"audio aec chn : %d\n",DAT_00414e28);
    DAT_00414e48 = rts_av_create_audio_resample_chn(DAT_00414ef8,DAT_00414ef0,DAT_00414ef4);
    iVar2 = RTS_IS_ERR(DAT_00414e48);
    iVar1 = DAT_00414e48;
    if (iVar2 != 0) goto LAB_004035ac;
    rts_log(1,"audio resample chn : %d\n",DAT_00414e48);
    DAT_00414e30 = rts_av_create_audio_encode_chn(DAT_00414f00,1000);
    iVar2 = RTS_IS_ERR(DAT_00414e30);
    iVar1 = DAT_00414e30;
    if (iVar2 != 0) goto LAB_004035ac;
    rts_log(1,"encode chn : %d\n",DAT_00414e30);
    local_40 = 0x8001;
    local_3c = DAT_00414ea8;
    local_38 = DAT_00414ea0;
    local_34 = DAT_00414ea4;
    iVar1 = rts_av_set_profile(DAT_00414e40,&local_40);
    iVar2 = RTS_IS_ERR(iVar1);
    if (iVar2 != 0) {
      pcVar3 = "<%s, %d>set dtom resample ch fail, ret = %d\n";
      uVar4 = 0x395;
LAB_004034b8:
      rts_log(4,pcVar3,"start_server_job",uVar4,iVar1);
      goto LAB_004035ac;
    }
    local_40 = 0x8001;
    local_3c = DAT_00414ef8;
    local_38 = DAT_00414ef0;
    local_34 = DAT_00414ef4;
    iVar1 = rts_av_set_profile(DAT_00414e48,&local_40);
    iVar2 = RTS_IS_ERR(iVar1);
    if (iVar2 != 0) {
      pcVar3 = "<%s, %d>set dtom resample ch fail, ret = %d\n";
      uVar4 = 0x39f;
      goto LAB_004034b8;
    }
    iVar1 = rts_av_bind(DAT_00414e40,DAT_00414e38);
    if (iVar1 != 0) {
      pcVar3 = "<%s, %d>fail to bind resample and mixer, ret = %d\n";
      uVar4 = 0x3a5;
      goto LAB_004034b8;
    }
    iVar1 = rts_av_bind(DAT_00414e38,DAT_00414e34);
    if (iVar1 != 0) {
      pcVar3 = "<%s, %d>fail to bind mixer and playback, ret = %d\n";
      uVar4 = 0x3ab;
      goto LAB_004034b8;
    }
    iVar1 = rts_av_bind(DAT_00414e34,DAT_00414e44);
    if (iVar1 != 0) {
      pcVar3 = "<%s, %d>fail to bind playback and resample, ret = %d\n";
      uVar4 = 0x3b1;
      goto LAB_004034b8;
    }
    iVar1 = rts_av_bind(DAT_00414e44,DAT_00414e28);
    if (iVar1 != 0) {
      pcVar3 = "<%s, %d>fail to bind resample and aec, ret = %d\n";
      uVar4 = 0x3b7;
      goto LAB_004034b8;
    }
    iVar1 = rts_av_bind(DAT_00414e2c,DAT_00414e28);
    if (iVar1 != 0) {
      pcVar3 = "<%s, %d>fail to bind capture and aec, ret = %d\n";
      uVar4 = 0x3bd;
      goto LAB_004034b8;
    }
    iVar1 = rts_av_bind(DAT_00414e48,DAT_00414e30);
    if (iVar1 != 0) {
      pcVar3 = "<%s, %d>fail to bind resample and encode, ret = %d\n";
      uVar4 = 0x3c9;
      goto LAB_004034b8;
    }
    rts_av_enable_chn(DAT_00414e40);
    rts_av_enable_chn(DAT_00414e38);
    rts_av_enable_chn(DAT_00414e34);
    rts_av_enable_chn(DAT_00414e44);
    rts_av_enable_chn(DAT_00414e2c);
    rts_av_enable_chn(DAT_00414e28);
    rts_av_enable_chn(DAT_00414e48);
    rts_av_enable_chn(DAT_00414e30);
    rts_av_query_aec_ctrl(DAT_00414e28,local_2c);
    *local_2c[0] = 1;
    local_2c[0][1] = 1;
    rts_av_set_aec_ctrl();
    rts_av_release_aec_ctrl(local_2c[0]);
    local_2c[0] = (undefined4 *)0x0;
    rts_av_start_recv(DAT_00414e30);
    rts_av_start_recv(DAT_00414e28);
    rts_av_start_send(DAT_00414e40);
    rts_av_start_send(DAT_00414e48);
    for (puVar5 = &DAT_00414f04; puVar5 != (undefined4 *)0x414f0c; puVar5 = puVar5 + 1) {
      iVar2 = rts_av_get_buffer(*puVar5);
      rts_av_set_buffer_callback(iVar2,&DAT_00414e28,FUN_004020b0);
      if (iVar2 != 0) {
        rts_av_put_buffer(iVar2);
      }
    }
  }
  else {
    rts_log(4,"<%s, %d>create audio dtom resample chn fail, ret = %d\n","start_server_job",0x352,
            DAT_00414e40);
    iVar1 = DAT_00414e40;
LAB_004035ac:
    if (-1 < DAT_00414e40) {
      rts_av_destroy_chn();
    }
    DAT_00414e40 = -1;
    if (-1 < DAT_00414e38) {
      rts_av_destroy_chn();
    }
    DAT_00414e38 = -1;
    if (-1 < DAT_00414e34) {
      rts_av_destroy_chn();
    }
    DAT_00414e34 = -1;
    if (-1 < DAT_00414e44) {
      rts_av_destroy_chn();
    }
    DAT_00414e44 = -1;
    if (-1 < DAT_00414e2c) {
      rts_av_destroy_chn();
    }
    DAT_00414e2c = -1;
    if (-1 < DAT_00414e28) {
      rts_av_destroy_chn();
    }
    DAT_00414e28 = -1;
    if (-1 < DAT_00414e48) {
      rts_av_destroy_chn();
    }
    DAT_00414e48 = -1;
    if (-1 < DAT_00414e30) {
      rts_av_destroy_chn();
    }
    DAT_00414e30 = -1;
  }
  iVar2 = RTS_IS_ERR(iVar1);
  if (iVar2 == 0) {
    return 0;
  }
  rts_log(4,"<%s, %d>start decode fail, ret = %d\n","init_aac_audio_server",0x49d,iVar1);
LAB_0040369c:
  FUN_00402570();
  if (DAT_00414e5c != 0) {
    aacDecoder_Close();
  }
  rts_av_release();
  return iVar1;
}



