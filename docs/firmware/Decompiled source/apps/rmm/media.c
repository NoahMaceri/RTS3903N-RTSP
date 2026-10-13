/* rmm — "media" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== media_ai_get_aacstream @ 00408138 size=112

undefined4 media_ai_get_aacstream(void)

{
  undefined4 uVar1;
  
  prctl(0xf,"media_ai_get_aacstream",0,0,0);
  uVar1 = pthread_self();
  pthread_detach(uVar1);
  if (*(code **)(DAT_00436be4 + 0x2c) == (code *)0x0) {
    puts("\n\nai_get_aacstream not exit!!!\n");
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(DAT_00436be4 + 0x2c))();
    uVar1 = 0;
  }
  return uVar1;
}



// ==== media_rtl_get_videostream @ 00408cbc size=1028

void media_rtl_get_videostream(uint *param_1)

{
  undefined1 auVar1 [4];
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined4 *local_48 [2];
  uint local_40;
  int *local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar8 = *param_1;
  if (uVar8 == 0) {
    local_50 = (undefined1  [4])0x0;
    local_4c = 0;
    if (*(char *)(DAT_004778ac + 0x1fa) == '1') {
      local_4c = 0x4380780;
      puVar5 = &DAT_004372fc;
      local_40 = 0x400;
      local_50 = (undefined1  [4])0x14000000;
    }
    else if (*(char *)(DAT_004778ac + 0x1fa) == '2') {
      local_4c = 0x2d00500;
      local_40 = 0x400;
      puVar5 = &DAT_004372fc;
      local_50 = (undefined1  [4])0x14000000;
    }
    else {
      local_40 = 0x400;
      puVar5 = &DAT_004372fc;
    }
  }
  else {
    local_50 = (undefined1  [4])0x0;
    local_4c = 0;
    if (uVar8 == 1) {
      local_4c = 0x1680280;
      puVar5 = &DAT_00436f7c;
      local_40 = 0x800;
      local_50 = (undefined1  [4])0x14000000;
    }
    else {
      puVar5 = &DAT_00436f7c;
      local_40 = 0;
    }
  }
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_3c = &DAT_00436bf0 + uVar8;
  puVar4 = puVar5 + 0x30;
  iVar6 = -1;
  local_38 = 0;
  local_34 = local_40 | 0x80;
  do {
    while( true ) {
      local_48[0] = (undefined4 *)0x0;
      pthread_mutex_lock(puVar4);
      iVar2 = rts_av_poll(*(undefined4 *)(puVar5 + 0xc));
      if (((iVar2 == 0) && (iVar2 = rts_av_recv(*(undefined4 *)(puVar5 + 0xc),local_48), iVar2 == 0)
          ) && (local_48[0] != (undefined4 *)0x0)) break;
      pthread_mutex_unlock(puVar4);
      ms_sleep(5);
    }
    local_5c = FUN_00414718();
    local_60 = time(0);
    auVar1 = local_50;
    DAT_00436bf8 = DAT_00436bf8 + 1;
    local_50[1] = 0;
    local_50[0] = *(byte *)(DAT_004778ac + 0x930);
    local_50._2_2_ = auVar1._2_2_;
    if ((uVar8 == 0) && (iVar2 = local_60 / 0x3c, iVar6 != iVar2)) {
      printf(&DAT_00423a9c,"media_rtl_get_videostream",0x88a,iVar6,0,DAT_00436bf8);
      DAT_00436bf0 = 1;
      DAT_00436bf8 = 0;
      DAT_00436bf4 = 1;
      iVar6 = iVar2;
    }
    uVar3 = *local_48[0];
    uVar9 = local_48[0][2];
    if ((local_48[0][4] & 1) == 0) {
      if ((uVar8 < 2) && (*local_3c != 0)) {
        if (local_38 == 0) {
          local_30 = uVar3;
          local_2c = uVar9;
          rts_av_request_h264_key_frame(*(undefined4 *)(puVar5 + 0xc));
          local_38 = 1;
          *local_3c = 0;
          uVar3 = local_30;
          uVar9 = local_2c;
        }
        else {
          *local_3c = 0;
        }
      }
      if (*(int *)(DAT_004778ac + 0x608) == 0) {
        local_58 = CONCAT22((short)local_40,(short)local_58 + 1);
        local_54 = uVar9;
        FUN_00402580(uVar3,&local_60);
      }
    }
    else {
      uVar7 = (ushort)local_40;
      if (uVar8 < 2) {
        if (*local_3c != 0) {
          uVar7 = (ushort)local_34;
          *local_3c = 0;
        }
        if (local_38 != 0) {
          local_38 = 0;
          uVar7 = uVar7 | 0x80;
        }
      }
      FUN_0040825c(uVar3,uVar9,&local_78);
      if (*(int *)(DAT_004778ac + 0x608) == 0) {
        local_58 = CONCAT22(uVar7,(short)local_58 + 1) | 0x20000;
        local_50[2] = 1;
        local_54 = local_6c;
        FUN_00402580(local_78,&local_60);
        local_58 = CONCAT22(uVar7,(short)local_58 + 1) | 0x40000;
        local_54 = local_68;
        local_50[2] = 0;
        FUN_00402580(local_74,&local_60);
        local_58 = CONCAT22(uVar7,(short)local_58 + 1) | 0x10000;
        local_54 = local_64;
        FUN_00402580(local_70,&local_60);
      }
    }
    rts_av_put_buffer(local_48[0]);
    pthread_mutex_unlock(puVar4);
  } while( true );
}



// ==== media_rtl_send_ao_beep @ 00409c3c size=416

undefined4 media_rtl_send_ao_beep(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  ioctl(DAT_00477968,0x20007010,0);
  if (DAT_00437788 == 0) {
    FUN_004092c8();
  }
  if (param_1 != 0) {
    iVar1 = fopen(param_1,"r");
    if (iVar1 == 0) {
      rts_log(4,"<%s, %d>open aacfile fail.\n","media_rtl_send_ao_beep",0xabf);
    }
    else {
      fseek(iVar1,0,2);
      iVar2 = ftell(iVar1);
      iVar3 = __rts_malloc(iVar2,"media_rtl_send_ao_beep",0xac6);
      if (iVar3 == 0) {
        rts_log(4,"<%s, %d>malloc buffer fail\n","media_rtl_send_ao_beep",0xac9);
      }
      else {
        fseek(iVar1,0,0);
        fread(iVar3,1,iVar2,iVar1);
        if (iVar2 != 0) {
          parse_decode_aac_frame(iVar3,iVar2);
        }
        rts_free(iVar3);
      }
      fclose(iVar1);
    }
  }
  if (DAT_00437788 != 0) {
    FUN_00409324();
  }
  sleep(5);
  ioctl(DAT_00477968,0x20007011,0);
  return 0;
}



// ==== media_rtl_set_color2grey @ 0040ace0 size=72

int media_rtl_set_color2grey(void)

{
  int iVar1;
  
  iVar1 = set_grey_attr(0x27);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>set grey attr fail.\n","media_rtl_set_color2grey",0x93c);
  }
  return iVar1;
}



// ==== media_venc_set_color2grey @ 0040ae74 size=172

int media_venc_set_color2grey(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = set_isp_attr(0x30,param_1);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>set ir_mode attr fail.\n","media_venc_set_color2grey",0x697);
    return iVar1;
  }
  iVar1 = set_isp_attr(0x27,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  rts_log(4,"<%s, %d>set grey_mode attr fail.\n","media_venc_set_color2grey",0x69d);
  return iVar1;
}



// ==== media_rtl_set_flip @ 0040af20 size=204

int media_rtl_set_flip(uint param_1)

{
  int iVar1;
  
  if (*(char *)(DAT_004778ac + 0x1f9) == '2') {
    FUN_00413f64("media_rtl.c","media_rtl_set_flip",0x6ac,"hw ver mirror[%c] flip reseve\n",0x32);
    param_1 = (uint)(param_1 == 0);
  }
  iVar1 = set_isp_attr(0x15,param_1);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>set flip_mode attr fail.\n","media_rtl_set_flip",0x6b2);
  }
  iVar1 = set_isp_attr(0x16,param_1);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>set mirror_mode attr fail.\n","media_rtl_set_flip",0x6b7);
  }
  return iVar1;
}



// ==== media_rtl_set_ldc @ 0040afec size=268

int media_rtl_set_ldc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *local_24;
  undefined *local_20;
  undefined *puStack_1c;
  
  local_24 = &DAT_00436f7c;
  puVar4 = &DAT_004372fc;
  ppuVar3 = &local_24;
  local_20 = &DAT_00436bfc;
  puVar2 = puVar4;
  while( true ) {
    if (0 < *(int *)(puVar2 + 8)) {
      pthread_mutex_lock(puVar2 + 0x30,param_2);
      rts_av_disable_chn(*(undefined4 *)(puVar2 + 8));
    }
    if (ppuVar3 == &puStack_1c) break;
    puVar2 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    param_2 = param_1;
  }
  iVar1 = set_isp_attr(0x36);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>set ldc_mode attr fail.\n","media_rtl_set_ldc",0x6cb);
  }
  ppuVar3 = &local_24;
  while( true ) {
    if (0 < *(int *)(puVar4 + 8)) {
      rts_av_enable_chn(*(int *)(puVar4 + 8));
      pthread_mutex_unlock(puVar4 + 0x30);
    }
    if (&puStack_1c == ppuVar3) break;
    puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
  }
  return iVar1;
}



// ==== media_rtl_set_3dnr @ 0040b0f8 size=76

int media_rtl_set_3dnr(void)

{
  int iVar1;
  
  iVar1 = set_isp_attr(0x2e,1);
  if (iVar1 != 0) {
    rts_log(4,"<%s, %d>set 3dnr attr fail.\n","media_rtl_set_3dnr",0x6de);
  }
  return iVar1;
}



// ==== media_rtl_init @ 0040bc4c size=44

undefined4 media_rtl_init(undefined4 param_1,int param_2)

{
  undefined4 in_v0;
  undefined4 uStack00000018;
  
  uStack00000018 = in_v0;
  rts_log(4,param_2 + 0x45a8,"media_rtl_init",0x825);
  return uStack00000018;
}



