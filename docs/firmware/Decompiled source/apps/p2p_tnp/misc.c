/* p2p_tnp — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== entry @ 00406770 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00468290;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00468824)
            (PTR_main_00468288,param_2,&stack0x00000004,PTR__init_0046828c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== event_log_get @ 00409000 size=280

int event_log_get(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  memset(param_3,0,param_2 << 3);
  piVar1 = DAT_00468924;
  iVar4 = DAT_00468924[1];
  uVar2 = iVar4 - param_1 & 0xfff;
  if (*DAT_00468924 == 0) {
    iVar5 = DAT_00468924[2];
  }
  else if (((int)uVar2 <= iVar4) || (iVar5 = DAT_00468924[2], iVar5 <= (int)uVar2)) {
    if (param_2 == 0) {
      return 0;
    }
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      piVar3 = (int *)(param_3 + iVar4 * 8);
      *piVar3 = piVar1[uVar2 * 2 + 3];
      piVar3[1] = piVar1[uVar2 * 2 + 4];
      uVar2 = uVar2 + 0xfff & 0xfff;
      iVar4 = iVar5;
    } while (iVar5 != param_2);
    return param_2;
  }
  dump_string("p2p_tnp.c","event_log_get",0x3cf,
              "event_log_get: param is error, findNumber %d, head(%d) tail(%d) num(%d)!!! \n",uVar2,
              iVar4,iVar5,*DAT_00468924);
  return 0;
}



// ==== event_log_seach @ 00409118 size=116

undefined4 event_log_seach(void)

{
  bool bVar1;
  undefined4 *in_a3;
  undefined4 *puVar2;
  
  puVar2 = DAT_00468924;
  bVar1 = DAT_00468924 == (undefined4 *)0x0;
  *in_a3 = 0;
  if ((bVar1) && (FUN_00408f7c(), puVar2 = DAT_00468924, DAT_00468924 == (undefined4 *)0x0)) {
    dump_string("p2p_tnp.c","event_log_seach",0x3f1,"event_log_seach: mem alloc fail \n");
    return 0xffffffff;
  }
  *in_a3 = *puVar2;
  return 0;
}



// ==== init_replay_frame @ 0040918c size=1264

int init_replay_frame(int param_1,int *param_2,undefined4 param_3,uint *param_4,uint param_5,
                     int param_6,int param_7,uint *param_8,uint param_9,int *param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_38 [2];
  int local_30;
  
  local_38[0] = 0;
  uVar1 = FUN_00440070();
  if (uVar1 == 0) {
    dump_string("p2p_tnp.c","init_replay_frame",0x40f,"mp4read = %p\n",0);
    dump_string("p2p_tnp.c","init_replay_frame",0x410,"mp4read_open_file(filename = %s) failed!\n",
                param_3);
    return -1;
  }
  iVar2 = FUN_0044059c(uVar1,param_3);
  if (-1 < iVar2) {
    uVar5 = param_6 + 1;
    param_8[8] = uVar1;
    param_8[9] = uVar5;
    param_8[10] = 1;
    if (param_7 != 1) {
      uVar5 = 3;
      param_8[9] = 3;
      param_8[10] = 0;
    }
    uVar8 = (param_5 % 0x3c) * -1000 + 60000;
    if (60000 < uVar8) {
      uVar8 = 60000;
    }
    uVar5 = FUN_00440230(uVar1,uVar5);
    param_8[3] = uVar5;
    uVar3 = FUN_00440274(uVar1,param_8[10]);
    uVar6 = param_8[3];
    param_8[7] = uVar3;
    uVar5 = 1;
    if (0 < (int)uVar3) {
      uVar5 = uVar3;
    }
    param_8[0xd] = uVar8;
    uVar10 = (int)uVar8 / (int)uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    uVar5 = 1;
    if (0 < (int)uVar6) {
      uVar5 = uVar6;
    }
    uVar11 = (int)uVar8 / (int)uVar5;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    param_8[4] = uVar10;
    *param_8 = uVar11;
    if (param_5 < *param_4) {
      uVar5 = (((*param_4 - param_5) % 0x3c) * 1000) / uVar11;
      if (uVar11 == 0) {
        trap(0x1c00);
      }
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      param_8[1] = uVar5;
      uVar7 = (((*param_4 - param_5) % 0x3c) * 1000) / uVar10;
      if (uVar10 == 0) {
        trap(0x1c00);
      }
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      param_8[5] = uVar7;
    }
    else {
      param_8[1] = 1;
      uVar7 = 1;
      param_8[5] = 1;
      uVar5 = 1;
    }
    uVar4 = *param_4;
    uVar12 = param_5;
    dump_string("p2p_tnp.c","init_replay_frame",0x42e,
                "tmp_duration(%d) video_totalsample(%d) audio_totalsample(%d) video_timescale(%d) audio_timescale(%d)  video_sampleid(%d) audio_sampleid(%d) replaytime(%lu) filetime(%lu)\n"
                ,uVar8,uVar6,uVar3,uVar11,uVar10,uVar5,uVar7,uVar4,param_5);
    uVar8 = FUN_00440198(uVar1,param_8[9]);
    if (param_9 < uVar8) {
      iVar2 = ((uVar8 + 0x20 >> 2) + 0x100) * 4;
      iVar9 = *param_10;
      *param_10 = iVar2;
      local_30 = malloc(iVar2);
      if (local_30 == 0) {
        dump_string("p2p_tnp.c","init_replay_frame",0x43b,"malloc(all_buff_size = %d) failed!\n",
                    iVar2,uVar6,uVar3,uVar11,uVar10,uVar5,uVar7,uVar4,uVar12);
        *param_10 = iVar9;
        goto LAB_004094f0;
      }
      dump_string("p2p_tnp.c","init_replay_frame",0x441,"realloc ok, all_buff_size = %d\n",iVar2,
                  uVar6,uVar3,uVar11,uVar10,uVar5,uVar7,uVar4,uVar12);
      local_30 = memcpy(local_30,*param_2,iVar9);
      free(*param_2);
      iVar2 = *param_10;
      param_1 = local_30 + (iVar9 - param_9);
      *param_2 = local_30;
      param_9 = param_9 + (iVar2 - iVar9);
    }
    uVar1 = param_8[1];
    while( true ) {
      iVar2 = FUN_004402b8(param_8[8],param_8[9],uVar1,param_1,param_9,local_38);
      if (iVar2 < 1) {
        dump_string("p2p_tnp.c","init_replay_frame",0x450,
                    "MP4ReadSample fail video_sampleid(%d) ret(%d) bufsize(%d)\n",param_8[1],iVar2,
                    param_9);
        goto LAB_004093d4;
      }
      if (local_38[0] == 1) break;
      uVar1 = param_8[1] + 1;
      param_8[1] = uVar1;
      if ((int)param_8[3] < (int)uVar1) {
LAB_004093d4:
        uVar1 = FUN_0044177c();
        param_8[0xb] = uVar1;
        param_8[2] = param_8[1];
        param_8[6] = param_8[5];
        *param_4 = param_5;
        return iVar2;
      }
    }
    dump_string("p2p_tnp.c","init_replay_frame",0x457,"got i frame\n");
    goto LAB_004093d4;
  }
  dump_string("p2p_tnp.c","init_replay_frame",0x40f,"mp4read = %p\n",uVar1);
  dump_string("p2p_tnp.c","init_replay_frame",0x410,"mp4read_open_file(filename = %s) failed!\n",
              param_3);
LAB_004094f0:
  FUN_00440508(uVar1);
  FUN_00440820(uVar1);
  return -1;
}



// ==== close_replay_frame @ 0040967c size=100

undefined4 close_replay_frame(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00440508();
    FUN_00440820(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    dump_string("p2p_tnp.c","close_replay_frame",0x47c,"close mp4file and destroy mp4read\n");
  }
  return 1;
}



// ==== tnp_reply_event_list @ 0040b98c size=340

undefined4 tnp_reply_event_list(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock(&DAT_00468940);
  iVar1 = (((uint)(DAT_0046c404 >> 8) | (DAT_0046c404 & 0xff) << 8) + 1) * 0xc;
  DAT_0046c3d8 = FUN_00445068(iVar1 + 0x28);
  DAT_0046c3d4 = (&DAT_00478432)[param_1 * 0xdc8];
  DAT_0046c3de = (ushort)((param_2 & 0xffff) >> 8) | (ushort)((param_2 & 0xffff) << 8);
  DAT_0046c3d5 = 3;
  DAT_0046c3e2 = (ushort)((uint)iVar1 >> 8) & 0xff | (short)iVar1 * 0x100;
  DAT_0046c3dc = 0x4823;
  DAT_0046c3e0 = 0;
  DAT_0046c3e4 = 0;
  uVar2 = FUN_004061d0((&DAT_0047843c)[param_1 * 0x372],0,&DAT_0046c3d4,iVar1 + 0x30);
  pthread_mutex_unlock(&DAT_00468940);
  dump_string("p2p_tnp.c","tnp_reply_event_list",0xcbe,
              "p2p_send_ctrl_data, msg_type=0x%02x ret=%d sendlen(%d) payload_len(%d)",0x319,uVar2,
              iVar1 + 0x30,iVar1);
  return 0;
}



// ==== set_resolution @ 0040daa8 size=300

undefined4 set_resolution(int param_1,undefined4 param_2,uint param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = param_1 * 0xdc8;
  if (param_3 == 0) {
    *(undefined4 *)(&DAT_0047844c + iVar1) = 1;
    *(undefined4 *)(&DAT_00478448 + iVar1) = *(undefined4 *)(&DAT_00478444 + iVar1);
  }
  else {
    *(undefined4 *)(&DAT_0047844c + iVar1) = 0;
    *(undefined4 *)(&DAT_00478448 + iVar1) = *(undefined4 *)(&DAT_00478444 + iVar1);
    if (param_3 - 4 < 3) {
      *(uint *)(&DAT_00478444 + iVar1) = param_3;
      goto LAB_0040db24;
    }
  }
  param_3 = param_3 + 1 & 0x80000001;
  if ((int)param_3 < 0) {
    param_3 = (param_3 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(&DAT_00478444 + param_1 * 0xdc8) = param_3;
LAB_0040db24:
  local_20 = FUN_00445068(param_3);
  local_1c = FUN_00445068(param_2);
  local_18 = p2p_send_ctrl_data(param_1,0x1312,param_4,&local_20,8);
  dump_string("p2p_tnp.c","set_resolution",0xcfc,"IOTYPE_USER_IPCAM_SET_RESOLUTION_RESP, ret = %d\n"
              ,local_18);
  return local_18;
}



// ==== set_record_speed @ 0040dca8 size=268

undefined4 set_record_speed(int param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_3 == 0) {
    dump_string("p2p_tnp.c","set_record_speed",0xd26,"set_record_speed, param error, speed = 0!\n");
    param_3 = *(int *)(&DAT_00478450 + param_1 * 0xdc8);
  }
  else {
    *(int *)(&DAT_00478450 + param_1 * 0xdc8) = param_3;
  }
  local_28 = FUN_00445068(param_3);
  local_24 = FUN_00445068(param_2);
  local_20 = p2p_send_ctrl_data(param_1,0x1338,param_4,&local_28,8);
  dump_string("p2p_tnp.c","set_record_speed",0xd2e,
              "IOTYPE_USER_IPCAM_SET_RECORD_SPEED_RESP, ret = %d\n",local_20);
  return local_20;
}



// ==== send_realtime_video @ 0040e944 size=880

int send_realtime_video(int param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_30 [2];
  
  iVar4 = param_1 * 0xdc8;
  uVar2 = *(ushort *)(param_3 + 10);
  if ((uVar2 & 2) != 0) {
    memcpy(iVar4 + 0x479194,*(int *)(&DAT_00479160 + iVar4) + param_2,*(undefined4 *)(param_3 + 0xc)
          );
    uVar8 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(&DAT_00479190 + iVar4) = 0;
    *(undefined4 *)(&DAT_004791d0 + iVar4) = uVar8;
    if (*(char *)(param_3 + 0x12) == '\x01') {
      *(undefined2 *)(&DAT_00478434 + iVar4) = *(undefined2 *)(param_3 + 0x14);
      *(undefined2 *)(&DAT_00478436 + iVar4) = *(undefined2 *)(param_3 + 0x16);
    }
    return 0;
  }
  if ((uVar2 & 4) != 0) {
    memcpy(iVar4 + 0x4791d4,*(int *)(&DAT_00479160 + iVar4) + param_2,*(undefined4 *)(param_3 + 0xc)
          );
    *(undefined4 *)(&DAT_004791e8 + iVar4) = *(undefined4 *)(param_3 + 0xc);
    return 0;
  }
  if ((uVar2 & 8) != 0) {
    memcpy(iVar4 + 0x479166,*(int *)(&DAT_00479160 + iVar4) + param_2,*(undefined4 *)(param_3 + 0xc)
          );
    *(undefined4 *)(&DAT_00479190 + iVar4) = *(undefined4 *)(param_3 + 0xc);
    return 0;
  }
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    uVar9 = 0x31000;
    uVar8 = 2;
    param_2 = param_2 - (*(int *)(&DAT_00479190 + iVar4) + *(int *)(&DAT_004791d0 + iVar4) +
                        *(int *)(&DAT_004791e8 + iVar4));
    iVar7 = memcpy(*(int *)(&DAT_00479160 + iVar4) + param_2,iVar4 + 0x479166,
                   *(int *)(&DAT_00479190 + iVar4));
    iVar7 = memcpy(iVar7 + *(int *)(&DAT_00479190 + iVar4),iVar4 + 0x479194,
                   *(undefined4 *)(&DAT_004791d0 + iVar4));
    memcpy(iVar7 + *(int *)(&DAT_004791d0 + iVar4),iVar4 + 0x4791d4,
           *(undefined4 *)(&DAT_004791e8 + iVar4));
    *(int *)(param_3 + 0xc) =
         *(int *)(param_3 + 0xc) +
         *(int *)(&DAT_00479190 + iVar4) + *(int *)(&DAT_004791d0 + iVar4) +
         *(int *)(&DAT_004791e8 + iVar4);
  }
  else {
    uVar9 = 0xa000;
    uVar8 = 3;
  }
  iVar7 = 0;
  uVar5 = (&DAT_0047843c)[param_1 * 0x372];
  while( true ) {
    local_30[0] = 0;
    iVar3 = FUN_00408e9c(uVar5,uVar8,local_30,0);
    if (iVar3 != 0) break;
    if (local_30[0] <= uVar9) {
      iVar3 = *(int *)(&DAT_00479160 + iVar4);
      uVar8 = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(iVar4 + 0x478464) = *(undefined4 *)(param_3 + 4);
      iVar4 = p2p_send_frame_data(param_1,1,1,bVar1,param_3,iVar3 + param_2 + -0x20,uVar8);
      FUN_004061e0(local_30);
      if ((-1 < iVar4) && (iVar7 < 10)) {
        return iVar4;
      }
      printf(&DAT_00446f04,"send_realtime_video",0x1064,iVar4,iVar7 * 100);
      return iVar4;
    }
    if (iVar7 == 0x15) goto LAB_0040ea94;
    iVar7 = iVar7 + 1;
    ms_sleep(100);
    uVar5 = (&DAT_0047843c)[param_1 * 0x372];
  }
  if (iVar7 == 0x15) {
LAB_0040ea94:
    pcVar6 = "checkbuf timeout";
  }
  else {
    pcVar6 = "fail";
  }
  printf(&DAT_00446f44,"send_realtime_video",0x1067,pcVar6);
  return -1;
}



// ==== send_realtime_audio @ 0040ecb4 size=392

int send_realtime_audio(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint local_28 [3];
  
  iVar4 = 0;
  uVar2 = (&DAT_0047843c)[param_1 * 0x372];
  while( true ) {
    local_28[0] = 0;
    iVar1 = FUN_00408e9c(uVar2,1,local_28,0);
    if (iVar1 != 0) break;
    if (local_28[0] < 0x5001) {
      iVar1 = p2p_send_frame_data(param_1,1,2,0xffffffff,param_3,
                                  *(int *)(&DAT_00479160 + param_1 * 0xdc8) + param_2 + -0x20,
                                  *(undefined4 *)(param_3 + 0xc));
      if ((-1 < iVar1) && (iVar4 < 10)) {
        return iVar1;
      }
      printf(&DAT_00446f74,"send_realtime_audio",0x1080,iVar1,iVar4 * 100);
      return iVar1;
    }
    if (iVar4 == 0x15) goto LAB_0040eda0;
    iVar4 = iVar4 + 1;
    ms_sleep(100);
    uVar2 = (&DAT_0047843c)[param_1 * 0x372];
  }
  if (iVar4 == 0x15) {
LAB_0040eda0:
    pcVar3 = "checkbuf timeout";
  }
  else {
    pcVar3 = "fail";
  }
  printf(&DAT_00446fb4,"send_realtime_audio",0x1083,pcVar3);
  return -1;
}



// ==== myDoIOCtrl @ 00410b08 size=8196

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void myDoIOCtrl(int param_1,ushort *param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint in_t2;
  uint in_t3;
  uint uVar23;
  ushort uVar24;
  ushort uVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  char *pcVar28;
  undefined1 auStack_400 [512];
  uint local_200 [117];
  undefined4 local_2c [2];
  
  memset(auStack_400,0,0x200);
  local_2c[0] = 0;
  if (param_2 == (ushort *)0x0) {
    return;
  }
  uVar24 = *param_2;
  uVar25 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  iVar10 = do_auth(param_2 + 4,param_1);
  uVar23 = (uint)(uVar24 >> 8) | (uVar24 & 0xff) << 8;
  uVar24 = uVar25 >> 8 | uVar25 << 8;
  if ((iVar10 != 0) || (uVar23 == 0xff00)) {
    p2p_send_auth_result(param_1,uVar23,uVar24,iVar10);
    return;
  }
  puVar11 = &DAT_00448920;
  puVar15 = local_200;
  do {
    puVar12 = puVar11 + 4;
    puVar16 = puVar15 + 4;
    uVar20 = puVar11[1];
    uVar19 = puVar11[2];
    uVar17 = puVar11[3];
    *puVar15 = *puVar11;
    puVar15[1] = uVar20;
    puVar15[2] = uVar19;
    puVar15[3] = uVar17;
    puVar11 = puVar12;
    puVar15 = puVar16;
  } while (puVar12 != (uint *)&UNK_00448af0);
  puVar11 = local_200 + 1;
  iVar10 = 0;
  *puVar16 = _UNK_00448af0;
  do {
    if (uVar23 == *puVar11) {
      uVar17 = puVar11[-1] >> 3;
      if ((uVar17 < 0x14) &&
         (((int)*(char *)(DAT_0047841c + uVar17 + 0xa87) >> (puVar11[-1] & 7) & 1U) == 0)) {
        uVar17 = local_200[iVar10 * 3 + 2];
        if (local_200[iVar10 * 3 + 2] == 0) {
          uVar17 = uVar23;
        }
        p2p_send_ctrl_error(param_1,uVar17,uVar24);
        dump_string("p2p_tnp.c","myDoIOCtrl",0x14d7,
                    "myDoIOCtrl(..): %d, nIOCtrlType(%u) ability support=n\n",param_1,uVar23);
        printf(&DAT_004480fc,"myDoIOCtrl",0x14d8,param_1,uVar23);
        return;
      }
    }
    iVar10 = iVar10 + 1;
    puVar11 = puVar11 + 3;
  } while (iVar10 != 0x27);
  uVar17 = (uint)(uVar3 >> 8) | (uVar3 & 0xff) << 8;
  uVar25 = uVar4 >> 8 | uVar4 << 8;
  if (uVar23 == 0x135d) {
    dump_string("p2p_tnp.c","myDoIOCtrl",0x1758,
                "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ABNORMAL_SOUND_SENSITIVITY\n",param_1);
    FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
    uVar14 = FUN_00445068(local_2c[0]);
    p2p_set_abnormal_sound_sensitivity(uVar14);
    reply_dev_info(param_1,0x135e,uVar24);
    goto LAB_00411000;
  }
  if (uVar23 < 0x135e) {
    if (uVar23 == 0x1311) {
      puVar27 = (undefined4 *)((int)param_2 + uVar17 + 0x28);
      dump_string("p2p_tnp.c","myDoIOCtrl",0x15e0,
                  "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_RESOLUTION\n",param_1);
      uVar14 = FUN_00445068(puVar27[1]);
      uVar18 = puVar27[1];
      *(undefined4 *)(&DAT_00478440 + param_1 * 0xdc8) = uVar14;
      uVar14 = FUN_00445068(uVar18);
      uVar18 = FUN_00445068(*puVar27);
      set_resolution(param_1,uVar14,uVar18,uVar24);
      goto LAB_00411000;
    }
    if (uVar23 < 0x1312) {
      if (uVar23 == 0x3c0) {
        dump_string("p2p_tnp.c","myDoIOCtrl",0x16f0,
                    "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_TRIGGER_SYNC_INFO_FROM_SERVER_REQ\n",
                    param_1);
        p2p_sync_info_from_server(param_1,uVar24);
        goto LAB_00411000;
      }
      if (uVar23 < 0x3c1) {
        if (uVar23 == 0x318) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x15aa,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_LISTEVENT_REQ\n",param_1);
          reply_event_list(param_1,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 < 0x319) {
          if (uVar23 == 0x300) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1574,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_AUDIOSTART\n",param_1);
            *(undefined4 *)(&DAT_0047845c + param_1 * 0xdc8) = 0xffffffff;
            (&DAT_00478426)[param_1 * 0xdc8] = 1;
            goto LAB_00411000;
          }
          if (uVar23 == 0x301) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x157a,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_AUDIOSTOP\n",param_1);
            (&DAT_00478426)[param_1 * 0xdc8] = 0;
            goto LAB_00411000;
          }
          if (uVar23 == 0x2ff) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1563,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_STOP\n",param_1);
            iVar10 = param_1 * 0xdc8;
            (&DAT_00478425)[iVar10] = 0;
            (&DAT_00478426)[iVar10] = 0;
            if ((&DAT_00478431)[iVar10] == '\x01') {
              p2p_send_stop_viewing();
            }
            (&DAT_00478431)[param_1 * 0xdc8] = 0;
            FUN_004109c4(param_1);
            goto LAB_00411000;
          }
        }
        else {
          if (uVar23 == 0x350) {
            iVar10 = param_1;
            dump_string("p2p_tnp.c","myDoIOCtrl",0x157f,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SPEAKERSTART\n",param_1);
            (&DAT_00478428)[param_1 * 0xdc8] = 1;
            if (uVar24 == 1) {
              iVar13 = FUN_00409a5c(DAT_00478414,0x1021,0,0);
              if (iVar13 < 0) {
                dump_string("p2p_tnp.c","myDoIOCtrl",0x1587,"RMM_APP_MODE_EARPHONE send_msg fail!\n"
                            ,iVar10);
              }
            }
            else if (uVar24 == 2) {
              iVar13 = FUN_00409a5c(DAT_00478414,0x1022,0,0);
              if (iVar13 < 0) {
                dump_string("p2p_tnp.c","myDoIOCtrl",0x158e,"RMM_APP_MODE_SPKER send_msg fail!\n",
                            iVar10);
              }
            }
            else {
              iVar13 = FUN_00409a5c(DAT_00478414,0x1022,0,0);
              if (iVar13 < 0) {
                dump_string("p2p_tnp.c","myDoIOCtrl",0x1596,"RMM_APP_MODE_SPKER send_msg fail!\n",
                            iVar10);
              }
            }
            goto LAB_00411000;
          }
          if (uVar23 == 0x351) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x159c,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SPEAKERSTOP\n",param_1);
            (&DAT_00478428)[param_1 * 0xdc8] = 0;
            goto LAB_00411000;
          }
          if (uVar23 == 0x330) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15a1,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_DEVINFO_REQ\n",param_1);
            reply_dev_info(param_1,0x331,uVar24);
            goto LAB_00411000;
          }
        }
      }
      else {
        if (uVar23 == 0x1302) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x1653,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_UPDATE_URI\n",param_1);
          FUN_00440868(auStack_400,0x200,0,0x200);
          FUN_00440884(auStack_400,0x200,(int)param_2 + uVar17 + 0x28,uVar25);
          do_update(param_1,uVar24);
          reply_dev_info(param_1,0x130f,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 < 0x1303) {
          if (uVar23 == 0x1230) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1751,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_MOTION_DETECT\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            uVar14 = FUN_00445068(local_2c[0]);
            p2p_set_motion_detect_status(uVar14);
            reply_dev_info(param_1,0x1231,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1300) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15fa,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_VERSION\n",param_1);
            get_version(param_1,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x3c4) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15a6,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_AP_INFO_REQ\n",param_1);
            reply_ap_mode_info(param_1,0x3c5,uVar24);
            goto LAB_00411000;
          }
        }
        else {
          if (uVar23 == 0x1305) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x160f,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_LIGHT\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            iVar10 = FUN_00445068(local_2c[0]);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1612,"value = %d\n",iVar10);
            if (iVar10 == 0) {
              p2p_set_light(0x76);
            }
            else if (iVar10 == 1) {
              p2p_set_light(0x77);
            }
            reply_dev_info(param_1,0x130d,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x130a) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x162f,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_RECORD_MOD\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            iVar10 = FUN_00445068(local_2c[0]);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1632,"value = %d\n",iVar10);
            if (iVar10 == 0) {
              p2p_set_motion_record(0x78);
            }
            else if (iVar10 == 1) {
              p2p_set_motion_record(0x79);
            }
            reply_dev_info(param_1,0x130b,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1304) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15ff,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_SILENT_MODE\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            iVar10 = FUN_00445068(local_2c[0]);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1602,"value = %d\n",iVar10);
            if (iVar10 == 0) {
              p2p_set_power(0x74);
            }
            else if (iVar10 == 1) {
              p2p_set_power(0x75);
            }
            reply_dev_info(param_1,0x130c,uVar24);
            goto LAB_00411000;
          }
        }
      }
    }
    else {
      if (uVar23 == 0x132f) {
        dump_string("p2p_tnp.c","myDoIOCtrl",0x16f5,
                    "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_LDC\n",param_1);
        FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
        uVar14 = FUN_00445068(local_2c[0]);
        p2p_set_ldc(uVar14);
        reply_dev_info(param_1,0x1330,uVar24);
        goto LAB_00411000;
      }
      if (uVar23 < 0x1330) {
        if (uVar23 == 0x1321) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x1661,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_DAYNIGHT_MODE\n",param_1);
          uVar14 = FUN_00445068(*(undefined4 *)((int)param_2 + uVar17 + 0x28));
          dump_string("p2p_tnp.c","myDoIOCtrl",0x1665,"value = %d\n",uVar14);
          p2p_set_day_night_mode(0x1024,uVar14);
          reply_dev_info(param_1,0x1322,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 < 0x1322) {
          if (uVar23 == 0x1315) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x165b,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_TF_FORMATE\n",param_1);
            reply_dev_info(param_1,0x1316,uVar24);
            FUN_00409a5c(DAT_00478414,0x85,0,0);
            goto LAB_00411000;
          }
          if (uVar23 == 0x131f) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x161f,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_MIRROR_FLIP\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            iVar10 = FUN_00445068(local_2c[0]);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1622,"value = %d\n",iVar10);
            if (iVar10 == 1) {
              p2p_set_mirror_flip(0x7a);
            }
            else if (iVar10 == 0) {
              p2p_set_mirror_flip(0x7b);
            }
            reply_dev_info(param_1,0x1320,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1313) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15e8,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_RESOLUTION\n",param_1);
            get_resolution(param_1,uVar24);
            goto LAB_00411000;
          }
        }
        else {
          if (uVar23 == 0x1327) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1646,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_MOTION_DETECT\n",param_1);
            FUN_0040c164(param_1,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x132d) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x164b,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ALARM_MODE\n",param_1);
            uVar14 = FUN_00445068(*(undefined4 *)((int)param_2 + uVar17 + 0x28));
            p2p_set_alarm_mode(uVar14);
            reply_dev_info(param_1,0x132e,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1325) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x163f,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_MOTION_DETECT\n",param_1);
            p2p_set_motion_detect(param_1,(int)param_2 + uVar17 + 0x28,uVar24);
            goto LAB_00411000;
          }
        }
      }
      else {
        if (uVar23 == 0x133b) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x1705,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_MIC_VOLUME\n",param_1);
          FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
          uVar14 = FUN_00445068(local_2c[0]);
          p2p_set_mic_volume(uVar14);
          reply_dev_info(param_1,0x133c,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 < 0x133c) {
          if (uVar23 == 0x1337) {
            puVar27 = (undefined4 *)((int)param_2 + uVar17 + 0x28);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15ed,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_RECORD_SPEED\n",param_1);
            uVar14 = FUN_00445068(puVar27[1]);
            uVar18 = puVar27[1];
            *(undefined4 *)(&DAT_00478440 + param_1 * 0xdc8) = uVar14;
            uVar14 = FUN_00445068(uVar18);
            uVar18 = FUN_00445068(*puVar27);
            set_record_speed(param_1,uVar14,uVar18,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1339) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15f5,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_RECORD_SPEED\n",param_1);
            get_record_speed(param_1,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1335) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x166b,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ALARM_SENSITIVITY\n",param_1);
            uVar14 = FUN_00445068(*(undefined4 *)((int)param_2 + uVar17 + 0x28));
            p2p_set_alarm_sensitivity(uVar14);
            reply_dev_info(param_1,0x1336,uVar24);
            goto LAB_00411000;
          }
        }
        else {
          if (uVar23 == 0x1353) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1673,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_VIDEO_BACKUP_REQ\n",param_1);
            p2p_set_video_backup_state(param_1,(int)param_2 + uVar17 + 0x28,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1355) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x167a,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_VIDEO_BACKUP_REQ\n",param_1);
            FUN_0040c384(param_1,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x133f) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16fd,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_BABY_CRY\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            uVar14 = FUN_00445068(local_2c[0]);
            p2p_set_baby_cry(uVar14);
            reply_dev_info(param_1,0x1340,uVar24);
            goto LAB_00411000;
          }
        }
      }
    }
  }
  else {
    if (uVar23 == 0x4000) {
      dump_string("p2p_tnp.c","myDoIOCtrl",0x1691,
                  "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_PRESET_ADD_REQ\n",param_1);
      p2p_ptz_preset_add(param_1,uVar24);
      goto LAB_00411000;
    }
    if (uVar23 < 0x4001) {
      if (uVar23 == 0x1384) {
        dump_string("p2p_tnp.c","myDoIOCtrl",0x1743,
                    "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_AP_MODE\n",param_1);
        if (uVar25 == 0x43) {
          p2p_ap_mode_set((int)param_2 + uVar17 + 0x28,"myDoIOCtrl");
        }
        else {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x174b,
                      "IOTYPE_USER_IPCAM_SET_AP_MODE nIOCtrlDataSize [%d],expect [%d]\n",0x43,uVar25
                     );
        }
        p2p_send_ctrl_data(param_1,0x1385,uVar24,DAT_0047841c + 0x9f0,1);
        goto LAB_00411000;
      }
      if (uVar23 < 0x1385) {
        if (uVar23 == 0x1369) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x1715,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_VOICE_CTRL_REQ\n",param_1);
          FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
          uVar9 = FUN_00445068(local_2c[0]);
          p2p_set_voice_ctrl(uVar9);
          reply_dev_info(param_1,0x136a,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 < 0x136a) {
          if (uVar23 == 0x1365) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x170d,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_VIEWPOINT_TRACE\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            uVar9 = FUN_00445068(local_2c[0]);
            p2p_set_viewpoint_trace(uVar9);
            reply_dev_info(param_1,0x1366,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1367) {
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            uVar14 = FUN_00445068(local_2c[0]);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x171f,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_LAPSE_VIDEO, value = %d\n",
                        param_1,uVar14);
            p2p_set_lapse_video(uVar14);
            reply_dev_info(param_1,0x1368,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1361) {
            if ((DAT_00480e1c == 1) || (FUN_00409a5c(DAT_00478418,0x7000,0,0), DAT_00480e1c != 2)) {
              iVar10 = 9999;
              do {
                ms_sleep(1);
                iVar13 = iVar10 + -1;
                if (DAT_00480e1c == 2) {
                  if (0 < iVar10) goto LAB_00410eec;
                  goto LAB_00412900;
                }
                iVar10 = iVar13;
              } while (iVar13 != -1);
              printf(&DAT_0044813c,"myDoIOCtrl",0x1767,0);
LAB_00412900:
              p2p_send_ctrl_error(param_1,0x1362,uVar24);
            }
            else {
LAB_00410eec:
              reply_dev_info(param_1,0x1362,uVar24);
            }
            goto LAB_00411000;
          }
        }
        else {
          if (uVar23 == 0x1380) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1735,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_DOUBLE_LIGHT\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            uVar14 = FUN_00445068(local_2c[0]);
            p2p_set_double_light(uVar14);
            reply_dev_info(param_1,0x1381,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x1382) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x173c,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ALARM_SOUND\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            uVar14 = FUN_00445068(local_2c[0]);
            p2p_set_alarm_sound(uVar14);
            reply_dev_info(param_1,0x1383,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x136b) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x172d,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ABNORMAL_SOUND\n",param_1);
            FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
            uVar14 = FUN_00445068(local_2c[0]);
            p2p_set_abnormal_sound(uVar14);
            reply_dev_info(param_1,0x136c,uVar24);
            goto LAB_00411000;
          }
        }
      }
      else {
        if (uVar23 == 0x2347) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x156f,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_TNP_EVENT_LIST_REQ\n",param_1);
          tnp_reply_event_list(param_1,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 < 0x2348) {
          if (uVar23 == 0x2345) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x14f3,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_TNP_IPCAM_START_KEY\n",param_1);
            pbVar26 = (byte *)((int)param_2 + uVar17 + 0x28);
            pcVar28 = &DAT_00478431;
            iVar10 = 0;
            do {
              cVar1 = *pcVar28;
              pcVar28 = pcVar28 + 0xdc8;
              if (cVar1 == '\x01') {
                iVar10 = iVar10 + 1;
              }
            } while (pcVar28 != (char *)((int)&DAT_00480e00 + 1));
            if (((&DAT_00478431)[param_1 * 0xdc8] == '\0') && (7 < iVar10)) {
              if (pbVar26[2] == 0) {
                dump_string("p2p_tnp.c","myDoIOCtrl",0x1503,
                            "myDoIOCtrl(..): %d, reach MAX_VIEWING_NUM\n",param_1);
                goto LAB_00411000;
              }
              FUN_00410a9c();
            }
            set_resolution(param_1,*pbVar26,pbVar26[1],0xffff);
            iVar10 = param_1 * 0xdc8;
            cVar1 = (&DAT_00478431)[iVar10];
            *(uint *)(&DAT_00478440 + iVar10) = (uint)*pbVar26;
            *(undefined4 *)(&DAT_00478458 + iVar10) = 0xffffffff;
            (&DAT_00478427)[iVar10] = 0;
            (&DAT_00478429)[iVar10] = 1;
            (&DAT_00478425)[iVar10] = 1;
          }
          else {
            if (uVar23 < 0x2346) {
              if (uVar23 == 0x1ffe) {
                dump_string("p2p_tnp.c","myDoIOCtrl",0x14df,
                            "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_START_KEY\n",param_1);
                iVar10 = param_1 * 0xdc8;
                (&DAT_00478427)[iVar10] = 0;
                (&DAT_00478429)[iVar10] = 1;
                uVar14 = *(undefined4 *)((int)param_2 + uVar17 + 0x28);
                *(undefined4 *)(&DAT_00478458 + iVar10) = 0xffffffff;
                uVar14 = FUN_00445068(uVar14);
                cVar1 = (&DAT_00478431)[iVar10];
                *(undefined4 *)(&DAT_00478440 + iVar10) = uVar14;
                (&DAT_00478425)[iVar10] = 1;
                goto joined_r0x00412814;
              }
              goto LAB_00411ca8;
            }
            iVar13 = param_1;
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1522,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_TNP_IPCAM_START_REPLAY_KEY\n",param_1);
            pbVar26 = (byte *)((int)param_2 + uVar17 + 0x28);
            pcVar28 = &DAT_00478431;
            iVar10 = 0;
            do {
              cVar1 = *pcVar28;
              pcVar28 = pcVar28 + 0xdc8;
              if (cVar1 == '\x01') {
                iVar10 = iVar10 + 1;
              }
            } while (pcVar28 != (char *)((int)&DAT_00480e00 + 1));
            if (((&DAT_00478431)[param_1 * 0xdc8] == '\0') && (7 < iVar10)) {
              if (pbVar26[2] == 0) {
                dump_string("p2p_tnp.c","myDoIOCtrl",0x1532,
                            "myDoIOCtrl(..): %d, reach MAX_VIEWING_NUM\n",param_1);
                goto LAB_00411000;
              }
              FUN_00410a9c();
            }
            set_resolution(param_1,*pbVar26,pbVar26[1],0xffff);
            if (((*(int *)(DAT_0047841c + 0x5a4) == 0) || (DAT_00468924 == (int *)0x0)) ||
               (*DAT_00468924 == 0)) {
              iVar10 = param_1 * 0xdc8;
              *(undefined4 *)(&DAT_00478458 + iVar10) = 0xffffffff;
              (&DAT_00478429)[iVar10] = 1;
              (&DAT_00478427)[iVar10] = 0;
              bVar2 = *pbVar26;
              (&DAT_00478425)[iVar10] = 1;
              *(uint *)(&DAT_00478440 + iVar10) = (uint)bVar2;
              FUN_0040d9f8(param_1,1,uVar24);
              dump_string("p2p_tnp.c","myDoIOCtrl",0x1554,"do_replay but no sd card\n",iVar13);
            }
            else {
              iVar10 = param_1 * 0xdc8;
              *(undefined4 *)(&DAT_004784b0 + iVar10) = 0;
              *(undefined4 *)(&DAT_004784b4 + iVar10) = 0;
              *(undefined4 *)(&DAT_004784b8 + iVar10) = 0;
              *(undefined4 *)(&DAT_004784bc + iVar10) = 0;
              *(undefined4 *)(&DAT_004784c0 + iVar10) = 0;
              *(undefined4 *)(&DAT_004784c4 + iVar10) = 0;
              uVar14 = *(undefined4 *)(pbVar26 + 8);
              *(undefined4 *)(&DAT_004784bc + iVar10) = *(undefined4 *)(pbVar26 + 4);
              *(undefined4 *)(&DAT_004784c0 + iVar10) = uVar14;
              (&DAT_00478427)[iVar10] = 1;
              (&DAT_00478429)[iVar10] = 1;
              bVar2 = *pbVar26;
              (&DAT_00478425)[iVar10] = 1;
              *(uint *)(&DAT_00478440 + iVar10) = (uint)bVar2;
              *(undefined4 *)(&DAT_004784b4 + iVar10) = 0x10000000;
              bVar2 = *pbVar26;
              (&DAT_0047842a)[iVar10] = 1;
              (&DAT_004784c4)[iVar10] = bVar2;
              FUN_0040d9f8(param_1,0x10,uVar24);
              dump_string("p2p_tnp.c","myDoIOCtrl",0x154a,"do_replay\n",iVar13);
            }
            cVar1 = (&DAT_00478431)[param_1 * 0xdc8];
          }
          if (cVar1 == '\0') {
            p2p_send_viewing();
            (&DAT_00478431)[param_1 * 0xdc8] = 1;
            FUN_00410920(param_1);
          }
          goto LAB_00411000;
        }
        if (uVar23 == 0x2352) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x1688,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_HIGH_RESOLUTION_REQ\n",param_1);
          FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
          uVar14 = FUN_00445068(local_2c[0]);
          dump_string("p2p_tnp.c","myDoIOCtrl",0x168b,"value = %d\n",uVar14);
          p2p_set_high_resolution(uVar14);
          reply_dev_info(param_1,0x2353,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 == 0x31ae) {
          puVar27 = (undefined4 *)((int)param_2 + uVar17 + 0x28);
          uVar14 = FUN_00445068(puVar27[1]);
          iVar10 = param_1;
          dump_string("p2p_tnp.c","myDoIOCtrl",0x15b2,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_RECORD_PLAYCONTROL_KEY p->command(0x%x)\n"
                      ,param_1,uVar14);
          iVar13 = FUN_00445068(puVar27[1]);
          if ((iVar13 != 0x10) && (iVar13 != 6)) {
            iVar13 = param_1 * 0xdc8;
            (&DAT_00478427)[iVar13] = 0;
            (&DAT_00478425)[iVar13] = 0;
            close_replay_frame(&DAT_00478478 + iVar13);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15d5,"do_replay stop\n",iVar10,uVar14);
            if ((&DAT_00478431)[iVar13] == '\x01') {
              p2p_send_stop_viewing();
              (&DAT_00478431)[iVar13] = 0;
            }
            goto LAB_00411000;
          }
          if ((*(int *)(DAT_0047841c + 0x5a4) == 0) ||
             ((DAT_00468924 == (int *)0x0 || (*DAT_00468924 == 0)))) {
            iVar13 = param_1 * 0xdc8;
            *(undefined4 *)(&DAT_00478458 + iVar13) = 0xffffffff;
            (&DAT_00478427)[iVar13] = 0;
            (&DAT_00478429)[iVar13] = 1;
            bVar2 = *(byte *)(puVar27 + 5);
            (&DAT_00478425)[iVar13] = 1;
            *(uint *)(&DAT_00478440 + iVar13) = (uint)bVar2;
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15c8,"do_replay but no sd card\n",iVar10,uVar14);
          }
          else {
            iVar8 = param_1 * 0xdc8;
            memset(&DAT_004784b0 + iVar8,0,0x18);
            uVar23 = (int)puVar27 + 7U & 3;
            iVar13 = *(int *)(((int)puVar27 + 7U) - uVar23);
            uVar17 = (int)puVar27 + 0xbU & 3;
            iVar5 = *(int *)(((int)puVar27 + 0xbU) - uVar17);
            uVar22 = puVar27[3];
            uVar21 = puVar27[4];
            uVar18 = puVar27[5];
            uVar19 = (uint)(puVar27 + 2) & 3;
            uVar6 = *(uint *)((int)(puVar27 + 2) - uVar19);
            uVar20 = (uint)(puVar27 + 1) & 3;
            uVar7 = *(uint *)((int)(puVar27 + 1) - uVar20);
            *(undefined4 *)(&DAT_004784b0 + iVar8) = *puVar27;
            *(uint *)(&DAT_004784b4 + iVar8) =
                 (iVar13 << (3 - uVar23) * 8 | in_t3 & 0xffffffffU >> (uVar23 + 1) * 8) &
                 -1 << (4 - uVar20) * 8 | uVar7 >> uVar20 * 8;
            *(uint *)(&DAT_004784b8 + iVar8) =
                 (iVar5 << (3 - uVar17) * 8 | in_t2 & 0xffffffffU >> (uVar17 + 1) * 8) &
                 -1 << (4 - uVar19) * 8 | uVar6 >> uVar19 * 8;
            *(undefined4 *)(&DAT_004784bc + iVar8) = uVar22;
            *(undefined4 *)(&DAT_004784c0 + iVar8) = uVar21;
            *(undefined4 *)(&DAT_004784c4 + iVar8) = uVar18;
            (&DAT_0047842a)[iVar8] = 1;
            bVar2 = *(byte *)(puVar27 + 5);
            (&DAT_00478427)[iVar8] = 1;
            *(uint *)(&DAT_00478440 + iVar8) = (uint)bVar2;
            (&DAT_00478429)[iVar8] = 1;
            (&DAT_00478425)[iVar8] = 1;
            dump_string("p2p_tnp.c","myDoIOCtrl",0x15bf,"do_replay\n",iVar10,uVar14);
          }
          cVar1 = (&DAT_00478431)[param_1 * 0xdc8];
joined_r0x00412814:
          if (cVar1 == '\0') {
            p2p_send_viewing();
            (&DAT_00478431)[param_1 * 0xdc8] = 1;
          }
          goto LAB_00411000;
        }
        if (uVar23 == 0x2350) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x167f,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_ENCODING_MODE_REQ\n",param_1);
          FUN_00440884(local_2c,4,(int)param_2 + uVar17 + 0x28,4);
          uVar14 = FUN_00445068(local_2c[0]);
          dump_string("p2p_tnp.c","myDoIOCtrl",0x1682,"value = %d\n",uVar14);
          p2p_set_encode_mode(uVar14);
          reply_dev_info(param_1,0x2351,uVar24);
          goto LAB_00411000;
        }
      }
    }
    else {
      if (uVar23 == 0x4013) {
        dump_string("p2p_tnp.c","myDoIOCtrl",0x16cb,
                    "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_DIRECTION_CTRL_STOP\n",param_1);
        p2p_ptz_direction_ctrl_stop();
        goto LAB_00411000;
      }
      if (uVar23 < 0x4014) {
        if (uVar23 == 0x4009) {
          puVar27 = (undefined4 *)((int)param_2 + uVar17 + 0x28);
          dump_string("p2p_tnp.c","myDoIOCtrl",0x16af,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_SET_CRUISE_PERIOD_REQ\n",param_1);
          uVar14 = FUN_00445068(*puVar27);
          uVar18 = FUN_00445068(puVar27[1]);
          p2p_ptz_set_cruise_period(param_1,uVar14,uVar18,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 < 0x400a) {
          if (uVar23 == 0x4006) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16a0,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_PRESET_CALL_REQ\n",param_1);
            uVar14 = FUN_00445068(*(undefined4 *)((int)param_2 + uVar17 + 0x28));
            p2p_ptz_preset_call(param_1,uVar14,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x4007) {
            puVar27 = (undefined4 *)((int)param_2 + uVar17 + 0x28);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16a8,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_SET_CURISE_STAY_TIME_REQ\n",param_1);
            uVar14 = FUN_00445068(*puVar27);
            uVar18 = FUN_00445068(puVar27[1]);
            p2p_ptz_set_cruise_stay_time(param_1,uVar14,uVar18,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x4002) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1697,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_PRESET_DEL_REQ\n",param_1);
            uVar14 = FUN_00445068(*(undefined4 *)((int)param_2 + uVar17 + 0x28));
            p2p_ptz_preset_del(param_1,uVar14,uVar24);
            goto LAB_00411000;
          }
        }
        else {
          if (uVar23 == 0x4010) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16bd,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_SET_CRUISE_REQ\n",param_1);
            uVar14 = FUN_00445068(*(undefined4 *)((int)param_2 + uVar17 + 0x28));
            p2p_ptz_set_cruise(param_1,uVar14,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x4012) {
            puVar27 = (undefined4 *)((int)param_2 + uVar17 + 0x28);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16c4,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_DIRECTION_CTRL\n",param_1);
            uVar14 = FUN_00445068(*puVar27);
            uVar18 = FUN_00445068(puVar27[1]);
            p2p_ptz_direction_ctrl(uVar14,uVar18);
            goto LAB_00411000;
          }
          if (uVar23 == 0x400b) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16b6,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_SET_MOTION_TRACK_REQ\n",param_1);
            uVar14 = FUN_00445068(*(undefined4 *)((int)param_2 + uVar17 + 0x28));
            p2p_ptz_set_motion_track(param_1,uVar14,uVar24);
            goto LAB_00411000;
          }
        }
      }
      else {
        if (uVar23 == 0x4022) {
          dump_string("p2p_tnp.c","myDoIOCtrl",0x16e1,
                      "myDoIOCtrl(..): %d, IOTYPE_USER_PANORAMA_CAPTURE_ABORT\n",param_1);
          p2p_abort_panorama_capture(param_1,uVar24);
          goto LAB_00411000;
        }
        if (uVar23 < 0x4023) {
          if (uVar23 == 0x4015) {
            puVar27 = (undefined4 *)((int)param_2 + uVar17 + 0x28);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16d5,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_JUMP_TO_POINT\n",param_1);
            uVar14 = FUN_00445068(*puVar27);
            uVar18 = FUN_00445068(puVar27[1]);
            p2p_ptz_jump_to_point(uVar14,uVar18);
            goto LAB_00411000;
          }
          if (uVar23 < 0x4015) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16d0,"myDoIOCtrl(..): %d, IOTYPE_USER_PTZ_HOME\n"
                        ,param_1);
            p2p_ptz_home();
            goto LAB_00411000;
          }
          if (uVar23 == 0x4020) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16dc,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PANORAMA_CAPTURE_START\n",param_1);
            p2p_start_panorama_capture(param_1,uVar24);
            goto LAB_00411000;
          }
        }
        else {
          if (uVar23 == 0x5001) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x1725,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_SET_AUDIO_MODE\n",param_1);
            uVar14 = FUN_00445068(*(undefined4 *)((int)param_2 + uVar17 + 0x28));
            p2p_set_audio_mode(uVar14);
            reply_dev_info(param_1,0x5002,uVar24);
            goto LAB_00411000;
          }
          if (uVar23 == 0x6ff1) {
            reply_factory_test_info(param_1,uVar24);
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16ec,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_IPCAM_GET_FACTORY_TEST_INFO_REQ\n",param_1)
            ;
            goto LAB_00411000;
          }
          if (uVar23 == 0x4024) {
            dump_string("p2p_tnp.c","myDoIOCtrl",0x16e6,
                        "myDoIOCtrl(..): %d, IOTYPE_USER_PANORAMA_CAPTURE_SCHEDULE_POLLING\n",
                        param_1);
            FUN_0040ce50(param_1,uVar24);
            goto LAB_00411000;
          }
        }
      }
    }
  }
LAB_00411ca8:
  dump_string("p2p_tnp.c","myDoIOCtrl",5999,"myDoIOCtrl(..): Unknown command 0x%02x\n",uVar23);
LAB_00411000:
  if (DAT_00468918 != 1) {
    return;
  }
  (&DAT_00478429)[param_1 * 0xdc8] = 0;
  return;
}



// ==== myReleaseUser @ 00412b0c size=196

void myReleaseUser(int param_1)

{
  if (param_1 != 0) {
    if (-1 < *(int *)(param_1 + 0x18)) {
      dump_string("p2p_tnp.c","myReleaseUser",0x1784,"start PPPP_ForceClose finish %d\n",
                  *(int *)(param_1 + 0x18));
      FUN_00406230(*(undefined4 *)(param_1 + 0x18));
      dump_string("p2p_tnp.c","myReleaseUser",0x1786,"finish PPPP_ForceClose finish %d\n",
                  *(undefined4 *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0xd3c) != 0) {
      free();
      *(undefined4 *)(param_1 + 0xd3c) = 0;
    }
    memset(param_1,0,0xdc8);
    return;
  }
  return;
}



// ==== parse_msg @ 00412bd0 size=624

int parse_msg(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte local_420 [4];
  undefined4 local_41c;
  ushort local_418;
  ushort local_416;
  int local_20;
  int local_1c;
  int local_18;
  
  memset(local_420,0,0x400);
  local_1c = 8;
  local_20 = 0;
  local_18 = FUN_004061c0((&DAT_0047843c)[param_1 * 0x372],0,local_420,&local_1c,10);
  iVar1 = local_1c;
  if ((local_18 != -0xbbb) && (local_18 != 0)) {
    uVar2 = (&DAT_0047843c)[param_1 * 0x372];
    (&DAT_00478424)[param_1 * 0xdc8] = 1;
    dump_string("p2p_tnp.c","parse_msg",0x17a2,"parse_msg: failed %d SessionHandle(%d)!!\n",local_18
                ,uVar2);
    return local_18;
  }
  if ((0 < local_1c) && (local_20 = FUN_00445068(local_41c), local_20 - 1U < 0x3ff)) {
    local_18 = FUN_004061c0((&DAT_0047843c)[param_1 * 0x372],0,&local_418,&local_20,10);
    if ((local_18 == -0xbbb) || (local_18 == 0)) {
      if (local_20 < 1) {
        return local_1c;
      }
      if (local_420[0] == 1) {
        (&DAT_00478432)[param_1 * 0xdc8] = 1;
        myDoIOCtrl(param_1,&local_418);
        iVar1 = local_1c;
      }
      else {
        if (local_420[0] < 2) {
          (&DAT_00478432)[param_1 * 0xdc8] = local_420[0];
          if (local_420[0] != 1) {
            return local_1c;
          }
          myDoIOCtrl(param_1,&local_418);
          return local_1c;
        }
        dump_string("p2p_tnp.c","parse_msg",0x17c3,"unsupport version\n");
        p2p_send_unsupported_version_reply
                  (param_1,local_418 >> 8 | local_418 << 8,local_416 >> 8 | local_416 << 8);
        iVar1 = local_1c;
      }
    }
    else {
      (&DAT_00478424)[param_1 * 0xdc8] = 1;
      dump_string("p2p_tnp.c","parse_msg",0x17b2,"parse_msg: failed %d !!\n",local_18);
      iVar1 = local_18;
    }
  }
  return iVar1;
}



// ==== refresh_tnp_event_list @ 00413078 size=576

void refresh_tnp_event_list(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int local_38;
  int local_34;
  int local_30 [3];
  
  local_30[0] = 0;
  if (DAT_00468924 == (uint *)0x0) {
    FUN_00408f7c();
  }
  if (((*(int *)(DAT_0047841c + 0x5a4) != 0) && (DAT_00468924 != (uint *)0x0)) &&
     (uVar5 = *DAT_00468924, uVar5 != 0)) {
    event_log_get(0,1,&local_38);
    dump_string("p2p_tnp.c","refresh_tnp_event_list",0x1848,"prev newest_end_time is %ld\n",
                DAT_00478410);
    if (DAT_00478410 != local_34) {
      pthread_mutex_lock(&DAT_00468940);
      DAT_00478410 = local_34;
      if (0 < (int)uVar5) {
        uVar4 = 0;
        puVar3 = &DAT_0046c410;
        do {
          event_log_get(uVar4,1,&local_38);
          uVar4 = uVar4 + 1;
          local_30[0] = local_38;
          puVar1 = (undefined4 *)gmtime(local_30);
          *puVar3 = (ushort)((uint)(puVar1[5] + 0x76c) >> 8) & 0xff |
                    (short)(puVar1[5] + 0x76c) * 0x100;
          *(char *)(puVar3 + 1) = (char)puVar1[4] + '\x01';
          *(char *)((int)puVar3 + 3) = (char)puVar1[3];
          *(char *)((int)puVar3 + 5) = (char)puVar1[2];
          *(char *)(puVar3 + 3) = (char)puVar1[1];
          *(char *)((int)puVar3 + 7) = (char)*puVar1;
          *(char *)(puVar3 + 2) = (char)puVar1[6];
          uVar2 = FUN_00445068(local_34 - local_38);
          *(undefined4 *)(puVar3 + 4) = uVar2;
          puVar3 = puVar3 + 6;
        } while (uVar5 != uVar4);
      }
      DAT_0046c404 = (ushort)((uVar5 & 0xffff) >> 8) | (ushort)((uVar5 & 0xffff) << 8);
      pthread_mutex_unlock(&DAT_00468940);
      dump_string("p2p_tnp.c","refresh_tnp_event_list",0x1862,"after newest_end_time is %ld\n",
                  DAT_00478410);
    }
    dump_string("p2p_tnp.c","refresh_tnp_event_list",0x1864,"got event(%d)",uVar5);
    return;
  }
  pthread_mutex_lock(&DAT_00468940);
  DAT_0046c404 = 0;
  pthread_mutex_unlock(&DAT_00468940);
  return;
}



// ==== state_statistics @ 0041334c size=648

void state_statistics(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char local_30 [8];
  
  local_30[0] = '\0';
  prctl(0xf,"state_statistics",0,0,0);
  if ((*(short *)(DAT_0047841c + 0x4c4) == 1) || (*(char *)(DAT_0047841c + 0x98c) == '\x01')) {
    FUN_00406180(0);
  }
  else {
    FUN_00406180(1);
  }
  uVar4 = 0;
  sVar5 = *(short *)(DAT_0047841c + 0x4c4);
  iVar7 = 0;
  cVar6 = *(char *)(DAT_0047841c + 0x98c);
LAB_0041353c:
  iVar2 = *(int *)(DAT_0047841c + 0x5a0);
  do {
    iVar8 = iVar2;
    refresh_tnp_event_list();
    do {
      iVar2 = FUN_004132b8();
      if ((iVar2 == 0) && (0 < *(int *)(DAT_0047841c + 0x5b4))) {
        p2p_send_clr_viewing();
      }
      sVar1 = *(short *)(DAT_0047841c + 0x4c4);
      if (sVar1 == sVar5) {
        if (*(char *)(DAT_0047841c + 0x98c) != cVar6) {
          if (sVar1 != 1) goto LAB_00413470;
LAB_00413558:
          uVar3 = 0;
          goto LAB_00413480;
        }
      }
      else {
        uVar3 = 0;
        if (sVar1 != 1) {
LAB_00413470:
          if (*(char *)(DAT_0047841c + 0x98c) == '\x01') goto LAB_00413558;
          uVar3 = 1;
        }
LAB_00413480:
        FUN_00406180(uVar3);
        cVar6 = *(char *)(DAT_0047841c + 0x98c);
        sVar5 = *(short *)(DAT_0047841c + 0x4c4);
      }
      sleep(5);
      if ((uVar4 & 1) == 0) {
        FUN_00406240(local_30);
        if (local_30[0] == '\0') {
          iVar7 = iVar7 + 1;
          dump_string("p2p_tnp.c","state_statistics",0x18e0,"check_login fail %d\n",0);
          p2p_set_tnp_check_login_fail();
          DAT_00468910 = DAT_00468910 + 1;
          if ((DAT_00468918 != 0) || (iVar7 < 0x1f)) goto LAB_00413518;
          dump_string("p2p_tnp.c","state_statistics",0x18f0,
                      "check_login_success = %d, check_login_fail = %d\n",DAT_00468914,DAT_00468910)
          ;
          dump_string("p2p_tnp.c","state_statistics",0x18f1,"too many loginfail force exit %d\n",
                      iVar7);
          exit(0);
        }
        iVar7 = 0;
        p2p_set_tnp_check_login_success();
        DAT_00468914 = DAT_00468914 + 1;
      }
LAB_00413518:
      uVar4 = uVar4 + 1;
      if (uVar4 == ((int)uVar4 / 6) * 6) goto LAB_0041353c;
      iVar2 = *(int *)(DAT_0047841c + 0x5a0);
    } while (iVar8 == *(int *)(DAT_0047841c + 0x5a0));
  } while( true );
}



// ==== __test @ 00413bf8 size=220

undefined4 __test(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14 [2];
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14[0] = 0;
  local_18 = 0;
  if (param_1 < 3) {
    return 0;
  }
  sscanf(*(undefined4 *)(param_2 + 4),&DAT_00448658,local_14);
  sscanf(*(undefined4 *)(param_2 + 8),&DAT_00448658,&local_18);
  local_24 = 8;
  local_28 = local_18;
  local_20 = CONCAT22(1,(short)local_14[0]);
  local_1c = 0;
  printf(&DAT_0044865c,"__test",0x1a22,local_14[0] & 0xffff,local_18);
  uVar1 = FUN_00440e4c(DAT_00478414,&local_28,0x10);
  return uVar1;
}



// ==== IBNj3F4L37HiSGpwBgD6 @ 0041da44 size=216

undefined4 IBNj3F4L37HiSGpwBgD6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [3];
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18[0] = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar1 = (*(code *)PTR_PPPP__ParseDID_00468498)(param_1,&local_28,0x10,local_18,&local_38,0x10);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_PPPP__GetLanSearchFlag_00468454)();
    uVar2 = (*(code *)PTR_PPPP_Connect_To_00468494)
                      (&local_28,local_18[0],&local_38,uVar2,PTR_DAT_00468298 + -0x52e8,0,
                       PTR_DAT_00468298 + -0x5290,0);
  }
  else {
    uVar2 = 0xfffff444;
  }
  return uVar2;
}



// ==== CRCDec @ 00427434 size=60

/* tnp::CRCDec(unsigned char*, int, unsigned char*, int) */

