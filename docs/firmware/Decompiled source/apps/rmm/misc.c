/* rmm — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== entry @ 00404c20 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00436a50;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00436ab8)
            (PTR_main_00436a48,param_2,&stack0x00000004,PTR__init_00436a4c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== daynight_switch_func @ 004050bc size=648

void daynight_switch_func(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 auStack_128 [256];
  
  memset(auStack_128,0,0x100);
  prctl(0xf,"daynight_switch_func",0,0,0);
  uVar1 = pthread_self();
  pthread_detach(uVar1);
  uVar3 = 0;
  cVar4 = *(char *)(DAT_00436b74 + 3);
  if (cVar4 == '1') goto LAB_004051b8;
LAB_00405158:
  if (cVar4 == '3') {
    FUN_004141ac("cat /sys/devices/platform/rts_saradc.0/in0_input",auStack_128,0x100,0x3c);
    iVar2 = atoi(auStack_128);
    if (iVar2 < 0xbeb) {
      uVar3 = -(iVar2 < 0x92e ^ 1);
      if (DAT_00477950 == 0) goto LAB_0040518c;
    }
    else {
      if (DAT_00477950 == 0) goto LAB_00405238;
      uVar3 = 1;
    }
    if (DAT_00477950 != 1) goto LAB_004051a0;
    goto LAB_004051d8;
  }
  if (cVar4 == '2') {
    FUN_004141ac("cat /sys/devices/platform/rts_saradc.0/in0_input",auStack_128,0x100,0x3c);
    iVar2 = atoi(auStack_128);
    uVar3 = (uint)(iVar2 < 0x92e);
  }
  else if (cVar4 == '5') {
    FUN_004141ac("cat /sys/devices/platform/rts_saradc.0/in0_input",auStack_128,0x100,0x3c);
    uVar3 = atoi(auStack_128);
  }
  else if (cVar4 == '4') {
    FUN_004141ac("cat /sys/devices/platform/rts_saradc.0/in0_input",auStack_128,0x100,0x3c);
    iVar2 = atoi(auStack_128);
    uVar3 = (uint)(iVar2 == 0);
  }
  if (DAT_00477950 != 0) goto LAB_004051cc;
  do {
    if (uVar3 == 1) {
LAB_00405238:
      uVar3 = 1;
      DAT_00436bd0 = DAT_00436bd0 + 1;
LAB_00405194:
      DAT_00436bcc = 0;
      if (0 < DAT_00436bd0) {
        DAT_00477950 = 1;
      }
    }
    else {
LAB_0040518c:
      if (uVar3 != 0) goto LAB_00405194;
      DAT_00436bd0 = 0;
      DAT_00436bcc = 0;
    }
LAB_004051a0:
    while( true ) {
      sleep(1);
      cVar4 = *(char *)(DAT_00436b74 + 3);
      if (cVar4 != '1') goto LAB_00405158;
LAB_004051b8:
      uVar3 = rts_av_get_isp_daynight_statis();
      if (DAT_00477950 == 0) break;
LAB_004051cc:
      if (DAT_00477950 == 1) {
LAB_004051d8:
        DAT_00436bc8 = DAT_00436bc8 + 1;
        if (DAT_00436bc8 < 0xe10) {
          if (5 < DAT_00436bdc) {
            FUN_00413f64("rmm.c","daynight_switch_func",0x47e,"ircut is locked\n");
          }
        }
        else {
          DAT_00436bdc = 0;
          DAT_00436bc8 = 0;
        }
        if (uVar3 == 0) {
          DAT_00436bcc = DAT_00436bcc + 1;
          if (0 < DAT_00436bcc) {
            DAT_00477950 = 0;
          }
        }
        else {
          DAT_00436bcc = 0;
          DAT_00436bd0 = DAT_00436bd0 + 1;
        }
      }
    }
  } while( true );
}



// ==== trans_info @ 00405344 size=460

undefined4 trans_info(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = param_3;
  FUN_00413f64("rmm.c","trans_info",0x5ae,"trans_json info=%s;key=%s\n",param_4,param_3);
  iVar2 = strstr(param_4,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = strlen(param_3);
  iVar6 = iVar2 + iVar3 + 1;
  iVar5 = 1;
  do {
    cVar1 = *(char *)(iVar6 + -1);
    if ((((cVar1 != ':') && (cVar1 != '\'')) && (cVar1 != '\"')) &&
       (iVar4 = iVar5 + -1, cVar1 != '{')) break;
    iVar7 = iVar5 + 1;
    iVar6 = iVar2 + iVar3 + iVar7;
    iVar4 = iVar5;
    iVar5 = iVar7;
  } while (iVar7 != 0xb);
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      iVar6 = (int)*(char *)(iVar2 + iVar4 + iVar3 + iVar5);
      if ((((iVar6 == 0x3a) || (iVar6 == 0x22)) ||
          (((iVar6 - 0x26U & 0xff) < 2 || ((iVar6 == 0x2c || (iVar6 == 0x7d)))))) || (iVar6 == 0)) {
        if (iVar5 == 0) goto LAB_0040548c;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (param_2 != iVar5);
    iVar2 = iVar5 + 1;
    if (param_2 <= iVar5) {
      iVar2 = param_2;
    }
    snprintf(param_1,iVar2,"%s");
  }
LAB_0040548c:
  FUN_00413f64("rmm.c","trans_info",0x5f6,"trans_json result=%s\n",param_1,uVar8);
  return 1;
}



// ==== rmm_ptz_direction_ctrl @ 00405534 size=136

undefined4 rmm_ptz_direction_ctrl(undefined4 param_1)

{
  int iVar1;
  int in_t8;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 1;
  local_14 = 0x18;
  local_18 = 0x4006;
  local_16 = 0x4006;
  local_c = 0;
  local_1c = 2;
  local_10 = param_1;
  iVar1 = FUN_004143f4(*(undefined4 *)(in_t8 + 4),&local_20,0x18);
  uVar2 = 1;
  if (iVar1 < 0) {
    FUN_00413f64("rmm.c","rmm_ptz_direction_ctrl",0x259,"p2p_ptz_direction_ctrl send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== abnormal_sound_detection_func @ 00406320 size=528

void abnormal_sound_detection_func(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_5b8 [800];
  undefined1 auStack_298 [616];
  undefined4 local_30;
  int local_2c;
  
  memset(auStack_5b8,0,800);
  prctl(0xf,"abnormal_sound_detection_func",0,0,0);
  uVar2 = pthread_self();
  pthread_detach(uVar2);
  FUN_00421440(auStack_298);
  do {
    puVar1 = PTR_FUN_004249e4;
    if (*(int *)(DAT_004778ac + 0x608) == 0) {
      uVar3 = (*(code *)PTR_FUN_004249e4)(DAT_00436b70);
      if (799 < uVar3) {
LAB_004063dc:
        uVar3 = (*(code *)puVar1)(DAT_00436b70);
        if (799 < uVar3) {
          while ((((*(code *)PTR_cb_read_004249dc)(DAT_00436b70,auStack_5b8,800),
                  DAT_00477970 < 0x1d7 && (*(int *)(DAT_004778ac + 0x89c) == 0)) &&
                 (*(int *)(DAT_004778ac + 0x4e4) == 2))) {
            uVar3 = (uint)*(byte *)(DAT_004778ac + 0x934);
            iVar4 = FUN_004214e4(auStack_5b8,400,auStack_298,uVar3);
            if (iVar4 != 1) break;
            local_30 = time(0);
            local_2c = DAT_00436bc4;
            uVar2 = (*(code *)puVar1)(DAT_00436b70);
            iVar4 = local_2c;
            FUN_00413f64("rmm.c","abnormal_sound_detection_func",0x1a9,
                         " ivaAbnormalSoundDetect =%d sec. lastReport:%d. cbmalen:%d sensitivity %d\n"
                         ,local_30,local_2c,uVar2,uVar3);
            iVar5 = time(0);
            if (iVar5 - DAT_00436bc4 < 0x259) break;
            uVar6 = time(0);
            FUN_00413f64("rmm.c","abnormal_sound_detection_func",0x1ac,
                         "ivaAbnormalSoundDetect REPORT =%d sec.\n",uVar6,iVar4,uVar2,uVar3);
            send_abnormal_sound_detect_msg(DAT_004778a4);
            DAT_00436bc4 = time(0);
            uVar3 = (*(code *)puVar1)(DAT_00436b70);
            if (uVar3 < 800) goto LAB_00406520;
          }
          goto LAB_004063dc;
        }
      }
    }
LAB_00406520:
    ms_sleep(10);
  } while( true );
}



// ==== raw_video_resize @ 00408c14 size=168

int raw_video_resize(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  
  pthread_mutex_lock(&DAT_00436c2c);
  rts_av_get_profile(DAT_00436c04,auStack_30);
  local_2c = param_1;
  local_28 = param_2;
  iVar1 = rts_av_set_profile(DAT_00436c04,auStack_30);
  pthread_mutex_unlock(&DAT_00436c2c);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>set isp profile fail, ret = %d\n","raw_video_resize",0x727,iVar1);
  }
  return iVar1;
}



// ==== parse_decode_aac_frame @ 00409af0 size=332

undefined4 parse_decode_aac_frame(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_2028 [8192];
  undefined4 local_28 [2];
  
  memset(auStack_2028,0,0x2000);
  if ((param_1 == (uint *)0x0) || (param_2 < 7)) {
    uVar2 = 0xffffffff;
  }
  else {
    do {
      uVar3 = *param_1;
      if (((uVar3 & 0xf000) >> 4 | uVar3 & 0xff) != 0xfff) {
        rts_log(4,"<%s, %d>wrong aac format\n","parse_decode_aac_frame",0x626);
        return 0xffffffff;
      }
      local_28[0] = 0x2000;
      uVar3 = ((ushort)param_1[1] & 0xff) << 3 | (uint)(ushort)((ushort)param_1[1] >> 0xd) |
              (uVar3 & 0x30000000) >> 0x11;
      iVar1 = FUN_0040948c(param_1,uVar3,auStack_2028,local_28);
      if (iVar1 == 0) {
        do {
          iVar1 = send_pcm_to_playback(auStack_2028,local_28[0]);
        } while (iVar1 < 0);
      }
      param_2 = param_2 - uVar3;
      param_1 = (uint *)((int)param_1 + uVar3);
    } while (0 < param_2);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== init_raw_stream @ 00409ddc size=632

int init_raw_stream(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  printf("raw_video_init %d\n",param_1);
  if (param_1 == 2) {
    printf("release chn 0");
    FUN_004091d0(&DAT_00436bfc);
  }
  DAT_00436c04 = -1;
  DAT_00436c08 = 0xffffffff;
  DAT_00436c0c = 0xffffffff;
  DAT_00436c10 = 0xffffffff;
  DAT_00436c14 = 0;
  DAT_00436c18 = 0;
  iVar1 = rts_av_init();
  if (iVar1 != 0) {
    printf("rts_av_init fail, ret = %d\n",iVar1);
    return iVar1;
  }
  local_24 = 3;
  local_20 = param_1;
  iVar1 = rts_av_create_isp_chn(&local_24);
  if (iVar1 < 0) {
    iVar2 = -0x18;
    rts_log(4,"<%s, %d>fail to create isp chn, ret = %d\n","init_raw_stream",0x357,iVar1);
  }
  else {
    rts_log(1,"isp chn : %d\n",iVar1);
    local_38 = 1;
    local_34 = 0x140;
    local_2c = 1;
    local_30 = 0xc0;
    local_28 = 0x14;
    iVar2 = rts_av_set_profile(iVar1,&local_38);
    if (iVar2 == 0) {
      DAT_00436c08 = 0xffffffff;
      DAT_00436c0c = 0xffffffff;
      DAT_00436c10 = 0xffffffff;
      DAT_00436c04 = iVar1;
      iVar2 = rts_av_enable_chn(iVar1);
      if (iVar2 == 0) {
        iVar2 = rts_av_start_recv(DAT_00436c04);
        if (iVar2 == 0) {
          pthread_mutex_init(&DAT_00436c2c,0);
          return 1;
        }
        rts_av_disable_chn(DAT_00436c04);
        rts_log(4,"<%s, %d>start recv jpg fail, ret = %d\n","init_raw_stream",0x37f,iVar2);
        pthread_mutex_init(&DAT_00436c2c,0);
      }
      else {
        rts_log(4,"<%s, %d>enable jpg fail, ret = %d\n","init_raw_stream",0x379,iVar2);
      }
    }
    else {
      rts_log(4,"<%s, %d>set isp profile fail, ret = %d\n","init_raw_stream",0x365,iVar2);
    }
  }
  printf("init_raw_stream fail, ret = %d\n",iVar2);
  FUN_004091d0(&DAT_00436bfc);
  return iVar2;
}



// ==== motrk_getLastImg @ 0040c42c size=216

undefined4 motrk_getLastImg(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  FUN_0040c37c();
  if (DAT_00437790 == 0) {
    return 0;
  }
  gettimeofday(&local_10,0);
  iVar2 = (local_10 - DAT_00437790) * 1000 + (local_c - DAT_00437794) / 1000;
  uVar1 = DAT_004377ac;
  if (500 < iVar2) {
    FUN_00413f64("motrk_msqr.c","motrk_getLastImg",0x47,
                 "motrk img is too old. storetm:%ld-%ld, diff:%ld\n",DAT_00437790,DAT_00437794,iVar2
                );
    uVar1 = 0;
  }
  return uVar1;
}



// ==== wave_fifo_put @ 00411628 size=288

uint wave_fifo_put(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  pthread_mutex_lock(&DAT_0047783c);
  uVar2 = (DAT_00477838 + 0x40000) - DAT_00477834;
  uVar1 = 0x40000 - (DAT_00477834 & 0x3ffff);
  if (param_2 <= uVar2) {
    uVar2 = param_2;
  }
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  memcpy(&DAT_00437834 + (DAT_00477834 & 0x3ffff),param_1);
  memcpy(&DAT_00437834,param_1 + uVar1,uVar2 - uVar1);
  DAT_00477834 = uVar2 + DAT_00477834;
  pthread_mutex_unlock(&DAT_0047783c);
  if (param_2 <= uVar2) {
    return uVar2;
  }
  printf(&DAT_00424e6c,"wave_fifo_put",0x80);
  return uVar2;
}



// ==== try_adjust_buf @ 00412784 size=264

undefined4 try_adjust_buf(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 0) {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_00436a5c + 0x69d0) + 8);
    if (param_3 < 1) {
      return 0;
    }
  }
  else {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_00436a5c + 0x69d0) + 8);
    if (param_3 <= *param_2) {
      return 0;
    }
    if (param_3 < 1) {
      return 0;
    }
  }
  iVar1 = (*(code *)PTR_realloc_00436b30)(*param_1,param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00436a98)();
    (*(code *)PTR_error_00436b08)
              (0,*puVar2,PTR_LAB_00436a54 + 0x5040,PTR_LAB_00436a54 + 0x5110,param_3);
    return 0xffffffff;
  }
  *param_1 = iVar1;
  *param_2 = param_3;
  return 0;
}



// ==== ms_sleep @ 00414514 size=104

void ms_sleep(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== qr_handler @ 004152fc size=2200

void qr_handler(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_s0;
  uint *puVar9;
  undefined4 unaff_s1;
  uint unaff_s2;
  uint *puVar10;
  uint *unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 unaff_retaddr;
  undefined4 uVar15;
  undefined1 auStackX_0 [16];
  
  do {
    *(undefined4 *)((int)register0x00000074 + -4) = unaff_retaddr;
    *(undefined4 *)((int)register0x00000074 + -8) = unaff_s4;
    *(uint **)((int)register0x00000074 + -0xc) = unaff_s3;
    *(uint *)((int)register0x00000074 + -0x10) = unaff_s2;
    *(undefined4 *)((int)register0x00000074 + -0x14) = unaff_s1;
    *(undefined4 *)((int)register0x00000074 + -0x18) = unaff_s0;
    if (param_1[0x17] != 0) {
      unaff_s3 = param_1 + 0x18;
      unaff_s2 = *param_2;
      puVar9 = (uint *)param_1[0x18];
      while( true ) {
        if (puVar9 == (uint *)0x0) {
          unaff_s3 = (uint *)(param_2[2] + 1);
          if ((int)unaff_s3 < 2) goto LAB_00415470;
          iVar5 = 1;
          if ((int)unaff_s3 < 5) goto LAB_00415430;
          if ((int)unaff_s3 < 0x11) goto LAB_0041565c;
          iVar5 = 3;
          if ((int)unaff_s3 < 0x41) goto LAB_00415430;
          iVar5 = 4;
          goto LAB_00415430;
        }
        if (((*puVar9 == unaff_s2) && (puVar9[2] == param_2[2])) &&
           (iVar5 = memcmp(puVar9[3],param_2[3]), iVar5 == 0)) break;
        if (param_2[10] - puVar9[10] < 0xfa1) {
          unaff_s3 = puVar9 + 8;
          puVar9 = (uint *)puVar9[8];
        }
        else {
          puVar10 = (uint *)puVar9[8];
          puVar9[8] = 0;
          _zbar_image_scanner_recycle_syms(param_1,*unaff_s3);
          *unaff_s3 = (uint)puVar10;
          unaff_s2 = *param_2;
          puVar9 = puVar10;
        }
      }
      uVar1 = puVar9[0xb];
      uVar7 = param_2[10] - puVar9[10];
      puVar9[10] = param_2[10];
      if ((int)uVar1 < 0) goto LAB_0041552c;
      if (1999 < uVar7) goto LAB_00415538;
      goto LAB_004155b8;
    }
    iVar11 = param_1[0xc];
    param_2[0xb] = 0;
    iVar5 = *(int *)(iVar11 + 0xc);
LAB_00415334:
    if (iVar5 == 0) {
      uVar1 = param_2[0xb];
      goto LAB_004155d8;
    }
    uVar1 = param_2[0xb];
    param_2[8] = *(uint *)(iVar5 + 0x20);
    *(uint **)(iVar5 + 0x20) = param_2;
LAB_0041534c:
    if (uVar1 == 0) {
      *(int *)(iVar11 + 4) = *(int *)(iVar11 + 4) + 1;
    }
    else if (*(int *)(iVar11 + 0xc) == 0) {
      *(uint **)(iVar11 + 0xc) = param_2;
    }
    pthread_mutex_lock(&DAT_00486b0c);
    uVar1 = param_2[7];
    param_2[7] = uVar1 + 1;
    pthread_mutex_unlock(&DAT_00486b0c);
    if (-1 < (int)(uVar1 + 1)) {
      return;
    }
    FUN_00402630();
LAB_0041565c:
    iVar5 = 2;
LAB_00415430:
    puVar9 = (uint *)param_1[(iVar5 + 6) * 2 + 2];
    if (puVar9 == (uint *)0x0) {
      puVar4 = param_1 + (iVar5 + 5) * 2 + 2;
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) goto LAB_00415470;
        puVar9 = (uint *)*puVar4;
        puVar4 = puVar4 + -2;
      } while (puVar9 == (uint *)0x0);
    }
    uVar1 = puVar9[8];
    iVar8 = param_1[iVar5 + 0x22] + 1;
    param_1[iVar5 + 0x22] = iVar8;
    iVar11 = param_1[iVar5 * 2 + 0xd];
    param_1[iVar5 * 2 + 0xe] = uVar1;
    puVar9[8] = 0;
    if (iVar11 != 0) {
      param_1[iVar5 * 2 + 0xd] = iVar11 + -1;
      goto LAB_0041548c;
    }
    uVar15 = 0x41568c;
    FUN_00402658();
    *(undefined4 *)((int)register0x00000074 + -0x34) = uVar15;
    *(undefined4 *)((int)register0x00000074 + -0x38) = unaff_s6;
    *(undefined4 *)((int)register0x00000074 + -0x3c) = unaff_s5;
    *(undefined4 **)((int)register0x00000074 + -0x40) = param_1;
    *(uint **)((int)register0x00000074 + -0x44) = unaff_s3;
    *(uint *)((int)register0x00000074 + -0x48) = unaff_s2;
    *(uint **)((int)register0x00000074 + -0x4c) = param_2;
    *(uint **)((int)register0x00000074 + -0x50) = puVar9;
    param_1 = (undefined4 *)FUN_00416edc();
    uVar1 = FUN_00416ee4(iVar8);
    if (uVar1 < 2) {
      return;
    }
    if (uVar1 == 0x40) {
      puVar4 = (undefined4 *)FUN_00417094(param_1[1]);
      if (puVar4 != (undefined4 *)0x0) {
        iVar5 = FUN_004168ac(*param_1,*puVar4,2);
        iVar11 = FUN_004168ac(*param_1,puVar4[3],2);
        uVar15 = *param_1;
        puVar4[3] = iVar5 - iVar11;
        uVar15 = FUN_004168ac(uVar15,puVar4[2],2);
        uVar3 = *param_1;
        puVar4[2] = uVar15;
        iVar11 = FUN_004168ac(uVar3,puVar4[4],2);
        iVar14 = param_1[9];
        iVar2 = param_1[10];
        iVar11 = iVar11 - puVar4[2];
        iVar8 = puVar4[2] - iVar5;
        puVar4[4] = iVar11;
        puVar4[2] = iVar8;
        iVar5 = iVar5 * iVar14 + iVar2 * 4;
        if (iVar14 < 0) {
          uVar15 = puVar4[3];
          iVar5 = iVar5 - iVar8;
          puVar4[3] = iVar11;
          puVar4[4] = uVar15;
        }
        iVar11 = param_1[0xb];
        uVar1 = (uint)(param_1[7] == 0);
        uVar15 = param_1[2];
        puVar4[uVar1] = iVar5;
        puVar4[uVar1 ^ 1] = iVar11 * 4 + 2;
        FUN_0041dac8(uVar15,uVar1,puVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __assert(&DAT_00425674,"zbar/img_scanner.c",0x16a,"qr_handler");
    }
    uVar15 = FUN_00416eb8(iVar8);
    uVar7 = FUN_00416ec0(iVar8);
    if ((param_1[0x19] & 1) == 0) {
      iVar11 = 0;
      iVar5 = 0;
    }
    else {
      uVar3 = FUN_004168a4(*param_1);
      iVar8 = param_1[9];
      iVar5 = param_1[10];
      iVar11 = FUN_004168ac(*param_1,uVar3,0);
      iVar5 = iVar11 * iVar8 + iVar5;
      if (param_1[7] == 0) {
        iVar11 = param_1[0xb];
      }
      else {
        iVar11 = iVar5;
        iVar5 = param_1[0xb];
      }
    }
    for (puVar9 = *(uint **)(param_1[0xc] + 8); puVar9 != (uint *)0x0; puVar9 = (uint *)puVar9[8]) {
      if (((*puVar9 == uVar1) && (puVar9[2] == uVar7)) &&
         (iVar8 = memcmp(puVar9[3],uVar15,uVar7), iVar8 == 0)) {
        uVar1 = param_1[0x19];
        puVar9[0xc] = puVar9[0xc] + 1;
        if ((uVar1 & 1) != 0) {
          uVar7 = puVar9[5];
          uVar1 = uVar7 + 1;
          puVar9[5] = uVar1;
          if (uVar1 < puVar9[4]) {
            uVar1 = puVar9[6];
          }
          else {
            uVar1 = puVar9[4] + 1;
            puVar9[4] = uVar1;
            uVar1 = realloc(puVar9[6],uVar1 * 8);
            puVar9[6] = uVar1;
          }
          piVar13 = (int *)(uVar1 + uVar7 * 8);
          *piVar13 = iVar11;
          piVar13[1] = iVar5;
        }
        return;
      }
    }
    uVar6 = uVar7 + 1;
    if ((int)uVar6 < 2) {
LAB_00415834:
      param_2 = (uint *)calloc(1,0x34);
      param_1[0x21] = param_1[0x21] + 1;
    }
    else {
      iVar8 = 1;
      if (4 < (int)uVar6) {
        if ((int)uVar6 < 0x11) {
          iVar8 = 2;
        }
        else {
          iVar8 = 3;
          if (0x40 < (int)uVar6) {
            iVar8 = 4;
          }
        }
      }
      param_2 = (uint *)param_1[(iVar8 + 6) * 2 + 2];
      if (param_2 == (uint *)0x0) {
        puVar4 = param_1 + (iVar8 + 5) * 2 + 2;
        do {
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) goto LAB_00415834;
          param_2 = (uint *)*puVar4;
          iVar2 = iVar8 * 4;
          puVar4 = puVar4 + -2;
        } while (param_2 == (uint *)0x0);
      }
      else {
        iVar2 = iVar8 << 2;
      }
      uVar12 = param_2[8];
      *(int *)((int)param_1 + iVar2 + 0x88) = *(int *)((int)param_1 + iVar2 + 0x88) + 1;
      iVar2 = param_1[iVar8 * 2 + 0xd];
      param_1[iVar8 * 2 + 0xe] = uVar12;
      param_2[8] = 0;
      if (iVar2 == 0) {
        FUN_00402658();
        goto LAB_00415b74;
      }
      param_1[iVar8 * 2 + 0xd] = iVar2 + -1;
    }
    uVar12 = param_1[5];
    *param_2 = uVar1;
    param_2[0xc] = 1;
    param_2[5] = 0;
    param_2[0xb] = 0;
    param_2[10] = uVar12;
    if (param_2[9] != 0) {
LAB_00415b74:
                    /* WARNING: Subroutine does not return */
      __assert("!sym->syms","zbar/img_scanner.c",0xfb,"_zbar_image_scanner_alloc_sym");
    }
    if ((int)uVar6 < 1) {
      if (param_2[3] != 0) {
        free();
      }
      param_2[3] = 0;
      uVar1 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    else {
      param_2[2] = uVar7;
      uVar1 = param_2[3];
      if (param_2[1] < uVar6) {
        if (uVar1 != 0) {
          free();
        }
        param_2[1] = uVar6;
        uVar1 = malloc(uVar6);
        param_2[3] = uVar1;
      }
    }
    memcpy(uVar1,uVar15,uVar6);
    if ((param_1[0x19] & 1) == 0) {
      unaff_retaddr = *(undefined4 *)((int)register0x00000074 + -0x34);
      unaff_s6 = *(undefined4 *)((int)register0x00000074 + -0x38);
      unaff_s5 = *(undefined4 *)((int)register0x00000074 + -0x3c);
      unaff_s4 = *(undefined4 *)((int)register0x00000074 + -0x40);
      unaff_s3 = *(uint **)((int)register0x00000074 + -0x44);
      unaff_s2 = *(uint *)((int)register0x00000074 + -0x48);
      unaff_s1 = *(undefined4 *)((int)register0x00000074 + -0x4c);
      unaff_s0 = *(undefined4 *)((int)register0x00000074 + -0x50);
      register0x00000074 = (BADSPACEBASE *)((int)register0x00000074 + -0x30);
    }
    else {
      uVar1 = param_2[5];
      uVar7 = uVar1 + 1;
      param_2[5] = uVar7;
      if (uVar7 < param_2[4]) {
        uVar7 = param_2[6];
      }
      else {
        uVar7 = param_2[4] + 1;
        param_2[4] = uVar7;
        uVar7 = realloc(param_2[6],uVar7 * 8);
        param_2[6] = uVar7;
      }
      unaff_retaddr = *(undefined4 *)((int)register0x00000074 + -0x34);
      piVar13 = (int *)(uVar7 + uVar1 * 8);
      *piVar13 = iVar11;
      piVar13[1] = iVar5;
      unaff_s6 = *(undefined4 *)((int)register0x00000074 + -0x38);
      unaff_s5 = *(undefined4 *)((int)register0x00000074 + -0x3c);
      unaff_s4 = *(undefined4 *)((int)register0x00000074 + -0x40);
      unaff_s3 = *(uint **)((int)register0x00000074 + -0x44);
      unaff_s2 = *(uint *)((int)register0x00000074 + -0x48);
      unaff_s1 = *(undefined4 *)((int)register0x00000074 + -0x4c);
      unaff_s0 = *(undefined4 *)((int)register0x00000074 + -0x50);
      register0x00000074 = (BADSPACEBASE *)((int)register0x00000074 + -0x30);
    }
  } while( true );
