/* mp4record — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "mp4record.h"

// ==== FUN_00400de0 @ 00400de0 size=12

void FUN_00400de0(void)

{
  FUN_004044b0();
  return;
}



// ==== FUN_00400df0 @ 00400df0 size=12

void FUN_00400df0(void)

{
  FUN_00404f20();
  return;
}



// ==== FUN_00400e00 @ 00400e00 size=12

void FUN_00400e00(void)

{
  FUN_00404b04();
  return;
}



// ==== FUN_00400e10 @ 00400e10 size=12

void FUN_00400e10(void)

{
  fshare_open();
  return;
}



// ==== FUN_00400e20 @ 00400e20 size=12

void FUN_00400e20(void)

{
  FUN_00404c1c();
  return;
}



// ==== FUN_004011d0 @ 004011d0 size=64

/* WARNING: Removing unreachable block (ram,0x004011f0) */
/* WARNING: Removing unreachable block (ram,0x00401200) */

void FUN_004011d0(void)

{
  return;
}



// ==== FUN_00401210 @ 00401210 size=76

/* WARNING: Removing unreachable block (ram,0x0040123c) */
/* WARNING: Removing unreachable block (ram,0x0040124c) */

void FUN_00401210(void)

{
  return;
}



// ==== FUN_0040125c @ 0040125c size=176

/* WARNING: Removing unreachable block (ram,0x004012bc) */

void FUN_0040125c(void)

{
  if (DAT_0041a270 == '\0') {
    FUN_004011d0();
    DAT_0041a270 = '\x01';
  }
  return;
}



// ==== FUN_0040130c @ 0040130c size=60

/* WARNING: Removing unreachable block (ram,0x00401328) */

void FUN_0040130c(void)

{
  FUN_00401210();
  return;
}



// ==== FUN_00401350 @ 00401350 size=464

longlong FUN_00401350(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_c8 [52];
  int local_94;
  undefined1 *local_30;
  int local_2c;
  
  iVar2 = opendir();
  if (iVar2 == 0) {
    return 0;
  }
  local_30 = (undefined1 *)(param_1 + param_2);
  local_2c = param_2 + 1;
  lVar1 = 0;
  *local_30 = 0x2f;
  iVar4 = param_1 + local_2c;
LAB_004013c0:
  do {
    iVar3 = readdir(iVar2);
    while( true ) {
      if (iVar3 == 0) {
        *local_30 = 0;
        closedir(iVar2);
        remove(param_1);
        return lVar1;
      }
      if ((*(char *)(iVar3 + 0xb) == '.') &&
         ((*(char *)(iVar3 + 0xc) == '\0' ||
          ((*(char *)(iVar3 + 0xc) == '.' && (*(char *)(iVar3 + 0xd) == '\0'))))))
      goto LAB_004013c0;
      strcpy(iVar4,iVar3 + 0xb);
      if (*(char *)(iVar3 + 10) == '\x04') break;
      if ((*(char *)(iVar3 + 10) == '\b') && (iVar3 = stat(param_1,auStack_c8), iVar3 == 0)) {
        lVar1 = lVar1 + local_94;
      }
      remove(param_1);
      iVar3 = readdir(iVar2);
    }
    iVar3 = strlen(iVar3 + 0xb);
    lVar5 = FUN_00401350(param_1,iVar3 + local_2c);
    lVar1 = lVar5 + lVar1;
  } while( true );
}



// ==== FUN_00401520 @ 00401520 size=900

void FUN_00401520(void)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 local_6e8 [256];
  undefined4 local_2e8;
  undefined4 local_2e4;
  short local_2e0;
  undefined2 local_2de;
  undefined2 *local_2dc;
  int local_2d8;
  undefined1 auStack_2d4 [492];
  uint local_e8 [32];
  uint auStack_68 [2];
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined2 *local_30;
  
  iVar5 = DAT_0041a2d8;
  uVar7 = *(uint *)(DAT_0041a2d8 + 0x18c);
  memset(&local_2e8,0,0x200);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            do {
              if ((0 < *(int *)(iVar5 + 0x5ac)) &&
                 (uVar1 = *(uint *)(iVar5 + 0x18c), uVar7 <= uVar1)) {
                if (*(int *)(iVar5 + 0x5ac) == 1) {
                  uVar7 = uVar1 + 600;
                  if (*(uint *)(iVar5 + 0x5a8) < 0x64001) {
                    iVar5 = FUN_00403420();
                    if (iVar5 != -1) {
                      local_34 = iVar5;
                      FUN_004034bc(iVar5);
                      localtime_r(&local_34,auStack_68);
                      memset(local_6e8,0,0x400);
                      uVar4 = snprintf(local_6e8,0x400,"%s/%04dY%02dM%02dD%02dH","/tmp/sd/record",
                                       local_54 + 0x76c,local_58 + 1,local_5c,local_60);
                      FUN_00401350(local_6e8,uVar4);
                      FUN_004051f4("mp4record.c","remove_record_folder",0xc4,
                                   "auto delete oldest record folder: %s",local_6e8);
                    }
                    uVar7 = *(int *)(DAT_0041a2d8 + 0x18c) + 600;
                  }
                }
                else {
                  uVar7 = uVar1 + 600;
                }
              }
              puVar8 = local_e8;
              do {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              } while (auStack_68 != puVar8);
              uVar6 = 10;
              local_3c = 10;
              local_e8[DAT_0041a2d4 >> 5] = local_e8[DAT_0041a2d4 >> 5] | 1 << (DAT_0041a2d4 & 0x1f)
              ;
              local_38 = 0;
              iVar2 = select(DAT_0041a2d4 + 1,local_e8,0,0,&local_3c);
              iVar5 = DAT_0041a2d8;
            } while (iVar2 < 1);
            puVar3 = (undefined2 *)mq_receive(DAT_0041a2d4,&local_2e8,0x200,0);
            if (&DAT_0000000f < puVar3) break;
            FUN_004051f4("mp4record.c","thread_handyman",0x24d,"invalid mq msg, length: %d",puVar3);
            iVar5 = DAT_0041a2d8;
          }
          if (puVar3 == local_2dc + 8) break;
          FUN_004051f4("mp4record.c","thread_handyman",0x24d,"invalid mq msg, length: %d",puVar3);
          printf("mq message:\n\tdstBitmap: %08x\n\tsrcMid: %08x\n\tmainOperation: %04x\n\tsubOperation: %d\n\tmsgLength: %d\n"
                 ,local_2e8,local_2e4,local_2e0,local_2de,local_2dc);
          iVar5 = DAT_0041a2d8;
        }
        local_30 = local_2dc;
        puVar3 = (undefined2 *)calloc(1,0x88);
        if (puVar3 != (undefined2 *)0x0) break;
        printf(&DAT_00408fcc,"process_mq_msg",500,local_30);
        iVar5 = DAT_0041a2d8;
      }
      *(undefined4 *)(puVar3 + 0x42) = 0;
      local_30 = puVar3;
      if (local_2e0 == 0x2003) {
        *(int *)(puVar3 + 0x42) = local_2d8;
        if (local_2d8 != 4) {
          uVar6 = 6;
        }
        *puVar3 = uVar6;
        FUN_004050bc(puVar3 + 2,0x7f,auStack_2d4,0x80);
      }
      else {
        if (local_2e0 == 0x2001) {
          *puVar3 = 10;
        }
        else if (local_2e0 == 0x2002) {
          *puVar3 = 0xf;
          puVar3[1] = 1;
        }
        else {
          *puVar3 = 6;
        }
        FUN_004050bc(puVar3 + 2,0x7f,&local_2d8);
      }
      if (*(char *)(local_30 + 2) != '\0') break;
      printf(&DAT_00408ff0,"process_mq_msg",0x21e);
LAB_004017f4:
      free(local_30);
      iVar5 = DAT_0041a2d8;
    }
    iVar5 = pthread_create(local_6e8,0,thread_short_record,local_30);
    if (iVar5 != 0) goto LAB_004017f4;
    pthread_detach(local_6e8[0]);
    iVar5 = DAT_0041a2d8;
  } while( true );
}



// ==== FUN_004018a4 @ 004018a4 size=136

undefined4 FUN_004018a4(void)

{
  if ((((DAT_0041a368 != 0) && (DAT_0041a36c != 0)) && ((DAT_0041a2e8 != 1 || (DAT_0041a364 != 0))))
     && ((DAT_0041a3f8 != 0 && (DAT_0041a3fc != 0)))) {
    if (DAT_0041a378 != 1) {
      return 1;
    }
    if (DAT_0041a3f4 != 0) {
      return 1;
    }
  }
  return 0;
}



// ==== FUN_0040192c @ 0040192c size=1012

undefined4 FUN_0040192c(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  ushort local_2e;
  undefined4 local_2c;
  char local_26;
  byte local_25;
  ushort local_24;
  ushort local_22;
  
  FUN_00400e20(1,0);
  FUN_00400de0(1,0x402);
  _ftext(1,&DAT_0041a2dc,&DAT_0041a2e0,0,auStack_38);
  uVar7 = local_2c;
  memcpy(&DAT_0041a314,DAT_0041a2dc,local_2c);
  DAT_0041a368 = uVar7;
  if (local_26 == '\x01') {
    DAT_0041a374 = local_25;
    DAT_0041a370 = local_24;
    DAT_0041a372 = local_22;
  }
  FUN_00400de0(1,0x404);
  _ftext(1,&DAT_0041a2dc,&DAT_0041a2e0,0,auStack_38);
  uVar7 = local_2c;
  memcpy(&DAT_0041a350,DAT_0041a2dc,local_2c);
  DAT_0041a36c = uVar7;
  if ((local_2e & 0x40) == 0) {
    DAT_0041a2e8 = 0;
  }
  else {
    DAT_0041a2e8 = 1;
    FUN_00400de0(1,0x408);
    _ftext(1,&DAT_0041a2dc,&DAT_0041a2e0,0,auStack_38);
    uVar7 = local_2c;
    memcpy(&DAT_0041a2ec,DAT_0041a2dc,local_2c);
    DAT_0041a364 = uVar7;
  }
  FUN_004051f4("mp4record.c","record_init",0x2d9,
               "got video main vps=%d sps=%d pps=%d, ts=%u, framerate=%u width=%u height=%u",
               DAT_0041a364,DAT_0041a368,DAT_0041a36c,local_34,DAT_0041a374,DAT_0041a370,
               DAT_0041a372);
  FUN_00400e20(1,0);
  FUN_00400de0(1,0x802);
  _ftext(1,&DAT_0041a2dc,&DAT_0041a2e0,0,auStack_38);
  uVar7 = local_2c;
  memcpy(&DAT_0041a3a4,DAT_0041a2dc,local_2c);
  DAT_0041a3f8 = uVar7;
  if (local_26 == '\x01') {
    DAT_0041a404 = local_25;
    DAT_0041a400 = local_24;
    DAT_0041a402 = local_22;
  }
  FUN_00400de0(1,0x804);
  _ftext(1,&DAT_0041a2dc,&DAT_0041a2e0,0,auStack_38);
  memcpy(&DAT_0041a3e0,DAT_0041a2dc,local_2c);
  uVar6 = (uint)DAT_0041a404;
  uVar5 = (uint)DAT_0041a400;
  uVar4 = (uint)DAT_0041a402;
  DAT_0041a378 = local_2e >> 6 & 1;
  DAT_0041a3fc = local_2c;
  uVar7 = local_34;
  FUN_004051f4("mp4record.c","record_init",0x2ef,
               "got video sub sps=%d pps=%d, ts=%u, framerate=%u width=%u height=%u",DAT_0041a3f8,
               local_2c,local_34,uVar6,uVar5,uVar4);
  FUN_00400e20(1,0);
  FUN_00400de0(1,0x100);
  puVar8 = auStack_38;
  _ftext(1,&DAT_0041a2dc,&DAT_0041a2e0,0,puVar8);
  iVar3 = DAT_0041a2dc;
  bVar1 = *(byte *)(DAT_0041a2dc + 2);
  bVar2 = bVar1 >> 6;
  if (bVar2 == 3) {
    FUN_004051f4("mp4record.c","calc_aac_config",0x290,
                 "Bad (reserved) \'profile\': 3 in first frame of ADTS file\n",puVar8,local_2c,uVar7
                 ,uVar6,uVar5,uVar4);
    bVar1 = *(byte *)(iVar3 + 2);
  }
  uVar4 = (int)(bVar1 & 0x3c) >> 2;
  if (*(int *)(&DAT_004096b4 + uVar4 * 4) == 0) {
    FUN_004051f4("mp4record.c","calc_aac_config",0x299,
                 "Bad \'sampling_frequency_index\' in first frame of ADTS file\n");
  }
  DAT_0041a2e5 = (byte)(uVar4 << 7) |
                 ((*(byte *)(iVar3 + 2) & 1) << 2 | *(byte *)(iVar3 + 3) >> 6) << 3;
  DAT_0041a2e4 = (byte)(uVar4 >> 1) | (bVar2 + 1) * '\b';
  FUN_004051f4("mp4record.c","record_init",0x30e,"got audio aac config, ts=%u",local_34);
  return 0;
}



