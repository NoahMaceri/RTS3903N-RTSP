/* oss — "oss" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== oss_report_upload_status @ 004090b4 size=400

undefined4 oss_report_upload_status(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar4 = FUN_0052f7e8();
  sprintf(&local_30,&DAT_005316d8,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  iVar1 = FUN_0040fc04();
  if (iVar1 != 0) {
    uVar2 = FUN_0040fb80((double)param_2);
    FUN_0040fb00(iVar1,&DAT_005316e0,uVar2);
    uVar2 = FUN_0040fb80((double)param_1);
    FUN_0040fb00(iVar1,&DAT_005316e8,uVar2);
    uVar2 = FUN_0040fbb8(DAT_00561918 + 0x255);
    FUN_0040fb00(iVar1,&DAT_005316f0,uVar2);
    uVar2 = FUN_0040fbb8(DAT_00561918 + 400);
    FUN_0040fb00(iVar1,"device_version",uVar2);
    uVar2 = FUN_0040fbb8(&local_30);
    FUN_0040fb00(iVar1,&DAT_00531704,uVar2);
    __ptr = (void *)FUN_0040fab0(iVar1);
    if (__ptr != (void *)0x0) {
      uVar2 = strlen(__ptr);
      iVar3 = FUN_00408fcc(DAT_0056197c,0x4023,__ptr,uVar2);
      if (iVar3 < 0) {
        FUN_0052f238("oss.c","oss_report_upload_status",0x250,
                     "oss_report_upload_status send_msg msg fail!\n");
      }
      free(__ptr);
    }
    FUN_0040f9e8(iVar1);
  }
  return 0;
}



// ==== oss_set_babycry_clear @ 00409244 size=128

undefined4 oss_set_babycry_clear(undefined4 param_1)

{
  int iVar1;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00408fcc(DAT_0056197c,0xeb,local_res0,4);
  if (-1 < iVar1) {
    FUN_0052f238("oss.c","oss_set_babycry_clear",0x260,
                 "oss_set_babycry_clear send_msg ok, chn = %d!",local_res0[0]);
    return 0;
  }
  FUN_0052f238("oss.c","oss_set_babycry_clear",0x25c,
               "oss_set_babycry_clear send_msg fail, chn = %d!",local_res0[0]);
  return 0;
}



// ==== oss_set_abnormal_sound_clear @ 004092c4 size=128

undefined4 oss_set_abnormal_sound_clear(undefined4 param_1)

{
  int iVar1;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00408fcc(DAT_0056197c,0xef,local_res0,4);
  if (-1 < iVar1) {
    FUN_0052f238("oss.c","oss_set_abnormal_sound_clear",0x26e,
                 "oss_set_abnormal_sound_clear send_msg ok, chn = %d!",local_res0[0]);
    return 0;
  }
  FUN_0052f238("oss.c","oss_set_abnormal_sound_clear",0x26a,
               "oss_set_abnormal_sound_clear send_msg fail, chn = %d!",local_res0[0]);
  return 0;
}



// ==== oss_set_cloud_pic_index_clear @ 00409344 size=116

undefined4 oss_set_cloud_pic_index_clear(void)

{
  int iVar1;
  
  iVar1 = FUN_00408fcc(DAT_0056197c,0xf1,0,0);
  if (-1 < iVar1) {
    FUN_0052f238("oss.c","oss_set_cloud_pic_index_clear",0x27c,
                 "oss_set_cloud_pic_index_clear send_msg ok!");
    return 0;
  }
  FUN_0052f238("oss.c","oss_set_cloud_pic_index_clear",0x278,
               "oss_set_cloud_pic_index_clear send_msg fail!");
  return 0;
}



// ==== oss_set_cloud_pic_index_interval @ 004093b8 size=120

undefined4 oss_set_cloud_pic_index_interval(void)

{
  int iVar1;
  
  iVar1 = FUN_00408fcc(DAT_0056197c,0xf2,&DAT_0056bbac,4);
  if (-1 < iVar1) {
    FUN_0052f238("oss.c","oss_set_cloud_pic_index_interval",0x28a,
                 "oss_set_cloud_pic_index_interval send_msg ok!");
    return 0;
  }
  FUN_0052f238("oss.c","oss_set_cloud_pic_index_interval",0x286,
               "oss_set_cloud_pic_index_interval send_msg fail!");
  return 0;
}



// ==== oss_set_lapse_video_off @ 00409430 size=240

undefined4 oss_set_lapse_video_off(void)

{
  int iVar1;
  undefined1 auStack_50 [64];
  undefined4 local_10 [3];
  
  local_10[0] = 1;
  memset(auStack_50,0,0x40);
  iVar1 = FUN_00408fcc(DAT_0056197c,0x9a,local_10,4);
  if (iVar1 < 0) {
    FUN_0052f238("oss.c","oss_set_lapse_video_off",0x298,
                 "oss_set_lapse_video_off send_msg msg fail!");
  }
  else {
    FUN_0052f238("oss.c","oss_set_lapse_video_off",0x29c,"oss_set_lapse_video_off send_msg ok!");
  }
  FUN_0052f100(auStack_50,0x40,0,0x40);
  DAT_00561920 = DAT_00561920 + 1;
  snprintf(auStack_50,0x40,"oss_lapse_%d",DAT_00561920 % 5);
  FUN_0052fc3c(*(undefined4 *)(DAT_00561918 + 0x5ac),auStack_50);
  return 0;
}



// ==== oss_set_lapse_video_modify @ 00409bf0 size=120

undefined4 oss_set_lapse_video_modify(undefined4 param_1)

{
  int iVar1;
  undefined4 local_res0 [4];
  
  local_res0[0] = param_1;
  iVar1 = FUN_00408fcc(DAT_0056197c,0x9b,local_res0,4);
  if (-1 < iVar1) {
    FUN_0052f238("oss.c","oss_set_lapse_video_modify",0x2ae,
                 "oss_set_lapse_video_modify send_msg ok!");
    return 0;
  }
  FUN_0052f238("oss.c","oss_set_lapse_video_modify",0x2aa,
               "oss_set_lapse_video_modify send_msg msg fail!");
  return 0;
}



// ==== oss_set_lapse_framerate @ 00409c68 size=152

undefined4 oss_set_lapse_framerate(void)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_14 = DAT_0056bba4 - DAT_0056bba0;
  local_18 = DAT_0056bba4;
  local_10 = DAT_0056bba8;
  iVar1 = FUN_00408fcc(DAT_0056197c,0x1036,&local_18,0xc);
  if (-1 < iVar1) {
    FUN_0052f238("oss.c","oss_set_lapse_framerate",0x2c2,"oss_set_lapse_framerate send_msg ok!");
    return 0;
  }
  FUN_0052f238("oss.c","oss_set_lapse_framerate",0x2be,"oss_set_lapse_framerate send_msg msg fail!")
  ;
  return 0;
}



// ==== oss_set_lapse_force_idr @ 00409d00 size=116

undefined4 oss_set_lapse_force_idr(void)

{
  int iVar1;
  
  iVar1 = FUN_00408fcc(DAT_0056197c,0x1037,0,0);
  if (-1 < iVar1) {
    FUN_0052f238("oss.c","oss_set_lapse_force_idr",0x2d0,"oss_set_lapse_force_idr send_msg ok!");
    return 0;
  }
  FUN_0052f238("oss.c","oss_set_lapse_force_idr",0x2cc,"oss_set_lapse_force_idr send_msg msg fail!")
  ;
  return 0;
}



// ==== oss_buffer_new @ 00409f20 size=244

undefined4 oss_buffer_new(int *param_1,size_t param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  pvVar1 = calloc(0x30,1);
  *param_1 = (int)pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0x2db;
  }
  else {
    pvVar2 = calloc(0x14,1);
    iVar5 = *param_1;
    *(void **)((int)pvVar1 + 4) = pvVar2;
    puVar4 = *(undefined4 **)(iVar5 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = 0x2e2;
    }
    else {
      pvVar1 = calloc(param_2,1);
      *puVar4 = pvVar1;
      piVar6 = *(int **)(*param_1 + 4);
      if (*piVar6 != 0) {
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        piVar6[4] = param_2;
        return 0;
      }
      uVar3 = 0x2e9;
    }
  }
  FUN_0052f238("oss.c","oss_buffer_new",uVar3,"oss_buffer_new calloc failed!");
  return 0xffffffff;
}



// ==== oss_media_write_frame @ 0040a3a8 size=740

undefined4 oss_media_write_frame(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_1030 [4096];
  int local_30;
  int local_2c;
  uint local_28 [3];
  
  memset(auStack_1030,0,0x1000);
  local_28[0] = 0;
  local_30 = 0;
  local_2c = 0;
  iVar3 = FUN_0040a0e0(param_1,auStack_1030,local_28);
  if (iVar3 == 0) {
    pcVar4 = (code *)param_1[2];
    if (pcVar4 == (code *)0x0) {
      uVar6 = 0;
    }
    else {
      if (DAT_0056195c == 0) {
        iVar3 = 0;
        lVar1 = 0;
      }
      else {
        iVar3 = *(int *)(param_1[1] + 8) - *(int *)(param_1[1] + 4);
        gettimeofday(&local_30,0);
        pcVar4 = (code *)param_1[2];
        lVar1 = (longlong)local_30 * 1000 + (longlong)(local_2c / 1000);
      }
      iVar5 = (*pcVar4)(param_1);
      if (iVar5 != 0) {
        FUN_0052f238("oss.c","oss_media_write_frame",0x4c3,
                     "oss write packet failed, code = %d, message = %s",
                     *(undefined4 *)(*param_1 + 0x38),*param_1 + 0x3c);
        oss_report_upload_status(3,0);
        return 0xffffffff;
      }
      if (DAT_0056195c != 0) {
        gettimeofday(&local_30,0);
        lVar2 = (longlong)local_30 * 1000 + (longlong)(local_2c / 1000);
        uVar9 = (uint)lVar2;
        uVar7 = uVar9 - (int)lVar1;
        FUN_0052f238("oss.c","oss_media_write_frame",0x4d2,
                     "cost time = %llu(ms), send_size = %d(Bytes)",uVar7,
                     ((int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar1 >> 0x20)) -
                     (uint)(uVar9 < uVar7),iVar3);
        DAT_0056195c = 0;
      }
      piVar8 = (int *)param_1[1];
      iVar3 = piVar8[3];
      DAT_00561968 = (DAT_00561968 - iVar3) + piVar8[2];
      piVar8[1] = iVar3;
      piVar8[2] = iVar3;
      if ((uint)(piVar8[4] - iVar3) < local_28[0]) {
        FUN_0052f238("oss.c","oss_media_write_frame",0x4da,"oss left_size(%u) too big",local_28[0]);
        uVar6 = 0xffffffff;
      }
      else {
        memcpy(*piVar8 + iVar3,auStack_1030);
        *(uint *)(param_1[1] + 8) = local_28[0];
        uVar6 = 0;
      }
    }
  }
  else {
    FUN_0052f238("oss.c","oss_media_write_frame",0x4b2,"oss file cipher failed!");
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// ==== oss_media_packet_frame @ 0040a68c size=1448

undefined4 oss_media_packet_frame(int param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined4 *puVar20;
  undefined4 local_f0;
  byte local_ec [4];
  undefined4 local_e8;
  byte local_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined1 *local_30;
  
  memset(&local_f0,0,0xbc);
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  if (uVar11 <= uVar10) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 4);
  bVar1 = true;
  if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) < 0xbc) {
LAB_0040ab8c:
    FUN_0052f238("oss.c","oss_media_packet_frame",0x391,"construct packet failed!");
    return 0xffffffff;
  }
  local_30 = auStack_34;
  if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 8)) < 0xbc) goto LAB_0040a984;
LAB_0040a724:
  local_f0._1_1_ = *(byte *)((int)param_2 + 1);
  iVar3 = param_2[6] + 1;
  param_2[6] = iVar3;
  uVar13 = *param_2;
  local_f0._2_1_ = (undefined1)uVar13;
  if (!bVar1) goto LAB_0040a9bc;
LAB_0040a748:
  local_f0._0_1_ = 0x47;
  local_f0._1_1_ = local_f0._1_1_ | 0x40;
  bVar19 = (byte)iVar3 & 0xf;
  local_f0._2_1_ = (undefined1)uVar13;
  local_f0._3_1_ = bVar19 | 0x10;
  if ((param_2[7] & 1) == 0) {
    uVar14 = param_2[4];
    pbVar5 = local_ec;
    iVar3 = param_2[5];
LAB_0040a778:
    uVar4 = param_2[2];
    pbVar5[3] = (byte)param_2[1];
    *pbVar5 = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 1;
    iVar16 = param_2[3];
    if (uVar4 == uVar14) {
LAB_0040ab04:
      if (iVar16 == iVar3) {
        uVar10 = (uVar11 - uVar10) + 8;
        uVar13 = 2;
        bVar18 = 5;
        bVar19 = 0x80;
        goto joined_r0x0040ab28;
      }
    }
  }
  else {
    local_f0._3_1_ = bVar19 | 0x30;
    iVar3 = param_2[5];
    local_ec[0] = 7;
    local_ec[1] = 0x50;
    uVar14 = param_2[4];
    if ((iVar3 == 0) && (uVar14 < 63000)) {
      pbVar5 = &local_e4;
      local_ec[2] = 0;
      local_ec[3] = 0;
      local_e8._0_1_ = 0;
      local_e8._1_1_ = 0;
      local_e8._2_1_ = 0x7e;
      local_e8._3_1_ = 0;
      goto LAB_0040a778;
    }
    local_e8._3_1_ = 0;
    uVar8 = uVar14 - 63000;
    pbVar5 = &local_e4;
    local_ec[2] = ((uVar8 < uVar14) + (char)iVar3 + -1) * -0x80 | (byte)(uVar8 >> 0x19);
    local_e8._0_1_ = (undefined1)(uVar8 >> 9);
    local_e8._2_1_ = (char)uVar8 * -0x80 | 0x7e;
    local_e8._1_1_ = (undefined1)(uVar8 >> 1);
    uVar4 = param_2[2];
    local_ec[3] = (byte)(uVar8 >> 0x11);
    uStack_e1 = (undefined1)param_2[1];
    local_e4 = 0;
    uStack_e3 = 0;
    uStack_e2 = 1;
    iVar16 = param_2[3];
    if (uVar4 == uVar14) goto LAB_0040ab04;
  }
  uVar10 = (uVar11 - uVar10) + 0xd;
  uVar13 = 3;
  bVar18 = 10;
  bVar19 = 0xc0;
joined_r0x0040ab28:
  if (uVar10 < 0x10000) {
    bVar17 = (byte)(uVar10 >> 8);
    bVar9 = (byte)uVar10;
  }
  else {
    bVar9 = 0;
    bVar17 = 0;
  }
  pbVar5[5] = bVar9;
  pbVar5[4] = bVar17;
  pbVar5[6] = 0x80;
  pbVar5[7] = bVar19;
  pbVar5[8] = bVar18;
  pbVar5 = (byte *)FUN_0040a084(pbVar5 + 9,uVar13,uVar4 + 63000,
                                (uint)(uVar4 + 63000 < uVar4) + iVar16);
  uVar10 = param_2[4];
  if ((param_2[2] != uVar10) || (param_2[3] != param_2[5])) {
    pbVar5 = (byte *)FUN_0040a084(pbVar5,1,uVar10 + 63000,
                                  (uint)(uVar10 + 63000 < uVar10) + param_2[5]);
  }
  uVar11 = param_3[2];
  uVar10 = param_3[1];
  uVar14 = uVar11 - uVar10;
  uVar4 = (int)local_30 - (int)pbVar5;
  if (uVar4 <= uVar14) goto LAB_0040a9ec;
  do {
    uVar4 = uVar4 - uVar14;
    if ((local_f0._3_1_ & 0x20) == 0) {
      local_f0._3_1_ = local_f0._3_1_ | 0x20;
      memmove((int)&local_f0 + uVar4 + 4,local_ec,(int)pbVar5 - (int)local_ec);
      local_ec[0] = (char)uVar4 - 1;
      if (uVar4 < 2) goto LAB_0040a8ac;
      local_ec[1] = 0;
      memset(local_ec + 2,0xff,uVar4 - 2);
      iVar3 = *param_3;
    }
    else {
      iVar3 = (int)&local_f0 + local_ec[0] + 5;
      memmove(iVar3 + uVar4,iVar3,(int)pbVar5 - iVar3);
      memset(iVar3,0xff,uVar4);
      uVar10 = param_3[1];
      local_ec[0] = (char)uVar4 + local_ec[0];
      uVar11 = param_3[2];
LAB_0040a8ac:
      iVar3 = *param_3;
    }
    memcpy(auStack_34 + -uVar14,iVar3 + uVar10,uVar14);
    param_3[1] = uVar11;
    while( true ) {
      puVar6 = &local_f0;
      puVar2 = (undefined4 *)(**(int **)(param_1 + 4) + (*(int **)(param_1 + 4))[2]);
      do {
        puVar20 = puVar2;
        puVar7 = puVar6 + 4;
        uVar15 = puVar6[1];
        uVar12 = puVar6[2];
        uVar13 = puVar6[3];
        *puVar20 = *puVar6;
        puVar20[1] = uVar15;
        puVar20[2] = uVar12;
        puVar20[3] = uVar13;
        puVar6 = puVar7;
        puVar2 = puVar20 + 4;
      } while (puVar7 != &local_40);
      puVar20[4] = local_40;
      puVar20[5] = local_3c;
      puVar20[6] = local_38;
      iVar3 = *(int *)(param_1 + 4);
      uVar10 = param_3[1];
      iVar16 = *(int *)(iVar3 + 8) + 0xbc;
      *(int *)(iVar3 + 8) = iVar16;
      uVar11 = param_3[2];
      if (uVar11 <= uVar10) {
        return 0;
      }
      if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) < 0xbc) goto LAB_0040ab8c;
      bVar1 = false;
      if (0xbb < (uint)(*(int *)(iVar3 + 0x10) - iVar16)) goto LAB_0040a724;
LAB_0040a984:
      iVar3 = oss_media_write_frame(param_1);
      if (iVar3 != 0) {
        FUN_0052f238("oss.c","oss_media_packet_frame",0x399,"oss_media_write_frame failed!");
        return 0xffffffff;
      }
      local_f0._1_1_ = *(byte *)((int)param_2 + 1);
      iVar3 = param_2[6] + 1;
      uVar10 = param_3[1];
      uVar11 = param_3[2];
      param_2[6] = iVar3;
      uVar13 = *param_2;
      local_f0._2_1_ = (undefined1)uVar13;
      if (bVar1) goto LAB_0040a748;
LAB_0040a9bc:
      local_f0._0_1_ = 0x47;
      uVar14 = uVar11 - uVar10;
      local_f0._3_1_ = (byte)iVar3 & 0xf | 0x10;
      pbVar5 = local_ec;
      uVar4 = (int)local_30 - (int)pbVar5;
      if (uVar14 < uVar4) break;
LAB_0040a9ec:
      memcpy(pbVar5,*param_3 + uVar10,uVar4);
      param_3[1] = param_3[1] + uVar4;
    }
  } while( true );
}



// ==== oss_media_last_write_frame @ 0040ac34 size=292

undefined4 oss_media_last_write_frame(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 8) < DAT_0055ffe8) ||
     (iVar1 = oss_media_write_frame(), iVar1 == 0)) {
    iVar1 = FUN_0040a2c0(param_1);
    if (iVar1 == 0) {
      if (*(code **)(param_1 + 8) == (code *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1 + 8))(param_1);
      if (iVar1 == 0) {
        iVar3 = *(int *)(param_1 + 4);
        iVar1 = *(int *)(iVar3 + 0xc);
        DAT_00561968 = (DAT_00561968 - iVar1) + *(int *)(iVar3 + 8);
        *(int *)(iVar3 + 4) = iVar1;
        *(int *)(iVar3 + 8) = iVar1;
        uVar2 = 0;
      }
      else {
        FUN_0052f238("oss.c","oss_media_last_write_frame",0x4fd,"oss write video failed!");
        oss_report_upload_status(3,0);
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_0052f238("oss.c","oss_media_last_write_frame",0x4f5,"oss_file_last_cipher failed!");
      uVar2 = 0xffffffff;
    }
  }
  else {
    FUN_0052f238("oss.c","oss_media_last_write_frame",0x4ed,"oss_media_write_frame failed!");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== oss_prepare_oss @ 0040b4b4 size=284

undefined4 oss_prepare_oss(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = oss_buffer_new(param_1,param_3);
    if (iVar1 != 0) {
      FUN_0052f238("oss.c","oss_prepare_oss",0x850,"oss_write_ts oss_buffer_new failed!");
      return 0xffffffff;
    }
    FUN_0052f238("oss.c","oss_prepare_oss",0x855,"oss_write_ts oss_buffer_new ok!");
    iVar1 = *param_2;
  }
  else {
    iVar1 = *param_2;
  }
  if (iVar1 == 0) {
    iVar1 = FUN_00408390();
    *param_2 = iVar1;
    if (iVar1 == 0) {
      FUN_0052f238("oss.c","oss_prepare_oss",0x85e,"oss_write_ts oss_media_file_create failed!");
      return 0xffffffff;
    }
    FUN_0052f238("oss.c","oss_prepare_oss",0x863,"oss_write_ts oss_media_file_create ok!");
    iVar1 = *param_2;
  }
  *(undefined4 *)(iVar1 + 0x24) = param_4;
  FUN_00408360(*param_2,&DAT_0054df64);
  *(int *)*param_1 = *param_2;
  *(code **)(*param_1 + 8) = FUN_004152e4;
  return 0;
}



// ==== oss_ts_write @ 0040b5d0 size=3548

uint oss_ts_write(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined1 auStack_278 [128];
  undefined1 auStack_1f8 [128];
  undefined1 auStack_178 [128];
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  undefined4 local_e0;
  byte local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  undefined4 local_c0;
  byte local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined4 local_78 [2];
  int local_70;
  int local_6c;
  uint local_68;
  undefined1 *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  local_84 = DAT_00532670;
  local_80 = DAT_00532674;
  local_7f = DAT_00532675;
  local_8c = DAT_00532670;
  local_88 = DAT_00532674;
  local_87 = DAT_00532675;
  local_7e = DAT_00532676;
  local_86 = DAT_00532676;
  local_94 = 0;
  local_90 = 0;
  local_78[0] = 0;
  local_7c = 0;
  memset(auStack_178,0,0x80);
  memset(auStack_1f8,0,0x80);
  memset(auStack_278,0,0x80);
  local_bc = local_bc | 1;
  DAT_0056bbb0 = 0x61616161;
  local_dc = local_dc & 0xfe;
  local_d8 = 0x100;
  local_f8 = 0x101;
  local_a4 = 0x61616161;
  local_a0 = 0x61616161;
  local_9c = 0x61616161;
  local_98 = 0x61616161;
  DAT_0056bbb4 = 0x61616161;
  DAT_0056bbb8 = 0x61616161;
  DAT_0056bbbc = 0x61616161;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_d4 = 0xe0;
  local_f0 = 0;
  local_ec = 0;
  local_c0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_f4 = 0xc0;
  local_e0 = 0;
  if (DAT_0055fff0 == 0x1000) {
    uVar11 = 4;
    local_3c = 1;
    local_40 = 2;
  }
  else {
    local_3c = 3;
    local_40 = 0xf;
    uVar11 = 3;
    if (DAT_0055fff0 == 0x2000) {
      local_3c = 1;
      local_40 = 1;
      uVar11 = 5;
    }
  }
  if (DAT_00561918[0x182] == 1) {
    local_44 = 0;
  }
  else {
    iVar9 = 0;
    local_38 = 0;
    local_50 = 0;
    local_68 = 0xffffffff;
    local_58 = 7;
    local_5c = 0;
    local_70 = 0;
    local_54 = 0;
    local_60 = 0;
    local_44 = 0;
    local_6c = 0;
    while ((puVar2 = DAT_0056bba4, iVar3 = DAT_0055fff4, iVar4 = DAT_0055fff8,
           DAT_0055fff0 != 0x2000 ||
           ((uVar7 = time(0), uVar7 <= (int)puVar2 + 3U &&
            (iVar3 = DAT_0055fff4, iVar4 = DAT_0055fff8, DAT_00561918[0x275] == 2))))) {
      DAT_0055fff4 = iVar4;
      if (DAT_0055fff4 == 1) {
        local_48 = &DAT_00560000;
        DAT_0055fff8 = 0;
        uVar7 = FUN_00408350();
        iVar3 = 0;
        if (6000 < uVar7) {
          iVar3 = uVar7 - 6000;
        }
        FUN_004082c0(uVar11,iVar3);
        local_4c = 0;
        iVar3 = DAT_0055fff4;
      }
      else {
        local_48 = &DAT_00560000;
        local_4c = 0;
        DAT_0055fff8 = DAT_0055fff4;
      }
LAB_0040b7cc:
      DAT_0055fff4 = iVar3;
      if (local_48[-3] == 0) {
        if (DAT_00561668 == 1) goto LAB_0040be84;
        goto LAB_0040b7ec;
      }
      uVar7 = DAT_0055fff0 & 0xffff | 2;
      FUN_00408320(uVar11,uVar7);
      DAT_0056166c = (ushort)uVar7;
      if (DAT_0055fff0 != 0x2000) {
        _ftext(uVar11,&DAT_00561694,&DAT_00561690,0x187,&DAT_0056bbc0);
LAB_0040be70:
        local_48[-3] = 0;
        DAT_00561668 = 1;
LAB_0040be84:
        if (local_68 == 0xffffffff) {
          if ((DAT_0056bbca & 0x40) == 0) {
            local_80 = 9;
            local_88 = 9;
            local_68 = 0;
            local_58 = 6;
            local_7f = 0x10;
            local_87 = 0x30;
          }
          else {
            local_68 = 1;
          }
        }
        if (local_50 == 0) {
          local_50 = (uint)DAT_0056bbd4;
        }
        if (local_38 == 0) {
          iVar3 = DAT_0056bbc0;
          if (*DAT_00561918 == 1) {
            iVar3 = DAT_0056bbc0 + 0x7080;
          }
          FUN_0040b0e4(iVar3);
          iVar3 = oss_prepare_oss(&DAT_00561950,&DAT_0056194c,DAT_00561954 + 0x10,&LAB_00408eb0);
          if (iVar3 != 0) {
            FUN_0052f238("oss.c","oss_ts_write",0x684,"oss_prepare ts failed!");
            return 0xffffffff;
          }
          FUN_00408380(DAT_00561950);
          local_38 = 1;
        }
LAB_0040b7ec:
        piVar10 = DAT_00561918;
        if (DAT_00561964 == 0) {
          DAT_00561964 = DAT_0056bbc0;
        }
LAB_0040b80c:
        iVar3 = piVar10[0x182];
        while (iVar3 != 1) {
LAB_0040b820:
          if (DAT_00561668 != 0) {
            local_94 = 0x737073;
            memset(auStack_1f8,0,0x80);
            local_70 = DAT_0056bbcc;
            memcpy(auStack_1f8,DAT_00561694 + 0x187,DAT_0056bbcc);
            DAT_00561668 = 0;
            goto LAB_0040b80c;
          }
          uVar7 = DAT_0055fff0 & 0xffff;
          if ((DAT_0055fff0 != 0x1000) && (DAT_0055fff0 != 0x2000)) {
            uVar7 = uVar7 | 0x100;
          }
          if (DAT_0056166c != uVar7) {
            FUN_00408320(uVar11,uVar7);
            DAT_0056166c = (ushort)uVar7;
          }
          puVar2 = DAT_0056bba4;
          if (DAT_0055fff0 == 0x2000) {
            uVar7 = time(0);
            puVar12 = DAT_0056bba4;
            if ((uVar7 <= (int)puVar2 + 3U) && (DAT_00561918[0x275] == 2)) {
              iVar3 = check_ststoken();
              if (-1 < iVar3) {
                puVar12 = &DAT_0056bbc0;
                local_64 = &DAT_00570000;
                iVar3 = FUN_00408240(uVar11,&DAT_00561694,&DAT_00561690,0x187,&DAT_0056bbc0);
                if (0 < iVar3) goto LAB_0040b898;
                usleep(100000);
                piVar10 = DAT_00561918;
                goto LAB_0040b80c;
              }
              FUN_0052f238("oss.c","oss_ts_write",0x6cb,"check_ststoken failed!");
              goto LAB_0040b9ac;
            }
            uVar5 = time(0);
            FUN_0052f238("oss.c","oss_ts_write",0x6c3,
                         "lapse video end, end time = %u, cur time = %ld, enable = %d",puVar12,uVar5
                         ,DAT_00561918[0x275]);
LAB_0040c02c:
            local_44 = local_44 + 1;
            if (local_3c == 0) {
              trap(0x1c00);
            }
            if ((local_44 % local_3c == 0) &&
               (iVar3 = oss_media_write_frame(DAT_00561950), iVar3 != 0)) {
              FUN_0052f238("oss.c","oss_ts_write",0x78f,"oss_media_write_frame failed!",puVar12);
              return 0xffffffff;
            }
            goto LAB_0040c058;
          }
          puVar12 = &DAT_0056bbc0;
          local_64 = &DAT_00570000;
          _ftext(uVar11,&DAT_00561694,&DAT_00561690,0x187,&DAT_0056bbc0);
LAB_0040b898:
          uVar8 = DAT_0056bbca;
          if ((DAT_0056bbca & 0x100) != 0) {
            uVar7 = DAT_0056bbc4 - local_60;
            if ((int)uVar7 < 0) {
              uVar7 = -uVar7;
            }
            local_6c = DAT_00561694 + 0x187;
            local_f0 = DAT_00561688;
            local_ec = DAT_0056168c;
            local_e8 = DAT_00561688;
            local_e4 = DAT_0056168c;
            if (uVar7 < 0xc9) {
              uVar7 = uVar7 * 0x5a;
            }
            else {
              uVar7 = 0x1734;
            }
            DAT_00561688 = uVar7 + DAT_00561688;
            DAT_0056168c = (uint)(DAT_00561688 < uVar7) + DAT_0056168c;
            iVar3 = DAT_0056bbc4;
            iVar9 = DAT_0056bbcc;
LAB_0040b914:
            local_b8 = local_6c;
            local_ac = 0;
            local_b4 = 0;
            local_b0 = iVar9;
            local_a8 = iVar9;
            add_pat_pmt(DAT_00561950,local_78,&local_7c,local_68);
            if ((DAT_0056bbca & 0x100) == 0) {
              iVar4 = oss_media_packet_frame(DAT_00561950,&local_d8,&local_b8);
              if (iVar4 != 0) {
                uVar11 = 0x778;
                goto LAB_0040bfac;
              }
              if (DAT_0055fff0 == 0x2000) {
                FUN_0052f238("oss.c","oss_ts_write",0x77f,
                             "%s frame, index = %d, size = %d, timestamp = %ld %u, ts len = %d, buffer last = %u\n"
                             ,&local_94,DAT_0056bbc8,DAT_0056bbcc,
                             *(undefined4 *)(local_64 + -0x4440),DAT_0056bbc4,DAT_00561968,
                             *(undefined4 *)(*(int *)(DAT_00561950 + 4) + 8));
                piVar10 = DAT_00561918;
                local_60 = iVar3;
                goto LAB_0040b80c;
              }
            }
            else {
              iVar4 = oss_media_packet_frame(DAT_00561950,&local_f8,&local_b8);
              if (iVar4 != 0) {
                uVar11 = 0x76f;
LAB_0040bfac:
                FUN_0052f238("oss.c","oss_ts_write",uVar11,
                             "oss video oss_media_packet_frame failed!");
                return 0xffffffff;
              }
            }
            piVar10 = DAT_00561918;
            local_60 = iVar3;
            if (DAT_00561918[0x182] == 1) break;
            goto LAB_0040b820;
          }
          uVar7 = (uint)((DAT_0056bbca & 0x40) != 0);
          if (local_68 != uVar7) {
            uVar11 = 1;
            if ((DAT_0056bbca & 2) == 0) {
              local_48[-3] = 1;
            }
            else {
              DAT_00561668 = 1;
              uVar11 = local_48[-3];
            }
            uVar5 = 0x6f4;
            pcVar6 = "video codec type modify: %d ----> %d (0:h264;1:h265), need_get_sps = %d";
            uVar13 = local_68;
LAB_0040c0c4:
            DAT_0056196c = 1;
            FUN_0052f238("oss.c","oss_ts_write",uVar5,pcVar6,uVar13,uVar7,uVar11);
            goto LAB_0040b9ac;
          }
          uVar7 = (uint)DAT_0056bbd4;
          if (uVar7 != local_50) {
            uVar11 = 1;
            if ((DAT_0056bbca & 2) == 0) {
              local_48[-3] = 1;
            }
            else {
              DAT_00561668 = 1;
              uVar11 = local_48[-3];
            }
            uVar5 = 0x704;
            pcVar6 = "video resolution modify: width: %d ----> %d, need_get_sps = %d";
            uVar13 = local_50;
            goto LAB_0040c0c4;
          }
          if ((DAT_0056bbca & 2) != 0) {
            DAT_00561668 = 1;
            DAT_00561960 = *(undefined4 *)(local_64 + -0x4440);
            goto LAB_0040c02c;
          }
          if ((DAT_0056bbca & 4) == 0) {
            if ((DAT_0056bbca & 8) == 0) {
              if ((DAT_0056bbca & 1) == 0) {
                if ((DAT_0056bbca & 0xf) != 0) {
                  puts("wrong frame");
                  return 0xffffffff;
                }
                if (local_4c == 0) {
                  local_48[-3] = 1;
                  DAT_00561668 = 0;
                  FUN_0052f238("oss.c","oss_ts_write",0x744,
                               "I frame not yet sent, drop p frame, try again");
                  iVar3 = DAT_0055fff4;
                  goto LAB_0040b7cc;
                }
                iVar9 = 0x187 - local_58;
                local_94 = CONCAT22(local_94._2_2_,0x70);
                memcpy(DAT_00561694 + iVar9,&local_8c,local_58);
                bVar1 = true;
                local_6c = DAT_00561694 + iVar9;
                iVar9 = local_58 + DAT_0056bbcc;
                uVar8 = DAT_0056bbca;
              }
              else {
                if (local_68 == 0) {
                  if ((local_70 == 0) || (local_5c == 0)) {
                    local_48[-3] = 1;
                    DAT_00561668 = 0;
                    FUN_0052f238("oss.c","oss_ts_write",0x72e,
                                 "iframe is not ok, drop frame, sps len = %d, pps len = %d",local_70
                                 ,local_5c);
                    iVar3 = DAT_0055fff4;
                    goto LAB_0040b7cc;
                  }
                }
                else if (((local_54 == 0) || (local_70 == 0)) || (local_5c == 0)) {
                  local_48[-3] = 1;
                  DAT_00561668 = 0;
                  FUN_0052f238("oss.c","oss_ts_write",0x724,
                               "iframe is not ok, drop frame, vps len = %d, sps len = %d, pps len = %d"
                               ,local_54,local_70,local_5c);
                  local_68 = 1;
                  iVar3 = DAT_0055fff4;
                  goto LAB_0040b7cc;
                }
                iVar3 = 0x187 - local_5c;
                local_30 = iVar3 - local_70;
                local_34 = local_30 - local_54;
                iVar9 = local_34 - local_58;
                local_94 = CONCAT22(local_94._2_2_,0x69);
                memcpy(DAT_00561694 + iVar9,&local_84);
                memcpy(DAT_00561694 + local_34,auStack_178,local_54);
                memcpy(DAT_00561694 + local_30,auStack_1f8,local_70);
                memcpy(DAT_00561694 + iVar3,auStack_278,local_5c);
                bVar1 = true;
                local_4c = 1;
                local_6c = DAT_00561694 + iVar9;
                iVar9 = local_58 + DAT_0056bbcc + local_54 + local_70 + local_5c;
                uVar8 = DAT_0056bbca;
              }
            }
            else {
              local_94 = 0x737076;
              memset(auStack_178,0,0x80);
              local_54 = DAT_0056bbcc;
              memcpy(auStack_178,DAT_00561694 + 0x187,DAT_0056bbcc);
              bVar1 = false;
            }
          }
          else {
            local_94 = 0x737070;
            memset(auStack_278,0,0x80);
            local_5c = DAT_0056bbcc;
            memcpy(auStack_278,DAT_00561694 + 0x187,DAT_0056bbcc);
            bVar1 = false;
          }
          local_d0 = DAT_00561680;
          local_cc = DAT_00561684;
          if ((uVar8 & 0xe) == 0) {
            DAT_00561684 = (uint)(DAT_00561680 + 0x1194 < DAT_00561680) + DAT_00561684;
            DAT_00561680 = DAT_00561680 + 0x1194;
          }
          iVar3 = local_60;
          local_c8 = local_d0;
          local_c4 = local_cc;
          if (bVar1) goto LAB_0040b914;
          piVar10 = DAT_00561918;
          iVar3 = DAT_00561918[0x182];
        }
        FUN_0052f238("oss.c","oss_ts_write",0x69f,"devide power off");
        break;
      }
      iVar3 = check_ststoken();
      if (iVar3 < 0) {
        FUN_0052f238("oss.c","oss_ts_write",0x646,"check_ststoken failed!");
        break;
      }
      iVar3 = FUN_00408240(uVar11,&DAT_00561694,&DAT_00561690,0x187,&DAT_0056bbc0);
      if (0 < iVar3) goto LAB_0040be70;
      usleep(100000);
LAB_0040c058:
      if ((local_40 <= local_44) || (DAT_00561918[0x182] == 1)) break;
    }
  }
LAB_0040b9ac:
  iVar9 = oss_media_last_write_frame(DAT_00561950);
  if (iVar9 == 0) {
    DAT_00561688 = DAT_00561680;
    DAT_0056168c = DAT_00561684;
  }
  else {
    FUN_0052f238("oss.c","oss_ts_write",0x799,"oss_media_last_write_frame failed!");
    local_44 = 0xffffffff;
  }
  return local_44;
}



// ==== oss_media_write_pic @ 0040c424 size=1452

undefined4 oss_media_write_pic(void)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  undefined1 auStack_638 [1024];
  undefined1 auStack_238 [512];
  int local_38;
  int local_34;
  undefined8 local_30;
  
  memset(auStack_238,0,0x200);
  memset(auStack_638,0,0x400);
  local_38 = 0;
  local_34 = 0;
  FUN_00408f64();
  if (DAT_00561948 == 0) {
    FUN_0052f238("oss.c","oss_media_write_pic",0x51c,"oss token and m3u8 is not ready\n");
  }
  else {
    gettimeofday(&local_38,0);
    local_30 = (longlong)local_38 * 1000 + (longlong)(local_34 / 1000);
    iVar3 = oss_prepare_oss(&DAT_00561940,&DAT_0056193c,0x19000,FUN_0040b42c);
    if (iVar3 == 0) {
      if (DAT_00561940[2] == 0) {
        gettimeofday(&local_38,0);
        uVar5 = 0;
        lVar1 = (longlong)local_38 * 1000 + (longlong)(local_34 / 1000);
        uVar10 = (uint)lVar1;
        uVar12 = uVar10 - (int)local_30;
        FUN_0052f238("oss.c","oss_media_write_pic",0x58c,
                     "upload pic: cost time = %llu(ms), send_size = %d(Bytes), data = %s",uVar12,
                     ((int)((ulonglong)lVar1 >> 0x20) - local_30._4_4_) - (uint)(uVar10 < uVar12),0,
                     auStack_638);
        FUN_00408f98();
        goto LAB_0040c738;
      }
      FUN_0052f100(auStack_238,0x200,0,0x200);
      iVar3 = 0;
      snprintf(auStack_238,0x200,"/home/app/crypt_file -ee %s %s %s",&DAT_00532148,
               "/tmp/oss.jpg.crypt",&DAT_0056b400);
      system(auStack_238);
      __stream = (FILE *)fopen("/tmp/oss.jpg.crypt","r");
      if (__stream == (FILE *)0x0) {
        FUN_0052f238("oss.c","oss_media_write_pic",0x542,"fopen in file fail!\n");
        goto LAB_0040c968;
      }
      do {
        puVar9 = (undefined4 *)DAT_00561940[1];
        puVar9[2] = 0;
        sVar4 = fread((void *)*puVar9,1,0x19000,__stream);
        piVar2 = DAT_00561940;
        if (sVar4 == 0) break;
        iVar7 = DAT_00561940[1];
        pcVar11 = (code *)DAT_00561940[2];
        *(size_t *)(iVar7 + 8) = sVar4;
        iVar3 = (sVar4 - *(int *)(iVar7 + 4)) + iVar3;
        iVar7 = (*pcVar11)(piVar2);
        if (iVar7 != 0) {
          FUN_0052f238("oss.c","oss_media_write_pic",0x55b,
                       "oss write pic failed, code = %d, message = %s",
                       *(undefined4 *)(*DAT_00561940 + 0x38),*DAT_00561940 + 0x3c);
          goto LAB_0040c874;
        }
      } while (0x18fff < sVar4);
      memset(auStack_638,0,0x400);
      snprintf(auStack_638,0x400,"%s %s 0.000 0 %d\n",&DAT_00561698,&DAT_0056b4c0,
               *(undefined4 *)(DAT_00561918 + 0x4cc));
      puVar9 = *(undefined4 **)(DAT_00561948 + 4);
      puVar9[2] = 0;
      uVar5 = strlen(auStack_638);
      memcpy(*puVar9,auStack_638,uVar5);
      iVar7 = DAT_00561948;
      iVar8 = *(int *)(DAT_00561948 + 4);
      iVar6 = strlen(auStack_638);
      pcVar11 = *(code **)(iVar7 + 8);
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + iVar6;
      iVar7 = (*pcVar11)(iVar7);
      if (iVar7 == 0) {
LAB_0040c68c:
        gettimeofday(&local_38,0);
        uVar5 = 0;
        lVar1 = (longlong)local_38 * 1000 + (longlong)(local_34 / 1000);
        uVar10 = (uint)lVar1;
        uVar12 = uVar10 - (int)local_30;
        FUN_0052f238("oss.c","oss_media_write_pic",0x58c,
                     "upload pic: cost time = %llu(ms), send_size = %d(Bytes), data = %s",uVar12,
                     ((int)((ulonglong)lVar1 >> 0x20) - local_30._4_4_) - (uint)(uVar10 < uVar12),
                     iVar3,auStack_638);
        FUN_00408f98();
      }
      else {
        FUN_0052f238("oss.c","oss_media_write_pic",0x570,
                     "oss write pic failed, code = %d, message = %s",
                     *(undefined4 *)(*DAT_00561940 + 0x38),*DAT_00561940 + 0x3c);
        iVar7 = (**(code **)(DAT_00561948 + 8))();
        if (iVar7 == 0) goto LAB_0040c68c;
        FUN_0052f238("oss.c","oss_media_write_pic",0x57c,
                     "oss write pic failed, code = %d, message = %s",
                     *(undefined4 *)(*DAT_00561940 + 0x38),*DAT_00561940 + 0x3c);
LAB_0040c874:
        uVar5 = 0xffffffff;
        FUN_00408f98();
      }
      fclose(__stream);
      goto LAB_0040c738;
    }
    FUN_0052f238("oss.c","oss_media_write_pic",0x52a,"oss_prepare pic failed!");
  }
LAB_0040c968:
  uVar5 = 0xffffffff;
  FUN_00408f98();
LAB_0040c738:
  FUN_0040c400(DAT_00561940);
  FUN_0052f100(auStack_238,0x200,0,0x200);
  snprintf(auStack_238,0x200,"rm -f %s %s",&DAT_00532148,"/tmp/oss.jpg.crypt");
  system(auStack_238);
  oss_set_cloud_pic_index_clear();
  return uVar5;
}



// ==== oss_media_write_file @ 0040cc2c size=3384

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0040d654) */
/* WARNING: Removing unreachable block (ram,0x0040d6a4) */
/* WARNING: Removing unreachable block (ram,0x0040dd54) */

