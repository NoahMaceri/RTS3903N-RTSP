/* p2p_tnp — "do" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== do_update @ 0040df0c size=880

undefined4 do_update(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_6d0 [1024];
  undefined1 auStack_2d0 [256];
  undefined1 auStack_1d0 [64];
  undefined1 auStack_190 [256];
  undefined1 auStack_90 [64];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char local_2c [8];
  
  memset(auStack_6d0,0,0x400);
  memset(auStack_190,0,0x100);
  memset(auStack_90,0,0x40);
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  memset(auStack_2d0,0,0x140);
  if (DAT_0046891c == 1) {
    uVar2 = 0xffffffff;
  }
  else {
    local_2c[0] = *(char *)(DAT_0047841c + 500) + '\x01';
    if (*(char *)(DAT_0047841c + 500) == -1) {
      local_2c[0] = '\0';
    }
    iVar1 = FUN_00409a5c(DAT_00478414,0x4024,&local_30,4);
    if (iVar1 < 0) {
      dump_string("p2p_tnp.c","do_update",0xdd3,"DISPATCH_UPGRADE_MODE\n");
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = FUN_00409a5c(DAT_00478414,0x6008,local_2c,1);
      if (iVar1 < 0) {
        dump_string("p2p_tnp.c","do_update",0xdd9,"p2p prepare udpate send_msg fail!\n");
      }
      else {
        dump_string("p2p_tnp.c","do_update",0xddd,"p2p prepare udpate send_msg success!\n");
      }
      iVar1 = FUN_0040bae0(auStack_190,auStack_90,&local_50);
      puVar3 = auStack_190;
      if (iVar1 == 1) {
        snprintf(auStack_2d0,0x100,"%s",auStack_190);
        snprintf(auStack_1d0,0x40,"%s",auStack_90);
        iVar1 = FUN_00409a5c(DAT_00478414,0x4021,auStack_2d0,0x140);
        if (iVar1 < 0) {
          dump_string("p2p_tnp.c","do_update",0xde7,"p2p_set_download_info send_msg fail!\n");
        }
        printf("g_download_info.url =%s %s\n",auStack_2d0,auStack_1d0);
        iVar1 = FUN_00409a5c(DAT_00478414,0x6009,&local_50,0x20);
        if (iVar1 < 0) {
          dump_string("p2p_tnp.c","do_update",0xded,"p2p get url success send_msg fail!\n");
        }
        else {
          dump_string("p2p_tnp.c","do_update",0xdf1,"p2p get url success  send_msg success!\n");
        }
        memset(auStack_6d0,0,0x400);
        snprintf(auStack_6d0,0x400,
                 "killall upgrade_firmware;rm -f /tmp/sd/home_r10 /tmp/sd/home_r10m /tmp/update/firmware_m.bin;/home/app/upgrade_firmware \"%s\" \"%s\" &"
                 ,auStack_190,auStack_90);
        system(auStack_6d0);
        DAT_0046891c = 1;
      }
      else {
        puVar4 = auStack_90;
        dump_string("p2p_tnp.c","do_update",0xdfb,
                    "cloudAPI get_update_url_md5 failed url = %s, md5 = %s\n",puVar3,puVar4);
        DAT_0046891c = 4;
        iVar1 = FUN_00409a5c(DAT_00478414,0x600a,0,0);
        if (iVar1 < 0) {
          dump_string("p2p_tnp.c","do_update",0xdff,"p2p get url failed send_msg fail!\n",puVar3,
                      puVar4);
        }
        else {
          dump_string("p2p_tnp.c","do_update",0xe03,"p2p get url failed  send_msg success!\n",puVar3
                      ,puVar4);
        }
      }
      iVar1 = DAT_0047841c + 400;
      uVar2 = strlen(iVar1);
      uVar2 = p2p_send_ctrl_data(param_1,0x1213,param_2,iVar1,uVar2);
      dump_string("p2p_tnp.c","do_update",0xe08,"IOTYPE_USER_IPCAM_UPDATE_RSP, ret = %d\n",uVar2);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== do_record_play @ 0040f624 size=1324

undefined4 do_record_play(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 auStack_128 [256];
  
  iVar2 = param_1 * 0xdc8;
  iVar6 = *(int *)(&DAT_00479160 + iVar2);
  if (iVar6 == 0) {
    iVar6 = malloc(*(undefined4 *)(&DAT_00478468 + iVar2));
    *(int *)(&DAT_00479160 + iVar2) = iVar6;
  }
  iVar2 = param_1 * 0xdc8;
  cVar1 = (&DAT_0047842a)[iVar2];
  if (cVar1 != '\0') {
    (&DAT_0047842a)[iVar2] = 0;
    close_replay_frame(&DAT_00478478 + iVar2);
    uVar4 = FUN_00445068(*(undefined4 *)(&DAT_004784b0 + iVar2));
    dump_string("p2p_tnp.c","do_record_play",0x11ac,"record play control [%d] chn %d\n",param_1,
                uVar4);
    uVar4 = FUN_00445068(*(undefined4 *)(&DAT_004784b4 + iVar2));
    dump_string("p2p_tnp.c","do_record_play",0x11ad,"\t   : command=0x%X\n",uVar4);
    uVar4 = FUN_00445068(*(undefined4 *)(&DAT_004784b8 + iVar2));
    dump_string("p2p_tnp.c","do_record_play",0x11ae,"\t   : Param=%d\n",uVar4);
    dump_string("p2p_tnp.c","do_record_play",0x11af,"\t   : stTimeDay=%d-%d-%d W:%d %d:%d:%d\n",
                *(ushort *)(&DAT_004784bc + iVar2) >> 8 | *(ushort *)(&DAT_004784bc + iVar2) << 8,
                (&DAT_004784be)[iVar2],(&DAT_004784bf)[iVar2],(&DAT_004784c0)[iVar2],
                (&DAT_004784c1)[iVar2],(&DAT_004784c2)[iVar2],(&DAT_004784c3)[iVar2]);
    uVar4 = FUN_00441278(*(ushort *)(&DAT_004784bc + iVar2) >> 8 |
                         *(ushort *)(&DAT_004784bc + iVar2) << 8,(&DAT_004784be)[iVar2],
                         (&DAT_004784bf)[iVar2],(&DAT_004784c1)[iVar2],(&DAT_004784c2)[iVar2],
                         (&DAT_004784c3)[iVar2]);
    *(undefined4 *)(&DAT_0047846c + iVar2) = uVar4;
  }
  iVar2 = param_1 * 0xdc8;
  iVar8 = *(int *)(&DAT_00478444 + iVar2);
  iVar3 = *(int *)(&DAT_00478448 + iVar2);
  if (iVar3 != iVar8) {
    *(int *)(&DAT_00478448 + iVar2) = iVar8;
    close_replay_frame(&DAT_00478478 + iVar2);
    *(int *)(&DAT_0047846c + iVar2) =
         *(int *)(&DAT_0047846c + iVar2) +
         (*(int *)(&DAT_0047847c + iVar2) * *(int *)(&DAT_00478478 + iVar2)) / 1000;
    dump_string("p2p_tnp.c","do_record_play",0x11c1,"change resolution");
  }
  iVar2 = param_1 * 0xdc8;
  if (*(int *)(&DAT_00478454 + iVar2) == *(int *)(&DAT_00478450 + iVar2)) {
    if ((&DAT_0047842b)[iVar2] == '\x01') goto LAB_0040fa74;
    if (iVar3 != iVar8 || cVar1 != '\0') goto LAB_0040f7ac;
    puVar7 = &DAT_00478478 + iVar2;
LAB_0040f894:
    iVar2 = param_1 * 0xdc8;
    FUN_0040efa8(param_1,puVar7,*(int *)(&DAT_0047846c + iVar2) - *(int *)(DAT_0047841c + 0x4b4),
                 *(undefined4 *)(&DAT_00478444 + iVar2));
    if (((&DAT_00478426)[iVar2] == '\x01') && (*(int *)(&DAT_00478450 + iVar2) < 2)) {
      FUN_0040f490(param_1,puVar7,*(undefined4 *)(&DAT_0047846c + iVar2));
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    *(int *)(&DAT_00478454 + iVar2) = *(int *)(&DAT_00478450 + iVar2);
    close_replay_frame(&DAT_00478478 + iVar2);
    *(int *)(&DAT_0047846c + iVar2) =
         *(int *)(&DAT_0047846c + iVar2) +
         (*(int *)(&DAT_0047847c + iVar2) * *(int *)(&DAT_00478478 + iVar2)) / 1000;
    dump_string("p2p_tnp.c","do_record_play",0x11d2,"change record speed");
    if ((&DAT_0047842b)[iVar2] == '\x01') {
LAB_0040fa74:
      iVar2 = param_1 * 0xdc8;
      close_replay_frame(&DAT_00478478 + iVar2);
      (&DAT_0047842b)[iVar2] = 0;
      *(int *)(&DAT_0047846c + iVar2) = ((*(int *)(&DAT_0047846c + iVar2) + 0x3c) / 0x3c) * 0x3c;
      dump_string("p2p_tnp.c","do_record_play",0x11dc,"do file_switch\n");
    }
LAB_0040f7ac:
    memset(auStack_128,0,0x100);
    iVar2 = param_1 * 0xdc8;
    if (*(int *)(&DAT_00478450 + iVar2) < 1) {
      *(undefined4 *)(&DAT_00478450 + iVar2) = 1;
    }
    else if (0x20 < *(int *)(&DAT_00478450 + iVar2)) {
      *(undefined4 *)(&DAT_00478450 + iVar2) = 0x20;
    }
    iVar2 = param_1 * 0xdc8;
    iVar3 = get_filename_by_time(*(undefined4 *)(&DAT_0047846c + iVar2),auStack_128,0x100);
    if (iVar3 == 0) {
      uVar4 = 0x1205;
      pcVar5 = "got file(%s) fail";
    }
    else {
      puVar7 = &DAT_00478478 + iVar2;
      iVar6 = init_replay_frame(iVar6 + 0x20,&DAT_00479160 + iVar2,auStack_128,&DAT_0047846c + iVar2
                                ,iVar3,*(undefined4 *)(&DAT_00478444 + iVar2),
                                *(undefined4 *)(&DAT_00478450 + iVar2),puVar7,
                                *(int *)(&DAT_00478468 + iVar2) + -0x20,&DAT_00478468 + iVar2);
      if (0 < iVar6) {
        dump_string("p2p_tnp.c","do_record_play",0x11f7,"init_replay_frame file(%s) success",
                    auStack_128);
        goto LAB_0040f894;
      }
      uVar4 = 0x11fd;
      pcVar5 = "init_replay_frame file(%s) fail";
    }
    (&DAT_00478425)[iVar2] = 1;
    (&DAT_00478427)[iVar2] = 0;
    dump_string("p2p_tnp.c","do_record_play",uVar4,pcVar5,auStack_128);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// ==== do_auth @ 004102a4 size=1660

undefined4 do_auth(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 auStack_148 [64];
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [64];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
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
  
  memset(auStack_c8,0,0x40);
  memset(auStack_108,0,0x40);
  memset(auStack_148,0,0x40);
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
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  snprintf(&local_88,0x20,"%s",param_1);
  sscanf(&local_88,"%[0-9A-Za-z],%s",&local_48,&local_68);
  iVar6 = DAT_0047841c;
  if (DAT_00468918 == 1) {
    return 0;
  }
  iVar4 = DAT_0047841c + 0x235;
  if (((*(int *)(DAT_0047841c + 0x894) == 1) && (iVar5 = strncmp(&local_48,iVar4,0xf), iVar5 == 0))
     && (iVar4 = strncmp(&local_68,iVar4,0xf), iVar4 == 0)) {
    (&DAT_0047842d)[param_2 * 0xdc8] = 1;
    uVar3 = 0;
  }
  else {
    iVar4 = param_2 * 0xdc8;
    pcVar8 = &DAT_0047914c + iVar4;
    if (*pcVar8 == '\0') {
      iVar5 = *(int *)(&DAT_00479148 + iVar4);
      iVar7 = iVar5 + 99;
      do {
        iVar2 = iVar5 % 100;
        iVar5 = iVar5 + 1;
        iVar2 = strcmp(&DAT_00478428 + (iVar2 + 5) * 0x20 + iVar4,&local_48);
        if (iVar2 == 0) {
          uVar3 = 0x13b5;
          goto LAB_00410464;
        }
      } while (iVar5 <= iVar7);
      if (*(char *)(iVar6 + 0x510) == '\0') {
        if (*(char *)(iVar6 + 0x530) == '\0') {
          dump_string("p2p_tnp.c","do_auth",0x13de,"send 01 DISPATCH_SET_P2P_PWDWRONG msg\n");
          return 1;
        }
        snprintf(auStack_c8,0x40,"user=xiaoyiuser&nonce=%s",&local_48);
        iVar6 = DAT_0047841c + 0x530;
        uVar3 = strlen(iVar6);
        uVar1 = strlen(auStack_c8);
        FUN_004089cc(iVar6,uVar3,auStack_c8,uVar1,auStack_108);
        FUN_00408cbc(auStack_108,auStack_148,0x14);
        iVar6 = memcmp(auStack_148,&local_68,0xf);
        if (iVar6 != 0) {
LAB_00410634:
          dump_string("p2p_tnp.c","do_auth",0x1401,"send 03 DISPATCH_SET_P2P_PWDWRONG msg\n");
          return 1;
        }
        iVar6 = DAT_0047841c + 0x530;
      }
      else {
        snprintf(auStack_c8,0x40,"user=xiaoyiuser&nonce=%s",&local_48);
        iVar6 = DAT_0047841c + 0x510;
        uVar3 = strlen(iVar6);
        uVar1 = strlen(auStack_c8);
        FUN_004089cc(iVar6,uVar3,auStack_c8,uVar1,auStack_108);
        FUN_00408cbc(auStack_108,auStack_148,0x14);
        iVar6 = memcmp(auStack_148,&local_68,0xf);
        if (iVar6 != 0) goto LAB_00410634;
        iVar6 = DAT_0047841c + 0x510;
      }
      uVar3 = 0;
      strncpy(pcVar8,iVar6,0x14);
      iVar6 = *(int *)(&DAT_00479148 + iVar4);
      iVar5 = (iVar6 + 5) * 0x20 + iVar4;
      *(undefined4 *)(&DAT_00478428 + iVar5) = 0;
      *(undefined4 *)(&DAT_0047842c + iVar5) = 0;
      *(undefined4 *)(&DAT_00478430 + iVar5) = 0;
      *(undefined4 *)(&DAT_00478434 + iVar5) = 0;
      *(undefined4 *)(&DAT_00478438 + iVar5) = 0;
      (&DAT_0047843c)[param_2 * 0x372 + (iVar6 + 5) * 8] = 0;
      *(undefined4 *)(&DAT_00478440 + iVar5) = 0;
      *(undefined4 *)(&DAT_00478444 + iVar5) = 0;
      strncpy(&DAT_00478428 + (*(int *)(&DAT_00479148 + iVar4) + 5) * 0x20 + iVar4,&local_48,0x20);
      *(int *)(&DAT_00479148 + iVar4) = (*(int *)(&DAT_00479148 + iVar4) + 1) % 100;
      p2p_set_pwd_used_cnt();
    }
    else {
      iVar6 = *(int *)(&DAT_00479148 + iVar4);
      iVar5 = iVar6 + 99;
      do {
        iVar7 = iVar6 % 100;
        iVar6 = iVar6 + 1;
        iVar7 = strcmp(&DAT_00478428 + (iVar7 + 5) * 0x20 + iVar4,&local_48);
        if (iVar7 == 0) {
          uVar3 = 0x13e8;
LAB_00410464:
          dump_string("p2p_tnp.c","do_auth",uVar3,"lately used nonce!\n");
          return 2;
        }
      } while (iVar6 <= iVar5);
      snprintf(auStack_c8,0x40,"user=xiaoyiuser&nonce=%s",&local_48);
      uVar3 = strlen(pcVar8);
      uVar1 = strlen(auStack_c8);
      FUN_004089cc(pcVar8,uVar3,auStack_c8,uVar1,auStack_108);
      FUN_00408cbc(auStack_108,auStack_148,0x14);
      iVar6 = memcmp(auStack_148,&local_68,0xf);
      if (iVar6 == 0) {
        iVar6 = *(int *)(&DAT_00479148 + iVar4);
        iVar5 = (iVar6 + 5) * 0x20 + iVar4;
        *(undefined4 *)(&DAT_00478428 + iVar5) = 0;
        *(undefined4 *)(&DAT_0047842c + iVar5) = 0;
        *(undefined4 *)(&DAT_00478430 + iVar5) = 0;
        *(undefined4 *)(&DAT_00478434 + iVar5) = 0;
        *(undefined4 *)(&DAT_00478438 + iVar5) = 0;
        (&DAT_0047843c)[param_2 * 0x372 + (iVar6 + 5) * 8] = 0;
        *(undefined4 *)(&DAT_00478440 + iVar5) = 0;
        *(undefined4 *)(&DAT_00478444 + iVar5) = 0;
        strncpy(&DAT_00478428 + (*(int *)(&DAT_00479148 + iVar4) + 5) * 0x20 + iVar4,&local_48,0x20)
        ;
        *(int *)(&DAT_00479148 + iVar4) = (*(int *)(&DAT_00479148 + iVar4) + 1) % 100;
        uVar3 = 0;
      }
      else {
        dump_string("p2p_tnp.c","do_auth",0x13fb,"send 02 DISPATCH_SET_P2P_PWDWRONG msg\n");
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