void tnp::CRCDec(uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  (*(code *)PTR_PPPP_CRCDec_00468620)();
  return;
}



// ==== SllIndexCompare @ 0042d770 size=80

/* tnp::SllIndexCompare(unsigned int, unsigned int, unsigned int) */

uint tnp::SllIndexCompare(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 < param_1) {
    uVar1 = param_1 - param_2;
    if (param_3 >> 1 < uVar1) {
      return (param_1 - param_3) - param_2;
    }
  }
  else {
    if (param_3 >> 1 < param_2 - param_1) {
      return (param_1 - param_2) + param_3;
    }
    uVar1 = param_1 - param_2;
  }
  return uVar1;
}



// ==== IndexCompare @ 0042d7c0 size=100

/* tnp::IndexCompare(unsigned short, unsigned short) */

undefined4 tnp::IndexCompare(ushort param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_SllIndexCompare_00468674)(param_1,param_2,0x10000);
  if (iVar1 != 0) {
    uVar2 = 1;
    if (iVar1 < 1) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 0;
}



// ==== IndexDistanse @ 0042d824 size=36

/* tnp::IndexDistanse(unsigned short, unsigned short) */

void tnp::IndexDistanse(ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0042d840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_SllIndexCompare_00468674)(param_1,param_2,0x10000);
  return;
}



