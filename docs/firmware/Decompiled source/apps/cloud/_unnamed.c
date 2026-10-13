/* cloud — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloud.h"

// ==== FUN_00401410 @ 00401410 size=64

/* WARNING: Removing unreachable block (ram,0x00401430) */
/* WARNING: Removing unreachable block (ram,0x00401440) */

void FUN_00401410(void)

{
  return;
}



// ==== FUN_00401450 @ 00401450 size=76

/* WARNING: Removing unreachable block (ram,0x0040147c) */
/* WARNING: Removing unreachable block (ram,0x0040148c) */

void FUN_00401450(void)

{
  return;
}



// ==== FUN_0040149c @ 0040149c size=176

/* WARNING: Removing unreachable block (ram,0x004014fc) */

void FUN_0040149c(void)

{
  if (DAT_00423790 == '\0') {
    FUN_00401410();
    DAT_00423790 = '\x01';
  }
  return;
}



// ==== FUN_0040154c @ 0040154c size=60

/* WARNING: Removing unreachable block (ram,0x00401568) */

void FUN_0040154c(void)

{
  FUN_00401450();
  return;
}



// ==== FUN_00401818 @ 00401818 size=256

undefined4 FUN_00401818(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = strcmp(&DAT_0040e008);
  if (((((iVar1 == 0) || (iVar1 = strcmp(&DAT_0040e00c,param_2), iVar1 == 0)) ||
       (iVar1 = strcmp(&DAT_0040e010,param_2), iVar1 == 0)) ||
      (iVar1 = strcmp(&DAT_0040e014,param_2), iVar1 == 0)) &&
     (iVar1 = fopen(param_1,param_2), iVar1 != 0)) {
    iVar2 = fwrite(param_3,1,param_4,iVar1);
    if (iVar2 == param_4) {
      fclose(iVar1);
      return 0;
    }
    fclose(iVar1);
  }
  return 0xffffffff;
}



// ==== FUN_00401918 @ 00401918 size=320

void FUN_00401918(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  int local_41c;
  undefined1 auStack_418 [1008];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  memset(&local_428,0,0x400);
  local_28 = 4;
  local_24 = 4;
  local_20 = CONCAT22(1,(short)param_2);
  if (param_2 < 0x102d) {
    if ((param_2 < 0x102b) && (param_2 != 0x100d)) {
      if (param_2 < 0x100e) {
        if (param_2 != 0x1007) goto LAB_00401a30;
      }
      else {
        local_28 = 1;
        if (1 < param_2 - 0x100f) goto LAB_00401994;
      }
    }
    local_28 = 2;
  }
  else {
    if (param_2 < 0x6011) {
      if (0x600e < param_2) goto LAB_00401994;
      if (param_2 - 0x2000 < 4) {
        local_28 = 0x10;
        goto LAB_00401994;
      }
    }
    else if (param_2 == 0x7001) {
      local_28 = 8;
      goto LAB_00401994;
    }
LAB_00401a30:
    local_28 = 1;
  }
LAB_00401994:
  local_428 = local_28;
  local_424 = 4;
  local_420 = local_20;
  local_41c = param_4;
  local_1c = param_4;
  if ((param_3 != 0) && (0 < param_4)) {
    memcpy(auStack_418,param_3,param_4);
  }
  FUN_0040b6d4(param_1,&local_428,param_4 + 0x10);
  return;
}



// ==== FUN_00402a0c @ 00402a0c size=716

int FUN_00402a0c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c70 [2048];
  undefined1 auStack_470 [512];
  char local_270 [256];
  undefined1 auStack_170 [128];
  char local_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  int local_30;
  
  memset(auStack_470,0,0x200);
  memset(auStack_c70,0,0x800);
  memset(auStack_170,0,0x80);
  memset(auStack_70,0,0x40);
  memset(auStack_b0,0,0x40);
  memset(local_270,0,0x100);
  memset(local_f0,0,0x40);
  sprintf(auStack_470,
          "%s -c 145 -url \"%s/vmanager/ipc/firmware/upgrade/silent\" -did %s -sname %s -version %s "
          ,"/backup/cloudAPI",DAT_00423a48 + 0xc,DAT_00423a48 + 0x255,DAT_00423a48 + 0x10c,
          DAT_00423a48 + 400);
  iVar2 = 5;
  FUN_0040b244("cloud.c","need_update",0x841,"cmd = %s\n",auStack_470);
  do {
    iVar2 = iVar2 + -1;
    memset(auStack_c70,0,0x800);
    FUN_0040b48c(auStack_470,auStack_c70,0x800,10);
    FUN_0040b244("cloud.c","need_update",0x849,"ret = %s\n",auStack_c70);
    memset(auStack_170,0,0x80);
    iVar1 = FUN_0040b8cc(auStack_170,&DAT_0040e020,auStack_c70);
    if (iVar1 == 1) {
      local_30 = atoi(auStack_170);
      if (local_30 == 1) {
        memset(auStack_70,0,0x40);
        memset(auStack_b0,0,0x40);
        iVar2 = FUN_0040b8cc(auStack_70,"needUpdate",auStack_c70);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = strcmp(auStack_70,&DAT_0040e934);
        if (iVar2 != 0) {
          return 0;
        }
        memset(local_270,0,0x100);
        iVar2 = FUN_0040b8cc(local_270,"downloadPath",auStack_c70);
        if (iVar2 == 0) {
          return 0;
        }
        if (local_270[0] != '\0') {
          memset(local_f0,0,0x40);
          iVar2 = FUN_0040b8cc(local_f0,"md5Code",auStack_c70);
          if (iVar2 == 0) {
            return 0;
          }
          if (local_f0[0] == '\0') {
            return 0;
          }
          strcpy(param_1,local_270);
          strcpy(param_2,local_f0);
          return local_30;
        }
        return 0;
      }
    }
    sleep(5);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



// ==== FUN_004049c8 @ 004049c8 size=1548

undefined4 FUN_004049c8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_19e8 [2048];
  undefined1 auStack_11e8 [1024];
  undefined1 auStack_de8 [1024];
  undefined1 auStack_9e8 [1024];
  undefined1 auStack_5e8 [512];
  undefined1 auStack_3e8 [512];
  undefined1 auStack_1e8 [256];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
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
  
  memset(auStack_9e8,0,0x400);
  memset(auStack_19e8,0,0x800);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar3 = 3;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  memset(auStack_de8,0,0x400);
  memset(auStack_3e8,0,0x200);
  memset(auStack_1e8,0,0x100);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  snprintf(auStack_9e8,0x400,"%s -c 142 -url %s/v4/ipc/deviceinfo -uid %s -keySec %s",
           "/backup/cloudAPI",DAT_00423a48 + 0xc,DAT_00423a48 + 0x235,DAT_00423a48 + 0x295);
  FUN_0040b244("cloud.c","webapi_get_dev_info",0xb9d,"cmd=%s\n",auStack_9e8);
  do {
    FUN_0040b48c(auStack_9e8,auStack_19e8,0x800,10);
    iVar3 = iVar3 + -1;
    FUN_0040b244("cloud.c","webapi_get_dev_info",0xba4,"%s\n",auStack_19e8);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    iVar1 = FUN_0040b9ac(&local_38,"\"code\"",auStack_19e8);
    if (iVar1 == 1) {
      iVar1 = atoi(&local_38);
      if (iVar1 == 20000) {
        memset(auStack_de8,0,0x400);
        iVar3 = FUN_0040b9ac(auStack_de8,"\"data\"",auStack_19e8);
        if (iVar3 == 1) {
          iVar3 = FUN_0040b9ac(&local_48,"\"tz_offset\"",auStack_de8);
          if (iVar3 == 1) {
            uVar2 = atoi(&local_48);
            cloud_set_tz_offset(uVar2);
          }
          iVar3 = FUN_0040b9ac(&local_98,"\"css_flag\"",auStack_de8);
          if (iVar3 == 1) {
            iVar3 = atoi(&local_98);
            if (iVar3 == 0) {
              cloud_set_cloud_storage_state(0x8c);
            }
            else {
              cloud_set_cloud_storage_state(0x8b);
            }
          }
          iVar3 = FUN_0040b9ac(&local_a8,"\"css_mode\"",auStack_de8);
          if (iVar3 == 1) {
            iVar3 = atoi(&local_a8);
            if (iVar3 == 0) {
              cloud_set_cloud_storage_mode(0x94);
            }
            else {
              cloud_set_cloud_storage_mode(0x95);
            }
          }
          iVar3 = FUN_0040b9ac(&local_b8,"\"css_image_flag\"",auStack_de8);
          if (iVar3 == 1) {
            iVar3 = atoi(&local_b8);
            if (iVar3 == 1) {
              cloud_set_cloud_image_state(0xf3);
            }
            else {
              cloud_set_cloud_image_state(0xf4);
            }
          }
          iVar3 = FUN_0040b9ac(auStack_3e8,"\"appParam\"",auStack_de8);
          if (iVar3 == 1) {
            iVar3 = FUN_0040b9ac(auStack_1e8,"\"router_backup\"",auStack_3e8);
            if ((((iVar3 == 1) &&
                 (iVar3 = FUN_0040b9ac(&local_58,"\"enable\"",auStack_1e8), iVar3 == 1)) &&
                (iVar3 = FUN_0040b9ac(&local_68,"\"resolution\"",auStack_1e8), iVar3 == 1)) &&
               ((iVar3 = FUN_0040b9ac(&local_78,"\"user_path\"",auStack_1e8), iVar3 == 1 &&
                (iVar3 = FUN_0040b9ac(&local_88,"\"backup_period\"",auStack_1e8), iVar3 == 1)))) {
              local_d0 = atoi(&local_58);
              local_cf = atoi(&local_68);
              local_cd = atoi(&local_78);
              local_ce = atoi(&local_88);
              cloud_set_video_backup_state(&local_d0);
            }
            memset(auStack_11e8,0,0x400);
            iVar3 = FUN_0040b9ac(auStack_11e8,"\"schedule_power\"",auStack_3e8);
            if (iVar3 == 1) {
              memset(auStack_5e8,0,0x200);
              local_e8 = 0;
              local_e4 = 0;
              local_e0 = 0;
              local_dc = 0;
              local_d8 = 0;
              local_d4 = 0;
              printf(&DAT_0040f2b8,"webapi_get_dev_info",0xbeb,auStack_11e8);
              iVar3 = FUN_0040b9ac(auStack_5e8,"\"schedule_power_on\"",auStack_11e8);
              if (iVar3 == 1) {
                printf(&DAT_0040f2f0,"webapi_get_dev_info",0xbee,auStack_5e8);
                _ftext(auStack_5e8,&local_e8);
              }
              memset(auStack_5e8,0,0x200);
              iVar3 = FUN_0040b9ac(auStack_5e8,"\"schedule_power_off\"",auStack_11e8);
              if (iVar3 == 1) {
                printf(&DAT_0040f330,"webapi_get_dev_info",0xbf5,auStack_5e8);
                _ftext(auStack_5e8,&local_dc);
              }
              iVar1 = 10;
              iVar3 = FUN_00401918(DAT_00423a40,0xec,&local_e8,0x18);
              if (iVar3 < 0) {
                FUN_0040b244("cloud.c","cloud_set_schedule_power",0xb75,
                             "p2p_set_video_backup_state fail!\n");
                return 1;
              }
              while( true ) {
                iVar1 = iVar1 + -1;
                iVar3 = memcmp(DAT_00423a48 + 0x9b8,&local_e8,0x18);
                if (iVar3 == 0) break;
                usleep(100000);
                if (iVar1 == 0) {
                  return 1;
                }
              }
            }
          }
        }
        return 1;
      }
    }
    sleep(3);
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}



// ==== FUN_00404fd4 @ 00404fd4 size=108

void FUN_00404fd4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_210 [512];
  
  memset(auStack_210,0,0x200);
  sprintf(auStack_210,"/home/app/crypt_file -e %s %s %s",param_1,param_2,param_3);
  system(auStack_210);
  return;
}



// ==== FUN_0040889c @ 0040889c size=152

uint FUN_0040889c(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 == (byte *)0x0) {
    return (uint)(param_2 != (byte *)0x0);
  }
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_1;
    bVar2 = *param_2;
    while( true ) {
      if (*(short *)(__ctype_tolower + (char)bVar1 * 2) !=
          *(short *)(__ctype_tolower + (char)bVar2 * 2)) {
        return (int)*(short *)(__ctype_tolower + (uint)*param_1 * 2) -
               (int)*(short *)(__ctype_tolower + (uint)*param_2 * 2);
      }
      param_1 = param_1 + 1;
      if ((char)bVar1 == 0) break;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
      bVar2 = *param_2;
    }
    return 0;
  }
  return 1;
}



// ==== FUN_00408934 @ 00408934 size=388

