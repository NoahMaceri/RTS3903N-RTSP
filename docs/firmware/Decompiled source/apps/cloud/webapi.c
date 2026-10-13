/* cloud — "webapi" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloud.h"

// ==== webapi_do_tnp_on_line @ 00402cd8 size=724

undefined4 webapi_do_tnp_on_line(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_cf0 [2048];
  undefined1 auStack_4f0 [1024];
  undefined1 auStack_f0 [128];
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
  
  memset(auStack_4f0,0,0x400);
  memset(auStack_cf0,0,0x800);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  memset(auStack_f0,0,0x80);
  FUN_0040b244("cloud.c","webapi_do_tnp_on_line",0x878,"now do webapi_do_tnp_on_line \n");
  iVar2 = 5;
  sprintf(auStack_4f0,"%s -c 141 -url \"%s/v4/tnp/on_line\" -keySec %s -uid %s -version %s",
          "/backup/cloudAPI",DAT_00423a48 + 0xc,DAT_00423a48 + 0x295,DAT_00423a48 + 0x235,
          DAT_00423a48 + 400);
  FUN_0040b244("cloud.c","webapi_do_tnp_on_line",0x883,"cmd = %s\n",auStack_4f0);
  memset(auStack_cf0,0,0x800);
  do {
    FUN_0040b48c(auStack_4f0,auStack_cf0,0x800,10);
    iVar2 = iVar2 + -1;
    FUN_0040b244("cloud.c","webapi_do_tnp_on_line",0x88d,"%s\n",auStack_cf0);
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    memset(auStack_f0,0,0x80);
    iVar1 = FUN_0040b8cc(&local_30,"\"code\"",auStack_cf0);
    if (iVar1 == 1) {
      iVar1 = atoi(&local_30);
      if (iVar1 == 20000) {
        FUN_0040b244("cloud.c","webapi_do_tnp_on_line",0x896,"webapi_do_tnp_on_line success %s\n",
                     auStack_cf0);
        iVar2 = FUN_0040b8cc(&local_50,"\"DID\"",auStack_cf0);
        if ((iVar2 == 1) && (iVar2 = FUN_0040b8cc(&local_70,"\"License\"",auStack_cf0), iVar2 == 1))
        {
          iVar2 = FUN_0040b8cc(auStack_f0,"\"InitString\"",auStack_cf0);
          if (iVar2 == 1) {
            cloud_set_tnp(&local_50,&local_70,auStack_f0);
            return 1;
          }
        }
        return 1;
      }
    }
    sleep(5);
  } while (iVar2 != 0);
  return 0;
}



// ==== webapi_do_check_region @ 00402fac size=768

int webapi_do_check_region(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_bb0 [2048];
  undefined1 auStack_3b0 [512];
  undefined1 auStack_1b0 [128];
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [64];
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  int local_30;
  
  memset(auStack_3b0,0,0x200);
  memset(auStack_bb0,0,0x800);
  memset(auStack_130,0,0x80);
  memset(auStack_1b0,0,0x80);
  memset(&local_70,0,0x40);
  memset(auStack_b0,0,0x40);
  FUN_0040b244("cloud.c","webapi_do_check_region",0x8b3,"now do check region\n");
  sprintf(auStack_3b0,"%s -c 143 -url %s -uid %s ","/backup/cloudAPI",
          "http://yicamera-router.mi-ae.com.sg/v1/ipc/router",DAT_00423a48 + 0x235);
  iVar2 = 5;
  FUN_0040b244("cloud.c","webapi_do_check_region",0x8bb,"cmd = %s\n",auStack_3b0);
  while( true ) {
    iVar2 = iVar2 + -1;
    memset(auStack_bb0,0,0x800);
    FUN_0040b48c(auStack_3b0,auStack_bb0,0x800,10);
    FUN_0040b244("cloud.c","webapi_do_check_region",0x8c3,"%s\n",auStack_bb0);
    memset(auStack_130,0,0x80);
    memset(auStack_1b0,0,0x80);
    memset(&local_70,0,0x40);
    memset(auStack_b0,0,0x40);
    iVar1 = FUN_0040b8cc(auStack_130,"\"endpoint\"",auStack_bb0);
    if ((iVar1 == 1) &&
       (local_30 = FUN_0040b8cc(auStack_b0,"\"dlProtocol\"",auStack_bb0), local_30 == 1)) break;
    sleep(10);
    if (iVar2 == 0) {
      return 0;
    }
  }
  snprintf(auStack_1b0,0x80,"https://%s",auStack_130);
  iVar2 = strcmp(auStack_b0,&DAT_0040ea90);
  if (iVar2 == 0) {
    uVar3 = 0x11;
  }
  else {
    iVar2 = strcmp(auStack_b0,&DAT_0040ea98);
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 9;
    }
  }
  local_70 = 0x6c616552;
  local_6c = 0x4a50;
  local_6a = 0;
  FUN_0040b244("cloud.c","webapi_do_check_region",0x8de,
               "in webapi_do_check_region, region_id = %d, language = %d, api_server = %s, sname = %s, dlproto = %s\n"
               ,uVar3,3,auStack_1b0,&local_70,auStack_b0);
  cloud_set_region(DAT_00423a40,uVar3,3,auStack_1b0,&local_70,auStack_b0);
  return local_30;
}



// ==== webapi_do_reset_by_specified_server @ 004032ac size=704

undefined4 webapi_do_reset_by_specified_server(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_a40 [2048];
  undefined1 auStack_240 [512];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  memset(auStack_a40,0,0x800);
  memset(auStack_240,0,0x200);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  gettimeofday(&local_30,0);
  srand(local_2c + local_30);
  FUN_0040b244("cloud.c","webapi_do_reset_by_specified_server",0x8ff,"now do reset \n");
  sprintf(auStack_240,"%s -c 139 -keySec %s -url %s/v4/ipc/reset -uid %s -version %s -mac %s ",
          "/backup/cloudAPI",(int)DAT_00423a48 + 0x295,param_1,(int)DAT_00423a48 + 0x235,
          DAT_00423a48 + 100,DAT_00423a48 + 0xd8);
  FUN_0040b244("cloud.c","webapi_do_reset_by_specified_server",0x90b,"cmd = %s\n",auStack_240);
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      memset(auStack_a40,0,0x800);
      FUN_0040b48c(auStack_240,auStack_a40,0x800,10);
      FUN_0040b244("cloud.c","webapi_do_reset_by_specified_server",0x914,"%s\n",auStack_a40);
      iVar1 = FUN_0040b8cc(&local_40,"\"code\"",auStack_a40);
      if (iVar1 == 1) {
        iVar1 = atoi(&local_40);
        if (iVar1 == 20000) {
          FUN_0040b244("cloud.c","webapi_do_reset_by_specified_server",0x91a,
                       "webapi_do_reset success %s\n",auStack_a40);
          return 1;
        }
        if (iVar1 == 0x4f11) {
          if (*DAT_00423a48 == 1) {
            FUN_0040b244("cloud.c","webapi_do_reset_by_specified_server",0x92a,
                         "webapi_do_reset fail %s\n",auStack_a40);
            return 0;
          }
          iVar1 = webapi_do_check_region();
          if (iVar1 == 1) {
            sleep(1);
            return 0;
          }
        }
      }
      iVar1 = rand();
      sleep(iVar1 % 10 + 10);
    } while (param_2 != 0);
  }
  return 0;
}



// ==== webapi_do_bindkey @ 0040356c size=616

undefined4 webapi_do_bindkey(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a40 [2048];
  undefined1 auStack_240 [512];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  memset(auStack_a40,0,0x800);
  memset(auStack_240,0,0x200);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  gettimeofday(&local_30,0);
  srand(local_2c + local_30);
  FUN_0040b244("cloud.c","webapi_do_bindkey",0xa4d,"now do bindkey \n");
  iVar2 = 3;
  sprintf(auStack_240,"%s -c 137 -key %s -keySec %s -url %s/v4/ipc/qr_bind -uid %s ",
          "/backup/cloudAPI",DAT_00423a48 + 0x300,DAT_00423a48 + 0x295,DAT_00423a48 + 0xc,
          DAT_00423a48 + 0x235);
  FUN_0040b244("cloud.c","webapi_do_bindkey",0xa55,"cmd = %s\n",auStack_240);
  do {
    iVar2 = iVar2 + -1;
    memset(auStack_a40,0,0x800);
    FUN_0040b48c(auStack_240,auStack_a40,0x800,10);
    FUN_0040b244("cloud.c","webapi_do_bindkey",0xa5f,"%s\n",auStack_a40);
    iVar1 = FUN_0040b8cc(&local_40,"\"code\"",auStack_a40);
    if (iVar1 == 1) {
      iVar1 = atoi(&local_40);
      if (iVar1 == 20000) {
        cloud_set_bind_result(0x72);
        FUN_0040b244("cloud.c","webapi_do_bindkey",0xa66,"webapi_do_bindkey success %s\n",
                     auStack_a40);
        return 1;
      }
      if (iVar1 == 0x4efb) {
        cloud_set_bind_result(0x73);
        FUN_0040b244("cloud.c","webapi_do_bindkey",0xa6d,"webapi_do_bindkey fail %s\n",auStack_a40);
        return 2;
      }
    }
    iVar1 = rand();
    sleep(iVar1 % 10 + 10);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



// ==== webapi_do_event_update @ 004037d4 size=772

undefined4
webapi_do_event_update
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_c68 [2048];
  undefined1 auStack_468 [1024];
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
  int local_30;
  
  iVar3 = 3;
  memset(auStack_468,0,0x400);
  memset(auStack_c68,0,0x800);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_38 = 0;
  local_34 = 0;
  while( true ) {
    iVar1 = DAT_00423a48;
    pcVar2 = "true";
    if (*(int *)(DAT_00423a48 + 0x5a8) == 0) {
      pcVar2 = "false";
    }
    iVar3 = iVar3 + -1;
    strncpy(&local_38,pcVar2,8);
    snprintf(auStack_468,0x400,
             "%s -c 304 -url \"%s/v4/alert/event\" -uid %s -keySec %s -EventTime %lu -EventStat %s -pic_url \"%s\" -video_url \"%s\" -pic_pwd \"%s\" -video_pwd \"%s\" -type %d -sub_type %d "
             ,"/backup/cloudAPI",iVar1 + 0xc,iVar1 + 0x235,iVar1 + 0x295,param_7,&local_38,param_1,
             param_2,param_3,param_4,param_5,param_6);
    FUN_0040b244("cloud.c","webapi_do_event_update",0xa98,"cmd=%s\n",auStack_468);
    memset(auStack_c68,0,0x800);
    FUN_0040b48c(auStack_468,auStack_c68,0x800,10);
    printf(&DAT_0040ece0,"webapi_do_event_update",0xa9c,auStack_468,auStack_c68);
    FUN_0040b244("cloud.c","webapi_do_event_update",0xa9d,"%s\n",auStack_c68);
    iVar1 = FUN_0040b8cc(&local_48,"\"code\"",auStack_c68);
    if ((iVar1 == 1) && (local_30 = iVar1, iVar1 = atoi(&local_48), iVar1 == 20000)) break;
    FUN_0040b864(3000);
    if (iVar3 == 0) {
      return 0;
    }
  }
  puVar4 = auStack_c68;
  FUN_0040b244("cloud.c","webapi_do_event_update",0xaa1,"do_cloud_event_update success %s\n",puVar4)
  ;
  if ((param_6 != 3) && (param_6 != 5)) {
    iVar3 = FUN_0040b8cc(&local_68,"\"ipcSetTime\"",auStack_c68);
    if (iVar3 == local_30) {
      iVar3 = atoi(&local_68);
      DAT_00423a5c = iVar3 * 10 + *(int *)(DAT_00423a48 + 0x18c);
      return 1;
    }
    FUN_0040b244("cloud.c","webapi_do_event_update",0xaa7,"got trans_json ipcSetTime fail\n",puVar4)
    ;
    DAT_00423a5c = *(int *)(DAT_00423a48 + 0x18c) + 6000;
    return 1;
  }
  return 1;
}



// ==== webapi_do_event_upload @ 00403ad8 size=588

int webapi_do_event_upload(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_8b8 [1024];
  undefined1 auStack_4b8 [1024];
  undefined1 auStack_b8 [128];
  int local_38;
  int local_34;
  int local_30;
  
  memset(auStack_4b8,0,0x400);
  memset(auStack_8b8,0,0x400);
  memset(auStack_b8,0,0x80);
  gettimeofday(&local_38,0);
  srand(local_34 + local_38);
  if ((param_1 != 0) && (param_2 != 0)) {
    snprintf(auStack_4b8,0x400,"%s -c 411 -url \"%s\" -filename %s","/backup/cloudAPI",param_1,
             param_2);
    iVar2 = 3;
    FUN_0040b244("cloud.c","webapi_do_event_upload",0xad6,"cmd=%s\n",auStack_4b8);
    do {
      iVar2 = iVar2 + -1;
      memset(auStack_8b8,0,0x400);
      FUN_0040b48c(auStack_4b8,auStack_8b8,0x400,0x3c);
      printf(&DAT_0040ece0,"webapi_do_event_upload",0xae6,auStack_4b8,auStack_8b8);
      local_30 = FUN_0040b8cc(auStack_b8,"\"accessKeyId\"",auStack_8b8);
      if (local_30 == 1) {
        memset(auStack_4b8,0,0x400);
        snprintf(auStack_4b8,0x400,"rm -f %s",param_2);
        FUN_0040b244("cloud.c","webapi_do_event_upload",0xaec,"cmd=%s\n",auStack_4b8);
        system(auStack_4b8);
        return local_30;
      }
      iVar1 = rand();
      sleep(iVar1 % 5);
    } while (iVar2 != 0);
  }
  return -1;
}



// ==== webapi_do_log_upload @ 00403d24 size=280

undefined4 webapi_do_log_upload(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_810 [1024];
  undefined1 auStack_410 [1024];
  
  memset(auStack_410,0,0x400);
  memset(auStack_810,0,0x400);
  snprintf(auStack_410,0x400,"%s -c 413 -url \"%s\" -filename %s -device_id %s&","/backup/cloudAPI",
           "https://hch.xiaoyi.com:9443/upload/log","/tmp/log.txt",DAT_00423a48 + 0x235);
  puVar2 = auStack_410;
  FUN_0040b244("cloud.c","webapi_do_log_upload",0xb06,"cmd=%s\n",auStack_410);
  FUN_0040b48c(auStack_410,auStack_810,0x400,0x3c);
  iVar1 = strstr(auStack_810,"UploadLog.Success");
  if (iVar1 != 0) {
    FUN_0040b244("cloud.c","webapi_do_log_upload",0xb0a,"Upload ok!\n",puVar2);
    return 1;
  }
  return 0;
}



// ==== webapi_do_login @ 00403e3c size=2408

undefined4 webapi_do_login(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined1 *puVar10;
  int unaff_s5;
  int unaff_s8;
  uint *puVar11;
  code *pcVar12;
  undefined1 auStack_7a18 [2048];
  undefined1 auStack_7218 [1024];
  undefined4 uStack_6e18;
  undefined4 uStack_6e14;
  undefined4 uStack_6e10;
  undefined4 uStack_6e0c;
  undefined4 uStack_6e08;
  undefined4 uStack_6e04;
  undefined4 uStack_6e00;
  undefined4 uStack_6dfc;
  undefined4 uStack_6df8;
  undefined4 uStack_6df4;
  undefined4 uStack_6df0;
  undefined4 uStack_6dec;
  int iStack_6de8;
  undefined1 *puStack_6de4;
  char *pcStack_6de0;
  undefined *puStack_6ddc;
  char *pcStack_6dd8;
  int iStack_6dd4;
  undefined *puStack_6dd0;
  char *pcStack_6dcc;
  int iStack_6dc8;
  code *pcStack_6dc4;
  int *local_6db0;
  int *local_6dac;
  int local_6da8;
  int local_6da4;
  int *local_6da0;
  int *local_6d9c;
  int *local_6d98;
  int *local_6d94;
  int local_6d90;
  int local_6d8c;
  undefined4 local_6d88;
  undefined4 local_6d84;
  char *local_6d80;
  int local_6d7c;
  char local_6d70;
  char local_6d6f;
  char local_6d6e;
  char local_6d6d;
  undefined1 auStack_6d5c [10220];
  undefined1 auStack_4570 [10240];
  undefined1 auStack_1d70 [5120];
  undefined1 auStack_970 [2048];
  undefined1 auStack_170 [284];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  
  memset(auStack_970,0,0x800);
  memset(auStack_4570,0,0x2800);
  gettimeofday(&local_40,0);
  srand(local_3c + local_40);
  FUN_0040b244("cloud.c","webapi_do_login",0x97a,"now do login \n");
  local_6db0 = DAT_00423a48 + 3;
  local_6dac = DAT_00423a48 + 0x144;
  local_6da8 = (int)DAT_00423a48 + 0x295;
  local_6da4 = (int)DAT_00423a48 + 0x235;
  local_6da0 = DAT_00423a48 + 100;
  local_6d9c = DAT_00423a48 + 0x108;
  local_6d98 = DAT_00423a48 + 0xd8;
  local_6d94 = DAT_00423a48 + 0xf0;
  local_6d90 = DAT_00423a48[0x163];
  local_6d8c = DAT_00423a48[0x165];
  if (*(char *)((int)DAT_00423a48 + 0xa33) == '\0') {
    local_6d80 = "false";
  }
  else {
    local_6d80 = "true";
  }
  iVar6 = 3;
  local_6d88 = 0;
  local_6d84 = 0;
  local_6d7c = DAT_00423a48[0x24e];
  snprintf(auStack_970,0x800,
           "%s -c 138 -url \"%s/v4/ipc/on_line\" -key %s -keySec %s -uid %s -version %s -ssid \"%s\" -mac %s -ip %s -signal_quality %d -packetloss %d -p2pconnect %d -p2pconnect_success %d -apmode %s -tfstat %d "
           ,"/backup/cloudAPI");
  local_6db0 = (int *)auStack_970;
  FUN_0040b244("cloud.c","webapi_do_login",0x995,"cmd = %s\n");
  do {
    if (((DAT_00423a48[0x161] == 0) && (*(char *)((int)DAT_00423a48 + 0xa33) == '\0')) &&
       ((char)DAT_00423a48[0x27c] != '\0')) {
      printf(&DAT_0040eef4,"webapi_do_login",0x99b);
      pcVar12 = webapi_do_check_did;
      exit(0);
      pcStack_6dcc = "/tmp/mmap.info";
      puStack_6dd0 = &DAT_0040e020;
      pcStack_6dd8 = "%s\n";
      puStack_6ddc = &DAT_0040ef58;
      pcStack_6de0 = "/tmp/mmap.info";
      iStack_6de8 = iVar6;
      puStack_6de4 = auStack_970;
      iStack_6dd4 = unaff_s5;
      iStack_6dc8 = unaff_s8;
      pcStack_6dc4 = pcVar12;
      memset(auStack_7218,0,0x400);
      memset(auStack_7a18,0,0x800);
      uStack_6e18 = 0;
      iVar6 = 2;
      uStack_6e14 = 0;
      uStack_6e10 = 0;
      uStack_6e0c = 0;
      uStack_6e08 = 0;
      uStack_6e04 = 0;
      uStack_6e00 = 0;
      uStack_6dfc = 0;
      uStack_6df8 = 0;
      uStack_6df4 = 0;
      uStack_6df0 = 0;
      uStack_6dec = 0;
      snprintf(auStack_7218,0x400,"%s -c 311 -url %s/v4/ipc/check_did -uid %s -keySec %s",
               "/backup/cloudAPI",DAT_00423a48 + 3,(int)DAT_00423a48 + 0x235,
               (int)DAT_00423a48 + 0x295);
      FUN_0040b244("cloud.c","webapi_do_check_did",0xb19,"cmd=%s\n",auStack_7218);
      do {
        FUN_0040b48c(auStack_7218,auStack_7a18,0x800,10);
        iVar6 = iVar6 + -1;
        FUN_0040b244("cloud.c","webapi_do_check_did",0xb20,"%s\n",auStack_7a18);
        uStack_6df8 = 0;
        uStack_6df4 = 0;
        uStack_6df0 = 0;
        uStack_6dec = 0;
        iVar1 = FUN_0040b9ac(&uStack_6df8,"\"code\"",auStack_7a18);
        if (iVar1 == 1) {
          iVar1 = atoi(&uStack_6df8);
          if (iVar1 != 20000) {
            return 0;
          }
          uStack_6e18 = 0;
          uStack_6e14 = 0;
          uStack_6e10 = 0;
          uStack_6e0c = 0;
          uStack_6e08 = 0;
          uStack_6e04 = 0;
          uStack_6e00 = 0;
          uStack_6dfc = 0;
          iVar1 = FUN_0040b9ac(&uStack_6e18,"\"allow\"",auStack_7a18);
          if (iVar1 == 1) {
            iVar1 = strcmp(&uStack_6e18,"false");
            if (iVar1 == 0) {
              return 0xffffffff;
            }
            iVar1 = strcmp(&uStack_6e18,&DAT_0040e934);
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
        sleep(3);
        if (iVar6 == 0) {
          return 0;
        }
      } while( true );
    }
    FUN_0040b10c(auStack_4570,0x2800,0,0x2800);
    FUN_0040b48c(auStack_970,auStack_4570,0x2800,10);
    local_6db0 = (int *)auStack_4570;
    FUN_0040b244("cloud.c","webapi_do_login",0x9a1,"%s\n");
    unaff_s5 = FUN_0040ae48(auStack_4570);
    if (unaff_s5 == 0) {
      printf(&DAT_0040ef2c,"webapi_do_login",0x9a9);
LAB_00404140:
      printf(&DAT_0040ef58,"webapi_do_login",0x9ac,0);
    }
    else {
      iVar1 = FUN_0040ae6c(unaff_s5,&DAT_0040e020);
      if (iVar1 == 0) goto LAB_00404140;
      if (*(int *)(iVar1 + 0xc) == 3) {
        unaff_s8 = *(int *)(iVar1 + 0x14);
        printf(&DAT_0040ef58,"webapi_do_login",0x9ac,unaff_s8);
      }
      else {
        unaff_s8 = atoi(*(undefined4 *)(iVar1 + 0x10));
        printf(&DAT_0040ef58,"webapi_do_login",0x9ac,unaff_s8);
      }
      if (unaff_s8 == 20000) {
        local_38[0] = 0;
        iVar6 = cJSON_GetStrObjItem(unaff_s5,"uploadUrl");
        FUN_0040b244("cloud.c","webapi_do_login",0x9b2,"webapi_do_login success\n");
        if (iVar6 != 0) {
          printf(&DAT_0040ef9c,"webapi_do_login",0x9b4,iVar6);
          if (*DAT_00423a48 == 1) {
            webapi_do_log_upload();
          }
          DAT_004237a0 = 1;
        }
        iVar6 = cJSON_GetIntObjItem(unaff_s5,"css_flag",local_38);
        if (iVar6 == 0) {
          printf(&DAT_0040efc8,"webapi_do_login",0x9c6,local_38[0]);
          if (local_38[0] == 0) {
            cloud_set_cloud_storage_state(0x8c);
          }
          else {
            cloud_set_cloud_storage_state(0x8b);
          }
        }
        iVar6 = cJSON_GetIntObjItem(unaff_s5,"css_mode",local_38);
        if (iVar6 == 0) {
          printf(&DAT_0040eff4,"webapi_do_login",0x9cd,local_38[0]);
          if (local_38[0] == 0) {
            cloud_set_cloud_storage_mode(0x94);
          }
          else {
            cloud_set_cloud_storage_mode(0x95);
          }
        }
        iVar6 = cJSON_GetIntObjItem(unaff_s5,"css_image_flag",local_38);
        if (iVar6 == 0) {
          printf(&DAT_0040f024,"webapi_do_login",0x9d4,local_38[0]);
          if (local_38[0] == 0) {
            cloud_set_cloud_image_state(0xf4);
          }
          else {
            cloud_set_cloud_image_state(0xf3);
          }
        }
        iVar6 = FUN_0040ae6c(unaff_s5,"appParam");
        if ((iVar6 != 0) && (iVar6 = FUN_0040ae6c(iVar6,"router_backup"), iVar6 != 0)) {
          iVar1 = FUN_0040ae6c(iVar6,"enable");
          iVar2 = FUN_0040ae6c(iVar6,"resolution");
          iVar3 = FUN_0040ae6c(iVar6,"user_path");
          iVar6 = FUN_0040ae6c(iVar6,"backup_period");
          if (((iVar1 != 0) && ((iVar2 != 0 && (iVar3 != 0)))) && (iVar6 != 0)) {
            if (*(int *)(iVar1 + 0xc) == 3) {
              local_6d70 = *(char *)(iVar1 + 0x14);
            }
            else {
              local_6d70 = atoi(*(undefined4 *)(iVar1 + 0x10));
            }
            iVar1 = (int)local_6d70;
            if (*(int *)(iVar2 + 0xc) == 3) {
              local_6d6f = *(char *)(iVar2 + 0x14);
            }
            else {
              local_6d6f = atoi(*(undefined4 *)(iVar2 + 0x10));
            }
            puVar10 = (undefined1 *)(int)local_6d6f;
            if (*(int *)(iVar3 + 0xc) == 3) {
              local_6d6d = *(char *)(iVar3 + 0x14);
            }
            else {
              local_6d6d = atoi(*(undefined4 *)(iVar3 + 0x10));
            }
            piVar8 = (int *)(int)local_6d6d;
            if (*(int *)(iVar6 + 0xc) == 3) {
              local_6d6e = *(char *)(iVar6 + 0x14);
            }
            else {
              local_6d6e = atoi(*(undefined4 *)(iVar6 + 0x10));
            }
            local_6da8 = (int)local_6d6e;
            local_6db0 = (int *)puVar10;
            local_6dac = piVar8;
            printf(&DAT_0040f094,"webapi_do_login",0x9ec,iVar1);
            cloud_set_video_backup_state(&local_6d70);
          }
        }
        iVar6 = cJSON_GetStrObjItem(unaff_s5,"abilityTable");
        if (iVar6 == 0) goto LAB_004045bc;
        memset(&local_6d70,0,0x2800);
        memset(auStack_1d70,0,0x1400);
        uVar7 = strhex2byte(auStack_1d70,iVar6);
        iVar6 = (int)DAT_00423a48 + 0x295;
        uVar4 = strlen(iVar6);
        local_6db0 = (int *)&_DYNAMIC_LINKING;
        FUN_0040c644(auStack_170,iVar6,uVar4,iVar6);
        FUN_0040ceb0(auStack_170,&local_6d70,auStack_1d70,uVar7);
        iVar6 = strrchr(&local_6d70,0x7d);
        if (iVar6 != 0) {
          *(undefined1 *)(iVar6 + 1) = 0;
        }
        printf(&DAT_0040f0fc,"webapi_do_login",0x9fc,&local_6d70);
        local_30 = FUN_0040ae48(&local_6d70);
        if ((local_30 == 0) && (local_30 = FUN_0040ae48(auStack_6d5c), local_30 == 0)) {
          printf(&DAT_0040f170,"webapi_do_login",0xa1f);
          uVar7 = 1;
        }
        else {
          iVar6 = FUN_0040ae6c(local_30,"abilities");
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          if (iVar6 != 0) {
            puVar11 = &DAT_00410acc;
            do {
              uVar9 = *puVar11;
              uVar5 = uVar9 + 7;
              if (-1 < (int)uVar9) {
                uVar5 = uVar9;
              }
              uVar9 = uVar9 & 0x80000007;
              iVar1 = (int)uVar5 >> 3;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
              }
              iVar2 = FUN_0040ae6c(iVar6,puVar11[-1]);
              if (((iVar2 == 0) || (iVar2 = cJSON_GetStrObjItem(iVar2,"support"), iVar2 == 0)) ||
                 (iVar2 = strcmp(iVar2,&DAT_0040f138), iVar2 != 0)) {
                *(byte *)((int)&local_54 + iVar1) =
                     ~(byte)(1 << (uVar9 & 0x1f)) & *(byte *)((int)&local_54 + iVar1);
              }
              else {
                *(byte *)((int)&local_54 + iVar1) =
                     (byte)(1 << (uVar9 & 0x1f)) | *(byte *)((int)&local_54 + iVar1);
              }
              puVar11 = puVar11 + 2;
            } while (puVar11 != (uint *)((int)&DAT_00410ca0 + 4));
          }
          FUN_0040ac4c(local_30);
          iVar6 = memcmp(&local_54,(int)DAT_00423a48 + 0xa87,0x14);
          if ((iVar6 == 0) || (iVar6 = FUN_00401918(DAT_00423a40,0x100,&local_54,0x14), -1 < iVar6))
          {
LAB_004045bc:
            uVar7 = 1;
          }
          else {
            FUN_0040b244("cloud.c","webapi_do_login",0xa1c,
                         "send_msg msg(DISPATCH_APPLY_ABILITY_SETS) fail!\n");
            uVar7 = 1;
          }
        }
LAB_004045c0:
        FUN_0040ac4c(unaff_s5);
LAB_004040dc:
        if (*(char *)((int)DAT_00423a48 + 0xa33) != (char)DAT_00423a48[0x27c]) {
          send_apmode_result(uVar7);
        }
        return uVar7;
      }
      if (unaff_s8 == 0x4f11) {
        unaff_s8 = 1;
        if (*DAT_00423a48 == 1) {
          local_6db0 = (int *)auStack_4570;
          uVar7 = 0;
          FUN_0040b244("cloud.c","webapi_do_login",0xa2d,"webapi_do_reset fail %s\n");
          goto LAB_004045c0;
        }
        iVar1 = webapi_do_check_region();
        if (iVar1 == 1) {
          uVar7 = 0;
          sleep(1);
          goto LAB_004045c0;
        }
      }
    }
    iVar6 = iVar6 + -1;
    FUN_0040ac4c(unaff_s5);
    iVar1 = rand();
    sleep(iVar1 % 10 + 10);
    uVar7 = 0;
    if (iVar6 == 0) goto LAB_004040dc;
  } while( true );
}



// ==== webapi_do_check_did @ 004047a4 size=548

undefined4 webapi_do_check_did(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c58 [2048];
  undefined1 auStack_458 [1024];
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
  
  memset(auStack_458,0,0x400);
  memset(auStack_c58,0,0x800);
  local_58 = 0;
  iVar2 = 2;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  snprintf(auStack_458,0x400,"%s -c 311 -url %s/v4/ipc/check_did -uid %s -keySec %s",
           "/backup/cloudAPI",DAT_00423a48 + 0xc,DAT_00423a48 + 0x235,DAT_00423a48 + 0x295);
  FUN_0040b244("cloud.c","webapi_do_check_did",0xb19,"cmd=%s\n",auStack_458);
  do {
    FUN_0040b48c(auStack_458,auStack_c58,0x800,10);
    iVar2 = iVar2 + -1;
    FUN_0040b244("cloud.c","webapi_do_check_did",0xb20,"%s\n",auStack_c58);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    iVar1 = FUN_0040b9ac(&local_38,"\"code\"",auStack_c58);
    if (iVar1 == 1) {
      iVar1 = atoi(&local_38);
      if (iVar1 != 20000) {
        return 0;
      }
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      iVar1 = FUN_0040b9ac(&local_58,"\"allow\"",auStack_c58);
      if (iVar1 == 1) {
        iVar1 = strcmp(&local_58,"false");
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        iVar1 = strcmp(&local_58,&DAT_0040e934);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    sleep(3);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