void oss_media_write_file(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined1 auStack_4e0 [1024];
  undefined1 auStack_e0 [64];
  int local_a0 [2];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  
  local_a0[0] = 0;
  iVar12 = 0;
  memset(auStack_4e0,0,0x400);
  memset(auStack_e0,0,0x40);
  iVar13 = 0;
  local_8c = 0;
  local_74 = 0;
  local_98 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 3;
  local_88 = 0;
  local_90 = 0;
  local_94 = 0;
  iVar4 = 0;
  do {
    if ((DAT_0055fff0 == 0x400) || (DAT_0055fff0 == 0x800)) {
      iVar12 = 0;
      if (*DAT_00561918 == 1) goto LAB_0040d208;
LAB_0040cd18:
      local_a0[0] = time(0);
    }
    else {
      if (DAT_0055fff0 == 0x1000) {
        iVar12 = 1;
      }
      if (*DAT_00561918 != 1) goto LAB_0040cd18;
LAB_0040d208:
      local_a0[0] = time(0);
      local_a0[0] = local_a0[0] + 0x7080;
    }
    DAT_00561974 = local_a0[0] / 0x3c;
    iVar3 = localtime(local_a0);
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == iVar4) {
LAB_0040cd90:
      iVar3 = iVar4;
      if (DAT_0055fff0 != 0x2000) goto LAB_0040cda0;
LAB_0040d24c:
      if ((DAT_00561918[0x182] != 1) && (DAT_00561918[0x275] == 2)) goto LAB_0040ce04;
      DAT_0055fff4 = 1;
      sleep(1);
      bVar1 = iVar13 < 10;
    }
    else {
      DAT_00561688 = 0;
      DAT_0056168c = 0;
      DAT_00561680 = 0;
      DAT_00561684 = 0;
      if (iVar4 == 0) {
        DAT_00561970 = 1;
        iVar4 = iVar3;
        goto LAB_0040cd90;
      }
      if (DAT_0055fff0 == 0x2000) goto LAB_0040d24c;
LAB_0040cda0:
      if ((DAT_00561918[0x182] == 1) || ((short)DAT_00561918[0x131] == 0)) {
LAB_0040d21c:
        sleep(1);
        DAT_0055fff8 = -1;
      }
      else {
        if (*(short *)((int)DAT_00561918 + 0x4c6) == 0) {
          if (DAT_00561918[0x173] == 0) {
            iVar4 = DAT_00561918[iVar12 + 0x17c];
            if (iVar4 == 0) {
              if (DAT_00561918[iVar12 + 0x17e] == 0) goto LAB_0040d21c;
            }
            else {
LAB_0040d47c:
              if (iVar4 == 1) goto joined_r0x0040d490;
            }
            if (DAT_00561918[iVar12 + 0x17e] != 1) goto LAB_0040ce04;
          }
          else {
            if (DAT_00561918[0x173] != 1) {
              iVar4 = DAT_00561918[iVar12 + 0x17c];
              goto LAB_0040d47c;
            }
            iVar4 = DAT_00561918[iVar12 + 0x17c];
          }
joined_r0x0040d490:
          if (DAT_0055fff8 != -1) goto LAB_0040cddc;
          DAT_0055fff8 = 1;
          if (iVar4 == 1) goto LAB_0040d2ec;
LAB_0040cde8:
          iVar4 = DAT_00561918[iVar12 + 0x17e];
        }
        else {
          iVar4 = DAT_00561918[iVar12 + 0x17c];
LAB_0040cddc:
          if (iVar4 != 1) goto LAB_0040cde8;
LAB_0040d2ec:
          oss_set_babycry_clear(iVar12);
          iVar4 = DAT_00561918[iVar12 + 0x17e];
        }
        if (iVar4 == 1) {
          oss_set_abnormal_sound_clear(iVar12);
        }
LAB_0040ce04:
        if (((uint)(DAT_00561974 - DAT_00561978) < 0x33) &&
           ((DAT_00561918[0x276] != 1 || (DAT_0055fff0 != 0x2000)))) {
LAB_0040ce30:
          if (DAT_0055fff0 != 0x400) goto LAB_0040ce3c;
LAB_0040d594:
          if (local_88 == 0) {
            puVar11 = &DAT_00560000;
            if ((2 < local_80) && (local_84 != 3)) {
              local_84 = local_84 + -1;
            }
          }
          else {
            DAT_0055fff0 = 0x800;
            DAT_0056195c = 1;
            DAT_0055fff4 = 1;
            DAT_00561668 = 0;
            if ((local_80 < 3) && (local_84 < 0x3c)) {
              local_84 = local_84 + 2;
            }
            local_50 = &DAT_00560000;
            FUN_0052f238("oss.c","oss_media_write_file",0x9f1,"main to sub, threshold = %d",local_84
                        );
            local_80 = 0;
            local_88 = 0;
            puVar11 = local_50;
          }
        }
        else {
          iVar4 = get_ststoken(0);
          if (iVar4 != 0) {
            iVar13 = iVar13 + 1;
            FUN_0052f238("oss.c","oss_media_write_file",0x9ba,"get_ststoken failed!");
            oss_report_upload_status(1,0);
            bVar1 = iVar13 < 10;
            goto LAB_0040d080;
          }
          FUN_0040c400(DAT_00561948);
          iVar4 = oss_prepare_oss(&DAT_00561948,&DAT_00561944,0x200,FUN_0040b05c);
          if (iVar4 != 0) {
            FUN_0052f238("oss.c","oss_media_write_file",0x9c5,"oss_prepare m3u8 failed!");
            goto LAB_0040d0ac;
          }
          DAT_00561978 = DAT_00561974;
          iVar4 = DAT_00561918[0x276];
          if ((iVar4 != 1) || (DAT_0055fff0 != 0x2000)) goto LAB_0040ce30;
          FUN_0052f238("oss.c","oss_media_write_file",0x9d5,"lapse video enable modify");
          DAT_0055fff4 = iVar4;
          uVar15 = FUN_00408350();
          FUN_004082c0(5,uVar15);
          oss_set_lapse_video_modify(0);
          if (DAT_0055fff0 == 0x400) goto LAB_0040d594;
LAB_0040ce3c:
          if (DAT_0055fff0 == 0x800) {
            if (local_90 < local_84) goto LAB_0040ce50;
            DAT_0055fff0 = 0x400;
            DAT_0056195c = 1;
            DAT_0055fff4 = 1;
            local_50 = &DAT_00560000;
            DAT_00561668 = 0;
            FUN_0052f238("oss.c","oss_media_write_file",0xa07,"sub to main, threshold = %d",local_84
                        );
            local_7c = 0;
            local_90 = 0;
            puVar11 = local_50;
          }
          else if (DAT_0055fff0 == 0x2000) {
            if ((((DAT_0056bba0 == 0) || (DAT_0056bba4 <= DAT_0056bba0)) || (DAT_0056bba8 == 0)) ||
               (uVar14 = DAT_0056bba4 + 3, uVar6 = time(0), uVar14 < uVar6)) {
              FUN_0052f238("oss.c","oss_media_write_file",0xa10,"set lapse video off");
              oss_set_lapse_video_off();
              sleep(1);
              bVar1 = iVar13 < 10;
              goto LAB_0040d080;
            }
            if (((DAT_0056bba4 - DAT_0056bba0 != DAT_00561918[0x278]) ||
                (DAT_0056bba8 != DAT_00561918[0x279])) || (DAT_0056bba4 != DAT_00561918[0x277])) {
              oss_set_lapse_framerate();
            }
            if (DAT_0055fff4 != 0) {
              oss_set_lapse_force_idr();
            }
            iVar4 = DAT_0056bba8;
            local_48 = (undefined4 *)(DAT_0056bba4 - DAT_0056bba0);
            local_4c = (undefined4 *)DAT_0056bba4;
            iVar8 = time(0);
            FUN_0052f238("oss.c","oss_media_write_file",0xa24,
                         "video duration = %u, lapse video duration = %u, left time = %u - 10, need_get_sps = %d"
                         ,local_48,iVar4,((int)local_4c + 10U) - iVar8,DAT_0055fff4);
            puVar11 = &DAT_00560000;
          }
          else {
LAB_0040ce50:
            puVar11 = &DAT_00560000;
          }
        }
        DAT_00561674 = DAT_0056168c;
        DAT_0056167c = DAT_00561684;
        DAT_00561678 = DAT_00561680;
        DAT_00561670 = DAT_00561688;
        puVar11[0x657] = 1;
        local_48 = &DAT_00560000;
        local_4c = &DAT_00560000;
        local_44 = &DAT_00560000;
        DAT_00561964 = 0;
        DAT_00561968 = (undefined4 *)0x0;
        local_50 = (undefined4 *)oss_ts_write();
        FUN_0040c400(DAT_00561950);
        puVar11 = DAT_00561968;
        iVar7 = DAT_0056167c;
        iVar8 = DAT_00561678;
        iVar4 = DAT_0055fff0;
        if ((int)local_50 < 1) {
          uVar15 = local_4c[0x59d];
          local_48[0x5a2] = local_4c[0x59c];
          local_44[0x5a0] = iVar8;
          local_44[0x5a1] = iVar7;
          local_48[0x5a3] = uVar15;
          if (iVar4 == 0x400) goto LAB_0040d4d0;
LAB_0040cf0c:
          if (iVar4 == 0x800) {
            local_90 = 0;
          }
        }
        else {
          if (0x10 < (int)DAT_00561968) {
            local_94 = local_94 + 1;
            memset(auStack_4e0,0,0x400);
            local_4c = (undefined4 *)(local_44[0x5a0] - DAT_00561678);
            local_50 = (undefined4 *)
                       ((local_44[0x5a1] - DAT_0056167c) - (uint)((uint)local_44[0x5a0] < local_4c))
            ;
            iVar4 = FUN_0052fd18(local_4c,local_50,0,0,&DAT_0056b4c0);
            if (0 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar15 = local_4c[0x59d];
          local_48[0x5a2] = local_4c[0x59c];
          local_44[0x5a0] = iVar8;
          local_44[0x5a1] = iVar7;
          local_48[0x5a3] = uVar15;
          if (iVar4 != 0x400) goto LAB_0040cf0c;
LAB_0040d4d0:
          local_88 = local_88 + 1;
        }
        uVar2 = DAT_00561964;
        uVar15 = DAT_00561960;
        local_98 = local_98 + 1;
        iVar13 = iVar13 + 1;
        DAT_0055fff4 = 1;
        local_50 = puVar11;
        uVar5 = time(0);
        FUN_0052f238("oss.c","oss_media_write_file",0xad3,
                     "oss_ts_write error[%x], ts len = %d, %d -- %d[%ld], %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d"
                     ,iVar4,local_50,uVar2,uVar15,uVar5,DAT_00561918[0x173],DAT_00561918[0x174],
                     DAT_00561918[0x227],DAT_00561918[0x22a],DAT_00561918[0x246],DAT_00561918[0x247]
                     ,DAT_00561918[0x248],DAT_00561918[0x249],DAT_00561918[0x24a],
                     (char)DAT_00561918[0x24c],DAT_00561918[0x177]);
        FUN_0052f100(auStack_e0,0x40,0,0x40);
        snprintf(auStack_e0,0x40,"oss_fail_%x_%d",DAT_0055fff0,local_98 % 10);
        FUN_0052fc3c(DAT_00561918[0x16b],auStack_e0);
        local_94 = 0;
        if ((DAT_0055fff0 == 0x400) || (DAT_0055fff0 == 0x800)) {
          if (DAT_00561918[0x182] == 1) {
            iVar7 = (int)(short)DAT_00561918[0x131];
            iVar4 = (int)*(short *)((int)DAT_00561918 + 0x4c6);
            iVar8 = DAT_00561918[0x173];
            iVar10 = DAT_00561918[iVar12 + 0x17c];
            iVar9 = DAT_00561918[iVar12 + 0x17e];
          }
          else {
            iVar7 = (int)(short)DAT_00561918[0x131];
            if (iVar7 == 0) {
              iVar4 = (int)*(short *)((int)DAT_00561918 + 0x4c6);
              iVar8 = DAT_00561918[0x173];
              iVar10 = DAT_00561918[iVar12 + 0x17c];
              iVar9 = DAT_00561918[iVar12 + 0x17e];
            }
            else {
              if ((((*(short *)((int)DAT_00561918 + 0x4c6) != 0) || (DAT_00561918[0x173] != 0)) ||
                  (DAT_00561918[iVar12 + 0x17c] != 0)) ||
                 (iVar9 = 0, DAT_00561918[iVar12 + 0x17e] != 0)) goto LAB_0040d07c;
              iVar10 = 0;
              iVar4 = 0;
              iVar8 = 0;
            }
          }
          local_8c = local_8c + 1;
          FUN_0052f238("oss.c","oss_media_write_file",0xae4,
                       "ts stop[%x], %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d"
                       ,DAT_0055fff0,DAT_00561918[0x182],iVar7,iVar4,iVar8,iVar10,
                       DAT_00561918[0x174],DAT_00561918[0x227],DAT_00561918[0x22a],
                       DAT_00561918[0x246],DAT_00561918[0x247],DAT_00561918[0x248],
                       DAT_00561918[0x249],DAT_00561918[0x24a],(char)DAT_00561918[0x24c],iVar9,
                       DAT_00561918[0x177]);
          FUN_0052f100(auStack_e0,0x40,0,0x40);
          snprintf(auStack_e0,0x40,"oss_fragment_%x_%d",DAT_0055fff0,local_8c % 10);
          FUN_0052fc3c(DAT_00561918[0x16b],auStack_e0);
          bVar1 = iVar13 < 10;
          goto LAB_0040d080;
        }
      }
LAB_0040d07c:
      bVar1 = iVar13 < 10;
    }
LAB_0040d080:
    iVar4 = iVar3;
    if (!bVar1) {
      FUN_0052f238("oss.c","oss_media_write_file",0x96b,"some wrong with net!");
LAB_0040d0ac:
      FUN_0040c3ac(DAT_00561948);
      FUN_0040c3ac(DAT_00561950);
      FUN_0040c3ac(DAT_00561940);
      FUN_0052f238("oss.c","oss_media_write_file",0xaf4,"oss_media_write_file fail!");
      FUN_0052fc3c(DAT_00561918[0x16b],"oss_exit");
      return;
    }
  } while( true );
}



// ==== oss_op_debug @ 00413084 size=920

void oss_op_debug(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  if (*(int *)PTR_aos_log_level_00560a1c == 6) {
    if (5 < *(uint *)PTR_aos_log_level_00560a1c) {
      (**(code **)PTR_aos_log_format_00560a20)
                (6,PTR_LAB_00560984 + 0x2ea0,0x1c,PTR_LAB_00560984 + 0x2ff4,
                 PTR_LAB_00560984 + 0x2eb4,param_1);
    }
    if (5 < *(uint *)PTR_aos_log_level_00560a1c) {
      (**(code **)PTR_aos_log_format_00560a20)
                (6,PTR_LAB_00560984 + 0x2ea0,0x1d,PTR_LAB_00560984 + 0x2ff4,
                 PTR_LAB_00560984 + 0x2ec0,*param_2,param_2[1],param_2[2]);
    }
    if (5 < *(uint *)PTR_aos_log_level_00560a1c) {
      (**(code **)PTR_aos_log_format_00560a20)
                (6,PTR_LAB_00560984 + 0x2ea0,0x23,PTR_LAB_00560984 + 0x2ff4,
                 PTR_LAB_00560984 + 0x2ee8);
    }
    iVar1 = (*(code *)PTR_apr_table_elts_00560a0c)(param_3);
    iVar2 = *(int *)(iVar1 + 0x10);
    for (local_18 = 0; local_18 < *(int *)(iVar1 + 8); local_18 = local_18 + 1) {
      if (5 < *(uint *)PTR_aos_log_level_00560a1c) {
        (**(code **)PTR_aos_log_format_00560a20)
                  (6,PTR_LAB_00560984 + 0x2ea0,0x28,PTR_LAB_00560984 + 0x2ff4,
                   PTR_LAB_00560984 + 0x2efc,*(undefined4 *)(iVar2 + local_18 * 0xc),
                   *(undefined4 *)(iVar2 + local_18 * 0xc + 4));
      }
    }
    if (5 < *(uint *)PTR_aos_log_level_00560a1c) {
      (**(code **)PTR_aos_log_format_00560a20)
                (6,PTR_LAB_00560984 + 0x2ea0,0x2b,PTR_LAB_00560984 + 0x2ff4,
                 PTR_LAB_00560984 + 0x2f08);
    }
    iVar1 = (*(code *)PTR_apr_table_elts_00560a0c)(param_4);
    iVar2 = *(int *)(iVar1 + 0x10);
    for (local_18 = 0; local_18 < *(int *)(iVar1 + 8); local_18 = local_18 + 1) {
      if (5 < *(uint *)PTR_aos_log_level_00560a1c) {
        (**(code **)PTR_aos_log_format_00560a20)
                  (6,PTR_LAB_00560984 + 0x2ea0,0x30,PTR_LAB_00560984 + 0x2ff4,
                   PTR_LAB_00560984 + 0x2efc,*(undefined4 *)(iVar2 + local_18 * 0xc),
                   *(undefined4 *)(iVar2 + local_18 * 0xc + 4));
      }
    }
  }
  return;
}



// ==== oss_media @ 00413748 size=144

undefined4 oss_media(void)

{
  undefined4 uVar1;
  
  (*(code *)PTR_aos_log_set_level_00560a24)(5);
  (*(code *)PTR_aos_log_set_output_00560a28)(0);
  uVar1 = (*(code *)PTR_aos_http_io_initialize_00560a2c)(PTR_LAB_00560984 + 0x2f1c,0);
  return uVar1;
}



// ==== oss_media_file_stat @ 00413ac8 size=868

undefined4 oss_media_file_stat(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  (*(code *)(PTR_LAB_0056099c + 0x3490))(param_1,0);
  (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_28,0,0,0);
  (*(code *)(PTR_LAB_0056099c + 0x2e88))(local_28,param_1,&local_24);
  local_20 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0xc));
  local_1c = *(undefined4 *)(param_1 + 0xc);
  local_18 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0x10));
  local_14 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = (*(code *)PTR_apr_table_make_005609d0)(local_28,0);
  local_10[0] = (*(code *)PTR_apr_table_make_005609d0)(local_28,0);
  piVar2 = (int *)(*(code *)PTR_oss_head_object_00560a38)
                            (local_24,&local_20,&local_18,uVar1,local_10);
  (*(code *)(PTR_LAB_0056099c + 0x3584))(param_1,piVar2);
  (*(code *)(PTR_LAB_0056099c + 0x3084))(PTR_LAB_00560984 + 0x2f48,piVar2,uVar1,local_10[0]);
  if ((piVar2 != (int *)0x0) && (iVar3 = (*(code *)(PTR_LAB_0056099c + 0x2e28))(piVar2), iVar3 != 0)
     ) {
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = (*(code *)PTR_apr_table_get_005609dc)(local_10[0],PTR_LAB_00560984 + 0x2f58);
      uVar1 = (*(code *)(PTR_LAB_0056099c + 0x341c))(uVar1);
      *param_2 = uVar1;
      uVar1 = (*(code *)PTR_apr_table_get_005609dc)(local_10[0],PTR_LAB_00560984 + 0x2f68);
      param_2[1] = uVar1;
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_28);
    return 0;
  }
  if ((piVar2 == (int *)0x0) || (*piVar2 != 0x194)) {
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_28);
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
      param_2[1] = PTR_LAB_00560984 + 0x2f7c;
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_28);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== oss_media_file_write @ 00414518 size=1396