// ==== mSecSleep @ 0042e1e4 size=36

/* tnp::mSecSleep(unsigned int) */

void tnp::mSecSleep(uint param_1)

{
  (*(code *)PTR_usleep_004688a4)(param_1 * 1000);
  return;
}



// ==== SetSocketNonBlock @ 0042e208 size=84

/* tnp::SetSocketNonBlock(int) */

void tnp::SetSocketNonBlock(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_004687b4)(param_1,3,0);
                    /* WARNING: Could not recover jumptable at 0x0042e254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fcntl_004687b4)(param_1,4,uVar1 | 0x80);
  return;
}



// ==== SetSocketBlock @ 0042e25c size=88

/* tnp::SetSocketBlock(int) */

void tnp::SetSocketBlock(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_fcntl_004687b4)(param_1,3,0);
                    /* WARNING: Could not recover jumptable at 0x0042e2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fcntl_004687b4)(param_1,4,uVar1 & 0xffffff7f);
  return;
}



// ==== SetSocketBroadcast @ 0042e2b4 size=72

/* tnp::SetSocketBroadcast(int) */

void tnp::SetSocketBroadcast(int param_1)

{
  undefined4 local_10 [3];
  
  local_10[0] = 1;
  (*(code *)PTR_setsockopt_00468850)(param_1,0xffff,0x20,local_10,4);
  return;
}



