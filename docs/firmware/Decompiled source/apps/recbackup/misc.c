/* recbackup — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "recbackup.h"

// ==== entry @ 004013a0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_004173c0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004173c8)
            (PTR_main_004173b8,param_2,&stack0x00000004,PTR__init_004173bc);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== recordevent_init_read @ 004015cc size=104

undefined4 recordevent_init_read(undefined4 param_1)

{
  undefined4 uVar1;
  
  DAT_00417400 = FUN_00405244(param_1,0x8010);
  uVar1 = 0;
  if (DAT_00417400 == 0) {
    FUN_00404d88("recordevent.c","recordevent_init_read",0x137,"failed get_sharemem(): %s",param_1);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// ==== create_file @ 0040193c size=864

int create_file(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_res0 [4];
  undefined1 auStack_168 [52];
  undefined4 local_134;
  undefined1 auStack_d0 [128];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  
  local_res0[0] = param_1;
  localtime_r(local_res0,&local_50);
  iVar1 = snprintf(&DAT_004176d4,0x100,"%s",&DAT_004174d4);
  iVar2 = access(&DAT_004176d4,0);
  if (iVar2 == -1) {
    FUN_00404d88("recbak.bak","create_file",0x115,"backup dir not exists: %s",&DAT_004176d4);
    iVar2 = -1;
  }
  else {
    snprintf(&DAT_004176d4 + iVar1,0x100 - iVar1,&DAT_00406178,local_3c + 0x76c,local_40 + 1,
             local_44,local_48,local_4c,local_50);
    iVar3 = access(&DAT_004176d4,0);
    iVar2 = 1;
    if (iVar3 != 0) {
      snprintf(auStack_d0,0x80,"%s/%04dY%02dM%02dD%02dH/%02dM%02dS%02d.mp4","/tmp/sd/record",
               local_3c + 0x76c,local_40 + 1,local_44,local_48,local_4c,local_50,
               (param_2 + 1) - local_res0[0]);
      DAT_004174a8 = open(auStack_d0,0x40000);
      if (DAT_004174a8 == -1) {
        iVar1 = access(auStack_d0,0);
        iVar2 = -1;
        if (iVar1 == -1) {
          FUN_00404d88("recbak.bak","create_file",0x13a,"src file does not exist: %s",auStack_d0);
          iVar2 = 1;
        }
      }
      else {
        iVar2 = fstat(DAT_004174a8,auStack_168);
        if (iVar2 != -1) {
          DAT_00417410 = local_134;
          FUN_004018f0(DAT_004174a8);
          FUN_00404d88("recbak.bak","create_file",0x149,"open src file: %s",auStack_d0);
          puVar4 = (undefined1 *)strrchr(iVar1 + 0x4176d6,0x2f);
          *puVar4 = 0;
          iVar2 = access(&DAT_004176d4,0);
          if (iVar2 == -1) {
            FUN_004047c0(&DAT_004176d4,iVar1 + 1);
            FUN_00404d88("recbak.bak","create_file",0x151,"create dest dir: %s",&DAT_004176d4);
          }
          *puVar4 = 0x2f;
          DAT_004174ac = open(&DAT_004175d4,0x301,0x1a4);
          if (DAT_004174ac != -1) {
LAB_00401b68:
            FUN_004018f0(DAT_004174ac);
            FUN_00404d88("recbak.bak","create_file",0x164,"create temp file: %s",&DAT_004175d4);
            return 0;
          }
          remove(&DAT_004175d4);
          DAT_004174ac = open(&DAT_004175d4,0x301,0x1a4);
          if (DAT_004174ac != -1) goto LAB_00401b68;
          iVar2 = -1;
          DAT_004174ac = 0xffffffff;
        }
        close(DAT_004174a8);
      }
    }
  }
  return iVar2;
}



// ==== do_copy @ 00401c9c size=1588

int do_copy(void)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint local_138 [32];
  uint local_b8 [32];
  uint local_38;
  undefined4 local_34;
  int local_30;
  
  DAT_00417414 = 0;
  bVar2 = false;
  DAT_00417418 = 0;
  DAT_004177e0 = 0;
  DAT_004177dc = 0;
  iVar3 = FUN_00404838();
LAB_00401d00:
  if (bVar2) goto LAB_00401df8;
LAB_00401d0c:
  if (DAT_004177dc < 0x4000) goto LAB_00402030;
  puVar11 = local_b8;
  iVar5 = DAT_004177dc;
  if (DAT_004177e0 == 0) goto LAB_00402034;
  uVar7 = 0;
  puVar10 = (uint *)0x0;
LAB_00401d2c:
  puVar11 = local_138;
  do {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
    puVar9 = local_138;
  } while (puVar11 != local_b8);
  if ((int)uVar7 < (int)DAT_004174ac) {
    uVar7 = DAT_004174ac;
  }
  puVar9[DAT_004174ac >> 5] = puVar9[DAT_004174ac >> 5] | 1 << (DAT_004174ac & 0x1f);
  do {
    pselect(uVar7 + 1,puVar10,puVar9,0,0,&DAT_00417848);
    iVar5 = DAT_004177d4;
    if (DAT_00417874 != 0) {
LAB_004020cc:
      DAT_00417874 = 0;
      goto LAB_004020d0;
    }
    if ((puVar10 != (uint *)0x0) &&
       (((int)local_b8[DAT_004174a8 >> 5] >> (DAT_004174a8 & 0x1f) & 1U) != 0)) {
      if (DAT_004177dc == 0x4000) {
        iVar4 = 0x4000 - DAT_004177e0;
        if (0 < DAT_004177e0) goto LAB_00401dc0;
        DAT_004177d4 = DAT_004177d8;
        iVar8 = DAT_004177d8 + DAT_004177e0;
        DAT_004177dc = DAT_004177e0;
        DAT_004177d8 = iVar5;
        DAT_004177e0 = 0x4000;
        iVar5 = read(DAT_004174a8,iVar8,iVar4);
      }
      else {
        iVar5 = read(DAT_004174a8,DAT_004177d4 + DAT_004177dc,0x4000 - DAT_004177dc);
      }
      if (iVar5 < 1) {
        if (iVar5 == -1) {
          piVar6 = (int *)__errno_location();
          if (*piVar6 != 0xb) goto LAB_004020d0;
        }
        else if ((iVar5 != 0) || (bVar2 = true, DAT_00417414 != DAT_00417410)) goto LAB_004020d0;
      }
      else {
        DAT_004177dc = iVar5 + DAT_004177dc;
        DAT_00417414 = iVar5 + DAT_00417414;
      }
    }
LAB_00401dc0:
    if ((puVar9 != (uint *)0x0) &&
       (((int)local_138[DAT_004174ac >> 5] >> (DAT_004174ac & 0x1f) & 1U) != 0)) {
      if (*(int *)(DAT_0041787c + 0xe0) != 0) {
        local_38 = 0;
        local_34 = 5000000;
        while( true ) {
          iVar4 = FUN_00404838();
          iVar5 = (int)((ulonglong)((longlong)DAT_00417418 * 1000) >> 0x20);
          lVar1 = (longlong)*(int *)(DAT_0041787c + 0xe0) * (longlong)(iVar4 - iVar3);
          iVar4 = (int)((ulonglong)lVar1 >> 0x20);
          if ((iVar5 <= iVar4) &&
             ((iVar5 != iVar4 || ((uint)((longlong)DAT_00417418 * 1000) <= (uint)lVar1)))) break;
          pselect(0,0,0,0,&local_38,&DAT_00417848);
          if (DAT_00417874 != 0) goto LAB_004020cc;
        }
      }
      iVar4 = DAT_004177dc;
      iVar5 = DAT_004177d4;
      if (DAT_004177e0 == 0) {
        if (DAT_004177dc != 0) {
          DAT_004177dc = 0;
          DAT_004177d4 = DAT_004177d8;
          DAT_004177d8 = iVar5;
          DAT_004177e0 = iVar4;
          iVar5 = write(DAT_004174ac,iVar5);
          if (iVar5 < 1) goto LAB_00402160;
LAB_00401f30:
          DAT_004177e0 = DAT_004177e0 - iVar5;
          if (0 < DAT_004177e0) {
            memcpy(DAT_004177d8,DAT_004177d8 + iVar5);
          }
          DAT_00417418 = iVar5 + DAT_00417418;
          goto LAB_00401f5c;
        }
        if (!bVar2) {
LAB_00402030:
          puVar11 = local_b8;
          iVar5 = DAT_004177dc;
LAB_00402034:
          do {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
            puVar10 = local_b8;
          } while (puVar11 != &local_38);
          local_b8[DAT_004174a8 >> 5] = local_b8[DAT_004174a8 >> 5] | 1 << (DAT_004174a8 & 0x1f);
          uVar7 = DAT_004174a8;
          goto LAB_00401dfc;
        }
      }
      else {
        iVar5 = write(DAT_004174ac,DAT_004177d8);
        if (0 < iVar5) goto LAB_00401f30;
LAB_00402160:
        if ((iVar5 != -1) || (piVar6 = (int *)__errno_location(), *piVar6 != 0xb))
        goto LAB_004020d0;
LAB_00401f5c:
        if (!bVar2) goto LAB_00401d0c;
        if ((DAT_004177dc != 0) || (DAT_004177e0 != 0)) goto LAB_00401d00;
      }
      if (DAT_00417418 == DAT_00417410) {
        close(DAT_004174a8);
        close(DAT_004174ac);
        rename(&DAT_004175d4,&DAT_004176d4);
        FUN_00404a18(DAT_00417410);
        FUN_00404d88("recbak.bak","do_copy",0x231,"rename temp file to: %s",&DAT_004176d4);
        iVar5 = FUN_00404838();
        iVar5 = iVar5 - iVar3;
        if (999 < iVar5) {
          iVar4 = FUN_004057d8((int)((longlong)DAT_00417418 * 1000),
                               (int)((ulonglong)((longlong)DAT_00417418 * 1000) >> 0x20),iVar5,
                               iVar5 >> 0x1f);
          iVar3 = iVar4 + 0x3ff;
          if (-1 < iVar4) {
            iVar3 = iVar4;
          }
          FUN_00404d88("recbak.bak","do_copy",0x238,"copy speed: %dkB/s, test in %dms.",iVar3 >> 10,
                       iVar5);
          local_30 = *(int *)(DAT_0041787c + 0xe0);
          if (local_30 == 0) {
            iVar3 = (iVar4 * 0x3c) / 100;
            if (iVar3 < 0x25800) {
              *(undefined4 *)(DAT_0041787c + 0xe0) = 0x25800;
              iVar3 = 0x96;
            }
            else if (iVar3 < 0x4b001) {
              *(int *)(DAT_0041787c + 0xe0) = iVar3;
              iVar3 = iVar3 >> 10;
            }
            else {
              iVar3 = 300;
              *(undefined4 *)(DAT_0041787c + 0xe0) = 0x4b000;
            }
            FUN_00404d88("recbak.bak","do_copy",0x247,"limit copy speed to: %dkB/s",iVar3,iVar5);
            return local_30;
          }
        }
        return 0;
      }
LAB_004020d0:
      close(DAT_004174a8);
      close(DAT_004174ac);
      remove(&DAT_004175d4);
      FUN_00404d88("recbak.bak","do_copy",0x22b,"failed copy file: %s",&DAT_004176d4);
      return -1;
    }
    if (!bVar2) goto LAB_00401d0c;
LAB_00401df8:
    puVar10 = (uint *)0x0;
    uVar7 = 0;
    iVar5 = DAT_004177dc;
LAB_00401dfc:
    if ((iVar5 != 0) || (DAT_004177e0 != 0)) goto LAB_00401d2c;
    puVar9 = (uint *)0x0;
  } while( true );
}



// ==== recordbak_pause @ 00402aa0 size=580

void recordbak_pause(void)

{
  int iVar1;
  int iVar2;
  int local_30 [2];
  
  FUN_00404d88("recbak.bak","recordbak_pause",799,"recordbak_pause in");
  pthread_mutex_lock(&DAT_004177e8);
  if (DAT_00417830 < 1) {
    DAT_00417830 = 1;
    DAT_00417834 = 1;
    DAT_004174b0 = 0xfffffffe;
    pthread_cond_signal(&DAT_00417800);
    pthread_mutex_unlock(&DAT_004177e8);
    iVar2 = 0;
    pthread_kill(DAT_004177e4,1);
    FUN_00404d88("recbak.bak","recordbak_pause",0x333,"recordbak_pause wait: ...");
    while( true ) {
      clock_gettime(0,local_30);
      local_30[0] = local_30[0] + 0x1e;
      iVar1 = sem_timedwait(&DAT_00417838,local_30);
      if (iVar1 == 0) break;
      FUN_00404d88("recbak.bak","recordbak_pause",0x33e,"recordbak_pause wait: timeout");
      if ((iVar2 != -1) && (iVar2 = iVar2 + 1, iVar2 == 10)) {
        FUN_00404d88("recbak.bak","recordbak_pause",0x342,"recordbak_pause wait: cifs got stuck");
        iVar2 = fopen("/tmp/recbackup.stuck",&DAT_004063c8);
        if (iVar2 != 0) {
          fclose(iVar2);
        }
        iVar2 = -1;
        FUN_00404d88("recbak.bak","recordbak_pause",0x349,"recordbak_pause wait: send reboot msg");
        send_mq_msg(1,0,0xfff,0xfff,&DAT_00406050);
      }
    }
    FUN_00404d88("recbak.bak","recordbak_pause",0x34e,"recordbak_pause out, pause_cnt=1");
    return;
  }
  iVar2 = DAT_00417830 + 1;
  DAT_00417830 = iVar2;
  pthread_mutex_unlock(&DAT_004177e8);
  FUN_00404d88("recbak.bak","recordbak_pause",0x326,"recordbak_pause out, pause_cnt=%d",iVar2);
  return;
}



// ==== recordbak_resume @ 00402ce4 size=164

int recordbak_resume(void)

{
  int iVar1;
  
  pthread_mutex_lock(&DAT_004177e8);
  if (0 < DAT_00417830) {
    DAT_00417830 = DAT_00417830 + -1;
    if (DAT_00417830 == 0) {
      DAT_004174b0 = 1;
      pthread_cond_signal(&DAT_00417800);
    }
  }
  iVar1 = DAT_00417830;
  pthread_mutex_unlock(&DAT_004177e8);
  FUN_00404d88("recbak.bak","recordbak_resume",0x35f,"recordbak_resume, pause_cnt=%d",iVar1);
  return iVar1;
}



// ==== umount_cifs @ 00402d88 size=60

void umount_cifs(void)

{
  FUN_00404d88("recbak.cifs","umount_cifs",0x78,"umount_cifs");
  system("umount -l /tmp/cifs 2>/dev/null");
  return;
}



// ==== XiaoMi @ 00402e34 size=812

undefined4 XiaoMi(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar5 = DAT_0041787c;
  local_38 = *(int *)(DAT_0041787c + 0x98);
  local_34 = *(int *)(DAT_0041787c + 0x9c);
  local_30 = *(int *)(DAT_0041787c + 0xc0);
  *(undefined4 *)(DAT_0041787c + 0x98) = 0;
  local_2c = *(int *)(iVar5 + 0xc4);
  *(undefined4 *)(iVar5 + 0x9c) = 0;
  *(undefined1 *)(iVar5 + 0xa8) = 0;
  *(undefined1 *)(iVar5 + 0xa9) = 0;
  *(undefined4 *)(iVar5 + 0xc0) = 0;
  *(undefined4 *)(iVar5 + 0xc4) = 0;
  *(undefined1 *)(iVar5 + 0xd0) = 0;
  *(undefined1 *)(iVar5 + 0xd1) = 0;
  if (*param_1 != '\0') {
    iVar5 = 0;
    do {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      iVar1 = FUN_00405448(&local_50,&DAT_00406528,param_1);
      if (iVar1 == 0) {
LAB_00403048:
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
      }
      else {
        iVar1 = atoi(&local_50);
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        if ((iVar1 == -1) || (iVar2 = FUN_00405448(&local_50,"capacity",param_1), iVar2 == 0))
        goto LAB_00403048;
        uVar7 = atoll(&local_50);
        local_50 = 0;
        local_4c = 0;
        uVar6 = (int)((ulonglong)uVar7 >> 0x20) << 0xc | (uint)uVar7 >> 0x14;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        if ((uVar6 != 0xffffffff) &&
           (iVar2 = FUN_00405448(&local_50,"available",param_1), iVar2 != 0)) {
          uVar7 = atoll(&local_50);
          iVar2 = DAT_0041787c;
          uVar3 = (int)((ulonglong)uVar7 >> 0x20) << 0xc | (uint)uVar7 >> 0x14;
          if (uVar3 != 0xffffffff) {
            if (iVar1 == 0) {
              *(uint *)(DAT_0041787c + 0x98) = uVar6;
              *(uint *)(iVar2 + 0x9c) = uVar3;
              *(undefined1 *)(iVar2 + 0xa8) = 0;
              strncpy(iVar2 + 0xa9,"XiaoMi",0xd);
            }
            else {
              if (*(int *)(DAT_0041787c + 0xc0) < (int)uVar6) {
                iVar1 = DAT_0041787c + 0xd1;
                *(uint *)(DAT_0041787c + 0xc0) = uVar6;
                *(uint *)(iVar2 + 0xc4) = uVar3;
                snprintf(iVar1,0xd,"XiaoMi-usb%d",iVar5);
                if (iVar5 == 0) {
                  *(undefined1 *)(iVar2 + 0xd0) = 0;
                  if (0x1400 < (int)uVar6) goto LAB_00402fd8;
                }
                else {
                  *(undefined1 *)(iVar2 + 0xd0) = 0;
                }
              }
              iVar5 = iVar5 + 1;
            }
          }
        }
      }
      iVar1 = strstr(param_1,&DAT_00406560);
      if ((iVar1 == 0) || (param_1 = (char *)(iVar1 + 2), *(char *)(iVar1 + 2) == '\0'))
      goto LAB_00402fd8;
    } while( true );
  }
  iVar1 = 0;
LAB_00402fdc:
  if (iVar1 == local_38) {
    uVar4 = 1;
    if (*(int *)(iVar5 + 0xc0) == local_30) {
      if (*(char *)(iVar5 + 0x1c) == '\0') {
        local_34 = local_34 - *(int *)(iVar5 + 0x9c);
        if (local_34 < 0) {
          local_34 = -local_34;
        }
        if (local_34 < 0x32) {
          local_2c = local_2c - *(int *)(iVar5 + 0xc4);
          if (local_2c < 0) {
            local_2c = -local_2c;
          }
          uVar4 = 2;
          if (local_2c < 0x32) {
            uVar4 = 0;
          }
          return uVar4;
        }
        return 2;
      }
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
LAB_00402fd8:
  iVar1 = *(int *)(DAT_0041787c + 0x98);
  iVar5 = DAT_0041787c;
  goto LAB_00402fdc;
}



// ==== get_dir_size @ 0040322c size=192

undefined8 get_dir_size(undefined4 param_1)

{
  FUN_00404d88("recbak.cifs","get_dir_size",0xa0,"get_dir_size \'%s\': ...",param_1);
  DAT_0041786c = 0;
  DAT_00417868 = 0;
  ftw(param_1,&LAB_004035cc,5);
  FUN_00404d88("recbak.cifs","get_dir_size",0xa6,"get_dir_size \'%s\': %d",param_1,
               DAT_0041786c << 0x15 | DAT_00417868 >> 0xb);
  return CONCAT44(DAT_0041786c,DAT_00417868);
}



// ==== try_clean_disk @ 004032ec size=628

undefined4 try_clean_disk(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_470 [1024];
  undefined1 auStack_70 [12];
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_44 [20];
  int local_30 [2];
  
  FUN_00404d88("recbak.cifs","try_clean_disk",0x1d7,"try_clean_disk");
  uVar5 = *(uint *)(DAT_0041787c + 0x88);
  if (uVar5 < 3) {
    local_30[0] = time(0);
    local_30[0] = local_30[0] + *(int *)(DAT_00417870 + 0x4b4);
    if (uVar5 == 0) {
      local_30[0] = local_30[0] + -0x15180;
    }
    else if (uVar5 == 1) {
      local_30[0] = local_30[0] + -0x93a80;
    }
    else {
      local_30[0] = local_30[0] + -0x278d00;
    }
    localtime_r(local_30,auStack_70);
    iVar7 = local_60 + 1;
    snprintf(auStack_44,0x14,&DAT_004065b0,local_5c + 0x76c,iVar7,local_64);
    iVar2 = opendir(DAT_0041787c + 0x1c);
    if (iVar2 != 0) {
      iVar7 = snprintf(auStack_470,0x400,&DAT_004065c4,DAT_0041787c + 0x1c,iVar7,local_64);
      uVar6 = 0;
LAB_0040344c:
      iVar3 = readdir(iVar2);
      if (iVar3 == 0) {
        closedir(iVar2);
        return uVar6;
      }
      if (*(char *)(iVar3 + 0xb) == '.') goto LAB_004034e8;
      goto LAB_00403468;
    }
  }
  return 0;
LAB_004034e8:
  if (*(char *)(iVar3 + 0xc) != '\0') {
    if (*(char *)(iVar3 + 0xc) == '.') {
      if (*(char *)(iVar3 + 0xd) == '\0') goto LAB_0040344c;
      cVar1 = *(char *)(iVar3 + 10);
    }
    else {
LAB_00403468:
      cVar1 = *(char *)(iVar3 + 10);
    }
    if ((cVar1 == '\x04') && (iVar4 = strcmp(iVar3 + 0xb,auStack_44), iVar4 < 0)) {
      iVar3 = snprintf(auStack_470 + iVar7,0x400 - iVar7,"%s",iVar3 + 0xb);
      FUN_00404d88("recbak.cifs","try_clean_disk",0x208,"remove dir: %s",auStack_470);
      uVar6 = 1;
      FUN_00404a78(auStack_470,iVar7 + iVar3);
    }
  }
  goto LAB_0040344c;
}



// ==== pause_bak @ 00403560 size=108

void pause_bak(void)

{
  FUN_00404d88("recbak.cifs","pause_bak",0x214,"pause_bak: ...");
  recordbak_pause();
  *(undefined4 *)(DAT_0041787c + 0x14) = 0;
  FUN_00404d88("recbak.cifs","pause_bak",0x219,"pause_bak: ok");
  return;
}



// ==== mount_cifs @ 00403608 size=132

bool mount_cifs(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_110 [260];
  
  snprintf(auStack_110,0x100,
           "mount.cifs //%s/%s /tmp/cifs -o username=xiaoyicamera,password=,sec=ntlmv2,rsize=8192,wsize=8192,iocharset=utf8 2>/dev/null"
           ,DAT_00417870 + 0x3e0,param_1);
  iVar1 = system(auStack_110);
  FUN_00404d88("recbak.cifs","mount_cifs",0x71,"mount_cifs \'%s\': %d",param_1,iVar1 == 0);
  return iVar1 == 0;
}



// ==== send_mq_msg @ 004039a0 size=284

undefined4
send_mq_msg(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
           undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_220;
  undefined4 local_21c;
  undefined2 local_218;
  undefined2 local_216;
  uint local_214;
  undefined1 auStack_210 [496];
  
  FUN_00404d88("recbak.cifs","send_mq_msg",0x29,"send_mq_msg: %s",param_5);
  iVar1 = DAT_00417374;
  if ((DAT_00417374 == -1) && (iVar3 = FUN_004051c0(&DAT_00417374,"/ipc_dispatch"), iVar3 < 0)) {
    uVar2 = 0xffffffff;
    DAT_00417374 = iVar1;
  }
  else {
    iVar1 = DAT_00417374;
    local_220 = param_1;
    local_21c = param_2;
    local_218 = param_3;
    local_216 = param_4;
    local_214 = strlen(param_5);
    if (local_214 < 0x1f1) {
      iVar3 = local_214 + 0x10;
    }
    else {
      iVar3 = 0x200;
      local_214 = 0x1f0;
    }
    memcpy(auStack_210,param_5,local_214);
    uVar2 = FUN_00405218(iVar1,&local_220,iVar3);
  }
  return uVar2;
}



// ==== mount_fail @ 00403abc size=384

void mount_fail(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [56];
  
  iVar1 = FUN_0040368c(DAT_0041787c + 0x90);
  iVar2 = FUN_0040368c(DAT_0041787c + 0xb8);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    snprintf(auStack_48,0x32,"router_disk:%d,%d,%d",*(undefined4 *)(DAT_0041787c + 0xa0),
             *(undefined4 *)(DAT_0041787c + 0xa4),
             *(int *)(DAT_0041787c + 0x94) << 0x15 | *(uint *)(DAT_0041787c + 0x90) >> 0xb);
    send_mq_msg(1,0,0x5003,0,auStack_48);
    if (iVar2 == 0) goto LAB_00403b74;
  }
  snprintf(auStack_48,0x32,"extra_disk:%d,%d,%d",*(undefined4 *)(DAT_0041787c + 200),
           *(undefined4 *)(DAT_0041787c + 0xcc),
           *(int *)(DAT_0041787c + 0xbc) << 0x15 | *(uint *)(DAT_0041787c + 0xb8) >> 0xb);
  send_mq_msg(1,0,0x5004,0,auStack_48);
LAB_00403b74:
  if ((*(int *)(DAT_0041787c + 0xa0) < 1) && (*(int *)(DAT_0041787c + 200) < 1)) {
    send_mq_msg(1,0,0x5002,0,"mount_fail");
    return;
  }
  send_mq_msg(1,0,0x5001,0,"mount_ok");
  return;
}



// ==== check_disk_space @ 00403c3c size=664

undefined4 check_disk_space(void)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [52];
  uint local_1c;
  uint local_18 [2];
  
  FUN_00404d88("recbak.cifs","check_disk_space",0x228,"check_disk_space");
  iVar1 = FUN_00403160(local_18,&local_1c);
  if (iVar1 < 0) {
    return 0;
  }
  puVar3 = (undefined8 *)(DAT_0041787c + (uint)(*(int *)(DAT_0041787c + 0x8c) != 0) * 0x28 + 0x90);
  if ((int)local_1c < 0x401) {
    uVar4 = 1;
    if (*(int *)(DAT_0041787c + 0x10) == 0) {
      if (*(int *)(DAT_0041787c + 0x14) != 0) {
        pause_bak();
      }
      iVar5 = try_clean_disk();
      iVar1 = DAT_0041787c;
      if (iVar5 == 0) {
        bVar2 = false;
        iVar5 = *(int *)((int)puVar3 + 0x14) - local_1c;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        *(undefined4 *)(DAT_0041787c + 0x10) = 1;
        goto joined_r0x00403dd0;
      }
      iVar1 = FUN_00403160(local_18,&local_1c);
      uVar4 = local_1c;
      if (iVar1 < 0) {
        return 0;
      }
      uVar6 = get_dir_size(DAT_0041787c + 0x1c);
      uVar4 = (uint)((int)uVar4 < 0x401);
      bVar2 = true;
      *puVar3 = uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    uVar4 = 0;
    bVar2 = false;
  }
  iVar1 = DAT_0041787c;
  iVar5 = *(int *)((int)puVar3 + 0x14) - local_1c;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  *(uint *)(DAT_0041787c + 0x10) = uVar4;
joined_r0x00403dd0:
  if (iVar5 < 0x32) {
    return 1;
  }
  if ((0 < *(int *)(puVar3 + 2)) || (bVar2)) {
    uVar6 = *puVar3;
  }
  else {
    if (*(int *)(iVar1 + 0x14) != 0) {
      pause_bak();
      iVar1 = DAT_0041787c;
    }
    uVar6 = get_dir_size(iVar1 + 0x1c);
    iVar1 = DAT_0041787c;
    *puVar3 = uVar6;
  }
  iVar1 = *(int *)(iVar1 + 0x8c);
  *(uint *)((int)puVar3 + 0x14) = local_1c;
  uVar4 = (int)((ulonglong)uVar6 >> 0x20) << 0x15 | (uint)uVar6 >> 0xb;
  *(uint *)(puVar3 + 2) = local_18[0];
  if (iVar1 == 0) {
    snprintf(auStack_50,0x32,"router_disk:%d,%d,%d",local_18[0],local_1c,uVar4);
    send_mq_msg(1,0,0x5003,0,auStack_50);
  }
  else {
    snprintf(auStack_50,0x32,"extra_disk:%d,%d,%d",local_18[0],local_1c,uVar4);
    send_mq_msg(1,0,0x5004,0,auStack_50);
  }
  send_mq_msg(1,0,0x5001,0,"mount_ok");
  return 1;
}



// ==== resume_bak @ 00404158 size=1640

void resume_bak(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_48 [4];
  int local_44;
  int local_40;
  int local_1c;
  
  uVar5 = (uint)(*(int *)(DAT_00417870 + 0x608) == 0);
  if (uVar5 != *(uint *)(DAT_0041787c + 8)) {
    *(uint *)(DAT_0041787c + 8) = uVar5;
    FUN_00404d88("recbak.cifs","cifs_watch",0x308,"get_power_mode: %d",uVar5);
    if (*(int *)(DAT_0041787c + 8) != 0) {
      DAT_00417878 = 0;
    }
  }
  iVar6 = *(int *)(DAT_00417870 + 0x5b4);
  if (iVar6 != *(int *)(DAT_0041787c + 0xc)) {
    *(int *)(DAT_0041787c + 0xc) = iVar6;
    FUN_00404d88("recbak.cifs","cifs_watch",0x311,"get_viewing_cnt: %d",iVar6);
  }
  iVar6 = DAT_0041787c;
  iVar10 = (int)*(char *)(DAT_00417870 + 0x98c);
  iVar8 = (int)*(char *)(DAT_00417870 + 0x98d);
  iVar7 = (int)*(char *)(DAT_00417870 + 0x98e);
  bVar2 = iVar10 != *(int *)(DAT_0041787c + 0x80);
  iVar12 = (int)*(char *)(DAT_00417870 + 0x98f);
  if (bVar2) {
    *(int *)(DAT_0041787c + 0x80) = iVar10;
  }
  bVar3 = iVar8 != *(int *)(iVar6 + 0x84);
  if (bVar3) {
    *(int *)(iVar6 + 0x84) = iVar8;
  }
  iVar8 = *(int *)(iVar6 + 0x88);
  if (iVar7 == iVar8) {
    if (iVar12 != *(int *)(iVar6 + 0x8c)) goto LAB_00404280;
    if (bVar3 || bVar2) goto LAB_00404290;
    uVar13 = FUN_00404838();
    if (DAT_00417378 == -1) goto LAB_00404488;
LAB_004042f4:
    iVar6 = (int)((ulonglong)uVar13 >> 0x20);
    uVar5 = (uint)uVar13;
    uVar11 = iVar6 - DAT_0041737c;
    uVar9 = (uint)(uVar5 < uVar5 - DAT_00417378);
    if ((0 < (int)(uVar11 - uVar9)) ||
       ((uVar13 = CONCAT44(DAT_0041737c,DAT_00417378), uVar11 == uVar9 &&
        (uVar13 = CONCAT44(DAT_0041737c,DAT_00417378), 59999 < uVar5 - DAT_00417378)))) {
      DAT_00417378 = uVar5;
      DAT_0041737c = iVar6;
      local_1c = time(0);
      local_1c = local_1c + *(int *)(DAT_00417870 + 0x4b4);
      localtime_r(&local_1c,auStack_48);
      if (((local_40 == 8) || (local_40 == 0x12)) && (local_44 < 5)) {
        DAT_00417878 = 0;
      }
      if (*(char *)(DAT_0041787c + 0x1c) != '\0') {
        iVar6 = access(DAT_0041787c + 0x1c,0);
        if (iVar6 == 0) {
          iVar6 = FUN_00402dc4();
          if (*(int *)(DAT_0041787c + 4) != iVar6) {
            piVar1 = (int *)(DAT_0041787c + 0x14);
            *(int *)(DAT_0041787c + 4) = iVar6;
            if (*piVar1 != 0) {
              pause_bak();
            }
            try_clean_disk();
            iVar6 = DAT_0041787c;
            iVar7 = *(int *)(DAT_0041787c + 0x8c);
            uVar13 = get_dir_size(DAT_0041787c + 0x1c);
            *(undefined8 *)(iVar6 + (uint)(iVar7 != 0) * 0x28 + 0x90) = uVar13;
          }
          iVar6 = check_disk_space();
          if (iVar6 == 0) {
            FUN_0040381c();
          }
        }
        else {
          FUN_0040381c();
        }
      }
      DAT_00417380 = DAT_00417380 + 1;
      uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
    }
  }
  else {
    *(int *)(iVar6 + 0x88) = iVar7;
    if (((iVar7 < iVar8) && (*(undefined4 *)(iVar6 + 0x10) = 0, *(char *)(iVar6 + 0x1c) != '\0')) &&
       (iVar7 = check_disk_space(), iVar6 = DAT_0041787c, iVar7 == 0)) {
      FUN_0040381c();
      iVar6 = DAT_0041787c;
    }
    if (iVar12 == *(int *)(iVar6 + 0x8c)) {
      uVar4 = *(undefined4 *)(iVar6 + 0x80);
    }
    else {
LAB_00404280:
      FUN_0040381c();
      iVar6 = DAT_0041787c;
      *(int *)(DAT_0041787c + 0x8c) = iVar12;
LAB_00404290:
      uVar4 = *(undefined4 *)(iVar6 + 0x80);
    }
    FUN_00404d88("recbak.cifs","cifs_watch",0x317,
                 "get_bak_config: enable=%d,resolution=%d,period=%d,disk=%d",uVar4,
                 *(undefined4 *)(iVar6 + 0x84),*(undefined4 *)(iVar6 + 0x88),iVar12);
    if (*(int *)(DAT_0041787c + 0x80) != 0) {
      DAT_00417878 = 0;
    }
    uVar13 = FUN_00404838();
    if (DAT_00417378 != -1) goto LAB_004042f4;
LAB_00404488:
    if (DAT_0041737c != DAT_00417378) goto LAB_004042f4;
  }
  iVar6 = DAT_0041787c;
  DAT_0041737c = (int)((ulonglong)uVar13 >> 0x20);
  DAT_00417378 = (uint)uVar13;
  if (4 < DAT_00417380) {
    iVar7 = *(int *)(DAT_0041787c + 0x18);
    DAT_00417380 = 0;
    if (iVar7 == 0) {
      uVar4 = FUN_00403930();
      iVar7 = DAT_0041787c;
      *(undefined4 *)(iVar6 + 0x18) = uVar4;
      uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
      iVar7 = *(int *)(iVar7 + 0x18);
    }
    DAT_0041737c = (int)((ulonglong)uVar13 >> 0x20);
    DAT_00417378 = (uint)uVar13;
    FUN_00404d88("recbak.cifs","cifs_watch",0x34e,"is_disk_changed: %d",iVar7);
    uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
  }
  DAT_0041737c = (int)((ulonglong)uVar13 >> 0x20);
  DAT_00417378 = (uint)uVar13;
  if (((*(int *)(DAT_0041787c + 8) == 0) || (*(int *)(DAT_0041787c + 0x80) == 0)) ||
     ((*(int *)(DAT_0041787c + 0xc) != 0 ||
      ((DAT_00417878 != 0 || (*(int *)(DAT_0041787c + 0x18) != 0)))))) {
    FUN_0040381c();
    uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
    iVar6 = DAT_0041787c;
LAB_004043e0:
    iVar7 = *(int *)(iVar6 + 0x10);
LAB_004043e4:
    iVar8 = iVar6;
    if (iVar7 == 0) goto LAB_004043fc;
  }
  else {
    if (*(char *)(DAT_0041787c + 0x1c) == '\0') {
      iVar6 = DAT_0041787c + (uint)(*(int *)(DAT_0041787c + 0x8c) != 0) * 0x28 + 0x90;
      if (*(short *)(iVar6 + 0x18) == 0) {
LAB_00404688:
        iVar6 = DAT_0041787c;
        DAT_0041737c = (int)((ulonglong)uVar13 >> 0x20);
        DAT_00417378 = (uint)uVar13;
        DAT_00417860 = DAT_00417860 + 1;
        if (DAT_00417860 == 1) {
          *(undefined4 *)(DAT_0041787c + 0x18) = 3;
          uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
        }
        goto LAB_004043e0;
      }
      umount_cifs();
      if ((*(char *)(iVar6 + 0x18) == '\0') || (iVar7 = mount_cifs(iVar6 + 0x18), iVar7 == 0)) {
        if ((*(char *)(iVar6 + 0x19) != '\0') && (iVar6 = mount_cifs(iVar6 + 0x19), iVar6 != 0))
        goto LAB_00404788;
      }
      else {
        iVar6 = strcmp(iVar6 + 0x18,iVar6 + 0x19);
        if (iVar6 == 0) {
LAB_00404788:
          snprintf(DAT_0041787c + 0x1c,100,&DAT_00406688,DAT_00417870 + 0x255);
        }
        else {
          snprintf(DAT_0041787c + 0x1c,100,&DAT_004066d0,DAT_00417870 + 0x255);
        }
        iVar6 = access(DAT_0041787c + 0x1c,0);
        if (iVar6 == -1) {
          FUN_004047c0(DAT_0041787c + 0x1c,10);
        }
      }
      uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
      if (*(char *)(DAT_0041787c + 0x1c) == '\0') goto LAB_00404688;
      DAT_00417860 = 0;
      check_disk_space();
      uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
      if (*(char *)(DAT_0041787c + 0x1c) != '\0') goto LAB_004044f4;
      iVar7 = *(int *)(DAT_0041787c + 0x10);
      iVar6 = DAT_0041787c;
      goto LAB_004043e4;
    }
LAB_004044f4:
    DAT_0041737c = (int)((ulonglong)uVar13 >> 0x20);
    DAT_00417378 = (uint)uVar13;
    iVar6 = DAT_0041787c;
    if (*(int *)(DAT_0041787c + 0x10) == 0) {
      iVar8 = DAT_0041787c;
      if (*(int *)(DAT_0041787c + 0x14) != 0) goto LAB_004043fc;
      FUN_00404d88("recbak.cifs","resume_bak",0x21e,"resume_bak: ...");
      recordbak_resume();
      *(undefined4 *)(DAT_0041787c + 0x14) = 1;
      FUN_00404d88("recbak.cifs","resume_bak",0x223,"resume_bak: ok");
      uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
      iVar6 = DAT_0041787c;
      goto LAB_004043e0;
    }
  }
  DAT_0041737c = (int)((ulonglong)uVar13 >> 0x20);
  DAT_00417378 = (uint)uVar13;
  iVar8 = DAT_0041787c;
  if (*(int *)(iVar6 + 0x14) != 0) {
    pause_bak();
    uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
    iVar8 = DAT_0041787c;
  }
LAB_004043fc:
  DAT_0041737c = (int)((ulonglong)uVar13 >> 0x20);
  DAT_00417378 = (uint)uVar13;
  if ((*(char *)(iVar8 + 0x1c) == '\0') && (*(int *)(iVar8 + 0x18) != 0)) {
    mount_fail();
    *(undefined4 *)(DAT_0041787c + 0x18) = 0;
    uVar13 = CONCAT44(DAT_0041737c,DAT_00417378);
  }
  DAT_0041737c = (int)((ulonglong)uVar13 >> 0x20);
  DAT_00417378 = (uint)uVar13;
  return;
}



// ==== __PLT_HEAD @ 00406cc0 size=32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __PLT_HEAD(void)

{
  (*___DT_MIPS_PLTGOT)();
  (*(code *)PTR_putchar_004171d0)();
  return;
}



// ==== putchar @ 00406ce0 size=16

void putchar(void)

{
  (*(code *)PTR_putchar_004171d0)();
  return;
}



// ==== clock_gettime @ 00406cf0 size=4

void clock_gettime(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_clock_gettime_004171d4)();
  return;
}



// ==== popen @ 00406d10 size=4

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_popen_004171dc)();
  return;
}



// ==== printf @ 00406d20 size=16

void printf(void)

{
  (*(code *)PTR_printf_004171e0)();
  return;
}



// ==== sigemptyset @ 00406d40 size=16

void sigemptyset(void)

{
  (*(code *)PTR_sigemptyset_004171e8)();
  return;
}



// ==== pclose @ 00406d50 size=16

void pclose(void)

{
  (*(code *)PTR_pclose_004171ec)();
  return;
}



// ==== snprintf @ 00406d60 size=16

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_snprintf_004171f0)();
  return;
}



// ==== usleep @ 00406d80 size=16

void usleep(void)

{
  (*(code *)PTR_usleep_004171f8)();
  return;
}



// ==== getpid @ 00406d90 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getpid_004171fc)();
  return;
}



// ==== memcpy @ 00406da0 size=16

void memcpy(void)

{
  (*(code *)PTR_memcpy_00417200)();
  return;
}



// ==== puts @ 00406db0 size=4

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_puts_00417204)();
  return;
}



// ==== system @ 00406dd0 size=16

void system(void)

{
  (*(code *)PTR_system_0041720c)();
  return;
}



// ==== malloc @ 00406de0 size=4

void malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_malloc_00417210)();
  return;
}



// ==== remove @ 00406df0 size=16

void remove(void)

{
  (*(code *)PTR_remove_00417214)();
  return;
}



// ==== sleep @ 00406e00 size=4

void sleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sleep_00417218)();
  return;
}



// ==== vsnprintf @ 00406e10 size=16

void vsnprintf(void)

{
  (*(code *)PTR_vsnprintf_0041721c)();
  return;
}



// ==== mq_send @ 00406e20 size=16

void mq_send(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mq_send_00417220)();
  return;
}



// ==== statfs @ 00406e30 size=4

void statfs(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_statfs_00417224)();
  return;
}



// ==== socket @ 00406e50 size=16

void socket(void)

{
  (*(code *)PTR_socket_0041722c)();
  return;
}



// ==== select @ 00406e60 size=4

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_select_00417230)();
  return;
}



// ==== readdir @ 00406e70 size=16

void readdir(void)

{
  (*(code *)PTR_readdir_00417234)();
  return;
}



// ==== lseek @ 00406e80 size=4

void lseek(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_lseek_00417238)();
  return;
}



// ==== sigaddset @ 00406e90 size=16

void sigaddset(void)

{
  (*(code *)PTR_sigaddset_0041723c)();
  return;
}



// ==== mmap @ 00406ea0 size=16

void mmap(void)

{
  (*(code *)PTR_mmap_00417240)();
  return;
}



// ==== rename @ 00406eb0 size=4

void rename(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rename_00417244)();
  return;
}



// ==== strrchr @ 00406ec0 size=16

void strrchr(void)

{
  (*(code *)PTR_strrchr_00417248)();
  return;
}



// ==== write @ 00406ed0 size=16

void write(void)

{
  (*(code *)PTR_write_0041724c)();
  return;
}



// ==== fstat @ 00406ee0 size=4

void fstat(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fstat_00417250)();
  return;
}



// ==== mktime @ 00406f00 size=4

void mktime(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mktime_00417258)();
  return;
}



// ==== strstr @ 00406f10 size=16

void strstr(void)

{
  (*(code *)PTR_strstr_0041725c)();
  return;
}



// ==== flock @ 00406f30 size=16

void flock(void)

{
  (*(code *)PTR_flock_00417264)();
  return;
}



// ==== signal @ 00406f40 size=4

void signal(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_signal_00417268)();
  return;
}



// ==== read @ 00406f50 size=16

void read(void)

{
  (*(code *)PTR_read_0041726c)();
  return;
}



// ==== strncpy @ 00406f60 size=16

void strncpy(void)

{
  (*(code *)PTR_strncpy_00417270)();
  return;
}



// ==== sendto @ 00406f70 size=4

void sendto(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sendto_00417274)();
  return;
}



// ==== sigaction @ 00406fa0 size=4

void sigaction(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sigaction_00417280)();
  return;
}



// ==== fread @ 00406fb0 size=16

void fread(void)

{
  (*(code *)PTR_fread_00417284)();
  return;
}



// ==== gettimeofday @ 00406fc0 size=4

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gettimeofday_00417288)();
  return;
}



// ==== fopen @ 00406fd0 size=16

void fopen(void)

{
  (*(code *)PTR_fopen_0041728c)();
  return;
}



// ==== localtime @ 00406fe0 size=4

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_localtime_00417290)();
  return;
}



// ==== memset @ 00406ff0 size=16

void memset(void)

{
  (*(code *)PTR_memset_00417294)();
  return;
}



// ==== ftw @ 00407000 size=4

void ftw(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ftw_00417298)();
  return;
}



// ==== fclose @ 00407010 size=16

void fclose(void)

{
  (*(code *)PTR_fclose_0041729c)();
  return;
}



// ==== time @ 00407020 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040702c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_time_004172a0)();
  return;
}



// ==== opendir @ 00407030 size=16

void opendir(void)

{
  (*(code *)PTR_opendir_004172a4)();
  return;
}



// ==== strcmp @ 00407040 size=4

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040704c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcmp_004172a8)();
  return;
}



// ==== pselect @ 00407060 size=4

void pselect(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040706c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pselect_004172b0)();
  return;
}



// ==== localtime_r @ 00407070 size=16

void localtime_r(void)

{
  (*(code *)PTR_localtime_r_004172b4)();
  return;
}



// ==== access @ 00407080 size=4

void access(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040708c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_access_004172b8)();
  return;
}



// ==== __errno_location @ 004070c0 size=16

void __errno_location(void)

{
  (*(code *)PTR___errno_location_004172c8)();
  return;
}



// ==== atoi @ 004070d0 size=4

void atoi(void)

{
                    /* WARNING: Could not recover jumptable at 0x004070dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_atoi_004172cc)();
  return;
}



// ==== fileno @ 004070f0 size=4

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x004070fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fileno_004172d4)();
  return;
}



// ==== strlen @ 00407110 size=4

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040711c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strlen_004172dc)();
  return;
}



// ==== open @ 00407120 size=16

void open(void)

{
  (*(code *)PTR_open_004172e0)();
  return;
}



// ==== atoll @ 00407130 size=4

void atoll(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040713c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_atoll_004172e4)();
  return;
}



// ==== closedir @ 00407140 size=16

void closedir(void)

{
  (*(code *)PTR_closedir_004172e8)();
  return;
}



// ==== fcntl @ 00407150 size=16

void fcntl(void)

{
  (*(code *)PTR_fcntl_004172ec)();
  return;
}



// ==== mq_open @ 00407160 size=16

void mq_open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040716c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_mq_open_004172f0)();
  return;
}



// ==== mkdir @ 00407170 size=16

void mkdir(void)

{
  (*(code *)PTR_mkdir_004172f4)();
  return;
}



// ==== close @ 00407180 size=4

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040718c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_close_004172f8)();
  return;
}



// ==== vfprintf @ 00407190 size=16

void vfprintf(void)

{
  (*(code *)PTR_vfprintf_004172fc)();
  return;
}



// ==== free @ 004071a0 size=4

void free(void)

{
                    /* WARNING: Could not recover jumptable at 0x004071ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00417300)();
  return;
}