// ==== FUN_00401d20 @ 00401d20 size=188

void FUN_00401d20(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    if (param_2 < 4) {
      return;
    }
    iVar3 = param_2 + -4;
    iVar1 = memmem(param_1 + 4,iVar3,&_fdata,4);
    iVar2 = iVar1 - (int)param_1;
    iVar4 = iVar2 + -4;
    param_2 = param_2 - iVar2;
    if (iVar1 == 0) break;
    *param_1 = (char)((uint)iVar4 >> 0x18);
    param_1[1] = (char)((uint)iVar4 >> 0x10);
    param_1[2] = (char)((uint)iVar4 >> 8);
    param_1[3] = (char)iVar4;
    param_1 = param_1 + iVar2;
  }
  param_1[3] = (char)iVar3;
  *param_1 = (char)((uint)iVar3 >> 0x18);
  param_1[1] = (char)((uint)iVar3 >> 0x10);
  param_1[2] = (char)((uint)iVar3 >> 8);
  return;
}



// ==== FUN_00401ddc @ 00401ddc size=316

void FUN_00401ddc(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 auStack_148 [9];
  char local_13f [247];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  localtime_r(param_1,&local_48);
  memset(auStack_148,0,0x100);
  pcVar1 = local_13f;
  snprintf(auStack_148,0x100,"%s/%04dY%02dM%02dD%02dH","/tmp/sd/record",local_34 + 0x76c,
           local_38 + 1,local_3c,local_40);
  while (local_13f[0] != '\0') {
    if (local_13f[0] == '/') {
      *pcVar1 = '\0';
      mkdir(auStack_148,0x1ff);
      *pcVar1 = '/';
    }
    pcVar1 = pcVar1 + 1;
    local_13f[0] = *pcVar1;
  }
  mkdir(auStack_148,0x1ff);
  snprintf(param_1 + 0x84,0x80,"%s/%04dY%02dM%02dD%02dH/%02dM%02dS%02u.mp4","/tmp/sd/record",
           local_34 + 0x76c,local_38 + 1,local_3c,local_40,local_44,local_48,param_2);
  return;
}



// ==== FUN_00401f18 @ 00401f18 size=72

void FUN_00401f18(undefined2 param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  
  local_c = 0;
  local_14 = 0x10;
  local_18 = 2;
  local_10 = param_1;
  local_e = param_1;
  FUN_00405464(DAT_0041a2d0,&local_18,0x10);
  return;
}



// ==== FUN_0040236c @ 0040236c size=76

void FUN_0040236c(void)

{
  if (DAT_0041a280 != 0) {
    return;
  }
  DAT_0041a280 = FUN_00405584("/tmp/record_event",0x8010);
  return;
}



// ==== FUN_00402ef0 @ 00402ef0 size=596

undefined4 FUN_00402ef0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30 [2];
  
  iVar1 = opendir(param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_2 + param_3) = 0x2f;
LAB_00402f50:
  iVar2 = readdir(iVar1);
  do {
    if (iVar2 == 0) {
      *(undefined1 *)(param_2 + param_3) = 0;
      closedir(iVar1);
      return 0;
    }
    if ((*(char *)(iVar2 + 0xb) == '.') &&
       ((*(char *)(iVar2 + 0xc) == '\0' ||
        ((*(char *)(iVar2 + 0xc) == '.' && (*(char *)(iVar2 + 0xd) == '\0')))))) goto LAB_00402f50;
    strcpy(param_2 + param_3 + 1,iVar2 + 0xb);
    if (*(char *)(iVar2 + 10) == '\x04') {
      iVar2 = strlen(iVar2 + 0xb);
      FUN_00402ef0(param_1,param_2,iVar2 + param_3 + 1);
      goto LAB_00402f50;
    }
    if (*(char *)(iVar2 + 10) != '\b') goto LAB_00402f50;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    iVar2 = sscanf(param_2 + DAT_0041a2a4 + 1,"%04dY%02dM%02dD%02dH/%02dM%02dS%02d.mp4",&local_4c,
                   &local_50,&local_54,&local_58,&local_5c,&local_60,local_30);
    if (iVar2 != 7) goto LAB_00402f50;
    local_4c = local_4c + -0x76c;
    local_50 = local_50 + -1;
    iVar2 = mktime(&local_60);
    if (iVar2 == -1) goto LAB_00402f50;
    iVar4 = param_1[2];
    local_34 = iVar2;
    if (iVar4 == param_1[1]) {
      param_1[1] = iVar4 + 0x400;
      iVar2 = realloc(*param_1,(iVar4 + 0x400) * 8);
      if (iVar2 == 0) break;
      iVar4 = param_1[2];
      *param_1 = iVar2;
    }
    else {
      iVar2 = *param_1;
    }
    param_1[2] = iVar4 + 1;
    piVar3 = (int *)(iVar2 + iVar4 * 8);
    piVar3[1] = local_30[0];
    *piVar3 = local_34;
    iVar2 = readdir(iVar1);
  } while( true );
  param_1[1] = param_1[1] + -0x400;
  goto LAB_00402f50;
}



// ==== FUN_00403144 @ 00403144 size=344

void FUN_00403144(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = DAT_0041a2a0;
  uVar2 = *param_1;
  uVar3 = (uVar2 + param_1[1]) - 1;
  if ((int)uVar3 <= (int)uVar2) {
    printf("skip file duration=%d\n");
    return;
  }
  uVar4 = *DAT_0041a2a0;
  if (uVar4 != 0) {
    uVar5 = DAT_0041a2a0[1] + 1;
    if ((((int)(DAT_0041a2a0[uVar5 * 2 + 2] + 1) < (int)uVar2) ||
        (0xe0f < (int)(uVar3 - DAT_0041a2a0[uVar5 * 2 + 1]))) ||
       (uVar2 != ((int)uVar2 / 0x3c) * 0x3c)) {
      uVar5 = uVar5 & 0x80000fff;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffff000) + 1;
      }
      DAT_0041a2a0[1] = uVar5;
      if (uVar4 < 0x1000) {
        *puVar1 = uVar4 + 1;
      }
      else {
        uVar4 = puVar1[2] + 1 & 0x80000fff;
        if ((int)uVar4 < 0) {
          puVar1[2] = (uVar4 - 1 | 0xfffff000) + 1;
        }
        else {
          puVar1[2] = uVar4;
        }
      }
      puVar1[uVar5 * 2 + 3] = uVar2;
      puVar1[uVar5 * 2 + 4] = uVar3;
    }
    else if ((int)DAT_0041a2a0[uVar5 * 2 + 2] < (int)uVar3) {
      DAT_0041a2a0[uVar5 * 2 + 2] = uVar3;
      return;
    }
    return;
  }
  DAT_0041a2a0[3] = uVar2;
  puVar1[4] = uVar3;
  *puVar1 = 1;
  return;
}



// ==== FUN_00403420 @ 00403420 size=156

undefined4 FUN_00403420(void)