// ==== CreateWorkerThread @ 0042e2fc size=80

/* tnp::CreateWorkerThread(void* (*)(void*), void*) */

undefined4 tnp::CreateWorkerThread(_func_void_ptr_void_ptr *param_1,void *param_2)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = (*(code *)PTR_pthread_create_004688c4)(local_10,0,param_1,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  return local_10[0];
}



// ==== WaitThreadExit @ 0042e34c size=72

/* tnp::WaitThreadExit(unsigned long*) */

void tnp::WaitThreadExit(ulong *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR_pthread_join_004687b0)(*param_1,0);
  }
  *param_1 = 0;
  return;
}



// ==== InitSocketEnv @ 0042e394 size=8

/* tnp::InitSocketEnv() */

undefined4 tnp::InitSocketEnv(void)

{
  return 0;
}



// ==== ClearSocketEnv @ 0042e39c size=8

/* tnp::ClearSocketEnv() */

void tnp::ClearSocketEnv(void)

{
  return;
}



// ==== getTickCount @ 004309e0 size=104

/* tnp::getTickCount() */

int tnp::getTickCount(void)

{
  int local_10;
  int local_c;
  
  (*(code *)PTR_gettimeofday_0046881c)(&local_10,0);
  return local_10 * 1000 + local_c / 1000;
}