int oss_media_file_write(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 **local_18;
  undefined4 **local_14;
  
  (*(code *)(PTR_LAB_0056099c + 0x3490))(param_1,0);
  if ((*(int *)(param_1 + 0x28) == 0) ||
     ((iVar1 = (*(code *)PTR_strcmp_005614e4)
                         (PTR_LAB_00560984 + 0x2f2c,*(undefined4 *)(param_1 + 0x28)), iVar1 != 0 &&
      (iVar1 = (*(code *)PTR_strcmp_005614e4)
                         (PTR_LAB_00560984 + 0x2f30,*(undefined4 *)(param_1 + 0x28)), iVar1 != 0))))
  {
    (*(code *)(PTR_LAB_0056099c + 0x369c))(param_1,0xffffffff,PTR_LAB_00560984 + 0x2f34);
    return -1;
  }
  (*(code *)PTR_apr_pool_create_ex_005609cc)(&local_34,0,0,0);
  (*(code *)(PTR_LAB_0056099c + 0x2e88))(local_34,param_1,&local_30);
  local_2c = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0xc));
  local_28 = *(undefined4 *)(param_1 + 0xc);
  local_24 = (*(code *)PTR_strlen_00561504)(*(undefined4 *)(param_1 + 0x10));
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_18 = &local_18;
  local_14 = &local_18;
  uVar2 = (*(code *)PTR_aos_buf_pack_00560a40)(local_34,param_2,param_3);
  (*(code *)(PTR_LAB_0056099c + 0x2dbc))(uVar2,&local_18);
  uVar2 = (*(code *)PTR_apr_table_make_005609d0)(local_34,0);
  local_1c = (*(code *)PTR_apr_table_make_005609d0)(local_34,0);
  iVar1 = (*(code *)PTR_strcmp_005614e4)(PTR_LAB_00560984 + 0x2f2c,*(undefined4 *)(param_1 + 0x28));
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_oss_put_object_from_buffer_00560a44)
                      (local_30,&local_2c,&local_24,&local_18,uVar2,&local_1c);
    (*(code *)(PTR_LAB_0056099c + 0x3584))(param_1,iVar1);
    (*(code *)(PTR_LAB_0056099c + 0x3084))(PTR_LAB_00560984 + 0x2fc4,iVar1,uVar2,local_1c);
    if ((iVar1 != 0) && (iVar1 = (*(code *)(PTR_LAB_0056099c + 0x2e28))(iVar1), iVar1 != 0)) {
      uVar2 = (*(code *)PTR_apr_table_get_005609dc)(local_1c,PTR_LAB_00560984 + 0x2f58);
      uVar2 = (*(code *)(PTR_LAB_0056099c + 0x341c))(uVar2);
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      uVar2 = (*(code *)PTR_apr_table_get_005609dc)(local_1c,PTR_LAB_00560984 + 0x2f68);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
LAB_00414a48:
      (*(code *)PTR_apr_pool_destroy_005609e8)(local_34);
      return param_3;
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_34);
  }
  else {
    iVar1 = (*(code *)PTR_oss_append_object_from_buffer_00560a48)(local_30,&local_2c,&local_24);
    (*(code *)(PTR_LAB_0056099c + 0x3584))(param_1,iVar1);
    if ((iVar1 != 0) && (iVar1 = (*(code *)(PTR_LAB_0056099c + 0x2e28))(iVar1), iVar1 != 0)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
      uVar2 = (*(code *)PTR_apr_table_get_005609dc)(local_1c,PTR_LAB_00560984 + 0x2f68);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      goto LAB_00414a48;
    }
    (*(code *)PTR_apr_pool_destroy_005609e8)(local_34);
  }
  return -1;
}