int FUN_00408934(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(char)*param_1;
  uVar2 = (uint)*param_1;
  if (uVar2 - 0x30 < 10) {
    iVar5 = iVar5 + -0x30;
    bVar1 = param_1[1];
LAB_00408954:
    iVar3 = (int)(char)bVar1;
    uVar2 = (uint)bVar1;
    iVar5 = iVar5 << 4;
    if (9 < uVar2 - 0x30) goto LAB_00408968;
LAB_004089ec:
    iVar4 = (int)(char)param_1[2];
    uVar2 = (uint)param_1[2];
    iVar5 = (iVar3 + -0x30 + iVar5) * 0x10;
    if (9 < uVar2 - 0x30) goto LAB_00408a0c;
LAB_00408998:
    iVar5 = iVar4 + -0x30 + iVar5;
  }
  else {
    if (5 < uVar2 - 0x41) {
      iVar5 = iVar5 + -0x57;
      if (5 < uVar2 - 0x61) {
        return 0;
      }
      bVar1 = param_1[1];
      goto LAB_00408954;
    }
    iVar3 = (int)(char)param_1[1];
    uVar2 = (uint)param_1[1];
    iVar5 = (iVar5 + -0x37) * 0x10;
    if (uVar2 - 0x30 < 10) goto LAB_004089ec;
LAB_00408968:
    if (uVar2 - 0x41 < 6) {
      iVar3 = iVar3 + -0x37;
    }
    else {
      if (5 < uVar2 - 0x61) {
        return 0;
      }
      iVar3 = iVar3 + -0x57;
    }
    iVar4 = (int)(char)param_1[2];
    uVar2 = (uint)param_1[2];
    iVar5 = (iVar3 + iVar5) * 0x10;
    if (uVar2 - 0x30 < 10) goto LAB_00408998;
LAB_00408a0c:
    if (uVar2 - 0x41 < 6) {
      bVar1 = param_1[3];
      iVar5 = (iVar4 + -0x37 + iVar5) * 0x10;
      goto joined_r0x00408a34;
    }
    if (5 < uVar2 - 0x61) {
      return 0;
    }
    iVar5 = iVar4 + -0x57 + iVar5;
  }
  bVar1 = param_1[3];
  iVar5 = iVar5 << 4;
joined_r0x00408a34:
  uVar2 = (uint)bVar1;
  iVar3 = (int)(char)bVar1;
  if (uVar2 - 0x30 < 10) {
    return iVar3 + -0x30 + iVar5;
  }
  if (5 < uVar2 - 0x41) {
    if (5 < uVar2 - 0x61) {
      return 0;
    }
    return iVar3 + -0x57 + iVar5;
  }
  return iVar3 + -0x37 + iVar5;
}



// ==== FUN_00408ab8 @ 00408ab8 size=72

int FUN_00408ab8(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_malloc_00423734)(0x28);
  if (iVar1 != 0) {
    memset(iVar1,0,0x28);
  }
  return iVar1;
}



// ==== FUN_00408b00 @ 00408b00 size=272

int FUN_00408b00(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      param_2 = param_1[2] + param_2;
      iVar1 = iVar1 + param_1[2];
      if (param_1[1] < param_2) {
        uVar2 = param_2 - 1;
        uVar2 = (int)uVar2 >> 1 | uVar2;
        uVar2 = (int)uVar2 >> 2 | uVar2;
        uVar2 = (int)uVar2 >> 4 | uVar2;
        uVar2 = (int)uVar2 >> 8 | uVar2;
        iVar3 = ((int)uVar2 >> 0x10 | uVar2) + 1;
        iVar1 = (*(code *)PTR_malloc_00423734)(iVar3);
        if (iVar1 != 0) {
          memcpy(iVar1,*param_1,param_1[1]);
          (*_fdata)(*param_1);
          param_1[1] = iVar3;
          *param_1 = iVar1;
          return iVar1 + param_1[2];
        }
        (*_fdata)(*param_1);
        iVar1 = 0;
        param_1[1] = 0;
        *param_1 = 0;
      }
    }
  }
  return iVar1;
}



// ==== FUN_00408c10 @ 00408c10 size=96

undefined4 FUN_00408c10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = strlen();
  iVar2 = (*(code *)PTR_malloc_00423734)(iVar1 + 1);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = memcpy(iVar2,param_1,iVar1 + 1);
  }
  return uVar3;
}



// ==== FUN_00408c70 @ 00408c70 size=72

int FUN_00408c70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar2 = param_1[2];
    iVar1 = strlen(*param_1 + iVar2);
    return iVar1 + iVar2;
  }
  return 0;
}



// ==== FUN_00408cb8 @ 00408cb8 size=48

/* WARNING: Control flow encountered bad instruction data */

void FUN_00408cb8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_00408f70 @ 00408f70 size=816

undefined1 * FUN_00408f70(byte *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  
  bVar6 = *param_1;
  iVar7 = (int)(char)bVar6;
  if (iVar7 == 0) {
    pbVar5 = (byte *)0x3;
    pbVar8 = (byte *)0x0;
  }
  else {
    bVar1 = false;
    pbVar5 = param_1;
LAB_00408fcc:
    do {
      pbVar8 = pbVar5;
      bVar4 = true;
      if (0x1e < (iVar7 - 1U & 0xff)) {
        if (iVar7 == 0x22) {
          iVar7 = (int)(char)pbVar8[1];
          bVar1 = true;
          pbVar5 = pbVar8 + 1;
          if (iVar7 == 0) break;
          goto LAB_00408fcc;
        }
        bVar4 = iVar7 == 0x5c;
      }
      iVar7 = (int)(char)pbVar8[1];
      bVar1 = (bool)(bVar1 | bVar4);
      pbVar5 = pbVar8 + 1;
    } while (iVar7 != 0);
    if (bVar1) {
      iVar7 = 0;
      iVar2 = strchr(&DAT_00410cbc,bVar6);
      pbVar8 = param_1;
      if (iVar2 == 0) goto LAB_0040904c;
LAB_00409024:
      iVar7 = iVar7 + 2;
      do {
        pbVar8 = pbVar8 + 1;
        bVar6 = *pbVar8;
        while( true ) {
          if (bVar6 == 0) {
            if (param_2 == 0) {
              puVar3 = (undefined1 *)(*(code *)PTR_malloc_00423734)(iVar7 + 3);
            }
            else {
              puVar3 = (undefined1 *)FUN_00408b00(param_2);
            }
            if (puVar3 == (undefined1 *)0x0) goto LAB_00409298;
            *puVar3 = 0x22;
            pbVar5 = puVar3 + 1;
            bVar6 = *param_1;
            pbVar8 = pbVar5;
            if (bVar6 != 0) goto LAB_004090b0;
            goto LAB_004090e4;
          }
          iVar2 = strchr(&DAT_00410cbc,bVar6);
          if (iVar2 != 0) goto LAB_00409024;
LAB_0040904c:
          if (0x1f < bVar6) break;
          pbVar8 = pbVar8 + 1;
          bVar6 = *pbVar8;
          iVar7 = iVar7 + 6;
        }
        iVar7 = iVar7 + 1;
      } while( true );
    }
    pbVar8 = pbVar8 + (1 - (int)param_1);
    pbVar5 = pbVar8 + 3;
  }
  if (param_2 == 0) {
    puVar3 = (undefined1 *)(*(code *)PTR_malloc_00423734)(pbVar5);
  }
  else {
    puVar3 = (undefined1 *)FUN_00408b00(param_2);
  }
  if (puVar3 == (undefined1 *)0x0) {
LAB_00409298:
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *puVar3 = 0x22;
    iVar7 = strcpy(puVar3 + 1,param_1);
    pbVar8[iVar7] = 0x22;
    (pbVar8 + iVar7)[1] = 0;
  }
  return puVar3;
LAB_004090b0:
  if (((bVar6 < 0x20) || (bVar6 == 0x22)) || (bVar6 == 0x5c)) {
    *pbVar8 = 0x5c;
    bVar6 = *param_1;
    if (bVar6 == 0xc) {
      pbVar8[1] = 0x66;
      pbVar5 = pbVar8 + 2;
    }
    else if (bVar6 < 0xd) {
      if (bVar6 == 9) {
        pbVar5 = pbVar8 + 2;
        pbVar8[1] = 0x74;
      }
      else if (bVar6 == 10) {
        pbVar5 = pbVar8 + 2;
        pbVar8[1] = 0x6e;
      }
      else {
        if (bVar6 != 8) goto LAB_004091c8;
        pbVar5 = pbVar8 + 2;
        pbVar8[1] = 0x62;
      }
    }
    else if ((bVar6 == 0x22) || (bVar6 == 0x5c)) {
      pbVar8[1] = bVar6;
      pbVar5 = pbVar8 + 2;
    }
    else if (bVar6 == 0xd) {
      pbVar5 = pbVar8 + 2;
      pbVar8[1] = 0x72;
    }
    else {
LAB_004091c8:
      sprintf(pbVar8 + 1,"u%04x");
      pbVar5 = pbVar8 + 6;
    }
  }
  else {
    *pbVar8 = bVar6;
    pbVar5 = pbVar8 + 1;
  }
  bVar6 = param_1[1];
  pbVar8 = pbVar5;
  param_1 = param_1 + 1;
  if (bVar6 == 0) {
LAB_004090e4:
    *pbVar5 = 0x22;
    pbVar5[1] = 0;
    return puVar3;
  }
  goto LAB_004090b0;
}



// ==== FUN_004092a0 @ 004092a0 size=1096

byte * FUN_004092a0(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar8 = (byte *)(param_3 + 1);
  if (*param_3 != '\"') {
    DAT_00423a14 = param_3;
    return (byte *)0x0;
  }
  iVar5 = 0;
  pbVar1 = pbVar8;
  do {
    bVar7 = *pbVar1;
    while( true ) {
      iVar5 = iVar5 + 1;
      if ((bVar7 == 0x22) || (bVar7 == 0)) {
        pbVar1 = (byte *)(*(code *)PTR_malloc_00423734)(iVar5);
        if (pbVar1 == (byte *)0x0) {
          return (byte *)0x0;
        }
        bVar7 = param_3[1];
        pbVar9 = pbVar1;
        goto joined_r0x00409388;
      }
      if (bVar7 == 0x5c) break;
      pbVar1 = pbVar1 + 1;
      bVar7 = *pbVar1;
    }
    pbVar1 = pbVar1 + 2;
  } while( true );
joined_r0x00409388:
  while( true ) {
    if ((bVar7 == 0x22) || (bVar7 == 0)) {
      *pbVar9 = 0;
      bVar7 = *pbVar8;
      *param_2 = pbVar1;
      *param_1 = 4;
      pbVar1 = pbVar8 + 1;
      if (bVar7 != 0x22) {
        pbVar1 = pbVar8;
      }
      return pbVar1;
    }
    if (bVar7 == 0x5c) break;
    *pbVar9 = bVar7;
    pbVar8 = pbVar8 + 1;
    bVar7 = *pbVar8;
    pbVar9 = pbVar9 + 1;
  }
  switch(pbVar8[1] + 0x9e) {
  case 0:
    *pbVar9 = 8;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x00409388;
  default:
    *pbVar9 = pbVar8[1];
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x00409388;
  case 4:
    *pbVar9 = 0xc;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x00409388;
  case 0xc:
    *pbVar9 = 10;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x00409388;
  case 0x10:
    *pbVar9 = 0xd;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x00409388;
  case 0x12:
    *pbVar9 = 9;
    pbVar9 = pbVar9 + 1;
    bVar7 = pbVar8[2];
    pbVar8 = pbVar8 + 2;
    goto joined_r0x00409388;
  case 0x13:
    break;
  }
  uVar2 = FUN_00408934(pbVar8 + 2);
  pbVar4 = pbVar8 + 5;
  if ((0x3ff < uVar2 - 0xdc00) && (uVar2 != 0)) {
    if (uVar2 - 0xd800 < 0x400) {
      bVar7 = pbVar8[6];
      if (bVar7 != 0x5c) {
        pbVar8 = pbVar8 + 6;
        goto joined_r0x00409388;
      }
      bVar7 = 0x5c;
      if (pbVar8[7] == 0x75) {
        uVar3 = FUN_00408934(pbVar8 + 8);
        pbVar4 = pbVar8 + 0xb;
        if (uVar3 - 0xdc00 < 0x400) {
          uVar2 = (uVar3 & 0x3ff | (uVar2 & 0x3ff) << 10) + 0x10000;
          goto LAB_00409694;
        }
        bVar7 = pbVar8[0xc];
        pbVar8 = pbVar8 + 0xc;
        goto joined_r0x00409388;
      }
    }
    else {
      if (uVar2 < 0x80) {
        iVar5 = 1;
        iVar6 = 1;
      }
      else {
        iVar5 = 2;
        if (uVar2 < 0x800) {
          iVar6 = 2;
        }
        else {
LAB_00409694:
          if (uVar2 < 0x10000) {
            iVar5 = 3;
            iVar6 = 3;
          }
          else {
            iVar5 = 4;
            pbVar9[3] = (byte)uVar2 & 0x3f | 0x80;
            uVar2 = uVar2 >> 6;
            iVar6 = 4;
          }
          pbVar9[2] = (byte)uVar2 & 0x3f | 0x80;
          uVar2 = uVar2 >> 6;
        }
        pbVar9[1] = (byte)uVar2 & 0x3f | 0x80;
        uVar2 = uVar2 >> 6;
      }
      *pbVar9 = (byte)uVar2 | (&DAT_00410dd0)[iVar6];
      bVar7 = pbVar4[1];
      pbVar9 = pbVar9 + iVar5;
    }
    pbVar8 = pbVar4 + 1;
    goto joined_r0x00409388;
  }
  bVar7 = pbVar8[6];
  pbVar8 = pbVar8 + 6;
  goto joined_r0x00409388;
}