// ==== getCurTime @ 00430a48 size=124

/* tnp::getCurTime() */

void tnp::getCurTime(void)

{
  undefined1 local_10 [12];
  
  (*(code *)PTR_gettimeofday_0046881c)(local_10,0);
  return;
}



// ==== trim @ 00430cf0 size=188

/* tnp::trim(char*) */

char * tnp::trim(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  iVar1 = (*(code *)PTR_strlen_004687c0)(param_1);
  pcVar2 = param_1 + iVar1;
  if (0 < iVar1) {
    while( true ) {
      iVar3 = (int)pcVar2[-1];
      if (((iVar3 != 0x20) && (1 < (iVar3 - 9U & 0xff))) && (pcVar2 = param_1 + iVar1, iVar3 != 0xd)
         ) break;
      iVar1 = iVar1 + -1;
      pcVar2 = param_1 + iVar1;
      if (iVar1 == 0) {
        *pcVar2 = '\0';
        return param_1;
      }
    }
  }
  *pcVar2 = '\0';
  return param_1;
}



// ==== myrindex @ 0043123c size=32

/* tnp::myrindex(char*, int) */

char * tnp::myrindex(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != 0);
  return pcVar2;
}



// ==== CRCSelect4Key @ 00431d9c size=812

/* WARNING: Removing unreachable block (ram,0x00431f18) */
/* WARNING: Removing unreachable block (ram,0x00431f20) */
/* WARNING: Removing unreachable block (ram,0x00431f24) */
/* WARNING: Removing unreachable block (ram,0x00431f44) */
/* WARNING: Removing unreachable block (ram,0x00431f4c) */
/* WARNING: Removing unreachable block (ram,0x00431f50) */
/* WARNING: Removing unreachable block (ram,0x00431f90) */
/* WARNING: Removing unreachable block (ram,0x00431f98) */
/* WARNING: Removing unreachable block (ram,0x00431f9c) */
/* WARNING: Removing unreachable block (ram,0x00431fbc) */
/* WARNING: Removing unreachable block (ram,0x00431fc4) */
/* WARNING: Removing unreachable block (ram,0x00431fc8) */
/* WARNING: Removing unreachable block (ram,0x00432000) */
/* WARNING: Removing unreachable block (ram,0x00432008) */
/* WARNING: Removing unreachable block (ram,0x0043200c) */
/* WARNING: Removing unreachable block (ram,0x0043202c) */
/* WARNING: Removing unreachable block (ram,0x00432034) */
/* WARNING: Removing unreachable block (ram,0x00432038) */
/* WARNING: Removing unreachable block (ram,0x00432070) */
/* WARNING: Removing unreachable block (ram,0x00432078) */
/* WARNING: Removing unreachable block (ram,0x0043207c) */
/* WARNING: Removing unreachable block (ram,0x0043209c) */
/* WARNING: Removing unreachable block (ram,0x004320a0) */
/* tnp::CRCSelect4Key(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char,
   unsigned char*, unsigned char*, unsigned char*, unsigned char*) */