// ==== oss_put_object_from_buffer @ 004192d4 size=164

void oss_put_object_from_buffer
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = param_3;
  uVar1 = apr_table_make(*(undefined4 *)(param_1 + 8),0);
  FUN_004199cc(param_1,param_2,local_18,2,&local_1c,uVar1,param_5,&local_20);
  FUN_00419804(param_4,local_1c);
  FUN_00419b40(param_1,local_1c,local_20);
  *param_6 = *(undefined4 *)(local_20 + 4);
  return;
}



// ==== oss_get_object_to_buffer @ 00419378 size=168

undefined4
oss_get_object_to_buffer
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 *param_6)

{
  undefined4 uVar1;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = param_3;
  uVar1 = apr_table_make(*(undefined4 *)(param_1 + 8),0);
  FUN_004199cc(param_1,param_2,local_18,0,&local_1c,uVar1,param_4,&local_20);
  local_18 = FUN_00419b40(param_1,local_1c,local_20);
  FUN_00419884(param_5,local_20);
  *param_6 = *(undefined4 *)(local_20 + 4);
  return local_18;
}



// ==== oss_head_object @ 00419420 size=148

void oss_head_object(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 *param_5)

{
  undefined4 uVar1;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = param_3;
  uVar1 = apr_table_make(*(undefined4 *)(param_1 + 8),0);
  FUN_004199cc(param_1,param_2,local_18,1,&local_1c,uVar1,param_4,&local_20);
  FUN_00419b40(param_1,local_1c,local_20);
  *param_5 = *(undefined4 *)(local_20 + 4);
  return;
}