{
  undefined4 uVar1;
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
  undefined1 auStack_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_10 [3];
  
  if (*DAT_0041a2a0 != 0) {
    local_10[0] = DAT_0041a2a0[(DAT_0041a2a0[2] + 1) * 2 + 1];
    localtime_r(local_10,auStack_3c);
    local_50 = 0;
    local_54 = local_28;
    local_4c = 0;
    local_58 = local_2c;
    local_48 = 0;
    local_5c = local_30;
    local_44 = 0;
    local_40 = 0;
    local_60 = local_34;
    local_64 = 0x3b;
    local_68 = 0x3b;
    uVar1 = mktime(&local_68);
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_004034bc @ 004034bc size=184

void FUN_004034bc(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = DAT_0041a2a0;
  iVar4 = *DAT_0041a2a0;
  if (iVar4 == 0) {
    return;
  }
  uVar3 = DAT_0041a2a0[2];
  iVar2 = iVar4;
  do {
    uVar5 = uVar3 + 1;
    uVar6 = uVar5 & 0x80000fff;
    if (param_1 < DAT_0041a2a0[uVar5 * 2 + 1]) {
LAB_00403554:
      if (iVar2 == iVar4) {
        return;
      }
      if (iVar2 != 0) {
        *piVar1 = iVar2;
        piVar1[2] = uVar3;
        return;
      }
      break;
    }
    if (param_1 < DAT_0041a2a0[uVar5 * 2 + 2]) {
      DAT_0041a2a0[uVar5 * 2 + 1] = param_1 + 1;
      goto LAB_00403554;
    }
    iVar2 = iVar2 + -1;
    uVar3 = uVar6;
    if ((int)uVar6 < 0) {
      uVar3 = (uVar6 - 1 | 0xfffff000) + 1;
    }
  } while (iVar2 != 0);
  *piVar1 = 0;
  piVar1[2] = 0;
  piVar1[1] = 0;
  return;
}



// ==== FUN_00403580 @ 00403580 size=204

void FUN_00403580(void)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_0041a1f4;
  if (*(int *)(PTR_DAT_0041a1f4 + -0x5e90) != -1) {
    (*(code *)PTR_munmap_0041a250)(*(int *)(PTR_DAT_0041a1f4 + -0x5e90),0x1b412c);
    *(undefined4 *)(puVar1 + -0x5e90) = 0xffffffff;
  }
  if (*(int *)(puVar1 + -0x5e8c) != 0) {
    (*(code *)PTR_sem_close_0041a234)();
    *(undefined4 *)(puVar1 + -0x5e8c) = 0;
  }
  if (*(int *)(puVar1 + -0x5e88) != 0) {
    (*(code *)PTR_sem_close_0041a234)();
    *(undefined4 *)(puVar1 + -0x5e88) = 0;
  }
  piVar2 = (int *)(PTR_DAT_0041a1f4 + -0x5e84);
  do {
    if (*piVar2 != 0) {
      (*(code *)PTR_sem_close_0041a234)(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)(puVar1 + -0x5e40));
  return;
}



// ==== FUN_0040364c @ 0040364c size=156

void FUN_0040364c(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0041a1f4;
  (*(code *)PTR_sem_wait_0041a244)(*(undefined4 *)(PTR_DAT_0041a1f4 + -0x5e88));
  iVar2 = **(int **)(puVar1 + -0x5e90) + 1;
  **(int **)(puVar1 + -0x5e90) = iVar2;
  if (iVar2 != 1) {
    (*(code *)PTR_sem_post_0041a240)(*(undefined4 *)(puVar1 + -0x5e88));
    return;
  }
  (*(code *)PTR_sem_wait_0041a244)(*(undefined4 *)(puVar1 + -0x5e8c));
  (*(code *)PTR_sem_post_0041a240)(*(undefined4 *)(puVar1 + -0x5e88));
  return;
}



// ==== FUN_004036e8 @ 004036e8 size=124

void FUN_004036e8(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0041a1f4;
  (*(code *)PTR_sem_wait_0041a244)(*(undefined4 *)(PTR_DAT_0041a1f4 + -0x5e88));
  iVar2 = **(int **)(puVar1 + -0x5e90) + -1;
  **(int **)(puVar1 + -0x5e90) = iVar2;
  if (iVar2 == 0) {
    (*(code *)PTR_sem_post_0041a240)(*(undefined4 *)(puVar1 + -0x5e8c));
  }
  (*(code *)PTR_sem_post_0041a240)(*(undefined4 *)(puVar1 + -0x5e88));
  return;
}



// ==== FUN_00403764 @ 00403764 size=244

uint FUN_00403764(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_0041a1f4;
  uVar3 = param_1 + param_3;
  if (*(uint *)(PTR_DAT_0041a1f4 + -0x5e40) < uVar3) {
    iVar5 = *(uint *)(PTR_DAT_0041a1f4 + -0x5e40) - param_1;
    iVar2 = (*(code *)PTR_memcpy_0041a248)(param_2,param_1,iVar5);
    iVar4 = *(int *)(puVar1 + -0x5e90);
    (*(code *)PTR_memcpy_0041a248)(iVar2 + iVar5,iVar4 + 300,param_3 - iVar5);
    return iVar4 + 300 + (param_3 - iVar5);
  }
  (*(code *)PTR_memcpy_0041a248)(param_2,param_1);
  if (uVar3 != *(uint *)(puVar1 + -0x5e40)) {
    return uVar3;
  }
  return *(int *)(puVar1 + -0x5e90) + 300;
}



// ==== FUN_00403858 @ 00403858 size=200

void FUN_00403858(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  pcVar5 = (code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3764);
  uVar1 = (*pcVar5)(param_1,param_2 + 0x12,1);
  if (*(byte *)(param_2 + 0x12) != 1) {
    bVar2 = *(byte *)(param_2 + 0x12) ^ 2;
    uVar4 = 0xffffffff;
    if (bVar2 == 0) {
      uVar4 = 4;
    }
    uVar3 = 5;
    if (bVar2 != 0) {
      uVar3 = 0;
    }
    *param_3 = uVar3;
    (*pcVar5)(uVar1,param_2 + 0x13,uVar4);
    return;
  }
  *param_3 = 6;
  (*pcVar5)(uVar1,param_2 + 0x13,5);
  return;
}



// ==== FUN_00403b1c @ 00403b1c size=92

bool FUN_00403b1c(int param_1,uint param_2,uint param_3,int param_4)

{
  if ((((param_2 & 0xf) == 0) || ((param_2 & 0xf) == (param_3 & 0xf))) &&
     ((param_3 & param_2 & 0xff00) != 0)) {
    if (param_1 != 0) {
      param_1 = param_1 + 1;
      if (param_1 == 0) {
        param_1 = 1;
      }
      return (uint)(param_4 - param_1) < 0x7fffffff;
    }
    return true;
  }
  return false;
}



// ==== FUN_004044b0 @ 004044b0 size=128

void FUN_004044b0(int param_1,undefined2 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0041a1f4;
  (*(code *)PTR_sem_wait_0041a244)(*(undefined4 *)(PTR_DAT_0041a1f4 + -0x5e8c));
  *(undefined2 *)(*(int *)(puVar1 + -0x5e90) + (param_1 + 2) * 0x10 + 8) = param_2;
  (*(code *)PTR_sem_post_0041a240)(*(undefined4 *)(puVar1 + -0x5e8c));
  return;
}



// ==== FUN_00404b04 @ 00404b04 size=156

int FUN_00404b04(void)

{
  int iVar1;
  undefined1 auStack_20 [12];
  int local_14;
  
  (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x364c))();
  iVar1 = *(int *)(PTR_DAT_0041a1f4 + -0x5e90);
  if (*(int *)(iVar1 + 4) < 1) {
    local_14 = 0;
  }
  else {
    (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3764))
              (iVar1 + *(int *)(iVar1 + 0x10) + 300,auStack_20,0x16);
    local_14 = *(int *)(iVar1 + 0x14) - local_14;
  }
  (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8))();
  return local_14;
}



// ==== FUN_00404c1c @ 00404c1c size=452

void FUN_00404c1c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int local_60;
  undefined4 local_5c;
  int local_54;
  ushort local_50;
  undefined1 auStack_48 [12];
  int local_3c;
  int local_30;
  
  (*(code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x364c))();
  iVar3 = *(int *)(PTR_DAT_0041a1f4 + -0x5e90);
  if ((param_2 == 0) || (*(int *)(iVar3 + 4) < 1)) {
    iVar5 = param_1 << 4;
    *(undefined4 *)(iVar3 + (param_1 + 2) * 0x10 + 4) = 0;
  }
  else {
    pcVar6 = (code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x3764);
    (*pcVar6)(iVar3 + *(int *)(iVar3 + 0x10) + 300,auStack_48,0x16);
    if (param_2 < (uint)(*(int *)(iVar3 + 0x14) - local_3c)) {
      iVar5 = param_1 * 0x10;
      iVar4 = *(int *)(iVar3 + 4);
      local_30 = param_2 + local_3c;
      iVar1 = *(int *)(iVar3 + 0x10);
      if (0 < iVar4) {
        do {
          (*pcVar6)(iVar3 + iVar1 + 300,&local_60,0x16);
          if (((local_50 & 0x200) == 0) && ((uint)(local_54 - local_30) < 0x7fffffff)) break;
          iVar2 = iVar1 + local_60;
          iVar4 = (iVar4 + -0x16) - local_60;
          iVar1 = iVar2 + 0x16;
          *(undefined4 *)(iVar3 + iVar5 + 0x24) = local_5c;
          if (0x1b3fff < iVar1) {
            iVar1 = iVar2 + -0x1b3fea;
          }
        } while (0 < iVar4);
      }
    }
    else {
      iVar5 = param_1 << 4;
      *(undefined4 *)(iVar3 + (param_1 + 2) * 0x10 + 4) = *(undefined4 *)(iVar3 + 0x18);
    }
  }
  pcVar6 = (code *)(PTR___DT_MIPS_BASE_ADDRESS_0041a1f8 + 0x36e8);
  *(undefined4 *)(iVar3 + iVar5 + 0x1c) = 1;
  (*pcVar6)();
  return;
}



// ==== FUN_00404de0 @ 00404de0 size=160

void FUN_00404de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (*(code *)PTR_fshare_read_0041a200)(param_1,param_2,param_3,param_4,param_5);
    if (-2 < iVar1) break;
    (*(code *)PTR_fshare_wait_0041a204)(param_1);
  }
  return;
}



// ==== FUN_00404e80 @ 00404e80 size=160

void FUN_00404e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (*(code *)PTR_fshare_read_newest_0041a208)(param_1,param_2,param_3,param_4,param_5);
    if (-2 < iVar1) break;
    (*(code *)PTR_fshare_wait_0041a204)(param_1);
  }
  return;
}



// ==== FUN_00404f20 @ 00404f20 size=192

int FUN_00404f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = (*(code *)PTR_fshare_read_0041a200)(param_1,param_2,param_3,param_4,param_5);
    if (0 < iVar1) {
      return iVar1;
    }
    (*(code *)PTR_ms_sleep_0041a20c)(10);
  } while (iVar2 != 0);
  return iVar1;
}



// ==== FUN_00404fe0 @ 00404fe0 size=192

int FUN_00404fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = (*(code *)PTR_fshare_read_newest_0041a208)(param_1,param_2,param_3,param_4,param_5);
    if (0 < iVar1) {
      return iVar1;
    }
    (*(code *)PTR_ms_sleep_0041a20c)(10);
  } while (iVar2 != 0);
  return iVar1;
}



// ==== FUN_004050a0 @ 004050a0 size=28

void FUN_004050a0(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



// ==== FUN_004050bc @ 004050bc size=28

void FUN_004050bc(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memcpy(param_1,param_3,param_4);
  return;
}



// ==== FUN_004050d8 @ 004050d8 size=284

undefined4 FUN_004050d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_80 [2];
  undefined2 local_78;
  char acStack_76 [4];
  char acStack_72 [4];
  char local_6e [4];
  char local_6a;
  int aiStack_10 [2];
  
  if (param_1 == (int *)0x0) {
    puts("invalid para, is null\r");
    uVar2 = 0xffffffff;
  }
  else {
    memset(local_80,0,0x78);
    local_78 = 1;
    acStack_76[0] = s__tmp_logsock_00409968[0];
    acStack_76[1] = s__tmp_logsock_00409968[1];
    acStack_76[2] = s__tmp_logsock_00409968[2];
    acStack_76[3] = s__tmp_logsock_00409968[3];
    acStack_72[0] = s__tmp_logsock_00409968[4];
    acStack_72[1] = s__tmp_logsock_00409968[5];
    acStack_72[2] = s__tmp_logsock_00409968[6];
    acStack_72[3] = s__tmp_logsock_00409968[7];
    local_6e[0] = s__tmp_logsock_00409968[8];
    local_6e[1] = s__tmp_logsock_00409968[9];
    local_6e[2] = s__tmp_logsock_00409968[10];
    local_6e[3] = s__tmp_logsock_00409968[0xb];
    local_6a = s__tmp_logsock_00409968[0xc];
    local_80[1] = 0x6e;
    local_80[0] = socket(1,1,0);
    if (local_80[0] < 0) {
      puts("create socket fail\r");
      uVar2 = 0xffffffff;
    }
    else {
      piVar6 = local_80;
      do {
        piVar5 = piVar6;
        piVar4 = param_1;
        piVar6 = piVar5 + 4;
        iVar1 = piVar5[1];
        *piVar4 = *piVar5;
        iVar3 = piVar5[2];
        piVar4[1] = iVar1;
        iVar1 = piVar5[3];
        piVar4[2] = iVar3;
        piVar4[3] = iVar1;
        param_1 = piVar4 + 4;
      } while (piVar6 != aiStack_10);
      uVar2 = 0;
      iVar1 = piVar5[5];
      piVar4[4] = *piVar6;
      piVar4[5] = iVar1;
    }
  }
  return uVar2;
}



