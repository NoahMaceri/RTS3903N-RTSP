/* p2p_tnp — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== _init @ 00406118 size=72

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_0040690c();
  iVar1 = FUN_00445620();
  return iVar1;
}



// ==== _ftext @ 00406160 size=12

void _ftext(void)

{
  FUN_00413cfc();
  return;
}



// ==== main @ 004062b0 size=1212

undefined4 main(int param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  char *pcVar16;
  char local_170 [4];
  undefined4 local_16c [5];
  char acStack_158 [104];
  char local_f0 [4];
  undefined4 local_ec [4];
  byte abStack_dc [108];
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
  undefined1 auStack_30 [16];
  undefined4 local_20 [3];
  
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  memset(local_f0,0,0x80);
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  memset(local_170,0,0x80);
  sigemptyset(auStack_30);
  sigaddset(auStack_30,0xd);
  signal(0x12,1);
  iVar5 = pthread_sigmask(1,auStack_30,0);
  if (iVar5 != 0) {
    printf("block sigpipe error/n");
  }
  FUN_00440868(&DAT_00478414,0x8a0c,0,0x8a0c);
  FUN_00440868(&DAT_00480df4,0x20,0xffffffff,0x20);
  DAT_0047841c = (uint *)FUN_00440e78("/tmp/mmap.info",0xaa0);
  if (DAT_0047841c == (uint *)0x0) {
    dump_string("p2p_tnp.c",&DAT_00448b14,0x1a3e,"open share mem fail!\n");
    uVar6 = 0xffffffff;
  }
  else {
    FUN_00408f7c();
    iVar5 = FUN_00440df4(&DAT_00478414,"/ipc_dispatch");
    if (iVar5 == 0) {
      iVar5 = FUN_00440df4(&DAT_00478418,"/ipc_p2p");
      if (iVar5 == 0) {
        if (param_1 < 3) {
          while( true ) {
            iVar5 = FUN_00406260();
            puVar14 = (undefined4 *)&LAB_00440000;
            if (iVar5 == 0) break;
            ms_sleep(100);
          }
          puVar11 = &DAT_00450000;
          puVar12 = (uint *)&DAT_00470000;
          dump_string("p2p_tnp.c",&DAT_00448b14,0x1a55,"fshare_open ok");
          iVar5 = access("/tmp/sd/Factory/wpa_supplicant.conf",0);
          uVar15 = 1;
          puVar13 = puVar12;
          if (iVar5 == 0) goto LAB_00406570;
LAB_0040644c:
          local_20[0] = 0;
          iVar5 = pthread_create(local_20,0,&LAB_00409bbc,0);
          puVar10 = &DAT_00450000;
          if (iVar5 < 0) goto LAB_00406660;
          while( true ) {
            puVar11 = (undefined4 *)&_DYNAMIC_LINKING;
            p2p_set_tnp_init_status(1);
            while ((DAT_0047841c[0x172] != 1 || (DAT_0047841c[0x161] != 1))) {
              ms_sleep(100);
            }
            p2p_set_tnp_init_status(2);
            puVar12 = DAT_0047841c;
            if (puVar13[-0x1dba] != 1) break;
            pcVar3 = local_170;
            pcVar4 = "MJFKIILIILEHLBHLOPFDPKFIHBCGFGGEHLEJLJIJICAODLANOMJHAPMDOMCOBELOPELMCLPJ";
            do {
              pcVar16 = pcVar4;
              pcVar7 = pcVar3;
              uVar9 = *(undefined4 *)(pcVar16 + 4);
              uVar8 = *(undefined4 *)(pcVar16 + 8);
              uVar6 = *(undefined4 *)(pcVar16 + 0xc);
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar16;
              *(undefined4 *)(pcVar7 + 4) = uVar9;
              *(undefined4 *)(pcVar7 + 8) = uVar8;
              *(undefined4 *)(pcVar7 + 0xc) = uVar6;
              pcVar3 = pcVar7 + 0x10;
              pcVar4 = pcVar16 + 0x10;
            } while (pcVar16 + 0x10 != "PELMCLPJ");
            uVar6 = *(undefined4 *)(pcVar16 + 0x14);
            cVar1 = pcVar16[0x18];
            *(undefined4 *)(pcVar7 + 0x10) = s_MJFKIILIILEHLBHLOPFDPKFIHBCGFGGE_00448780._64_4_;
            *(undefined4 *)(pcVar7 + 0x14) = uVar6;
            pcVar7[0x18] = cVar1;
            puVar10 = *(undefined4 **)((int)DAT_0047841c + 0x259);
            local_68 = *(undefined4 *)((int)DAT_0047841c + 0x25d);
            local_60 = *(undefined4 *)((int)DAT_0047841c + 0x265);
            local_70 = CONCAT31((int3)((uint)*(undefined4 *)((int)DAT_0047841c + 0x255) >> 8),0x54);
            local_6c = CONCAT13(0x2d,(int3)puVar10);
            local_64._3_1_ = (undefined1)((uint)*(undefined4 *)((int)DAT_0047841c + 0x261) >> 0x18);
            local_64._0_3_ = CONCAT12(0x2d,(short)*(undefined4 *)((int)DAT_0047841c + 0x261));
            FUN_004135d4(local_170,&local_70);
LAB_00406660:
            dump_string(puVar14 + 0x1648,puVar11 + -0x1d3b,0x1a5e,puVar10 + -0x1e2e);
            perror("p2p_msg_proc failed");
          }
          iVar5 = strlen((int)DAT_0047841c + 0x235);
          if (iVar5 != 0x14) {
            do {
              if ((char)DAT_0047841c[0x1ff] != '\0') {
                uVar15 = (uint)(char)DAT_0047841c[0x1df];
                puVar12 = &DAT_00450000;
                if (uVar15 != 0) goto code_r0x00406534;
              }
              ms_sleep(1000);
            } while( true );
          }
          uVar15 = (uint)(char)puVar12[0x1ff];
          if (uVar15 == 0) {
            uVar15 = *puVar12;
            if (uVar15 == 1) {
              pcVar3 = local_f0;
              pcVar4 = 
              "MJFBIBLBICELLEHOOKFGPPECGLCJFKHEGKEALBJNIJBJCOAGPIIIBDMDPBDEAELAOGLCCBPBMKCNAHDPAKBM"
              ;
              do {
                pcVar16 = pcVar4;
                pcVar7 = pcVar3;
                uVar9 = *(undefined4 *)(pcVar16 + 4);
                uVar8 = *(undefined4 *)(pcVar16 + 8);
                uVar6 = *(undefined4 *)(pcVar16 + 0xc);
                *(undefined4 *)pcVar7 = *(undefined4 *)pcVar16;
                *(undefined4 *)(pcVar7 + 4) = uVar9;
                *(undefined4 *)(pcVar7 + 8) = uVar8;
                *(undefined4 *)(pcVar7 + 0xc) = uVar6;
                pcVar3 = pcVar7 + 0x10;
                pcVar4 = pcVar16 + 0x10;
              } while (pcVar16 + 0x10 != "AKBM");
              bVar2 = pcVar16[0x14];
              uVar15 = (uint)bVar2;
              *(undefined4 *)(pcVar7 + 0x10) = s_MJFBIBLBICELLEHOOKFGPPECGLCJFKHE_004487cc._80_4_;
              pcVar7[0x14] = bVar2;
            }
          }
          else {
            snprintf(local_f0,0x80,"%s",puVar12 + 0x1ff);
          }
          puVar14 = &DAT_00450000;
          snprintf(&local_50,0x20,"%s",(int)DAT_0047841c + 0x235);
          goto LAB_00406568;
        }
        uVar6 = __test(param_1,param_2);
      }
      else {
        dump_string("p2p_tnp.c",&DAT_00448b14,0x1a4b,"init_mqueue p2ptnp fail!\n");
        uVar6 = 0xffffffff;
      }
    }
    else {
      dump_string("p2p_tnp.c",&DAT_00448b14,0x1a46,"init_mqueue dispatch fail!\n");
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
code_r0x00406534:
  snprintf(local_f0,0x80,"%s",DAT_0047841c + 0x1ff);
  snprintf(&local_50,0x20,"%s",DAT_0047841c + 0x1df);
LAB_00406568:
  puVar11 = &local_50;
  FUN_004135d4(local_f0,puVar11);
LAB_00406570:
  puVar12[-0x1dba] = uVar15;
  puVar13 = puVar12;
  goto LAB_0040644c;
}



// ==== start_speaker @ 0040fcb8 size=220

undefined4 start_speaker(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_1010;
  int local_10 [2];
  
  memset(&local_1010,0,0x1000);
  local_10[0] = 8;
  iVar1 = FUN_004061c0((&DAT_0047843c)[param_1 * 0x372],1,&local_1010,local_10,10);
  if ((iVar1 != 0) && (local_1010 == 0)) {
    return 0xffffffff;
  }
  if (local_1010._1_1_ == '\x02') {
    if (local_10[0] == 0) {
      return 0xffffffff;
    }
    FUN_0040fb50(param_1,&local_1010);
    uVar2 = 0;
  }
  else {
    dump_string("p2p_tnp.c","start_speaker",0x12ac,"io_stream_head type error!\n");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== _fini @ 004458e0 size=56

void _fini(void)

{
  FUN_0040685c();
  return;
}



