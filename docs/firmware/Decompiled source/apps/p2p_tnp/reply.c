/* p2p_tnp — "reply" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== reply_dev_info @ 0040cfb0 size=1148

undefined4 reply_dev_info(undefined4 param_1,undefined4 param_2,undefined2 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint in_t0;
  int iVar15;
  int iVar16;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204;
  undefined1 local_203;
  undefined1 local_202;
  undefined1 local_201;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined1 local_1fe;
  undefined1 local_1fd;
  undefined1 local_1fc;
  undefined1 local_1fb;
  undefined1 local_1fa;
  undefined1 local_1f9;
  undefined1 local_1f8;
  undefined1 local_1f4;
  undefined1 local_1ee;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  byte local_1d5;
  undefined1 local_1d4;
  undefined1 local_1d3;
  undefined1 local_1d2;
  undefined1 local_1d0;
  undefined1 auStack_1cd [9];
  undefined1 local_1c4;
  undefined1 local_1c3;
  undefined1 local_1c2;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0;
  undefined1 local_1af;
  undefined1 local_1ad;
  undefined1 local_1ac;
  undefined1 local_1ab;
  undefined4 local_1aa;
  uint local_1a6;
  uint local_1a2;
  uint local_19e;
  undefined4 local_19a;
  undefined4 local_196;
  uint local_192;
  uint local_18e;
  uint local_18a;
  uint local_186;
  uint local_182;
  uint local_17e;
  uint local_17a;
  undefined1 auStack_b0 [128];
  undefined4 local_30;
  
  memset(auStack_b0,0,0x80);
  uVar11 = 0;
  uVar12 = 0x158;
  memset(&local_208);
  local_208 = 8;
  local_201 = (undefined1)*(undefined4 *)(DAT_0047841c + 8);
  if (*(int *)(DAT_0047841c + 0x4b4) < 1) {
    local_1ff = 1;
  }
  local_1aa = *(undefined4 *)(DAT_0047841c + 0xa87);
  local_1a6 = *(uint *)(DAT_0047841c + 0xa8b);
  local_1a2 = *(uint *)(DAT_0047841c + 0xa8f);
  local_19e = *(uint *)(DAT_0047841c + 0xa93);
  local_19a = *(undefined4 *)(DAT_0047841c + 0xa97);
  uVar2 = DAT_0047841c + 0x197U & 3;
  local_196 = *(undefined4 *)(DAT_0047841c + 400);
  uVar3 = DAT_0047841c + 0x19bU & 3;
  uVar4 = DAT_0047841c + 0x19fU & 3;
  uVar5 = DAT_0047841c + 0x1a3U & 3;
  uVar6 = DAT_0047841c + 0x1a7U & 3;
  uVar7 = DAT_0047841c + 0x1abU & 3;
  uVar8 = DAT_0047841c + 0x1afU & 3;
  uVar9 = DAT_0047841c + 0x194U & 3;
  local_192 = (*(int *)((DAT_0047841c + 0x197U) - uVar2) << (3 - uVar2) * 8 |
              in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar9) * 8 |
              *(uint *)((DAT_0047841c + 0x194U) - uVar9) >> uVar9 * 8;
  uVar2 = DAT_0047841c + 0x198U & 3;
  local_18e = (*(int *)((DAT_0047841c + 0x19bU) - uVar3) << (3 - uVar3) * 8 |
              param_4 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)((DAT_0047841c + 0x198U) - uVar2) >> uVar2 * 8;
  uVar2 = DAT_0047841c + 0x19cU & 3;
  local_18a = (*(int *)((DAT_0047841c + 0x19fU) - uVar4) << (3 - uVar4) * 8 |
              uVar12 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)((DAT_0047841c + 0x19cU) - uVar2) >> uVar2 * 8;
  uVar12 = DAT_0047841c + 0x1a0U & 3;
  local_186 = (*(int *)((DAT_0047841c + 0x1a3U) - uVar5) << (3 - uVar5) * 8 |
              uVar11 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar12) * 8 |
              *(uint *)((DAT_0047841c + 0x1a0U) - uVar12) >> uVar12 * 8;
  uVar11 = DAT_0047841c + 0x1a4U & 3;
  local_182 = (*(int *)((DAT_0047841c + 0x1a7U) - uVar6) << (3 - uVar6) * 8 |
              local_1a6 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar11) * 8 |
              *(uint *)((DAT_0047841c + 0x1a4U) - uVar11) >> uVar11 * 8;
  uVar11 = DAT_0047841c + 0x1a8U & 3;
  local_17e = (*(int *)((DAT_0047841c + 0x1abU) - uVar7) << (3 - uVar7) * 8 |
              local_1a2 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar11) * 8 |
              *(uint *)((DAT_0047841c + 0x1a8U) - uVar11) >> uVar11 * 8;
  uVar11 = DAT_0047841c + 0x1acU & 3;
  local_17a = (*(int *)((DAT_0047841c + 0x1afU) - uVar8) << (3 - uVar8) * 8 |
              local_19e & 0xffffffffU >> (uVar8 + 1) * 8) & -1 << (4 - uVar11) * 8 |
              *(uint *)((DAT_0047841c + 0x1acU) - uVar11) >> uVar11 * 8;
  local_207 = (undefined1)*(undefined4 *)(DAT_0047841c + 0x594);
  local_200 = 0xfd;
  local_202 = 1;
  local_206 = FUN_0040acbc();
  iVar10 = DAT_0047841c;
  if (*(int *)(DAT_0047841c + 0x4b0) == 0) {
    iVar15 = *(int *)(DAT_0047841c + 0x594);
    local_1fe = 1;
  }
  else {
    local_1fe = (undefined1)*(int *)(DAT_0047841c + 0x4b0);
    iVar15 = *(int *)(DAT_0047841c + 0x594);
  }
  if (iVar15 < 1) {
    iVar15 = -iVar15;
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    local_205 = (undefined1)iVar15;
  }
  else {
    local_205 = 0;
  }
  local_204 = (undefined1)DAT_00468920;
  local_203 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  local_1e0 = FUN_00445068(*(undefined4 *)(DAT_0047841c + 0x5a4));
  local_1dc = FUN_00445068(*(undefined4 *)(iVar10 + 0x5a8));
  local_1fd = *(undefined1 *)(iVar10 + 0x933);
  local_1ad = *(undefined1 *)(iVar10 + 0x9ed);
  local_1ac = *(undefined1 *)(iVar10 + 0x9ee);
  local_1ab = *(undefined1 *)(iVar10 + 0x9ef);
  local_1fb = 1;
  local_1f4 = 0x14;
  local_1d8 = (undefined1)*(undefined4 *)(iVar10 + 0x608);
  local_1d7 = (undefined1)*(undefined4 *)(iVar10 + 0x604);
  local_1d2 = (undefined1)*(undefined4 *)(iVar10 + 0x600);
  local_1fc = 0;
  local_1fa = (undefined1)*(undefined4 *)(iVar10 + 0x4dc);
  local_1f9 = (undefined1)*(undefined4 *)(iVar10 + 0x4e0);
  local_1f8 = (undefined1)*(undefined4 *)(iVar10 + 0x4ec);
  if (DAT_0046891c == 1) {
    FUN_00440c04("ls /tmp/update/firmware_m.bin -l|awk \'{print $5}\'",auStack_b0,0x80,0x3c);
    iVar10 = atoi(auStack_b0);
    if (iVar10 < 1) {
      FUN_00440c04("ls /tmp/loadtmp/firmware_m.bin -l|awk \'{print $5}\'",auStack_b0,0x80,0x3c);
      iVar10 = atoi(auStack_b0);
      iVar10 = iVar10 * 100;
      if (iVar10 < 0xc600000) {
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0x1fffff;
        }
        local_1d5 = (byte)(iVar10 >> 0x15);
        uVar11 = iVar10 >> 0x15 & 0xff;
      }
      else {
        uVar11 = 99;
        local_1d5 = 99;
      }
    }
    else {
      local_1d5 = 100;
      uVar11 = 100;
      DAT_0046891c = 2;
    }
  }
  else {
    uVar11 = (uint)local_1d5;
  }
  dump_string("p2p_tnp.c","reply_dev_info",0xbf4,"stStreamCtrl.update_percent(%d)\n",uVar11);
  iVar10 = DAT_0047841c;
  iVar16 = 1;
  iVar13 = 0;
  local_1d6 = (undefined1)DAT_0046891c;
  local_1d4 = (undefined1)*(undefined4 *)(DAT_0047841c + 0x614);
  local_1d3 = 1;
  iVar15 = DAT_0047841c;
  do {
    while( true ) {
      local_1d0 = (undefined1)iVar13;
      piVar1 = (int *)(iVar15 + 0x8b8);
      iVar15 = iVar15 + 0xc;
      if (*piVar1 == 1) break;
      iVar16 = iVar16 + 1;
      if (iVar16 == 9) goto LAB_0040d270;
    }
    iVar14 = (iVar13 + 1) * 0x1000000;
    auStack_1cd[iVar16] = (char)iVar16;
    iVar16 = iVar16 + 1;
    iVar13 = iVar14 >> 0x18;
    local_1d0 = (undefined1)((uint)iVar14 >> 0x18);
  } while (iVar16 != 9);
LAB_0040d270:
  local_1c4 = (undefined1)*(undefined4 *)(DAT_0047841c + 0x928);
  local_1c2 = (undefined1)*(undefined4 *)(DAT_0047841c + 0x91c);
  local_1c3 = (undefined1)*(undefined4 *)(DAT_0047841c + 0x8a8);
  local_1c0 = FUN_00445068(*(undefined4 *)(DAT_0047841c + 0x8a4));
  local_1bc = FUN_00445068(*(undefined4 *)(iVar10 + 0x918));
  local_1b8 = FUN_00445068(*(undefined4 *)(iVar10 + 0x920));
  local_1b4 = FUN_00445068(*(undefined4 *)(iVar10 + 0x924));
  local_1ee = *(undefined1 *)(iVar10 + 0x9ec);
  local_1af = *(undefined1 *)(iVar10 + 0x934);
  local_1b0 = (undefined1)*(undefined4 *)(iVar10 + 0x4e4);
  local_30 = p2p_send_ctrl_data(param_1,param_2,param_3,&local_208,0x158);
  dump_string("p2p_tnp.c","reply_dev_info",0xc14,
              "reply_dev_info, ret = %d motion_track_switch =%d\n",local_30,local_1c4);
  return local_30;
}



// ==== reply_ap_mode_info @ 0040d42c size=352

undefined4 reply_ap_mode_info(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 local_118;
  undefined4 local_117 [4];
  undefined1 local_107 [17];
  undefined4 local_f6 [4];
  undefined1 local_e6 [206];
  undefined4 local_18;
  
  memset(&local_118,0,0x100);
  puVar8 = local_117;
  local_118 = *(undefined1 *)(DAT_0047841c + 0x9f0);
  puVar1 = (undefined4 *)(DAT_0047841c + 0x9f1);
  do {
    uVar6 = *puVar1;
    uVar5 = puVar1[1];
    uVar7 = puVar1[2];
    uVar3 = puVar1[3];
    puVar1 = puVar1 + 4;
    *puVar8 = uVar6;
    puVar8[1] = uVar5;
    puVar8[2] = uVar7;
    puVar8[3] = uVar3;
    puVar8 = puVar8 + 4;
  } while (puVar1 != (undefined4 *)(DAT_0047841c + 0xa11));
  puVar4 = (undefined4 *)(DAT_0047841c + 0xa12);
  puVar2 = local_f6;
  *(undefined1 *)puVar8 = *(undefined1 *)puVar1;
  do {
    uVar6 = *puVar4;
    uVar5 = puVar4[1];
    uVar3 = puVar4[2];
    uVar7 = puVar4[3];
    puVar4 = puVar4 + 4;
    *puVar2 = uVar6;
    puVar2[1] = uVar5;
    puVar2[2] = uVar3;
    puVar2[3] = uVar7;
    puVar2 = puVar2 + 4;
  } while (puVar4 != (undefined4 *)(DAT_0047841c + 0xa32));
  *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
  local_18 = p2p_send_ctrl_data(param_1,param_2,param_3,&local_118,0x100);
  dump_string("p2p_tnp.c","reply_ap_mode_info",0xc3e,"reply_ap_mode_info, ret = %d\n",local_18);
  return local_18;
}



// ==== reply_factory_test_info @ 0040d58c size=244

undefined4 reply_factory_test_info(undefined4 param_1,undefined2 param_2)

{
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
  undefined4 local_20;
  
  local_58 = 0;
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
  local_28 = 0;
  snprintf(&local_58,0x20,"%s",DAT_0047841c + 400);
  snprintf(&local_38,0x14,"%s",DAT_0047841c + 0x360);
  local_20 = p2p_send_ctrl_data(param_1,0x6ff2,param_2,&local_58,0x34);
  dump_string("p2p_tnp.c","reply_factory_test_info",0xc49,
              "IOTYPE_USER_IPCAM_GET_FACTORY_TEST_INFO_RESP, ret = %d\n",local_20);
  return local_20;
}



// ==== reply_event_list @ 0040d680 size=888

undefined4 reply_event_list(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ushort *puVar15;
  undefined4 local_a90;
  undefined4 local_a8c;
  undefined4 local_a88;
  undefined1 auStack_a84 [1012];
  ushort local_690 [480];
  int local_2d0 [160];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40 [2];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_38 = param_2 & 0xffff;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  memset(&local_a90,0,0x400);
  local_40[0] = 0;
  if (*(int *)(DAT_0047841c + 0x5a4) == 0) {
    local_48._0_2_ = CONCAT11(1,(undefined1)local_48);
    uVar2 = p2p_send_ctrl_data(param_1,0x319,local_38,&local_50,0xc);
    dump_string("p2p_tnp.c","reply_event_list",0xc64,"IOTYPE_USER_IPCAM_LISTEVENT_RESP, ret = %d\n",
                uVar2);
    return uVar2;
  }
  event_log_seach(0,0x7fffffff,0xffffffff,local_40);
  if ((int)local_40[0] < 1) {
    uVar2 = 0;
  }
  else {
    uVar12 = local_40[0];
    iVar13 = 0;
    do {
      uVar3 = 0x50;
      if ((int)uVar12 < 0x51) {
        uVar3 = uVar12;
      }
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      event_log_get(local_40[0] - uVar12,uVar3,local_2d0);
      uVar5 = 0;
      if ((int)uVar3 < 1) {
        local_30 = 0;
      }
      else {
        uVar5 = 0;
        piVar14 = local_2d0;
        puVar15 = local_690;
        do {
          local_44 = *piVar14;
          uVar5 = uVar5 + 1;
          puVar1 = (undefined4 *)gmtime(&local_44);
          iVar6 = piVar14[1];
          iVar4 = *piVar14;
          uVar11 = puVar1[4];
          uVar10 = puVar1[3];
          uVar9 = puVar1[2];
          uVar8 = puVar1[1];
          uVar7 = *puVar1;
          uVar2 = puVar1[6];
          *puVar15 = (ushort)((uint)(puVar1[5] + 0x76c) >> 8) & 0xff |
                     (short)(puVar1[5] + 0x76c) * 0x100;
          *(char *)(puVar15 + 1) = (char)uVar11 + '\x01';
          *(char *)((int)puVar15 + 3) = (char)uVar10;
          *(char *)((int)puVar15 + 5) = (char)uVar9;
          *(char *)(puVar15 + 3) = (char)uVar8;
          *(char *)((int)puVar15 + 7) = (char)uVar7;
          *(char *)(puVar15 + 2) = (char)uVar2;
          *(undefined1 *)(puVar15 + 4) = 1;
          *(undefined1 *)((int)puVar15 + 9) = 1;
          puVar15[5] = (ushort)((uint)(iVar6 - iVar4) >> 8) & 0xff | (short)(iVar6 - iVar4) * 0x100;
          piVar14 = piVar14 + 2;
          puVar15 = puVar15 + 6;
        } while (uVar5 != uVar3);
        uVar5 = uVar3 & 0xff;
        local_30 = uVar3;
      }
      local_50 = 0;
      uVar12 = uVar12 - uVar3;
      local_34 = local_40[0];
      local_2c = uVar5;
      local_4c = FUN_00445068(local_40[0]);
      uVar2 = local_48;
      local_48._0_2_ = (ushort)local_2c & 0xff;
      local_48._3_1_ = SUB41(uVar2,3);
      if (uVar12 == 0) {
        local_48._0_2_ = CONCAT11(1,(char)local_2c);
      }
      local_48 = CONCAT22((short)(CONCAT13(local_48._3_1_,CONCAT12((char)uVar3,(ushort)local_2c)) >>
                                 0x10),(ushort)local_48);
      iVar4 = iVar13 + 1;
      dump_string("p2p_tnp.c","reply_event_list",0xc94,
                  "i(%d) j(%d) eventcount(%d) eventnum(%d) leftevent(%d) eventcount(%d) endflag(%d)\n "
                  ,local_30,iVar13,uVar3,local_34,uVar12,uVar3,uVar12 == 0);
      local_a90 = local_50;
      local_a8c = local_4c;
      local_a88 = local_48;
      memcpy(auStack_a84,local_690,uVar3 * 0xc);
      uVar2 = p2p_send_ctrl_data(param_1,0x319,local_38,&local_a90,uVar3 * 0xc + 0xc);
      dump_string("p2p_tnp.c","reply_event_list",0xc9d,
                  "IOTYPE_USER_IPCAM_LISTEVENT_RESP, ret = %d\n",uVar2);
      iVar13 = iVar4;
    } while (iVar4 < (int)(local_40[0] + 0x4f) / 0x50);
  }
  return uVar2;
}