// ==== FUN_004051f4 @ 004051f4 size=536

void FUN_004051f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_0041a2b8 == (undefined4 *)0x0) {
    iVar1 = FUN_004050d8(&DAT_0041a40c);
    if (iVar1 == 0) {
      DAT_0041a2b8 = (undefined4 *)&DAT_0041a40c;
    }
    else if (DAT_0041a2b8 == (undefined4 *)0x0) goto LAB_00405344;
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
  iVar1 = sendto(*DAT_0041a2b8,&local_2828,uVar2 + 4,0x40,DAT_0041a2b8 + 2,DAT_0041a2b8[1]);
  if (0 < iVar1) {
    return;
  }
LAB_00405344:
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



// ==== FUN_0040540c @ 0040540c size=88

int FUN_0040540c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = 8;
  local_20 = 0x200;
  local_28 = 0;
  iVar1 = mq_open(param_2,0x182,0x1b6,&local_28);
  *param_1 = iVar1;
  return -(uint)(iVar1 == -1);
}



// ==== FUN_00405464 @ 00405464 size=44

undefined4 FUN_00405464(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
    uVar1 = mq_send();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_00405490 @ 00405490 size=244

int FUN_00405490(undefined4 param_1,undefined4 param_2)

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



// ==== FUN_00405584 @ 00405584 size=168

int FUN_00405584(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = open(param_1,0x102,0x1ff);
  if (iVar1 == -1) {
    iVar2 = 0;
  }
  else {
    lseek(iVar1,param_2 + -1,0);
    write(iVar1,"",1);
    iVar2 = mmap(0,param_2,3,1,iVar1,0);
    if (iVar2 == -1) {
      close(iVar1);
      iVar2 = 0;
    }
  }
  return iVar2;
}



// ==== FUN_00405694 @ 00405694 size=76

void FUN_00405694(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = fcntl(param_1,3);
  if (uVar1 != 0xffffffff) {
    fcntl(param_1,4,uVar1 | 0x80);
    return;
  }
  return;
}



// ==== FUN_004056e0 @ 004056e0 size=440

int FUN_004056e0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint local_b8 [32];
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = 0;
  if (0 < param_3) {
    iVar1 = 0;
    while( true ) {
      puVar4 = local_b8;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (&local_38 != puVar4);
      uVar5 = *(uint *)((int)param_1 + 0x14);
      puVar4 = local_b8 + (uVar5 >> 5);
      *puVar4 = *puVar4 | 1 << (uVar5 & 0x1f);
      iVar2 = select(uVar5 + 1,0,local_b8,0,0);
      if (iVar2 == -1) break;
      clock_gettime(4,&local_30);
      iVar2 = write(*(undefined4 *)((int)param_1 + 0x14),param_2 + iVar1,param_3 - iVar1);
      clock_gettime(4,&local_38);
      *param_1 = (longlong)(int)(local_38 - local_30) * 1000000000 + (longlong)(local_34 - local_2c)
                 + *param_1;
      if (iVar2 == -1) {
        piVar3 = (int *)__errno_location();
        if (*piVar3 != 0xb) break;
      }
      else {
        iVar1 = iVar1 + iVar2;
      }
      if (param_3 <= iVar1) {
        return iVar1;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}



// ==== FUN_00405898 @ 00405898 size=156

int FUN_00405898(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_2 + uVar1;
  if (uVar2 < uVar4) {
    uVar3 = (uVar4 - uVar2) + 0xfff & 0xfffff000;
    uVar2 = realloc(param_1[2],uVar3 + uVar2);
    if (uVar2 == 0) {
      return 0;
    }
    uVar1 = *param_1;
    param_1[2] = uVar2;
    uVar4 = param_2 + uVar1;
    param_1[1] = param_1[1] + uVar3;
  }
  else {
    uVar2 = param_1[2];
  }
  *param_1 = uVar4;
  return uVar2 + uVar1;
}



// ==== FUN_00405934 @ 00405934 size=88

void FUN_00405934(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00405898(param_1,param_3);
  if (iVar1 != 0) {
    memcpy(iVar1,param_2,param_3);
    return;
  }
  return;
}



// ==== FUN_0040598c @ 0040598c size=292

undefined4 FUN_0040598c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = param_1 + 0x1028;
  iVar4 = *(int *)(param_1 + 0x1028);
  FUN_00405898(iVar3,8);
  iVar2 = *(int *)(param_1 + 0x1028);
  FUN_00405898(iVar3,0x10);
  puVar1 = (undefined4 *)FUN_00405898(iVar3,0xc);
  *(undefined1 *)((int)puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0;
  *(undefined1 *)puVar1 = 0;
  *(undefined1 *)((int)puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 2) = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 7) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  *puVar1 = 0xc000000;
  puVar1[1] = 0x206c7275;
  *(undefined1 *)((int)puVar1 + 0xb) = 1;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1030) + iVar2);
  memset(puVar1,0,0x10);
  *puVar1 = 0x1c000000;
  iVar2 = *(int *)(param_1 + 0x1030);
  puVar1[1] = 0x66657264;
  puVar5 = (undefined4 *)(iVar2 + iVar4);
  puVar1[3] = 0x1000000;
  *puVar5 = 0x24000000;
  puVar5[1] = 0x666e6964;
  return 0x24;
}



// ==== FUN_00405ab0 @ 00405ab0 size=128

undefined4 FUN_00405ab0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00405898(param_1 + 0x1028,0x1c);
  memset(puVar1,0,0x1c);
  *puVar1 = 0x1c000000;
  puVar1[1] = 0x63737473;
  puVar1[3] = 0x1000000;
  puVar1[4] = 0x1000000;
  puVar1[5] = 0x1000000;
  puVar1[6] = 0x1000000;
  return 0x1c;
}



// ==== FUN_00405b30 @ 00405b30 size=436

undefined4 FUN_00405b30(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar3 = FUN_004056e0(param_1,param_1 + 0x1c,*(int *)(param_1 + 0x18));
      uVar1 = 0xffffffff;
      if (iVar3 == *(int *)(param_1 + 0x18)) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        return 0;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    if ((iVar3 != 0) || (param_3 < 0x1000)) {
      iVar4 = 0x1000 - iVar3;
      if (param_3 <= 0x1000 - iVar3) {
        iVar4 = param_3;
      }
      param_3 = param_3 - iVar4;
      memcpy(param_1 + iVar3 + 0x1c,param_2);
      iVar3 = iVar4 + *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar3;
      if (iVar3 == 0x1000) {
        iVar3 = FUN_004056e0(param_1,param_1 + 0x1c,0x1000);
        if (iVar3 != 0x1000) {
          return 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      if (param_3 == 0) {
        return 0;
      }
      param_2 = param_2 + iVar4;
    }
    iVar3 = param_3 + 0xfff;
    if (-1 < param_3) {
      iVar3 = param_3;
    }
    iVar4 = (iVar3 >> 0xc) * 0x1000;
    if (iVar4 != 0) {
      iVar2 = FUN_004056e0(param_1,param_2,iVar4);
      param_3 = param_3 + (iVar3 >> 0xc) * -0x1000;
      if (iVar4 != iVar2) {
        return 0xffffffff;
      }
      if (param_3 == 0) {
        return 0;
      }
      param_2 = param_2 + iVar4;
    }
    memcpy(param_1 + 0x1c,param_2,param_3);
    uVar1 = 0;
    *(int *)(param_1 + 0x18) = param_3;
  }
  return uVar1;
}



// ==== FUN_00405ce4 @ 00405ce4 size=140

int FUN_00405ce4(int param_1,int param_2)

{
  int iVar1;
  
  if (((0 < param_1) && (0 < param_2)) &&
     (iVar1 = calloc(1,param_2 * 0xc0 + 0x1040 + param_1 * 0x4c), iVar1 != 0)) {
    *(int *)(iVar1 + 0xc) = param_1;
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    return iVar1;
  }
  return 0;
}



// ==== FUN_00405d70 @ 00405d70 size=136

undefined4
FUN_00405d70(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
            undefined2 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  int iVar1;
  
  if (((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x10))) &&
     (iVar1 = param_1 + *(int *)(param_1 + 0xc) * 0x4c + param_2 * 0xc0 + 0xf7c, iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 4) = param_3;
    *(undefined4 *)(iVar1 + 8) = param_4;
    *(undefined2 *)(iVar1 + 0x10) = param_5;
    *(undefined2 *)(iVar1 + 0x12) = param_6;
    *(undefined1 *)(iVar1 + 0x14) = param_7;
    *(undefined1 *)(iVar1 + 0x16) = param_8;
    *(undefined1 *)(iVar1 + 0x15) = param_9;
    return 0;
  }
  return 0xffffffff;
}



// ==== FUN_00405df8 @ 00405df8 size=88

undefined4
FUN_00405df8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
            undefined1 param_6)

{
  int iVar1;
  
  if (((0 < param_2) && (param_2 <= *(int *)(param_1 + 0xc))) &&
     (iVar1 = param_1 + 0xff0 + param_2 * 0x4c, iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 4) = param_3;
    *(undefined4 *)(iVar1 + 8) = param_4;
    *(undefined2 *)(iVar1 + 0x12) = param_5;
    *(undefined1 *)(iVar1 + 0x18) = param_6;
    return 0;
  }
  return 0xffffffff;
}



// ==== FUN_00405e50 @ 00405e50 size=196