// ==== FUN_004096e8 @ 004096e8 size=2212

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004096e8(int param_1,byte *param_2)

{
  byte *in_zero;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  char *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  DAT_00423a10 = DAT_00423a10 + 1;
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  iVar1 = strncmp(param_2,&DAT_00410ccc,4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    return param_2 + 4;
  }
  iVar1 = strncmp(param_2,"false",5);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return param_2 + 5;
  }
  iVar1 = strncmp(param_2,&DAT_0040e934,4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return param_2 + 4;
  }
  uVar2 = (uint)(char)*param_2;
  if (uVar2 == 0x22) {
    pbVar9 = (byte *)FUN_004092a0(param_1 + 0xc,param_1 + 0x10,param_2);
    return pbVar9;
  }
  if (uVar2 == 0x2d) {
    param_2 = param_2 + 1;
    uVar2 = (uint)(char)*param_2;
    dVar14 = DAT_00410e18;
  }
  else {
    dVar14 = DAT_00410e10;
    if (9 < (uVar2 - 0x30 & 0xff)) {
      if (uVar2 == 0x5b) {
        *(undefined4 *)(param_1 + 0xc) = 5;
        if (param_2 + 1 == (byte *)0x0) {
LAB_0040985c:
          bVar10 = *in_zero;
          pbVar9 = (byte *)0x0;
LAB_00409868:
          if (bVar10 == 0x5d) {
            return pbVar9 + 1;
          }
        }
        else {
          bVar10 = param_2[1];
          pbVar9 = param_2 + 1;
          while (bVar10 != 0) {
            pbVar8 = pbVar9 + 1;
            if (0x20 < bVar10) goto LAB_00409868;
            if (pbVar8 == (byte *)0x0) goto LAB_0040985c;
            pbVar9 = pbVar8;
            bVar10 = *pbVar8;
          }
        }
        piVar4 = (int *)FUN_00408ab8();
        *(int **)(param_1 + 8) = piVar4;
        if (piVar4 == (int *)0x0) {
          return (byte *)0x0;
        }
        do {
          pbVar8 = pbVar9 + 1;
          if (0x1f < (byte)(*pbVar9 - 1)) break;
          pbVar9 = pbVar8;
        } while (pbVar8 != (byte *)0x0);
        pbVar9 = (byte *)FUN_004096e8(piVar4,pbVar9);
        do {
          param_2 = pbVar9;
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          iVar1 = (int)(char)*param_2;
          pbVar9 = param_2 + 1;
        } while ((iVar1 - 1U & 0xff) < 0x20);
        while (iVar1 == 0x2c) {
          piVar6 = (int *)FUN_00408ab8();
          if (piVar6 == (int *)0x0) {
            return (byte *)0x0;
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          pbVar9 = (byte *)0x0;
          if (param_2 != (byte *)0xffffffff) {
            pbVar9 = param_2 + 2;
            if ((byte)(param_2[1] - 1) < 0x20) {
              for (; (pbVar9 != (byte *)0x0 && ((byte)(*pbVar9 - 1) < 0x20)); pbVar9 = pbVar9 + 1) {
              }
            }
            else {
              pbVar9 = param_2 + 1;
            }
          }
          param_2 = (byte *)FUN_004096e8(piVar6,pbVar9);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          bVar10 = *param_2;
          while (iVar1 = (int)(char)bVar10, piVar4 = piVar6, (iVar1 - 1U & 0xff) < 0x20) {
            param_2 = param_2 + 1;
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
            bVar10 = *param_2;
          }
        }
        if (iVar1 == 0x5d) {
LAB_00409f84:
          return param_2 + 1;
        }
      }
      else if (uVar2 == 0x7b) {
        *(undefined4 *)(param_1 + 0xc) = 6;
        if (param_2 + 1 == (byte *)0x0) {
LAB_00409cf0:
          bVar10 = *in_zero;
          pbVar9 = (byte *)0x0;
LAB_004097ec:
          if (bVar10 == 0x7d) {
            return pbVar9 + 1;
          }
        }
        else {
          bVar10 = param_2[1];
          pbVar9 = param_2 + 1;
          while (bVar10 != 0) {
            pbVar8 = pbVar9 + 1;
            if (0x20 < bVar10) goto LAB_004097ec;
            if (pbVar8 == (byte *)0x0) goto LAB_00409cf0;
            pbVar9 = pbVar8;
            bVar10 = *pbVar8;
          }
        }
        piVar4 = (int *)FUN_00408ab8();
        *(int **)(param_1 + 8) = piVar4;
        if (piVar4 != (int *)0x0) {
          do {
            if (0x1f < (byte)(*pbVar9 - 1)) break;
            pbVar9 = pbVar9 + 1;
          } while (pbVar9 != (byte *)0x0);
          pcVar5 = (char *)FUN_004092a0(piVar4 + 3,piVar4 + 4,pbVar9);
          if (pcVar5 != (char *)0x0) {
            while (pcVar11 = pcVar5 + 1, (byte)(*pcVar5 - 1U) < 0x20) {
              pcVar5 = pcVar11;
              if (pcVar11 == (char *)0x0) {
                return (byte *)0x0;
              }
            }
            iVar1 = piVar4[4];
            piVar4[4] = 0;
            piVar4[8] = iVar1;
            if (*pcVar5 != ':') {
              DAT_00423a14 = (byte *)pcVar5;
              return (byte *)0x0;
            }
            pcVar11 = (char *)0x0;
            if (pcVar5 != (char *)0xffffffff) {
              pcVar11 = pcVar5 + 2;
              if ((byte)(pcVar5[1] - 1U) < 0x20) {
                for (; (pcVar11 != (char *)0x0 && ((byte)(*pcVar11 - 1U) < 0x20));
                    pcVar11 = pcVar11 + 1) {
                }
              }
              else {
                pcVar11 = pcVar5 + 1;
              }
            }
            pbVar9 = (byte *)FUN_004096e8(piVar4,pcVar11);
            do {
              param_2 = pbVar9;
              if (param_2 == (byte *)0x0) {
                return (byte *)0x0;
              }
              iVar1 = (int)(char)*param_2;
              pbVar9 = param_2 + 1;
            } while ((iVar1 - 1U & 0xff) < 0x20);
            while (iVar1 == 0x2c) {
              piVar6 = (int *)FUN_00408ab8();
              if (piVar6 == (int *)0x0) {
                return (byte *)0x0;
              }
              *piVar4 = (int)piVar6;
              piVar6[1] = (int)piVar4;
              pbVar9 = (byte *)0x0;
              if (param_2 != (byte *)0xffffffff) {
                pbVar9 = param_2 + 2;
                if ((byte)(param_2[1] - 1) < 0x20) {
                  for (; (pbVar9 != (byte *)0x0 && ((byte)(*pbVar9 - 1) < 0x20));
                      pbVar9 = pbVar9 + 1) {
                  }
                }
                else {
                  pbVar9 = param_2 + 1;
                }
              }
              pcVar5 = (char *)FUN_004092a0(piVar6 + 3,piVar6 + 4,pbVar9);
              if (pcVar5 == (char *)0x0) {
                return (byte *)0x0;
              }
              if ((byte)(*pcVar5 - 1U) < 0x20) {
                do {
                  pcVar5 = pcVar5 + 1;
                  if (pcVar5 == (char *)0x0) {
                    return (byte *)0x0;
                  }
                } while ((byte)(*pcVar5 - 1U) < 0x20);
                iVar1 = piVar6[4];
              }
              else {
                iVar1 = piVar6[4];
              }
              piVar6[4] = 0;
              piVar6[8] = iVar1;
              if (*pcVar5 != ':') {
                DAT_00423a14 = (byte *)pcVar5;
                return (byte *)0x0;
              }
              pcVar11 = (char *)0x0;
              if (pcVar5 != (char *)0xffffffff) {
                pcVar11 = pcVar5 + 2;
                if ((byte)(pcVar5[1] - 1U) < 0x20) {
                  for (; (pcVar11 != (char *)0x0 && ((byte)(*pcVar11 - 1U) < 0x20));
                      pcVar11 = pcVar11 + 1) {
                  }
                }
                else {
                  pcVar11 = pcVar5 + 1;
                }
              }
              param_2 = (byte *)FUN_004096e8(piVar6,pcVar11);
              if (param_2 == (byte *)0x0) {
                return (byte *)0x0;
              }
              bVar10 = *param_2;
              while (iVar1 = (int)(char)bVar10, piVar4 = piVar6, (iVar1 - 1U & 0xff) < 0x20) {
                param_2 = param_2 + 1;
                if (param_2 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                bVar10 = *param_2;
              }
            }
            if (iVar1 != 0x7d) {
              DAT_00423a14 = param_2;
              return (byte *)0x0;
            }
            goto LAB_00409f84;
          }
        }
        return (byte *)0x0;
      }
      DAT_00423a14 = param_2;
      return (byte *)0x0;
    }
  }
  if (uVar2 == 0x30) {
    uVar2 = (uint)(char)param_2[1];
    param_2 = param_2 + 1;
  }
  if ((uVar2 - 0x31 & 0xff) < 9) {
    dVar12 = 0.0;
    uVar3 = uVar2;
    do {
      param_2 = param_2 + 1;
      uVar2 = (uint)(char)*param_2;
      dVar12 = (double)CONCAT44(uVar3 - 0x30,SUB84(dVar12 * _DAT_00410e20,0)) +
               (double)(int)(uVar3 - 0x30);
      uVar3 = uVar2;
    } while ((uVar2 - 0x30 & 0xff) < 10);
  }
  else {
    dVar12 = 0.0;
  }
  if (uVar2 == 0x2e) {
    pbVar9 = param_2 + 1;
    if (9 < ((int)(char)*pbVar9 - 0x30U & 0xff)) {
      dVar13 = 0.0;
      goto LAB_00409a74;
    }
    param_2 = param_2 + 1;
    dVar13 = 0.0;
    uVar3 = (int)(char)*pbVar9;
    do {
      param_2 = param_2 + 1;
      uVar2 = (uint)(char)*param_2;
      dVar13 = dVar13 - DAT_00410e10;
      dVar12 = (double)CONCAT44(uVar3 - 0x30,SUB84(dVar12 * _DAT_00410e20,0)) +
               (double)(int)(uVar3 - 0x30);
      uVar3 = uVar2;
    } while ((uVar2 - 0x30 & 0xff) < 10);
  }
  else {
    dVar13 = 0.0;
  }
  if ((uVar2 & 0xffffffdf) == 0x45) {
    iVar1 = (int)(char)param_2[1];
    iVar7 = 1;
    if (iVar1 == 0x2b) {
      iVar1 = (int)(char)param_2[2];
      param_2 = param_2 + 2;
    }
    else if (iVar1 == 0x2d) {
      iVar1 = (int)(char)param_2[2];
      iVar7 = -1;
      param_2 = param_2 + 2;
    }
    else {
      param_2 = param_2 + 1;
    }
    uVar2 = iVar1 - 0x30;
    iVar1 = 0;
    if ((uVar2 & 0xff) < 10) {
      do {
        param_2 = param_2 + 1;
        iVar1 = iVar1 * 10 + uVar2;
        uVar2 = (int)(char)*param_2 - 0x30;
      } while ((uVar2 & 0xff) < 10);
      dVar12 = (double)CONCAT44(iVar1 * iVar7,SUB84(dVar12,0));
      dVar13 = dVar13 + (double)(iVar1 * iVar7);
      goto LAB_00409a74;
    }
  }
  dVar13 = dVar13 + 0.0;
LAB_00409a74:
  dVar14 = dVar14 * dVar12;
  pow(_DAT_00410e20,dVar13);
  *(undefined4 *)(param_1 + 0xc) = 3;
  iVar1 = (int)(dVar14 * dVar12);
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(iVar1,SUB84(dVar14 * dVar12,0));
  *(int *)(param_1 + 0x14) = iVar1;
  return param_2;
}



// ==== FUN_0040a338 @ 0040a338 size=484

char * FUN_0040a338(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined1 *puVar15;
  int iVar16;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (param_4 == (int *)0x0) {
    switch(*(undefined1 *)(param_1 + 0xc)) {
    case 0:
      pcVar5 = (char *)FUN_00408c10("false");
      return pcVar5;
    case 1:
      pcVar5 = (char *)FUN_00408c10(&DAT_0040e934);
      return pcVar5;
    case 2:
      pcVar5 = (char *)FUN_00408c10(&DAT_00410ccc);
      return pcVar5;
    case 3:
      pcVar5 = (char *)FUN_00408cb8(param_1,0);
      return pcVar5;
    case 4:
      pcVar5 = (char *)FUN_00408f70(*(undefined4 *)(param_1 + 0x10),0);
      return pcVar5;
    case 5:
      param_4 = (int *)0x0;
      break;
    case 6:
      pcVar5 = (char *)FUN_0040a51c(param_1 + 8,param_2,param_3,0);
      return pcVar5;
    default:
      goto switchD_0040a36c_default;
    }
LAB_00409f8c:
    piVar6 = (int *)(param_1 + 8);
    piVar14 = (int *)*piVar6;
    if (piVar14 == (int *)0x0) {
      if (param_4 == (int *)0x0) {
        pcVar5 = (char *)(*(code *)PTR_malloc_00423734)(3);
      }
      else {
        pcVar5 = (char *)FUN_00408b00(param_4,3);
      }
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '[';
        pcVar5[1] = ']';
        pcVar5[2] = '\0';
        return pcVar5;
      }
    }
    else {
      iVar11 = 0;
      do {
        iVar13 = iVar11;
        piVar14 = (int *)*piVar14;
        iVar11 = iVar13 + 1;
      } while (piVar14 != (int *)0x0);
      if (param_4 == (int *)0x0) {
        piVar14 = (int *)(*(code *)PTR_malloc_00423734)(iVar11 * 4);
        if (piVar14 != (int *)0x0) {
          memset(piVar14,0,iVar11 * 4);
          piVar6 = (int *)*piVar6;
          if (piVar6 == (int *)0x0) {
            iVar4 = 5;
          }
          else {
            iVar4 = 5;
            piVar8 = piVar14;
            do {
              iVar16 = FUN_0040a338(piVar6,param_2 + 1,param_3,0);
              *piVar8 = iVar16;
              if (iVar16 == 0) goto LAB_0040a1e4;
              iVar16 = strlen(iVar16);
              piVar6 = (int *)*piVar6;
              iVar4 = (param_3 != 0) + 2 + iVar4 + iVar16;
              piVar8 = piVar8 + 1;
            } while (piVar6 != (int *)0x0);
          }
          pcVar5 = (char *)(*(code *)PTR_malloc_00423734)(iVar4);
          if (pcVar5 != (char *)0x0) {
            pcVar9 = pcVar5 + 1;
            iVar4 = 0;
            *pcVar5 = '[';
            pcVar5[1] = '\0';
            piVar6 = piVar14;
            do {
              iVar7 = *piVar6;
              iVar16 = strlen(iVar7);
              memcpy(pcVar9,iVar7,iVar16);
              pcVar9 = pcVar9 + iVar16;
              if (iVar4 != iVar13) {
                *pcVar9 = ',';
                pcVar10 = pcVar9 + 2;
                if (param_3 == 0) {
                  pcVar10 = pcVar9 + 1;
                }
                else {
                  pcVar9[1] = ' ';
                }
                *pcVar10 = '\0';
                pcVar9 = pcVar10;
              }
              iVar16 = *piVar6;
              iVar4 = iVar4 + 1;
              piVar6 = piVar6 + 1;
              (*_fdata)(iVar16);
            } while (iVar4 < iVar11);
            (*_fdata)(piVar14);
            *pcVar9 = ']';
            pcVar9[1] = '\0';
            return pcVar5;
          }
LAB_0040a1e4:
          iVar13 = 0;
          piVar6 = piVar14;
          do {
            iVar4 = *piVar6;
            iVar13 = iVar13 + 1;
            piVar6 = piVar6 + 1;
            if (iVar4 != 0) {
              (*_fdata)();
            }
          } while (iVar13 < iVar11);
          (*_fdata)(piVar14);
        }
      }
      else {
        iVar11 = param_4[2];
        puVar3 = (undefined1 *)FUN_00408b00(param_4,1);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0x5b;
          piVar6 = (int *)*piVar6;
          param_4[2] = param_4[2] + 1;
          if (piVar6 != (int *)0x0) {
            uVar12 = 3;
            iVar13 = 1;
            if (param_3 == 0) {
              uVar12 = 2;
            }
            else {
              iVar13 = 2;
            }
            do {
              FUN_0040a338(piVar6,param_2 + 1,param_3,param_4);
              iVar4 = FUN_00408c70(param_4);
              iVar16 = *piVar6;
              param_4[2] = iVar4;
              if (iVar16 == 0) break;
              puVar3 = (undefined1 *)FUN_00408b00(param_4,uVar12);
              if (puVar3 == (undefined1 *)0x0) {
                return (char *)0x0;
              }
              *puVar3 = 0x2c;
              puVar15 = puVar3 + 1;
              if (param_3 != 0) {
                puVar3[1] = 0x20;
                puVar15 = puVar3 + 2;
              }
              *puVar15 = 0;
              piVar6 = (int *)*piVar6;
              param_4[2] = param_4[2] + iVar13;
            } while (piVar6 != (int *)0x0);
          }
          puVar3 = (undefined1 *)FUN_00408b00(param_4,2);
          if (puVar3 != (undefined1 *)0x0) {
            *puVar3 = 0x5d;
            puVar3[1] = 0;
            return (char *)(*param_4 + iVar11);
          }
        }
      }
    }
    return (char *)0x0;
  }
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 0:
    pcVar5 = (char *)FUN_00408b00(param_4,6);
    cVar2 = s_false_0040ec28[5];
    cVar1 = s_false_0040ec28[4];
    if (pcVar5 != (char *)0x0) {
      *(undefined4 *)pcVar5 = s_false_0040ec28._0_4_;
      pcVar5[4] = cVar1;
      pcVar5[5] = cVar2;
      return pcVar5;
    }
    break;
  case 1:
    pcVar5 = (char *)FUN_00408b00(param_4,5);
    cVar1 = DAT_0040e938;
    if (pcVar5 != (char *)0x0) {
      *(undefined4 *)pcVar5 = DAT_0040e934;
      pcVar5[4] = cVar1;
      return pcVar5;
    }
    break;
  case 2:
    pcVar5 = (char *)FUN_00408b00(param_4,5);
    cVar1 = DAT_00410cd0;
    if (pcVar5 != (char *)0x0) {
      *(undefined4 *)pcVar5 = DAT_00410ccc;
      pcVar5[4] = cVar1;
      return pcVar5;
    }
    break;
  case 3:
    pcVar5 = (char *)FUN_00408cb8(param_1,param_4);
    return pcVar5;
  case 4:
    pcVar5 = (char *)FUN_00408f70(*(undefined4 *)(param_1 + 0x10),param_4);
    return pcVar5;
  case 5:
    goto LAB_00409f8c;
  case 6:
    pcVar5 = (char *)FUN_0040a51c(param_1 + 8);
    return pcVar5;
  }
