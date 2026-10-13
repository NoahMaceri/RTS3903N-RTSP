/* wifi_conf — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "wifi_conf.h"

// ==== FUN_004007b0 @ 004007b0 size=64

/* WARNING: Removing unreachable block (ram,0x004007d0) */
/* WARNING: Removing unreachable block (ram,0x004007e0) */

void FUN_004007b0(void)

{
  return;
}



// ==== FUN_004007f0 @ 004007f0 size=76

/* WARNING: Removing unreachable block (ram,0x0040081c) */
/* WARNING: Removing unreachable block (ram,0x0040082c) */

void FUN_004007f0(void)

{
  return;
}



// ==== FUN_0040083c @ 0040083c size=176

/* WARNING: Removing unreachable block (ram,0x0040089c) */

void FUN_0040083c(void)

{
  if (DAT_00426ca0 == '\0') {
    FUN_004007b0();
    DAT_00426ca0 = '\x01';
  }
  return;
}



// ==== FUN_004008ec @ 004008ec size=60

/* WARNING: Removing unreachable block (ram,0x00400908) */

void FUN_004008ec(void)

{
  FUN_004007f0();
  return;
}



// ==== FUN_00400930 @ 00400930 size=3852

undefined4 FUN_00400930(byte *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  char *pcVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort uVar19;
  ushort uVar20;
  char *pcVar21;
  char *pcVar22;
  uint uVar23;
  char *pcVar24;
  undefined1 auStack_ce98 [51200];
  undefined4 local_698;
  char local_694 [4];
  char local_690 [2];
  undefined2 uStack_68e;
  char local_68c [2];
  undefined2 uStack_68a;
  char local_688 [2];
  char acStack_686 [1006];
  undefined2 local_298;
  ushort local_198 [128];
  undefined1 local_98 [132];
  
  memset(local_98,0,0x80);
  memset(auStack_ce98,0,0xc800);
  memset(&local_698,0,0x400);
  pcVar24 = (char *)&local_698;
  pcVar21 = "ctrl_interface=/var/run/wpa_supplicant\nap_scan=1\n";
  do {
    pcVar22 = pcVar21 + 0x10;
    pcVar5 = pcVar24 + 0x10;
    uVar16 = *(undefined4 *)(pcVar21 + 4);
    uVar15 = *(undefined4 *)(pcVar21 + 8);
    uVar14 = *(undefined4 *)(pcVar21 + 0xc);
    *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
    *(undefined4 *)(pcVar24 + 4) = uVar16;
    *(undefined4 *)(pcVar24 + 8) = uVar15;
    *(undefined4 *)(pcVar24 + 0xc) = uVar14;
    pcVar24 = pcVar5;
    pcVar21 = pcVar22;
  } while (pcVar22 != "\n");
  *(undefined2 *)pcVar5 = s_licant_ap_scan_1_004019f8._16_2_;
  strncat(auStack_ce98,&local_698,0x31);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    local_694[0] = s_network___00401a0c[4];
    local_694[1] = s_network___00401a0c[5];
    local_694[2] = s_network___00401a0c[6];
    local_694[3] = s_network___00401a0c[7];
    local_698._0_1_ = s_network___00401a0c[0];
    local_698._1_1_ = s_network___00401a0c[1];
    local_698._2_1_ = s_network___00401a0c[2];
    local_698._3_1_ = s_network___00401a0c[3];
    _local_690 = CONCAT22(CONCAT11(uStack_68e._1_1_,s_network___00401a0c[10]),
                          s_network___00401a0c._8_2_);
    strncat(auStack_ce98,&local_698,10);
    snprintf(&local_698,0x400,"ssid=\"%s\"\n",param_1);
    uVar14 = strlen(&local_698);
    strncat(auStack_ce98,&local_698,uVar14);
    local_698._0_1_ = s_scan_ssid_1_00401a24[0];
    local_698._1_1_ = s_scan_ssid_1_00401a24[1];
    local_698._2_1_ = s_scan_ssid_1_00401a24[2];
    local_698._3_1_ = s_scan_ssid_1_00401a24[3];
    local_694[0] = s_scan_ssid_1_00401a24[4];
    local_694[1] = s_scan_ssid_1_00401a24[5];
    local_694[2] = s_scan_ssid_1_00401a24[6];
    local_694[3] = s_scan_ssid_1_00401a24[7];
    _local_68c = CONCAT31(stack0xfffff975,s_scan_ssid_1_00401a24[0xc]);
    local_690[0] = s_scan_ssid_1_00401a24[8];
    local_690[1] = s_scan_ssid_1_00401a24[9];
    uStack_68e._0_1_ = s_scan_ssid_1_00401a24[10];
    uStack_68e._1_1_ = s_scan_ssid_1_00401a24[0xb];
    strncat(auStack_ce98,&local_698,0xc);
    uVar14 = 0xe;
    local_698._0_1_ = s_key_mgmt_NONE_00401a34[0];
    local_698._1_1_ = s_key_mgmt_NONE_00401a34[1];
    local_698._2_1_ = s_key_mgmt_NONE_00401a34[2];
    local_698._3_1_ = s_key_mgmt_NONE_00401a34[3];
    local_694[0] = s_key_mgmt_NONE_00401a34[4];
    local_694[1] = s_key_mgmt_NONE_00401a34[5];
    local_694[2] = s_key_mgmt_NONE_00401a34[6];
    local_694[3] = s_key_mgmt_NONE_00401a34[7];
    local_690[0] = s_key_mgmt_NONE_00401a34[8];
    local_690[1] = s_key_mgmt_NONE_00401a34[9];
    uStack_68e._0_1_ = s_key_mgmt_NONE_00401a34[10];
    uStack_68e._1_1_ = s_key_mgmt_NONE_00401a34[0xb];
    uStack_68a._0_1_ = s_key_mgmt_NONE_00401a34[0xe];
    local_68c[0] = s_key_mgmt_NONE_00401a34[0xc];
    local_68c[1] = s_key_mgmt_NONE_00401a34[0xd];
LAB_00400e5c:
    strncat(auStack_ce98,&local_698,uVar14);
    local_698 = CONCAT13(local_698._3_1_,0xa7d);
    strncat(auStack_ce98,&local_698,2);
    bVar4 = false;
  }
  else {
    uVar6 = strlen(param_2);
    if (uVar6 < 8) {
LAB_00400a28:
      uVar6 = strlen(param_2);
      if ((uVar6 & 0xfffffff7) == 5) {
        local_694[0] = s_network___00401a0c[4];
        local_694[1] = s_network___00401a0c[5];
        local_694[2] = s_network___00401a0c[6];
        local_694[3] = s_network___00401a0c[7];
        local_698._0_1_ = s_network___00401a0c[0];
        local_698._1_1_ = s_network___00401a0c[1];
        local_698._2_1_ = s_network___00401a0c[2];
        local_698._3_1_ = s_network___00401a0c[3];
        _local_690 = CONCAT22(CONCAT11(uStack_68e._1_1_,s_network___00401a0c[10]),
                              s_network___00401a0c._8_2_);
        strncat(auStack_ce98,&local_698,10);
        snprintf(&local_698,0x400,"ssid=\"%s\"\n",param_1);
        uVar14 = strlen(&local_698);
        strncat(auStack_ce98,&local_698,uVar14);
        local_698._0_1_ = s_scan_ssid_1_00401a24[0];
        local_698._1_1_ = s_scan_ssid_1_00401a24[1];
        local_698._2_1_ = s_scan_ssid_1_00401a24[2];
        local_698._3_1_ = s_scan_ssid_1_00401a24[3];
        local_694[0] = s_scan_ssid_1_00401a24[4];
        local_694[1] = s_scan_ssid_1_00401a24[5];
        local_694[2] = s_scan_ssid_1_00401a24[6];
        local_694[3] = s_scan_ssid_1_00401a24[7];
        _local_68c = CONCAT31(stack0xfffff975,s_scan_ssid_1_00401a24[0xc]);
        local_690[0] = s_scan_ssid_1_00401a24[8];
        local_690[1] = s_scan_ssid_1_00401a24[9];
        uStack_68e._0_1_ = s_scan_ssid_1_00401a24[10];
        uStack_68e._1_1_ = s_scan_ssid_1_00401a24[0xb];
        strncat(auStack_ce98,&local_698,0xc);
        local_694[0] = s_key_mgmt_NONE_00401a34[4];
        local_694[1] = s_key_mgmt_NONE_00401a34[5];
        local_694[2] = s_key_mgmt_NONE_00401a34[6];
        local_694[3] = s_key_mgmt_NONE_00401a34[7];
        local_698._0_1_ = s_key_mgmt_NONE_00401a34[0];
        local_698._1_1_ = s_key_mgmt_NONE_00401a34[1];
        local_698._2_1_ = s_key_mgmt_NONE_00401a34[2];
        local_698._3_1_ = s_key_mgmt_NONE_00401a34[3];
        local_690[0] = s_key_mgmt_NONE_00401a34[8];
        local_690[1] = s_key_mgmt_NONE_00401a34[9];
        uStack_68e._0_1_ = s_key_mgmt_NONE_00401a34[10];
        uStack_68e._1_1_ = s_key_mgmt_NONE_00401a34[0xb];
        _local_68c = CONCAT12(s_key_mgmt_NONE_00401a34[0xe],s_key_mgmt_NONE_00401a34._12_2_);
        strncat(auStack_ce98,&local_698,0xe);
        pcVar24 = "wep_key0=\"%s\"\n";
LAB_004014f8:
        snprintf(&local_698,0x400,pcVar24,param_2);
        uVar14 = strlen(&local_698);
        strncat(auStack_ce98,&local_698,uVar14);
        local_698._0_1_ = s_wep_tx_keyidx_0_00401aa4[0];
        local_698._1_1_ = s_wep_tx_keyidx_0_00401aa4[1];
        local_698._2_1_ = s_wep_tx_keyidx_0_00401aa4[2];
        local_698._3_1_ = s_wep_tx_keyidx_0_00401aa4[3];
        local_694[0] = s_wep_tx_keyidx_0_00401aa4[4];
        local_694[1] = s_wep_tx_keyidx_0_00401aa4[5];
        local_694[2] = s_wep_tx_keyidx_0_00401aa4[6];
        local_694[3] = s_wep_tx_keyidx_0_00401aa4[7];
        uVar14 = 0x10;
        local_690[0] = s_wep_tx_keyidx_0_00401aa4[8];
        local_690[1] = s_wep_tx_keyidx_0_00401aa4[9];
        uStack_68e._0_1_ = s_wep_tx_keyidx_0_00401aa4[10];
        uStack_68e._1_1_ = s_wep_tx_keyidx_0_00401aa4[0xb];
        local_68c[0] = s_wep_tx_keyidx_0_00401aa4[0xc];
        local_68c[1] = s_wep_tx_keyidx_0_00401aa4[0xd];
        uStack_68a._0_1_ = s_wep_tx_keyidx_0_00401aa4[0xe];
        uStack_68a._1_1_ = s_wep_tx_keyidx_0_00401aa4[0xf];
        local_688[0] = s_wep_tx_keyidx_0_00401aa4[0x10];
        goto LAB_00400e5c;
      }
      if ((uVar6 & 0xffffffef) != 10) goto LAB_00400a54;
      if ((*(ushort *)(__ctype_b + *param_2 * 2) & 0x10) != 0) {
        for (uVar23 = 1; uVar23 < uVar6; uVar23 = uVar23 + 1) {
          bVar4 = true;
          if ((*(ushort *)(__ctype_b + param_2[uVar23] * 2) & 0x10) == 0) goto LAB_00400a58;
        }
        local_694[0] = s_network___00401a0c[4];
        local_694[1] = s_network___00401a0c[5];
        local_694[2] = s_network___00401a0c[6];
        local_694[3] = s_network___00401a0c[7];
        local_698._0_1_ = s_network___00401a0c[0];
        local_698._1_1_ = s_network___00401a0c[1];
        local_698._2_1_ = s_network___00401a0c[2];
        local_698._3_1_ = s_network___00401a0c[3];
        _local_690 = CONCAT22(CONCAT11(uStack_68e._1_1_,s_network___00401a0c[10]),
                              s_network___00401a0c._8_2_);
        strncat(auStack_ce98,&local_698,10);
        snprintf(&local_698,0x400,"ssid=\"%s\"\n",param_1);
        uVar14 = strlen(&local_698);
        strncat(auStack_ce98,&local_698,uVar14);
        local_698._0_1_ = s_scan_ssid_1_00401a24[0];
        local_698._1_1_ = s_scan_ssid_1_00401a24[1];
        local_698._2_1_ = s_scan_ssid_1_00401a24[2];
        local_698._3_1_ = s_scan_ssid_1_00401a24[3];
        local_694[0] = s_scan_ssid_1_00401a24[4];
        local_694[1] = s_scan_ssid_1_00401a24[5];
        local_694[2] = s_scan_ssid_1_00401a24[6];
        local_694[3] = s_scan_ssid_1_00401a24[7];
        _local_68c = CONCAT31(stack0xfffff975,s_scan_ssid_1_00401a24[0xc]);
        local_690[0] = s_scan_ssid_1_00401a24[8];
        local_690[1] = s_scan_ssid_1_00401a24[9];
        uStack_68e._0_1_ = s_scan_ssid_1_00401a24[10];
        uStack_68e._1_1_ = s_scan_ssid_1_00401a24[0xb];
        strncat(auStack_ce98,&local_698,0xc);
        local_694[0] = s_key_mgmt_NONE_00401a34[4];
        local_694[1] = s_key_mgmt_NONE_00401a34[5];
        local_694[2] = s_key_mgmt_NONE_00401a34[6];
        local_694[3] = s_key_mgmt_NONE_00401a34[7];
        local_698._0_1_ = s_key_mgmt_NONE_00401a34[0];
        local_698._1_1_ = s_key_mgmt_NONE_00401a34[1];
        local_698._2_1_ = s_key_mgmt_NONE_00401a34[2];
        local_698._3_1_ = s_key_mgmt_NONE_00401a34[3];
        local_690[0] = s_key_mgmt_NONE_00401a34[8];
        local_690[1] = s_key_mgmt_NONE_00401a34[9];
        uStack_68e._0_1_ = s_key_mgmt_NONE_00401a34[10];
        uStack_68e._1_1_ = s_key_mgmt_NONE_00401a34[0xb];
        _local_68c = CONCAT12(s_key_mgmt_NONE_00401a34[0xe],s_key_mgmt_NONE_00401a34._12_2_);
        strncat(auStack_ce98,&local_698,0xe);
        pcVar24 = "wep_key0=%s\n";
        goto LAB_004014f8;
      }
      bVar4 = true;
    }
    else {
      local_694[0] = s_network___00401a0c[4];
      local_694[1] = s_network___00401a0c[5];
      local_694[2] = s_network___00401a0c[6];
      local_694[3] = s_network___00401a0c[7];
      local_698._0_1_ = s_network___00401a0c[0];
      local_698._1_1_ = s_network___00401a0c[1];
      local_698._2_1_ = s_network___00401a0c[2];
      local_698._3_1_ = s_network___00401a0c[3];
      _local_690 = CONCAT22(CONCAT11(uStack_68e._1_1_,s_network___00401a0c[10]),
                            s_network___00401a0c._8_2_);
      strncat(auStack_ce98,&local_698,10);
      snprintf(&local_698,0x400,"ssid=\"%s\"\n",param_1);
      uVar14 = strlen(&local_698);
      strncat(auStack_ce98,&local_698,uVar14);
      local_698._0_1_ = s_scan_ssid_1_00401a24[0];
      local_698._1_1_ = s_scan_ssid_1_00401a24[1];
      local_698._2_1_ = s_scan_ssid_1_00401a24[2];
      local_698._3_1_ = s_scan_ssid_1_00401a24[3];
      local_68c[0] = s_scan_ssid_1_00401a24[0xc];
      local_694[0] = s_scan_ssid_1_00401a24[4];
      local_694[1] = s_scan_ssid_1_00401a24[5];
      local_694[2] = s_scan_ssid_1_00401a24[6];
      local_694[3] = s_scan_ssid_1_00401a24[7];
      local_690[0] = s_scan_ssid_1_00401a24[8];
      local_690[1] = s_scan_ssid_1_00401a24[9];
      uStack_68e._0_1_ = s_scan_ssid_1_00401a24[10];
      uStack_68e._1_1_ = s_scan_ssid_1_00401a24[0xb];
      strncat(auStack_ce98,&local_698,0xc);
      pcVar24 = (char *)&local_698;
      pcVar21 = "proto=WPA RSN\nkey_mgmt=WPA-PSK\npairwise=CCMP TKIP\ngroup=CCMP TKIP\n";
      do {
        pcVar22 = pcVar21;
        pcVar5 = pcVar24;
        uVar16 = *(undefined4 *)(pcVar22 + 4);
        uVar15 = *(undefined4 *)(pcVar22 + 8);
        uVar14 = *(undefined4 *)(pcVar22 + 0xc);
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar22;
        *(undefined4 *)(pcVar5 + 4) = uVar16;
        *(undefined4 *)(pcVar5 + 8) = uVar15;
        *(undefined4 *)(pcVar5 + 0xc) = uVar14;
        pcVar24 = pcVar5 + 0x10;
        pcVar21 = pcVar22 + 0x10;
      } while (pcVar22 + 0x10 != "P\n");
      pcVar5[0x12] = pcVar22[0x12];
      *(undefined2 *)(pcVar5 + 0x10) = s_proto_WPA_RSN_key_mgmt_WPA_PSK_p_00401a44._64_2_;
      strncat(auStack_ce98,&local_698,0x42);
      if (*param_2 != '\0') {
        snprintf(&local_698,0x400,"psk=\"%s\"\n",param_2);
        uVar14 = strlen(&local_698);
        strncat(auStack_ce98,&local_698,uVar14);
      }
      local_698 = CONCAT13(local_698._3_1_,0xa7d);
      strncat(auStack_ce98,&local_698,2);
      if (*param_2 != '\0') goto LAB_00400a28;
LAB_00400a54:
      bVar4 = false;
    }
  }