void tnp::CRCSelect4Key(uchar param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,
                       uchar *param_6,uchar *param_7,uchar *param_8,uchar *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  
  puVar5 = PTR_DAT_00468298;
  uVar1 = (uint)param_1;
  uVar6 = (uint)param_5;
  uVar2 = (uint)param_2;
  if (param_2 == '\0') {
    trap(0x1c00);
  }
  uVar3 = (uint)param_3;
  uVar4 = (uint)param_4;
  if (uVar6 == 0) {
    trap(0x1c00);
  }
  if (param_3 == '\0') {
    trap(0x1c00);
  }
  *param_6 = PTR_DAT_00468298
             [(uVar1 % uVar2 + uVar3 & 7) * 8 + (uVar4 % uVar6 + uVar1 & 7) + -0x20b8];
  if (param_2 == '\0') {
    trap(0x1c00);
  }
  if (param_4 == '\0') {
    trap(0x1c00);
  }
  *param_7 = puVar5[(uVar1 % uVar3 + uVar4 & 7) * 8 + (uVar6 % uVar2 + uVar1 & 7) + -0x20b8];
  if (param_3 == '\0') {
    trap(0x1c00);
  }
  if (uVar6 == 0) {
    trap(0x1c00);
  }
  *param_8 = puVar5[(uVar1 % uVar4 + uVar6 & 7) * 8 + (uVar2 % uVar3 + uVar1 & 7) + -0x20b8];
  if (param_4 == '\0') {
    trap(0x1c00);
  }
  *param_9 = puVar5[(uVar1 % uVar6 + uVar2 & 7) * 8 + (uVar3 % uVar4 + uVar1 & 7) + -0x20b8];
  return;
}



// ==== AddrIsTheSame @ 004324d0 size=44

/* tnp::AddrIsTheSame(sockaddr_in*, sockaddr_in*) */

bool tnp::AddrIsTheSame(sockaddr_in *param_1,sockaddr_in *param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    return true;
  }
  return *(short *)(param_1 + 2) != *(short *)(param_2 + 2);
}



// ==== over_time_receive_tcp @ 004324fc size=460

/* tnp::over_time_receive_tcp(int, char*, int, unsigned int) */

int tnp::over_time_receive_tcp(int param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint local_a0 [32];
  uint local_20;
  int local_1c;
  
  puVar4 = local_a0;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  } while (&local_20 != puVar4);
  puVar4 = local_a0 + ((uint)param_1 >> 5);
  *puVar4 = 1 << (param_1 & 0x1fU) | *puVar4;
  local_1c = (param_4 % 1000) * 1000;
  local_20 = (param_4 - param_4 % 1000) / 1000;
  iVar1 = (*(code *)PTR_select_00468878)(param_1 + 1,local_a0,0,0,&local_20);
  if (iVar1 == -1) {
    puVar3 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x2070,*puVar3);
    return -1;
  }
  iVar2 = 0;
  if ((iVar1 != 0) && (((int)*puVar4 >> (param_1 & 0x1fU) & 1U) != 0)) {
    (*(code *)PTR_memset_00468810)(param_2,0,param_3);
    iVar1 = (*(code *)PTR_recv_004688cc)(param_1,param_2,param_3,0x4000);
    iVar2 = iVar1;
    if (iVar1 < 1) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x2054,iVar1);
      iVar2 = -2;
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
    }
  }
  return iVar2;
}



// ==== SendMessageByTCP @ 004326c8 size=460

/* tnp::SendMessageByTCP(char*, int, int) */

int tnp::SendMessageByTCP(char *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar5 = 0;
  puVar6 = PTR_DAT_00468298 + -0x203c;
  iVar4 = param_2;
  while( true ) {
    iVar1 = (*(code *)PTR_send_00468868)(param_3,param_1,iVar4,0x4000);
    while (-1 < iVar1) {
      if (iVar4 == iVar1) {
        return param_2;
      }
      iVar4 = iVar4 - iVar1;
      param_1 = param_1 + iVar1;
      iVar1 = (*(code *)PTR_send_00468868)(param_3,param_1,iVar4,0x4000);
    }
    if (2 < iVar5) break;
    piVar2 = (int *)(*(code *)PTR___errno_location_004687d0)();
    iVar1 = *piVar2;
    if ((iVar1 != 4) && (iVar1 != 0xb)) goto LAB_0043279c;
    iVar5 = iVar5 + 1;
    uVar3 = (*(code *)PTR_strerror_004688c0)(iVar1);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,puVar6,param_3,iVar1,uVar3);
    (*(code *)PTR_usleep_004688a4)(1000);
  }
  piVar2 = (int *)(*(code *)PTR___errno_location_004687d0)();
  iVar1 = *piVar2;
LAB_0043279c:
  uVar3 = (*(code *)PTR_strerror_004688c0)(iVar1);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x2014,param_3,iVar1,uVar3,iVar5);
  return -1;
}



// ==== CloseSocket @ 00432894 size=80

/* tnp::CloseSocket(int) */

void tnp::CloseSocket(int param_1)

{
  (*(code *)PTR_close_004687ac)();
                    /* WARNING: Could not recover jumptable at 0x004328dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x1fdc,param_1);
  return;
}



// ==== CreateSocket @ 004328e4 size=248

/* tnp::CreateSocket(char) */

int tnp::CreateSocket(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 == '\0') {
    uVar2 = 10;
    if (*PTR_isIPv6Only_004686b0 != '\x01') {
      uVar2 = 2;
    }
    iVar1 = (*(code *)PTR_socket_0046887c)(uVar2,1,0);
  }
  else {
    uVar2 = 10;
    if (*PTR_isIPv6Only_004686b0 != '\x01') {
      uVar2 = 2;
    }
    iVar1 = (*(code *)PTR_socket_0046887c)(uVar2,2,0);
    local_10 = 1;
    local_c = 0;
    (*(code *)PTR_setsockopt_00468850)(iVar1,0xffff,0x1005,&local_10,8);
  }
  iVar3 = iVar1;
  if (0x3ff < iVar1) {
    iVar3 = -1;
    (*(code *)PTR_CloseSocket_004683b4)(iVar1);
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x1fcc,iVar3);
  return iVar3;
}



// ==== setup_listen_port @ 004329dc size=400

/* tnp::setup_listen_port(unsigned short) */

int tnp::setup_listen_port(ushort param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_a0;
  ushort local_9e;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_20 [2];
  
  local_20[0] = 1;
  iVar1 = (*(code *)PTR_CreateSocket_004683c8)(0);
  if (iVar1 == -1) {
    iVar1 = -1;
  }
  else {
    iVar2 = (*(code *)PTR_setsockopt_00468850)(iVar1,0xffff,4,local_20,4);
    if ((-1 < iVar2) &&
       (iVar2 = (*(code *)PTR_setsockopt_00468850)(iVar1,0xffff,0x20,local_20,4), -1 < iVar2)) {
      (*(code *)PTR_memset_00468810)(&local_a0,0,0x80);
      if (*PTR_isIPv6Only_004686b0 == '\x01') {
        local_98 = *(undefined4 *)PTR_in6addr_any_004688e4;
        local_94 = *(undefined4 *)(PTR_in6addr_any_004688e4 + 4);
        uVar3 = 0x1c;
        local_90 = *(undefined4 *)(PTR_in6addr_any_004688e4 + 8);
        local_8c = *(undefined4 *)(PTR_in6addr_any_004688e4 + 0xc);
        local_a0 = 10;
      }
      else {
        local_a0 = 2;
        uVar3 = 0x10;
      }
      local_9e = param_1 >> 8 | param_1 << 8;
      iVar2 = (*(code *)PTR_bind_00468858)(iVar1,&local_a0,uVar3);
      if (-1 < iVar2) {
        return iVar1;
      }
      (*(code *)PTR_CloseSocket_004683b4)();
      return -3;
    }
    iVar1 = -2;
  }
  return iVar1;
}



// ==== TryBindPort @ 00432b6c size=472

/* tnp::TryBindPort(int, unsigned short*) */

int tnp::TryBindPort(int param_1,ushort *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  
  puVar2 = PTR_isIPv6Only_004686b0;
  (*(code *)PTR_memset_00468810)(&local_a8,0,0x80);
  if (*puVar2 == '\x01') {
    local_a8 = 10;
    uVar6 = 0x1c;
    local_a0 = *(undefined4 *)PTR_in6addr_any_004688e4;
    local_9c = *(undefined4 *)(PTR_in6addr_any_004688e4 + 4);
    local_98 = *(undefined4 *)(PTR_in6addr_any_004688e4 + 8);
    local_94 = *(undefined4 *)(PTR_in6addr_any_004688e4 + 0xc);
  }
  else {
    uVar6 = 0x10;
    local_a8 = 2;
  }
  uVar1 = *param_2;
  if (uVar1 == 0) {
    iVar3 = 1000;
    uVar4 = (*(code *)PTR_getTickCount_004683c0)();
    (*(code *)PTR_srand_0046880c)(uVar4);
    do {
      iVar3 = iVar3 + -1;
      iVar5 = (*(code *)PTR_rand_00468844)();
      uVar7 = iVar5 % 20000 + 10000;
      uVar7 = (uVar7 & 0xffff) >> 8 | uVar7 * 0x100 & 0xffff;
      local_a6 = (undefined2)uVar7;
      iVar5 = (*(code *)PTR_bind_00468858)(param_1,&local_a8,uVar6);
      if (iVar5 == 0) {
        iVar5 = 0;
        break;
      }
      iVar5 = -1;
    } while (iVar3 != 0);
  }
  else {
    uVar7 = (uint)(uVar1 >> 8) | (uVar1 & 0xff) << 8;
    local_a6 = (undefined2)uVar7;
    iVar3 = (*(code *)PTR_bind_00468858)(param_1,&local_a8,uVar6);
    iVar5 = -(uint)(iVar3 != 0);
  }
  *param_2 = (ushort)(uVar7 >> 8) | (ushort)(uVar7 << 8);
  return iVar5;
}



// ==== ConnectAddress @ 00432d44 size=28

/* tnp::ConnectAddress(int, sockaddr_in const*) */

void tnp::ConnectAddress(int param_1,sockaddr_in *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00432d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_connect_004688c8)(param_1,param_2,0x10);
  return;
}



// ==== SendToAddress @ 00432d60 size=60

/* tnp::SendToAddress(int, char*, int, sockaddr_in const*) */

void tnp::SendToAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4)

{
  (*(code *)PTR_sendto_00468834)();
  return;
}



// ==== SendMessage @ 00432d9c size=280

/* tnp::SendMessage(char*, int, int, sockaddr_in*) */