// ==== oss_append_object_from_buffer @ 004194b4 size=276

void oss_append_object_from_buffer(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *in_stack_00000020;
  int local_68 [16];
  undefined4 local_28 [3];
  
  uVar1 = apr_table_make(*(undefined4 *)(param_1 + 8),2);
  apr_table_add(uVar1,"append",&DAT_0053b564);
  snprintf(local_68,0x40,"%lld");
  apr_table_add(uVar1,"position",local_68);
  FUN_004198c4(in_stack_0000001c);
  FUN_004199cc(param_1,param_2,param_3,3,local_28,uVar1,in_stack_0000001c,local_68);
  FUN_00419804(in_stack_00000018,local_28[0]);
  FUN_00419b40(param_1,local_28[0],local_68[0]);
  *in_stack_00000020 = *(undefined4 *)(local_68[0] + 4);
  return;
}



// ==== oss_config_create @ 004195c8 size=40

void oss_config_create(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = apr_palloc(param_1,0x28);
  memset(uVar1,0,0x28);
  return;
}



// ==== oss_request_options_create @ 004195f0 size=192

undefined1 * oss_request_options_create(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int local_res0 [4];
  
  local_res0[0] = param_1;
  if ((param_1 == 0) && (iVar2 = apr_pool_create_ex(local_res0,0,0,0), iVar2 != 0)) {
    if (aos_log_level < 2) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      (*(code *)aos_log_format)
                (2,"src/oss_util.c",0x33,"oss_request_options_create","aos_pool_create failure.");
      puVar1 = (undefined1 *)0x0;
    }
  }
  else {
    puVar1 = (undefined1 *)apr_palloc(local_res0[0],0xc);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(int *)(puVar1 + 8) = local_res0[0];
  }
  return puVar1;
}