switchD_0040a36c_default:
  return (char *)0x0;
}



// ==== FUN_0040a51c @ 0040a51c size=1840

undefined1 * FUN_0040a51c(int *param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    if (param_4 == (int *)0x0) {
      if (param_3 == 0) {
        iVar17 = 3;
      }
      else {
        iVar17 = param_2 + 4;
      }
      puVar3 = (undefined1 *)(*(code *)PTR_malloc_00423734)(iVar17);
    }
    else {
      iVar17 = 3;
      if (param_3 != 0) {
        iVar17 = param_2 + 4;
      }
      puVar3 = (undefined1 *)FUN_00408b00(param_4,iVar17);
    }
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0x7b;
      if (param_3 == 0) {
        puVar9 = puVar3 + 1;
      }
      else {
        puVar3[1] = 10;
        puVar9 = puVar3 + 2;
        if (1 < param_2) {
          puVar5 = puVar9 + param_2 + -1;
          puVar4 = puVar9;
          do {
            puVar18 = puVar4 + 1;
            *puVar4 = 9;
            puVar9 = puVar5;
            puVar4 = puVar18;
          } while (puVar18 != puVar5);
        }
      }
      *puVar9 = 0x7d;
      puVar9[1] = 0;
      return puVar3;
    }
    return (undefined1 *)0x0;
  }
  iVar17 = 0;
  do {
    iVar16 = iVar17;
    piVar2 = (int *)*piVar2;
    iVar17 = iVar16 + 1;
  } while (piVar2 != (int *)0x0);
  if (param_4 != (int *)0x0) {
    uVar10 = 3;
    iVar17 = param_4[2];
    if (param_3 == 0) {
      uVar10 = 2;
    }
    iVar16 = 1;
    if (param_3 != 0) {
      iVar16 = 2;
    }
    puVar3 = (undefined1 *)FUN_00408b00(param_4,uVar10);
    if (puVar3 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    *puVar3 = 0x7b;
    if (param_3 == 0) {
      puVar9 = puVar3 + 1;
    }
    else {
      puVar9 = puVar3 + 2;
      puVar3[1] = 10;
    }
    *puVar9 = 0;
    param_1 = (int *)*param_1;
    iVar12 = param_2 + 1;
    param_4[2] = param_4[2] + iVar16;
    if (param_1 != (int *)0x0) {
      do {
        if (param_3 == 0) {
          iVar13 = 1;
          FUN_00408f70(param_1[8],param_4);
          iVar16 = FUN_00408c70(param_4);
          param_4[2] = iVar16;
        }
        else {
          puVar3 = (undefined1 *)FUN_00408b00(param_4,iVar12);
          if (puVar3 == (undefined1 *)0x0) {
            return (undefined1 *)0x0;
          }
          puVar9 = puVar3;
          if (0 < iVar12) {
            do {
              puVar4 = puVar9 + 1;
              *puVar9 = 9;
              puVar9 = puVar4;
            } while (puVar4 != puVar3 + iVar12);
          }
          iVar16 = param_1[8];
          iVar13 = 2;
          param_4[2] = param_4[2] + iVar12;
          FUN_00408f70(iVar16,param_4);
          iVar16 = FUN_00408c70(param_4);
          param_4[2] = iVar16;
        }
        puVar3 = (undefined1 *)FUN_00408b00(param_4,iVar13);
        if (puVar3 == (undefined1 *)0x0) {
          return (undefined1 *)0x0;
        }
        *puVar3 = 0x3a;
        if (param_3 != 0) {
          puVar3[1] = 9;
        }
        param_4[2] = param_4[2] + iVar13;
        FUN_0040a338(param_1,iVar12,param_3,param_4);
        iVar16 = FUN_00408c70(param_4);
        iVar13 = *param_1;
        param_4[2] = iVar16;
        iVar16 = (uint)(param_3 != 0) + (uint)(iVar13 != 0);
        puVar3 = (undefined1 *)FUN_00408b00(param_4,iVar16 + 1);
        if (puVar3 == (undefined1 *)0x0) {
          return (undefined1 *)0x0;
        }
        puVar9 = puVar3;
        if (*param_1 != 0) {
          puVar9 = puVar3 + 1;
          *puVar3 = 0x2c;
        }
        puVar3 = puVar9;
        if ((param_3 != 0) != 0) {
          puVar3 = puVar9 + 1;
          *puVar9 = 10;
        }
        *puVar3 = 0;
        param_1 = (int *)*param_1;
        param_4[2] = param_4[2] + iVar16;
      } while (param_1 != (int *)0x0);
    }
    if (param_3 == 0) {
      puVar3 = (undefined1 *)FUN_00408b00(param_4,2);
      if (puVar3 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
    }
    else {
      puVar3 = (undefined1 *)FUN_00408b00(param_4,param_2 + 2);
      if (puVar3 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      if (param_2 < 1) {
        iVar17 = 0;
      }
      else {
        puVar4 = puVar3 + param_2;
        puVar9 = puVar3;
        do {
          puVar5 = puVar9 + 1;
          *puVar9 = 9;
          puVar9 = puVar5;
          puVar3 = puVar4;
          iVar17 = param_2;
        } while (puVar5 != puVar4);
      }
    }
    *puVar3 = 0x7d;
    puVar3[1] = 0;
    return (undefined1 *)(*param_4 + iVar17);
  }
  iVar12 = iVar17 * 4;
  piVar2 = (int *)(*(code *)PTR_malloc_00423734)(iVar12);
  if (piVar2 == (int *)0x0) {
    return (undefined1 *)0x0;
  }
  piVar6 = (int *)(*(code *)PTR_malloc_00423734)(iVar12);
  if (piVar6 == (int *)0x0) {
    (*_fdata)(piVar2);
    return (undefined1 *)0x0;
  }
  iVar13 = param_2 + 1;
  memset(piVar2,0,iVar12);
  memset(piVar6,0,iVar12);
  param_1 = (int *)*param_1;
  if (param_3 == 0) {
    iVar12 = 7;
  }
  else {
    iVar12 = param_2 + 8;
  }
  if (param_1 != (int *)0x0) {
    iVar15 = 0;
    bVar1 = false;
    iVar19 = param_2 + 3;
    if (param_3 == 0) {
      iVar19 = 0;
    }
    do {
      iVar7 = FUN_00408f70(param_1[8],0);
      *(int *)((int)piVar6 + iVar15) = iVar7;
      iVar8 = FUN_0040a338(param_1,iVar13,param_3,0);
      *(int *)((int)piVar2 + iVar15) = iVar8;
      if (iVar7 == 0) {
        bVar1 = true;
      }
      else if (iVar8 == 0) {
        bVar1 = true;
      }
      else {
        iVar8 = strlen(iVar8);
        iVar7 = strlen(iVar7);
        iVar12 = iVar19 + 2 + iVar12 + iVar8 + iVar7;
      }
      param_1 = (int *)*param_1;
      iVar15 = iVar15 + 4;
    } while (param_1 != (int *)0x0);
    if (bVar1) goto LAB_0040a7f4;
  }
  puVar3 = (undefined1 *)(*(code *)PTR_malloc_00423734)(iVar12);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0x7b;
    if (param_3 == 0) {
      puVar9 = puVar3 + 1;
    }
    else {
      puVar9 = puVar3 + 2;
      puVar3[1] = 10;
    }
    iVar12 = 0;
    *puVar9 = 0;
    piVar11 = piVar6;
    piVar14 = piVar2;
    do {
      if (param_3 == 0) {
        iVar19 = *piVar11;
        iVar15 = strlen(iVar19);
        memcpy(puVar9,iVar19,iVar15);
        puVar4 = puVar9 + iVar15 + 1;
        puVar9[iVar15] = 0x3a;
      }
      else {
        puVar4 = puVar9;
        if (0 < iVar13) {
          puVar4 = puVar9 + iVar13;
          do {
            puVar5 = puVar9 + 1;
            *puVar9 = 9;
            puVar9 = puVar5;
          } while (puVar5 != puVar4);
        }
        iVar19 = *piVar11;
        iVar15 = strlen(iVar19);
        iVar19 = memcpy(puVar4,iVar19,iVar15);
        puVar9 = (undefined1 *)(iVar19 + iVar15);
        *puVar9 = 0x3a;
        puVar4 = puVar9 + 2;
        puVar9[1] = 9;
      }
      strcpy(puVar4,*piVar14);
      iVar15 = strlen(*piVar14);
      puVar4 = puVar4 + iVar15;
      if (iVar16 != iVar12) {
        *puVar4 = 0x2c;
        puVar4 = puVar4 + 1;
      }
      puVar9 = puVar4;
      if (param_3 != 0) {
        puVar9 = puVar4 + 1;
        *puVar4 = 10;
      }
      *puVar9 = 0;
      iVar12 = iVar12 + 1;
      iVar15 = *piVar11;
      piVar11 = piVar11 + 1;
      (*_fdata)(iVar15);
      (*_fdata)(*piVar14);
      piVar14 = piVar14 + 1;
    } while (iVar12 < iVar17);
    (*_fdata)(piVar6);
    (*_fdata)(piVar2);
    puVar4 = puVar9;
    if ((param_3 != 0) && (puVar5 = puVar9 + param_2, 0 < param_2)) {
      do {
        puVar4 = puVar9 + 1;
        *puVar9 = 9;
        puVar9 = puVar4;
      } while (puVar4 != puVar5);
    }
    *puVar4 = 0x7d;
    puVar4[1] = 0;
    return puVar3;
  }
LAB_0040a7f4:
  iVar16 = 0;
  piVar11 = piVar2;
  piVar14 = piVar6;
  do {
    iVar12 = *piVar14;
    iVar16 = iVar16 + 1;
    piVar14 = piVar14 + 1;
    if (iVar12 != 0) {
      (*_fdata)();
    }
    iVar12 = *piVar11;
    piVar11 = piVar11 + 1;
    if (iVar12 != 0) {
      (*_fdata)();
    }
  } while (iVar16 < iVar17);
  (*_fdata)(piVar6);
  (*_fdata)(piVar2);
  return (undefined1 *)0x0;
}



// ==== FUN_0040ac4c @ 0040ac4c size=200

void FUN_0040ac4c(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    uVar2 = param_1[3];
    iVar1 = *param_1;
    if ((uVar2 & 0x100) == 0) {
      if (param_1[2] != 0) {
        FUN_0040ac4c();
        uVar2 = param_1[3];
        if ((uVar2 & 0x100) != 0) goto LAB_0040ac7c;
      }
      if (param_1[4] != 0) {
        (*_fdata)();
        uVar2 = param_1[3];
      }
    }
LAB_0040ac7c:
    if (((uVar2 & 0x200) == 0) && (param_1[8] != 0)) {
      (*_fdata)();
    }
    (*_fdata)(param_1);
    param_1 = (int *)iVar1;
  } while( true );
}