LAB_00415470:
  puVar9 = (uint *)calloc(1,0x34);
  param_1[0x21] = param_1[0x21] + 1;
LAB_0041548c:
  uVar1 = param_1[5];
  *puVar9 = unaff_s2;
  puVar9[0xc] = 1;
  puVar9[5] = 0;
  puVar9[0xb] = 0;
  puVar9[10] = uVar1;
  if (puVar9[9] != 0) {
                    /* WARNING: Subroutine does not return */
    __assert("!sym->syms","zbar/img_scanner.c",0xfb,"_zbar_image_scanner_alloc_sym");
  }
  if ((int)unaff_s3 < 1) {
    if (puVar9[3] != 0) {
      free();
    }
    puVar9[3] = 0;
    uVar1 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
  }
  else {
    puVar9[2] = (int)unaff_s3 - 1;
    uVar1 = puVar9[3];
    if ((uint *)puVar9[1] < unaff_s3) {
      if (uVar1 != 0) {
        free();
      }
      puVar9[1] = (uint)unaff_s3;
      uVar1 = malloc(unaff_s3);
      puVar9[3] = uVar1;
    }
  }
  memcpy(uVar1,param_2[3],param_2[2]);
  uVar12 = param_2[10];
  uVar1 = 0xfffffffd;
  uVar7 = param_1[0x18];
  puVar9[10] = uVar12 - 2000;
  uVar6 = param_2[10];
  puVar9[0xb] = 0xfffffffd;
  puVar9[8] = uVar7;
  uVar7 = uVar6 - (uVar12 - 2000);
  param_1[0x18] = puVar9;
  puVar9[10] = uVar6;