// ==== oss_get_canonicalized_headers @ 0041a0b0 size=632

undefined4 oss_get_canonicalized_headers(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 auStack_440 [1028];
  int local_3c;
  undefined1 *local_38;
  undefined4 *local_30;
  
  iVar2 = apr_is_empty_table(param_2);
  if (iVar2 == 0) {
    iVar2 = apr_table_elts(param_2);
    puVar6 = *(undefined4 **)(iVar2 + 0x10);
    uVar3 = apr_palloc(param_1,*(int *)(iVar2 + 8) << 2);
    local_30 = (undefined4 *)memset(uVar3,0,*(int *)(iVar2 + 8) << 2);
    iVar10 = *(int *)(iVar2 + 8);
    if (0 < iVar10) {
      iVar11 = 0;
      iVar8 = 0;
      do {
        pbVar7 = (byte *)*puVar6;
        uVar3 = strlen("x-oss-");
        iVar4 = strncasecmp(pbVar7,"x-oss-",uVar3);
        iVar9 = iVar8;
        if (iVar4 == 0) {
          iVar10 = 0;
          pbVar12 = pbVar7;
          do {
            bVar1 = *pbVar12;
            bVar5 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar5 = bVar1;
            }
            iVar10 = iVar10 + 1;
            *pbVar12 = bVar5;
            pbVar12 = pbVar12 + 1;
          } while (iVar10 != 3);
          iVar10 = *(int *)(iVar2 + 8);
          iVar9 = iVar8 + 1;
          local_30[iVar8] = pbVar7;
        }
        iVar11 = iVar11 + 1;
        puVar6 = puVar6 + 3;
        iVar8 = iVar9;
      } while (iVar11 < iVar10);
      if (iVar9 == 0) {
        return 0;
      }
      FUN_00418f5c(local_30,iVar9);
      iVar2 = 0;
      puVar6 = local_30;
      do {
        iVar2 = iVar2 + 1;
        uVar3 = apr_table_get(param_2,*puVar6);
        local_3c = strlen(uVar3);
        local_38 = (undefined1 *)uVar3;
        FUN_0041a090(&local_3c);
        iVar10 = apr_snprintf(auStack_440,0x401,"%s:%.*s",*puVar6,local_3c,local_38);
        if (0xfff < iVar10) {
          if (aos_log_level < 3) {
            return 0xfffffc1e;
          }
          (*(code *)aos_log_format)
                    (3,"src/oss_auth.c",0x54,"oss_get_canonicalized_headers",
                     "user meta header too many, %s.",auStack_440);
          return 0xfffffc1e;
        }
        local_38 = auStack_440;
        local_3c = iVar10;
        FUN_00416314(param_1,param_3,auStack_440,iVar10);
        FUN_00416314(param_1,param_3,"\n",1);
        puVar6 = puVar6 + 1;
      } while (iVar2 < iVar9);
      return 0;
    }
  }
  return 0;
}



