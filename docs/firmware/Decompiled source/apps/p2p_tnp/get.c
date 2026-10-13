/* p2p_tnp — "get" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== get_video_replay_frame @ 004096e0 size=416

int get_video_replay_frame
              (byte *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2[3] < param_2[1]) {
    dump_string("p2p_tnp.c","get_video_replay_frame",0x499,
                "change file video_sampleid(%d) video_totalsample(%d)\n",param_2[1],param_2[3]);
    close_replay_frame(param_2);
    iVar4 = -1;
  }
  else {
    if (param_5 < 1) {
      param_5 = 1;
    }
    if (param_2[8] != 0) {
      iVar4 = FUN_0044177c();
      if (param_5 == 0) {
        trap(0x1c00);
      }
      if (((uint)((param_2[1] - param_2[2]) * (*param_2 / param_5)) < (uint)(iVar4 - param_2[0xb]))
         && (iVar4 = FUN_004402b8(param_2[8],param_2[9],param_2[1],param_1,param_3,param_4),
            0 < iVar4)) {
        param_2[1] = param_2[1] + 1;
        for (iVar6 = iVar4; 3 < iVar6; iVar6 = iVar6 + (-4 - uVar5)) {
          bVar1 = *param_1;
          bVar2 = param_1[1];
          bVar3 = param_1[2];
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          uVar5 = (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)param_1[3] | (uint)bVar3 << 8;
          param_1[3] = 1;
          param_1 = param_1 + uVar5 + 4;
        }
        return iVar4 + 4;
      }
    }
    iVar4 = 0;
  }
  return iVar4;
}



// ==== get_resolution @ 0040dbd4 size=212

undefined4 get_resolution(int param_1,undefined2 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(&DAT_0047844c + param_1 * 0xdc8) == 1) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00445068(*(int *)(&DAT_00478444 + param_1 * 0xdc8) + 1);
  }
  local_1c = FUN_00445068(*(undefined4 *)(&DAT_00478440 + param_1 * 0xdc8));
  local_18 = p2p_send_ctrl_data(param_1,0x1314,param_2,&local_20,8);
  dump_string("p2p_tnp.c","get_resolution",0xd15,"IOTYPE_USER_IPCAM_GET_RESOLUTION_RESP, ret = %d\n"
              ,local_18);
  return local_18;
}



// ==== get_record_speed @ 0040ddb4 size=208

undefined4 get_record_speed(int param_1,undefined2 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(&DAT_00478450 + param_1 * 0xdc8) == 0) {
    local_20 = 0x1000000;
  }
  else {
    local_20 = FUN_00445068();
  }
  local_1c = FUN_00445068(*(undefined4 *)(&DAT_00478440 + param_1 * 0xdc8));
  local_18 = p2p_send_ctrl_data(param_1,0x133a,param_2,&local_20,8);
  dump_string("p2p_tnp.c","get_record_speed",0xd47,
              "IOTYPE_USER_IPCAM_GET_RECORD_SPEED_RESP, ret = %d\n",local_18);
  return local_18;
}



// ==== get_version @ 0040de84 size=136

undefined4 get_version(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0047841c + 400;
  uVar1 = strlen(iVar2);
  uVar1 = p2p_send_ctrl_data(param_1,0x1301,param_2,iVar2,uVar1);
  dump_string("p2p_tnp.c","get_version",0xd52,"IOTYPE_USER_IPCAM_GET_VERSION_RESP, ret = %d\n",uVar1
             );
  return 0;
}



// ==== get_filename_by_time @ 00440fd4 size=676

int get_filename_by_time(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_res0 [4];
  int local_28 [3];
  
  local_28[0] = 0;
  local_res0[0] = param_1;
  if ((__bss_start != (int *)0x0) ||
     (__bss_start = (int *)FUN_00440e78("/tmp/record_event",0x8010), __bss_start != (int *)0x0)) {
    if (*__bss_start == 0) {
LAB_00441094:
      uVar1 = ctime(local_res0);
      printf(&DAT_0044fdec,"get_filename_by_time",0x27b,uVar1);
    }
    else {
      uVar7 = __bss_start[2] + 1;
      if (__bss_start[uVar7 * 2 + 2] < local_res0[0]) {
        iVar3 = 0;
        do {
          uVar8 = uVar7 & 0x80000fff;
          uVar7 = uVar8 + 1;
          if ((int)uVar8 < 0) {
            uVar7 = (uVar8 - 1 | 0xfffff000) + 2;
          }
          if (iVar3 == *__bss_start + -1) goto LAB_00441094;
          iVar3 = iVar3 + 1;
        } while (__bss_start[uVar7 * 2 + 2] < local_res0[0]);
      }
      iVar4 = __bss_start[uVar7 * 2 + 1];
      iVar6 = __bss_start[uVar7 * 2 + 2];
      iVar3 = (local_res0[0] / 0x3c) * 0x3c;
      iVar5 = iVar4;
      if (iVar4 <= iVar3) {
        iVar5 = iVar3;
      }
      local_28[0] = iVar5;
      printf(&DAT_0044fd48,"get_filename_by_time",0x25a,iVar4,iVar6);
      puVar2 = (undefined4 *)localtime(local_28);
      iVar3 = ((iVar5 + 0x3c) / 0x3c) * 0x3c + -1;
      if (iVar3 <= iVar6) {
        iVar6 = iVar3;
      }
      snprintf(param_2,param_3,"%s/%04dY%02dM%02dD%02dH/%02dM%02dS%02d.mp4","/tmp/sd/record",
               puVar2[5] + 0x76c,puVar2[4] + 1,puVar2[3],puVar2[2],puVar2[1],*puVar2,
               (iVar6 - iVar5) + 1);
      iVar3 = access(param_2,0);
      if (iVar3 == 0) {
        printf(&DAT_0044fda8,"get_filename_by_time",0x271,param_2);
        return local_28[0];
      }
      printf(&DAT_0044fdc8,"get_filename_by_time",0x276,param_2);
    }
  }
  return -1;
}



