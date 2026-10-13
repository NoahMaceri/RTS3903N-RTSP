/* dispatch — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== entry @ 00401a10 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_004262f0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004262f4)
            (PTR_main_004262e8,param_2,&stack0x00000004,PTR__init_004262ec);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== schedule_power_onoff @ 00401d44 size=964

void schedule_power_onoff(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_58 [24];
  uint local_40;
  int local_2c [2];
  
  if ((*param_1 != 0) && (*(uint *)(DAT_0042640c + 0x608) == (uint)(param_2 != 0))) {
    local_2c[0] = time(0);
    local_2c[0] = local_2c[0] + *(int *)(DAT_0042640c + 0x4b4);
    gmtime_r(local_2c,auStack_58);
    uVar2 = local_40;
    uVar4 = param_1[1];
    uVar1 = local_40 & 0x1f;
    uVar3 = asctime(auStack_58);
    printf(&DAT_00412010,"schedule_power_onoff",0x114d,uVar4,uVar2,1 << uVar1 & uVar4,uVar3);
    printf(&DAT_0041204c,"schedule_power_onoff",0x114e,(local_2c[0] % 0x15180) / 0xe10,
           (local_2c[0] % 0xe10) / 0x3c,(param_1[2] % 0x15180) / 0xe10,(param_1[2] % 0xe10) / 0x3c);
    if (param_1[1] == 0) {
      if (local_2c[0] / 0x3c != param_1[2] / 0x3c) {
        return;
      }
    }
    else {
      if ((param_1[1] >> (local_40 & 0x1f) & 1U) == 0) {
        return;
      }
      if ((local_2c[0] % 0x15180) / 0xe10 != (param_1[2] % 0x15180) / 0xe10) {
        return;
      }
      if ((local_2c[0] % 0xe10) / 0x3c != (param_1[2] % 0xe10) / 0x3c) {
        return;
      }
    }
    FUN_00401c84(param_2);
    sleep(((local_2c[0] / 0x3c) * 0x3c - local_2c[0]) + 0x3c);
  }
  return;
}



// ==== choose_server @ 00404154 size=1016

void choose_server(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_118 [4];
  char local_114 [4];
  char local_110 [4];
  char local_10c [4];
  char local_108 [4];
  char local_104 [2];
  char cStack_102;
  char cStack_101;
  char local_100 [2];
  char cStack_fe;
  char cStack_fd;
  char local_fc [100];
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  memset(local_118,0,0x80);
  memset(&local_58,0,0x40);
  memset(&local_98,0,0x40);
  switch(param_1) {
  default:
    local_118[0] = s_https___api_xiaoyi_com_004129a8[0];
    local_118[1] = s_https___api_xiaoyi_com_004129a8[1];
    local_118[2] = s_https___api_xiaoyi_com_004129a8[2];
    local_118[3] = s_https___api_xiaoyi_com_004129a8[3];
    local_114[0] = s_https___api_xiaoyi_com_004129a8[4];
    local_114[1] = s_https___api_xiaoyi_com_004129a8[5];
    local_114[2] = s_https___api_xiaoyi_com_004129a8[6];
    local_114[3] = s_https___api_xiaoyi_com_004129a8[7];
    local_110[0] = s_https___api_xiaoyi_com_004129a8[8];
    local_110[1] = s_https___api_xiaoyi_com_004129a8[9];
    local_110[2] = s_https___api_xiaoyi_com_004129a8[10];
    local_110[3] = s_https___api_xiaoyi_com_004129a8[0xb];
    local_10c[0] = s_https___api_xiaoyi_com_004129a8[0xc];
    local_10c[1] = s_https___api_xiaoyi_com_004129a8[0xd];
    local_10c[2] = s_https___api_xiaoyi_com_004129a8[0xe];
    local_10c[3] = s_https___api_xiaoyi_com_004129a8[0xf];
    local_108[0] = s_https___api_xiaoyi_com_004129a8[0x10];
    local_108[1] = s_https___api_xiaoyi_com_004129a8[0x11];
    local_108[2] = s_https___api_xiaoyi_com_004129a8[0x12];
    local_108[3] = s_https___api_xiaoyi_com_004129a8[0x13];
    cStack_102 = s_https___api_xiaoyi_com_004129a8[0x16];
    local_104[0] = s_https___api_xiaoyi_com_004129a8[0x14];
    local_104[1] = s_https___api_xiaoyi_com_004129a8[0x15];
    goto LAB_004044dc;
  case 1:
    local_118[0] = s_https___plt_api_xiaoyi_com_004128dc[0];
    local_118[1] = s_https___plt_api_xiaoyi_com_004128dc[1];
    local_118[2] = s_https___plt_api_xiaoyi_com_004128dc[2];
    local_118[3] = s_https___plt_api_xiaoyi_com_004128dc[3];
    local_114[0] = s_https___plt_api_xiaoyi_com_004128dc[4];
    local_114[1] = s_https___plt_api_xiaoyi_com_004128dc[5];
    local_114[2] = s_https___plt_api_xiaoyi_com_004128dc[6];
    local_114[3] = s_https___plt_api_xiaoyi_com_004128dc[7];
    local_110[0] = s_https___plt_api_xiaoyi_com_004128dc[8];
    local_110[1] = s_https___plt_api_xiaoyi_com_004128dc[9];
    local_110[2] = s_https___plt_api_xiaoyi_com_004128dc[10];
    local_110[3] = s_https___plt_api_xiaoyi_com_004128dc[0xb];
    local_10c[0] = s_https___plt_api_xiaoyi_com_004128dc[0xc];
    local_10c[1] = s_https___plt_api_xiaoyi_com_004128dc[0xd];
    local_10c[2] = s_https___plt_api_xiaoyi_com_004128dc[0xe];
    local_10c[3] = s_https___plt_api_xiaoyi_com_004128dc[0xf];
    local_108[0] = s_https___plt_api_xiaoyi_com_004128dc[0x10];
    local_108[1] = s_https___plt_api_xiaoyi_com_004128dc[0x11];
    local_108[2] = s_https___plt_api_xiaoyi_com_004128dc[0x12];
    local_108[3] = s_https___plt_api_xiaoyi_com_004128dc[0x13];
    local_104[0] = s_https___plt_api_xiaoyi_com_004128dc[0x14];
    local_104[1] = s_https___plt_api_xiaoyi_com_004128dc[0x15];
    cStack_102 = s_https___plt_api_xiaoyi_com_004128dc[0x16];
    cStack_101 = s_https___plt_api_xiaoyi_com_004128dc[0x17];
    cStack_fe = s_https___plt_api_xiaoyi_com_004128dc[0x1a];
    local_100[0] = s_https___plt_api_xiaoyi_com_004128dc[0x18];
    local_100[1] = s_https___plt_api_xiaoyi_com_004128dc[0x19];
LAB_004044dc:
    local_98 = 0x6e63696d;
    local_94 = 0;
    goto LAB_00404238;
  case 2:
    pcVar1 = local_118;
    pcVar6 = "http://familymonitor-interface-test.mi-ae.com.sg";
    do {
      pcVar7 = pcVar6 + 0x10;
      pcVar2 = pcVar1 + 0x10;
      uVar5 = *(undefined4 *)(pcVar6 + 4);
      uVar4 = *(undefined4 *)(pcVar6 + 8);
      uVar3 = *(undefined4 *)(pcVar6 + 0xc);
      *(undefined4 *)pcVar1 = *(undefined4 *)pcVar6;
      *(undefined4 *)(pcVar1 + 4) = uVar5;
      *(undefined4 *)(pcVar1 + 8) = uVar4;
      *(undefined4 *)(pcVar1 + 0xc) = uVar3;
      pcVar1 = pcVar2;
      pcVar6 = pcVar7;
    } while (pcVar7 != "");
    *pcVar2 = s_http___familymonitor_interface_t_004128f8[0x30];
    break;
  case 3:
  case 4:
    local_118[0] = s_https___api_xiaoyi_com_tw_0041292c[0];
    local_118[1] = s_https___api_xiaoyi_com_tw_0041292c[1];
    local_118[2] = s_https___api_xiaoyi_com_tw_0041292c[2];
    local_118[3] = s_https___api_xiaoyi_com_tw_0041292c[3];
    local_114[0] = s_https___api_xiaoyi_com_tw_0041292c[4];
    local_114[1] = s_https___api_xiaoyi_com_tw_0041292c[5];
    local_114[2] = s_https___api_xiaoyi_com_tw_0041292c[6];
    local_114[3] = s_https___api_xiaoyi_com_tw_0041292c[7];
    local_110[0] = s_https___api_xiaoyi_com_tw_0041292c[8];
    local_110[1] = s_https___api_xiaoyi_com_tw_0041292c[9];
    local_110[2] = s_https___api_xiaoyi_com_tw_0041292c[10];
    local_110[3] = s_https___api_xiaoyi_com_tw_0041292c[0xb];
    local_10c[0] = s_https___api_xiaoyi_com_tw_0041292c[0xc];
    local_10c[1] = s_https___api_xiaoyi_com_tw_0041292c[0xd];
    local_10c[2] = s_https___api_xiaoyi_com_tw_0041292c[0xe];
    local_10c[3] = s_https___api_xiaoyi_com_tw_0041292c[0xf];
    local_108[0] = s_https___api_xiaoyi_com_tw_0041292c[0x10];
    local_108[1] = s_https___api_xiaoyi_com_tw_0041292c[0x11];
    local_108[2] = s_https___api_xiaoyi_com_tw_0041292c[0x12];
    local_108[3] = s_https___api_xiaoyi_com_tw_0041292c[0x13];
    local_104[0] = s_https___api_xiaoyi_com_tw_0041292c[0x14];
    local_104[1] = s_https___api_xiaoyi_com_tw_0041292c[0x15];
    cStack_102 = s_https___api_xiaoyi_com_tw_0041292c[0x16];
    cStack_101 = s_https___api_xiaoyi_com_tw_0041292c[0x17];
    local_100[0] = s_https___api_xiaoyi_com_tw_0041292c[0x18];
    local_100[1] = s_https___api_xiaoyi_com_tw_0041292c[0x19];
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    local_118[0] = s_https___plt_api_sg_xiaoyi_com_00412948[0];
    local_118[1] = s_https___plt_api_sg_xiaoyi_com_00412948[1];
    local_118[2] = s_https___plt_api_sg_xiaoyi_com_00412948[2];
    local_118[3] = s_https___plt_api_sg_xiaoyi_com_00412948[3];
    local_114[0] = s_https___plt_api_sg_xiaoyi_com_00412948[4];
    local_114[1] = s_https___plt_api_sg_xiaoyi_com_00412948[5];
    local_114[2] = s_https___plt_api_sg_xiaoyi_com_00412948[6];
    local_114[3] = s_https___plt_api_sg_xiaoyi_com_00412948[7];
    local_110[0] = s_https___plt_api_sg_xiaoyi_com_00412948[8];
    local_110[1] = s_https___plt_api_sg_xiaoyi_com_00412948[9];
    local_110[2] = s_https___plt_api_sg_xiaoyi_com_00412948[10];
    local_110[3] = s_https___plt_api_sg_xiaoyi_com_00412948[0xb];
    local_10c[0] = s_https___plt_api_sg_xiaoyi_com_00412948[0xc];
    local_10c[1] = s_https___plt_api_sg_xiaoyi_com_00412948[0xd];
    local_10c[2] = s_https___plt_api_sg_xiaoyi_com_00412948[0xe];
    local_10c[3] = s_https___plt_api_sg_xiaoyi_com_00412948[0xf];
    local_108[0] = s_https___plt_api_sg_xiaoyi_com_00412948[0x10];
    local_108[1] = s_https___plt_api_sg_xiaoyi_com_00412948[0x11];
    local_108[2] = s_https___plt_api_sg_xiaoyi_com_00412948[0x12];
    local_108[3] = s_https___plt_api_sg_xiaoyi_com_00412948[0x13];
    local_104[0] = s_https___plt_api_sg_xiaoyi_com_00412948[0x14];
    local_104[1] = s_https___plt_api_sg_xiaoyi_com_00412948[0x15];
    cStack_102 = s_https___plt_api_sg_xiaoyi_com_00412948[0x16];
    cStack_101 = s_https___plt_api_sg_xiaoyi_com_00412948[0x17];
    local_100[0] = s_https___plt_api_sg_xiaoyi_com_00412948[0x18];
    local_100[1] = s_https___plt_api_sg_xiaoyi_com_00412948[0x19];
    cStack_fe = s_https___plt_api_sg_xiaoyi_com_00412948[0x1a];
    cStack_fd = s_https___plt_api_sg_xiaoyi_com_00412948[0x1b];
    local_fc[0] = s_https___plt_api_sg_xiaoyi_com_00412948[0x1c];
    local_fc[1] = s_https___plt_api_sg_xiaoyi_com_00412948[0x1d];
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    local_118[0] = s_https___plt_api_de_xiaoyi_com_00412968[0];
    local_118[1] = s_https___plt_api_de_xiaoyi_com_00412968[1];
    local_118[2] = s_https___plt_api_de_xiaoyi_com_00412968[2];
    local_118[3] = s_https___plt_api_de_xiaoyi_com_00412968[3];
    local_fc[0] = s_https___plt_api_de_xiaoyi_com_00412968[0x1c];
    local_fc[1] = s_https___plt_api_de_xiaoyi_com_00412968[0x1d];
    local_98 = 0x7565696d;
    local_114[0] = s_https___plt_api_de_xiaoyi_com_00412968[4];
    local_114[1] = s_https___plt_api_de_xiaoyi_com_00412968[5];
    local_114[2] = s_https___plt_api_de_xiaoyi_com_00412968[6];
    local_114[3] = s_https___plt_api_de_xiaoyi_com_00412968[7];
    local_110[0] = s_https___plt_api_de_xiaoyi_com_00412968[8];
    local_110[1] = s_https___plt_api_de_xiaoyi_com_00412968[9];
    local_110[2] = s_https___plt_api_de_xiaoyi_com_00412968[10];
    local_110[3] = s_https___plt_api_de_xiaoyi_com_00412968[0xb];
    local_10c[0] = s_https___plt_api_de_xiaoyi_com_00412968[0xc];
    local_10c[1] = s_https___plt_api_de_xiaoyi_com_00412968[0xd];
    local_10c[2] = s_https___plt_api_de_xiaoyi_com_00412968[0xe];
    local_10c[3] = s_https___plt_api_de_xiaoyi_com_00412968[0xf];
    local_108[0] = s_https___plt_api_de_xiaoyi_com_00412968[0x10];
    local_108[1] = s_https___plt_api_de_xiaoyi_com_00412968[0x11];
    local_108[2] = s_https___plt_api_de_xiaoyi_com_00412968[0x12];
    local_108[3] = s_https___plt_api_de_xiaoyi_com_00412968[0x13];
    local_104[0] = s_https___plt_api_de_xiaoyi_com_00412968[0x14];
    local_104[1] = s_https___plt_api_de_xiaoyi_com_00412968[0x15];
    cStack_102 = s_https___plt_api_de_xiaoyi_com_00412968[0x16];
    cStack_101 = s_https___plt_api_de_xiaoyi_com_00412968[0x17];
    local_100[0] = s_https___plt_api_de_xiaoyi_com_00412968[0x18];
    local_100[1] = s_https___plt_api_de_xiaoyi_com_00412968[0x19];
    cStack_fe = s_https___plt_api_de_xiaoyi_com_00412968[0x1a];
    cStack_fd = s_https___plt_api_de_xiaoyi_com_00412968[0x1b];
    local_94 = 0;
    goto LAB_00404238;
  case 0x11:
    local_118[0] = s_https___plt_api_us_xiaoyi_com_00412988[0];
    local_118[1] = s_https___plt_api_us_xiaoyi_com_00412988[1];
    local_118[2] = s_https___plt_api_us_xiaoyi_com_00412988[2];
    local_118[3] = s_https___plt_api_us_xiaoyi_com_00412988[3];
    local_114[0] = s_https___plt_api_us_xiaoyi_com_00412988[4];
    local_114[1] = s_https___plt_api_us_xiaoyi_com_00412988[5];
    local_114[2] = s_https___plt_api_us_xiaoyi_com_00412988[6];
    local_114[3] = s_https___plt_api_us_xiaoyi_com_00412988[7];
    local_110[0] = s_https___plt_api_us_xiaoyi_com_00412988[8];
    local_110[1] = s_https___plt_api_us_xiaoyi_com_00412988[9];
    local_110[2] = s_https___plt_api_us_xiaoyi_com_00412988[10];
    local_110[3] = s_https___plt_api_us_xiaoyi_com_00412988[0xb];
    local_10c[0] = s_https___plt_api_us_xiaoyi_com_00412988[0xc];
    local_10c[1] = s_https___plt_api_us_xiaoyi_com_00412988[0xd];
    local_10c[2] = s_https___plt_api_us_xiaoyi_com_00412988[0xe];
    local_10c[3] = s_https___plt_api_us_xiaoyi_com_00412988[0xf];
    local_108[0] = s_https___plt_api_us_xiaoyi_com_00412988[0x10];
    local_108[1] = s_https___plt_api_us_xiaoyi_com_00412988[0x11];
    local_108[2] = s_https___plt_api_us_xiaoyi_com_00412988[0x12];
    local_108[3] = s_https___plt_api_us_xiaoyi_com_00412988[0x13];
    local_104[0] = s_https___plt_api_us_xiaoyi_com_00412988[0x14];
    local_104[1] = s_https___plt_api_us_xiaoyi_com_00412988[0x15];
    cStack_102 = s_https___plt_api_us_xiaoyi_com_00412988[0x16];
    cStack_101 = s_https___plt_api_us_xiaoyi_com_00412988[0x17];
    local_100[0] = s_https___plt_api_us_xiaoyi_com_00412988[0x18];
    local_100[1] = s_https___plt_api_us_xiaoyi_com_00412988[0x19];
    cStack_fe = s_https___plt_api_us_xiaoyi_com_00412988[0x1a];
    cStack_fd = s_https___plt_api_us_xiaoyi_com_00412988[0x1b];
    local_fc[0] = s_https___plt_api_us_xiaoyi_com_00412988[0x1c];
    local_fc[1] = s_https___plt_api_us_xiaoyi_com_00412988[0x1d];
    local_98 = 0x7375696d;
    local_94 = 0;
    goto LAB_00404238;
  }
  local_98 = 0x737761;
LAB_00404238:
  local_52 = 0;
  local_54 = 0x4a50;
  local_58 = 0x6c616552;
  FUN_00410740("dispatch.c","choose_server",0x1f5,
               "in choose_server, region_id = %d, api_server = %s, sname = %s, dlproto = %s\n",
               param_1,local_118,&local_58,&local_98);
  memset(DAT_0042640c + 0xc,0,0x80);
  memset(DAT_0042640c + 0x10c,0,0x40);
  memset(DAT_0042640c + 0x14c,0,0x40);
  snprintf(DAT_0042640c + 0xc,0x80,"%s",local_118);
  snprintf(DAT_0042640c + 0x10c,0x40,"%s",&local_58);
  snprintf(DAT_0042640c + 0x14c,0x40,"%s",&local_98);
  return;
}



// ==== link_audio_file @ 00404848 size=192

void link_audio_file(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (*(int *)(DAT_0042640c + 8) == 0) {
    pcVar4 = "/home/app/audio_file/simplecn";
  }
  else {
    pcVar4 = "/home/app/audio_file/us";
  }
  unlink("/tmp/audio");
  iVar1 = symlink(pcVar4,"/tmp/audio");
  if (-1 < iVar1) {
    return;
  }
  puVar2 = (undefined4 *)__errno_location();
  uVar5 = *puVar2;
  uVar3 = strerror(uVar5);
  printf(&DAT_00412a54,"link_audio_file",0x2ce,pcVar4,"/tmp/audio",uVar5,uVar3);
  return;
}



// ==== save_config @ 004083dc size=1088

undefined4 save_config(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  
  iVar12 = DAT_0042640c;
  DAT_00426438 = *(undefined4 *)(DAT_0042640c + 0x604);
  DAT_00426440 = *(undefined4 *)(DAT_0042640c + 0x60c);
  puVar18 = (undefined4 *)(DAT_0042640c + 0xa30);
  DAT_00426444 = *(undefined4 *)(DAT_0042640c + 0x610);
  DAT_00426448 = *(undefined4 *)(DAT_0042640c + 0x614);
  DAT_0042644c = *(undefined4 *)(DAT_0042640c + 0x5bc);
  DAT_00426560 = *(undefined4 *)(DAT_0042640c + 0x4b4);
  DAT_00426564 = *(undefined4 *)(DAT_0042640c + 0x8a4);
  DAT_004265d4 = *(undefined4 *)(DAT_0042640c + 0x918);
  DAT_004265d8 = *(undefined4 *)(DAT_0042640c + 0x91c);
  DAT_004265dc = *(undefined4 *)(DAT_0042640c + 0x920);
  DAT_004265e0 = *(undefined4 *)(DAT_0042640c + 0x924);
  DAT_00426568 = *(undefined4 *)(DAT_0042640c + 0x8a8);
  DAT_004265e4 = *(undefined4 *)(DAT_0042640c + 0x928);
  DAT_0042656c = *(undefined4 *)(DAT_0042640c + 0x8ac);
  DAT_00426570 = *(undefined4 *)(DAT_0042640c + 0x8b0);
  DAT_0042643c = *(undefined4 *)(DAT_0042640c + 0x608);
  DAT_004265e8 = *(undefined4 *)(DAT_0042640c + 0x600);
  DAT_00426600 = *(undefined1 *)(DAT_0042640c + 0x98c);
  DAT_004266c9 = *(undefined1 *)(DAT_0042640c + 0x9b5);
  DAT_004266cc = *(undefined4 *)(DAT_0042640c + 0x9d4);
  DAT_00426602 = *(undefined1 *)(DAT_0042640c + 0x98e);
  DAT_004266c0 = *(undefined4 *)(DAT_0042640c + 0x4f8);
  DAT_00426603 = *(undefined1 *)(DAT_0042640c + 0x98f);
  DAT_00426604 = *(undefined1 *)(DAT_0042640c + 0x933);
  DAT_004266d8 = *(undefined1 *)(DAT_0042640c + 0x934);
  DAT_00426608 = *(undefined4 *)(DAT_0042640c + 0x4b0);
  DAT_004266b4 = *(undefined4 *)(DAT_0042640c + 0x4dc);
  DAT_004266b8 = *(undefined4 *)(DAT_0042640c + 0x4e0);
  uVar15 = *(uint *)(DAT_0042640c + 0x4e4);
  uVar14 = *(uint *)(DAT_0042640c + 0x4e8);
  uVar13 = *(uint *)(DAT_0042640c + 0x4ec);
  DAT_004266c8 = *(undefined1 *)(DAT_0042640c + 0x9b4);
  DAT_004266d0 = *(undefined1 *)(DAT_0042640c + 0x9ec);
  DAT_00426601 = *(undefined1 *)(DAT_0042640c + 0x98d);
  DAT_00426720 = *(undefined1 *)(DAT_0042640c + 500);
  DAT_00426722 = *(undefined1 *)(DAT_0042640c + 0x9ed);
  DAT_00426721 = *(undefined1 *)(DAT_0042640c + 499);
  DAT_00426723 = *(undefined1 *)(DAT_0042640c + 0x9ee);
  DAT_00426724 = *(undefined1 *)(DAT_0042640c + 0x9ef);
  puVar7 = (undefined4 *)(DAT_0042640c + 0x9f0);
  puVar17 = &DAT_00426725;
  DAT_004266bc = uVar13;
  DAT_004266d4 = uVar15;
  DAT_004266dc = uVar14;
  do {
    puVar16 = puVar17;
    puVar6 = puVar7;
    uVar10 = puVar6[1];
    uVar9 = puVar6[2];
    uVar8 = puVar6[3];
    puVar7 = puVar6 + 4;
    *puVar16 = *puVar6;
    puVar16[1] = uVar10;
    puVar16[2] = uVar9;
    puVar16[3] = uVar8;
    puVar17 = puVar16 + 4;
  } while (puVar7 != puVar18);
  *(undefined1 *)(puVar16 + 4) = *(undefined1 *)puVar7;
  *(undefined1 *)((int)puVar16 + 0x11) = *(undefined1 *)((int)puVar6 + 0x11);
  *(undefined1 *)((int)puVar16 + 0x12) = *(undefined1 *)((int)puVar6 + 0x12);
  snprintf(&DAT_00426450,0x40,"%s",iVar12 + 0x420);
  snprintf(&DAT_00426490,0x40,"%s",DAT_0042640c + 0x460);
  snprintf(&DAT_004264d0,0x40,"%s",DAT_0042640c + 800);
  snprintf(&DAT_004266e0,0x20,"%s",DAT_0042640c + 400);
  snprintf(&DAT_00426700,0x20,"%s",DAT_0042640c + 0x1d0);
  if (*(char *)(DAT_0042640c + 0x7fc) != '\0') {
    DAT_0042660c = 1;
    snprintf(&DAT_00426610,0x80,"%s",DAT_0042640c + 0x7fc);
  }
  iVar12 = DAT_0042640c;
  if (*(int *)(DAT_0042640c + 0x2b8) == 1) {
    iVar12 = DAT_0042640c + 0x275;
    *(undefined4 *)(DAT_0042640c + 0x2b8) = 0;
    snprintf(&DAT_00426694,0x20,"%s",iVar12);
    iVar12 = DAT_0042640c;
  }
  else if (*(int *)(DAT_0042640c + 0x2b8) == 2) {
    *(undefined4 *)(DAT_0042640c + 0x2b8) = 0;
    DAT_00426694 = 0;
    DAT_00426698 = 0;
    DAT_0042669c = 0;
    DAT_004266a0 = 0;
    DAT_004266a4 = 0;
    DAT_004266a8 = 0;
    DAT_004266ac = 0;
    DAT_004266b0 = 0;
  }
  puVar17 = (undefined4 *)(iVar12 + 0x8b8);
  puVar7 = &DAT_00426574;
  do {
    uVar11 = *puVar17;
    uVar10 = puVar17[1];
    uVar9 = puVar17[2];
    uVar8 = puVar17[3];
    puVar17 = puVar17 + 4;
    *puVar7 = uVar11;
    puVar7[1] = uVar10;
    puVar7[2] = uVar9;
    puVar7[3] = uVar8;
    puVar7 = puVar7 + 4;
  } while (puVar17 != (undefined4 *)(iVar12 + 0x918));
  uVar1 = iVar12 + 0x5e3U & 3;
  uVar2 = iVar12 + 0x5e7U & 3;
  uVar3 = iVar12 + 0x5ebU & 3;
  uVar4 = iVar12 + 0x5efU & 3;
  uVar5 = iVar12 + 0x5e0U & 3;
  DAT_004265f0 = (*(int *)((iVar12 + 0x5e3U) - uVar1) << (3 - uVar1) * 8 |
                 uVar15 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar5) * 8 |
                 *(uint *)((iVar12 + 0x5e0U) - uVar5) >> uVar5 * 8;
  uVar15 = iVar12 + 0x5e4U & 3;
  DAT_004265f4 = (*(int *)((iVar12 + 0x5e7U) - uVar2) << (3 - uVar2) * 8 |
                 uVar14 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar15) * 8 |
                 *(uint *)((iVar12 + 0x5e4U) - uVar15) >> uVar15 * 8;
  uVar14 = iVar12 + 0x5e8U & 3;
  DAT_004265f8 = (*(int *)((iVar12 + 0x5ebU) - uVar3) << (3 - uVar3) * 8 |
                 uVar13 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar14) * 8 |
                 *(uint *)((iVar12 + 0x5e8U) - uVar14) >> uVar14 * 8;
  uVar13 = iVar12 + 0x5ecU & 3;
  DAT_004265fc = (*(int *)((iVar12 + 0x5efU) - uVar4) << (3 - uVar4) * 8 |
                 (uint)(iVar12 + 0x918) & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar13) * 8 |
                 *(uint *)((iVar12 + 0x5ecU) - uVar13) >> uVar13 * 8;
  DAT_004265ec = *(undefined4 *)(iVar12 + 0x92c);
  DAT_00426ad4 = DAT_00426ad4 + 1;
  FUN_00410740("dispatch.c","save_config",0x3c2,"got pwd(%s)(%s)",&DAT_00426490,iVar12 + 0x460);
  FUN_00410740("dispatch.c","save_config",0x3c3,"got ssid(%s)(%s)",&DAT_00426450,
               DAT_0042640c + 0x420);
  FUN_00410740("dispatch.c","save_config",0x3c4,"config save finish %d",DAT_00426ad4);
  DAT_00426690 = time(0);
  FUN_00408358();
  return 0;
}



// ==== set_default @ 0040881c size=860

undefined4 set_default(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
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
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  if ((char)DAT_00426694 != '\0') {
    snprintf(&local_38,0x20,"%s",&DAT_00426694);
  }
  if (DAT_004266e0 != '\0') {
    snprintf(&local_58,0x20,"%s",&DAT_004266e0);
  }
  if (DAT_00426700 != '\0') {
    snprintf(&local_78,0x20,"%s",&DAT_00426700);
  }
  uVar1 = DAT_00426720;
  FUN_004105ec(&DAT_00426434,0x65c,0,0x65c);
  DAT_0042644c = 1;
  DAT_00426438 = 0;
  DAT_0042643c = 0;
  DAT_00426440 = 0;
  DAT_00426444 = 0;
  DAT_00426448 = 0;
  puts("hue, start_with_reset = 1 @set_default() ");
  DAT_00426560 = 0x7080;
  DAT_00426434 = 1;
  DAT_00426564 = 10;
  iVar2 = (*(byte *)(DAT_00426320 + 10) - 0x30) * 10 + (*(byte *)(DAT_00426320 + 0xb) - 0x30);
  if (iVar2 == 0) {
    DAT_0042656c = 0x800;
  }
  else {
    printf(" hw_ver_p->def_x = %d \n",iVar2);
    DAT_0042656c = (iVar2 * 0x1000) / 100;
  }
  if (*(byte *)(DAT_00426320 + 9) == 0x30) {
    DAT_00426570 = 0x2d0;
  }
  else {
    iVar2 = *(byte *)(DAT_00426320 + 9) - 0x30;
    printf(" hw_ver_p->def_y = %d \n",iVar2);
    DAT_00426570 = iVar2 * 0x90;
  }
  iVar2 = DAT_00426320;
  DAT_004265e0 = 0x15180;
  uVar3 = 100;
  DAT_004265d4 = 10;
  DAT_004265d8 = 1;
  DAT_004266b8 = 1;
  DAT_004266d4 = 1;
  DAT_004266c0 = 1;
  DAT_004266c4 = 1;
  DAT_004266bc = 100;
  DAT_00426722 = 2;
  DAT_004265dc = 0;
  DAT_004265e4 = 0;
  DAT_004266dc = 0;
  DAT_004266d8 = 0x50;
  DAT_00426721 = 0;
  DAT_00426723 = 0;
  DAT_00426724 = 0;
  memset(&DAT_00426725,0,0x43);
  if (*(char *)(iVar2 + 5) == '2') {
    uVar3 = 0;
  }
  DAT_004266b4 = uVar3;
  if ((char)local_38 == '\0') {
  }
  else {
    snprintf(&DAT_00426694,0x20,"%s",&local_38);
  }
  if ((char)local_58 == '\0') {
  }
  else {
    snprintf(&DAT_004266e0,0x20,"%s",&local_58);
  }
  if ((char)local_78 != '\0') {
    snprintf(&DAT_00426700,0x20,"%s",&local_78);
  }
  DAT_00426720 = uVar1;
  FUN_00410740("dispatch.c","set_default",0x42c,"do reset save conf finish");
  FUN_00408358();
  return 0;
}



// ==== dispatch_report_cloud_alarm_status @ 0040a60c size=464

undefined4 dispatch_report_cloud_alarm_status(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_24a8 [4096];
  undefined1 auStack_14a8 [4096];
  undefined1 auStack_4a8 [1024];
  undefined1 auStack_a8 [132];
  
  memset(auStack_14a8,0,0x1000);
  memset(auStack_4a8,0,0x400);
  memset(auStack_a8,0,0x80);
  memset(auStack_24a8,0,0x1000);
  uVar1 = strlen(param_1);
  memcpy(auStack_24a8,param_1,uVar1);
  iVar3 = 3;
  sprintf(auStack_14a8,"%s -c 193 -url \"%s/ipc/monitor/gather\" -param \'%s\' ","/backup/cloudAPI",
          "https://monitor-log.xiaoyi.com",auStack_24a8);
  while( true ) {
    memset(auStack_4a8,0,0x400);
    FUN_00410988(auStack_14a8,auStack_4a8,0x400,0x3c);
    FUN_00410740("dispatch.c","dispatch_report_cloud_alarm_status",0x770,"cmd = %s\n",auStack_14a8);
    puVar4 = auStack_4a8;
    FUN_00410740("dispatch.c","dispatch_report_cloud_alarm_status",0x771,"ret_string = %s\n",puVar4)
    ;
    memset(auStack_a8,0,0x80);
    iVar2 = FUN_00410fb8(auStack_a8,&DAT_004141b4,auStack_4a8);
    if ((iVar2 == 1) && (iVar2 = atoi(auStack_a8), iVar2 == 1)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0;
    }
    usleep(2000000);
  }
  FUN_00410740("dispatch.c","dispatch_report_cloud_alarm_status",0x775,
               "dispatch_report_cloud_alarm_status success \n",puVar4);
  return 0;
}



// ==== modify_ptz_running_stat @ 0040ad04 size=56

undefined4 modify_ptz_running_stat(void)

{
  FUN_00410740("ptz_ctl.c","modify_ptz_running_stat",0x10e,"PTZ not open");
  return 0xffffffff;
}



// ==== set_motor_dir_speed @ 0040b6d8 size=212

undefined4 set_motor_dir_speed(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_00426414 < 0) {
    FUN_00410740("ptz_ctl.c","set_motor_dir_speed",0xf1,"PTZ not open");
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = ioctl(DAT_00426414,2,param_1);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)__errno_location();
      uVar4 = *puVar2;
      uVar3 = strerror(uVar4);
      FUN_00410740("ptz_ctl.c","set_motor_dir_speed",0xf5,"ioctl(%d) error(%d),%s",2,uVar4,uVar3);
      uVar3 = *(undefined4 *)(param_1 + 8);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 8);
    }
    printf("\n\n\n~~~~~~~dir = %d, speed = %d~~~~~~\n\n\n",uVar3,*(undefined4 *)(param_1 + 0xc));
    uVar3 = 0;
  }
  return uVar3;
}



// ==== ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 @ 00410b78 size=212

undefined4
ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789
          (uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar6;
  int local_20;
  int local_1c;
  char *pcVar5;
  
  if (param_3 < param_1) {
    uVar3 = 0xffffffff;
  }
  else {
    gettimeofday(&local_20,0);
    iVar1 = time(0);
    srand(local_1c + local_20 + iVar1);
    if (param_1 != 0) {
      pcVar6 = param_2 + param_1;
      pcVar5 = param_2;
      do {
        pcVar4 = pcVar5 + 1;
        uVar2 = rand();
        *pcVar5 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00426250[uVar2 % 0x3e];
        pcVar5 = pcVar4;
        param_2 = pcVar6;
      } while (pcVar4 != pcVar6);
    }
    *param_2 = '\0';
    uVar3 = 0;
  }
  return uVar3;
}



// ==== ssp_uart_init @ 0041130c size=1348

int ssp_uart_init(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined1 local_4b;
  undefined1 local_4a;
  
  DAT_00426290 = open("/dev/ttyS0",0x882);
  if (DAT_00426290 == -1) {
    printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x118);
    printf("***** %s open failed! *****\n","/dev/ttyS0");
    iVar1 = -1;
  }
  else {
    printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x11b);
    printf("***** %s open successfully! *****\n","/dev/ttyS0");
    printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x11d);
    printf("******uart init param: %d %d %d %d ********\n",param_1,param_2,param_3,param_4);
    iVar1 = tcgetattr(DAT_00426290,&local_60);
    if (iVar1 == 0) {
      tcflush(DAT_00426290,2);
      cfsetispeed(&local_60,param_1);
      cfsetospeed(&local_60,param_1);
      iVar1 = tcsetattr(DAT_00426290,0x5410,&local_60);
      if (iVar1 == 0) {
        printf("<DEBUG func %s, line %d>: ","ssp_uart_init",300);
        puts("***** set speed finished! *****");
        local_58 = param_3 | local_58 & 0xffffffcf;
        switch(param_2) {
        case 0x45:
        case 0x65:
          local_58 = local_58 & 0xfffffdff | 0x100;
          local_60 = local_60 | 0x10;
          break;
        default:
          printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x14a);
          printf("****** Unsupport parity %c *****\n",param_2);
          return -1;
        case 0x4e:
        case 0x6e:
          local_58 = local_58 & 0xfffffeff;
          local_60 = local_60 & 0xffffffef;
          break;
        case 0x4f:
        case 0x6f:
          local_58 = local_58 | 0x300;
          local_60 = local_60 | 0x10;
          break;
        case 0x53:
        case 0x73:
          local_58 = local_58 & 0xfffffebf;
        }
        printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x14d);
        puts("***** set parity finished! *****");
        if (param_4 == 1) {
          local_58 = local_58 & 0xffffffbf;
        }
        else {
          if (param_4 != 2) {
            printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x158);
            printf("***** Unsupport stopbits %d ******\n",param_4);
            return -1;
          }
          local_58 = local_58 | 0x40;
        }
        printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x15b);
        puts("***** set stopbits finished! *****");
        local_60 = local_60 & 0xfffffa14;
        local_5c = local_5c & 0xfffffffe;
        local_58 = local_58 | 0x880;
        local_54 = local_54 & 0xfffffeb4;
        iVar1 = tcsetattr(DAT_00426290,0x5410,&local_60);
        if (iVar1 == 0) {
          local_58 = local_58 & 0x7fffffff;
          local_4a = 0x96;
          local_4b = 0;
          tcflush(DAT_00426290,0);
          iVar1 = tcsetattr(DAT_00426290,0x540e,&local_60);
          if (iVar1 == 0) {
            if ((param_5 & 1) != 0) {
              PTR_DAT_00426298 = &DAT_004262ac;
              PTR_DAT_00426294 = &DAT_004262b4;
            }
            if ((param_5 & 2) != 0) {
              PTR_DAT_004262a0 = &DAT_004262bc;
              PTR_DAT_0042629c = &DAT_004262c4;
            }
            iVar1 = pthread_create(&DAT_004263e8,0,&LAB_00411210,0);
            if (iVar1 < 0) {
              iVar1 = -1;
            }
            else {
              DAT_004263cc = 2;
              DAT_004263d0 = 8000;
              DAT_004263a8 = 2;
              DAT_004263ac = 8000;
              DAT_004263a4 = 0;
              DAT_004263b0 = 0;
              DAT_004263b4 = 0;
              DAT_004263b8 = 0;
              DAT_004263bc = 0;
              DAT_004263c0 = 0;
              DAT_004263c8 = 0;
              DAT_004263d4 = 0;
              DAT_004263d8 = 0;
              DAT_004263dc = 0;
              DAT_004263e0 = 0;
              DAT_004263e4 = 0;
              DAT_004263c4 = 0;
              DAT_004263a0 = 0;
              printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x199);
              puts(" ******** Serial Init finish! ******** ");
              iVar1 = DAT_00426290;
            }
          }
          else {
            printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x170);
            puts("**** Set Serial failed!****");
            iVar1 = -1;
          }
        }
        else {
          printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x164);
          puts("**** Set Serial stopbit failed!****");
          iVar1 = -1;
        }
      }
      else {
        printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x129);
        puts("**** Set Serial baudrate failed!****");
        iVar1 = -1;
      }
    }
    else {
      printf("<DEBUG func %s, line %d>: ","ssp_uart_init",0x11f);
      puts("******get attr failed!********");
      iVar1 = -1;
    }
  }
  return iVar1;
}



// ==== ssp_uart_send_cmd @ 0041195c size=1484

undefined4 ssp_uart_send_cmd(int param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int in_zero;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  uint in_t0;
  uint uVar13;
  uint in_t1;
  uint in_t2;
  uint unaff_s0;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  
  uVar1 = DAT_004263c8;
  uVar19 = DAT_004263bc;
  uVar14 = DAT_004263a4;
  if (param_1 != 3) {
    if (param_1 < 4) {
      if (param_1 == 1) {
        *param_2 = DAT_004263e0;
        param_2[1] = uVar19;
        param_2[2] = local_40;
        param_2[3] = local_3c;
        param_2[4] = local_38;
        param_2[5] = uVar14 | uVar1;
        param_2[6] = local_30;
        param_2[7] = local_2c;
        return 0;
      }
      if (param_1 == 2) {
        uVar14 = (int)param_2 + 3U & 3;
        uVar19 = (int)param_2 + 7U & 3;
        uVar1 = (int)param_2 + 0xbU & 3;
        uVar2 = (int)param_2 + 0xfU & 3;
        uVar3 = (int)param_2 + 0x13U & 3;
        uVar4 = (int)param_2 + 0x1bU & 3;
        uVar5 = (int)param_2 + 0x1fU & 3;
        uVar6 = (uint)param_2 & 3;
        uVar7 = (uint)(param_2 + 1) & 3;
        uVar8 = (uint)(param_2 + 2) & 3;
        uVar15 = (*(int *)(((int)param_2 + 0xbU) - uVar1) << (3 - uVar1) * 8 |
                 unaff_s0 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar8) * 8 |
                 *(uint *)((int)(param_2 + 2) - uVar8) >> uVar8 * 8;
        uVar1 = (uint)(param_2 + 3) & 3;
        uVar13 = (*(int *)(((int)param_2 + 0xfU) - uVar2) << (3 - uVar2) * 8 |
                 in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar1) * 8 |
                 *(uint *)((int)(param_2 + 3) - uVar1) >> uVar1 * 8;
        uVar1 = (uint)(param_2 + 4) & 3;
        uVar2 = (uint)(param_2 + 7) & 3;
        uVar8 = (uint)(param_2 + 6) & 3;
        if (uVar15 == 0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = PTR_DAT_0042629c;
          if (uVar15 != 2) {
            if (uVar15 < 3) {
              puVar12 = PTR_DAT_004262a0;
              if (uVar15 == 1) goto LAB_00411de4;
            }
            else {
              puVar12 = PTR_DAT_00426298;
              if ((uVar15 == 3) || (puVar12 = PTR_DAT_00426294, uVar15 == 4)) goto LAB_00411de4;
            }
            puVar12 = &DAT_004262a4;
          }
        }
LAB_00411de4:
        FUN_00411850(puVar12,(*(int *)(((int)param_2 + 3U) - uVar14) << (3 - uVar14) * 8 |
                             in_t2 & 0xffffffffU >> (uVar14 + 1) * 8) & -1 << (4 - uVar6) * 8 |
                             *(uint *)((int)param_2 - uVar6) >> uVar6 * 8,
                     (*(int *)(((int)param_2 + 7U) - uVar19) << (3 - uVar19) * 8 |
                     in_t1 & 0xffffffffU >> (uVar19 + 1) * 8) & -1 << (4 - uVar7) * 8 |
                     *(uint *)((int)(param_2 + 1) - uVar7) >> uVar7 * 8,uVar15,uVar13,
                     (*(int *)(((int)param_2 + 0x13U) - uVar3) << (3 - uVar3) * 8 |
                     param_4 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar1) * 8 |
                     *(uint *)((int)(param_2 + 4) - uVar1) >> uVar1 * 8,1,
                     (*(int *)(((int)param_2 + 0x1bU) - uVar4) << (3 - uVar4) * 8 |
                     param_3 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar8) * 8 |
                     *(uint *)((int)(param_2 + 6) - uVar8) >> uVar8 * 8,
                     (*(int *)(((int)param_2 + 0x1fU) - uVar5) << (3 - uVar5) * 8 |
                     0xffffffffU >> (uVar5 + 1) * 8 & 2) & -1 << (4 - uVar2) * 8 |
                     *(uint *)((int)(param_2 + 7) - uVar2) >> uVar2 * 8);
        printf("<DEBUG func %s, line %d>: ","ssp_uart_send_cmd",0x1e3);
        printf("dir = %d speed = %d is running = %d \n",uVar15,uVar13,1);
        return 0;
      }
    }
    else if (param_1 == 5) {
      if ((*param_2 & 1) != 0) {
        PTR_DAT_00426298 = &DAT_004262ac;
        PTR_DAT_00426294 = &DAT_004262b4;
      }
      if ((*param_2 & 2) != 0) {
        PTR_DAT_004262a0 = &DAT_004262bc;
        PTR_DAT_0042629c = &DAT_004262c4;
      }
    }
    else {
      if (param_1 < 5) {
        DAT_004263e4 = 0;
        DAT_004263c0 = 0;
        return 0;
      }
      if (param_1 == 100) {
        uVar14 = 0x13;
        puVar17 = (undefined1 *)0x0;
        do {
          uVar19 = uVar14 & 3;
          puVar12 = PTR_DAT_004262a0;
          if ((((uVar19 != 0) && (puVar12 = PTR_DAT_0042629c, uVar19 != 1)) &&
              (puVar12 = PTR_DAT_00426298, uVar19 != 2)) && (puVar12 = puVar17, uVar19 == 3)) {
            puVar12 = PTR_DAT_00426294;
          }
          iVar10 = write(DAT_00426290,puVar12,7);
          if (iVar10 == 7) {
            printf("<DEBUG func %s, line %d>: ","ssp_uart_send_cmd",0x218);
            printf("send cmd successfully! 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
                   *puVar12,puVar12[1],puVar12[2],puVar12[3],puVar12[4],puVar12[5],puVar12[6]);
          }
          else {
            printf("<DEBUG func %s, line %d>: ","ssp_uart_send_cmd",0x215);
            puts("send command failed! ");
          }
          uVar14 = uVar14 - 1;
          sleep(3);
          puVar17 = puVar12;
        } while (uVar14 != 0xffffffff);
      }
    }
    return 0;
  }
  puVar16 = &DAT_004263c4;
  puVar18 = &DAT_004263a0;
  if (DAT_004263a4 == 0 && DAT_004263c8 == 0) goto LAB_00411d60;
  if (DAT_004263c8 == 0) {
    puVar16 = (undefined4 *)0x0;
    if (DAT_004263a4 == 0) {
      uVar14 = (*(int *)(in_zero + 0x1c) - *(int *)(in_zero + 0x14)) + *(int *)(in_zero + 0x10);
      *(uint *)(in_zero + 0x1c) = uVar14;
      iVar10 = *(int *)(in_zero + 0x10);
      iVar11 = *(int *)(in_zero + 0x14);
    }
    else {
      uVar14 = (DAT_004263bc - DAT_004263b4) + DAT_004263b0;
      puVar16 = &DAT_004263a0;
      iVar10 = DAT_004263b0;
      iVar11 = DAT_004263b4;
      DAT_004263bc = uVar14;
      if (0x59f < (int)uVar14) {
        DAT_004263bc = 0x5a0;
        goto LAB_00411d20;
      }
    }
LAB_00411eb0:
    puVar18 = puVar16;
    if ((int)uVar14 < 1) {
      puVar16[7] = 0;
    }
  }
  else {
    uVar14 = (DAT_004263e0 - DAT_004263d8) + DAT_004263d4;
    iVar10 = DAT_004263d4;
    iVar11 = DAT_004263d8;
    DAT_004263e0 = uVar14;
    if ((int)uVar14 < 0x1000) goto LAB_00411eb0;
    DAT_004263e0 = 0x1000;
    puVar18 = puVar16;
  }
LAB_00411d20:
  uVar9 = DAT_00426290;
  puVar18[8] = puVar18[8] + iVar10 + iVar11;
  puVar18[4] = 0;
  puVar18[5] = 0;
  *puVar18 = 0;
  puVar18[6] = 0;
  puVar18[1] = 0;
  write(uVar9,&DAT_004262a4,7);
LAB_00411d60:
  DAT_004263c8 = 0;
  DAT_004263a4 = 0;
  printf("<DEBUG func %s, line %d>: ","ssp_uart_send_cmd",0x1eb);
  printf("stop x = %d y = %d =============\n",DAT_004263e0,DAT_004263bc);
  printf("<DEBUG func %s, line %d>: ","ssp_uart_send_cmd",0x1ec);
  puts("SSP MOTOR STOP!");
  return 0;
}



// ==== __PLT_HEAD @ 004153a0 size=32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __PLT_HEAD(void)

{
  (*___DT_MIPS_PLTGOT)();
  (*(code *)PTR_putchar_0042601c)();
  return;
}



// ==== putchar @ 004153c0 size=16

void putchar(void)

{
  (*(code *)PTR_putchar_0042601c)();
  return;
}



// ==== strcpy @ 004153d0 size=4

void strcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x004153dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcpy_00426020)();
  return;
}



// ==== asctime @ 004153e0 size=16

void asctime(void)

{
  (*(code *)PTR_asctime_00426024)();
  return;
}



// ==== ioctl @ 004153f0 size=16

void ioctl(void)

{
  (*(code *)PTR_ioctl_00426028)();
  return;
}



// ==== popen @ 00415400 size=4

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_popen_0042602c)();
  return;
}



// ==== printf @ 00415410 size=16

void printf(void)

{
  (*(code *)PTR_printf_00426030)();
  return;
}



// ==== strerror @ 00415430 size=16

void strerror(void)

{
  (*(code *)PTR_strerror_00426038)();
  return;
}



// ==== pclose @ 00415440 size=16

void pclose(void)

{
  (*(code *)PTR_pclose_0042603c)();
  return;
}



// ==== snprintf @ 00415450 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041545c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_snprintf_00426040)();
  return;
}



// ==== munmap @ 00415460 size=20

void munmap(void)

{
  (*(code *)PTR_munmap_00426044)();
  return;
}



// ==== usleep @ 00415480 size=16

void usleep(void)

{
  (*(code *)PTR_usleep_0042604c)();
  return;
}



// ==== getpid @ 00415490 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041549c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getpid_00426050)();
  return;
}



// ==== prctl @ 004154a0 size=16

void prctl(void)

{
  (*(code *)PTR_prctl_00426054)();
  return;
}



// ==== memcpy @ 004154b0 size=16

void memcpy(void)

{
  (*(code *)PTR_memcpy_00426058)();
  return;
}



// ==== puts @ 004154d0 size=16

void puts(void)

{
  (*(code *)PTR_puts_00426060)();
  return;
}



// ==== tcflush @ 004154e0 size=4

void tcflush(void)

{
                    /* WARNING: Could not recover jumptable at 0x004154ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_tcflush_00426064)();
  return;
}



// ==== system @ 004154f0 size=16

void system(void)

{
  (*(code *)PTR_system_00426068)();
  return;
}



// ==== malloc @ 00415500 size=4

void malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041550c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_malloc_0042606c)();
  return;
}



// ==== sleep @ 00415510 size=16

void sleep(void)

{
  (*(code *)PTR_sleep_00426070)();
  return;
}



// ==== vsnprintf @ 00415520 size=4

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041552c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_vsnprintf_00426074)();
  return;
}



// ==== settimeofday @ 00415560 size=4

void settimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041556c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_settimeofday_00426084)();
  return;
}



// ==== socket @ 00415570 size=16

void socket(void)

{
  (*(code *)PTR_socket_00426088)();
  return;
}



// ==== select @ 00415580 size=4

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041558c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_select_0042608c)();
  return;
}



// ==== readdir @ 00415590 size=16

void readdir(void)

{
  (*(code *)PTR_readdir_00426090)();
  return;
}



// ==== lseek @ 004155a0 size=16

void lseek(void)

{
  (*(code *)PTR_lseek_00426094)();
  return;
}



// ==== mmap @ 004155b0 size=4

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x004155bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mmap_00426098)();
  return;
}



// ==== gmtime_r @ 004155d0 size=16

void gmtime_r(void)

{
  (*(code *)PTR_gmtime_r_004260a0)();
  return;
}



// ==== strtol @ 004155e0 size=4

void strtol(void)

{
                    /* WARNING: Could not recover jumptable at 0x004155ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strtol_004260a4)();
  return;
}



// ==== cfsetispeed @ 004155f0 size=16

void cfsetispeed(void)

{
  (*(code *)PTR_cfsetispeed_004260a8)();
  return;
}



// ==== write @ 00415600 size=4

void write(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_write_004260ac)();
  return;
}



// ==== cfsetospeed @ 00415610 size=16

void cfsetospeed(void)

{
  (*(code *)PTR_cfsetospeed_004260b0)();
  return;
}



// ==== mktime @ 00415630 size=16

void mktime(void)

{
  (*(code *)PTR_mktime_004260b8)();
  return;
}



// ==== strstr @ 00415640 size=16

void strstr(void)

{
  (*(code *)PTR_strstr_004260bc)();
  return;
}



// ==== rand @ 00415650 size=4

void rand(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041565c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rand_004260c0)();
  return;
}



// ==== signal @ 00415660 size=16

void signal(void)

{
  (*(code *)PTR_signal_004260c4)();
  return;
}



// ==== read @ 00415670 size=4

void read(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_read_004260c8)();
  return;
}



// ==== strncmp @ 00415680 size=16

void strncmp(void)

{
  (*(code *)PTR_strncmp_004260cc)();
  return;
}



// ==== pow @ 00415690 size=4

void pow(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041569c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pow_004260d0)();
  return;
}



// ==== strncpy @ 004156a0 size=16

void strncpy(void)

{
  (*(code *)PTR_strncpy_004260d4)();
  return;
}



// ==== unlink @ 004156b0 size=4

void unlink(void)

{
                    /* WARNING: Could not recover jumptable at 0x004156bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_unlink_004260d8)();
  return;
}



// ==== sendto @ 004156c0 size=16

void sendto(void)

{
  (*(code *)PTR_sendto_004260dc)();
  return;
}



// ==== sscanf @ 004156d0 size=4

void sscanf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004156dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sscanf_004260e0)();
  return;
}



// ==== statvfs @ 004156e0 size=16

void statvfs(void)

{
  (*(code *)PTR_statvfs_004260e4)();
  return;
}



// ==== fread @ 004156f0 size=16

void fread(void)

{
  (*(code *)PTR_fread_004260e8)();
  return;
}



// ==== symlink @ 00415700 size=4

void symlink(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_symlink_004260ec)();
  return;
}



// ==== gettimeofday @ 00415710 size=16

void gettimeofday(void)

{
  (*(code *)PTR_gettimeofday_004260f0)();
  return;
}



// ==== fopen @ 00415720 size=4

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fopen_004260f4)();
  return;
}



// ==== localtime @ 00415730 size=16

void localtime(void)

{
  (*(code *)PTR_localtime_004260f8)();
  return;
}



// ==== memset @ 00415740 size=16

void memset(void)

{
  (*(code *)PTR_memset_004260fc)();
  return;
}



// ==== srand @ 00415750 size=4

void srand(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_srand_00426100)();
  return;
}



// ==== fclose @ 00415760 size=16

void fclose(void)

{
  (*(code *)PTR_fclose_00426104)();
  return;
}



// ==== inet_ntoa @ 00415770 size=4

void inet_ntoa(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041577c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_inet_ntoa_00426108)();
  return;
}



// ==== tcgetattr @ 00415780 size=16

void tcgetattr(void)

{
  (*(code *)PTR_tcgetattr_0042610c)();
  return;
}



// ==== time @ 00415790 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041579c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_time_00426110)();
  return;
}



// ==== opendir @ 004157a0 size=16

void opendir(void)

{
  (*(code *)PTR_opendir_00426114)();
  return;
}



// ==== strcmp @ 004157b0 size=16

void strcmp(void)

{
  (*(code *)PTR_strcmp_00426118)();
  return;
}



// ==== sprintf @ 004157d0 size=16

void sprintf(void)

{
  (*(code *)PTR_sprintf_00426120)();
  return;
}



// ==== fwrite @ 004157f0 size=16

void fwrite(void)

{
  (*(code *)PTR_fwrite_00426128)();
  return;
}



// ==== access @ 00415800 size=4

void access(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041580c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_access_0042612c)();
  return;
}



// ==== __errno_location @ 00415820 size=4

void __errno_location(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041582c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___errno_location_00426134)();
  return;
}



// ==== atoi @ 00415830 size=16

void atoi(void)

{
  (*(code *)PTR_atoi_00426138)();
  return;
}



// ==== fileno @ 00415840 size=16

void fileno(void)

{
  (*(code *)PTR_fileno_0042613c)();
  return;
}



// ==== strlen @ 00415860 size=16

void strlen(void)

{
  (*(code *)PTR_strlen_00426144)();
  return;
}



// ==== open @ 00415870 size=4

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_00426148)();
  return;
}



// ==== strchr @ 00415880 size=16

void strchr(void)

{
  (*(code *)PTR_strchr_0042614c)();
  return;
}



// ==== closedir @ 00415890 size=4

void closedir(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041589c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_closedir_00426150)();
  return;
}



// ==== tcsetattr @ 004158b0 size=4

void tcsetattr(void)

{
                    /* WARNING: Could not recover jumptable at 0x004158bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_tcsetattr_00426158)();
  return;
}



// ==== mkdir @ 004158c0 size=16

void mkdir(void)

{
  (*(code *)PTR_mkdir_0042615c)();
  return;
}



// ==== close @ 004158d0 size=16

void close(void)

{
  (*(code *)PTR_close_00426160)();
  return;
}



// ==== vfprintf @ 004158e0 size=4

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004158ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_vfprintf_00426164)();
  return;
}



// ==== free @ 004158f0 size=20

void free(void)

{
  (*(code *)PTR_free_00426168)();
  return;
}