// ==== oss_get_canonicalized_resource @ 0041a328 size=576

undefined4 oss_get_canonicalized_resource(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined1 auStack_438 [1032];
  undefined4 *local_30;
  
  iVar1 = apr_is_empty_table(param_2);
  if (iVar1 == 0) {
    iVar1 = apr_table_elts(param_2);
    puVar6 = *(undefined4 **)(iVar1 + 0x10);
    uVar2 = apr_palloc(param_1,*(int *)(iVar1 + 8) << 2);
    local_30 = (undefined4 *)memset(uVar2,0,*(int *)(iVar1 + 8) << 2);
    if (0 < *(int *)(iVar1 + 8)) {
      iVar8 = 0;
      iVar7 = 0;
      do {
        uVar2 = *puVar6;
        puVar5 = &DAT_00533ca8;
        ppuVar9 = &PTR_s_uploadId_00533e88;
        do {
          iVar3 = FUN_00447b74(puVar5,uVar2);
          if (iVar3 == 0) {
            local_30[iVar8] = *puVar6;
            iVar8 = iVar8 + 1;
            break;
          }
          puVar5 = *ppuVar9;
          ppuVar9 = ppuVar9 + 1;
        } while (puVar5 != (undefined *)0x0);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 3;
      } while (iVar7 < *(int *)(iVar1 + 8));
      if (iVar8 == 0) {
        return 0;
      }
      FUN_00418f5c(local_30,iVar8);
      uVar2 = 0x3f;
      iVar1 = 0;
      puVar6 = local_30;
      do {
        pcVar4 = (char *)apr_table_get(param_2,*puVar6);
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          iVar7 = apr_snprintf(auStack_438,0x401,&DAT_005337d4,uVar2,*puVar6);
        }
        else {
          iVar7 = apr_snprintf(auStack_438,0x401,&DAT_00533cac,uVar2,*puVar6,pcVar4);
        }
        iVar1 = iVar1 + 1;
        puVar6 = puVar6 + 1;
        if (0x3ff < iVar7) {
          if (aos_log_level < 3) {
            return 0xfffffc1e;
          }
          (*(code *)aos_log_format)
                    (3,"src/oss_auth.c",0x89,"oss_get_canonicalized_resource",
                     "http query params too long, %s.",auStack_438);
          return 0xfffffc1e;
        }
        FUN_00416314(param_1,param_3,auStack_438,iVar7);
        uVar2 = 0x26;
      } while (iVar1 < iVar8);
    }
  }
  return 0;
}



