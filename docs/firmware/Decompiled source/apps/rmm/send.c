/* rmm — "send" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== send_motion_start_msg @ 00404e00 size=196

int send_motion_start_msg(undefined4 param_1)

{
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_18;
  int local_10;
  
  memset(&local_420,0,0x400);
  local_18 = 0x7c007c;
  local_420 = 1;
  local_41c = 2;
  local_418 = 0x7c007c;
  local_10 = FUN_004143f4(param_1,&local_420,0x10);
  if (-1 < local_10) {
    FUN_00413f64("rmm.c","send_motion_start_msg",0x2f1,"msg snd success");
    return local_10;
  }
  FUN_00413f64("rmm.c","send_motion_start_msg",0x2ed,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_motion_flowwith_start_msg @ 00404ec4 size=196

int send_motion_flowwith_start_msg(undefined4 param_1)

{
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_18;
  int local_10;
  
  memset(&local_420,0,0x400);
  local_18 = 0xe600e6;
  local_420 = 1;
  local_41c = 2;
  local_418 = 0xe600e6;
  local_10 = FUN_004143f4(param_1,&local_420,0x10);
  if (-1 < local_10) {
    FUN_00413f64("rmm.c","send_motion_flowwith_start_msg",0x2d4,"msg snd success");
    return local_10;
  }
  FUN_00413f64("rmm.c","send_motion_flowwith_start_msg",0x2d0,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_wait_msg @ 00404f88 size=152

int send_wait_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  local_20 = 2;
  local_18 = 0x1002;
  local_1c = 2;
  local_16 = 0x1002;
  local_10 = FUN_004143f4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00413f64("rmm.c","send_wait_msg",0x55d,"msg snd success");
    return local_10;
  }
  FUN_00413f64("rmm.c","send_wait_msg",0x559,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_reboot_msg @ 00405020 size=156

int send_reboot_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 1;
  local_14 = 0;
  local_18 = 0xfff;
  local_1c = 2;
  local_16 = 0xfff;
  local_10 = FUN_004143f4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00413f64("rmm.c","send_reboot_msg",0x543,"msg snd success");
    return local_10;
  }
  FUN_00413f64("rmm.c","send_reboot_msg",0x53f,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_abnormal_sound_detect_msg @ 0040625c size=196

int send_abnormal_sound_detect_msg(undefined4 param_1)

{
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_18;
  int local_10;
  
  memset(&local_420,0,0x400);
  local_18 = 0x60046004;
  local_420 = 4;
  local_41c = 2;
  local_418 = 0x60046004;
  local_10 = FUN_004143f4(param_1,&local_420,0x10);
  if (-1 < local_10) {
    FUN_00413f64("rmm.c","send_abnormal_sound_detect_msg",0x167,"msg snd success");
    return local_10;
  }
  FUN_00413f64("rmm.c","send_abnormal_sound_detect_msg",0x163,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_capture_finish_msg @ 00406568 size=156

int send_capture_finish_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 1;
  local_14 = 0;
  local_18 = 0x93;
  local_1c = 2;
  local_16 = 0x93;
  local_10 = FUN_004143f4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00413f64("rmm.c","send_capture_finish_msg",0x340,"msg snd success");
    return local_10;
  }
  FUN_00413f64("rmm.c","send_capture_finish_msg",0x33c,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_wifi_conf_msg @ 00406fac size=444

int send_wifi_conf_msg(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined4 local_bc;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [64];
  undefined1 auStack_38 [32];
  
  iVar2 = DAT_004778ac;
  iVar1 = strcmp(DAT_004778ac + 0x420,param_1);
  if (iVar1 == 0) {
    iVar1 = strcmp(iVar2 + 0x460,param_2);
    if ((iVar1 == 0) && (iVar2 = strcmp(iVar2 + 0x300,param_3), iVar2 == 0)) {
      printf(&DAT_00422c28,"send_wifi_conf_msg",0x588);
      return 0;
    }
  }
  FUN_00413e10(&local_c8,0xb0,0,0xb0);
  local_c8 = 1;
  local_c0 = 0x70;
  local_be = 0x70;
  local_c4 = 2;
  local_bc = 0;
  snprintf(auStack_b8,0x40,"%s",param_1);
  snprintf(auStack_78,0x40,"%s",param_2);
  snprintf(auStack_38,0x20,"%s",param_3);
  iVar2 = FUN_004143f4(DAT_004778a4,&local_c8,0xb0);
  if (-1 < iVar2) {
    printf("msg snd success");
    FUN_00413f64("rmm.c","send_wifi_conf_msg",0x5a2,"msg snd success\n");
    return iVar2;
  }
  printf("msg snd err, err no is %d",iVar2);
  FUN_00413f64("rmm.c","send_wifi_conf_msg",0x59d,"msg snd err, err no is %d\n",iVar2);
  return iVar2;
}



// ==== send_do_speaking_msg @ 004083f4 size=156

int send_do_speaking_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 1;
  local_14 = 0;
  local_18 = 0x1025;
  local_1c = 2;
  local_16 = 0x1025;
  local_10 = FUN_004143f4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00413f64("media_common.c","send_do_speaking_msg",0x1ab,"msg snd success");
    return local_10;
  }
  FUN_00413f64("media_common.c","send_do_speaking_msg",0x1a7,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_stop_speaking_msg @ 00408490 size=156

int send_stop_speaking_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 1;
  local_14 = 0;
  local_18 = 0x1026;
  local_1c = 2;
  local_16 = 0x1026;
  local_10 = FUN_004143f4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00413f64("media_common.c","send_stop_speaking_msg",0x1c4,"msg snd success");
    return local_10;
  }
  FUN_00413f64("media_common.c","send_stop_speaking_msg",0x1c0,"msg snd err, err no is %d",local_10)
  ;
  return local_10;
}



// ==== send_pcm_to_playback @ 00408534 size=292

undefined4 send_pcm_to_playback(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (DAT_00437784 == 1) {
    iVar1 = rts_queue_empty(DAT_00437780);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)rts_queue_pop(DAT_00437780);
      if (puVar2 == (undefined4 *)0x0) {
        rts_log(4,"<%s, %d>buffer is busy.\n","send_pcm_to_playback",0x5fb);
        uVar3 = 0xffffffe0;
      }
      else {
        memcpy(*puVar2,param_1,param_2);
        local_2c = DAT_004376fc;
        local_24 = DAT_004376f8;
        local_28 = DAT_004376f4;
        puVar2[2] = param_2;
        local_30 = 0x8001;
        rts_av_set_buffer_profile(puVar2,&local_30);
        rts_av_send(DAT_00437694,puVar2);
        rts_av_put_buffer(puVar2);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xfffffff5;
    }
    return uVar3;
  }
  return 0xffffffe1;
}