// ==== FUN_0040ad14 @ 0040ad14 size=308

int FUN_0040ad14(char *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  char *in_zero;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = FUN_00408ab8();
  DAT_00423a14 = (byte *)0x0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    do {
      pcVar1 = param_1;
      if (pcVar1 == (char *)0x0) break;
      param_1 = pcVar1 + 1;
    } while ((byte)(*pcVar1 - 1U) < 0x20);
    pbVar3 = (byte *)FUN_004096e8(iVar2,pcVar1);
    if (pbVar3 == (byte *)0x0) {
      FUN_0040ac4c(iVar2);
      iVar2 = 0;
    }
    else {
      if (param_3 != 0) {
        do {
          if (*pbVar3 == 0) goto LAB_0040add0;
          if (0x20 < *pbVar3) goto LAB_0040ae1c;
          pbVar3 = pbVar3 + 1;
        } while (pbVar3 != (byte *)0x0);
        if (*in_zero != '\0') {
LAB_0040ae1c:
          FUN_0040ac4c(iVar2);
          DAT_00423a14 = pbVar3;
          return 0;
        }
      }
LAB_0040add0:
      if (param_2 == (undefined4 *)0x0) {
        return iVar2;
      }
      *param_2 = pbVar3;
    }
  }
  return iVar2;
}



// ==== FUN_0040ae48 @ 0040ae48 size=16

void FUN_0040ae48(undefined4 param_1)

{
  FUN_0040ad14(param_1,0,0);
  return;
}



// ==== FUN_0040ae58 @ 0040ae58 size=20

void FUN_0040ae58(undefined4 param_1)

{
  FUN_0040a338(param_1,0,0,0);
  return;
}



// ==== FUN_0040ae6c @ 0040ae6c size=88

int FUN_0040ae6c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  while ((piVar2 != (int *)0x0 && (iVar1 = FUN_0040889c(piVar2[8],param_2), iVar1 != 0))) {
    piVar2 = (int *)*piVar2;
  }
  return (int)piVar2;
}



// ==== FUN_0040aec4 @ 0040aec4 size=60

void FUN_0040aec4(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    do {
      piVar2 = piVar1;
      piVar1 = (int *)*piVar2;
    } while ((int *)*piVar2 != (int *)0x0);
    *piVar2 = param_2;
    *(int **)(param_2 + 4) = piVar2;
    return;
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}



// ==== FUN_0040af00 @ 0040af00 size=128

void FUN_0040af00(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x20) != 0) {
      (*_fdata)();
    }
    uVar1 = FUN_00408c10(param_2);
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    FUN_0040aec4(param_1,param_3);
    return;
  }
  return;
}



// ==== FUN_0040af80 @ 0040af80 size=56

void FUN_0040af80(double param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408ab8();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(double *)(iVar1 + 0x18) = param_1;
    *(int *)(iVar1 + 0x14) = (int)param_1;
  }
  return;
}



// ==== FUN_0040afb8 @ 0040afb8 size=76

int FUN_0040afb8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00408ab8();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 4;
    uVar2 = FUN_00408c10(param_1);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
  }
  return iVar1;
}



// ==== FUN_0040b004 @ 0040b004 size=40

void FUN_0040b004(void)

{
  int iVar1;
  
  iVar1 = FUN_00408ab8();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 6;
  }
  return;
}



// ==== FUN_0040b10c @ 0040b10c size=28

void FUN_0040b10c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  memset(param_1,param_3,param_4);
  return;
}



// ==== FUN_0040b128 @ 0040b128 size=284

undefined4 FUN_0040b128(int *param_1)

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
    acStack_76[0] = s__tmp_logsock_00410e40[0];
    acStack_76[1] = s__tmp_logsock_00410e40[1];
    acStack_76[2] = s__tmp_logsock_00410e40[2];
    acStack_76[3] = s__tmp_logsock_00410e40[3];
    acStack_72[0] = s__tmp_logsock_00410e40[4];
    acStack_72[1] = s__tmp_logsock_00410e40[5];
    acStack_72[2] = s__tmp_logsock_00410e40[6];
    acStack_72[3] = s__tmp_logsock_00410e40[7];
    local_6e[0] = s__tmp_logsock_00410e40[8];
    local_6e[1] = s__tmp_logsock_00410e40[9];
    local_6e[2] = s__tmp_logsock_00410e40[10];
    local_6e[3] = s__tmp_logsock_00410e40[0xb];
    local_6a = s__tmp_logsock_00410e40[0xc];
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



// ==== FUN_0040b244 @ 0040b244 size=536

void FUN_0040b244(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_00423a28 == (undefined4 *)0x0) {
    iVar1 = FUN_0040b128(&DAT_00429bb0);
    if (iVar1 == 0) {
      DAT_00423a28 = (undefined4 *)&DAT_00429bb0;
    }
    else if (DAT_00423a28 == (undefined4 *)0x0) goto LAB_0040b394;
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
  iVar1 = sendto(*DAT_00423a28,&local_2828,uVar2 + 4,0x40,DAT_00423a28 + 2,DAT_00423a28[1]);
  if (0 < iVar1) {
    return;
  }
LAB_0040b394:
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



// ==== FUN_0040b45c @ 0040b45c size=48

void FUN_0040b45c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,"r");
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_0040b48c @ 0040b48c size=496

int FUN_0040b48c(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,"r");
    if (iVar1 == 0) {
      return -3;
    }
    uVar2 = fileno(iVar1);
    puVar5 = local_28;
    if ((int)uVar2 < 0) {
      return 0;
    }
    puVar4 = local_a8;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
    local_28[0] = param_4;
    local_28[1] = 0;
    local_a8[uVar2 >> 5] = local_a8[uVar2 >> 5] | 1 << (uVar2 & 0x1f);
    if ((int)param_4 < 1) {
      puVar5 = (uint *)0x0;
    }
    iVar3 = select(uVar2 + 1,local_a8,0,0,puVar5);
    if (0 < iVar3) {
      if (((int)local_a8[uVar2 >> 5] >> (uVar2 & 0x1f) & 1U) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fread(param_2,1,param_3 + -1,iVar1);
        *(undefined1 *)(param_2 + iVar3) = 0;
      }
      pclose(iVar1);
      return iVar3;
    }
    iVar1 = strstr(param_1,"cloudAPI");
    if (iVar1 != 0) {
      FUN_0040b45c("killall cloudAPI");
      FUN_0040b45c("killall cloudAPI");
      FUN_0040b45c("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_0040b67c @ 0040b67c size=88

int FUN_0040b67c(int *param_1,undefined4 param_2)

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



// ==== FUN_0040b6d4 @ 0040b6d4 size=44

undefined4 FUN_0040b6d4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
    uVar1 = mq_send();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_0040b700 @ 0040b700 size=244

int FUN_0040b700(undefined4 param_1,undefined4 param_2)

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



// ==== FUN_0040b7f4 @ 0040b7f4 size=112

void FUN_0040b7f4(void)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  gettimeofday(&local_10,0);
  return;
}



// ==== FUN_0040b864 @ 0040b864 size=104

void FUN_0040b864(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== FUN_0040b8cc @ 0040b8cc size=224

undefined4 FUN_0040b8cc(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (iVar2 = strstr(param_3), iVar2 == 0)) {
    return 0;
  }
  iVar3 = strlen(param_2);
  pcVar6 = (char *)(iVar2 + iVar3 + 1);
  iVar5 = 2;
  do {
    iVar4 = iVar5;
    cVar1 = *pcVar6;
    if (((cVar1 != ':') && (cVar1 != '\'')) && (cVar1 != '\"')) goto LAB_0040b948;
    iVar5 = iVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (iVar5 != 0xc);
  pcVar6 = (char *)(iVar2 + iVar4 + iVar3);
LAB_0040b948:
  sscanf(pcVar6,"%[^\"\',}]",param_1);
  return 1;
}



// ==== FUN_0040b9ac @ 0040b9ac size=892

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0040b9ac(byte *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == 0)) || (param_3 == 0)) ||
     (iVar3 = strstr(param_3), iVar3 == 0)) {
    return 0;
  }
  iVar4 = strlen(param_3);
  pbVar10 = (byte *)(param_3 + iVar4 + -1);
  iVar4 = strlen(param_2);
  pbVar5 = (byte *)(iVar3 + iVar4);
  bVar11 = *pbVar5;
  while (bVar11 != 0x3a) {
    if (pbVar10 < pbVar5) goto LAB_0040bb70;
    pbVar5 = pbVar5 + 1;
    bVar11 = *pbVar5;
  }
  iVar3 = 0;
  if (pbVar5 <= pbVar10) {
    bVar11 = *pbVar5;
    iVar4 = 0;
    iVar9 = 0;
    uVar8 = (uint)bVar11;
    bVar2 = false;
    bVar1 = false;
    pbVar7 = (byte *)0x0;
    if (uVar8 - 0x30 < 10) goto LAB_0040bb10;
LAB_0040baa4:
    if (bVar11 == 0x2b) goto LAB_0040bb10;
    if (bVar11 == 0x2d) goto LAB_0040bb10;
    if ((uVar8 & 0xffffffdf) - 0x41 < 0x1a) goto LAB_0040bb2c;
LAB_0040bac8:
    pbVar6 = pbVar5;
    if (bVar11 == 0x22) goto LAB_0040bbb4;
joined_r0x0040bad0:
    pbVar5 = pbVar6;
    if (bVar11 == 0x5b) {
      iVar4 = iVar4 + 1;
      if (pbVar7 != (byte *)0x0) goto LAB_0040bae8;
      pbVar7 = pbVar6;
      goto LAB_0040bae8;
    }
LAB_0040bad8:
    if (bVar11 != 0x7b) goto LAB_0040bbcc;
    iVar9 = iVar9 + 1;
    pbVar6 = pbVar5;
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = pbVar5;
    }