// ==== oss_get_string_to_sign @ 0041a568 size=620

int oss_get_string_to_sign
              (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
              int param_5,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  
  *param_6 = 0;
  param_6[1] = 0;
  iVar1 = FUN_00416230(param_1,0x400);
  uVar2 = FUN_0041901c(param_2);
  uVar3 = strlen(uVar2);
  FUN_00416314(param_1,iVar1,uVar2,uVar3);
  FUN_00416314(param_1,iVar1,"\n",1);
  iVar4 = apr_table_get(param_4,"Content-MD5");
  if (iVar4 != 0) {
    uVar2 = strlen(iVar4);
    FUN_00416314(param_1,iVar1,iVar4,uVar2);
  }
  FUN_00416314(param_1,iVar1,"\n",1);
  iVar4 = apr_table_get(param_4,"Content-Type");
  if (iVar4 != 0) {
    uVar2 = strlen(iVar4);
    FUN_00416314(param_1,iVar1,iVar4,uVar2);
  }
  FUN_00416314(param_1,iVar1,"\n",1);
  pcVar5 = (char *)apr_table_get(param_4,"x-oss-date");
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)apr_table_get(param_4,&DAT_00534014);
    if (pcVar5 == (char *)0x0) goto LAB_0041a6a8;
    cVar6 = *pcVar5;
  }
  else {
    cVar6 = *pcVar5;
  }
  if (cVar6 != '\0') {
    uVar2 = strlen(pcVar5);
    FUN_00416314(param_1,iVar1,pcVar5,uVar2);
    FUN_00416314(param_1,iVar1,"\n",1);
    iVar4 = oss_get_canonicalized_headers(param_1,param_4,iVar1);
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_00416314(param_1,iVar1,param_3[1],*param_3);
    if ((param_5 != 0) &&
       (iVar4 = oss_get_canonicalized_resource(param_1,param_5,iVar1), iVar4 != 0)) {
      return iVar4;
    }
    iVar4 = *(int *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 0xc);
    param_6[1] = iVar4;
    *param_6 = iVar1 - iVar4;
    return 0;
  }
LAB_0041a6a8:
  if (2 < aos_log_level) {
    (*(code *)aos_log_format)
              (3,"src/oss_auth.c",0xb4,"oss_get_string_to_sign","http header date is empty.");
  }
  return -0x3e2;
}



// ==== oss_get_signed_headers @ 0041a874 size=236

int oss_get_signed_headers
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = oss_get_string_to_sign
                    (param_1,*(undefined4 *)(param_5 + 0xc),param_4,*(undefined4 *)(param_5 + 0x18),
                     *(undefined4 *)(param_5 + 0x1c),&local_20);
  if (iVar1 == 0) {
    if (aos_log_level < 6) {
      uVar2 = *(undefined4 *)(param_5 + 0x18);
    }
    else {
      (*(code *)aos_log_format)
                (6,"src/oss_auth.c",0xea,"oss_get_signed_headers","signstr:%.*s.",local_20,local_1c)
      ;
      uVar2 = *(undefined4 *)(param_5 + 0x18);
    }
    FUN_0041a7d4(param_1,&local_20,param_2,param_3,uVar2);
    iVar1 = 0;
  }
  return iVar1;
}



// ==== oss_sign_request @ 0041a960 size=316

undefined4 oss_sign_request(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_898 [2048];
  undefined1 auStack_98 [128];
  undefined4 local_18;
  undefined1 *local_14;
  
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = strlen(uVar2);
  if (iVar1 < 0x7ff) {
    local_14 = auStack_898;
    local_18 = apr_snprintf(local_14,0x800,&DAT_00539f8c,uVar2);
    iVar1 = apr_table_get(*(undefined4 *)(param_1 + 0x18),"x-oss-date");
    if (iVar1 == 0) {
      aos_get_gmt_str_time(auStack_98);
      apr_table_set(*(undefined4 *)(param_1 + 0x18),&DAT_00534014,auStack_98);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
    }
    uVar2 = oss_get_signed_headers(uVar2,param_2 + 0xc,param_2 + 0x14,&local_18,param_1);
    return uVar2;
  }
  if (aos_log_level < 3) {
    return 0xfffffc1e;
  }
  (*(code *)aos_log_format)
            (3,"src/oss_auth.c",0xfc,"oss_sign_request","http resource too long, %s.",uVar2);
  return 0xfffffc1e;
}