LAB_00400a58:
  memset(local_198,0,0x100);
  memset(&local_298,0,0x100);
  uVar19 = (ushort)*param_1;
  if (uVar19 != 0) {
    puVar17 = local_198;
    puVar7 = puVar17;
    pbVar12 = param_1;
    iVar9 = 0;
    do {
      while (iVar10 = iVar9, uVar20 = uVar19 & 0x1f, -1 < (char)uVar19) {
        pbVar13 = pbVar12 + 1;
        *puVar7 = uVar19 | *puVar7;
LAB_00400ab8:
        uVar19 = (ushort)*pbVar13;
        puVar7 = puVar7 + 1;
        pbVar12 = pbVar13;
        iVar9 = iVar10 + 1;
        if (uVar19 == 0) goto LAB_00400b14;
      }
      if (0xdf < uVar19) {
        if (uVar19 < 0xf0) {
          pbVar13 = pbVar12 + 3;
          *puVar7 = pbVar12[2] & 0x3f | *puVar7 | (ushort)*pbVar12 << 0xc | (pbVar12[1] & 0x3f) << 6
          ;
          goto LAB_00400ab8;
        }
        goto LAB_00400c28;
      }
      uVar19 = (ushort)pbVar12[2];
      *puVar7 = pbVar12[1] & 0x3f | *puVar7 | uVar20 << 6;
      puVar7 = puVar7 + 1;
      pbVar12 = pbVar12 + 2;
      iVar9 = iVar10 + 1;
    } while (uVar19 != 0);
LAB_00400b14:
    iVar10 = iVar10 + 1;
    if (0 < iVar10) {
      puVar18 = puVar17 + iVar10;
      puVar7 = &local_298;
      do {
        uVar19 = *puVar17;
        if ((uVar19 & 0xff00) == 0) {
          *puVar7 = uVar19;
        }
        else {
          uVar20 = _fdata;
          if (DAT_00426c50 != 0) {
            if (uVar19 == DAT_00412062) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              puVar8 = &DAT_00412066;
              do {
                uVar6 = uVar6 + 1;
                if (uVar6 == DAT_00426c50) goto LAB_00400b98;
                uVar3 = *puVar8;
                puVar8 = puVar8 + 2;
              } while (uVar3 != uVar19);
            }
            uVar20 = (&_fdata)[uVar6 * 2];
          }
LAB_00400b98:
          *puVar7 = uVar20;
        }
        puVar17 = puVar17 + 1;
        puVar7 = puVar7 + 1;
      } while (puVar17 != puVar18);
      puVar17 = &local_298;
      puVar7 = &local_298 + iVar10;
      iVar9 = 0;
      do {
        while( true ) {
          uVar19 = *puVar17;
          if (uVar19 < 0xa1a1) break;
          uVar19 = *puVar17;
          uVar2 = *(undefined1 *)((int)puVar17 + 1);
          puVar17 = puVar17 + 1;
          local_98[iVar9] = (char)uVar19;
          local_98[iVar9 + 1] = uVar2;
          iVar9 = iVar9 + 2;
          if (puVar17 == puVar7) goto LAB_00400c28;
        }
        if (uVar19 < 0x80) {
          local_98[iVar9] = (char)uVar19;
          iVar9 = iVar9 + 1;
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar7);
    }
  }
