/* xy_stream — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "xy_stream.h"

// ==== _init @ 004015b8 size=72

void _init(void)

{
  FUN_00401f0c();
  FUN_00403d20();
  return;
}



// ==== main @ 00401600 size=1896

undefined4 main(undefined4 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_d878 [51200];
  undefined4 *local_1078;
  undefined4 local_1074;
  undefined4 local_1070;
  undefined4 local_106c;
  undefined4 local_1068;
  undefined4 local_1064;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined4 local_30;
  
  memset(auStack_d878,0,0xc800);
  iVar6 = *(int *)(param_2 + 8);
  uVar8 = *(undefined4 *)(param_2 + 4);
  iVar1 = strcmp(iVar6,&DAT_004044dc);
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  rts_set_log_mask(1);
  init_stream_info(&DAT_00414e08);
  init_stream_info(&DAT_00414de8);
  init_stream_info(&DAT_00414dc8);
  iVar1 = rts_av_init();
  if (iVar1 == 0) {
    local_5c = 0x500;
    local_58 = 0x2d0;
    local_50 = 0x133333;
    local_60 = 0;
    local_54 = 0x14;
    local_4c = 0;
    iVar1 = init_main_stream(&local_60,&DAT_00414e08);
    if (iVar1 != 0) {
LAB_0040177c:
      release_stream(&DAT_00414e08);
      release_stream(&DAT_00414de8);
      release_stream(&DAT_00414dc8);
      rts_av_release();
      goto LAB_004017a0;
    }
    local_78 = 1;
    local_74 = 0x280;
    local_70 = 0x1e0;
    local_6c = 0x14;
    local_68 = 0x32000;
    local_64 = 0;
    iVar1 = init_sub_stream(&local_78,&DAT_00414de8);
    if (iVar1 != 0) goto LAB_0040177c;
    local_1078 = (undefined4 *)0x2;
    local_1074 = 0x140;
    local_1070 = 0xf0;
    local_1068 = 0xffffffff;
    local_106c = 0x14;
    local_1064 = 0;
    iVar1 = init_raw_stream(&local_1078,&DAT_00414dc8);
    if (iVar1 != 0) goto LAB_0040177c;
LAB_004017b0:
    iVar1 = init_aac_audio_server(16000,0x10,1);
    if (iVar1 < 0) {
      rts_log(4,"<%s, %d>init aac playback fail.\n","rmm_init_ai",0x577);
    }
    else {
      iVar1 = apply_capture_aac();
      if (iVar1 == 0) goto LAB_00401828;
      rts_log(4,"<%s, %d>fail to apply capture","rmm_init_ai",0x57e);
      stop_aac_audio_server();
    }
    pcVar5 = "rmm_init_ai error";
  }
  else {
LAB_004017a0:
    if (iVar1 == 0) goto LAB_004017b0;
    pcVar5 = "rmm_init_isp error";
  }
  puts(pcVar5);
LAB_00401828:
  rts_set_log_mask(1);
  signal(2,&LAB_004020a0);
  signal(0xf,&LAB_004020a0);
  signal(0xe,Snapshot);
  iVar1 = pthread_create(auStack_38,0,FUN_00402808,&DAT_00414db4);
  if ((((-1 < iVar1) &&
       (iVar1 = pthread_create(auStack_3c,0,FUN_00402808,&DAT_00414d60), -1 < iVar1)) &&
      (iVar1 = pthread_create(auStack_40,0,ai_get_aacstream,uVar8), -1 < iVar1)) &&
     ((iVar1 = pthread_create(auStack_44,0,ai_get_lpcmstream,0), -1 < iVar1 &&
      (iVar1 = pthread_create(auStack_48,0,FUN_004020f4,0), -1 < iVar1)))) {
    if (iVar6 != 0) {
      iVar1 = fopen(iVar6,"r");
      if (iVar1 == 0) {
        rts_log(4,"<%s, %d>open aacfile fail.\n","send_ao_beep",0x62c);
      }
      else {
        fseek(iVar1,0,2);
        iVar6 = ftell(iVar1);
        puVar2 = (uint *)__rts_malloc(iVar6,"send_ao_beep",0x633);
        if (puVar2 == (uint *)0x0) {
          rts_log(4,"<%s, %d>malloc buffer fail\n","send_ao_beep",0x635);
        }
        else {
          fseek(iVar1,0,0);
          fread(puVar2,1,iVar6,iVar1);
          if (iVar6 != 0) {
            memset(&local_1078,0,0x1000);
            local_60 = 0;
            puVar7 = puVar2;
            if (6 < iVar6) {
              do {
                uVar9 = *puVar7;
                if (((uVar9 & 0xf000) >> 4 | uVar9 & 0xff) != 0xfff) {
                  rts_log(4,"<%s, %d>wrong aac format\n","parse_decode_aac_frame",0x5e8);
                  break;
                }
                uVar9 = ((ushort)puVar7[1] & 0xff) << 3 | (uint)(ushort)((ushort)puVar7[1] >> 0xd) |
                        uVar9 >> 0x11 & 0x1800;
                send_aac_frame(puVar7,uVar9,&local_1078,&local_60);
                while( true ) {
                  do {
                    do {
                      local_30 = local_60;
                    } while (DAT_00414f18 != 1);
                    iVar3 = rts_queue_empty(DAT_00414f14);
                  } while (iVar3 != 0);
                  puVar4 = (undefined4 *)rts_queue_pop(DAT_00414f14);
                  if (puVar4 != (undefined4 *)0x0) break;
                  rts_log(4,"<%s, %d>buffer is busy.\n","send_pcm_to_playback",0x506);
                }
                iVar6 = iVar6 - uVar9;
                memcpy(*puVar4,&local_1078,local_30);
                puVar7 = (uint *)((int)puVar7 + uVar9);
                puVar4[2] = local_30;
                local_78 = 0x8001;
                local_74 = DAT_00414ea8;
                local_70 = DAT_00414ea0;
                local_6c = DAT_00414ea4;
                rts_av_set_buffer_profile(puVar4,&local_78);
                rts_av_send(DAT_00414e40,puVar4);
                rts_av_put_buffer(puVar4);
                usleep(1000);
              } while (0 < iVar6);
            }
          }
          free(puVar2);
        }
        fclose(iVar1);
      }
    }
    while (DAT_00414dc0 == 0) {
      if (DAT_00414dc4 != 0) {
        DAT_00414db0 = DAT_00414db0 + 1;
        FUN_0040243c(DAT_00414db0 < 3);
        if (DAT_00414db0 == 4) {
          DAT_00414db0 = 0;
        }
        usleep(50000);
        do {
          while( true ) {
            iVar1 = rts_av_enable_chn(DAT_00414df8);
            if (iVar1 == 0) break;
            uVar8 = 0x68c;
            pcVar5 = "<%s, %d>enable jpg fail, ret = %d\n";
LAB_00401c68:
            rts_log(4,pcVar5,"get_mjpeg_data",uVar8,iVar1);
          }
          iVar1 = rts_av_start_recv(DAT_00414df8,"<%s, %d>enable jpg fail, ret = %d\n");
          if (iVar1 != 0) {
            rts_av_disable_chn();
            uVar8 = 0x692;
            pcVar5 = "<%s, %d>start recv jpg fail, ret = %d\n";
            goto LAB_00401c68;
          }
          iVar1 = rts_av_get_chn_status(DAT_00414df8);
        } while (((iVar1 == 0) || (iVar1 = rts_av_poll(DAT_00414df8), iVar1 != 0)) ||
                ((iVar1 = rts_av_recv(DAT_00414df8,&local_1078), puVar4 = local_1078, iVar1 != 0 ||
                 (local_1078 == (undefined4 *)0x0))));
        memcpy(auStack_d878,*local_1078,local_1078[2]);
        uVar8 = puVar4[2];
        rts_av_put_buffer(puVar4);
        rts_av_stop_recv(DAT_00414df8);
        rts_av_disable_chn(DAT_00414df8);
        save_mjpeg(auStack_d878,uVar8);
        DAT_00414dc4 = 0;
      }
      usleep(10000);
    }
  }
  DAT_00414f10 = 0;
  release_stream(&DAT_00414e08);
  release_stream(&DAT_00414de8);
  rts_av_release();
  return 0;
}



// ==== __uClibc_main @ 00403d70 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00401e5c();
  return;
}



// ==== _fini @ 00403d90 size=56

void _fini(void)

{
  FUN_00401e5c();
  return;
}