LAB_0041552c:
  if (uVar7 < 1000) {
LAB_004155b8:
    uVar1 = uVar1 + 1;
    puVar9[0xb] = uVar1;
    iVar11 = param_1[0xc];
    param_2[0xb] = uVar1;
    if (uVar1 == 0) goto code_r0x004155cc;
  }
  else {
LAB_00415538:
    uVar1 = 0xfffffffd;
    puVar9[0xb] = 0xfffffffd;
    iVar11 = param_1[0xc];
    param_2[0xb] = 0xfffffffd;
  }
LAB_004155d8:
  param_2[8] = *(uint *)(iVar11 + 8);
  *(uint **)(iVar11 + 8) = param_2;
  goto LAB_0041534c;
code_r0x004155cc:
  iVar5 = *(int *)(iVar11 + 0xc);
  goto LAB_00415334;
}



// ==== dump_stats @ 00415b94 size=508

void dump_stats(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((0 < DAT_00477890) &&
      (fprintf(stderr,"%s: symbol sets allocated   = %-4d\n","dump_stats",param_1[0x1c]),
      0 < DAT_00477890)) &&
     (fprintf(stderr,"%s:     scanner syms in use = %-4d\trecycled  = %-4d\n","dump_stats",
              param_1[0x1d],param_1[0x1e]), 0 < DAT_00477890)) {
    iVar3 = param_1[0x20];
    fprintf(stderr,"%s:     image syms in use   = %-4d\trecycled  = %-4d\n","dump_stats",
            param_1[0x1f],iVar3);
    if (0 < DAT_00477890) {
      fprintf(stderr,"%s: symbols allocated       = %-4d\n","dump_stats",param_1[0x21],iVar3);
    }
  }
  iVar3 = 0;
  piVar1 = param_1;
  do {
    if (0 < DAT_00477890) {
      fprintf(stderr,"%s:      recycled[%d]        = %-4d\n","dump_stats",iVar3,piVar1[0x22]);
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 != 5);
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      FUN_00414a74();
      param_1[0xc] = 0;
    }
    else {
      FUN_0041490c(piVar1,0xffffffff);
      param_1[0xc] = 0;
    }
  }
  if (*param_1 != 0) {
    free();
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
    FUN_00416e14();
  }
  param_1[1] = 0;
  iVar3 = 0;
  piVar1 = param_1;
  do {
    iVar2 = piVar1[0xe];
    while (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x20);
      FUN_00414a04();
    }
    iVar3 = iVar3 + 8;
    piVar1 = (int *)((int)param_1 + iVar3);
  } while (iVar3 != 0x28);
  if (param_1[2] != 0) {
    _zbar_qr_destroy();
    param_1[2] = 0;
  }
  free(param_1);
  return;
}



