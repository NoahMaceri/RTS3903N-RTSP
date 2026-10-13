/* dispatch — "get" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== get_tmp_did @ 00403b38 size=268

void get_tmp_did(void)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_00410740("dispatch.c","get_tmp_did",0x17f,"did not exist, read tmp files\n");
  iVar1 = access("/tmp/sd/did.txt",0);
  if (iVar1 == 0) {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iVar1 = open("/tmp/sd/did.txt",0,0x1ff);
    if (iVar1 != -1) {
      read(iVar1,&local_38,0x20);
      close(iVar1);
      strcpy(DAT_0042640c + 0x255,&local_38);
      FUN_00410740("dispatch.c","get_tmp_did",0x18a," did.txt did = %s\n",&local_38);
      return;
    }
  }
  return;
}



// ==== get_productinfo @ 00403c44 size=1236

undefined4 get_productinfo(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  int *piVar30;
  int iVar31;
  uint extraout_v1;
  uint uVar32;
  uint extraout_v1_00;
  uint extraout_v1_01;
  uint extraout_v1_02;
  uint extraout_v1_03;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  uint in_t0;
  uint in_t1;
  uint in_t2;
  uint in_t3;
  uint in_t4;
  uint in_t5;
  uint in_t6;
  undefined8 uVar37;
  undefined1 auStack_148 [4];
  undefined1 auStack_144 [32];
  undefined1 auStack_124 [32];
  undefined1 auStack_104 [64];
  undefined1 auStack_c4 [168];
  
  memset(auStack_148,0,0x124);
  FUN_00410740("dispatch.c","get_productinfo",0x2d7,"\n");
  piVar30 = (int *)FUN_00410cd0("/dev/mtdblock6",0x124);
  if (piVar30 == (int *)0x0) {
    FUN_00410740("dispatch.c","get_productinfo",0x32d,"product info partition not exist!\n");
    get_tmp_did();
    return 0;
  }
  FUN_00410740("dispatch.c","get_productinfo",0x2db,"product info partition exist!\n");
  if (*piVar30 == 1) {
    FUN_00410740("dispatch.c","get_productinfo",0x2df,
                 "product info partition is not empty, read it!\n");
    snprintf(DAT_0042640c + 0x255,0x20,"%s",piVar30 + 9);
    snprintf(DAT_0042640c + 0x295,0x20,"%s",piVar30 + 0x11);
    snprintf(DAT_0042640c + 0x2dc,0x20,"%s",piVar30 + 0x21);
    snprintf(DAT_0042640c + 0x235,0x20,"%s",piVar30 + 1);
    pcVar36 = "%s";
    snprintf(DAT_0042640c + 700,0x20,"%s",piVar30 + 0x19);
    pcVar35 = (char *)0x0;
    uVar37 = access("/etc/back.bin");
    uVar32 = (uint)((ulonglong)uVar37 >> 0x20);
    pcVar33 = "/etc/back.bin";
    if ((int)uVar37 != 0) {
      pcVar35 = (char *)0x302;
      pcVar36 = (char *)0x1ff;
      uVar37 = open();
      uVar32 = (uint)((ulonglong)uVar37 >> 0x20);
      pcVar34 = (char *)uVar37;
      if (pcVar34 != (char *)0xffffffff) {
        pcVar36 = (char *)0x124;
        pcVar35 = (char *)piVar30;
        write(pcVar34);
        close();
        iVar31 = piVar30[0x29];
        uVar32 = extraout_v1_01;
        goto LAB_00403d20;
      }
    }
  }
  else {
    FUN_00410740("dispatch.c","get_productinfo",0x2f3,
                 "product info partition is empty, check if backup exist!\n");
    iVar31 = access("/etc/back.bin",0);
    pcVar33 = "dispatch.c";
    pcVar35 = "get_productinfo";
    if (iVar31 == 0) {
      FUN_00410740("dispatch.c","get_productinfo",0x2f8,"backup exist, read it!\n");
      pcVar33 = "/etc/back.bin";
      pcVar35 = (char *)0x0;
      pcVar36 = (char *)0x1ff;
      uVar37 = open();
      uVar32 = (uint)((ulonglong)uVar37 >> 0x20);
      iVar31 = (int)uVar37;
      if (iVar31 != -1) {
        read(iVar31,auStack_148,0x124);
        close(iVar31);
        iVar31 = open("/dev/mtdblock6",2,0x1ff);
        if (iVar31 != -1) {
          write(iVar31,auStack_148,0x124);
          close(iVar31);
        }
        snprintf(DAT_0042640c + 0x255,0x20,"%s",auStack_124);
        snprintf(DAT_0042640c + 0x295,0x20,"%s",auStack_104);
        snprintf(DAT_0042640c + 0x2dc,0x20,"%s",auStack_c4);
        snprintf(DAT_0042640c + 0x235,0x20,"%s",auStack_144);
        pcVar35 = (char *)0x20;
        pcVar36 = "%s";
        pcVar34 = (char *)(DAT_0042640c + 700);
        snprintf();
        iVar31 = piVar30[0x29];
        uVar32 = extraout_v1_00;
        goto LAB_00403d20;
      }
    }
    else {
      pcVar36 = (char *)0x30c;
      FUN_00410740();
      get_tmp_did();
      uVar32 = extraout_v1;
    }
  }
  pcVar34 = pcVar33;
  iVar31 = piVar30[0x29];
LAB_00403d20:
  pcVar33 = "\x03";
  if (iVar31 == 0xaa) {
    FUN_00410740("dispatch.c","get_productinfo",0x313,"hardware version is not empty, read it!\n");
    puVar29 = DAT_00426320;
    uVar32 = (int)piVar30 + 0xabU & 3;
    uVar1 = (int)piVar30 + 0xafU & 3;
    iVar31 = *(int *)(((int)piVar30 + 0xafU) - uVar1);
    pcVar34 = "dispatch.c";
    uVar15 = (uint)(piVar30 + 0x2a) & 3;
    pcVar35 = "get_productinfo";
    uVar2 = (int)piVar30 + 0xb3U & 3;
    iVar14 = *(int *)(((int)piVar30 + 0xb3U) - uVar2);
    pcVar36 = (char *)0x315;
    uVar3 = (int)piVar30 + 0xb7U & 3;
    iVar8 = *(int *)(((int)piVar30 + 0xb7U) - uVar3);
    pcVar33 = 
    " ptz_en[%c] ptz_dir hor[%c] ver[%c] cds[%c] mirror[%c] resolution[%c] def_x[%c%c] def_y[%c] isp[%c] \n"
    ;
    uVar4 = (int)piVar30 + 0xbbU & 3;
    iVar9 = *(int *)(((int)piVar30 + 0xbbU) - uVar4);
    uVar5 = (int)piVar30 + 0xbfU & 3;
    uVar6 = (int)piVar30 + 0xc3U & 3;
    uVar7 = (int)piVar30 + 199U & 3;
    iVar10 = *(int *)(((int)piVar30 + 199U) - uVar7);
    uVar16 = (uint)(piVar30 + 0x2b) & 3;
    uVar21 = *(uint *)((int)(piVar30 + 0x2b) - uVar16);
    uVar17 = (uint)(piVar30 + 0x2c) & 3;
    uVar22 = *(uint *)((int)(piVar30 + 0x2c) - uVar17);
    uVar18 = (uint)(piVar30 + 0x2d) & 3;
    uVar23 = *(uint *)((int)(piVar30 + 0x2d) - uVar18);
    uVar19 = (uint)(piVar30 + 0x2e) & 3;
    uVar24 = *(uint *)((int)(piVar30 + 0x2e) - uVar19);
    uVar20 = (uint)(piVar30 + 0x2f) & 3;
    in_t1 = (*(int *)(((int)piVar30 + 0xbfU) - uVar5) << (3 - uVar5) * 8 |
            in_t1 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar20) * 8 |
            *(uint *)((int)(piVar30 + 0x2f) - uVar20) >> uVar20 * 8;
    uVar5 = (uint)(piVar30 + 0x30) & 3;
    in_t0 = (*(int *)(((int)piVar30 + 0xc3U) - uVar6) << (3 - uVar6) * 8 |
            in_t0 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar5) * 8 |
            *(uint *)((int)(piVar30 + 0x30) - uVar5) >> uVar5 * 8;
    uVar5 = (uint)(piVar30 + 0x31) & 3;
    uVar6 = *(uint *)((int)(piVar30 + 0x31) - uVar5);
    *DAT_00426320 =
         (*(int *)(((int)piVar30 + 0xabU) - uVar32) << (3 - uVar32) * 8 |
         in_t6 & 0xffffffffU >> (uVar32 + 1) * 8) & -1 << (4 - uVar15) * 8 |
         *(uint *)((int)(piVar30 + 0x2a) - uVar15) >> uVar15 * 8;
    puVar29[1] = (iVar31 << (3 - uVar1) * 8 | in_t5 & 0xffffffffU >> (uVar1 + 1) * 8) &
                 -1 << (4 - uVar16) * 8 | uVar21 >> uVar16 * 8;
    puVar29[2] = (iVar14 << (3 - uVar2) * 8 | in_t4 & 0xffffffffU >> (uVar2 + 1) * 8) &
                 -1 << (4 - uVar17) * 8 | uVar22 >> uVar17 * 8;
    puVar29[3] = (iVar8 << (3 - uVar3) * 8 | in_t3 & 0xffffffffU >> (uVar3 + 1) * 8) &
                 -1 << (4 - uVar18) * 8 | uVar23 >> uVar18 * 8;
    puVar29[4] = (iVar9 << (3 - uVar4) * 8 | in_t2 & 0xffffffffU >> (uVar4 + 1) * 8) &
                 -1 << (4 - uVar19) * 8 | uVar24 >> uVar19 * 8;
    puVar29[5] = in_t1;
    puVar29[6] = in_t0;
    puVar29[7] = (iVar10 << (3 - uVar7) * 8 | extraout_v1_02 & 0xffffffffU >> (uVar7 + 1) * 8) &
                 -1 << (4 - uVar5) * 8 | uVar6 >> uVar5 * 8;
    FUN_00410740();
    iVar31 = piVar30[0x32];
    uVar32 = extraout_v1_03;
  }
  else {
    iVar31 = piVar30[0x32];
  }
  iVar14 = DAT_0042640c;
  if (iVar31 == 0xbb) {
    uVar1 = (int)piVar30 + 0xd3U & 3;
    iVar31 = *(int *)(((int)piVar30 + 0xd3U) - uVar1);
    uVar2 = (int)piVar30 + 0xd7U & 3;
    iVar8 = *(int *)(((int)piVar30 + 0xd7U) - uVar2);
    uVar3 = (int)piVar30 + 0xdbU & 3;
    iVar9 = *(int *)(((int)piVar30 + 0xdbU) - uVar3);
    uVar4 = (int)piVar30 + 0xdfU & 3;
    iVar10 = *(int *)(((int)piVar30 + 0xdfU) - uVar4);
    uVar5 = (int)piVar30 + 0xe3U & 3;
    iVar11 = *(int *)(((int)piVar30 + 0xe3U) - uVar5);
    uVar6 = (int)piVar30 + 0xe7U & 3;
    iVar12 = *(int *)(((int)piVar30 + 0xe7U) - uVar6);
    uVar7 = (int)piVar30 + 0xebU & 3;
    iVar13 = *(int *)(((int)piVar30 + 0xebU) - uVar7);
    uVar15 = (uint)(piVar30 + 0x34) & 3;
    uVar22 = *(uint *)((int)(piVar30 + 0x34) - uVar15);
    uVar16 = (uint)(piVar30 + 0x35) & 3;
    uVar23 = *(uint *)((int)(piVar30 + 0x35) - uVar16);
    uVar17 = (uint)(piVar30 + 0x36) & 3;
    uVar24 = *(uint *)((int)(piVar30 + 0x36) - uVar17);
    uVar18 = (uint)(piVar30 + 0x37) & 3;
    uVar25 = *(uint *)((int)(piVar30 + 0x37) - uVar18);
    uVar19 = (uint)(piVar30 + 0x38) & 3;
    uVar26 = *(uint *)((int)(piVar30 + 0x38) - uVar19);
    uVar20 = (uint)(piVar30 + 0x39) & 3;
    uVar27 = *(uint *)((int)(piVar30 + 0x39) - uVar20);
    uVar21 = (uint)(piVar30 + 0x3a) & 3;
    uVar28 = *(uint *)((int)(piVar30 + 0x3a) - uVar21);
    *(int *)(DAT_0042640c + 0x215) = piVar30[0x33];
    *(uint *)(iVar14 + 0x219) =
         (iVar31 << (3 - uVar1) * 8 | in_t1 & 0xffffffffU >> (uVar1 + 1) * 8) &
         -1 << (4 - uVar15) * 8 | uVar22 >> uVar15 * 8;
    *(uint *)(iVar14 + 0x21d) =
         (iVar8 << (3 - uVar2) * 8 | in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) &
         -1 << (4 - uVar16) * 8 | uVar23 >> uVar16 * 8;
    *(uint *)(iVar14 + 0x221) =
         (iVar9 << (3 - uVar3) * 8 | (uint)pcVar33 & 0xffffffffU >> (uVar3 + 1) * 8) &
         -1 << (4 - uVar17) * 8 | uVar24 >> uVar17 * 8;
    *(uint *)(iVar14 + 0x225) =
         (iVar10 << (3 - uVar4) * 8 | (uint)pcVar36 & 0xffffffffU >> (uVar4 + 1) * 8) &
         -1 << (4 - uVar18) * 8 | uVar25 >> uVar18 * 8;
    *(uint *)(iVar14 + 0x229) =
         (iVar11 << (3 - uVar5) * 8 | (uint)pcVar35 & 0xffffffffU >> (uVar5 + 1) * 8) &
         -1 << (4 - uVar19) * 8 | uVar26 >> uVar19 * 8;
    *(uint *)(iVar14 + 0x22d) =
         (iVar12 << (3 - uVar6) * 8 | (uint)pcVar34 & 0xffffffffU >> (uVar6 + 1) * 8) &
         -1 << (4 - uVar20) * 8 | uVar27 >> uVar20 * 8;
    *(uint *)(iVar14 + 0x231) =
         (iVar13 << (3 - uVar7) * 8 | uVar32 & 0xffffffffU >> (uVar7 + 1) * 8) &
         -1 << (4 - uVar21) * 8 | uVar28 >> uVar21 * 8;
  }
  munmap(piVar30,0x124);
  return 0;
}



// ==== get_config @ 00408b78 size=2208

/* WARNING: Removing unreachable block (ram,0x00409228) */
/* WARNING: Removing unreachable block (ram,0x00409404) */