undefined4 FUN_00405e50(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 < 1) || (*(int *)(param_1 + 0x10) < param_2)) {
    return 0xffffffff;
  }
  iVar2 = param_1 + *(int *)(param_1 + 0xc) * 0x4c + param_2 * 0xc0 + 0xf7c;
  if ((iVar2 == 0) || (0x28 < param_4)) {
    uVar1 = 0xffffffff;
  }
  else {
    if ((param_3 != 0) && (param_4 != 0)) {
      memcpy(iVar2 + 0x17,param_3,param_4);
      *(uint *)(iVar2 + 0x40) = param_4;
      return 0;
    }
    *(undefined4 *)(iVar2 + 0x40) = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_00405f14 @ 00405f14 size=160

undefined4 FUN_00405f14(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x10))) {
    iVar2 = param_1 + *(int *)(param_1 + 0xc) * 0x4c + param_2 * 0xc0 + 0xf7c;
    if ((iVar2 == 0) || (0x3c < param_4)) {
      uVar1 = 0xffffffff;
    }
    else {
      memcpy(iVar2 + 0x44,param_3,param_4);
      uVar1 = 0;
      *(uint *)(iVar2 + 0x80) = param_4;
    }
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_00405fb4 @ 00405fb4 size=160

undefined4 FUN_00405fb4(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0x10))) {
    iVar2 = param_1 + *(int *)(param_1 + 0xc) * 0x4c + param_2 * 0xc0 + 0xf7c;
    if ((iVar2 == 0) || (0x14 < param_4)) {
      uVar1 = 0xffffffff;
    }
    else {
      memcpy(iVar2 + 0x84,param_3,param_4);
      uVar1 = 0;
      *(uint *)(iVar2 + 0x98) = param_4;
    }
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_00406054 @ 00406054 size=232

undefined4 FUN_00406054(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  
  if ((0 < param_2) && (param_2 <= *(int *)(param_1 + 0xc))) {
    iVar2 = param_1 + 0xff0 + param_2 * 0x4c;
    if ((iVar2 == 0) || (0x10 < param_4)) {
      uVar1 = 0xffffffff;
    }
    else {
      memcpy(iVar2 + 0x19,param_3,param_4);
      *(uint *)(iVar2 + 0x2c) = param_4;
      uVar3 = *(byte *)(iVar2 + 0x1a) >> 3 & 0xf;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)
            (&DAT_00409bc0 +
            ((*(byte *)(iVar2 + 0x19) & 7) << 1 | (uint)(*(byte *)(iVar2 + 0x1a) >> 7)) * 4);
      uVar1 = 0;
      if (uVar3 == 7) {
        *(undefined2 *)(iVar2 + 0x10) = 8;
        return 0;
      }
      *(ushort *)(iVar2 + 0x10) = uVar3;
    }
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_0040613c @ 0040613c size=332

undefined4 FUN_0040613c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) == -1)) {
    iVar1 = open(param_2,0x301,0x1a4);
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 != -1) {
      iVar1 = FUN_00405694(iVar1);
      if (iVar1 == 0) {
        iVar1 = time(0);
        local_38 = 0x6d6f7369;
        local_30 = 0x6d6f7369;
        local_2c = 0x326f7369;
        local_28 = 0x31637661;
        *(int *)(param_1 + 0x101c) = iVar1 + 0x7c25b080;
        local_40 = 0x20000000;
        local_24 = 0x3134706d;
        local_20 = 0x8000000;
        local_3c = 0x70797466;
        local_34 = 0x20000;
        local_1c = 0x7461646d;
        FUN_00405b30(param_1,&local_40,0x28);
        uVar2 = 0;
      }
      else {
        close(*(undefined4 *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x18) = 0;
        remove(param_2);
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}



// ==== FUN_00406288 @ 00406288 size=32

bool FUN_00406288(int param_1)

{
  if (param_1 != 0) {
    return *(int *)(param_1 + 0x14) != -1;
  }
  return false;
}



// ==== FUN_004062a8 @ 004062a8 size=360

undefined4
FUN_004062a8(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,int param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_2 < 1) || (*(int *)(param_1 + 0x10) < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + *(int *)(param_1 + 0xc) * 0x4c + param_2 * 0xc0 + 0xf7c;
  }
  iVar3 = *(int *)(param_1 + 0x1024);
  FUN_00405b30(param_1,param_3,param_4);
  iVar5 = *(int *)(iVar2 + 0xc);
  *(uint *)(param_1 + 0x1024) = *(int *)(param_1 + 0x1024) + param_4;
  *(int *)(iVar2 + 0xc) = iVar5 + 1;
  uVar4 = iVar3 + 0x28;
  if (param_6 != 0) {
    puVar1 = (uint *)FUN_00405898(iVar2 + 0x9c,4);
    uVar6 = *(uint *)(iVar2 + 0xc);
    *puVar1 = uVar6 << 0x18 | uVar6 >> 0x18 | uVar6 >> 8 & 0xff00 | (uVar6 & 0xff00) << 8;
  }
  puVar1 = (uint *)FUN_00405898(iVar2 + 0xa8,4);
  *puVar1 = param_4 << 0x18 | param_4 >> 0x18 | param_4 >> 8 & 0xff00 | (param_4 & 0xff00) << 8;
  puVar1 = (uint *)FUN_00405898(iVar2 + 0xb4,4);
  *puVar1 = uVar4 * 0x1000000 | uVar4 >> 0x18 | uVar4 >> 8 & 0xff00 | uVar4 * 0x100 & 0xff0000;
  return 0;
}



// ==== FUN_00406410 @ 00406410 size=280

undefined4 FUN_00406410(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_2 < 1) || (*(int *)(param_1 + 0xc) < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 0xff0 + param_2 * 0x4c;
  }
  iVar3 = *(int *)(param_1 + 0x1024);
  FUN_00405b30(param_1,param_3,param_4);
  iVar5 = *(int *)(iVar2 + 0xc);
  uVar4 = iVar3 + 0x28;
  *(uint *)(param_1 + 0x1024) = *(int *)(param_1 + 0x1024) + param_4;
  *(int *)(iVar2 + 0xc) = iVar5 + 1;
  puVar1 = (uint *)FUN_00405898(iVar2 + 0x34,4);
  *puVar1 = param_4 << 0x18 | param_4 >> 0x18 | param_4 >> 8 & 0xff00 | (param_4 & 0xff00) << 8;
  *(uint *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + param_4;
  puVar1 = (uint *)FUN_00405898(iVar2 + 0x40,4);
  *puVar1 = uVar4 * 0x1000000 | uVar4 >> 0x18 | uVar4 >> 8 & 0xff00 | uVar4 * 0x100 & 0xff0000;
  return 0;
}



// ==== FUN_00406528 @ 00406528 size=7336

undefined4 FUN_00406528(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint local_60;
  undefined2 local_5c;
  undefined1 local_5a [2];
  undefined4 *local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  uint *local_34;
  int local_30;
  undefined1 *local_2c;
  
  if ((param_1 != (undefined4 *)0x0) && (puVar9 = param_1 + 0x40a, param_1[5] != -1)) {
    local_30 = param_1[0x40a];
    uVar16 = 0;
    FUN_00405898(puVar9,8);
    puVar7 = (undefined4 *)FUN_00405898(puVar9,0x6c);
    iVar13 = param_1[4];
    iVar15 = param_1[3];
    if (0 < iVar13) {
      uVar16 = 0;
      iVar22 = 1;
      puVar20 = param_1 + iVar15 * 0x13 + 0x40f;
      do {
        iVar22 = iVar22 + 1;
        lVar5 = (ulonglong)(puVar20[3] * puVar20[2]) * 1000;
        *puVar20 = puVar20[3] * puVar20[2];
        uVar8 = FUN_004088c8((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),puVar20[1],0);
        if (uVar16 < uVar8) {
          uVar16 = uVar8;
        }
        puVar20 = puVar20 + 0x30;
      } while (iVar22 != iVar13 + 1);
    }
    if (0 < iVar15) {
      iVar13 = 1;
      puVar20 = param_1 + 0x40f;
      do {
        iVar13 = iVar13 + 1;
        lVar5 = (ulonglong)(puVar20[3] * puVar20[2]) * 1000;
        *puVar20 = puVar20[3] * puVar20[2];
        uVar8 = FUN_004088c8((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),puVar20[1],0);
        if (uVar16 < uVar8) {
          uVar16 = uVar8;
        }
        puVar20 = puVar20 + 0x13;
      } while (iVar13 != iVar15 + 1);
    }
    param_1[2] = uVar16;
    memset(puVar7,0,0x6c);
    uVar8 = param_1[0x407];
    *puVar7 = 0x6c000000;
    puVar7[1] = 0x6468766d;
    uVar8 = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
    puVar7[3] = uVar8;
    puVar7[4] = uVar8;
    puVar7[5] = 0xe8030000;
    puVar7[6] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8;
    puVar7[7] = 0x100;
    iVar13 = param_1[4];
    iVar15 = param_1[3];
    *(undefined1 *)(puVar7 + 8) = 1;
    *(undefined1 *)((int)puVar7 + 0x21) = 0;
    uVar16 = iVar13 + iVar15 + 1;
    puVar7[0xb] = 0x100;
    puVar7[0xf] = 0x100;
    puVar7[0x13] = 0x40;
    puVar7[0x1a] = uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 |
                   uVar16 * 0x100 & 0xff0000;
    param_1[0x408] = 0;
    if (iVar13 < 1) {
      local_34 = &local_60;
      local_50 = 0x74;
    }
    else {
      local_38 = param_1 + 0x40f;
      local_34 = &local_60;
      iVar22 = 0;
      iVar13 = 0;
      local_50 = 0x74;
      local_58 = (undefined4 *)&_DYNAMIC_LINKING;
      while( true ) {
        local_54 = param_1[0x40a];
        param_1[0x408] = iVar13 + 1;
        param_1[0x40e] = (int)local_38 + iVar22 + iVar15 * 0x4c;
        FUN_00405898(puVar9,8);
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x5c);
        puVar20 = (uint *)param_1[0x40e];
        local_2c = (undefined1 *)0x3e8;
        uVar16 = FUN_004088c8((int)((ulonglong)*puVar20 * 1000),
                              (int)((ulonglong)*puVar20 * 1000 >> 0x20),puVar20[1],0);
        memset(puVar7,0,0x5c);
        *puVar7 = 0x5c000000;
        puVar7[1] = 0x64686b74;
        *(undefined1 *)((int)puVar7 + 0xb) = 3;
        uVar8 = param_1[0x407];
        uVar21 = param_1[0x408];
        uVar8 = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
        puVar7[3] = uVar8;
        puVar7[4] = uVar8;
        puVar7[5] = uVar21 << 0x18 | uVar21 >> 0x18 | uVar21 >> 8 & 0xff00 | (uVar21 & 0xff00) << 8;
        puVar7[7] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8;
        uVar16 = puVar20[4];
        puVar7[0xc] = 0x100;
        uVar4 = *(ushort *)((int)puVar20 + 0x12);
        puVar7[0x10] = 0x100;
        puVar7[0x14] = 0x40;
        iVar15 = param_1[0x40a];
        puVar7[0x15] = ((ushort)uVar16 & 0xff) << 8 | (uint)(ushort)((ushort)uVar16 >> 8);
        puVar7[0x16] = (uVar4 & 0xff) << 8 | (uint)(uVar4 >> 8);
        FUN_00405898(puVar9,8);
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x1c);
        lVar5 = (ulonglong)*(uint *)param_1[0x40e] * ZEXT48(local_2c);
        uVar8 = FUN_004088c8((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),((uint *)param_1[0x40e])[1],
                             0);
        memset(puVar7,0,0x1c);
        *puVar7 = 0x1c000000;
        uVar16 = (int)puVar7 + 7U & 3;
        puVar20 = (uint *)(((int)puVar7 + 7U) - uVar16);
        *puVar20 = *puVar20 & -1 << (uVar16 + 1) * 8 | 0x74736c65U >> (3 - uVar16) * 8;
        uVar16 = (uint)(puVar7 + 1) & 3;
        puVar20 = (uint *)((int)(puVar7 + 1) - uVar16);
        *puVar20 = *puVar20 & 0xffffffffU >> (4 - uVar16) * 8 | 0x74736c65 << uVar16 * 8;
        iVar13 = param_1[0x40c];
        puVar7[3] = 0x1000000;
        puVar7[4] = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
        *(undefined1 *)((int)puVar7 + 0x19) = 1;
        *(undefined1 *)(puVar7 + 6) = 0;
        local_4c = param_1[0x40a];
        *(undefined4 *)(iVar13 + iVar15) = 0x24000000;
        ((undefined4 *)(iVar13 + iVar15))[1] = 0x73746465;
        FUN_00405898(puVar9,8);
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x20);
        puVar20 = (uint *)param_1[0x40e];
        memset(puVar7,0,0x20);
        uVar8 = param_1[0x407];
        *puVar7 = 0x20000000;
        uVar16 = puVar20[1];
        puVar7[1] = 0x6468646d;
        uVar21 = *puVar20;
        uVar8 = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
        puVar7[3] = uVar8;
        puVar7[4] = uVar8;
        puVar7[5] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8;
        puVar7[6] = uVar21 << 0x18 | uVar21 >> 0x18 | uVar21 >> 8 & 0xff00 | (uVar21 & 0xff00) << 8;
        *(undefined1 *)(puVar7 + 7) = 0x55;
        *(undefined1 *)((int)puVar7 + 0x1d) = 0xc4;
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x2d);
        memset(puVar7,0,0x2d);
        *puVar7 = 0x2d000000;
        puVar7[1] = 0x726c6468;
        uVar11 = s_VideoHandler_00409b98._0_4_;
        puVar7[4] = 0x65646976;
        uVar12 = s_VideoHandler_00409b98._4_4_;
        uVar16 = (int)puVar7 + 0x23U & 3;
        puVar20 = (uint *)(((int)puVar7 + 0x23U) - uVar16);
        *puVar20 = *puVar20 & -1 << (uVar16 + 1) * 8 | (uint)uVar11 >> (3 - uVar16) * 8;
        uVar16 = (uint)(puVar7 + 8) & 3;
        puVar20 = (uint *)((int)(puVar7 + 8) - uVar16);
        *puVar20 = *puVar20 & 0xffffffffU >> (4 - uVar16) * 8 | uVar11 << uVar16 * 8;
        cVar6 = s_VideoHandler_00409b98[0xc];
        uVar11 = s_VideoHandler_00409b98._8_4_;
        puVar7[9] = uVar12;
        puVar7[10] = uVar11;
        *(char *)(puVar7 + 0xb) = cVar6;
        local_48 = param_1[0x40a];
        FUN_00405898(puVar9,8);
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x14);
        memset(puVar7,0,0x14);
        *puVar7 = 0x14000000;
        puVar7[1] = 0x64686d76;
        *(undefined1 *)((int)puVar7 + 0xb) = 1;
        local_44 = FUN_0040598c(param_1);
        local_40 = param_1[0x40a];
        local_44 = local_44 + 0x1c;
        FUN_00405898(puVar9,8);
        local_3c = param_1[0x40a];
        FUN_00405898(puVar9,0x10);
        iVar15 = param_1[0x40e];
        iVar23 = param_1[0x40a];
        FUN_00405898(puVar9,0x56);
        iVar13 = param_1[0x40e];
        if (*(int *)(iVar15 + 0x40) == 0) {
          iVar17 = param_1[0x40a];
          FUN_00405898(puVar9,0xe);
          local_60._0_2_ = *(ushort *)(iVar13 + 0x80) << 8 | *(ushort *)(iVar13 + 0x80) >> 8;
          FUN_00405934(puVar9,local_34,2);
          FUN_00405934(puVar9,iVar13 + 0x44,*(undefined4 *)(iVar13 + 0x80));
          local_5c = CONCAT11(local_5c._1_1_,1);
          FUN_00405934(puVar9,&local_5c,1);
          local_60 = CONCAT22(local_60._2_2_,
                              *(ushort *)(iVar13 + 0x98) << 8 | *(ushort *)(iVar13 + 0x98) >> 8);
          FUN_00405934(puVar9,local_34,2);
          FUN_00405934(puVar9,iVar13 + 0x84,*(undefined4 *)(iVar13 + 0x98));
          uVar16 = param_1[0x40a] - iVar17;
          puVar20 = (uint *)(param_1[0x40c] + iVar17);
          *puVar20 = uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 |
                     uVar16 * 0x100 & 0xff0000;
          puVar20[1] = 0x43637661;
          *(undefined1 *)(puVar20 + 2) = 1;
          *(undefined1 *)((int)puVar20 + 9) = *(undefined1 *)(iVar13 + 0x14);
          *(undefined1 *)((int)puVar20 + 10) = *(undefined1 *)(iVar13 + 0x16);
          uVar1 = *(undefined1 *)(iVar13 + 0x15);
          *(undefined1 *)(puVar20 + 3) = 0xff;
          *(undefined1 *)((int)puVar20 + 0xb) = uVar1;
          *(undefined1 *)((int)puVar20 + 0xd) = 0xe1;
        }
        else {
          local_2c = (undefined1 *)param_1[0x40a];
          FUN_00405898(puVar9,0x1f);
          local_5a[0] = 0x20;
          local_5c = 0x100;
          local_60._0_2_ = *(ushort *)(iVar13 + 0x40) << 8 | *(ushort *)(iVar13 + 0x40) >> 8;
          FUN_00405934(puVar9,local_5a,1);
          FUN_00405934(puVar9,&local_5c,2);
          FUN_00405934(puVar9,local_34,2);
          FUN_00405934(puVar9,iVar13 + 0x17,*(undefined4 *)(iVar13 + 0x40));
          local_5a[0] = 0x21;
          local_60._0_2_ = *(ushort *)(iVar13 + 0x80) << 8 | *(ushort *)(iVar13 + 0x80) >> 8;
          FUN_00405934(puVar9,local_5a,1);
          FUN_00405934(puVar9,&local_5c,2);
          FUN_00405934(puVar9,local_34,2);
          FUN_00405934(puVar9,iVar13 + 0x44,*(undefined4 *)(iVar13 + 0x80));
          local_5a[0] = 0x22;
          local_60 = CONCAT22(local_60._2_2_,
                              *(ushort *)(iVar13 + 0x98) << 8 | *(ushort *)(iVar13 + 0x98) >> 8);
          FUN_00405934(puVar9,local_5a,1);
          FUN_00405934(puVar9,&local_5c,2);
          FUN_00405934(puVar9,local_34,2);
          FUN_00405934(puVar9,iVar13 + 0x84,*(undefined4 *)(iVar13 + 0x98));
          puVar20 = (uint *)(param_1[0x40c] + (int)local_2c);
          uVar16 = param_1[0x40a] - (int)local_2c;
          memset(puVar20,0,0x1f);
          *puVar20 = uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 |
                     uVar16 * 0x100 & 0xff0000;
          puVar20[1] = 0x43637668;
          *(undefined1 *)((int)puVar20 + 0xe) = 0x80;
          *(undefined1 *)(puVar20 + 2) = 1;
          *(undefined1 *)(puVar20 + 5) = 0x7b;
          *(undefined1 *)(puVar20 + 6) = 1;
          *(byte *)((int)puVar20 + 0x1d) = *(byte *)((int)puVar20 + 0x1d) & 199 | 0xf;
          *(undefined1 *)((int)puVar20 + 0x1e) = 3;
        }
        uVar8 = uVar16 + 0x56;
        puVar20 = (uint *)(param_1[0x40c] + iVar23);
        memset(puVar20,0,0x56);
        iVar13 = *(int *)(iVar15 + 0x40);
        *puVar20 = uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 |
                   uVar8 * 0x100 & 0xff0000;
        if (iVar13 == 0) {
          uVar8 = 0x31637661;
        }
        else {
          uVar8 = 0x31766568;
        }
        uVar2 = *(undefined2 *)(iVar15 + 0x10);
        uVar3 = *(undefined2 *)(iVar15 + 0x12);
        puVar20[1] = uVar8;
        iVar13 = param_1[0x40c];
        *(undefined1 *)((int)puVar20 + 0xf) = 1;
        *(undefined1 *)((int)puVar20 + 0xe) = 0;
        local_2c = (undefined1 *)(uVar16 + 0x86);
        *(char *)(puVar20 + 8) = (char)((ushort)uVar2 >> 8);
        *(char *)((int)puVar20 + 0x22) = (char)((ushort)uVar3 >> 8);
        *(char *)((int)puVar20 + 0x21) = (char)uVar2;
        *(char *)((int)puVar20 + 0x23) = (char)uVar3;
        puVar19 = (uint *)(iVar13 + local_3c);
        puVar20[9] = 0x4800;
        puVar20[10] = 0x4800;
        *(undefined1 *)((int)puVar20 + 0x31) = 1;
        iVar22 = iVar22 + 0xc0;
        local_58 = (undefined4 *)((int)local_58 + 1);
        *(undefined1 *)((int)puVar20 + 0x53) = 0x18;
        *(undefined1 *)(puVar20 + 0x15) = 0xff;
        *(undefined1 *)((int)puVar20 + 0x55) = 0xff;
        *(undefined1 *)(puVar20 + 0xc) = 0;
        *(undefined1 *)((int)puVar20 + 0x52) = 0;
        memset(puVar19,0,0x10);
        uVar16 = uVar16 + 0x66;
        *puVar19 = uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 |
                   uVar16 * 0x100 & 0xff0000;
        puVar19[1] = 0x64737473;
        puVar19[3] = 0x1000000;
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x18);
        iVar13 = param_1[0x40e];
        memset(puVar7,0,0x18);
        uVar16 = *(uint *)(iVar13 + 0xc);
        *puVar7 = 0x18000000;
        uVar21 = *(uint *)(iVar13 + 8);
        puVar7[1] = 0x73747473;
        iVar13 = param_1[0x40e];
        puVar7[3] = 0x1000000;
        iVar15 = *(int *)(iVar13 + 0x9c);
        puVar7[4] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8;
        uVar8 = iVar15 + 0x10;
        local_2c = (undefined1 *)((int)local_2c + uVar8);
        puVar7[5] = uVar21 << 0x18 | uVar21 >> 0x18 | uVar21 >> 8 & 0xff00 | (uVar21 & 0xff00) << 8;
        puVar20 = (uint *)FUN_00405898(puVar9,uVar8);
        memset(puVar20,0,0x10);
        uVar16 = *(uint *)(iVar13 + 0x9c);
        uVar11 = *(undefined4 *)(iVar13 + 0xa4);
        *puVar20 = uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 |
                   uVar8 * 0x100 & 0xff0000;
        puVar20[1] = 0x73737473;
        puVar20[3] = (uVar16 >> 2) << 0x18 | uVar16 >> 0x1a | uVar16 >> 10 & 0xff00 |
                     (uVar16 >> 2 & 0xff00) << 8;
        memcpy(puVar20 + 4,uVar11);
        iVar13 = FUN_00405ab0(param_1);
        iVar15 = param_1[0x40e];
        uVar16 = *(int *)(iVar15 + 0xa8) + 0x14;
        local_2c = (undefined1 *)((int)local_2c + iVar13 + uVar16);
        puVar20 = (uint *)FUN_00405898(puVar9,uVar16);
        memset(puVar20,0,0x14);
        uVar8 = *(uint *)(iVar15 + 0xc);
        uVar12 = *(undefined4 *)(iVar15 + 0xa8);
        uVar11 = *(undefined4 *)(iVar15 + 0xb0);
        *puVar20 = uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 |
                   uVar16 * 0x100 & 0xff0000;
        puVar20[1] = 0x7a737473;
        puVar20[4] = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
        memcpy(puVar20 + 5,uVar11,uVar12);
        iVar13 = param_1[0x40e];
        uVar8 = *(int *)(iVar13 + 0xb4) + 0x10;
        puVar20 = (uint *)FUN_00405898(puVar9,uVar8);
        memset(puVar20,0,0x10);
        uVar16 = *(uint *)(iVar13 + 0xc);
        uVar11 = *(undefined4 *)(iVar13 + 0xbc);
        uVar12 = *(undefined4 *)(iVar13 + 0xb4);
        *puVar20 = uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 |
                   uVar8 * 0x100 & 0xff0000;
        puVar20[1] = 0x6f637473;
        puVar20[3] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8
        ;
        memcpy(puVar20 + 4,uVar11,uVar12);
        uVar8 = (int)local_2c + uVar8;
        uVar16 = local_44 + uVar8;
        iVar15 = param_1[0x40c];
        uVar21 = uVar16 + 0x55;
        *(uint *)(iVar15 + local_40) =
             uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | uVar8 * 0x100 & 0xff0000;
        ((uint *)(iVar15 + local_40))[1] = 0x6c627473;
        uVar8 = uVar16 + 0xdd;
        *(uint *)(iVar15 + local_48) =
             uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | uVar16 * 0x100 & 0xff0000;
        ((uint *)(iVar15 + local_48))[1] = 0x666e696d;
        local_50 = local_50 + uVar8;
        *(uint *)(iVar15 + local_4c) =
             uVar21 * 0x1000000 | uVar21 >> 0x18 | uVar21 >> 8 & 0xff00 | uVar21 * 0x100 & 0xff0000;
        ((uint *)(iVar15 + local_4c))[1] = 0x6169646d;
        iVar13 = param_1[4];
        *(uint *)(iVar15 + local_54) =
             uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | uVar8 * 0x100 & 0xff0000;
        ((uint *)(iVar15 + local_54))[1] = 0x6b617274;
        if (iVar13 < (int)local_58) break;
        iVar13 = param_1[0x408];
        iVar15 = param_1[3];
      }
      iVar15 = param_1[3];
    }
    if (iVar15 < 1) {
      iVar13 = param_1[0x40c];
    }
    else {
      local_54 = 1;
      local_58 = param_1 + 0x40f;
      do {
        local_4c = param_1[0x40a];
        param_1[0x40d] = local_58;
        param_1[0x408] = param_1[0x408] + 1;
        FUN_00405898(puVar9,8);
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x5c);
        lVar5 = (ulonglong)*(uint *)param_1[0x40d] * 1000;
        uVar16 = FUN_004088c8((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),((uint *)param_1[0x40d])[1]
                              ,0);
        memset(puVar7,0,0x5c);
        *puVar7 = 0x5c000000;
        puVar7[1] = 0x64686b74;
        *(undefined1 *)((int)puVar7 + 0xb) = 3;
        uVar21 = param_1[0x407];
        uVar8 = param_1[0x408];
        uVar21 = uVar21 << 0x18 | uVar21 >> 0x18 | uVar21 >> 8 & 0xff00 | (uVar21 & 0xff00) << 8;
        puVar7[3] = uVar21;
        puVar7[4] = uVar21;
        puVar7[5] = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
        puVar7[7] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8;
        *(undefined1 *)((int)puVar7 + 0x2a) = 0;
        *(undefined1 *)((int)puVar7 + 0x2b) = 1;
        *(undefined1 *)(puVar7 + 0xb) = 1;
        *(undefined1 *)((int)puVar7 + 0x2d) = 0;
        puVar7[0xc] = 0x100;
        puVar7[0x10] = 0x100;
        puVar7[0x14] = 0x40;
        iVar15 = param_1[0x40a];
        local_2c = (undefined1 *)0x3;
        FUN_00405898(puVar9,8);
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x1c);
        lVar5 = (ulonglong)*(uint *)param_1[0x40d] * 1000;
        uVar8 = FUN_004088c8((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),((uint *)param_1[0x40d])[1],
                             0);
        memset(puVar7,0,0x1c);
        *puVar7 = 0x1c000000;
        uVar16 = (int)puVar7 + 7U & 3;
        puVar20 = (uint *)(((int)puVar7 + 7U) - uVar16);
        *puVar20 = *puVar20 & -1 << (uVar16 + 1) * 8 | 0x74736c65U >> (3 - uVar16) * 8;
        uVar16 = (uint)(puVar7 + 1) & 3;
        puVar20 = (uint *)((int)(puVar7 + 1) - uVar16);
        *puVar20 = *puVar20 & 0xffffffffU >> (4 - uVar16) * 8 | 0x74736c65 << uVar16 * 8;
        iVar13 = param_1[0x40c];
        puVar7[3] = 0x1000000;
        local_48 = param_1[0x40a];
        puVar7[4] = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
        *(undefined1 *)((int)puVar7 + 0x19) = 1;
        *(undefined1 *)(puVar7 + 6) = 0;
        *(undefined4 *)(iVar13 + iVar15) = 0x24000000;
        ((undefined4 *)(iVar13 + iVar15))[1] = 0x73746465;
        FUN_00405898(puVar9,8);
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x20);
        puVar20 = (uint *)param_1[0x40d];
        memset(puVar7,0,0x20);
        uVar8 = param_1[0x407];
        *puVar7 = 0x20000000;
        uVar16 = puVar20[1];
        puVar7[1] = 0x6468646d;
        uVar21 = *puVar20;
        uVar8 = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
        puVar7[3] = uVar8;
        puVar7[4] = uVar8;
        puVar7[5] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8;
        puVar7[6] = uVar21 << 0x18 | uVar21 >> 0x18 | uVar21 >> 8 & 0xff00 | (uVar21 & 0xff00) << 8;
        *(undefined1 *)(puVar7 + 7) = 0x55;
        *(undefined1 *)((int)puVar7 + 0x1d) = 0xc4;
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x2d);
        memset(puVar7,0,0x2d);
        *puVar7 = 0x2d000000;
        puVar7[1] = 0x726c6468;
        uVar11 = s_SoundHandler_00409ba8._0_4_;
        puVar7[4] = 0x6e756f73;
        uVar12 = s_SoundHandler_00409ba8._4_4_;
        uVar16 = (int)puVar7 + 0x23U & 3;
        puVar20 = (uint *)(((int)puVar7 + 0x23U) - uVar16);
        *puVar20 = *puVar20 & -1 << (uVar16 + 1) * 8 | (uint)uVar11 >> (3 - uVar16) * 8;
        uVar16 = (uint)(puVar7 + 8) & 3;
        puVar20 = (uint *)((int)(puVar7 + 8) - uVar16);
        *puVar20 = *puVar20 & 0xffffffffU >> (4 - uVar16) * 8 | uVar11 << uVar16 * 8;
        uVar11 = s_SoundHandler_00409ba8._8_4_;
        puVar7[9] = uVar12;
        cVar6 = s_SoundHandler_00409ba8[0xc];
        puVar7[10] = uVar11;
        *(char *)(puVar7 + 0xb) = cVar6;
        local_44 = param_1[0x40a];
        FUN_00405898(puVar9,8);
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x10);
        memset(puVar7,0,0x10);
        *puVar7 = 0x10000000;
        puVar7[1] = 0x64686d73;
        local_40 = FUN_0040598c(param_1);
        local_3c = param_1[0x40a];
        local_40 = local_40 + 0x18;
        FUN_00405898(puVar9,8);
        local_38 = (undefined4 *)param_1[0x40a];
        FUN_00405898(puVar9,0x10);
        iVar23 = param_1[0x40a];
        iVar15 = param_1[0x40d];
        FUN_00405898(puVar9,0x24);
        piVar14 = (int *)param_1[0x40d];
        iVar22 = param_1[0x40a];
        FUN_00405898(puVar9,0xc);
        uVar21 = piVar14[0xb];
        puVar10 = (undefined1 *)FUN_00405898(puVar9,uVar21 + 0x25);
        uVar8 = uVar21 + 0x20;
        uVar16 = uVar21 + 0x12;
        *puVar10 = (char)local_2c;
        puVar10[5] = 0;
        puVar10[1] = (byte)(uVar8 >> 0x15) | 0x80;
        puVar10[2] = (byte)(uVar8 >> 0xe) | 0x80;
        puVar10[3] = (byte)(uVar8 >> 7) | 0x80;
        puVar10[4] = (byte)uVar8 & 0x7f;
        puVar10[6] = 2;
        puVar10[7] = 0;
        puVar10[8] = 4;
        puVar10[9] = (byte)(uVar16 >> 0x15) | 0x80;
        puVar10[0xb] = (byte)(uVar16 >> 7) | 0x80;
        puVar10[10] = (byte)(uVar16 >> 0xe) | 0x80;
        puVar10[0xc] = (byte)uVar16 & 0x7f;
        iVar13 = piVar14[6];
        puVar10[0xe] = 0x15;
        puVar10[0xd] = (char)iVar13;
        puVar10[0xf] = 0;
        puVar10[0x10] = 0;
        puVar10[0x11] = 0;
        uVar16 = 0;
        if (*piVar14 != 0) {
          lVar5 = (ulonglong)(uint)piVar14[0xc] * (ulonglong)(uint)piVar14[1] * 8;
          local_2c = puVar10;
          uVar16 = FUN_004088c8((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),*piVar14,0);
          uVar16 = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8;
          puVar10 = local_2c;
        }
        *(uint *)(puVar10 + 0x12) = uVar16;
        *(uint *)(puVar10 + 0x16) = uVar16;
        puVar10[0x1e] = (byte)uVar21 & 0x7f;
        puVar10[0x1b] = (byte)(uVar21 >> 0x15) | 0x80;
        puVar10[0x1c] = (byte)(uVar21 >> 0xe) | 0x80;
        puVar10[0x1a] = 5;
        puVar10[0x1d] = (byte)(uVar21 >> 7) | 0x80;
        local_54 = local_54 + 1;
        local_58 = local_58 + 0x13;
        iVar13 = memcpy(puVar10 + 0x1f,(int)piVar14 + 0x19,piVar14[0xb]);
        puVar10 = (undefined1 *)(iVar13 + piVar14[0xb]);
        puVar10[4] = 1;
        *puVar10 = 6;
        puVar10[1] = 0x80;
        puVar10[2] = 0x80;
        puVar10[3] = 0x80;
        puVar10[5] = 2;
        uVar8 = param_1[0x40a] - iVar22;
        puVar20 = (uint *)(param_1[0x40c] + iVar22);
        *(undefined1 *)puVar20 = 0;
        *(undefined1 *)((int)puVar20 + 1) = 0;
        *(undefined1 *)((int)puVar20 + 2) = 0;
        *(undefined1 *)((int)puVar20 + 3) = 0;
        *(undefined1 *)(puVar20 + 1) = 0;
        *(undefined1 *)((int)puVar20 + 5) = 0;
        *(undefined1 *)((int)puVar20 + 6) = 0;
        *(undefined1 *)((int)puVar20 + 7) = 0;
        *(undefined1 *)(puVar20 + 2) = 0;
        local_2c = (undefined1 *)(uVar8 + 0x54);
        *(undefined1 *)((int)puVar20 + 9) = 0;
        *(undefined1 *)((int)puVar20 + 10) = 0;
        *(undefined1 *)((int)puVar20 + 0xb) = 0;
        iVar13 = param_1[0x40c];
        *puVar20 = uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 |
                   uVar8 * 0x100 & 0xff0000;
        puVar19 = (uint *)(iVar13 + iVar23);
        puVar20[1] = 0x73647365;
        memset(puVar19,0,0x24);
        uVar16 = uVar8 + 0x24;
        uVar2 = *(undefined2 *)(iVar15 + 0x10);
        uVar3 = *(undefined2 *)(iVar15 + 0x12);
        uVar21 = *(uint *)(iVar15 + 0x14);
        puVar20 = (uint *)(param_1[0x40c] + (int)local_38);
        *puVar19 = uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 |
                   uVar16 * 0x100 & 0xff0000;
        puVar19[1] = 0x6134706d;
        *(undefined1 *)((int)puVar19 + 0xf) = 1;
        *(undefined1 *)((int)puVar19 + 0xe) = 0;
        *(char *)(puVar19 + 6) = (char)((ushort)uVar2 >> 8);
        *(char *)((int)puVar19 + 0x1a) = (char)((ushort)uVar3 >> 8);
        *(char *)((int)puVar19 + 0x19) = (char)uVar2;
        *(char *)((int)puVar19 + 0x1b) = (char)uVar3;
        puVar19[8] = (uVar21 & 0xff) << 8 | (uVar21 & 0xffff) >> 8;
        memset(puVar20,0,0x10);
        uVar8 = uVar8 + 0x34;
        *puVar20 = uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 |
                   uVar8 * 0x100 & 0xff0000;
        puVar20[1] = 0x64737473;
        puVar20[3] = 0x1000000;
        puVar7 = (undefined4 *)FUN_00405898(puVar9,0x18);
        iVar13 = param_1[0x40d];
        memset(puVar7,0,0x18);
        uVar8 = *(uint *)(iVar13 + 0xc);
        *puVar7 = 0x18000000;
        uVar16 = *(uint *)(iVar13 + 8);
        puVar7[1] = 0x73747473;
        puVar7[3] = 0x1000000;
        puVar7[4] = uVar8 << 0x18 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | (uVar8 & 0xff00) << 8;
        puVar7[5] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8;
        iVar13 = FUN_00405ab0(param_1);
        iVar15 = param_1[0x40d];
        uVar8 = *(int *)(iVar15 + 0x34) + 0x14;
        local_2c = (undefined1 *)((int)local_2c + iVar13 + uVar8);
        puVar20 = (uint *)FUN_00405898(puVar9,uVar8);
        memset(puVar20,0,0x14);
        uVar16 = *(uint *)(iVar15 + 0xc);
        uVar12 = *(undefined4 *)(iVar15 + 0x34);
        uVar11 = *(undefined4 *)(iVar15 + 0x3c);
        *puVar20 = uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 |
                   uVar8 * 0x100 & 0xff0000;
        puVar20[1] = 0x7a737473;
        puVar20[4] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8
        ;
        memcpy(puVar20 + 5,uVar11,uVar12);
        iVar13 = param_1[0x40d];
        uVar21 = *(int *)(iVar13 + 0x40) + 0x10;
        puVar20 = (uint *)FUN_00405898(puVar9,uVar21);
        memset(puVar20,0,0x10);
        uVar16 = *(uint *)(iVar13 + 0xc);
        uVar12 = *(undefined4 *)(iVar13 + 0x40);
        uVar11 = *(undefined4 *)(iVar13 + 0x48);
        *puVar20 = uVar21 * 0x1000000 | uVar21 >> 0x18 | uVar21 >> 8 & 0xff00 |
                   uVar21 * 0x100 & 0xff0000;
        puVar20[1] = 0x6f637473;
        puVar20[3] = uVar16 << 0x18 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | (uVar16 & 0xff00) << 8
        ;
        memcpy(puVar20 + 4,uVar11,uVar12);
        uVar21 = (int)local_2c + uVar21;
        iVar13 = param_1[0x40c];
        uVar18 = local_40 + uVar21;
        uVar8 = uVar18 + 0x55;
        *(uint *)(iVar13 + local_3c) =
             uVar21 * 0x1000000 | uVar21 >> 0x18 | uVar21 >> 8 & 0xff00 | uVar21 * 0x100 & 0xff0000;
        uVar16 = uVar18 + 0xdd;
        ((uint *)(iVar13 + local_3c))[1] = 0x6c627473;
        *(uint *)(iVar13 + local_44) =
             uVar18 * 0x1000000 | uVar18 >> 0x18 | uVar18 >> 8 & 0xff00 | uVar18 * 0x100 & 0xff0000;
        ((uint *)(iVar13 + local_44))[1] = 0x666e696d;
        local_50 = local_50 + uVar16;
        *(uint *)(iVar13 + local_48) =
             uVar8 * 0x1000000 | uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | uVar8 * 0x100 & 0xff0000;
        ((uint *)(iVar13 + local_48))[1] = 0x6169646d;
        *(uint *)(iVar13 + local_4c) =
             uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 | uVar16 * 0x100 & 0xff0000;
        iVar15 = param_1[3];
        ((uint *)(iVar13 + local_4c))[1] = 0x6b617274;
      } while (local_54 <= iVar15);
    }
    uVar11 = param_1[0x40a];
    *(uint *)(iVar13 + local_30) =
         local_50 << 0x18 | local_50 >> 0x18 | local_50 >> 8 & 0xff00 | (local_50 & 0xff00) << 8;
    ((uint *)(iVar13 + local_30))[1] = 0x766f6f6d;
    FUN_00405b30(param_1,iVar13,uVar11);
    FUN_00405b30(param_1,0,0);
    uVar16 = param_1[0x409] + 8;
    local_60 = uVar16 * 0x1000000 | uVar16 >> 0x18 | uVar16 >> 8 & 0xff00 |
               uVar16 * 0x100 & 0xff0000;
    lseek(param_1[5],0x20,0);
    FUN_004056e0(param_1,local_34,4);
    close(param_1[5]);
    iVar13 = param_1[3];
    param_1[5] = 0xffffffff;
    param_1[6] = 0;
    if (0 < iVar13) {
      iVar15 = 1;
      puVar9 = param_1 + 0x40f;
      do {
        iVar15 = iVar15 + 1;
        puVar9[3] = 0;
        puVar9[0xc] = 0;
        puVar9[0x10] = 0;
        puVar9[0xd] = 0;
        puVar9 = puVar9 + 0x13;
      } while (iVar15 != iVar13 + 1);
    }
    iVar15 = param_1[4];
    if (0 < iVar15) {
      iVar22 = 1;
      puVar9 = param_1 + iVar13 * 0x13 + 0x40f;
      do {
        iVar22 = iVar22 + 1;
        puVar9[3] = 0;
        puVar9[0x2d] = 0;
        puVar9[0x2a] = 0;
        puVar9[0x27] = 0;
        puVar9 = puVar9 + 0x30;
      } while (iVar22 != iVar15 + 1);
    }
    param_1[0x409] = 0;
    param_1[0x40a] = 0;
    if (param_2 != (undefined4 *)0x0) {
      uVar11 = FUN_004082f8(*param_1,param_1[1],1000000,0);
      *param_2 = uVar11;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_1[2];
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return 0;
}