// ==== qr_code_data_list_extract_text @ 0041e2cc size=2812

/* WARNING: Removing unreachable block (ram,0x0041e93c) */

undefined4 qr_code_data_list_extract_text(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  int **ppiVar8;
  char cVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int local_f0 [20];
  int local_a0;
  int local_9c;
  int local_98;
  int *local_88 [2];
  int *local_80;
  int **local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  undefined4 local_64;
  int local_60;
  int local_58;
  int local_54;
  char *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int **local_40;
  char *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  local_44 = param_1[1];
  local_60 = *param_1;
  local_3c = (char *)calloc(local_44,1);
  local_58 = iconv_open("UTF-8","ISO8859-1");
  local_70 = iconv_open("UTF-8",&DAT_00425b78);
  local_48 = iconv_open("UTF-8","UTF-8");
  if (local_44 < 1) {
LAB_0041e518:
    if (local_48 != -1) {
      iconv_close(local_48);
    }
    if (local_70 != -1) {
      iconv_close(local_70);
    }
    if (local_58 != -1) {
      iconv_close(local_58);
    }
    free(local_3c);
    return 0;
  }
  local_50 = local_3c;
  local_4c = local_60;
  local_54 = 0;
LAB_0041e384:
  if (*local_50 == '\0') {
    piVar10 = (int *)(uint)*(byte *)(local_4c + 0xb);
    if (piVar10 == (int *)0x0) {
      local_f0[0] = local_54;
      local_6c = (int *)&_DYNAMIC_LINKING;
      local_68 = local_f0;
    }
    else {
      piVar17 = local_f0;
      cVar1 = *(char *)(local_4c + 0xc);
      piVar22 = piVar17 + (int)piVar10;
      local_68 = piVar17;
      local_6c = piVar10;
      do {
        *piVar17 = -1;
        piVar17 = piVar17 + 1;
      } while (piVar17 != piVar22);
      cVar9 = '\0';
      pcVar2 = local_50;
      iVar7 = local_4c;
      iVar14 = local_54;
      while( true ) {
        if ((((cVar9 == '\0') && ((int *)(uint)*(byte *)(iVar7 + 0xb) == piVar10)) &&
            (*(char *)(iVar7 + 0xc) == cVar1)) && (local_68[*(byte *)(iVar7 + 10)] < 0)) {
          local_68[*(byte *)(iVar7 + 10)] = iVar14;
          *pcVar2 = '\x01';
        }
        if (local_44 <= iVar14 + 1) break;
        iVar14 = iVar14 + 1;
        iVar7 = iVar7 + 0x30;
        pcVar2 = pcVar2 + 1;
        cVar9 = *pcVar2;
      }
    }
    piVar10 = local_f0;
    iVar14 = 0;
    local_64 = 0;
    iVar19 = 0;
    local_64 = 0;
    iVar7 = local_f0[0];
    do {
      piVar10 = piVar10 + 1;
      if (-1 < iVar7) {
        piVar22 = (int *)(local_60 + iVar7 * 0x30);
        iVar7 = piVar22[1];
        if (0 < iVar7) {
          puVar3 = (uint *)*piVar22;
          puVar11 = puVar3 + iVar7 * 3;
          do {
            uVar23 = *puVar3;
            if (uVar23 == 5) {
LAB_0041e6ac:
              local_64 = 1;
            }
            else {
              if (uVar23 < 6) {
                iVar7 = 1;
                if (uVar23 != 4) goto LAB_0041e664;
              }
              else {
                iVar7 = 2;
                if (uVar23 != 8) {
                  if (uVar23 == 9) goto LAB_0041e6ac;
LAB_0041e664:
                  iVar7 = 0;
                }
              }
              if ((uVar23 - 1 & uVar23) == 0) {
                iVar19 = iVar19 + (puVar3[2] << iVar7);
              }
            }
            puVar3 = puVar3 + 3;
          } while (puVar3 != puVar11);
        }
      }
      iVar14 = iVar14 + 1;
      uVar23 = 0;
      if ((int)local_6c <= iVar14) goto LAB_0041e6c4;
      iVar7 = *piVar10;
    } while( true );
  }
  goto LAB_0041e4ec;
LAB_0041e6c4:
  local_40 = (int **)(iVar19 + 1);
  local_7c = local_88;
  iVar7 = malloc(local_40);
  local_a0 = local_70;
  local_9c = local_58;
  local_80 = (int *)0x0;
  local_74 = -1;
  local_98 = local_48;
  local_88[0] = (int *)0x0;
  local_78 = 0xffffffff;
LAB_0041e718:
  piVar10 = (int *)FUN_00415128(param_2,0x40,0);
  puVar3 = (uint *)(local_68 + (int)local_80);
  *local_7c = piVar10;
  piVar10[2] = uVar23;
  uVar16 = *puVar3;
  if ((int)*puVar3 < 0) {
    piVar22 = (int *)((int)local_80 + 1);
    *piVar10 = 1;
    if ((int)local_6c <= (int)piVar22) {
LAB_0041e470:
      uVar16 = 0;
LAB_0041e478:
      if (local_74 != -1) {
        local_38 = uVar16;
        iconv_close(local_74);
        uVar16 = local_38;
      }
      if (uVar16 == 0) {
        local_7c = (int **)(uVar23 + 1);
        *(undefined1 *)(iVar7 + uVar23) = 0;
        if (local_7c < local_40) {
          iVar7 = realloc(iVar7,local_7c);
        }
        if (local_6c == (int *)&_DYNAMIC_LINKING) {
          local_80 = local_88[0];
        }
        else {
          local_80 = (int *)FUN_00415128(param_2,0x40,0);
          iVar5 = FUN_004148a8();
          piVar10 = local_80;
          iVar19 = *(int *)(param_3 + 4);
          local_80[9] = iVar5;
          iVar14 = *(int *)(param_3 + 8);
          *(int **)(iVar5 + 8) = local_88[0];
          if (local_88[0] != (int *)0x0) {
            iVar21 = -2;
            iVar5 = -2;
            local_78 = uVar23;
            do {
              piVar22 = local_88[0];
              pthread_mutex_lock(&DAT_00486b0c);
              iVar18 = piVar22[7] + 1;
              piVar22[7] = iVar18;
              pthread_mutex_unlock(&DAT_00486b0c);
              uVar23 = local_78;
              if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                __assert("rc >= 0","./zbar/refcnt.h",0x3e,"_zbar_refcnt");
              }
              if (*local_88[0] == 1) {
                ppiVar6 = (int **)local_88[0][2];
                piVar22 = (int *)local_88[0][8];
                *piVar10 = 1;
                local_88[0][3] = iVar7 + (int)ppiVar6;
                if (piVar22 == (int *)0x0) goto LAB_0041f004;
LAB_0041efc0:
                ppiVar8 = (int **)piVar22[2];
                if (ppiVar8 <= ppiVar6) {
LAB_0041f018:
                    /* WARNING: Subroutine does not return */
                  __assert("next > syms->datalen","zbar/qrcode/qrdectxt.c",0x170,
                           "qr_code_data_list_extract_text");
                }
              }
              else {
                iVar18 = 0;
                if (local_88[0][5] != 0) {
                  do {
                    iVar25 = iVar18 * 8;
                    iVar18 = iVar18 + 1;
                    piVar22 = (int *)(local_88[0][6] + iVar25);
                    iVar25 = *piVar22;
                    iVar26 = piVar22[1];
                    if (iVar25 <= iVar19) {
                      iVar19 = iVar25 + -1;
                    }
                    if (iVar5 <= iVar25) {
                      iVar5 = iVar25 + 1;
                    }
                    if (iVar26 <= iVar14) {
                      iVar14 = iVar26 + -1;
                    }
                    if (iVar21 <= iVar26) {
                      iVar21 = iVar26 + 1;
                    }
                  } while (iVar18 != local_88[0][5]);
                }
                ppiVar6 = (int **)local_88[0][2];
                piVar22 = (int *)local_88[0][8];
                local_88[0][3] = iVar7 + (int)ppiVar6;
                if (piVar22 != (int *)0x0) goto LAB_0041efc0;
LAB_0041f004:
                ppiVar8 = local_7c;
                if (local_7c <= ppiVar6) goto LAB_0041f018;
              }
              local_88[0][2] = ~(uint)ppiVar6 + (int)ppiVar8;
              local_88[0] = piVar22;
            } while (piVar22 != (int *)0x0);
            if (-2 < iVar5) {
              iVar18 = local_80[5];
              uVar13 = local_80[4];
              uVar16 = iVar18 + 1;
              local_80[5] = uVar16;
              if (uVar16 < uVar13) {
                iVar25 = local_80[6];
              }
              else {
                local_80[4] = uVar13 + 1;
                iVar25 = realloc(local_80[6],(uVar13 + 1) * 8);
                uVar16 = local_80[5];
                uVar13 = local_80[4];
                local_80[6] = iVar25;
              }
              uVar15 = uVar16 + 1;
              piVar10 = (int *)(iVar25 + iVar18 * 8);
              *piVar10 = iVar19;
              piVar10[1] = iVar14;
              local_80[5] = uVar15;
              if (uVar13 <= uVar15) {
                local_80[4] = uVar13 + 1;
                local_38 = uVar16;
                iVar25 = realloc(iVar25,(uVar13 + 1) * 8);
                uVar15 = local_80[5];
                uVar13 = local_80[4];
                local_80[6] = iVar25;
                uVar16 = local_38;
              }
              uVar20 = uVar15 + 1;
              piVar10 = (int *)(iVar25 + uVar16 * 8);
              *piVar10 = iVar19;
              piVar10[1] = iVar21;
              local_80[5] = uVar20;
              if (uVar13 <= uVar20) {
                local_80[4] = uVar13 + 1;
                local_30 = uVar15;
                iVar25 = realloc(iVar25,(uVar13 + 1) * 8);
                uVar20 = local_80[5];
                uVar13 = local_80[4];
                local_80[6] = iVar25;
                uVar15 = local_30;
              }
              piVar10 = (int *)(iVar25 + uVar15 * 8);
              *piVar10 = iVar5;
              piVar10[1] = iVar21;
              local_80[5] = uVar20 + 1;
              if (uVar13 <= uVar20 + 1) {
                local_80[4] = uVar13 + 1;
                iVar25 = realloc(iVar25,(uVar13 + 1) * 8);
                local_80[6] = iVar25;
              }
              piVar10 = (int *)(iVar25 + uVar20 * 8);
              *piVar10 = iVar5;
              piVar10[1] = iVar14;
            }
          }
        }
        local_80[3] = iVar7;
        local_80[1] = (int)local_7c;
        local_80[2] = uVar23;
        qr_handler(param_2,local_80);
LAB_0041e4ec:
        local_54 = local_54 + 1;
        local_50 = local_50 + 1;
        local_4c = local_4c + 0x30;
        if (local_54 == local_44) goto LAB_0041e518;
        goto LAB_0041e384;
      }
      _zbar_image_scanner_recycle_syms(param_2,local_88[0]);
      free(iVar7);
      local_54 = local_54 + 1;
      local_50 = local_50 + 1;
      local_4c = local_4c + 0x30;
      if (local_54 == local_44) goto LAB_0041e518;
      goto LAB_0041e384;
    }
    uVar16 = local_68[(int)piVar22];
    if ((int)uVar16 < 0) {
      puVar3 = (uint *)(local_68 + (int)((int)local_80 + 2));
      do {
        piVar22 = (int *)((int)piVar22 + 1);
        if (piVar22 == local_6c) goto LAB_0041e470;
        uVar16 = *puVar3;
        puVar3 = puVar3 + 1;
      } while ((int)uVar16 < 0);
    }
    *(undefined1 *)(iVar7 + uVar23) = 0;
    local_38 = uVar23 + 1;
    piVar17 = *local_7c;
    piVar17[2] = local_38;
    local_7c = (int **)(piVar17 + 8);
    local_30 = uVar16;
    piVar10 = (int *)FUN_00415128(param_2,0x40,0);
    piVar17[8] = (int)piVar10;
    uVar16 = local_30;
    uVar23 = local_38;
    local_80 = piVar22;
  }
  uVar15 = piVar10[5];
  uVar24 = piVar10[4];
  uVar13 = uVar15 + 1;
  piVar22 = (int *)(local_60 + uVar16 * 0x30);
  uVar16 = piVar22[4];
  uVar20 = piVar22[5];
  piVar10[5] = uVar13;
  if (uVar13 < uVar24) {
    iVar19 = piVar10[6];
    iVar14 = iVar19;
  }
  else {
    piVar10[4] = uVar24 + 1;
    local_38 = uVar16;
    local_34 = uVar15;
    iVar14 = realloc(piVar10[6],(uVar24 + 1) * 8);
    piVar10[6] = iVar14;
    piVar10 = *local_7c;
    uVar13 = piVar10[5];
    uVar24 = piVar10[4];
    iVar19 = piVar10[6];
    uVar15 = local_34;
    uVar16 = local_38;
  }
  uVar12 = uVar13 + 1;
  puVar3 = (uint *)(iVar14 + uVar15 * 8);
  puVar3[1] = uVar20;
  *puVar3 = uVar16;
  uVar16 = piVar22[8];
  uVar15 = piVar22[9];
  piVar10[5] = uVar12;
  iVar14 = iVar19;
  if (uVar24 <= uVar12) {
    piVar10[4] = uVar24 + 1;
    local_38 = uVar16;
    local_34 = uVar13;
    iVar19 = realloc(iVar19,(uVar24 + 1) * 8);
    piVar10[6] = iVar19;
    piVar10 = *local_7c;
    uVar12 = piVar10[5];
    uVar24 = piVar10[4];
    iVar14 = piVar10[6];
    uVar13 = local_34;
    uVar16 = local_38;
  }
  uVar20 = uVar12 + 1;
  puVar3 = (uint *)(iVar19 + uVar13 * 8);
  puVar3[1] = uVar15;
  *puVar3 = uVar16;
  uVar16 = piVar22[10];
  uVar13 = piVar22[0xb];
  piVar10[5] = uVar20;
  iVar19 = iVar14;
  if (uVar24 <= uVar20) {
    piVar10[4] = uVar24 + 1;
    local_38 = uVar12;
    local_34 = uVar16;
    iVar19 = realloc(iVar14,(uVar24 + 1) * 8);
    piVar10[6] = iVar19;
    piVar10 = *local_7c;
    uVar20 = piVar10[5];
    uVar24 = piVar10[4];
    iVar14 = piVar10[6];
    uVar12 = local_38;
    uVar16 = local_34;
  }
  puVar3 = (uint *)(iVar19 + uVar12 * 8);
  *puVar3 = uVar16;
  puVar3[1] = uVar13;
  uVar16 = piVar22[6];
  uVar13 = piVar22[7];
  piVar10[5] = uVar20 + 1;
  if (uVar24 <= uVar20 + 1) {
    piVar10[4] = uVar24 + 1;
    local_34 = uVar16;
    local_30 = uVar20;
    iVar14 = realloc(iVar14,(uVar24 + 1) * 8);
    piVar10[6] = iVar14;
    uVar20 = local_30;
    uVar16 = local_34;
  }
  iVar19 = piVar22[1];
  puVar3 = (uint *)(iVar14 + uVar20 * 8);
  *puVar3 = uVar16;
  puVar3[1] = uVar13;
  if (0 < iVar19) {
    iVar14 = 1;
    uVar16 = *(uint *)*piVar22;
    while( true ) {
      if (uVar16 < 9) {
                    /* WARNING: Could not recover jumptable at 0x0041e888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(&DAT_00425be0 + uVar16 * 4))();
        return uVar4;
      }
      if (iVar19 <= iVar14) break;
      iVar14 = iVar14 + 1;
      uVar16 = *(uint *)(*piVar22 + iVar14 * 0xc + -0xc);
    }
  }
  uVar16 = 0;
  if ((int)local_78 < 2) {
    if (local_74 == -1) {
      local_78 = 0xffffffff;
    }
    else {
      local_38 = 0;
      iconv_close(local_74);
      local_78 = 0xffffffff;
      uVar16 = local_38;
    }
  }
  local_80 = (int *)((int)local_80 + 1);
  local_7c = (int **)(*local_7c + 8);
  if (((int)local_6c <= (int)local_80) || (uVar16 != 0)) goto LAB_0041e478;
  goto LAB_0041e718;
}



// ==== __PLT_HEAD @ 00425e20 size=32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __PLT_HEAD(void)

{
  (*___DT_MIPS_PLTGOT)();
  (*(code *)PTR_pthread_detach_00436730)();
  return;
}



// ==== printf @ 00425e50 size=16

void printf(void)

{
  (*(code *)PTR_printf_00436734)();
  return;
}



// ==== exit @ 00425e90 size=16

void exit(void)

{
  (*(code *)PTR_exit_00436744)();
  return;
}



// ==== realloc @ 00425ea0 size=16

void realloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_realloc_00436748)();
  return;
}



// ==== memmove @ 00425eb0 size=4

void memmove(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memmove_0043674c)();
  return;
}



// ==== strstr @ 00425ed0 size=4

void strstr(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strstr_00436754)();
  return;
}



// ==== clock_gettime @ 00425ee0 size=16

void clock_gettime(void)

{
  (*(code *)PTR_clock_gettime_00436758)();
  return;
}



// ==== fread @ 00425ef0 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fread_0043675c)();
  return;
}



// ==== close @ 00425f00 size=16

void close(void)

{
  (*(code *)PTR_close_00436760)();
  return;
}



// ==== strchr @ 00425f30 size=4

void strchr(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strchr_0043676c)();
  return;
}



// ==== calloc @ 00425f40 size=16

void calloc(void)

{
  (*(code *)PTR_calloc_00436770)();
  return;
}



// ==== strncmp @ 00425f60 size=16

void strncmp(void)

{
  (*(code *)PTR_strncmp_00436778)();
  return;
}



// ==== strrchr @ 00425f70 size=4

void strrchr(void)

{
                    /* WARNING: Could not recover jumptable at 0x00425f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strrchr_0043677c)();
  return;
}



// ==== strerror @ 00425fa0 size=16

void strerror(void)

{
  (*(code *)PTR_strerror_00436788)();
  return;
}



// ==== free @ 00425fb0 size=16

void free(void)

{
  (*(code *)PTR_free_0043678c)();
  return;
}



// ==== mmap @ 00426020 size=4

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042602c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mmap_004367a8)();
  return;
}



// ==== fprintf @ 00426030 size=16

void fprintf(void)

{
  (*(code *)PTR_fprintf_004367ac)();
  return;
}



// ==== memcpy @ 00426050 size=16

void memcpy(void)

{
  (*(code *)PTR_memcpy_004367b4)();
  return;
}



// ==== usleep @ 00426080 size=4

void usleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042608c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_usleep_004367c0)();
  return;
}



// ==== pclose @ 004260a0 size=16

void pclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x004260ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pclose_004367c8)();
  return;
}



// ==== localtime @ 004260d0 size=4

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x004260dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_localtime_004367d4)();
  return;
}



// ==== qsort @ 004260e0 size=16

void qsort(void)

{
  (*(code *)PTR_qsort_004367d8)();
  return;
}



// ==== prctl @ 004260f0 size=4

void prctl(void)

{
                    /* WARNING: Could not recover jumptable at 0x004260fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_prctl_004367dc)();
  return;
}



// ==== fileno @ 00426110 size=16

void fileno(void)

{
  (*(code *)PTR_fileno_004367e4)();
  return;
}



// ==== putchar @ 00426120 size=4

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042612c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_putchar_004367e8)();
  return;
}



// ==== memset @ 00426130 size=16

void memset(void)

{
  (*(code *)PTR_memset_004367ec)();
  return;
}



// ==== __assert @ 00426150 size=16

void __assert(void)

{
  (*(code *)PTR___assert_004367f4)();
  return;
}



// ==== popen @ 00426180 size=4

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_popen_00436800)();
  return;
}



// ==== sin @ 004261e0 size=4

void sin(void)

{
                    /* WARNING: Could not recover jumptable at 0x004261ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sin_00436818)();
  return;
}



// ==== system @ 00426210 size=4

void system(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042621c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_00436824)();
  return;
}



// ==== sendto @ 00426220 size=16

void sendto(void)

{
  (*(code *)PTR_sendto_00436828)();
  return;
}



// ==== iconv_close @ 00426280 size=16

void iconv_close(void)

{
  (*(code *)PTR_iconv_close_00436840)();
  return;
}



// ==== atoi @ 004262b0 size=16

void atoi(void)

{
  (*(code *)PTR_atoi_0043684c)();
  return;
}



// ==== iconv_open @ 004262d0 size=16

void iconv_open(void)

{
  (*(code *)PTR_iconv_open_00436854)();
  return;
}



// ==== fwrite @ 004262f0 size=16

void fwrite(void)

{
  (*(code *)PTR_fwrite_0043685c)();
  return;
}



// ==== puts @ 00426310 size=16

void puts(void)

{
  (*(code *)PTR_puts_00436864)();
  return;
}



// ==== vsnprintf @ 00426320 size=4

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042632c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_vsnprintf_00436868)();
  return;
}



// ==== fopen @ 00426330 size=16

void fopen(void)

{
  (*(code *)PTR_fopen_0043686c)();
  return;
}



// ==== snprintf @ 00426380 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042638c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_snprintf_00436880)();
  return;
}



// ==== access @ 00426390 size=16

void access(void)

{
  (*(code *)PTR_access_00436884)();
  return;
}



// ==== getpid @ 004263c0 size=16

void getpid(void)

{
  (*(code *)PTR_getpid_00436890)();
  return;
}



// ==== vfprintf @ 00426410 size=4

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_vfprintf_004368a4)();
  return;
}



// ==== socket @ 00426420 size=16

void socket(void)

{
  (*(code *)PTR_socket_004368a8)();
  return;
}



// ==== cos @ 00426430 size=4

void cos(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042643c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_cos_004368ac)();
  return;
}



// ==== gettimeofday @ 00426450 size=4

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042645c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gettimeofday_004368b4)();
  return;
}



// ==== time @ 00426470 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042647c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_time_004368bc)();
  return;
}



// ==== fseek @ 00426480 size=16

void fseek(void)

{
  (*(code *)PTR_fseek_004368c0)();
  return;
}



// ==== memcmp @ 00426490 size=4

void memcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042649c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcmp_004368c4)();
  return;
}



// ==== fclose @ 004264a0 size=16

void fclose(void)

{
  (*(code *)PTR_fclose_004368c8)();
  return;
}



// ==== ioctl @ 004264e0 size=16

void ioctl(void)

{
  (*(code *)PTR_ioctl_004368d8)();
  return;
}



// ==== syscall @ 004264f0 size=4

void syscall(void)

{
                    /* WARNING: Could not recover jumptable at 0x004264fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_syscall_004368dc)();
  return;
}



// ==== log10 @ 00426510 size=4

void log10(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042651c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_log10_004368e4)();
  return;
}



// ==== sqrt @ 00426520 size=16

void sqrt(void)

{
  (*(code *)PTR_sqrt_004368e8)();
  return;
}



// ==== open @ 00426540 size=4

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042654c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_004368f0)();
  return;
}



// ==== sprintf @ 00426550 size=16

void sprintf(void)

{
  (*(code *)PTR_sprintf_004368f4)();
  return;
}



// ==== sleep @ 00426560 size=4

void sleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042656c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sleep_004368f8)();
  return;
}



// ==== signal @ 00426570 size=20

void signal(void)

{
  (*(code *)PTR_signal_004368fc)();
  return;
}



// ==== select @ 00426590 size=16

void select(void)

{
  (*(code *)PTR_select_00436904)();
  return;
}



// ==== strlen @ 004265a0 size=4

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004265ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strlen_00436908)();
  return;
}



// ==== nice @ 00426600 size=16

void nice(void)

{
  (*(code *)PTR_nice_00436920)();
  return;
}



// ==== rename @ 00426650 size=16

void rename(void)

{
  (*(code *)PTR_rename_00436934)();
  return;
}



// ==== floor @ 004266a0 size=4

void floor(void)

{
                    /* WARNING: Could not recover jumptable at 0x004266ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00436948)();
  return;
}



// ==== __errno_location @ 004266b0 size=16

void __errno_location(void)

{
  (*(code *)PTR___errno_location_0043694c)();
  return;
}



// ==== malloc @ 004266c0 size=16

void malloc(void)

{
  (*(code *)PTR_malloc_00436950)();
  return;
}



// ==== strcmp @ 004266d0 size=4

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x004266dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00436954)();
  return;
}



// ==== ftell @ 004266f0 size=4

void ftell(void)

{
                    /* WARNING: Could not recover jumptable at 0x004266fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0043695c)();
  return;
}