undefined4 get_config(void)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  char cVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int iVar25;
  byte bVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined1 auStack_420 [1024];
  
  FUN_004082d4();
  if (DAT_00426434 != 1) {
    set_default();
  }
  if (DAT_0042644c == 1) {
    iVar28 = (*(byte *)(DAT_00426320 + 10) - 0x30) * 10 + (*(byte *)(DAT_00426320 + 0xb) - 0x30);
    if (iVar28 == 0) {
      DAT_0042656c = 0x800;
    }
    else {
      printf(" hw_ver_p->def_x = %d \n",iVar28);
      DAT_0042656c = (iVar28 * 0x1000) / 100;
    }
    iVar28 = *(byte *)(DAT_00426320 + 9) - 0x30;
    if (*(byte *)(DAT_00426320 + 9) == 0x30) {
      DAT_00426570 = 0x2d0;
    }
    else {
      printf(" hw_ver_p->def_y = %d \n",iVar28);
      DAT_00426570 = iVar28 * 0x90;
    }
  }
  uVar16 = DAT_00426603;
  uVar15 = DAT_00426602;
  uVar14 = DAT_00426601;
  uVar13 = DAT_00426600;
  uVar12 = DAT_004265e8;
  uVar11 = DAT_004265e0;
  uVar10 = DAT_004265dc;
  uVar7 = DAT_004265d8;
  uVar9 = DAT_004265d4;
  uVar6 = DAT_00426564;
  uVar5 = DAT_00426560;
  iVar25 = DAT_0042644c;
  uVar3 = DAT_00426448;
  uVar24 = DAT_00426444;
  uVar23 = DAT_0042643c;
  uVar22 = DAT_00426438;
  iVar28 = DAT_0042640c;
  puVar18 = (undefined4 *)(DAT_0042640c + 0x9f0);
  *(undefined4 *)(DAT_0042640c + 0x60c) = DAT_00426440;
  *(undefined4 *)(iVar28 + 0x608) = uVar23;
  *(undefined4 *)(iVar28 + 0x614) = uVar3;
  *(int *)(iVar28 + 0x5bc) = iVar25;
  *(undefined4 *)(iVar28 + 0x4b4) = uVar5;
  *(undefined4 *)(iVar28 + 0x600) = uVar12;
  *(undefined1 *)(iVar28 + 0x98c) = uVar13;
  *(undefined1 *)(iVar28 + 0x98d) = uVar14;
  *(undefined1 *)(iVar28 + 0x98e) = uVar15;
  *(undefined1 *)(iVar28 + 0x98f) = uVar16;
  *(undefined4 *)(iVar28 + 0x8a4) = uVar6;
  *(undefined4 *)(iVar28 + 0x918) = uVar9;
  *(undefined4 *)(iVar28 + 0x91c) = uVar7;
  *(undefined4 *)(iVar28 + 0x920) = uVar10;
  *(undefined4 *)(iVar28 + 0x610) = uVar24;
  *(undefined4 *)(iVar28 + 0x604) = uVar22;
  *(undefined4 *)(iVar28 + 0x924) = uVar11;
  uVar9 = DAT_004266dc;
  uVar14 = DAT_004266d8;
  uVar6 = DAT_004266d4;
  uVar5 = DAT_004266bc;
  uVar3 = DAT_004266b8;
  uVar24 = DAT_00426608;
  uVar13 = DAT_00426604;
  uVar23 = DAT_004265ec;
  uVar22 = DAT_004265e4;
  uVar21 = DAT_004266b4;
  if (100 < DAT_004266b4) {
    uVar21 = 0;
  }
  *(undefined1 *)(iVar28 + 500) = DAT_00426720;
  uVar7 = DAT_00426568;
  *(undefined1 *)(iVar28 + 499) = DAT_00426721;
  uVar16 = DAT_00426723;
  uVar15 = DAT_00426722;
  iVar8 = DAT_00426570;
  iVar25 = DAT_0042656c;
  *(uint *)(iVar28 + 0x4dc) = uVar21;
  *(undefined4 *)(iVar28 + 0x8a8) = uVar7;
  *(undefined4 *)(iVar28 + 0x928) = uVar22;
  *(int *)(iVar28 + 0x8ac) = iVar25;
  *(int *)(iVar28 + 0x8b0) = iVar8;
  *(undefined1 *)(iVar28 + 0x933) = uVar13;
  *(undefined1 *)(iVar28 + 0x934) = uVar14;
  *(undefined4 *)(iVar28 + 0x4b0) = uVar24;
  *(undefined4 *)(iVar28 + 0x92c) = uVar23;
  *(undefined4 *)(iVar28 + 0x4e0) = uVar3;
  *(undefined4 *)(iVar28 + 0x4e4) = uVar6;
  *(undefined4 *)(iVar28 + 0x4e8) = uVar9;
  *(undefined4 *)(iVar28 + 0x4ec) = uVar5;
  *(undefined1 *)(iVar28 + 0x9ed) = uVar15;
  *(undefined1 *)(iVar28 + 0x9ee) = uVar16;
  *(undefined1 *)(iVar28 + 0x9ef) = DAT_00426724;
  puVar27 = &DAT_00426725;
  do {
    puVar20 = puVar27;
    puVar19 = puVar18;
    uVar24 = puVar20[1];
    uVar23 = puVar20[2];
    uVar22 = puVar20[3];
    *puVar19 = *puVar20;
    puVar19[1] = uVar24;
    puVar19[2] = uVar23;
    puVar19[3] = uVar22;
    puVar18 = puVar19 + 4;
    puVar27 = puVar20 + 4;
  } while (puVar20 + 4 != (undefined4 *)0x426765);
  *(undefined1 *)(puVar19 + 4) = uRam00426765;
  *(undefined1 *)((int)puVar19 + 0x11) = *(undefined1 *)((int)puVar20 + 0x11);
  *(undefined1 *)((int)puVar19 + 0x12) = *(undefined1 *)((int)puVar20 + 0x12);
  puVar18 = (undefined4 *)(iVar28 + 0xa33);
  puVar27 = &DAT_00426725;
  do {
    puVar20 = puVar27;
    puVar19 = puVar18;
    uVar24 = puVar20[1];
    uVar23 = puVar20[2];
    uVar22 = puVar20[3];
    *puVar19 = *puVar20;
    puVar19[1] = uVar24;
    puVar19[2] = uVar23;
    puVar19[3] = uVar22;
    puVar18 = puVar19 + 4;
    puVar27 = puVar20 + 4;
  } while (puVar20 + 4 != (undefined4 *)0x426765);
  puVar27 = (undefined4 *)(iVar28 + 0x8b8);
  *(undefined1 *)(puVar19 + 4) = uRam00426765;
  *(undefined1 *)((int)puVar19 + 0x11) = *(undefined1 *)((int)puVar20 + 0x11);
  *(undefined1 *)((int)puVar19 + 0x12) = *(undefined1 *)((int)puVar20 + 0x12);
  puVar18 = &DAT_00426574;
  do {
    puVar19 = puVar18 + 4;
    uVar24 = puVar18[1];
    uVar23 = puVar18[2];
    uVar22 = puVar18[3];
    *puVar27 = *puVar18;
    puVar27[1] = uVar24;
    puVar27[2] = uVar23;
    puVar27[3] = uVar22;
    uVar22 = DAT_004265f4;
    iVar28 = DAT_0042640c;
    puVar27 = puVar27 + 4;
    puVar18 = puVar19;
  } while (puVar19 != &DAT_004265d4);
  *(undefined4 *)(DAT_0042640c + 0x5e0) = DAT_004265f0;
  uVar23 = DAT_004265f8;
  *(undefined4 *)(iVar28 + 0x5e4) = uVar22;
  uVar22 = DAT_004265fc;
  *(undefined4 *)(iVar28 + 0x5e8) = uVar23;
  uVar13 = DAT_004266d0;
  uVar24 = DAT_004266c4;
  uVar23 = DAT_004266c0;
  cVar4 = DAT_004264d0;
  *(undefined4 *)(iVar28 + 0x5ec) = uVar22;
  *(undefined4 *)(iVar28 + 0x4f8) = uVar23;
  *(undefined4 *)(iVar28 + 0x4fc) = uVar24;
  *(undefined1 *)(iVar28 + 0x9ec) = uVar13;
  *(undefined4 *)(iVar28 + 0x4b4) = 0x7080;
  if (cVar4 == '\0') {
    ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789(0x20,&DAT_004264d0,0x40);
    iVar28 = DAT_0042640c;
  }
  snprintf(iVar28 + 800,0x40,"%s",&DAT_004264d0);
  ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789(0xf,DAT_0042640c + 0x550,0x20);
  snprintf(DAT_0042640c + 0x510,0x20,"%s",DAT_0042640c + 0x550);
  cVar17 = DAT_004266e0;
  iVar28 = DAT_0042640c;
  piVar1 = (int *)(DAT_0042640c + 0x18c);
  *(undefined4 *)(DAT_0042640c + 0x578) = 0;
  *(int *)(iVar28 + 0x574) = *piVar1 + 0xd2f00;
  *(undefined4 *)(iVar28 + 0x57c) = 0;
  if (cVar17 != '\0') {
    snprintf(iVar28 + 0x1b0,0x20,"%s",&DAT_004266e0);
    iVar28 = DAT_0042640c;
  }
  if (DAT_00426700 != '\0') {
    snprintf(iVar28 + 0x1d0,0x20,"%s",&DAT_00426700);
    iVar28 = DAT_0042640c;
  }
  uVar22 = DAT_00413bac;
  *(undefined4 *)(iVar28 + 400) = DAT_00413ba8;
  uVar23 = DAT_00413bb0;
  *(undefined4 *)(iVar28 + 0x194) = uVar22;
  uVar22 = DAT_00413bb4;
  *(undefined4 *)(iVar28 + 0x198) = uVar23;
  uVar23 = DAT_00413bb8;
  *(undefined4 *)(iVar28 + 0x19c) = uVar22;
  uVar22 = DAT_00413bbc;
  *(undefined4 *)(iVar28 + 0x1a0) = uVar23;
  *(undefined4 *)(iVar28 + 0x1a4) = uVar22;
  if ((DAT_0042660c == '\x01') && (DAT_00426610 != '\0')) {
    snprintf(DAT_0042640c + 0x7fc,0x80,"%s",&DAT_00426610);
  }
  if ((char)DAT_00426694 != '\0') {
    snprintf(DAT_0042640c + 0x275,0x20,"%s",&DAT_00426694);
  }
  if (*(char *)(DAT_0042640c + 0x235) != '\0') {
    snprintf(DAT_0042640c + 0x77c,0x40,"%s",DAT_0042640c + 0x235);
  }
  DAT_00426ad8 = DAT_00426690;
  FUN_00410740("dispatch.c","get_config",0x4b9,"got sn(%s)",&DAT_004264d0);
  FUN_00410740("dispatch.c","get_config",0x4ba,"got pwd(%s)",&DAT_00426490);
  FUN_00410740("dispatch.c","get_config",0x4bb,"got ssid(%s)",&DAT_00426450);
  iVar28 = DAT_0042640c + 0x7fc;
  FUN_00410740("dispatch.c","get_config",0x4bc,"got tnp_init_string(%s)",iVar28);
  bVar2 = DAT_00426450 != '\0';
  if (bVar2) {
    memset(auStack_420,0,0x400);
    snprintf(DAT_0042640c + 0x420,0x40,"%s",&DAT_00426450);
    snprintf(DAT_0042640c + 0x460,0x40,"%s",&DAT_00426490);
    FUN_00410988("/home/app/localbin/wifi_conf",auStack_420,0x400,0x3c);
  }
  else {
    *(undefined4 *)(DAT_0042640c + 0x5bc) = 1;
    puts("hue, start_with_reset = 1 @get_config()->g_sysconf.ssid == 0 ");
    ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789(0x20,DAT_0042640c + 800,0x40);
    FUN_00410740("dispatch.c","get_config",0x4c4,"reset because no wifi config",iVar28);
  }
  iVar28 = access("/tmp/sd/Factory/wpa_supplicant.conf",0);
  if (iVar28 == 0) {
    memset(auStack_420,0,0x200);
    *(undefined4 *)(DAT_0042640c + 0x5bc) = 0;
    snprintf(auStack_420,0x200,"cp %s /tmp/wpa_supplicant.conf",
             "/tmp/sd/Factory/wpa_supplicant.conf");
    FUN_00410958(auStack_420);
  }
  iVar28 = DAT_0042640c;
  if (*(int *)(DAT_0042640c + 0x8a4) == 0) {
    *(undefined4 *)(DAT_0042640c + 0x8a4) = 10;
  }
  if ((*(int *)(iVar28 + 0x8ac) == 0) && (*(int *)(iVar28 + 0x8b0) == 0)) {
    iVar25 = (*(byte *)(DAT_00426320 + 10) - 0x30) * 10 + (*(byte *)(DAT_00426320 + 0xb) - 0x30);
    if (iVar25 == 0) {
      *(undefined4 *)(iVar28 + 0x8ac) = 0x800;
    }
    else {
      printf(" hw_ver_p->def_x = %d \n",iVar25);
      *(int *)(DAT_0042640c + 0x8ac) = (iVar25 * 0x1000) / 100;
    }
    if (*(byte *)(DAT_00426320 + 9) == 0x30) {
      *(undefined4 *)(DAT_0042640c + 0x8b0) = 0x1e0;
    }
    else {
      iVar28 = *(byte *)(DAT_00426320 + 9) - 0x30;
      printf(" hw_ver_p->def_y = %d \n",iVar28);
      DAT_00426570 = iVar28 * 0x90;
    }
  }
  bVar26 = DAT_004266c9;
  iVar28 = DAT_0042640c;
  uVar21 = (uint)DAT_004266c9;
  *(undefined1 *)(DAT_0042640c + 0x9b4) = 0;
  if (1 < uVar21 - 1) {
    bVar26 = 2;
  }
  *(byte *)(iVar28 + 0x9b5) = bVar26;
  iVar25 = DAT_004266cc;
  if (1 < DAT_004266cc - 1U) {
    iVar25 = 1;
  }
  *(int *)(iVar28 + 0x9d4) = iVar25;
  DAT_004266b4 = 0;
  FUN_00410608(iVar28 + 0x938,0x4c,&DAT_00426510,0x4c);
  if (!bVar2 || cVar4 == '\0') {
    send_saveconfig_msg(DAT_00426408);
    FUN_00410740("dispatch.c","get_config",0x502,"get_config save conf\n");
  }
  return 0;
}