LAB_0040bae8:
    pbVar5 = pbVar6 + 1;
LAB_0040baec:
    do {
      if (pbVar10 < pbVar5) goto LAB_0040bb7c;
      bVar11 = *pbVar5;
      uVar8 = (uint)bVar11;
      if (9 < uVar8 - 0x30) goto LAB_0040baa4;
LAB_0040bb10:
      if (pbVar7 != (byte *)0x0) {
LAB_0040bb34:
        pbVar6 = pbVar5;
        if (bVar11 != 0x22) goto joined_r0x0040bad0;
LAB_0040bbbc:
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (*pbVar7 != 0x22) goto LAB_0040bbcc;
          pbVar6 = pbVar5;
          if (iVar3 != 0) {
            if (bVar11 == 0x5d) goto LAB_0040bbd4;
            goto LAB_0040bc90;
          }
          goto joined_r0x0040bb5c;
        }
        if (*pbVar7 != 0x22) goto LAB_0040bad8;
LAB_0040bb54:
        pbVar6 = pbVar7;
        if (pbVar5 != (byte *)0x0) goto joined_r0x0040bb5c;
        goto LAB_0040bb7c;
      }
      bVar1 = true;
      pbVar7 = pbVar5;
      if (0x19 < (uVar8 & 0xffffffdf) - 0x41) goto LAB_0040bac8;
LAB_0040bb2c:
      if (pbVar7 != (byte *)0x0) goto LAB_0040bb34;
      bVar2 = true;
      pbVar7 = pbVar5;
      pbVar6 = pbVar5;
      if (bVar11 != 0x22) goto joined_r0x0040bad0;
LAB_0040bbb4:
      if (pbVar7 != (byte *)0x0) goto LAB_0040bbbc;
      iVar3 = iVar3 + 1;
      pbVar7 = pbVar5;
LAB_0040bbcc:
      pbVar6 = pbVar5;
      if (bVar11 != 0x5d) {
LAB_0040bc90:
        if (bVar11 == 0x7d) {
          if (!bVar1) {
            if (!bVar2) {
              iVar9 = iVar9 + -1;
              if (*pbVar7 != 0x7b) goto LAB_0040bae8;
              pbVar5 = pbVar6 + 1;
              if (iVar9 == 0) {
                bVar2 = false;
                bVar1 = false;
                pbVar5 = pbVar6;
                goto joined_r0x0040bb5c;
              }
              goto LAB_0040baec;
            }
LAB_0040bcf4:
            bVar1 = false;
          }
        }
        else {
          if (bVar11 != 0x2c) goto LAB_0040bae8;
          if (!bVar1) {
            pbVar5 = pbVar6 + 1;
            if (bVar2) goto LAB_0040bcf4;
            goto LAB_0040baec;
          }
        }
LAB_0040bcf8:
        pbVar5 = pbVar6 + -1;
        goto LAB_0040bb54;
      }
LAB_0040bbd4:
      if (bVar1) goto LAB_0040bcf8;
      if (bVar2) goto LAB_0040bcf4;
      iVar4 = iVar4 + -1;
      if (*pbVar7 != 0x5b) goto LAB_0040bae8;
      pbVar5 = pbVar6 + 1;
      if (iVar4 == 0) {
        bVar2 = false;
        bVar1 = false;
        pbVar5 = pbVar6;
        goto joined_r0x0040bb5c;
      }
    } while( true );
  }
LAB_0040bb70:
  bVar2 = false;
  bVar1 = false;
  pbVar7 = (byte *)0x0;
LAB_0040bb7c:
  if (!bVar1) {
    if (!bVar2) {
      return 0;
    }
    bVar1 = false;
  }
  pbVar5 = pbVar10;
  pbVar6 = pbVar10;
  if (pbVar7 == (byte *)0x0) {
    return 0;
  }
joined_r0x0040bb5c:
  if (pbVar6 == (byte *)0x0) {
    return 0;
  }
  if (!bVar1) {
    bVar1 = pbVar5 < pbVar7;
    if (bVar2) goto LAB_0040bc30;
    pbVar7 = pbVar7 + 1;
    pbVar5 = pbVar5 + -1;
  }
  bVar1 = pbVar5 < pbVar7;
LAB_0040bc30:
  if (!bVar1) {
    do {
      pbVar10 = pbVar7 + 1;
      *param_1 = *pbVar7;
      pbVar7 = pbVar10;
      param_1 = param_1 + 1;
    } while (pbVar10 != pbVar5 + 1);
  }
  return 1;
}



// ==== FUN_0040bd28 @ 0040bd28 size=8

void FUN_0040bd28(void)

{
  return;
}



// ==== FUN_0040bd30 @ 0040bd30 size=52

uint FUN_0040bd30(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff) << 8 | (param_1 & 0xff00ff00) >> 8;
  return uVar1 << 0x10 | uVar1 >> 0x10;
}



// ==== FUN_0040bd64 @ 0040bd64 size=108

void FUN_0040bd64(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 | param_3 | (uint)param_1) & 3) == 0) {
    for (; uVar1 != param_3 >> 2; uVar1 = uVar1 + 1) {
      *param_1 = *param_1 ^ *(uint *)(param_2 + uVar1 * 4);
      param_1 = param_1 + 1;
    }
  }
  else {
    for (; uVar1 != param_3; uVar1 = uVar1 + 1) {
      *(byte *)((int)param_1 + uVar1) = *(byte *)(param_2 + uVar1) ^ *(byte *)((int)param_1 + uVar1)
      ;
    }
  }
  return;
}



// ==== FUN_0040bdd0 @ 0040bdd0 size=52

void FUN_0040bdd0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0xf;
  pcVar2 = (char *)(param_1 + 0xf);
  do {
    cVar1 = *pcVar2;
    *pcVar2 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') != '\0') {
      return;
    }
    iVar3 = iVar3 + -1;
    pcVar2 = (char *)(param_1 + iVar3);
  } while (iVar3 != 0xb);
  return;
}



// ==== FUN_0040be04 @ 0040be04 size=268

void FUN_0040be04(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar4 = 0;
  uVar2 = *param_1;
  uVar8 = 0;
  uVar3 = param_1[1];
  uVar7 = 0;
  uVar13 = param_1[2];
  uVar6 = 0;
  uVar1 = param_1[3];
  uVar5 = 0;
  do {
    uVar10 = *(uint *)(param_2 + iVar4);
    uVar11 = ((uint *)(param_2 + iVar4))[1];
    iVar9 = 0x40;
    do {
      if ((int)uVar11 < 0) {
        uVar8 = uVar8 ^ uVar2;
        uVar7 = uVar7 ^ uVar3;
        uVar6 = uVar6 ^ uVar13;
        uVar5 = uVar5 ^ uVar1;
      }
      uVar14 = uVar3 << 0x1f;
      uVar3 = uVar3 >> 1;
      if ((uVar13 & 1) == 0) {
        uVar12 = 0x80000000;
        if ((uVar2 & 1) == 0) {
          uVar12 = 0;
        }
      }
      else {
        uVar12 = 0x80000000;
        if ((uVar2 & 1) == 0) {
          uVar12 = 0;
        }
        uVar3 = uVar3 ^ 0xe1000000;
      }
      uVar13 = uVar1 << 0x1f | uVar13 >> 1;
      uVar2 = uVar14 | uVar2 >> 1;
      uVar1 = uVar12 | uVar1 >> 1;
      iVar9 = iVar9 + -1;
      uVar11 = uVar10 >> 0x1f | uVar11 << 1;
      uVar10 = uVar10 << 1;
    } while (iVar9 != 0);
    iVar4 = iVar4 + 8;
  } while (iVar4 != 0x10);
  *param_1 = uVar8;
  param_1[1] = uVar7;
  param_1[2] = uVar6;
  param_1[3] = uVar5;
  return;
}



// ==== FUN_0040bf10 @ 0040bf10 size=1636

void FUN_0040bf10(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  
  uVar18 = param_1[0x3c] >> 1;
  if (uVar18 - 1 < 7) {
    memcpy(local_24,param_2,4);
    memcpy(&local_28,param_2 + 4,4);
    memcpy(&local_2c,param_2 + 8,4);
    memcpy(&local_30,param_2 + 0xc,4);
    uVar4 = FUN_0040bd30(local_24[0]);
    uVar5 = FUN_0040bd30(local_28);
    uVar6 = FUN_0040bd30(local_2c);
    uVar7 = FUN_0040bd30(local_30);
    uVar7 = uVar7 ^ param_1[3];
    uVar4 = uVar4 ^ *param_1;
    uVar5 = uVar5 ^ param_1[1];
    uVar6 = uVar6 ^ param_1[2];
    puVar8 = param_1;
    uVar16 = uVar18;
    while( true ) {
      uVar16 = uVar16 - 1;
      uVar14 = *(uint *)(&DAT_004121c0 + (uVar4 >> 0x18) * 4) ^
               *(uint *)(&DAT_004121c0 + ((uVar7 & 0xff) + 0x300) * 4) ^ puVar8[4] ^
               *(uint *)(&DAT_004121c0 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_004121c0 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
      uVar9 = *(uint *)(&DAT_004121c0 + (uVar5 >> 0x18) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar4 & 0xff) + 0x300) * 4) ^ puVar8[5] ^
              *(uint *)(&DAT_004121c0 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
      uVar15 = *(uint *)(&DAT_004121c0 + (uVar6 >> 0x18) * 4) ^
               *(uint *)(&DAT_004121c0 + ((uVar5 & 0xff) + 0x300) * 4) ^ puVar8[6] ^
               *(uint *)(&DAT_004121c0 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(&DAT_004121c0 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
      uVar7 = *(uint *)(&DAT_004121c0 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar6 & 0xff) + 0x300) * 4) ^ puVar8[7] ^
              *(uint *)(&DAT_004121c0 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
      if (uVar16 == 0) break;
      uVar4 = *(uint *)(&DAT_004121c0 + (uVar14 >> 0x18) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar7 & 0xff) + 0x300) * 4) ^ puVar8[8] ^
              *(uint *)(&DAT_004121c0 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar15 >> 8 & 0xff) + 0x200) * 4);
      uVar5 = *(uint *)(&DAT_004121c0 + (uVar9 >> 0x18) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar14 & 0xff) + 0x300) * 4) ^ puVar8[9] ^
              *(uint *)(&DAT_004121c0 + ((uVar15 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
      uVar6 = *(uint *)(&DAT_004121c0 + (uVar15 >> 0x18) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar9 & 0xff) + 0x300) * 4) ^ puVar8[10] ^
              *(uint *)(&DAT_004121c0 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar14 >> 8 & 0xff) + 0x200) * 4);
      uVar7 = *(uint *)(&DAT_004121c0 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar15 & 0xff) + 0x300) * 4) ^ puVar8[0xb] ^
              *(uint *)(&DAT_004121c0 + ((uVar14 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(&DAT_004121c0 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
      puVar8 = puVar8 + 8;
    }
    uVar20 = *(uint *)(&DAT_004121c0 + ((uVar9 >> 0x18) + 0x200) * 4);
    bVar1 = (&DAT_004121c0)[((uVar14 & 0xff) + 0x100) * 4];
    param_1 = param_1 + uVar18 * 8;
    uVar18 = param_1[1];
    uVar16 = *(uint *)(&DAT_004121c0 + ((uVar15 >> 0x10 & 0xff) + 0x300) * 4);
    uVar19 = *(uint *)(&DAT_004121c0 + ((uVar15 >> 0x18) + 0x200) * 4);
    uVar4 = *(uint *)(&DAT_004121c0 + (uVar7 >> 8 & 0xff) * 4);
    bVar2 = (&DAT_004121c0)[((uVar9 & 0xff) + 0x100) * 4];
    uVar5 = param_1[2];
    uVar6 = *(uint *)(&DAT_004121c0 + ((uVar7 >> 0x10 & 0xff) + 0x300) * 4);
    uVar17 = *(uint *)(&DAT_004121c0 + ((uVar7 >> 0x18) + 0x200) * 4);
    uVar10 = *(uint *)(&DAT_004121c0 + (uVar14 >> 6 & 0x3fc));
    bVar3 = (&DAT_004121c0)[((uVar15 & 0xff) + 0x100) * 4];
    uVar11 = param_1[3];
    uVar12 = *(uint *)(&DAT_004121c0 + ((uVar14 >> 0x10 & 0xff) + 0x300) * 4);
    uVar13 = *(uint *)(&DAT_004121c0 + (uVar9 >> 8 & 0xff) * 4);
    local_24[0] = FUN_0040bd30(*(uint *)(&DAT_004121c0 + ((uVar14 >> 0x18) + 0x200) * 4) &
                               0xff000000 ^
                               (uint)(byte)(&DAT_004121c0)[((uVar7 & 0xff) + 0x100) * 4] ^ *param_1
                               ^ *(uint *)(&DAT_004121c0 + ((uVar9 >> 0x10 & 0xff) + 0x300) * 4) &
                                 0xff0000 ^
                               *(uint *)(&DAT_004121c0 + (uVar15 >> 8 & 0xff) * 4) & 0xff00);
    local_28 = FUN_0040bd30(uVar20 & 0xff000000 ^ (uint)bVar1 ^ uVar18 ^ uVar16 & 0xff0000 ^
                            uVar4 & 0xff00);
    local_2c = FUN_0040bd30(uVar19 & 0xff000000 ^ (uint)bVar2 ^ uVar5 ^ uVar6 & 0xff0000 ^
                            uVar10 & 0xff00);
    local_30 = FUN_0040bd30(uVar17 & 0xff000000 ^ (uint)bVar3 ^ uVar11 ^ uVar12 & 0xff0000 ^
                            uVar13 & 0xff00);
    memcpy(param_3,local_24,4);
    memcpy(param_3 + 4,&local_28,4);
    memcpy(param_3 + 8,&local_2c,4);
    memcpy(param_3 + 0xc,&local_30,4);
  }
  return;
}



// ==== FUN_0040c574 @ 0040c574 size=132

void FUN_0040c574(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  do {
    uVar3 = ((undefined4 *)(param_2 + iVar2))[1];
    uVar1 = FUN_0040bd30(*(undefined4 *)(param_2 + iVar2));
    uVar3 = FUN_0040bd30(uVar3);
    puVar4 = (undefined4 *)(param_1 + iVar2);
    iVar2 = iVar2 + 8;
    *puVar4 = uVar3;
    puVar4[1] = uVar1;
  } while (iVar2 != 0x10);
  return;
}



// ==== FUN_0040c5f8 @ 0040c5f8 size=76

undefined4 FUN_0040c5f8(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      memset(param_1 + 0xf8,0,0x10);
    }
    else {
      memcpy();
    }
    return 0;
  }
  return 0xffffff53;
}