int tnp::SendMessage(char *param_1,int param_2,int param_3,sockaddr_in *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (*(code *)PTR_SendToAddress_00468610)(param_3,param_1,param_2);
  if (-1 < iVar2) {
    return iVar2;
  }
  uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_4 + 4));
  uVar1 = *(ushort *)(param_4 + 2);
  puVar4 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
  uVar6 = *puVar4;
  uVar5 = (*(code *)PTR_strerror_004688c0)(uVar6);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x1fb8,param_3,uVar3,uVar1 >> 8 | uVar1 << 8,uVar6,uVar5);
  return iVar2;
}



// ==== RecvFromAddress @ 00432eb4 size=236

/* tnp::RecvFromAddress(int, char*, int, sockaddr_in*) */

void tnp::RecvFromAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4)

{
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_20 [2];
  
  (*(code *)PTR_memset_00468810)(&local_a0,0,0x80);
  local_20[0] = 0x80;
  (*(code *)PTR_memset_00468810)(param_2,0,param_3);
  (*(code *)PTR_recvfrom_00468888)(param_1,param_2,param_3,0,&local_a0,local_20);
  *(undefined4 *)param_4 = local_a0;
  *(undefined4 *)(param_4 + 4) = local_9c;
  *(undefined4 *)(param_4 + 8) = local_98;
  *(undefined4 *)(param_4 + 0xc) = local_94;
  return;
}



// ==== over_time_receive @ 00432fa0 size=464

/* tnp::over_time_receive(int, char*, int, sockaddr_in*, unsigned int) */

undefined4
tnp::over_time_receive(int param_1,char *param_2,int param_3,sockaddr_in *param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint local_a8 [32];
  uint local_28;
  int local_24;
  
  puVar4 = local_a8;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  } while (&local_28 != puVar4);
  puVar4 = local_a8 + ((uint)param_1 >> 5);
  *puVar4 = 1 << (param_1 & 0x1fU) | *puVar4;
  local_24 = (param_5 % 1000) * 1000;
  local_28 = (param_5 - param_5 % 1000) / 1000;
  iVar1 = (*(code *)PTR_select_00468878)(param_1 + 1,local_a8,0,0,&local_28);
  if (iVar1 != -1) {
    if ((iVar1 != 0) && (((int)*puVar4 >> (param_1 & 0x1fU) & 1U) != 0)) {
      (*(code *)PTR_memset_00468810)(param_2,0,param_3);
      uVar2 = (*(code *)PTR_RecvFromAddress_004686b4)(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    return 0;
  }
  puVar3 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x2070,*puVar3);
  return 0xffffffff;
}



// ==== UpdateNetwork @ 00433188 size=24

/* tnp::UpdateNetwork() */

void tnp::UpdateNetwork(void)

{
  *PTR_isIPv6Only_004686b0 = 0;
  return;
}



// ==== LanIfNum @ 004331a0 size=152

/* tnp::LanIfNum() */

uint tnp::LanIfNum(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_218 [512];
  uint local_18;
  undefined1 *local_14;
  
  iVar1 = (*(code *)PTR_CreateSocket_004683c8)(0);
  if (-1 < iVar1) {
    local_18 = 0x200;
    local_14 = auStack_218;
    iVar2 = (*(code *)PTR_ioctl_004688dc)(iVar1,0x8912,&local_18);
    if (iVar2 == 0) {
      uVar3 = local_18 >> 5;
      goto LAB_00433214;
    }
  }
  uVar3 = 0;
LAB_00433214:
  (*(code *)PTR_CloseSocket_004683b4)(iVar1);
  return uVar3;
}



// ==== GetIP @ 00433238 size=276

/* tnp::GetIP(int, char*) */

undefined4 tnp::GetIP(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_220 [16];
  ushort auStack_210 [2];
  undefined4 auStack_20c [123];
  undefined4 local_20;
  undefined1 *local_1c;
  
  iVar1 = (*(code *)PTR_CreateSocket_004683c8)(0);
  if (-1 < iVar1) {
    local_20 = 0x200;
    local_1c = auStack_220;
    iVar2 = (*(code *)PTR_ioctl_004688dc)(iVar1,0x8912,&local_20);
    if (iVar2 == 0) {
      puVar4 = auStack_220 + param_1 * 0x20;
      (*(code *)PTR_ioctl_004688dc)(iVar1,0x8913,puVar4);
      if ((auStack_210[param_1 * 0x10] & 1) != 0) {
        (*(code *)PTR_ioctl_004688dc)(iVar1,0x8915,puVar4);
        uVar3 = (*(code *)PTR_inet_ntoa_00468804)(auStack_20c[param_1 * 8]);
        (*(code *)PTR_strcpy_004688e0)(param_2,uVar3);
      }
    }
  }
  (*(code *)PTR_CloseSocket_004683b4)(iVar1);
  return 0;
}



// ==== BroadcastMessage @ 0043334c size=368

/* tnp::BroadcastMessage(char*, int, int, unsigned short) */

void tnp::BroadcastMessage(char *param_1,int param_2,int param_3,ushort param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_60 [32];
  undefined2 local_40;
  undefined2 local_3e;
  uint local_3c [3];
  uint local_30;
  
  iVar2 = (*(code *)PTR_LanIfNum_004686b8)();
  puVar1 = PTR_DAT_00468298;
  if (0 < iVar2) {
    local_30 = (uint)(param_4 >> 8) | (param_4 & 0xff) << 8;
    puVar5 = PTR_DAT_00468298 + -0x1f68;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      (*(code *)PTR_GetIP_004686bc)(iVar3,auStack_60);
      iVar3 = (*(code *)PTR_strcmp_004687fc)(puVar1 + -0x1f74,auStack_60);
      if (iVar3 != 0) {
        iVar3 = (*(code *)PTR_strncmp_00468840)(puVar5,auStack_60,7);
        if (iVar3 != 0) {
          local_40 = 2;
          local_3e = (undefined2)local_30;
          (*(code *)PTR_inet_aton_00468820)(auStack_60,local_3c);
          local_3c[0] = (local_3c[0] & 0xffffff) - 0x1000000;
          (*(code *)PTR_SendMessage_0046856c)(param_1,param_2,param_3,&local_40);
        }
      }
      iVar3 = iVar4;
    } while (iVar4 != iVar2);
  }
  return;
}



// ==== htonAddr @ 004334c0 size=148

/* tnp::htonAddr(sockaddr_in const*, sockaddr_in*) */

void tnp::htonAddr(sockaddr_in *param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_memset_00468810)(param_2,0,0x10);
  puVar2 = PTR___bswapsi2_004683d8;
  uVar1 = *(ushort *)(param_1 + 2);
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(ushort *)param_2 = *(ushort *)param_1 >> 8 | *(ushort *)param_1 << 8;
  *(ushort *)(param_2 + 2) = uVar1 >> 8 | uVar1 << 8;
  uVar3 = (*(code *)puVar2)(uVar3);
  *(undefined4 *)(param_2 + 4) = uVar3;
  return;
}



// ==== ntohAddr @ 00433554 size=148

/* tnp::ntohAddr(sockaddr_in const*, sockaddr_in*) */

void tnp::ntohAddr(sockaddr_in *param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_memset_00468810)(param_2,0,0x10);
  puVar2 = PTR___bswapsi2_004683d8;
  uVar1 = *(ushort *)(param_1 + 2);
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(ushort *)param_2 = *(ushort *)param_1 >> 8 | *(ushort *)param_1 << 8;
  *(ushort *)(param_2 + 2) = uVar1 >> 8 | uVar1 << 8;
  uVar3 = (*(code *)puVar2)(uVar3);
  *(undefined4 *)(param_2 + 4) = uVar3;
  return;
}



// ==== try_adjust_buf @ 0043e074 size=264

undefined4 try_adjust_buf(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 0) {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_004684d0 + -0x7df0) + 8);
    if (param_3 < 1) {
      return 0;
    }
  }
  else {
    param_3 = param_3 + *(int *)(*(int *)(PTR_DAT_004684d0 + -0x7df0) + 8);
    if (param_3 <= *param_2) {
      return 0;
    }
    if (param_3 < 1) {
      return 0;
    }
  }
  iVar1 = (*(code *)PTR_realloc_00468830)(*param_1,param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
    (*(code *)PTR_error_004687e4)
              (0,*puVar2,PTR_DAT_00468298 + -0x57c,PTR_DAT_00468298 + -0x4b0,param_3);
    return 0xffffffff;
  }
  *param_1 = iVar1;
  *param_2 = param_3;
  return 0;
}



// ==== dump_string @ 004409bc size=536

void dump_string(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_2828;
  int local_2824 [2559];
  undefined1 *local_28;
  undefined1 auStack_24 [8];
  
  if (param_4 == 0) {
    return;
  }
  if (DAT_0046c298 == (undefined4 *)0x0) {
    iVar1 = FUN_004408a0(&DAT_00480e20);
    if (iVar1 == 0) {
      DAT_0046c298 = (undefined4 *)&DAT_00480e20;
    }
    else if (DAT_0046c298 == (undefined4 *)0x0) goto LAB_00440b0c;
  }
  memset(&local_2828,0,0x2800);
  local_2828 = getpid();
  snprintf(local_2824,0x27fc,"%s:%d|%s() ",param_1,param_3,param_2);
  local_28 = &stack0x00000010;
  iVar1 = strlen(local_2824);
  vsnprintf((int)local_2824 + iVar1,0x27fc - iVar1,param_4,&stack0x00000010);
  uVar2 = strlen(local_2824);
  if ((uVar2 < 0x27fb) && (*(char *)((int)local_2824 + (uVar2 - 1)) != '\n')) {
    *(undefined1 *)((int)local_2824 + uVar2) = 10;
    uVar2 = uVar2 + 1;
  }
  iVar1 = sendto(*DAT_0046c298,&local_2828,uVar2 + 4,0x40,DAT_0046c298 + 2,DAT_0046c298[1]);
  if (0 < iVar1) {
    return;
  }
LAB_00440b0c:
  time(auStack_24);
  puVar3 = (undefined4 *)localtime(auStack_24);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  gettimeofday(&local_2828,0);
  if (local_2824[0] < 0) {
    local_2824[0] = local_2824[0] + 0x3ff;
  }
  printf("%02d-%02d %02d:%02d:%02d.%03d %s:%d|%s() ",puVar3[4] + 1,puVar3[3],puVar3[2],puVar3[1],
         *puVar3,local_2824[0] >> 10,param_1,param_3,param_2);
  local_28 = &stack0x00000010;
  vfprintf(stdout,param_4,local_28);
  putchar(10);
  return;
}



// ==== ms_sleep @ 00440f6c size=104

