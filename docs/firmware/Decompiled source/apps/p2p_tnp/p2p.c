/* p2p_tnp — "p2p" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== p2p_send_ctrl_error @ 00406950 size=228

undefined4 p2p_send_ctrl_error(int param_1,int param_2,int param_3)

{
  undefined1 local_418;
  undefined1 local_417;
  undefined1 local_416;
  undefined4 local_414;
  ushort local_410;
  ushort local_40e;
  undefined4 local_18;
  
  memset(&local_418,0,0x400);
  local_40e = (ushort)((uint)param_3 >> 8) | (ushort)(param_3 << 8);
  local_418 = (&DAT_00478432)[param_1 * 0xdc8];
  local_410 = (ushort)((uint)param_2 >> 8) & 0xff | (ushort)(param_2 << 8);
  local_414 = 0x28000000;
  local_417 = 3;
  local_416 = 1;
  local_18 = FUN_004061d0((&DAT_0047843c)[param_1 * 0x372],0,&local_418,0x30);
  dump_string("p2p_tnp.c","p2p_send_ctrl_error",0xe29,"p2p_send_ctrl_data, msg_type=0x%02x\n",
              param_2);
  return local_18;
}



// ==== p2p_set_power @ 00409da8 size=220

undefined4 p2p_set_power(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (1 < param_1 - 0x74U) {
    return 0xffffffff;
  }
  iVar1 = FUN_00409a5c(DAT_00478414,param_1,0,0);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_power",0x5e1,"p2p_set_power send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_power",0x5e6,"p2p_set_power send_msg ok!\n");
    do {
      iVar1 = iVar1 + -1;
      if (*(int *)(DAT_0047841c + 0x608) == -1) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_light @ 0040a014 size=220

undefined4 p2p_set_light(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (1 < param_1 - 0x76U) {
    return 0xffffffff;
  }
  iVar1 = FUN_00409a5c(DAT_00478414,param_1,0,0);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_light",0x603,"p2p_set_light send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_light",0x608,"p2p_set_light send_msg ok!\n");
    do {
      iVar1 = iVar1 + -1;
      if (*(int *)(DAT_0047841c + 0x604) == -1) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_motion_record @ 0040a0f0 size=220

undefined4 p2p_set_motion_record(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (1 < param_1 - 0x78U) {
    return 0xffffffff;
  }
  iVar1 = FUN_00409a5c(DAT_00478414,param_1,0,0);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_motion_record",0x625,"p2p_set_motion_record send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_motion_record",0x62a,"p2p_set_motion_record send_msg ok!\n");
    do {
      iVar1 = iVar1 + -1;
      if (*(int *)(DAT_0047841c + 0x614) == -1) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_mirror_flip @ 0040a1cc size=220

undefined4 p2p_set_mirror_flip(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (1 < param_1 - 0x7aU) {
    return 0xffffffff;
  }
  iVar1 = FUN_00409a5c(DAT_00478414,param_1,0,0);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_mirror_flip",0x647,"p2p_set_mirror_flip send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_mirror_flip",0x64c,"p2p_set_mirror_flip send_msg ok!\n");
    do {
      iVar1 = iVar1 + -1;
      if (*(int *)(DAT_0047841c + 0x600) == -1) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_alarm_mode @ 0040a2a8 size=200

undefined4 p2p_set_alarm_mode(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x103c,local_res0,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_alarm_mode",0x6ac,"p2p_set_alarm_mode %d send_msg fail!\n",
                local_res0[0]);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_alarm_mode",0x6b1,"p2p_set_alarm_mode %d send_msg ok!\n",
                local_res0[0]);
    do {
      iVar1 = iVar1 + -1;
      if (*(int *)(DAT_0047841c + 0x4e8) == local_res0[0]) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_day_night_mode @ 0040a370 size=236

undefined4 p2p_set_day_night_mode(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_res4 [3];
  
  if (param_1 != 0x1024) {
    return 0xffffffff;
  }
  local_res4[0] = param_2;
  iVar1 = FUN_00409a5c(DAT_00478414,0x1024,local_res4,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_day_night_mode",0x6cd,
                "p2p_set_day_night_mode %d send_msg fail!\n",local_res4[0]);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_day_night_mode",0x6d2,
                "p2p_set_day_night_mode %d send_msg ok!\n",local_res4[0]);
    do {
      iVar1 = iVar1 + -1;
      if (*(int *)(DAT_0047841c + 0x610) == local_res4[0]) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_alarm_sensitivity @ 0040a45c size=200

undefined4 p2p_set_alarm_sensitivity(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x1027,local_res0,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_alarm_sensitivity",0x6e9,
                "p2p_set_alarm_sensitivity %d send_msg fail!\n",local_res0[0]);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_alarm_sensitivity",0x6ee,
                "p2p_set_alarm_sensitivity %d send_msg ok!\n",local_res0[0]);
    do {
      iVar1 = iVar1 + -1;
      if (*(byte *)(DAT_0047841c + 0x933) == local_res0[0]) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_audio_mode @ 0040a524 size=248

void p2p_set_audio_mode(int param_1)

{
  int iVar1;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  if (param_1 == 1) {
    puts("\n\n[Peter] p2p RMM_APP_AUDIO_MODE_SIMPLEX mode\n");
    iVar1 = FUN_00409a5c(DAT_00478414,0x1038,local_res0,4);
    if (iVar1 < 0) {
      dump_string("p2p_tnp.c","p2p_set_audio_mode",0x706,"RMM_APP_MODE_EARPHONE send_msg fail!\n");
    }
  }
  else if (param_1 == 2) {
    puts("\n\n[Peter] p2p RMM_APP_AUDIO_MODE_DUPLEX mode\n");
    iVar1 = FUN_00409a5c(DAT_00478414,0x1039,local_res0,4);
    if (iVar1 < 0) {
      dump_string("p2p_tnp.c","p2p_set_audio_mode",0x70e,"RMM_APP_MODE_SPKER send_msg fail!\n");
    }
  }
  else {
    puts("\n\n[Peter] p2p other mode\n");
    dump_string("p2p_tnp.c","p2p_set_audio_mode",0x715,"RMM_APP_MODE_SPKER mode error!\n");
  }
  return;
}



// ==== p2p_set_encode_mode @ 0040a61c size=200

undefined4 p2p_set_encode_mode(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x1032,local_res0,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_encode_mode",0x74b,"p2p_set_encode_mode %d send_msg fail!\n",
                local_res0[0]);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_encode_mode",0x750,"p2p_set_encode_mode %d send_msg ok!\n",
                local_res0[0]);
    do {
      iVar1 = iVar1 + -1;
      if (*(int *)(DAT_0047841c + 0x4f8) == local_res0[0]) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_high_resolution @ 0040a6e4 size=200

undefined4 p2p_set_high_resolution(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x1033,local_res0,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_high_resolution",0x767,
                "p2p_set_high_resolution %d send_msg fail!\n",local_res0[0]);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 10;
    dump_string("p2p_tnp.c","p2p_set_high_resolution",0x76c,
                "p2p_set_high_resolution %d send_msg ok!\n",local_res0[0]);
    do {
      iVar1 = iVar1 + -1;
      if (*(int *)(DAT_0047841c + 0x4fc) == local_res0[0]) break;
      usleep(100000);
    } while (iVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_send_connected @ 0040a7ac size=108

undefined4 p2p_send_connected(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0xe1,0,0);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_send_connected",0x7ab,"p2p_send_connected send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    dump_string("p2p_tnp.c","p2p_send_connected",0x7b0,"p2p_send_connected send_msg ok!\n");
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_send_disconnected @ 0040a818 size=108

undefined4 p2p_send_disconnected(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0xe2,0,0);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_send_disconnected",0x7bc,"p2p_send_disconnected send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    dump_string("p2p_tnp.c","p2p_send_disconnected",0x7c1,"p2p_send_disconnected send_msg ok!\n");
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_send_viewing @ 0040a884 size=120

undefined4 p2p_send_viewing(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [3];
  
  local_10[0] = FUN_00409970();
  iVar1 = FUN_00409a5c(DAT_00478414,0xe3,local_10,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_send_viewing",0x7ce,"p2p_send_viewing send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    dump_string("p2p_tnp.c","p2p_send_viewing",0x7d3,"p2p_send_viewing send_msg ok!\n");
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_send_stop_viewing @ 0040a8fc size=120

undefined4 p2p_send_stop_viewing(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [3];
  
  local_10[0] = FUN_00409970();
  iVar1 = FUN_00409a5c(DAT_00478414,0xe4,local_10,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_send_stop_viewing",0x7e0,"p2p_send_stop_viewing send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    dump_string("p2p_tnp.c","p2p_send_stop_viewing",0x7e5,"p2p_send_stop_viewing send_msg ok!\n");
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_send_clr_viewing @ 0040a974 size=108

undefined4 p2p_send_clr_viewing(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0xe5,0,0);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_send_clr_viewing",0x7f1,"p2p_send_clr_viewing send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  else {
    dump_string("p2p_tnp.c","p2p_send_clr_viewing",0x7f6,"p2p_send_clr_viewing send_msg ok!\n");
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_tnp_init_status @ 0040a9e0 size=120

undefined4 p2p_set_tnp_init_status(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x7f,local_res0,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_tnp_init_status",0x802,
                "p2p_set_tnp_init_status %d send_msg fail!\n",local_res0[0]);
    uVar2 = 0xffffffff;
  }
  else {
    dump_string("p2p_tnp.c","p2p_set_tnp_init_status",0x807,
                "p2p_set_tnp_init_status %d send_msg ok!\n",local_res0[0]);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_tnp_work_mode @ 0040aa58 size=120

undefined4 p2p_set_tnp_work_mode(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x80,local_res0,4);
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_tnp_work_mode",0x813,
                "p2p_set_tnp_work_mode %d send_msg fail!\n",local_res0[0]);
    uVar2 = 0xffffffff;
  }
  else {
    dump_string("p2p_tnp.c","p2p_set_tnp_work_mode",0x818,"p2p_set_tnp_work_mode %d send_msg ok!\n",
                local_res0[0]);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== p2p_set_tnp_check_login_success @ 0040aad0 size=96

undefined4 p2p_set_tnp_check_login_success(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0x81,0,0);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_tnp_check_login_success",0x825,
                "p2p_set_tnp_check_login_success send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_set_tnp_check_login_fail @ 0040ab30 size=96

undefined4 p2p_set_tnp_check_login_fail(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0x82,0,0);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_tnp_check_login_fail",0x836,
                "p2p_set_tnp_check_login_fail send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_set_tnp_connect_success @ 0040ab90 size=96

undefined4 p2p_set_tnp_connect_success(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0x83,0,0);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_tnp_connect_success",0x847,
                "p2p_set_tnp_connect_success send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_set_immediate_bitrate @ 0040abf0 size=108

undefined4 p2p_set_immediate_bitrate(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x84,local_res0,4);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_immediate_bitrate",0x858,
                "p2p_set_immediate_bitrate %d send_msg fail!\n",local_res0[0]);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_set_pwd_used_cnt @ 0040ac5c size=96

undefined4 p2p_set_pwd_used_cnt(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0x8f,0,0);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_pwd_used_cnt",0x869,"p2p_set_pwd_used_cnt send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_ptz_direction_ctrl @ 0040ad50 size=136

undefined4 p2p_ptz_direction_ctrl(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
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
  local_1c = 8;
  local_10 = param_1;
  local_c = param_2;
  iVar1 = FUN_00440e4c(DAT_00478414,&local_20,0x18);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_ptz_direction_ctrl",0x9bb,"p2p_ptz_direction_ctrl send_msg fail!\n"
               );
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_ptz_direction_ctrl_stop @ 0040add8 size=96

undefined4 p2p_ptz_direction_ctrl_stop(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0x4007,0,0);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_ptz_direction_ctrl_stop",0x9c8,
                "p2p_ptz_direction_ctrl_stop send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_ptz_home @ 0040ae38 size=96

undefined4 p2p_ptz_home(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0x4008,0,0);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_ptz_home",0x9d5,"p2p_ptz_home send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_ap_mode_set @ 0040ae98 size=348

undefined4 p2p_ap_mode_set(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 local_218;
  undefined4 local_214;
  undefined2 local_210;
  undefined4 local_20c;
  char local_208 [4];
  undefined4 local_204 [3];
  char local_1f8 [480];
  
  memset(&local_218,0,0x200);
  local_210 = 0x105;
  local_20c = 0x43;
  local_218 = 1;
  local_214 = 8;
  pcVar3 = local_208;
  pcVar10 = param_1;
  do {
    pcVar9 = pcVar10;
    pcVar4 = pcVar3;
    uVar8 = *(undefined4 *)(pcVar9 + 4);
    uVar7 = *(undefined4 *)(pcVar9 + 8);
    uVar6 = *(undefined4 *)(pcVar9 + 0xc);
    pcVar10 = pcVar9 + 0x10;
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
    *(undefined4 *)(pcVar4 + 4) = uVar8;
    *(undefined4 *)(pcVar4 + 8) = uVar7;
    *(undefined4 *)(pcVar4 + 0xc) = uVar6;
    pcVar3 = pcVar4 + 0x10;
  } while (pcVar10 != param_1 + 0x40);
  cVar1 = pcVar9[0x11];
  cVar2 = pcVar9[0x12];
  pcVar4[0x10] = *pcVar10;
  pcVar4[0x11] = cVar1;
  pcVar4[0x12] = cVar2;
  iVar5 = FUN_00440e4c(DAT_00478414,&local_218,0x53);
  if (iVar5 < 0) {
    uVar6 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_ap_mode_set",0x9e9,"p2p_ap_mode_set send_msg fail!\n");
  }
  else {
    uVar6 = 0;
  }
  iVar5 = 0x32;
  do {
    iVar5 = iVar5 + -1;
    if (*(char *)(DAT_0047841c + 0x9f0) == *param_1) {
      return uVar6;
    }
    usleep(100000);
  } while (iVar5 != 0);
  return uVar6;
}



// ==== p2p_ptz_jump_to_point @ 0040aff4 size=136

undefined4 p2p_ptz_jump_to_point(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
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
  local_18 = 0x4009;
  local_16 = 0x4009;
  local_1c = 8;
  local_10 = param_1;
  local_c = param_2;
  iVar1 = FUN_00440e4c(DAT_00478414,&local_20,0x18);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_ptz_jump_to_point",0xa07,"p2p_ptz_jump_to_point send_msg fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_set_panorama_capture_state @ 0040b07c size=100

undefined4 p2p_set_panorama_capture_state(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x92,local_res0,4);
  uVar2 = 0;
  if (iVar1 < 0) {
    dump_string("p2p_tnp.c","p2p_set_panorama_capture_state",0xa14,
                "p2p_set_panorama_capture_state send_msg to dispatch fail!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== p2p_set_ldc @ 0040b0e0 size=200

undefined4 p2p_set_ldc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x1028,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_ldc",0xa7e,"p2p_set_ldc send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(int *)(DAT_0047841c + 0x4dc) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_baby_cry @ 0040b1a8 size=200

undefined4 p2p_set_baby_cry(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x1029,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_baby_cry",0xa97,"p2p_set_baby_cry send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(int *)(DAT_0047841c + 0x4e0) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_abnormal_sound @ 0040b270 size=200

undefined4 p2p_set_abnormal_sound(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x103a,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_abnormal_sound",0xab0,"p2p_set_abnormal_sound send_msg fail!\n"
               );
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(int *)(DAT_0047841c + 0x4e4) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_abnormal_sound_sensitivity @ 0040b338 size=200

undefined4 p2p_set_abnormal_sound_sensitivity(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x103b,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_abnormal_sound_sensitivity",0xac9,
                "p2p_set_abnormal_sound_sensitivity send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(byte *)(DAT_0047841c + 0x934) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_mic_volume @ 0040b400 size=200

undefined4 p2p_set_mic_volume(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x102a,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_mic_volume",0xae2,"p2p_set_mic_volume send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(int *)(DAT_0047841c + 0x4ec) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_viewpoint_trace @ 0040b4c8 size=200

undefined4 p2p_set_viewpoint_trace(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_res0 [16];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x3002,local_res0,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_viewpoint_trace",0xafb,
                "p2p_set_viewpoint_trace send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(char *)(DAT_0047841c + 0x9b4) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_voice_ctrl @ 0040b590 size=220

undefined4 p2p_set_voice_ctrl(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_res0 [16];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x3003,local_res0,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_voice_ctrl",0xb14,"p2p_set_voice_ctrl send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  if (*(char *)(DAT_0047841c + 0x9b5) != local_res0[0]) {
    iVar1 = 0x31;
    usleep(100000);
    do {
      iVar1 = iVar1 + -1;
      if (*(char *)(DAT_0047841c + 0x9b5) == local_res0[0]) {
        return uVar2;
      }
      usleep(100000);
    } while (iVar1 != 0);
  }
  return uVar2;
}



// ==== p2p_set_alarm_sound @ 0040b66c size=200

undefined4 p2p_set_alarm_sound(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x104,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_alarm_sound",0xb26,"p2p_set_viewpoint_trace send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(byte *)(DAT_0047841c + 0x9ee) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_double_light @ 0040b734 size=200

undefined4 p2p_set_double_light(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x103,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_double_light",0xb3a,"p2p_set_viewpoint_trace send_msg fail!\n")
    ;
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(byte *)(DAT_0047841c + 0x9ed) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_motion_detect_status @ 0040b7fc size=200

undefined4 p2p_set_motion_detect_status(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x102,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_motion_detect_status",0xb4e,
                "p2p_set_viewpoint_trace send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(byte *)(DAT_0047841c + 0x9ef) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_set_lapse_video @ 0040b8c4 size=200

undefined4 p2p_set_lapse_video(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00409a5c(DAT_00478414,0x9a,local_res0,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_set_lapse_video",0xb62,"p2p_set_viewpoint_trace send_msg fail!\n");
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0x32;
  do {
    iVar1 = iVar1 + -1;
    if (*(int *)(DAT_0047841c + 0x9d4) == local_res0[0]) {
      return uVar2;
    }
    usleep(100000);
  } while (iVar1 != 0);
  return uVar2;
}



// ==== p2p_send_ctrl_data @ 0040be44 size=312

undefined4 p2p_send_ctrl_data(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined1 local_428;
  undefined1 local_427;
  undefined4 local_424;
  ushort local_420;
  ushort local_41e;
  ushort local_41a;
  undefined1 auStack_3f8 [976];
  undefined4 local_28;
  
  memset(&local_428,0,0x400);
  local_424 = FUN_00445068(param_5 + 0x28);
  local_427 = 3;
  local_428 = (&DAT_00478432)[param_1 * 0xdc8];
  local_420 = (ushort)((uint)param_2 >> 8) & 0xff | (ushort)(param_2 << 8);
  local_41e = (ushort)((param_3 & 0xffff) >> 8) | (ushort)((param_3 & 0xffff) << 8);
  local_41a = (ushort)((uint)param_5 >> 8) & 0xff | (ushort)(param_5 << 8);
  if (param_5 != 0) {
    memcpy(auStack_3f8,param_4,param_5);
  }
  local_28 = FUN_004061d0((&DAT_0047843c)[param_1 * 0x372],0,&local_428,param_5 + 0x30);
  dump_string("p2p_tnp.c","p2p_send_ctrl_data",0xe4b,"p2p_send_ctrl_data, msg_type=0x%02x\n",param_2
             );
  return local_28;
}



// ==== p2p_set_motion_detect @ 0040bf7c size=488

undefined4 p2p_set_motion_detect(undefined4 param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = FUN_00445068(*param_2);
  local_2c = FUN_00445068(param_2[1]);
  uVar1 = FUN_00445068(param_2[2]);
  local_28 = CONCAT22(local_28._2_2_,uVar1);
  sVar2 = FUN_00445068(param_2[3]);
  local_28 = CONCAT22(-sVar2,(undefined2)local_28);
  uVar1 = FUN_00445068(param_2[4]);
  local_24 = CONCAT22(local_24._2_2_,uVar1);
  sVar2 = FUN_00445068(param_2[5]);
  local_24 = CONCAT22(-sVar2,(undefined2)local_24);
  iVar3 = FUN_00409a5c(DAT_00478414,0x1023,&local_30,0x10);
  if (iVar3 < 0) {
    dump_string("p2p_tnp.c","p2p_set_motion_detect",0x66e,"p2p_set_motion_detect send_msg fail!\n");
    uVar4 = 0xffffffff;
  }
  else {
    dump_string("p2p_tnp.c","p2p_set_motion_detect",0x673,"p2p_set_motion_detect send_msg ok!\n");
    iVar3 = 10;
LAB_0040c05c:
    do {
      iVar6 = *(int *)(DAT_0047841c + 0x5e0);
      iVar3 = iVar3 + -1;
      if (iVar6 == local_30) {
        iVar5 = *(int *)(DAT_0047841c + 0x5e4);
        if ((iVar5 == local_2c) && (*(int *)(DAT_0047841c + 0x5e8) == local_28)) {
          if (*(int *)(DAT_0047841c + 0x5ec) == local_24) goto LAB_0040c0b8;
          usleep(100000);
          if (iVar3 == 0) break;
          goto LAB_0040c05c;
        }
      }
      usleep(100000);
    } while (iVar3 != 0);
    iVar6 = *(int *)(DAT_0047841c + 0x5e0);
    iVar5 = *(int *)(DAT_0047841c + 0x5e4);
LAB_0040c0b8:
    iVar3 = DAT_0047841c;
    local_48 = FUN_00445068(iVar6);
    local_44 = FUN_00445068(iVar5);
    local_40 = FUN_00445068((int)*(short *)(iVar3 + 0x5e8));
    local_3c = FUN_00445068(-(int)*(short *)(iVar3 + 0x5ea));
    local_38 = FUN_00445068((int)*(short *)(iVar3 + 0x5ec));
    local_34 = FUN_00445068(-(int)*(short *)(iVar3 + 0x5ee));
    uVar4 = p2p_send_ctrl_data(param_1,0x1326,param_3,&local_48,0x18);
  }
  return uVar4;
}



// ==== p2p_set_video_backup_state @ 0040c210 size=372

undefined4 p2p_set_video_backup_state(undefined4 param_1,byte *param_2,undefined2 param_3)

{
  int iVar1;
  uint local_38 [7];
  
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  if (((*param_2 < 2) && (param_2[2] < 4)) && (param_2[3] < 2)) {
    iVar1 = FUN_00409a5c(DAT_00478414,0x87,param_2,0x18);
    if (iVar1 < 0) {
      dump_string("p2p_tnp.c","p2p_set_video_backup_state",0x72b,
                  "p2p_set_video_backup_state fail!\n");
      return 0xffffffff;
    }
    iVar1 = 10;
    do {
      iVar1 = iVar1 + -1;
      if (((*(byte *)(DAT_0047841c + 0x98c) == *param_2) &&
          (*(byte *)(DAT_0047841c + 0x98d) == param_2[1])) &&
         ((*(byte *)(DAT_0047841c + 0x98e) == param_2[2] &&
          (*(byte *)(DAT_0047841c + 0x98f) == param_2[3])))) break;
      usleep(100000);
    } while (iVar1 != 0);
    local_38[0] = local_38[0] & 0xffffff00;
  }
  else {
    local_38[0] = 1;
  }
  p2p_send_ctrl_data(param_1,0x1354,param_3,local_38,0x18);
  return 0;
}



// ==== p2p_ptz_preset_add @ 0040c4cc size=544

undefined4 p2p_ptz_preset_add(undefined4 param_1,undefined2 param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined2 local_40;
  ushort uStack_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_30 [12];
  
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  iVar9 = 0;
  iVar3 = DAT_0047841c;
  pcVar11 = local_30;
  do {
    while (piVar1 = (int *)(iVar3 + 0x8b8), iVar3 = iVar3 + 0xc, *piVar1 == 1) {
      pcVar12 = pcVar11 + 1;
      *pcVar11 = '\x01';
      iVar9 = (iVar9 + 1) * 0x1000000 >> 0x18;
      pcVar11 = pcVar12;
      if (pcVar12 == local_30 + 8) goto LAB_0040c554;
    }
    pcVar11 = pcVar11 + 1;
  } while (pcVar11 != local_30 + 8);
LAB_0040c554:
  iVar3 = FUN_00409a5c(DAT_00478414,0x4000,0,0);
  if (iVar3 < 0) {
    uVar10 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_ptz_preset_add",0x8a6,"p2p_ptz_preset_add send_msg fail!\n");
  }
  else {
    uVar10 = 0;
  }
  iVar3 = 0x32;
  do {
    iVar13 = 0;
    iVar5 = 0;
    do {
      while (iVar4 = DAT_0047841c + iVar13, iVar13 = iVar13 + 0xc, *(int *)(iVar4 + 0x8b8) == 1) {
        iVar5 = (iVar5 + 1) * 0x1000000 >> 0x18;
        if (iVar13 == 0x60) goto LAB_0040c5a8;
      }
    } while (iVar13 != 0x60);
LAB_0040c5a8:
    uVar8 = 0x100;
    if (iVar5 == iVar9 + 1) break;
    iVar3 = iVar3 + -1;
    usleep(20000);
    uVar8 = 0;
  } while (iVar3 != 0);
  uVar7 = 0;
  iVar3 = 1;
  local_38 = 0;
  iVar9 = 0;
  local_34 = 0;
  iVar5 = DAT_0047841c;
  do {
    piVar1 = (int *)(iVar5 + 0x8b8);
    iVar5 = iVar5 + 0xc;
    if (*piVar1 == 1) {
      iVar13 = (iVar9 + 1) * 0x1000000;
      *(char *)((int)&local_3c + iVar3 + 3) = (char)iVar3;
      iVar9 = iVar13 >> 0x18;
      bVar6 = (byte)((uint)iVar13 >> 0x18);
      uVar2 = (ushort)((uint)iVar3 >> 8) & 0xff | (ushort)(iVar3 << 8);
      if (*(char *)((int)&local_34 + iVar3 + 3) != '\0') goto LAB_0040c60c;
    }
    else {
LAB_0040c60c:
      bVar6 = (byte)iVar9;
      uVar2 = uVar7;
    }
    uVar7 = uVar2;
    iVar3 = iVar3 + 1;
    if (iVar3 == 9) {
      _local_40 = CONCAT22(uVar7,uVar8);
      local_3c = (uint)bVar6;
      p2p_send_ctrl_data(param_1,0x4001,param_2,&local_40,0x10);
      return uVar10;
    }
  } while( true );
}



// ==== p2p_ptz_preset_del @ 0040c6ec size=400

undefined4 p2p_ptz_preset_del(undefined4 param_1,int param_2,undefined2 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined2 local_38;
  ushort uStack_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28 [2];
  
  local_28[0] = param_2 + -1;
  iVar2 = FUN_00409a5c(DAT_00478414,0x4001,local_28,4);
  if (iVar2 < 0) {
    uVar6 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_ptz_preset_del",0x8e3,"p2p_ptz_preset_del send_msg fail!\n");
  }
  else {
    uVar6 = 0;
  }
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    if (*(int *)(DAT_0047841c + (param_2 + -1) * 0xc + 0x8b8) == 0) {
      uVar4 = 0x100;
      goto LAB_0040c790;
    }
    usleep(20000);
  } while (iVar2 != 0);
  uVar4 = 0;
LAB_0040c790:
  iVar3 = 1;
  bVar5 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar2 = DAT_0047841c;
  do {
    while (piVar1 = (int *)(iVar2 + 0x8b8), iVar2 = iVar2 + 0xc, *piVar1 == 1) {
      *(char *)((int)&local_34 + iVar3 + 3) = (char)iVar3;
      iVar3 = iVar3 + 1;
      bVar5 = bVar5 + 1;
      if (iVar3 == 9) goto LAB_0040c7e4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 9);
LAB_0040c7e4:
  local_34 = (uint)bVar5;
  _local_38 = CONCAT22((ushort)((uint)param_2 >> 8) & 0xff | (ushort)(param_2 << 8),uVar4);
  p2p_send_ctrl_data(param_1,0x4003,param_3,&local_38,0x10);
  return uVar6;
}



// ==== p2p_ptz_preset_call @ 0040c87c size=312

undefined4 p2p_ptz_preset_call(undefined4 param_1,int param_2,undefined2 param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 local_30;
  ushort uStack_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [2];
  
  local_20[0] = param_2 + -1;
  uVar4 = 0;
  iVar2 = FUN_00409a5c(DAT_00478414,0x4002,local_20,4);
  if (iVar2 < 0) {
    uVar4 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_ptz_preset_call",0x916,"p2p_ptz_preset_call send_msg fail!\n");
  }
  iVar5 = 1;
  bVar3 = 0;
  local_28 = 0;
  local_24 = 0;
  iVar2 = DAT_0047841c;
  do {
    while (piVar1 = (int *)(iVar2 + 0x8b8), iVar2 = iVar2 + 0xc, *piVar1 != 1) {
      iVar5 = iVar5 + 1;
      if (iVar5 == 9) goto LAB_0040c92c;
    }
    *(char *)((int)&local_2c + iVar5 + 3) = (char)iVar5;
    iVar5 = iVar5 + 1;
    bVar3 = bVar3 + 1;
  } while (iVar5 != 9);
LAB_0040c92c:
  _local_30 = CONCAT22((ushort)((uint)param_2 >> 8) & 0xff | (ushort)(param_2 << 8),0x100);
  local_2c = (uint)bVar3;
  p2p_send_ctrl_data(param_1,0x400d,param_3,&local_30,0x10);
  return uVar4;
}



// ==== p2p_ptz_set_cruise_stay_time @ 0040c9b4 size=164

undefined4
p2p_ptz_set_cruise_stay_time
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  iVar1 = FUN_00409a5c(DAT_00478414,0x4003,&local_18,8);
  uVar2 = 0;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_ptz_set_cruise_stay_time",0x93b,
                "p2p_ptz_set_cruise_stay_time send_msg fail!\n");
  }
  p2p_send_ctrl_data(param_1,0x4008,param_4,0,0);
  return uVar2;
}



// ==== p2p_ptz_set_cruise_period @ 0040ca58 size=164

undefined4
p2p_ptz_set_cruise_period
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  iVar1 = FUN_00409a5c(DAT_00478414,0x400a,&local_18,8);
  uVar2 = 0;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_ptz_set_cruise_period",0x95d,
                "p2p_ptz_set_cruise_period send_msg fail!\n");
  }
  p2p_send_ctrl_data(param_1,0x400a,param_4,0,0);
  return uVar2;
}



// ==== p2p_ptz_set_motion_track @ 0040cafc size=160

undefined4 p2p_ptz_set_motion_track(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res4 [3];
  
  uVar2 = 0;
  local_res4[0] = param_2;
  iVar1 = FUN_00409a5c(DAT_00478414,0x400b,local_res4,4);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_ptz_set_motion_track",0x97a,
                "p2p_ptz_set_motion_track send_msg fail!\n");
  }
  p2p_send_ctrl_data(param_1,0x400c,param_3,0,0);
  return uVar2;
}



// ==== p2p_ptz_set_cruise @ 0040cb9c size=240

undefined4 p2p_ptz_set_cruise(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    iVar1 = FUN_00409a5c(DAT_00478414,0x4004,0,0);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
      dump_string("p2p_tnp.c","p2p_ptz_set_cruise",0x999,"p2p_ptz_cruise_start send_msg fail!\n");
      goto LAB_0040cbd0;
    }
  }
  else if ((param_2 == 0) && (iVar1 = FUN_00409a5c(DAT_00478414,0x4005,0,0), iVar1 < 0)) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_ptz_set_cruise",0x9a1,"p2p_ptz_cruise_stop send_msg fail!\n");
    goto LAB_0040cbd0;
  }
  uVar2 = 0;
LAB_0040cbd0:
  p2p_send_ctrl_data(param_1,0x4011,param_3,0,0);
  return uVar2;
}



// ==== p2p_start_panorama_capture @ 0040cc8c size=296

undefined4 p2p_start_panorama_capture(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28 [2];
  
  iVar1 = *(int *)(DAT_0047841c + 0x4f0);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (iVar1 != 3) goto LAB_0040cd18;
    p2p_set_panorama_capture_state(0);
  }
  iVar1 = FUN_00409a5c(DAT_00478414,0x6000,0,0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_start_panorama_capture",0xa35,
                "p2p_start_panorama_capture send_msg to cloud fail!\n");
    iVar1 = *(int *)(DAT_0047841c + 0x4f0);
  }
  else {
    uVar2 = 0;
    iVar1 = *(int *)(DAT_0047841c + 0x4f0);
  }
LAB_0040cd18:
  local_28[0] = FUN_00445068(iVar1);
  dump_string("p2p_tnp.c","p2p_start_panorama_capture",0xa3c,"panorama_capture_state [0x%x]\n",iVar1
             );
  p2p_send_ctrl_data(param_1,0x4021,param_2,local_28,4);
  return uVar2;
}



// ==== p2p_abort_panorama_capture @ 0040cdb4 size=156

undefined4 p2p_abort_panorama_capture(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00409a5c(DAT_00478414,0x6001,0,0);
  uVar2 = 0;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_abort_panorama_capture",0xa49,
                "p2p_abort_panorama_capture send_msg to cloud fail!\n");
  }
  p2p_send_ctrl_data(param_1,0x4023,param_2,0,0);
  return uVar2;
}



// ==== p2p_sync_info_from_server @ 0040cefc size=180

undefined4 p2p_sync_info_from_server(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  iVar1 = FUN_00409a5c(DAT_00478414,0x89,0,0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
    dump_string("p2p_tnp.c","p2p_sync_info_from_server",0xa6a,
                "p2p_sync_info_from_server send_msg fail!\n");
  }
  else {
    uVar2 = 0;
    dump_string("p2p_tnp.c","p2p_sync_info_from_server",0xa6f,
                "p2p_sync_info_from_server send_msg ok!\n");
  }
  p2p_send_ctrl_data(param_1,0x3c1,param_2,local_18,4);
  return uVar2;
}



// ==== p2p_send_frame_data @ 0040e27c size=1736

undefined4
p2p_send_frame_data(int param_1,char param_2,int param_3,int param_4,undefined4 *param_5,
                   undefined1 *param_6,int param_7)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
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
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  int local_3c;
  int local_38 [2];
  undefined4 *local_30;
  undefined4 *local_2c;
  
  local_40 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_38[0] = 0;
  local_3c = 0;
  if (param_6 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  iVar12 = param_1 * 0xdc8;
  local_41 = 0x30;
  local_44 = *(undefined2 *)(&DAT_00479158 + iVar12);
  local_50 = *(undefined4 *)(&DAT_0047914c + iVar12);
  local_4c = *(undefined4 *)(&DAT_00479150 + iVar12);
  local_48 = *(undefined4 *)(&DAT_00479154 + iVar12);
  local_42 = (&DAT_0047915a)[iVar12];
  uVar4 = FUN_00445068(param_7 + 0x18);
  *(undefined4 *)(param_6 + 4) = uVar4;
  param_6[1] = (char)param_3;
  *param_6 = (&DAT_00478432)[iVar12];
  puVar9 = DAT_0047841c;
  if (param_3 == 1) {
    if (param_2 == '\x01') {
      uVar4 = 2;
      if (param_4 != 1) {
        uVar4 = 3;
      }
      param_6[0x19] = (char)DAT_0047841c[0x226];
    }
    else {
      uVar4 = 4;
      if (param_4 != 1) {
        uVar4 = 5;
      }
      param_6[0x19] = 0;
    }
    uVar2 = *(ushort *)((int)param_5 + 10);
    uVar3 = *(short *)(&DAT_00478438 + param_1 * 0xdc8) + 1;
    *(ushort *)(&DAT_00478438 + param_1 * 0xdc8) = uVar3;
    if ((uVar2 & 0x40) == 0) {
      *(undefined2 *)(param_6 + 8) = 0x4e00;
    }
    else {
      *(undefined2 *)(param_6 + 8) = 0x5100;
    }
    iVar12 = param_1 * 0xdc8;
    param_6[10] = (char)param_4;
    param_6[0xc] = (char)*(undefined2 *)(param_5 + 4);
    uVar2 = *(ushort *)(&DAT_00478434 + iVar12);
    uVar1 = *(ushort *)(&DAT_00478436 + iVar12);
    uVar7 = *param_5;
    *(ushort *)(param_6 + 0xe) = uVar3 >> 8 | uVar3 * 0x100;
    *(ushort *)(param_6 + 0x10) = uVar2 >> 8 | uVar2 << 8;
    *(ushort *)(param_6 + 0x12) = uVar1 >> 8 | uVar1 << 8;
    local_2c = puVar9;
    uVar7 = FUN_00445068(uVar7);
    uVar8 = local_2c[0x165];
    *(undefined4 *)(param_6 + 0x14) = uVar7;
    param_6[0x1b] = (char)uVar8;
    param_6[0x1a] = (char)local_2c[0x166];
    if ((((&DAT_00478429)[iVar12] == '\x01') && (param_4 == 1)) && (0x23 < param_7)) {
      local_2c = (undefined4 *)(param_6 + 0x34);
      local_30 = (undefined4 *)(param_6 + 0x24);
      FUN_004061f0(&DAT_0046c2c0,&local_50,0x10,0,0);
      FUN_00406200(&DAT_0046c2c0,&local_70,local_30,0x10);
      *local_30 = local_70;
      local_30[1] = local_6c;
      local_30[2] = local_68;
      local_30[3] = local_64;
      FUN_004061f0(&DAT_0046c2c0,&local_50,0x10,0,0);
      FUN_00406200(&DAT_0046c2c0,&local_70,local_2c,0x10);
      *local_2c = local_70;
      local_2c[1] = local_6c;
      local_2c[2] = local_68;
      local_2c[3] = local_64;
    }
  }
  else {
    uVar4 = 1;
    if (param_3 != 2) {
      return 0xffffffff;
    }
    uVar2 = *(short *)(&DAT_0047843a + iVar12) + 1;
    *(ushort *)(&DAT_0047843a + iVar12) = uVar2;
    param_6[10] = 0x1b;
    uVar7 = *param_5;
    *(undefined2 *)(param_6 + 8) = 0x8a00;
    *(ushort *)(param_6 + 0xe) = uVar2 >> 8 | uVar2 * 0x100;
    uVar7 = FUN_00445068(uVar7);
    *(undefined4 *)(param_6 + 0x14) = uVar7;
  }
  uVar7 = FUN_00445068(param_5[1]);
  *(undefined4 *)(param_6 + 0x1c) = uVar7;
  uVar7 = *(undefined4 *)(&DAT_00478440 + param_1 * 0xdc8);
  param_6[0xb] = param_2 != '\x01';
  puVar9 = DAT_0047841c;
  param_6[0xd] = (char)uVar7;
  param_6[0x18] = 0;
  if ((puVar9[0x225] == 1) && ((&DAT_0047842d)[param_1 * 0xdc8] == '\x01')) {
    FUN_00440868(param_6 + 0x20,param_7,0,param_7);
  }
  if ((*(int *)(&DAT_0047844c + param_1 * 0xdc8) == 1) &&
     ((&DAT_0047842e)[param_1 * 0xdc8] == '\x01')) {
    if (param_2 == '\x01') {
      FUN_00408e9c((&DAT_0047843c)[param_1 * 0x372],2,&local_3c,0);
    }
    else {
      FUN_00408e9c((&DAT_0047843c)[param_1 * 0x372],4,&local_3c,0);
    }
    if ((local_3c == 0) || ((param_3 == 1 && (param_4 == 1)))) {
      iVar12 = param_1 * 0xdc8;
      uVar5 = FUN_00408f0c(iVar12 + 0x478470);
      if (uVar5 != 0) {
        (&DAT_0047842e)[iVar12] = 0;
        uVar11 = (uint)(*(int *)(&DAT_00478460 + iVar12) - local_3c) / uVar5;
        if (uVar5 == 0) {
          trap(0x1c00);
        }
        *(int *)(&DAT_00478460 + iVar12) = local_3c;
        p2p_set_immediate_bitrate(uVar11);
        if ((int)uVar11 < 0x47) {
          if (((int)uVar11 < 0x28) && (*(int *)(&DAT_00478444 + iVar12) == 0)) goto LAB_0040e8b4;
        }
        else if (*(int *)(&DAT_00478444 + iVar12) == 1) {
LAB_0040e8b4:
          iVar12 = param_1 * 0xdc8;
          iVar6 = ((byte)(&DAT_0047842f)[iVar12] + 1) * 0x1000000;
          (&DAT_0047842f)[iVar12] = (char)((uint)iVar6 >> 0x18);
          if (4 < iVar6 >> 0x18) {
            dump_string("p2p_tnp.c","p2p_send_frame_data",0xef4,"switch resolution!\n");
            uVar5 = *(int *)(&DAT_00478444 + iVar12) + 1U & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            *(uint *)(&DAT_00478444 + iVar12) = uVar5;
            (&DAT_0047842f)[param_1 * 0xdc8] = 0;
          }
          goto LAB_0040e420;
        }
        (&DAT_0047842f)[param_1 * 0xdc8] = 0;
      }
    }
  }
LAB_0040e420:
  iVar12 = param_1 * 0xdc8;
  FUN_00408e9c((&DAT_0047843c)[param_1 * 0x372],uVar4,local_38,0);
  if (((&DAT_00478430)[iVar12] == '\0') && (1 < *(ushort *)(&DAT_00478438 + iVar12))) {
    if (param_3 != 1) {
      puVar9 = (undefined4 *)(param_7 + 0x20);
      goto LAB_0040e494;
    }
    puVar9 = (undefined4 *)(param_7 + 0x20);
    if (param_4 != 1) goto LAB_0040e494;
    if (local_38[0] == 0) {
      (&DAT_00478430)[iVar12] = 1;
      p2p_set_tnp_connect_success();
    }
    param_4 = *(int *)(&DAT_0047844c + param_1 * 0xdc8);
  }
  else {
    puVar9 = (undefined4 *)(param_7 + 0x20);
    if ((*(int *)(&DAT_0047844c + param_1 * 0xdc8) != 1) || (param_3 != 1)) goto LAB_0040e494;
  }
  puVar9 = (undefined4 *)(param_7 + 0x20);
  if (param_4 == 1) {
    iVar12 = param_1 * 0xdc8;
    puVar10 = (undefined4 *)(param_7 + 0x20);
    puVar9 = puVar10;
    if ((&DAT_0047842e)[iVar12] == '\0') {
      local_30 = puVar10;
      gettimeofday(iVar12 + 0x478470,0);
      (&DAT_0047842e)[iVar12] = 1;
      puVar9 = local_30;
    }
    *(undefined1 **)(&DAT_00478460 + param_1 * 0xdc8) = (undefined1 *)((int)puVar10 + local_38[0]);
  }
LAB_0040e494:
  uVar4 = FUN_004061d0((&DAT_0047843c)[param_1 * 0x372],uVar4,param_6,puVar9);
  return uVar4;
}



// ==== p2p_send_auth_result @ 0040fe58 size=572

undefined4 p2p_send_auth_result(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined1 local_420;
  undefined1 local_41f;
  undefined4 local_41c;
  ushort local_418;
  ushort local_416;
  undefined4 local_410;
  undefined4 local_20;
  
  memset(&local_420,0,0x400);
  local_416 = (ushort)((param_3 & 0xffff) >> 8) | (ushort)((param_3 & 0xffff) << 8);
  local_41c = 0x28000000;
  local_420 = (&DAT_00478432)[param_1 * 0xdc8];
  local_41f = 3;
  if (param_2 == 0x130a) {
    local_418 = 0xb13;
    goto LAB_0040ff5c;
  }
  if (param_2 < 0x130b) {
    if (param_2 == 0x1300) {
      local_418 = 0x113;
      goto LAB_0040ff5c;
    }
    if (param_2 < 0x1301) {
      if (param_2 == 0x318) {
        local_418 = 0x1903;
        goto LAB_0040ff5c;
      }
      if (param_2 == 0x330) {
        local_418 = 0x3103;
        goto LAB_0040ff5c;
      }
    }
    else {
      if (param_2 == 0x1304) {
        local_418 = 0xc13;
        goto LAB_0040ff5c;
      }
      if (param_2 == 0x1305) {
        local_418 = 0xd13;
        goto LAB_0040ff5c;
      }
      if (param_2 == 0x1302) {
        local_418 = 0xf13;
        goto LAB_0040ff5c;
      }
    }
  }
  else {
    if (param_2 == 0x1315) {
      local_418 = 0x1613;
      goto LAB_0040ff5c;
    }
    if (param_2 < 0x1316) {
      if ((param_2 == 0x1311) || (param_2 == 0x1313)) {
        local_418 = 0x1213;
        goto LAB_0040ff5c;
      }
    }
    else {
      if (param_2 == 0x2347) {
        local_418 = 0x4823;
        goto LAB_0040ff5c;
      }
      if (param_2 == 0xff00) {
        local_418 = 0x1ff;
        goto LAB_0040ff5c;
      }
      if (param_2 == 0x131f) {
        local_418 = 0x2013;
        goto LAB_0040ff5c;
      }
    }
  }
  local_418 = 0xffff;
LAB_0040ff5c:
  local_410 = FUN_00445068(param_4);
  local_20 = FUN_004061d0((&DAT_0047843c)[param_1 * 0x372],0,&local_420,0x30);
  dump_string("p2p_tnp.c","p2p_send_auth_result",0x1335,
              "p2p_send_auth_result, index=%d, type=0x%02x, resp_type=0x%02x, result=%d\n",param_1,
              param_2,local_418 >> 8 | local_418 << 8,param_4);
  return local_20;
}



// ==== p2p_send_unsupported_version_reply @ 00410094 size=528

undefined4 p2p_send_unsupported_version_reply(int param_1,uint param_2,uint param_3)

{
  undefined1 local_418;
  undefined1 local_417;
  undefined4 local_414;
  ushort local_410;
  ushort local_40e;
  undefined4 local_408;
  undefined4 local_18;
  
  memset(&local_418,0,0x400);
  local_40e = (ushort)((param_3 & 0xffff) >> 8) | (ushort)((param_3 & 0xffff) << 8);
  local_414 = 0x28000000;
  local_417 = 3;
  local_418 = 1;
  if (param_2 == 0x130a) {
    local_410 = 0xb13;
    goto LAB_00410174;
  }
  if (param_2 < 0x130b) {
    if (param_2 == 0x1300) {
      local_410 = 0x113;
      goto LAB_00410174;
    }
    if (param_2 < 0x1301) {
      if (param_2 == 0x318) {
        local_410 = 0x1903;
        goto LAB_00410174;
      }
      if (param_2 == 0x330) {
        local_410 = 0x3103;
        goto LAB_00410174;
      }
    }
    else {
      if (param_2 == 0x1304) {
        local_410 = 0xc13;
        goto LAB_00410174;
      }
      if (param_2 == 0x1305) {
        local_410 = 0xd13;
        goto LAB_00410174;
      }
      if (param_2 == 0x1302) {
        local_410 = 0xf13;
        goto LAB_00410174;
      }
    }
  }
  else {
    if (param_2 == 0x1315) {
      local_410 = 0x1613;
      goto LAB_00410174;
    }
    if (param_2 < 0x1316) {
      if ((param_2 == 0x1311) || (param_2 == 0x1313)) {
        local_410 = 0x1213;
        goto LAB_00410174;
      }
    }
    else {
      if (param_2 == 0x2347) {
        local_410 = 0x4823;
        goto LAB_00410174;
      }
      if (param_2 == 0xff00) {
        local_410 = 0x1ff;
        goto LAB_00410174;
      }
      if (param_2 == 0x131f) {
        local_410 = 0x2013;
        goto LAB_00410174;
      }
    }
  }
  local_410 = 0xffff;
LAB_00410174:
  local_408 = 0x3000000;
  local_18 = FUN_004061d0((&DAT_0047843c)[param_1 * 0x372],0,&local_418,0x30);
  dump_string("p2p_tnp.c","p2p_send_unsupported_version_reply",0x138e,
              "p2p_send_auth_result, index=%d, type=0x%02x, resp_type=0x%02x\n",param_1,param_2,
              local_410 >> 8 | local_410 << 8);
  return local_18;
}