// ==== FUN_0040c644 @ 0040c644 size=1960

undefined4
FUN_0040c644(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  if ((param_1 != (uint *)0x0) && (((param_3 & 0xfffffff7) == 0x10 || (param_3 == 0x20)))) {
    param_1[0x3d] = param_3;
    param_1[0x3c] = (param_3 >> 2) + 6;
    uVar8 = 0;
    memcpy(param_1,param_2,param_3);
    puVar4 = param_1;
    while (bVar1 = uVar8 != param_3 >> 2, uVar8 = uVar8 + 1, bVar1) {
      uVar2 = FUN_0040bd30(*puVar4);
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
    }
    if (param_3 == 0x18) {
      iVar5 = 0;
      puVar4 = param_1;
      while( true ) {
        puVar7 = (uint *)((int)&DAT_004131c0 + iVar5);
        iVar5 = iVar5 + 4;
        uVar8 = puVar4[5];
        uVar2 = *puVar7 ^ *puVar4 ^ *(uint *)(&DAT_004121c0 + (uVar8 & 0xff) * 4) & 0xff00 ^
                (uint)(byte)(&DAT_004121c0)[((uVar8 >> 0x18) + 0x100) * 4] ^
                *(uint *)(&DAT_004121c0 + ((uVar8 >> 0x10 & 0xff) + 0x200) * 4) & 0xff000000 ^
                *(uint *)(&DAT_004121c0 + ((uVar8 >> 8 & 0xff) + 0x300) * 4) & 0xff0000;
        puVar4[6] = uVar2;
        uVar2 = uVar2 ^ puVar4[1];
        puVar4[7] = uVar2;
        uVar2 = uVar2 ^ puVar4[2];
        puVar4[8] = uVar2;
        uVar2 = uVar2 ^ puVar4[3];
        puVar4[9] = uVar2;
        if (iVar5 == 0x20) break;
        uVar2 = uVar2 ^ puVar4[4];
        puVar4[10] = uVar2;
        puVar4[0xb] = uVar2 ^ uVar8;
        puVar4 = puVar4 + 6;
      }
    }
    else if (param_3 == 0x20) {
      iVar5 = 0;
      puVar4 = param_1;
      while( true ) {
        puVar7 = (uint *)((int)&DAT_004131c0 + iVar5);
        iVar5 = iVar5 + 4;
        uVar8 = puVar4[7];
        uVar2 = *puVar7 ^ *puVar4 ^ *(uint *)(&DAT_004121c0 + (uVar8 & 0xff) * 4) & 0xff00 ^
                (uint)(byte)(&DAT_004121c0)[((uVar8 >> 0x18) + 0x100) * 4] ^
                *(uint *)(&DAT_004121c0 + ((uVar8 >> 0x10 & 0xff) + 0x200) * 4) & 0xff000000 ^
                *(uint *)(&DAT_004121c0 + ((uVar8 >> 8 & 0xff) + 0x300) * 4) & 0xff0000;
        puVar4[8] = uVar2;
        uVar2 = uVar2 ^ puVar4[1];
        puVar4[9] = uVar2;
        uVar2 = uVar2 ^ puVar4[2];
        puVar4[10] = uVar2;
        uVar2 = uVar2 ^ puVar4[3];
        puVar4[0xb] = uVar2;
        if (iVar5 == 0x1c) break;
        uVar2 = *(uint *)(&DAT_004121c0 + ((uVar2 >> 0x18) + 0x200) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_004121c0)[((uVar2 & 0xff) + 0x100) * 4] ^ puVar4[4] ^
                *(uint *)(&DAT_004121c0 + ((uVar2 >> 0x10 & 0xff) + 0x300) * 4) & 0xff0000 ^
                *(uint *)(&DAT_004121c0 + (uVar2 >> 6 & 0x3fc)) & 0xff00;
        puVar4[0xc] = uVar2;
        uVar2 = uVar2 ^ puVar4[5];
        puVar4[0xd] = uVar2;
        uVar2 = uVar2 ^ puVar4[6];
        puVar4[0xe] = uVar2;
        puVar4[0xf] = uVar2 ^ uVar8;
        puVar4 = puVar4 + 8;
      }
    }
    else {
      if (param_3 != 0x10) {
        return 0xffffff53;
      }
      iVar5 = 0;
      puVar4 = param_1;
      while( true ) {
        puVar7 = (uint *)((int)&DAT_004131c0 + iVar5);
        iVar5 = iVar5 + 4;
        uVar8 = puVar4[3];
        uVar2 = *puVar7 ^ *puVar4 ^ *(uint *)(&DAT_004121c0 + (uVar8 & 0xff) * 4) & 0xff00 ^
                (uint)(byte)(&DAT_004121c0)[((uVar8 >> 0x18) + 0x100) * 4] ^
                *(uint *)(&DAT_004121c0 + ((uVar8 >> 0x10 & 0xff) + 0x200) * 4) & 0xff000000 ^
                *(uint *)(&DAT_004121c0 + ((uVar8 >> 8 & 0xff) + 0x300) * 4) & 0xff0000;
        puVar4[4] = uVar2;
        uVar2 = uVar2 ^ puVar4[1];
        puVar4[5] = uVar2;
        uVar2 = uVar2 ^ puVar4[2];
        puVar4[6] = uVar2;
        puVar4[7] = uVar2 ^ uVar8;
        if (iVar5 == 0x28) break;
        puVar4 = puVar4 + 4;
      }
    }
    if (param_5 == 1) {
      uVar2 = param_1[0x3c];
      uVar8 = 0;
      puVar4 = param_1;
      puVar7 = param_1 + uVar2 * 4;
      while (bVar1 = uVar8 < uVar2 * 4 - uVar8, uVar8 = uVar8 + 4, bVar1) {
        uVar6 = *puVar4;
        *puVar4 = *puVar7;
        *puVar7 = uVar6;
        uVar6 = puVar4[1];
        puVar4[1] = puVar7[1];
        puVar7[1] = uVar6;
        uVar6 = puVar4[2];
        puVar4[2] = puVar7[2];
        puVar7[2] = uVar6;
        uVar6 = puVar4[3];
        puVar4[3] = puVar7[3];
        puVar7[3] = uVar6;
        puVar4 = puVar4 + 4;
        puVar7 = puVar7 + -4;
      }
      puVar4 = param_1;
      for (uVar8 = 1; puVar7 = puVar4 + 4, uVar8 < param_1[0x3c]; uVar8 = uVar8 + 1) {
        uVar2 = *puVar7;
        *puVar7 = *(uint *)(&DAT_004111c0 +
                           ((byte)(&DAT_004121c0)[((uVar2 & 0xff) + 0x100) * 4] + 0x300) * 4) ^
                  *(uint *)(&DAT_004111c0 +
                           (uint)(byte)(&DAT_004121c0)[((uVar2 >> 0x18) + 0x100) * 4] * 4) ^
                  *(uint *)(&DAT_004111c0 +
                           ((byte)(&DAT_004121c0)[((uVar2 >> 0x10 & 0xff) + 0x100) * 4] + 0x100) * 4
                           ) ^
                  *(uint *)(&DAT_004111c0 +
                           ((byte)(&DAT_004121c0)[((uVar2 >> 8 & 0xff) + 0x100) * 4] + 0x200) * 4);
        uVar2 = puVar4[5];
        puVar4[5] = *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 & 0xff) + 0x100) * 4] + 0x300) * 4) ^
                    *(uint *)(&DAT_004111c0 +
                             (uint)(byte)(&DAT_004121c0)[((uVar2 >> 0x18) + 0x100) * 4] * 4) ^
                    *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 >> 0x10 & 0xff) + 0x100) * 4] + 0x100) *
                             4) ^
                    *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 >> 8 & 0xff) + 0x100) * 4] + 0x200) * 4)
        ;
        uVar2 = puVar4[6];
        puVar4[6] = *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 & 0xff) + 0x100) * 4] + 0x300) * 4) ^
                    *(uint *)(&DAT_004111c0 +
                             (uint)(byte)(&DAT_004121c0)[((uVar2 >> 0x18) + 0x100) * 4] * 4) ^
                    *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 >> 0x10 & 0xff) + 0x100) * 4] + 0x100) *
                             4) ^
                    *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 >> 8 & 0xff) + 0x100) * 4] + 0x200) * 4)
        ;
        uVar2 = puVar4[7];
        puVar4[7] = *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 & 0xff) + 0x100) * 4] + 0x300) * 4) ^
                    *(uint *)(&DAT_004111c0 +
                             (uint)(byte)(&DAT_004121c0)[((uVar2 >> 0x18) + 0x100) * 4] * 4) ^
                    *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 >> 0x10 & 0xff) + 0x100) * 4] + 0x100) *
                             4) ^
                    *(uint *)(&DAT_004111c0 +
                             ((byte)(&DAT_004121c0)[((uVar2 >> 8 & 0xff) + 0x100) * 4] + 0x200) * 4)
        ;
        puVar4 = puVar7;
      }
    }
    uVar3 = FUN_0040c5f8(param_1,param_4);
    return uVar3;
  }
  return 0xffffff53;
}



// ==== FUN_0040cdec @ 0040cdec size=196