LAB_00400c28:
  iVar9 = strcmp(param_1,local_98);
  if (iVar9 != 0) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      local_694[0] = s_network___00401a0c[4];
      local_694[1] = s_network___00401a0c[5];
      local_694[2] = s_network___00401a0c[6];
      local_694[3] = s_network___00401a0c[7];
      local_698._0_1_ = s_network___00401a0c[0];
      local_698._1_1_ = s_network___00401a0c[1];
      local_698._2_1_ = s_network___00401a0c[2];
      local_698._3_1_ = s_network___00401a0c[3];
      _local_690 = CONCAT22(CONCAT11(uStack_68e._1_1_,s_network___00401a0c[10]),
                            s_network___00401a0c._8_2_);
      strncat(auStack_ce98,&local_698,10);
      snprintf(&local_698,0x400,"ssid=\"%s\"\n",local_98);
      uVar14 = strlen(&local_698);
      strncat(auStack_ce98,&local_698,uVar14);
      local_698._0_1_ = s_scan_ssid_1_00401a24[0];
      local_698._1_1_ = s_scan_ssid_1_00401a24[1];
      local_698._2_1_ = s_scan_ssid_1_00401a24[2];
      local_698._3_1_ = s_scan_ssid_1_00401a24[3];
      local_694[0] = s_scan_ssid_1_00401a24[4];
      local_694[1] = s_scan_ssid_1_00401a24[5];
      local_694[2] = s_scan_ssid_1_00401a24[6];
      local_694[3] = s_scan_ssid_1_00401a24[7];
      _local_68c = CONCAT31(stack0xfffff975,s_scan_ssid_1_00401a24[0xc]);
      local_690[0] = s_scan_ssid_1_00401a24[8];
      local_690[1] = s_scan_ssid_1_00401a24[9];
      uStack_68e._0_1_ = s_scan_ssid_1_00401a24[10];
      uStack_68e._1_1_ = s_scan_ssid_1_00401a24[0xb];
      strncat(auStack_ce98,&local_698,0xc);
      local_698._0_1_ = s_key_mgmt_NONE_00401a34[0];
      local_698._1_1_ = s_key_mgmt_NONE_00401a34[1];
      local_698._2_1_ = s_key_mgmt_NONE_00401a34[2];
      local_698._3_1_ = s_key_mgmt_NONE_00401a34[3];
      local_694[0] = s_key_mgmt_NONE_00401a34[4];
      local_694[1] = s_key_mgmt_NONE_00401a34[5];
      local_694[2] = s_key_mgmt_NONE_00401a34[6];
      local_694[3] = s_key_mgmt_NONE_00401a34[7];
      local_690[0] = s_key_mgmt_NONE_00401a34[8];
      local_690[1] = s_key_mgmt_NONE_00401a34[9];
      uStack_68e._0_1_ = s_key_mgmt_NONE_00401a34[10];
      uStack_68e._1_1_ = s_key_mgmt_NONE_00401a34[0xb];
      uStack_68a._0_1_ = s_key_mgmt_NONE_00401a34[0xe];
      local_68c[0] = s_key_mgmt_NONE_00401a34[0xc];
      local_68c[1] = s_key_mgmt_NONE_00401a34[0xd];
      strncat(auStack_ce98,&local_698,0xe);
      local_698 = CONCAT13(local_698._3_1_,0xa7d);
      strncat(auStack_ce98,&local_698,2);
    }
    else {
      uVar6 = strlen(param_2);
      if (7 < uVar6) {
        local_694[0] = s_network___00401a0c[4];
        local_694[1] = s_network___00401a0c[5];
        local_694[2] = s_network___00401a0c[6];
        local_694[3] = s_network___00401a0c[7];
        local_698._0_1_ = s_network___00401a0c[0];
        local_698._1_1_ = s_network___00401a0c[1];
        local_698._2_1_ = s_network___00401a0c[2];
        local_698._3_1_ = s_network___00401a0c[3];
        _local_690 = CONCAT22(CONCAT11(uStack_68e._1_1_,s_network___00401a0c[10]),
                              s_network___00401a0c._8_2_);
        strncat(auStack_ce98,&local_698,10);
        snprintf(&local_698,0x400,"ssid=\"%s\"\n",local_98);
        uVar14 = strlen(&local_698);
        strncat(auStack_ce98,&local_698,uVar14);
        local_698._0_1_ = s_scan_ssid_1_00401a24[0];
        local_698._1_1_ = s_scan_ssid_1_00401a24[1];
        local_698._2_1_ = s_scan_ssid_1_00401a24[2];
        local_698._3_1_ = s_scan_ssid_1_00401a24[3];
        local_68c[0] = s_scan_ssid_1_00401a24[0xc];
        local_694[0] = s_scan_ssid_1_00401a24[4];
        local_694[1] = s_scan_ssid_1_00401a24[5];
        local_694[2] = s_scan_ssid_1_00401a24[6];
        local_694[3] = s_scan_ssid_1_00401a24[7];
        local_690[0] = s_scan_ssid_1_00401a24[8];
        local_690[1] = s_scan_ssid_1_00401a24[9];
        uStack_68e._0_1_ = s_scan_ssid_1_00401a24[10];
        uStack_68e._1_1_ = s_scan_ssid_1_00401a24[0xb];
        strncat(auStack_ce98,&local_698,0xc);
        pcVar24 = (char *)&local_698;
        pcVar21 = "proto=WPA RSN\nkey_mgmt=WPA-PSK\npairwise=CCMP TKIP\ngroup=CCMP TKIP\n";
        do {
          pcVar22 = pcVar21;
          pcVar5 = pcVar24;
          uVar16 = *(undefined4 *)(pcVar22 + 4);
          uVar15 = *(undefined4 *)(pcVar22 + 8);
          uVar14 = *(undefined4 *)(pcVar22 + 0xc);
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar22;
          *(undefined4 *)(pcVar5 + 4) = uVar16;
          *(undefined4 *)(pcVar5 + 8) = uVar15;
          *(undefined4 *)(pcVar5 + 0xc) = uVar14;
          pcVar24 = pcVar5 + 0x10;
          pcVar21 = pcVar22 + 0x10;
        } while (pcVar22 + 0x10 != "P\n");
        pcVar5[0x12] = pcVar22[0x12];
        *(undefined2 *)(pcVar5 + 0x10) = s_proto_WPA_RSN_key_mgmt_WPA_PSK_p_00401a44._64_2_;
        strncat(auStack_ce98,&local_698,0x42);
        if (*param_2 != '\0') {
          snprintf(&local_698,0x400,"psk=\"%s\"\n",param_2);
          uVar14 = strlen(&local_698);
          strncat(auStack_ce98,&local_698,uVar14);
        }
        local_698 = CONCAT13(local_698._3_1_,0xa7d);
        strncat(auStack_ce98,&local_698,2);
        if (*param_2 == '\0') goto LAB_00400c9c;
      }
      uVar6 = strlen(param_2);
      if ((uVar6 & 0xfffffff7) == 5) {
        local_694[0] = s_network___00401a0c[4];
        local_694[1] = s_network___00401a0c[5];
        local_694[2] = s_network___00401a0c[6];
        local_694[3] = s_network___00401a0c[7];
        local_698._0_1_ = s_network___00401a0c[0];
        local_698._1_1_ = s_network___00401a0c[1];
        local_698._2_1_ = s_network___00401a0c[2];
        local_698._3_1_ = s_network___00401a0c[3];
        _local_690 = CONCAT22(CONCAT11(uStack_68e._1_1_,s_network___00401a0c[10]),
                              s_network___00401a0c._8_2_);
        strncat(auStack_ce98,&local_698,10);
        snprintf(&local_698,0x400,"ssid=\"%s\"\n",local_98);
        uVar14 = strlen(&local_698);
        strncat(auStack_ce98,&local_698,uVar14);
        local_698._0_1_ = s_scan_ssid_1_00401a24[0];
        local_698._1_1_ = s_scan_ssid_1_00401a24[1];
        local_698._2_1_ = s_scan_ssid_1_00401a24[2];
        local_698._3_1_ = s_scan_ssid_1_00401a24[3];
        local_694[0] = s_scan_ssid_1_00401a24[4];
        local_694[1] = s_scan_ssid_1_00401a24[5];
        local_694[2] = s_scan_ssid_1_00401a24[6];
        local_694[3] = s_scan_ssid_1_00401a24[7];
        _local_68c = CONCAT31(stack0xfffff975,s_scan_ssid_1_00401a24[0xc]);
        local_690[0] = s_scan_ssid_1_00401a24[8];
        local_690[1] = s_scan_ssid_1_00401a24[9];
        uStack_68e._0_1_ = s_scan_ssid_1_00401a24[10];
        uStack_68e._1_1_ = s_scan_ssid_1_00401a24[0xb];
        strncat(auStack_ce98,&local_698,0xc);
        local_694[0] = s_key_mgmt_NONE_00401a34[4];
        local_694[1] = s_key_mgmt_NONE_00401a34[5];
        local_694[2] = s_key_mgmt_NONE_00401a34[6];
        local_694[3] = s_key_mgmt_NONE_00401a34[7];
        local_698._0_1_ = s_key_mgmt_NONE_00401a34[0];
        local_698._1_1_ = s_key_mgmt_NONE_00401a34[1];
        local_698._2_1_ = s_key_mgmt_NONE_00401a34[2];
        local_698._3_1_ = s_key_mgmt_NONE_00401a34[3];
        local_690[0] = s_key_mgmt_NONE_00401a34[8];
        local_690[1] = s_key_mgmt_NONE_00401a34[9];
        uStack_68e._0_1_ = s_key_mgmt_NONE_00401a34[10];
        uStack_68e._1_1_ = s_key_mgmt_NONE_00401a34[0xb];
        _local_68c = CONCAT12(s_key_mgmt_NONE_00401a34[0xe],s_key_mgmt_NONE_00401a34._12_2_);
        strncat(auStack_ce98,&local_698,0xe);
        pcVar24 = "wep_key0=\"%s\"\n";
LAB_00401698:
        snprintf(&local_698,0x400,pcVar24,param_2);
        uVar14 = strlen(&local_698);
        strncat(auStack_ce98,&local_698,uVar14);
        local_698._0_1_ = s_wep_tx_keyidx_0_00401aa4[0];
        local_698._1_1_ = s_wep_tx_keyidx_0_00401aa4[1];
        local_698._2_1_ = s_wep_tx_keyidx_0_00401aa4[2];
        local_698._3_1_ = s_wep_tx_keyidx_0_00401aa4[3];
        local_694[0] = s_wep_tx_keyidx_0_00401aa4[4];
        local_694[1] = s_wep_tx_keyidx_0_00401aa4[5];
        local_694[2] = s_wep_tx_keyidx_0_00401aa4[6];
        local_694[3] = s_wep_tx_keyidx_0_00401aa4[7];
        local_690[0] = s_wep_tx_keyidx_0_00401aa4[8];
        local_690[1] = s_wep_tx_keyidx_0_00401aa4[9];
        uStack_68e._0_1_ = s_wep_tx_keyidx_0_00401aa4[10];
        uStack_68e._1_1_ = s_wep_tx_keyidx_0_00401aa4[0xb];
        local_688[0] = s_wep_tx_keyidx_0_00401aa4[0x10];
        local_68c[0] = s_wep_tx_keyidx_0_00401aa4[0xc];
        local_68c[1] = s_wep_tx_keyidx_0_00401aa4[0xd];
        uStack_68a._0_1_ = s_wep_tx_keyidx_0_00401aa4[0xe];
        uStack_68a._1_1_ = s_wep_tx_keyidx_0_00401aa4[0xf];
        strncat(auStack_ce98,&local_698,0x10);
        local_698 = CONCAT13(local_698._3_1_,0xa7d);
        strncat(auStack_ce98,&local_698,2);
      }
      else if ((uVar6 & 0xffffffef) == 10) {
        pcVar24 = param_2;
        do {
          if (pcVar24 == param_2 + uVar6) {
            if (!bVar4) {
              local_694[0] = s_network___00401a0c[4];
              local_694[1] = s_network___00401a0c[5];
              local_694[2] = s_network___00401a0c[6];
              local_694[3] = s_network___00401a0c[7];
              local_698._0_1_ = s_network___00401a0c[0];
              local_698._1_1_ = s_network___00401a0c[1];
              local_698._2_1_ = s_network___00401a0c[2];
              local_698._3_1_ = s_network___00401a0c[3];
              _local_690 = CONCAT22(CONCAT11(uStack_68e._1_1_,s_network___00401a0c[10]),
                                    s_network___00401a0c._8_2_);
              strncat(auStack_ce98,&local_698,10);
              snprintf(&local_698,0x400,"ssid=\"%s\"\n",local_98);
              uVar14 = strlen(&local_698);
              strncat(auStack_ce98,&local_698,uVar14);
              local_698._0_1_ = s_scan_ssid_1_00401a24[0];
              local_698._1_1_ = s_scan_ssid_1_00401a24[1];
              local_698._2_1_ = s_scan_ssid_1_00401a24[2];
              local_698._3_1_ = s_scan_ssid_1_00401a24[3];
              local_694[0] = s_scan_ssid_1_00401a24[4];
              local_694[1] = s_scan_ssid_1_00401a24[5];
              local_694[2] = s_scan_ssid_1_00401a24[6];
              local_694[3] = s_scan_ssid_1_00401a24[7];
              _local_68c = CONCAT31(stack0xfffff975,s_scan_ssid_1_00401a24[0xc]);
              local_690[0] = s_scan_ssid_1_00401a24[8];
              local_690[1] = s_scan_ssid_1_00401a24[9];
              uStack_68e._0_1_ = s_scan_ssid_1_00401a24[10];
              uStack_68e._1_1_ = s_scan_ssid_1_00401a24[0xb];
              strncat(auStack_ce98,&local_698,0xc);
              local_694[0] = s_key_mgmt_NONE_00401a34[4];
              local_694[1] = s_key_mgmt_NONE_00401a34[5];
              local_694[2] = s_key_mgmt_NONE_00401a34[6];
              local_694[3] = s_key_mgmt_NONE_00401a34[7];
              local_698._0_1_ = s_key_mgmt_NONE_00401a34[0];
              local_698._1_1_ = s_key_mgmt_NONE_00401a34[1];
              local_698._2_1_ = s_key_mgmt_NONE_00401a34[2];
              local_698._3_1_ = s_key_mgmt_NONE_00401a34[3];
              local_690[0] = s_key_mgmt_NONE_00401a34[8];
              local_690[1] = s_key_mgmt_NONE_00401a34[9];
              uStack_68e._0_1_ = s_key_mgmt_NONE_00401a34[10];
              uStack_68e._1_1_ = s_key_mgmt_NONE_00401a34[0xb];
              _local_68c = CONCAT12(s_key_mgmt_NONE_00401a34[0xe],s_key_mgmt_NONE_00401a34._12_2_);
              strncat(auStack_ce98,&local_698,0xe);
              pcVar24 = "wep_key0=%s\n";
              goto LAB_00401698;
            }
            break;
          }
          cVar1 = *pcVar24;
          pcVar24 = pcVar24 + 1;
        } while ((*(ushort *)(__ctype_b + cVar1 * 2) & 0x10) != 0);
      }
    }
  }
LAB_00400c9c:
  iVar9 = fopen("/tmp/wpa_supplicant.conf",&DAT_00401ae4);
  if (iVar9 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = strlen(auStack_ce98);
    iVar10 = fwrite(auStack_ce98,1,uVar14,iVar9);
    iVar11 = strlen(auStack_ce98);
    if (iVar10 == iVar11) {
      fclose(iVar9);
      chmod("/tmp/wpa_supplicant.conf",0x1ff);
      uVar14 = 0;
    }
    else {
      perror("fwrite");
      fclose(iVar9);
      uVar14 = 0xffffffff;
    }
  }
  return uVar14;
}



// ==== FUN_0040183c @ 0040183c size=244

int FUN_0040183c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10;
  do {
    iVar1 = open(param_1,0);
    iVar2 = iVar2 + -1;
    if (iVar1 != -1) {
      iVar2 = mmap(0,param_2,1,1,iVar1,0);
      if (iVar2 == -1) {
        close(iVar1);
        return 0;
      }
      close(iVar1);
      return iVar2;
    }
    usleep(100000);
  } while (iVar2 != 0);
  return 0;
}



// ==== FUN_00401930 @ 00401930 size=72

void FUN_00401930(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00412000;
  pcVar2 = DAT_00412000;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