// ==== FUN_004081d0 @ 004081d0 size=288

void FUN_004081d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    FUN_00406528(param_1,0,0);
    iVar3 = *(int *)(param_1 + 0xc);
    if (0 < iVar3) {
      iVar1 = 1;
      iVar2 = param_1 + 0x103c;
      do {
        iVar1 = iVar1 + 1;
        free(*(undefined4 *)(iVar2 + 0x48));
        free(*(undefined4 *)(iVar2 + 0x3c));
        iVar3 = *(int *)(param_1 + 0xc);
        iVar2 = iVar2 + 0x4c;
      } while (iVar1 <= iVar3);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar1 = 1;
      while( true ) {
        iVar1 = iVar1 + 1;
        iVar3 = param_1 + 0x103c + iVar3 * 0x4c + iVar2;
        iVar2 = iVar2 + 0xc0;
        free(*(undefined4 *)(iVar3 + 0xbc));
        free(*(undefined4 *)(iVar3 + 0xb0));
        free(*(undefined4 *)(iVar3 + 0xa4));
        if (*(int *)(param_1 + 0x10) < iVar1) break;
        iVar3 = *(int *)(param_1 + 0xc);
      }
    }
    free(*(undefined4 *)(param_1 + 0x1030));
    free(param_1);
    return;
  }
  return;
}