void ms_sleep(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== AesSetKey @ 004443a4 size=188

undefined4
AesSetKey(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (((param_3 == 0x10) || (param_3 == 0x18)) || (param_3 == 0x20)) {
    uVar1 = (*(code *)(PTR_LAB_00468460 + 0x34b0))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = 0xffffff53;
  }
  return uVar1;
}



// ==== AesSetIV @ 004444e0 size=196

undefined4 AesSetIV(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    if (param_2 == 0) {
      (*(code *)PTR_memset_00468810)(param_1 + 0xf4,0,0x10);
    }
    else {
      (*(code *)PTR_memcpy_00468898)(param_1 + 0xf4,param_2,0x10);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ==== AesCbcDecrypt @ 00444854 size=320

undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 4;
  while (local_10 != 0) {
    (*(code *)PTR_memcpy_00468898)(param_1 + 0x104,local_res8,0x10);
    (*(code *)(PTR_LAB_00468460 + 0x27e8))(param_1,param_1 + 0x104,local_res4);
    (*(code *)(PTR_LAB_00468460 + 0x1a14))(local_res4,param_1 + 0xf4,0x10);
    (*(code *)PTR_memcpy_00468898)(param_1 + 0xf4,param_1 + 0x104,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== CYASSL_MSG @ 00444e20 size=108

void CYASSL_MSG(undefined4 param_1)

{
  if (*(int *)(PTR_DAT_004684d0 + -0x3d4c) != 0) {
    (*(code *)(PTR_LAB_00468460 + 0x4d6c))(1,param_1);
  }
  return;
}



// ==== __bswapsi2 @ 00445070 size=40

uint __bswapsi2(uint param_1)

{
  return param_1 << 0x18 | param_1 >> 0x18 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8;
}



// ==== __udivdi3 @ 004450b0 size=1388

undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar3 = 8;
        if (param_3 < 0x100) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x10;
        if (0xffffff < param_3) {
          iVar3 = 0x18;
        }
      }
      uVar9 = (uint)(byte)PTR___clz_tab_00468784[param_3 >> iVar3] + iVar3;
      uVar7 = 0x20 - uVar9;
      if (uVar7 == 0) {
        param_2 = param_2 - param_3;
        uVar7 = 1;
        uVar6 = param_1;
      }
      else {
        param_3 = param_3 << (uVar7 & 0x1f);
        uVar4 = param_2 >> (uVar9 & 0x1f);
        uVar6 = param_1 << (uVar7 & 0x1f);
        uVar2 = param_3 >> 0x10;
        uVar10 = uVar4 / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar7 = param_2 << (uVar7 & 0x1f) | param_1 >> (uVar9 & 0x1f);
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar5 = uVar4 % uVar2 << 0x10 | uVar7 >> 0x10;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar4 = uVar10;
        if (uVar5 < uVar9) {
          uVar5 = uVar5 + param_3;
          uVar4 = uVar10 - 1;
          if ((param_3 <= uVar5) && (uVar5 < uVar9)) {
            uVar4 = uVar10 - 2;
            uVar5 = uVar5 + param_3;
          }
        }
        uVar10 = (uVar5 - uVar9) / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
          trap(0x1c00);
        }
        param_2 = (uVar5 - uVar9) % uVar2 << 0x10 | uVar7 & 0xffff;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar7 = uVar10;
        if (param_2 < uVar9) {
          param_2 = param_2 + param_3;
          uVar7 = uVar10 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar9)) {
            uVar7 = uVar10 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
        uVar7 = uVar7 | uVar4 << 0x10;
      }
      uVar9 = param_3 >> 0x10;
      uVar2 = param_2 / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      uVar5 = param_2 % uVar9 << 0x10 | uVar6 >> 0x10;
      uVar4 = uVar2 * (param_3 & 0xffff);
      uVar10 = uVar2;
      if (uVar5 < uVar4) {
        uVar5 = uVar5 + param_3;
        uVar10 = uVar2 - 1;
        if ((param_3 <= uVar5) && (uVar5 < uVar4)) {
          uVar10 = uVar2 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar2 = (uVar5 - uVar4) / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar4 = (uVar5 - uVar4) % uVar9 << 0x10 | uVar6 & 0xffff;
      uVar6 = uVar2 * (param_3 & 0xffff);
      uVar9 = uVar2;
      if (uVar4 < uVar6) {
        uVar4 = uVar4 + param_3;
        uVar9 = uVar2 - 1;
        if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
          uVar9 = uVar2 - 2;
        }
      }
      uVar9 = uVar9 | uVar10 << 0x10;
      goto LAB_00445614;
    }
    if (param_3 < 0x10000) {
      iVar3 = 8;
      if (param_3 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_3) {
        iVar3 = 0x18;
      }
    }
    uVar9 = param_3 >> iVar3;
    uVar7 = 0x20 - ((uint)(byte)PTR___clz_tab_00468784[uVar9] + iVar3);
    if (uVar7 != 0) {
      param_3 = param_3 << (uVar7 & 0x1f);
      param_2 = param_2 << (uVar7 & 0x1f) |
                param_1 >> ((uint)(byte)PTR___clz_tab_00468784[uVar9] + iVar3 & 0x1f);
      param_1 = param_1 << (uVar7 & 0x1f);
    }
    uVar7 = param_3 >> 0x10;
    uVar9 = param_2 / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    uVar4 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
    uVar6 = uVar9 * (param_3 & 0xffff);
    uVar2 = uVar9;
    if (uVar4 < uVar6) {
      uVar4 = uVar4 + param_3;
      uVar2 = uVar9 - 1;
      if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
        uVar2 = uVar9 - 2;
        uVar4 = uVar4 + param_3;
      }
    }
    uVar10 = (uVar4 - uVar6) / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
      trap(0x1c00);
    }
    uVar6 = (uVar4 - uVar6) % uVar7 << 0x10 | param_1 & 0xffff;
    uVar7 = uVar10 * (param_3 & 0xffff);
    uVar9 = uVar10;
    if (uVar6 < uVar7) {
      uVar6 = uVar6 + param_3;
      uVar9 = uVar10 - 1;
      if ((param_3 <= uVar6) && (uVar6 < uVar7)) {
        uVar9 = uVar10 - 2;
      }
    }
    uVar9 = uVar9 | uVar2 << 0x10;
  }
  else {
    uVar7 = 0;
    if (param_2 < param_4) {
      uVar9 = 0;
      goto LAB_00445614;
    }
    if (param_4 < 0x10000) {
      iVar3 = 8;
      if (param_4 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_4) {
        iVar3 = 0x18;
      }
    }
    uVar7 = (uint)(byte)PTR___clz_tab_00468784[param_4 >> iVar3] + iVar3;
    uVar6 = 0x20 - uVar7;
    uVar9 = param_2 >> (uVar7 & 0x1f);
    if (uVar6 == 0) {
      if (param_4 < param_2) {
        uVar7 = 0;
        uVar9 = 1;
        goto LAB_00445614;
      }
      uVar9 = param_1 < param_3 ^ 1;
    }
    else {
      uVar2 = param_4 << (uVar6 & 0x1f) | param_3 >> (uVar7 & 0x1f);
      uVar4 = uVar2 >> 0x10;
      uVar10 = uVar9 / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar7 = param_2 << (uVar6 & 0x1f) | param_1 >> (uVar7 & 0x1f);
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar8 = uVar9 % uVar4 << 0x10 | uVar7 >> 0x10;
      uVar9 = uVar10 * (uVar2 & 0xffff);
      uVar5 = uVar10;
      if (uVar8 < uVar9) {
        uVar8 = uVar8 + uVar2;
        uVar5 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar9)) {
          uVar5 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar10 = (uVar8 - uVar9) / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar8 = (uVar8 - uVar9) % uVar4 << 0x10 | uVar7 & 0xffff;
      uVar4 = uVar10 * (uVar2 & 0xffff);
      uVar9 = uVar10;
      if (uVar8 < uVar4) {
        uVar8 = uVar8 + uVar2;
        uVar9 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar4)) {
          uVar9 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar9 = uVar9 | uVar5 << 0x10;
      lVar1 = (ulonglong)uVar9 * (ulonglong)(param_3 << (uVar6 & 0x1f));
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar2 <= uVar8 - uVar4) &&
         ((uVar7 = 0, uVar2 != uVar8 - uVar4 || ((uint)lVar1 <= param_1 << (uVar6 & 0x1f)))))
      goto LAB_00445614;
      uVar9 = uVar9 - 1;
    }
  }
  uVar7 = 0;
LAB_00445614:
  return CONCAT44(uVar7,uVar9);
}



// ==== __PLT_HEAD @ 00456e40 size=32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __PLT_HEAD(void)

{
  (*___DT_MIPS_PLTGOT)();
  (*(code *)PTR_putchar_0046801c)();
  return;
}



// ==== putchar @ 00456e60 size=16

void putchar(void)

{
  (*(code *)PTR_putchar_0046801c)();
  return;
}



// ==== strcpy @ 00456e70 size=4

void strcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcpy_00468020)();
  return;
}



// ==== popen @ 00456e80 size=16

void popen(void)

{
  (*(code *)PTR_popen_00468024)();
  return;
}



// ==== printf @ 00456e90 size=16

void printf(void)

{
  (*(code *)PTR_printf_00468028)();
  return;
}



// ==== sigemptyset @ 00456eb0 size=16

void sigemptyset(void)

{
  (*(code *)PTR_sigemptyset_00468030)();
  return;
}



// ==== pclose @ 00456ec0 size=16

void pclose(void)

{
  (*(code *)PTR_pclose_00468034)();
  return;
}



// ==== snprintf @ 00456ee0 size=16

void snprintf(void)

{
  (*(code *)PTR_snprintf_0046803c)();
  return;
}



// ==== bsearch @ 00456ef0 size=4

void bsearch(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_bsearch_00468040)();
  return;
}



// ==== usleep @ 00456f00 size=16

void usleep(void)

{
  (*(code *)PTR_usleep_00468044)();
  return;
}



// ==== getpid @ 00456f10 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getpid_00468048)();
  return;
}



// ==== prctl @ 00456f20 size=16

void prctl(void)

{
  (*(code *)PTR_prctl_0046804c)();
  return;
}



// ==== memcpy @ 00456f30 size=16

void memcpy(void)

{
  (*(code *)PTR_memcpy_00468050)();
  return;
}



// ==== perror @ 00456f40 size=4

void perror(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_perror_00468054)();
  return;
}



// ==== puts @ 00456f60 size=16

void puts(void)

{
  (*(code *)PTR_puts_0046805c)();
  return;
}



// ==== system @ 00456f70 size=4

void system(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_00468060)();
  return;
}



// ==== malloc @ 00456f90 size=16

void malloc(void)

{
  (*(code *)PTR_malloc_00468068)();
  return;
}



// ==== sleep @ 00456fa0 size=16

void sleep(void)

{
  (*(code *)PTR_sleep_0046806c)();
  return;
}



// ==== vsnprintf @ 00456fb0 size=4

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_vsnprintf_00468070)();
  return;
}



// ==== socket @ 00456fd0 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_socket_00468078)();
  return;
}



// ==== select @ 00456fe0 size=16

void select(void)

{
  (*(code *)PTR_select_0046807c)();
  return;
}



// ==== sigaddset @ 00456ff0 size=4

void sigaddset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00456ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sigaddset_00468080)();
  return;
}



// ==== mmap @ 00457000 size=16

void mmap(void)

{
  (*(code *)PTR_mmap_00468084)();
  return;
}



// ==== calloc @ 00457020 size=20

void calloc(void)

{
  (*(code *)PTR_calloc_0046808c)();
  return;
}



// ==== ctime @ 00457040 size=16

void ctime(void)

{
  (*(code *)PTR_ctime_00468094)();
  return;
}



// ==== fseek @ 00457050 size=16

void fseek(void)

{
  (*(code *)PTR_fseek_00468098)();
  return;
}



// ==== mktime @ 00457060 size=4

void mktime(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045706c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mktime_0046809c)();
  return;
}



// ==== strstr @ 00457080 size=20

void strstr(void)

{
  (*(code *)PTR_strstr_004680a4)();
  return;
}



// ==== signal @ 004570a0 size=16

void signal(void)

{
  (*(code *)PTR_signal_004680ac)();
  return;
}



// ==== strncmp @ 004570b0 size=4

void strncmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x004570bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004680b0)();
  return;
}



// ==== strncpy @ 004570c0 size=16

void strncpy(void)

{
  (*(code *)PTR_strncpy_004680b4)();
  return;
}



// ==== sendto @ 004570d0 size=16

void sendto(void)

{
  (*(code *)PTR_sendto_004680b8)();
  return;
}



// ==== realloc @ 004570f0 size=16

void realloc(void)

{
  (*(code *)PTR_realloc_004680c0)();
  return;
}



// ==== memcmp @ 00457100 size=16

void memcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045710c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004680c4)();
  return;
}



// ==== sscanf @ 00457110 size=16

void sscanf(void)

{
  (*(code *)PTR_sscanf_004680c8)();
  return;
}



// ==== fread @ 00457120 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045712c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004680cc)();
  return;
}



// ==== gettimeofday @ 00457130 size=16

void gettimeofday(void)

{
  (*(code *)PTR_gettimeofday_004680d0)();
  return;
}



// ==== fopen @ 00457140 size=4

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045714c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004680d4)();
  return;
}



// ==== localtime @ 00457150 size=16

void localtime(void)

{
  (*(code *)PTR_localtime_004680d8)();
  return;
}



// ==== memset @ 00457160 size=16

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045716c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memset_004680dc)();
  return;
}



// ==== ftell @ 00457170 size=4

void ftell(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045717c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ftell_004680e0)();
  return;
}



// ==== fclose @ 00457190 size=16

void fclose(void)

{
  (*(code *)PTR_fclose_004680e8)();
  return;
}



// ==== time @ 004571a0 size=16

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x004571ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_time_004680ec)();
  return;
}



// ==== strcmp @ 004571b0 size=4

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x004571bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcmp_004680f0)();
  return;
}



// ==== sprintf @ 004571d0 size=16

void sprintf(void)

{
  (*(code *)PTR_sprintf_004680f8)();
  return;
}



// ==== access @ 004571f0 size=16

void access(void)

{
  (*(code *)PTR_access_00468100)();
  return;
}



// ==== exit @ 00457210 size=16

void exit(void)

{
  (*(code *)PTR_exit_00468108)();
  return;
}



// ==== atoi @ 00457220 size=4

void atoi(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0046810c)();
  return;
}



// ==== fileno @ 00457230 size=16

void fileno(void)

{
  (*(code *)PTR_fileno_00468110)();
  return;
}



// ==== gmtime @ 00457240 size=4

void gmtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045724c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00468114)();
  return;
}



// ==== strlen @ 00457250 size=16

void strlen(void)

{
  (*(code *)PTR_strlen_00468118)();
  return;
}



// ==== open @ 00457260 size=4

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045726c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0046811c)();
  return;
}



// ==== close @ 00457280 size=4

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045728c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00468124)();
  return;
}



// ==== vfprintf @ 00457290 size=16

void vfprintf(void)

{
  (*(code *)PTR_vfprintf_00468128)();
  return;
}



// ==== free @ 004572a0 size=20

void free(void)

{
                    /* WARNING: Could not recover jumptable at 0x004572ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0046812c)();
  return;
}



