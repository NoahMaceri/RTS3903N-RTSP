/* xy_stream — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "xy_stream.h"

// ==== entry @ 00401d70 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_00414d90;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00414d94)
            (PTR_main_00414d88,param_2,&stack0x00000004,PTR__init_00414d8c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== Snapshot @ 00402090 size=16

void Snapshot(void)

{
  DAT_00414dc4 = 1;
  return;
}



// ==== ai_get_lpcmstream @ 00402134 size=276

undefined4 ai_get_lpcmstream(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_18 [2];
  
  iVar1 = fopen("/mnt/record.pcm",&DAT_00403de0);
  if (iVar1 == 0) {
    rts_log(4,"<%s, %d>open pcm_file fail.\n","ai_get_lpcmstream",0x5c3);
  }
  else {
    local_18[0] = (undefined4 *)0x0;
    while (DAT_00414f10 != 0) {
      iVar2 = rts_av_poll(DAT_00414e28);
      uVar3 = 1000;
      if (iVar2 != 0) goto LAB_00402214;
      iVar2 = rts_av_recv(DAT_00414e28,local_18);
      uVar3 = 1000;
      if (iVar2 != 0) goto LAB_00402214;
      if (local_18[0] != (undefined4 *)0x0) {
        fwrite(*local_18[0],1,local_18[0][2],iVar1);
        printf("\n\n~~~~~~~~~buffer->bytesused = %d~~~~~~~~~~~~~~\n\n",local_18[0][2]);
        if (local_18[0] != (undefined4 *)0x0) {
          rts_av_put_buffer();
        }
        local_18[0] = (undefined4 *)0x0;
        uVar3 = 10000;
LAB_00402214:
        usleep(uVar3);
      }
    }
    fclose(iVar1);
  }
  return 0;
}



// ==== ai_get_aacstream @ 00402248 size=500

undefined4 ai_get_aacstream(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_1c;
  
  iVar1 = fopen("/mnt/encode.aac",&DAT_00403de0);
  if (iVar1 == 0) {
    rts_log(4,"<%s, %d>open aac_file fail.\n","ai_get_aacstream",0x602);
  }
  else {
    iVar2 = fopen(param_1,&DAT_00403e68);
    if (iVar2 == 0) {
      rts_log(4,"<%s, %d>open pcm_file fail.\n","ai_get_aacstream",0x608);
    }
    else {
      local_1c = (undefined4 *)0x0;
      while (DAT_00414f10 != 0) {
        iVar4 = rts_queue_empty(DAT_00414f14);
        if (iVar4 == 0) {
          local_1c = (undefined4 *)rts_queue_pop(DAT_00414f14);
          iVar4 = feof(iVar2);
          if (iVar4 != 0) break;
          uVar3 = fread(*local_1c,1,0x200,iVar2);
          local_28 = DAT_00414ef0;
          local_2c = DAT_00414ef8;
          local_1c[2] = uVar3;
          local_30 = 0x8001;
          local_24 = DAT_00414ef4;
          rts_av_set_buffer_profile(local_1c,&local_30);
          rts_av_send(DAT_00414e48,local_1c);
          if (local_1c != (undefined4 *)0x0) {
            rts_av_put_buffer();
          }
          local_1c = (undefined4 *)0x0;
        }
        iVar4 = rts_av_poll(DAT_00414e30);
        uVar3 = 1000;
        if (iVar4 != 0) goto LAB_0040240c;
        iVar4 = rts_av_recv(DAT_00414e30,&local_1c);
        uVar3 = 1000;
        if (iVar4 != 0) goto LAB_0040240c;
        if (local_1c != (undefined4 *)0x0) {
          fwrite(*local_1c,1,local_1c[2],iVar1);
          if (local_1c != (undefined4 *)0x0) {
            rts_av_put_buffer();
          }
          local_1c = (undefined4 *)0x0;
          uVar3 = 10000;
LAB_0040240c:
          usleep(uVar3);
        }
      }
      fclose(iVar2);
    }
    fclose(iVar1);
  }
  return 0;
}



// ==== release_stream @ 00402630 size=184

void release_stream(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 1;
  if (-1 < *(int *)(param_1 + 8)) {
    rts_av_disable_chn();
    rts_av_destroy_chn(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x14)) {
    rts_av_disable_chn();
    rts_av_destroy_chn(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0xc)) {
    rts_av_disable_chn();
    rts_av_destroy_chn(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x10)) {
    rts_av_disable_chn();
    rts_av_destroy_chn(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}



// ==== main_stream_recv @ 004026e8 size=144

undefined4 main_stream_recv(int param_1)

{
  int iVar1;
  undefined1 auStack_28 [24];
  undefined4 *local_10 [2];
  
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    while( true ) {
      if (iVar1 != 0) {
        return 0;
      }
      local_10[0] = (undefined4 *)0x0;
      usleep(1000);
      iVar1 = rts_av_poll(*(undefined4 *)(param_1 + 0xc));
      if (iVar1 != 0) break;
      iVar1 = rts_av_recv(*(undefined4 *)(param_1 + 0xc),local_10);
      if ((iVar1 != 0) || (local_10[0] == (undefined4 *)0x0)) break;
      if ((local_10[0][4] & 1) != 0) {
        FUN_00401f50(*local_10[0],local_10[0][2],auStack_28);
      }
      rts_av_put_buffer(local_10[0]);
      iVar1 = *(int *)(param_1 + 0x18);
    }
  } while( true );
}



// ==== sub_stream_recv @ 00402778 size=144

undefined4 sub_stream_recv(int param_1)

{
  int iVar1;
  undefined1 auStack_28 [24];
  undefined4 *local_10 [2];
  
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    while( true ) {
      if (iVar1 != 0) {
        return 0;
      }
      local_10[0] = (undefined4 *)0x0;
      usleep(1000);
      iVar1 = rts_av_poll(*(undefined4 *)(param_1 + 0xc));
      if (iVar1 != 0) break;
      iVar1 = rts_av_recv(*(undefined4 *)(param_1 + 0xc),local_10);
      if ((iVar1 != 0) || (local_10[0] == (undefined4 *)0x0)) break;
      if ((local_10[0][4] & 1) != 0) {
        FUN_00401f50(*local_10[0],local_10[0][2],auStack_28);
      }
      rts_av_put_buffer(local_10[0]);
      iVar1 = *(int *)(param_1 + 0x18);
    }
  } while( true );
}



// ==== raw_stream_recv @ 00402854 size=116

undefined4 raw_stream_recv(int param_1)

{
  int iVar1;
  int local_10 [2];
  
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    while( true ) {
      if (iVar1 != 0) {
        return 0;
      }
      local_10[0] = 0;
      usleep(1000);
      iVar1 = rts_av_poll(*(undefined4 *)(param_1 + 8));
      if (iVar1 != 0) break;
      iVar1 = rts_av_recv(*(undefined4 *)(param_1 + 8),local_10);
      if ((iVar1 != 0) || (local_10[0] == 0)) break;
      rts_av_put_buffer();
      iVar1 = *(int *)(param_1 + 0x18);
    }
  } while( true );
}



// ==== apply_capture_aac @ 00402f14 size=68

undefined4 apply_capture_aac(void)

{
  if (DAT_00414f18 != 0) {
    DAT_00414f10 = 1;
    rts_av_start_recv(DAT_00414e30);
    return 0;
  }
  return 0xffffffe1;
}



// ==== stop_capture_aac @ 00402f58 size=1

undefined4 stop_capture_aac(void)

{
  if (DAT_00414f10 != 0) {
    DAT_00414f10 = 0;
  }
  return 0;
}



// ==== send_aac_frame @ 00403704 size=900

undefined4 send_aac_frame(undefined4 param_1,int param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  do {
    while (DAT_00414f18 != 1) {
      rts_log(4,"<%s, %d>server info not init.\n","send_aac_frame",0x4b6);
    }
    local_34 = param_1;
    local_30 = param_2;
    local_2c = param_2;
    iVar1 = aacDecoder_Fill(DAT_00414e5c,&local_34,&local_2c,&local_30);
    if (iVar1 == 0) {
      iVar1 = __rts_malloc(0xc800,"fdk_aac_decode_frame",0x303);
      if (iVar1 == 0) {
        iVar6 = -0xb;
      }
      else {
        iVar6 = aacDecoder_DecodeFrame(DAT_00414e5c,iVar1,0xc800,0);
        if (iVar6 == 0x1002) {
          iVar6 = local_30 - local_2c;
          rts_log(4,"<%s, %d>AAC decode not enough bits.\n","fdk_aac_decode_frame",0x30a);
        }
        else {
          if (iVar6 == 0) {
            DAT_00414e54 = 0x10;
            piVar2 = (int *)aacDecoder_GetStreamInfo(DAT_00414e5c);
            if (piVar2 == (int *)0x0) {
              pcVar4 = "<%s, %d>Unable to get stream info\n";
              uVar5 = 0x2cc;
            }
            else {
              iVar6 = *piVar2;
              if (0 < iVar6) {
                DAT_00414e4c = piVar2[1];
                iVar7 = 0;
                do {
                  iVar3 = iVar7 * 4;
                  DAT_00414e50 = iVar6;
                  if (piVar2[2] <= iVar7) goto LAB_00403924;
                  iVar7 = iVar7 + 1;
                } while (*(int *)(piVar2[3] + iVar3) - 1U < 0x10);
                rts_log(4,"<%s, %d>unknown channel type\n","get_stream_info",0x2da);
LAB_00403924:
                DAT_00414e58 = piVar2[2];
                memcpy(param_3,iVar1,(uint)(DAT_00414e54 * DAT_00414e4c * DAT_00414e58) >> 3);
                *param_4 = (uint)(DAT_00414e4c * DAT_00414e58 * DAT_00414e54) >> 3;
                if (((DAT_00414e58 != DAT_00414ea4) || (DAT_00414e54 != DAT_00414ea0)) ||
                   (DAT_00414e50 != DAT_00414ea8)) {
                  local_48 = 0x8001;
                  local_44 = DAT_00414e50;
                  local_3c = DAT_00414e58;
                  local_40 = DAT_00414e54;
                  iVar6 = rts_av_set_profile(DAT_00414e40,&local_48);
                  iVar7 = RTS_IS_ERR(iVar6);
                  if (iVar7 != 0) {
                    rts_log(4,"<%s, %d>setresample profile fail, ret = %d\n","fdk_aac_decode_frame",
                            0x325,iVar6);
                    goto LAB_00403a0c;
                  }
                }
                iVar6 = local_2c - local_30;
                goto LAB_00403a0c;
              }
              pcVar4 = "<%s, %d>Stream info not initialized\n";
              uVar5 = 0x2d1;
            }
            rts_log(4,pcVar4,"get_stream_info",uVar5);
          }
          else {
            rts_log(4,"<%s, %d>aacDecoder_DecodeFrame() failed: %x\n","fdk_aac_decode_frame",0x30f,
                    iVar6);
          }
          iVar6 = -1;
        }
LAB_00403a0c:
        rts_free(iVar1);
        if (-1 < iVar6) {
          return 0;
        }
      }
    }
    else {
      rts_log(4,"<%s, %d>aacDecoder_Fill() failed: %x\n","fdk_aac_decode_frame",0x2fe,iVar1);
      iVar6 = -1;
    }
    rts_log(4,"<%s, %d>decode aac frame fail %d\n","send_aac_frame",0x4bf,iVar6);
    usleep(1000);
  } while( true );
}



// ==== stop_aac_audio_server @ 00403a88 size=420

undefined4 stop_aac_audio_server(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe1;
  if (DAT_00414f18 != 0) {
    DAT_00414f18 = 0;
    if (DAT_00414e5c != 0) {
      aacDecoder_Close();
    }
    rts_av_stop_send(DAT_00414e40);
    rts_av_stop_recv(DAT_00414e30);
    rts_av_stop_send(DAT_00414e48);
    rts_av_stop_recv(DAT_00414e28);
    rts_av_disable_chn(DAT_00414e44);
    rts_av_disable_chn(DAT_00414e40);
    rts_av_disable_chn(DAT_00414e38);
    rts_av_disable_chn(DAT_00414e34);
    rts_av_disable_chn(DAT_00414e2c);
    rts_av_disable_chn(DAT_00414e28);
    rts_av_disable_chn(DAT_00414e48);
    rts_av_disable_chn(DAT_00414e30);
    if (-1 < DAT_00414e44) {
      rts_av_destroy_chn();
    }
    DAT_00414e44 = -1;
    if (-1 < DAT_00414e40) {
      rts_av_destroy_chn();
    }
    DAT_00414e40 = -1;
    if (-1 < DAT_00414e34) {
      rts_av_destroy_chn();
    }
    DAT_00414e34 = -1;
    if (-1 < DAT_00414e38) {
      rts_av_destroy_chn();
    }
    DAT_00414e38 = -1;
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
    rts_av_set_buffer_callback(DAT_00414f04,0,0);
    rts_av_set_buffer_callback(DAT_00414f08,0,0);
    FUN_00402570();
    rts_av_release();
    uVar1 = 0;
  }
  return uVar1;
}



// ==== msg_proc @ 00403c2c size=1

undefined4 msg_proc(void)

{
  return 0;
}



// ==== rmm_init_jpeg @ 00403c34 size=1

undefined4 rmm_init_jpeg(void)

{
  return 0;
}



// ==== save_mjpeg @ 00403c3c size=220

undefined4 save_mjpeg(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_58 [68];
  
  iVar2 = DAT_00414dbc;
  uVar1 = DAT_00414db8;
  uVar4 = DAT_00414db8 + 1;
  DAT_00414dbc = (uint)(uVar4 < DAT_00414db8) + DAT_00414dbc;
  DAT_00414db8 = uVar4;
  snprintf(auStack_58,0x40,"/mnt/xy_snapshot_%lld.jpg",uVar4,uVar1,iVar2);
  iVar2 = fopen(auStack_58,&DAT_004044c0);
  if (iVar2 == 0) {
    rts_log(4,"<%s, %d>open %s fail\n","save_mjpeg",0x726,auStack_58);
    uVar3 = 0xffffffe8;
  }
  else {
    fwrite(param_1,1,param_2,iVar2);
    fclose(iVar2);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== printf @ 004047a0 size=16

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414c30)();
  return;
}



// ==== fread @ 004047c0 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414c38)();
  return;
}



// ==== feof @ 004047d0 size=16

void feof(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414c3c)();
  return;
}



// ==== free @ 00404810 size=4

void free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040481c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414c4c)();
  return;
}



// ==== memcpy @ 00404880 size=16

void memcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040488c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414c68)();
  return;
}



// ==== usleep @ 004048b0 size=4

void usleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x004048bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414c74)();
  return;
}



// ==== memset @ 004048f0 size=4

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x004048fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414c84)();
  return;
}



// ==== strcpy @ 00404970 size=4

void strcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040497c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414ca4)();
  return;
}



// ==== fwrite @ 004049e0 size=16

void fwrite(void)

{
                    /* WARNING: Could not recover jumptable at 0x004049ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414cc0)();
  return;
}



// ==== puts @ 004049f0 size=4

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x004049fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414cc4)();
  return;
}



// ==== fopen @ 00404a00 size=16

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414cc8)();
  return;
}



// ==== snprintf @ 00404a40 size=16

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414cd8)();
  return;
}



// ==== pthread_create @ 00404a90 size=4

void pthread_create(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414cec)();
  return;
}



// ==== fseek @ 00404ab0 size=4

void fseek(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414cf4)();
  return;
}



// ==== fclose @ 00404ac0 size=16

void fclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414cf8)();
  return;
}



// ==== sleep @ 00404b10 size=4

void sleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414d0c)();
  return;
}



// ==== signal @ 00404b20 size=16

void signal(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414d10)();
  return;
}



// ==== strcmp @ 00404bd0 size=16

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414d3c)();
  return;
}



// ==== ftell @ 00404bf0 size=16

void ftell(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00414d44)();
  return;
}