// ==== FUN_004082f8 @ 004082f8 size=1480

void FUN_004082f8(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((int)param_2 < 0) {
    param_2 = -(uint)(param_1 != 0) - param_2;
  }
  if ((int)param_4 < 0) {
    param_3 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_0041a210[param_3 >> iVar1] + iVar1);
      if (uVar2 != 0) {
        param_3 = param_3 << (uVar2 & 0x1f);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar1 = 8;
        if (param_3 < 0x100) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x10;
        if (0xffffff < param_3) {
          iVar1 = 0x18;
        }
      }
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_0041a210[param_3 >> iVar1] + iVar1);
      if ((uVar2 != 0) && (param_3 = param_3 << (uVar2 & 0x1f), param_3 >> 0x10 == 0)) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
      if (param_3 >> 0x10 == 0) {
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
        trap(0x1c00);
      }
    }
  }
  else if (param_4 <= param_2) {
    if (param_4 < 0x10000) {
      iVar1 = 8;
      if (param_4 < 0x100) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x10;
      if (0xffffff < param_4) {
        iVar1 = 0x18;
      }
    }
    uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_0041a210[param_4 >> iVar1] + iVar1);
    if ((uVar2 != 0) &&
       ((param_4 << (uVar2 & 0x1f) |
        param_3 >> ((uint)(byte)PTR___clz_tab_0041a210[param_4 >> iVar1] + iVar1 & 0x1f)) >> 0x10 ==
        0)) {
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
    }
  }
  return;
}



