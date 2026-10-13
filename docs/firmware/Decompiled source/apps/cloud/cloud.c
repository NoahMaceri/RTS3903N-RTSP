/* cloud — "cloud" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloud.h"

// ==== cloud_report_alarm_upload_status @ 00401a58 size=460

undefined4 cloud_report_alarm_upload_status(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar5 = FUN_0040b7f4();
  sprintf(&local_38,&DAT_0040e018,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  iVar1 = FUN_0040b004();
  if (iVar1 != 0) {
    uVar2 = FUN_0040af80((double)param_3);
    FUN_0040af00(iVar1,&DAT_0040e020,uVar2);
    uVar2 = FUN_0040af80((double)param_1);
    FUN_0040af00(iVar1,&DAT_0040e028,uVar2);
    if (param_1 == 4) {
      uVar2 = FUN_0040af80((double)param_2);
      FUN_0040af00(iVar1,"alarm_type",uVar2);
    }
    uVar2 = FUN_0040afb8(DAT_00423a48 + 0x255);
    FUN_0040af00(iVar1,&DAT_0040e03c,uVar2);
    uVar2 = FUN_0040afb8(DAT_00423a48 + 400);
    FUN_0040af00(iVar1,"device_version",uVar2);
    uVar2 = FUN_0040afb8(&local_38);
    FUN_0040af00(iVar1,&DAT_0040e050,uVar2);
    iVar3 = FUN_0040ae58(iVar1);
    if (iVar3 != 0) {
      uVar2 = strlen(iVar3);
      iVar4 = FUN_00401918(DAT_00423a40,0x4023,iVar3,uVar2);
      if (iVar4 < 0) {
        FUN_0040b244("cloud.c","cloud_report_alarm_upload_status",0x1ce,
                     "cloud_report_alarm_upload_status send_msg msg fail!\n");
      }
      free(iVar3);
    }
    FUN_0040ac4c(iVar1);
  }
  return 0;
}



// ==== cloud_set_time @ 00401c24 size=224

int cloud_set_time(undefined4 param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  
  FUN_0040b10c(&local_30,0x14,0,0x14);
  local_30 = 1;
  local_28 = 0x71;
  local_24 = 0;
  local_2c = 4;
  local_26 = 0x71;
  local_20 = param_1;
  local_18 = FUN_0040b6d4(DAT_00423a40,&local_30,0x14);
  if (-1 < local_18) {
    DAT_004239d0 = 1;
    FUN_0040b244("cloud.c","cloud_set_time",0x208,"msg snd success");
    return local_18;
  }
  FUN_0040b244("cloud.c","cloud_set_time",0x203,"msg snd err, err no is %d",local_18);
  return local_18;
}



// ==== cloud_set_region @ 00401d04 size=252

undefined4
cloud_set_region(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [64];
  undefined4 local_18;
  
  local_18 = param_4;
  memset(&local_120,0,0x108);
  local_120 = param_2;
  local_11c = param_3;
  snprintf(auStack_118,0x80,"%s",local_18);
  snprintf(auStack_98,0x40,"%s",param_5);
  snprintf(auStack_58,0x40,"%s",param_6);
  iVar1 = FUN_00401918(DAT_00423a40,0x8d,&local_120,0x108);
  if (-1 < iVar1) {
    FUN_0040b244("cloud.c","cloud_set_region",0x21e,"cloud_set_region send_msg ok!\n");
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_set_region",0x21a,"cloud_set_region send_msg fail!\n");
  return 0;
}



// ==== cloud_set_bind_result @ 00401e00 size=108

undefined4 cloud_set_bind_result(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00401918(DAT_00423a40,param_1,0,0);
  if (iVar1 < 0) {
    FUN_0040b244("cloud.c","cloud_set_bind_result",0x235,"cloud_set_bind_result send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0040b244("cloud.c","cloud_set_bind_result",0x23a,"cloud_set_bind_result send_msg ok!\n");
    uVar2 = 0;
  }
  return uVar2;
}



// ==== cloud_set_tnp @ 00401e6c size=268

undefined4 cloud_set_tnp(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined4 local_d4;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [128];
  
  FUN_0040b10c(&local_e0,0xd0,0,0xd0);
  local_e0 = 1;
  local_d4 = 0xd0;
  local_d8 = 0x7e;
  local_d6 = 0x7e;
  local_dc = 4;
  uVar1 = strlen(param_1);
  strncpy(auStack_d0,param_1,uVar1);
  uVar1 = strlen(param_2);
  strncpy(auStack_b0,param_2,uVar1);
  uVar1 = strlen(param_3);
  strncpy(auStack_90,param_3,uVar1);
  iVar2 = FUN_0040b6d4(DAT_00423a40,&local_e0,0xd0);
  if (iVar2 < 0) {
    FUN_0040b244("cloud.c","cloud_set_tnp",0x2a2,"cloud_set_tnp send_msg fail!\n");
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0040b244("cloud.c","cloud_set_tnp",0x2a7,"cloud_set_tnp send_msg ok!\n");
    uVar1 = 0;
  }
  return uVar1;
}



// ==== cloud_finish_sync_info_from_server @ 00401f78 size=100

undefined4 cloud_finish_sync_info_from_server(void)

{
  int iVar1;
  
  iVar1 = FUN_00401918(DAT_00423a40,0x8a,0,0);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_finish_sync_info_from_server",0x2b0,
               "cloud_finish_sync_info_from_server send_msg DISPATCH_FINISH_SYNC_INFO_FROM_SERVER fail!\n"
              );
  return 0;
}



// ==== cloud_save_api_server @ 00401fdc size=100

undefined4 cloud_save_api_server(void)

{
  int iVar1;
  
  iVar1 = FUN_00401918(DAT_00423a40,0x96,0,0);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_save_api_server",0x2ba,
               "cloud_save_api_server send_msg DISPATCH_SAVE_API_SERVER fail!\n");
  return 0;
}



// ==== cloud_clear_api_server @ 00402040 size=100

undefined4 cloud_clear_api_server(void)

{
  int iVar1;
  
  iVar1 = FUN_00401918(DAT_00423a40,0x97,0,0);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_clear_api_server",0x2c4,
               "cloud_clear_api_server send_msg DISPATCH_CLEAR_API_SERVER fail!\n");
  return 0;
}



// ==== cloud_set_tz_offset @ 004020a4 size=112

undefined4 cloud_set_tz_offset(undefined4 param_1)

{
  int iVar1;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00401918(DAT_00423a40,0x8e,local_res0,4);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_set_tz_offset",0x2ce,"cloud_set_tz_offset %d send_msg msg fail!\n",
               local_res0[0]);
  return 0;
}



// ==== cloud_set_cloud_storage_state @ 00402114 size=120

undefined4 cloud_set_cloud_storage_state(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401918(DAT_00423a40,param_1,0,0);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_set_cloud_storage_state",0x2d6,
               "cloud_set_cloud_storage_state %02x send_msg msg fail!\n",param_1);
  return 0;
}



// ==== cloud_set_cloud_storage_mode @ 0040218c size=120

undefined4 cloud_set_cloud_storage_mode(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401918(DAT_00423a40,param_1,0,0);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_set_cloud_storage_mode",0x2e0,
               "cloud_set_cloud_storage_mode %02x send_msg msg fail!\n",param_1);
  return 0;
}



// ==== cloud_set_cloud_image_state @ 00402204 size=120

undefined4 cloud_set_cloud_image_state(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401918(DAT_00423a40,param_1,0,0);
  if (-1 < iVar1) {
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_set_cloud_image_state",0x2ea,
               "cloud_set_cloud_image_state %02x send_msg msg fail!\n",param_1);
  return 0;
}



// ==== cloud_set_video_backup_state @ 0040227c size=232

undefined4 cloud_set_video_backup_state(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00401918(DAT_00423a40,0x87,param_1,0x18);
  if (iVar1 < 0) {
    FUN_0040b244("cloud.c","cloud_set_video_backup_state",0x2f6,"p2p_set_video_backup_state fail!\n"
                );
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    do {
      iVar1 = iVar1 + -1;
      if ((((*(char *)(DAT_00423a48 + 0x98c) == *param_1) &&
           (*(char *)(DAT_00423a48 + 0x98d) == param_1[1])) &&
          (*(char *)(DAT_00423a48 + 0x98e) == param_1[2])) &&
         (*(char *)(DAT_00423a48 + 0x98f) == param_1[3])) {
        return 0;
      }
      usleep(100000);
      uVar2 = 0;
    } while (iVar1 != 0);
  }
  return uVar2;
}



// ==== cloud_set_babycry_occur @ 00402364 size=116

undefined4 cloud_set_babycry_occur(void)

{
  int iVar1;
  
  iVar1 = FUN_00401918(DAT_00423a40,0xea,0,0);
  if (-1 < iVar1) {
    FUN_0040b244("cloud.c","cloud_set_babycry_occur",0x313,"cloud_set_babycry_occur send_msg ok!\n")
    ;
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_set_babycry_occur",0x30f,"cloud_set_babycry_occur send_msg fail!\n")
  ;
  return 0;
}



// ==== cloud_set_abnormal_sound_occur @ 004023d8 size=116

undefined4 cloud_set_abnormal_sound_occur(void)

{
  int iVar1;
  
  iVar1 = FUN_00401918(DAT_00423a40,0xee,0,0);
  if (-1 < iVar1) {
    FUN_0040b244("cloud.c","cloud_set_abnormal_sound_occur",0x321,
                 "cloud_set_abnormal_sound_occur send_msg ok!\n");
    return 0;
  }
  FUN_0040b244("cloud.c","cloud_set_abnormal_sound_occur",0x31d,
               "cloud_set_abnormal_sound_occur send_msg fail!\n");
  return 0;
}



// ==== cloud_cap_pic @ 00402730 size=124

undefined4 cloud_cap_pic(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = strlen();
  iVar2 = FUN_00401918(DAT_00423a40,0x1007,param_1,uVar1);
  if (iVar2 < 0) {
    FUN_0040b244("cloud.c","cloud_cap_pic",0x339,"cloud_cap_pic send_msg fail!\n");
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0040b244("cloud.c","cloud_cap_pic",0x33e,"cloud_cap_pic send_msg ok!\n");
    uVar1 = 0;
  }
  return uVar1;
}



// ==== cloud_make_video @ 004027ac size=184

undefined4 cloud_make_video(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 6) {
    uVar3 = 0x2000;
  }
  else {
    uVar3 = 0x2002;
    if (param_2 != 0xf) {
      uVar3 = 0x2001;
    }
  }
  uVar1 = strlen(param_1);
  iVar2 = FUN_00401918(DAT_00423a40,uVar3,param_1,uVar1);
  if (iVar2 < 0) {
    FUN_0040b244("cloud.c","cloud_make_video",0x356,"cloud_make_video %d(s) send_msg fail!\n",
                 param_2);
    uVar3 = 0xffffffff;
  }
  else {
    FUN_0040b244("cloud.c","cloud_make_video",0x35b,"cloud_make_video %d(s)send_msg ok!\n",param_2);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== cloud_send_shortrec_msg @ 0040537c size=172

undefined4 cloud_send_shortrec_msg(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_98;
  undefined1 auStack_94 [136];
  
  memset(&local_98,0,0x84);
  local_98 = param_2;
  strncpy(auStack_94,param_1,0x7f);
  iVar1 = FUN_00401918(DAT_00423a40,0x2003,&local_98,0x84);
  if (iVar1 < 0) {
    FUN_0040b244("cloud.c","cloud_send_shortrec_msg",0xe74,
                 "cloud_send_shortrec_msg %d(s) send_msg fail!\n",param_2);
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0040b244("cloud.c","cloud_send_shortrec_msg",0xe79,
                 "cloud_send_shortrec_msg %d(s)send_msg ok!\n",param_2);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== cloud_set_prev_motion_state @ 0040686c size=288

void cloud_set_prev_motion_state(int param_1)

{
  int iVar1;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00401918(DAT_00423a40,0x101,local_res0,4);
  if (iVar1 < 0) {
    FUN_0040b244("cloud.c","cloud_set_prev_motion_state",0x1063,
                 "send cloud_change_prev_motion_state _msg fail!\n");
  }
  else {
    if (*(int *)(DAT_00423a48 + 0x5d8) != local_res0[0]) {
      iVar1 = 0x30;
      FUN_0040b864(0x14);
      do {
        if (*(int *)(DAT_00423a48 + 0x5d8) == local_res0[0]) {
          if (0 < iVar1) goto LAB_004068f4;
          break;
        }
        iVar1 = iVar1 + -1;
        FUN_0040b864(0x14);
      } while (iVar1 != -1);
      FUN_0040b244("cloud.c","cloud_set_prev_motion_state",0x1073,
                   "cloud_change_prev_motion_state send_msg timeout!\n");
      return;
    }
LAB_004068f4:
    FUN_0040b244("cloud.c","cloud_set_prev_motion_state",0x1071,
                 "cloud_change_prev_motion_state send_msg ok!\n");
  }
  return;
}



// ==== cloud_update_upgradefirmware_status @ 00407738 size=780

undefined4 cloud_update_upgradefirmware_status(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_ce8 [2048];
  undefined1 auStack_4e8 [1024];
  undefined1 auStack_e8 [128];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
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
  
  memset(auStack_4e8,0,0x400);
  memset(auStack_ce8,0,0x800);
  memset(auStack_e8,0,0x80);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  if (param_1 + 1U < 2) {
    snprintf(&local_48,0x20,"%s",DAT_00423a48 + 400);
    local_68 = CONCAT22(local_68._2_2_,0x30);
  }
  if ((param_1 - 1U < 3) || (param_1 + 3U < 2)) {
    snprintf(&local_48,0x20,"%s",DAT_00423a48 + 400);
    snprintf(&local_68,0x20,"%s",DAT_00423a48 + 0x1d0);
  }
  if ((param_1 == 4) || (param_1 == -4)) {
    snprintf(&local_48,0x20,"%s",DAT_00423a48 + 0x1b0);
    snprintf(&local_68,0x20,"%s",DAT_00423a48 + 0x1d0);
  }
  iVar2 = 3;
  sprintf(auStack_4e8,
          "%s -c 144 -url \"%s/ipc/firmware/update\" -seq %d -did %s -currentCode %s -targetCode %s -region %s -status %d "
          ,"/backup/cloudAPI","https://monitor-log.xiaoyi.com",*(undefined1 *)(DAT_00423a48 + 500),
          DAT_00423a48 + 0x255,&local_48,&local_68,DAT_00423a48 + 0x1f0,param_1);
  while( true ) {
    iVar2 = iVar2 + -1;
    memset(auStack_ce8,0,0x800);
    FUN_0040b48c(auStack_4e8,auStack_ce8,0x800,0x3c);
    FUN_0040b244("cloud.c","cloud_update_upgradefirmware_status",0x1272,"cmd = %s\n",auStack_4e8);
    FUN_0040b244("cloud.c","cloud_update_upgradefirmware_status",0x1273,"ret_string = %s\n",
                 auStack_ce8);
    memset(auStack_e8,0,0x80);
    iVar1 = FUN_0040b8cc(auStack_e8,&DAT_0040e020,auStack_ce8);
    if ((iVar1 == 1) && (iVar1 = atoi(auStack_e8), iVar1 == 1)) break;
    usleep(2000000);
    if (iVar2 == 0) {
      return 0;
    }
  }
  FUN_0040b244("cloud.c","cloud_update_upgradefirmware_status",0x1278,
               "cloud_update_upgradefirmware_status success state = %d\n",param_1);
  return 0;
}