undefined4 FUN_0040cdec(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar1 = 0xffffff53;
  }
  else {
    uVar4 = 0;
    iVar3 = param_1 + 0xf8;
    iVar2 = 0;
    while( true ) {
      if (uVar4 == param_4 >> 4) break;
      FUN_0040bd64(iVar3,param_3 + iVar2,0x10);
      uVar4 = uVar4 + 1;
      FUN_0040bf10(param_1,iVar3,iVar3);
      memcpy(param_2 + iVar2,iVar3,0x10);
      iVar2 = uVar4 * 0x10;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0040ceb0 @ 0040ceb0 size=1704

undefined4 FUN_0040ceb0(uint *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  
  if ((((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 == 0)) || ((param_4 & 0xf) != 0)) {
    uVar11 = 0xffffff53;
  }
  else {
    puVar17 = param_1 + 0x42;
    for (param_4 = param_4 >> 4; param_4 != 0; param_4 = param_4 - 1) {
      memcpy(puVar17,param_3,0x10);
      uVar18 = param_1[0x3c] >> 1;
      if (uVar18 - 1 < 7) {
        memcpy(&local_34,puVar17,4);
        memcpy(&local_38,param_1 + 0x43,4);
        memcpy(&local_3c,param_1 + 0x44,4);
        memcpy(&local_40,param_1 + 0x45,4);
        local_2c = FUN_0040bd30(local_34);
        local_30 = FUN_0040bd30(local_38);
        uVar9 = FUN_0040bd30(local_3c);
        uVar10 = FUN_0040bd30(local_40);
        local_30 = local_30 ^ param_1[1];
        uVar9 = uVar9 ^ param_1[2];
        uVar10 = uVar10 ^ param_1[3];
        uVar15 = local_2c ^ *param_1;
        uVar16 = uVar18;
        puVar19 = param_1;
        while( true ) {
          uVar16 = uVar16 - 1;
          uVar14 = *(uint *)(&DAT_004111c0 + (uVar15 >> 0x18) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((local_30 & 0xff) + 0x300) * 4) ^ puVar19[4] ^
                   *(uint *)(&DAT_004111c0 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
          uVar12 = *(uint *)(&DAT_004111c0 + (local_30 >> 0x18) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar9 & 0xff) + 0x300) * 4) ^ puVar19[5] ^
                   *(uint *)(&DAT_004111c0 + ((uVar15 >> 0x10 & 0xff) + 0x100) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
          uVar13 = *(uint *)(&DAT_004111c0 + (uVar9 >> 0x18) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar10 & 0xff) + 0x300) * 4) ^ puVar19[6] ^
                   *(uint *)(&DAT_004111c0 + ((local_30 >> 0x10 & 0xff) + 0x100) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar15 >> 8 & 0xff) + 0x200) * 4);
          uVar10 = *(uint *)(&DAT_004111c0 + (uVar10 >> 0x18) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar15 & 0xff) + 0x300) * 4) ^ puVar19[7] ^
                   *(uint *)(&DAT_004111c0 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((local_30 >> 8 & 0xff) + 0x200) * 4);
          if (uVar16 == 0) break;
          uVar15 = *(uint *)(&DAT_004111c0 + (uVar14 >> 0x18) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar12 & 0xff) + 0x300) * 4) ^ puVar19[8] ^
                   *(uint *)(&DAT_004111c0 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar13 >> 8 & 0xff) + 0x200) * 4);
          local_30 = *(uint *)(&DAT_004111c0 + (uVar12 >> 0x18) * 4) ^
                     *(uint *)(&DAT_004111c0 + ((uVar13 & 0xff) + 0x300) * 4) ^ puVar19[9] ^
                     *(uint *)(&DAT_004111c0 + ((uVar14 >> 0x10 & 0xff) + 0x100) * 4) ^
                     *(uint *)(&DAT_004111c0 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
          uVar9 = *(uint *)(&DAT_004111c0 + (uVar13 >> 0x18) * 4) ^
                  *(uint *)(&DAT_004111c0 + ((uVar10 & 0xff) + 0x300) * 4) ^ puVar19[10] ^
                  *(uint *)(&DAT_004111c0 + ((uVar12 >> 0x10 & 0xff) + 0x100) * 4) ^
                  *(uint *)(&DAT_004111c0 + ((uVar14 >> 8 & 0xff) + 0x200) * 4);
          uVar10 = *(uint *)(&DAT_004111c0 + (uVar10 >> 0x18) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar14 & 0xff) + 0x300) * 4) ^ puVar19[0xb] ^
                   *(uint *)(&DAT_004111c0 + ((uVar13 >> 0x10 & 0xff) + 0x100) * 4) ^
                   *(uint *)(&DAT_004111c0 + ((uVar12 >> 8 & 0xff) + 0x200) * 4);
          puVar19 = puVar19 + 8;
        }
        puVar19 = param_1 + uVar18 * 8;
        local_30 = (uint)(byte)(&DAT_004110c0)[uVar13 & 0xff] ^ puVar19[1] ^
                   (uint)(byte)(&DAT_004110c0)[uVar12 >> 0x18] << 0x18 ^
                   (uint)(byte)(&DAT_004110c0)[uVar14 >> 0x10 & 0xff] << 0x10 ^
                   (uint)(byte)(&DAT_004110c0)[uVar10 >> 8 & 0xff] << 8;
        bVar1 = (&DAT_004110c0)[uVar10 & 0xff];
        uVar18 = puVar19[2];
        bVar2 = (&DAT_004110c0)[uVar10 >> 0x18];
        bVar3 = (&DAT_004110c0)[uVar13 >> 0x18];
        bVar4 = (&DAT_004110c0)[uVar12 >> 0x10 & 0xff];
        bVar5 = (&DAT_004110c0)[uVar14 >> 8 & 0xff];
        bVar6 = (&DAT_004110c0)[uVar14 & 0xff];
        uVar16 = puVar19[3];
        bVar7 = (&DAT_004110c0)[uVar13 >> 0x10 & 0xff];
        bVar8 = (&DAT_004110c0)[uVar12 >> 8 & 0xff];
        local_34 = FUN_0040bd30((uint)(byte)(&DAT_004110c0)[uVar12 & 0xff] ^ *puVar19 ^
                                (uint)(byte)(&DAT_004110c0)[uVar14 >> 0x18] << 0x18 ^
                                (uint)(byte)(&DAT_004110c0)[uVar10 >> 0x10 & 0xff] << 0x10 ^
                                (uint)(byte)(&DAT_004110c0)[uVar13 >> 8 & 0xff] << 8);
        local_38 = FUN_0040bd30(local_30);
        local_3c = FUN_0040bd30(bVar1 ^ uVar18 ^ (uint)bVar3 << 0x18 ^ (uint)bVar4 << 0x10 ^
                                (uint)bVar5 << 8);
        local_40 = FUN_0040bd30(bVar6 ^ uVar16 ^ (uint)bVar2 << 0x18 ^ (uint)bVar7 << 0x10 ^
                                (uint)bVar8 << 8);
        memcpy(param_2,&local_34,4);
        memcpy(param_2 + 4,&local_38,4);
        memcpy(param_2 + 8,&local_3c,4);
        memcpy(param_2 + 0xc,&local_40,4);
      }
      FUN_0040bd64(param_2,param_1 + 0x3e,0x10);
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
      memcpy(param_1 + 0x3e,puVar17,0x10);
    }
    uVar11 = 0;
  }
  return uVar11;
}



// ==== FUN_0040d558 @ 0040d558 size=124

int FUN_0040d558(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  if (((param_3 & 0xfffffff7) == 0x10) || (local_10 = -0xad, param_3 == 0x20)) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = FUN_0040c644(param_1,param_2,param_3,&local_20,0);
    if (local_10 == 0) {
      FUN_0040bf10(param_1,&local_20,param_1 + 0x118);
    }
  }
  return local_10;
}



// ==== FUN_0040d5d4 @ 0040d5d4 size=788

void FUN_0040d5d4(int param_1,int param_2,uint param_3,int param_4,uint param_5,undefined4 param_6,
                 undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined1 auStack_40 [16];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  memcpy(auStack_40,param_1 + 0x118,0x10);
  FUN_0040c574(auStack_40,auStack_40);
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar2 = 0;
    iVar1 = 0;
    while (uVar2 != param_3 >> 4) {
      memcpy(&local_50,param_2 + iVar1,0x10);
      uVar2 = uVar2 + 1;
      FUN_0040c574(&local_50,&local_50);
      local_30 = local_30 ^ local_50;
      local_2c = local_2c ^ local_4c;
      local_28 = local_28 ^ local_48;
      local_24 = local_24 ^ local_44;
      FUN_0040be04(&local_30,auStack_40);
      iVar1 = uVar2 * 0x10;
    }
    if ((param_3 & 0xf) != 0) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      memcpy(&local_50,param_2 + iVar1,param_3 & 0xf);
      FUN_0040c574(&local_50,&local_50);
      local_30 = local_30 ^ local_50;
      local_2c = local_2c ^ local_4c;
      local_28 = local_28 ^ local_48;
      local_24 = local_24 ^ local_44;
      FUN_0040be04(&local_30,auStack_40);
    }
  }
  if ((param_5 != 0) && (param_4 != 0)) {
    uVar2 = 0;
    iVar1 = 0;
    while (uVar2 != param_5 >> 4) {
      memcpy(&local_50,param_4 + iVar1,0x10);
      uVar2 = uVar2 + 1;
      FUN_0040c574(&local_50,&local_50);
      local_30 = local_30 ^ local_50;
      local_2c = local_2c ^ local_4c;
      local_28 = local_28 ^ local_48;
      local_24 = local_24 ^ local_44;
      FUN_0040be04(&local_30,auStack_40);
      iVar1 = uVar2 * 0x10;
    }
    if ((param_5 & 0xf) != 0) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      memcpy(&local_50,param_4 + iVar1,param_5 & 0xf);
      FUN_0040c574(&local_50,&local_50);
      local_30 = local_30 ^ local_50;
      local_2c = local_2c ^ local_4c;
      local_28 = local_28 ^ local_48;
      local_24 = local_24 ^ local_44;
      FUN_0040be04(&local_30,auStack_40);
    }
  }
  local_30 = local_30 ^ param_3 << 3;
  local_2c = local_2c ^ param_3 >> 0x1d;
  local_28 = local_28 ^ param_5 << 3;
  local_24 = local_24 ^ param_5 >> 0x1d;
  FUN_0040be04(&local_30,auStack_40);
  FUN_0040c574(&local_30,&local_30);
  memcpy(param_6,&local_30,param_7);
  return;
}



// ==== FUN_0040d8e8 @ 0040d8e8 size=488

undefined4
FUN_0040d8e8(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
            undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [16];
  uint local_30;
  
  if ((param_1 == 0) || (4 < param_8 - 0xcU)) {
    uVar1 = 0xffffff53;
  }
  else {
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    uVar3 = param_4 & 0xf;
    local_44 = 0;
    if (param_6 == 0xc) {
      memcpy(&local_50,param_5,0xc);
      local_44 = CONCAT13(1,(undefined3)local_44);
    }
    else {
      FUN_0040d5d4(param_1,0,0,param_5,param_6,&local_50,0x10);
    }
    memcpy(auStack_40,&local_50,0x10);
    uVar5 = 0;
    iVar2 = param_2;
    while( true ) {
      iVar4 = param_3 + uVar5 * 0x10;
      if (uVar5 == param_4 >> 4) break;
      local_30 = uVar5;
      FUN_0040bdd0(auStack_40);
      FUN_0040bf10(param_1,auStack_40,auStack_60);
      FUN_0040bd64(auStack_60,iVar4,0x10);
      memcpy(iVar2,auStack_60,0x10);
      iVar2 = iVar2 + 0x10;
      uVar5 = local_30 + 1;
    }
    if (uVar3 != 0) {
      FUN_0040bdd0(auStack_40);
      FUN_0040bf10(param_1,auStack_40,auStack_60);
      FUN_0040bd64(auStack_60,iVar4,uVar3);
      memcpy(param_2 + uVar5 * 0x10,auStack_60,uVar3);
    }
    FUN_0040d5d4(param_1,param_9,param_10,param_2,param_4,param_7,param_8);
    FUN_0040bf10(param_1,&local_50,auStack_60);
    FUN_0040bd64(param_7,auStack_60,param_8);
    uVar1 = 0;
  }
  return uVar1;
}



// ==== FUN_0040dad0 @ 0040dad0 size=572

undefined4
FUN_0040dad0(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            uint param_8,undefined4 param_9,undefined4 param_10)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_78 [16];
  byte local_68 [16];
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     (((param_5 == 0 || (param_7 == 0)) || (0x10 < param_8)))) {
    uVar3 = 0xffffff53;
  }
  else {
    local_48 = 0;
    uVar4 = param_4 & 0xf;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (param_6 == 0xc) {
      memcpy(&local_48,param_5,0xc);
      local_3c = CONCAT13(1,(undefined3)local_3c);
    }
    else {
      FUN_0040d5d4(param_1,0,0,param_5,param_6,&local_48,0x10);
    }
    memcpy(auStack_38,&local_48,0x10);
    FUN_0040d5d4(param_1,param_9,param_10,param_3,param_4,local_68,0x10);
    FUN_0040bf10(param_1,auStack_38,auStack_78);
    FUN_0040bd64(local_68,auStack_78,0x10);
    bVar1 = 0;
    for (uVar6 = 0; uVar6 != param_8; uVar6 = uVar6 + 1) {
      bVar1 = bVar1 | local_68[uVar6] ^ *(byte *)(param_7 + uVar6);
    }
    if (bVar1 == 0) {
      uVar6 = 0;
      iVar2 = 0;
      iVar5 = param_2;
      while (uVar6 != param_4 >> 4) {
        uVar6 = uVar6 + 1;
        FUN_0040bdd0(auStack_38);
        FUN_0040bf10(param_1,auStack_38,auStack_58);
        FUN_0040bd64(auStack_58,param_3 + iVar2,0x10);
        memcpy(iVar5,auStack_58,0x10);
        iVar2 = uVar6 * 0x10;
        iVar5 = iVar5 + 0x10;
      }
      uVar3 = 0;
      if (uVar4 != 0) {
        FUN_0040bdd0(auStack_38);
        FUN_0040bf10(param_1,auStack_38,auStack_58);
        FUN_0040bd64(auStack_58,param_3 + iVar2,uVar4);
        memcpy(param_2 + iVar2,auStack_58,uVar4);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffff4c;
    }
  }
  return uVar3;
}



// ==== FUN_0040dd2c @ 0040dd2c size=72

void FUN_0040dd2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_0040d8e8(param_1,0,0,0,param_2,param_3,param_6,param_7,param_4,param_5);
  return;
}



// ==== FUN_0040de00 @ 0040de00 size=72

void FUN_0040de00(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00423614;
  pcVar2 = DAT_00423614;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



// ==== FUN_00413200 @ 00413200 size=32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413200(void)

{
  (*__gp_1)();
  (*(code *)PTR_FUN_00423630)();
  return;
}