// ==== FUN_004088c8 @ 004088c8 size=1396

undefined8 FUN_004088c8(uint param_1,uint param_2,uint param_3,uint param_4)

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
      uVar9 = (uint)(byte)PTR___clz_tab_0041a210[param_3 >> iVar3] + iVar3;
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
      goto LAB_00408e34;
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
    uVar7 = 0x20 - ((uint)(byte)PTR___clz_tab_0041a210[uVar9] + iVar3);
    if (uVar7 != 0) {
      param_3 = param_3 << (uVar7 & 0x1f);
      param_2 = param_2 << (uVar7 & 0x1f) |
                param_1 >> ((uint)(byte)PTR___clz_tab_0041a210[uVar9] + iVar3 & 0x1f);
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
      goto LAB_00408e34;
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
    uVar7 = (uint)(byte)PTR___clz_tab_0041a210[param_4 >> iVar3] + iVar3;
    uVar6 = 0x20 - uVar7;
    uVar9 = param_2 >> (uVar7 & 0x1f);
    if (uVar6 == 0) {
      if (param_4 < param_2) {
        uVar7 = 0;
        uVar9 = 1;
        goto LAB_00408e34;
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
      goto LAB_00408e34;
      uVar9 = uVar9 - 1;
    }
  }
  uVar7 = 0;
LAB_00408e34:
  return CONCAT44(uVar7,uVar9);
}



// ==== FUN_00408e40 @ 00408e40 size=72

void FUN_00408e40(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_0041a084;
  pcVar2 = DAT_0041a084;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



