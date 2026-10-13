/* recbackup — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "recbackup.h"

// ==== FUN_00401400 @ 00401400 size=64

/* WARNING: Removing unreachable block (ram,0x00401420) */
/* WARNING: Removing unreachable block (ram,0x00401430) */

void FUN_00401400(void)

{
  return;
}



// ==== FUN_00401440 @ 00401440 size=76

/* WARNING: Removing unreachable block (ram,0x0040146c) */
/* WARNING: Removing unreachable block (ram,0x0040147c) */

void FUN_00401440(void)

{
  return;
}



// ==== FUN_0040148c @ 0040148c size=176

/* WARNING: Removing unreachable block (ram,0x004014ec) */

void FUN_0040148c(void)

{
  if (DAT_004173f0 == '\0') {
    FUN_00401400();
    DAT_004173f0 = '\x01';
  }
  return;
}



// ==== FUN_0040153c @ 0040153c size=60

/* WARNING: Removing unreachable block (ram,0x00401558) */

void FUN_0040153c(void)

{
  FUN_00401440();
  return;
}



// ==== FUN_00401634 @ 00401634 size=348

int FUN_00401634(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_res0 [4];
  int local_40 [12];
  
  iVar1 = *DAT_00417400;
  if (iVar1 != 0) {
    uVar3 = DAT_00417400[2];
    local_res0[0] = param_1;
    if (param_1 == -1) {
      local_res0[0] = DAT_00417400[(uVar3 + 1) * 2 + 1];
    }
    do {
      while( true ) {
        uVar4 = uVar3 + 1;
        iVar1 = iVar1 + -1;
        iVar2 = DAT_00417400[uVar4 * 2 + 2];
        uVar5 = uVar4 & 0x80000fff;
        if (local_res0[0] <= iVar2) {
          iVar1 = DAT_00417400[uVar4 * 2 + 1];
          if (DAT_00417400[uVar4 * 2 + 1] < local_res0[0]) {
            localtime_r(local_res0,local_40);
            iVar2 = DAT_00417400[uVar3 * 2 + 4];
            iVar1 = local_res0[0] - local_40[0];
            if (local_res0[0] - local_40[0] < DAT_00417400[uVar3 * 2 + 3]) {
              iVar1 = DAT_00417400[uVar3 * 2 + 3];
            }
          }
          iVar6 = (iVar1 / 0x3c) * 0x3c + 0x3b;
          if (iVar2 < iVar6) {
            iVar6 = iVar2;
          }
          *param_2 = iVar6;
          return iVar1;
        }
        if (-1 < (int)uVar5) break;
        uVar3 = (uVar5 - 1 | 0xfffff000) + 1;
        if (iVar1 < 1) {
          return -1;
        }
      }
      uVar3 = uVar5;
    } while (0 < iVar1);
  }
  return -1;
}



// ==== FUN_00401790 @ 00401790 size=124

int FUN_00401790(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_38 [11];
  int local_c;
  
  piVar1 = DAT_00417400;
  if (*DAT_00417400 != 0) {
    iVar3 = DAT_00417400[1];
    local_c = DAT_00417400[(iVar3 + 1) * 2 + 2];
    *param_1 = local_c;
    localtime_r(&local_c,local_38);
    iVar2 = local_c - local_38[0];
    if (local_c - local_38[0] < piVar1[(iVar3 + 1) * 2 + 1]) {
      iVar2 = piVar1[(iVar3 + 1) * 2 + 1];
    }
    return iVar2;
  }
  return -1;
}



// ==== FUN_0040180c @ 0040180c size=228

void FUN_0040180c(void)

{
  int iVar1;
  
  iVar1 = access(&DAT_00406470,0);
  if (iVar1 != 0) {
    snprintf(&DAT_004174d4,0x100,"%s/%s_%s","/tmp/cifs",&DAT_0040612c,&DAT_004174b4);
    snprintf(&DAT_004175d4,0x100,"%s/.mp4.tmp",&DAT_004174d4);
    return;
  }
  snprintf(&DAT_004174d4,0x100,"%s/%s_%s",&DAT_00406470,&DAT_0040612c,&DAT_004174b4);
  snprintf(&DAT_004175d4,0x100,"%s/.mp4.tmp",&DAT_004174d4);
  return;
}



// ==== FUN_004018f0 @ 004018f0 size=76

void FUN_004018f0(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = fcntl(param_1,3);
  if (uVar1 != 0xffffffff) {
    fcntl(param_1,4,uVar1 | 0x80);
    return;
  }
  return;
}



// ==== FUN_00402828 @ 00402828 size=312

undefined4 FUN_00402828(undefined4 param_1)

{
  int iVar1;
  
  pthread_mutex_init(&DAT_004177e8,0);
  pthread_cond_init(&DAT_00417800,0);
  sem_init(&DAT_00417838,0,0);
  sigemptyset(&DAT_00417848);
  DAT_004174b0 = 0xfffffffe;
  DAT_00417830 = 1;
  iVar1 = malloc(0x4000);
  DAT_004177d4 = iVar1;
  DAT_004177d8 = malloc(0x4000);
  if ((iVar1 != 0) && (DAT_004177d8 != 0)) {
    strncpy(&DAT_004174b4,param_1,0x20);
    FUN_0040180c();
    iVar1 = pthread_create(&DAT_004177e4,0,&LAB_004022d0,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  DAT_004177e4 = 0;
  pthread_mutex_destroy(&DAT_004177e8);
  pthread_cond_destroy(&DAT_00417800);
  sem_destroy(&DAT_00417838);
  free(DAT_004177d4);
  free(DAT_004177d8);
  return 0xffffffff;
}



// ==== FUN_00402960 @ 00402960 size=320

undefined4 FUN_00402960(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  pthread_mutex_lock(&DAT_004177e8);
  iVar2 = DAT_004174b0;
  if (DAT_00417420 < 10) {
    iVar3 = DAT_00417420 + 1;
    bVar1 = 0 < DAT_00417420;
    DAT_00417420 = iVar3;
    if (bVar1) {
      DAT_00417428 = (DAT_00417428 + 1) % 10;
    }
  }
  else {
    DAT_00417428 = (DAT_00417428 + 1) % 10;
    DAT_00417424 = (DAT_00417424 + 1) % 10;
  }
  iVar3 = DAT_00417428 * 0xc;
  *(undefined4 *)(&DAT_0041742c + iVar3) = param_1;
  *(undefined4 *)(&DAT_00417430 + iVar3) = param_2;
  *(undefined4 *)(&DAT_00417434 + iVar3) = 0;
  if (iVar2 == 0) {
    DAT_004174b0 = 1;
    pthread_cond_signal(&DAT_00417800);
  }
  pthread_mutex_unlock(&DAT_004177e8);
  return 0;
}



// ==== FUN_00402dc4 @ 00402dc4 size=112

int FUN_00402dc4(void)

{
  undefined1 auStack_38 [12];
  int local_2c;
  int local_28;
  int local_24;
  int local_c [2];
  
  local_c[0] = time(0);
  local_c[0] = local_c[0] + *(int *)(DAT_00417870 + 0x4b4);
  localtime_r(local_c,auStack_38);
  return (local_24 + 0x76c) * 10000 + (local_28 + 1) * 100 + local_2c;
}



// ==== FUN_00403160 @ 00403160 size=204

undefined4 FUN_00403160(uint *param_1,uint *param_2)

{
  int iVar1;
  int local_58;
  uint local_54;
  uint local_4c;
  uint local_48;
  
  iVar1 = statfs("/tmp/cifs",&local_58);
  if (((iVar1 == 0) && (local_58 == -0xacb2be)) && (local_4c != 0)) {
    *param_1 = ((int)((ulonglong)local_54 * (ulonglong)local_4c >> 0x20) +
               ((int)local_54 >> 0x1f) * local_4c) * 0x1000 |
               (uint)((ulonglong)local_54 * (ulonglong)local_4c) >> 0x14;
    *param_2 = ((int)((ulonglong)local_54 * (ulonglong)local_48 >> 0x20) +
               ((int)local_54 >> 0x1f) * local_48) * 0x1000 |
               (uint)((ulonglong)local_54 * (ulonglong)local_48) >> 0x14;
    return 0;
  }
  return 0xffffffff;
}



// ==== FUN_0040368c @ 0040368c size=400

undefined4 FUN_0040368c(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [100];
  int local_24;
  int local_20 [3];
  
  if (*(char *)(param_1 + 3) == '\0') {
LAB_004036b0:
    uVar1 = 0;
    if (*(char *)((int)param_1 + 0x19) == '\0') {
      iVar2 = 0;
    }
    else {
      puVar3 = (undefined8 *)((int)param_1 + 0x19);
      iVar2 = mount_cifs(puVar3);
      if (iVar2 != 0) goto LAB_00403734;
    }
    iVar4 = *(int *)(param_1 + 2);
    goto LAB_004036c4;
  }
  puVar3 = param_1 + 3;
  iVar2 = mount_cifs(puVar3);
  if (iVar2 == 0) goto LAB_004036b0;
LAB_00403734:
  local_20[0] = 0;
  local_24 = 0;
  iVar4 = FUN_00403160(local_20,&local_24);
  uVar1 = 0;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 2) == local_20[0]) {
      iVar4 = *(int *)((int)param_1 + 0x14) - local_24;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      uVar1 = 0;
      if (iVar4 < 0x32) goto LAB_004037d8;
    }
    iVar4 = strcmp(puVar3,(int)param_1 + 0x19);
    if (iVar4 == 0) {
      snprintf(auStack_88,100,&DAT_00406688,DAT_00417870 + 0x255);
    }
    else {
      snprintf(auStack_88,100,&DAT_004066d0,DAT_00417870 + 0x255);
    }
    uVar1 = 1;
    *(int *)(param_1 + 2) = local_20[0];
    *(int *)((int)param_1 + 0x14) = local_24;
    uVar5 = get_dir_size(auStack_88);
    *param_1 = uVar5;
  }
LAB_004037d8:
  umount_cifs();
  iVar4 = *(int *)(param_1 + 2);
LAB_004036c4:
  if ((iVar4 == -1) || ((0 < iVar4 && (iVar2 == 0)))) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ==== FUN_0040381c @ 0040381c size=96

void FUN_0040381c(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0041787c + 0x14) != 0) {
    pause_bak();
  }
  if (*(char *)(DAT_0041787c + 0x1c) != '\0') {
    umount_cifs();
    iVar1 = DAT_0041787c;
    *(undefined1 *)(DAT_0041787c + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}



// ==== FUN_0040387c @ 0040387c size=180

undefined4 FUN_0040387c(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_00404fd0(_fdata,param_1,0x800,0x3c);
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = strstr(param_1,"404 Not Found");
    uVar2 = 0;
    if (iVar1 == 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      iVar1 = FUN_00405448(&local_20,&DAT_00406704,param_1);
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        iVar1 = atoi(&local_20);
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        else {
          *param_1 = 0;
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}



// ==== FUN_00403930 @ 00403930 size=112

uint FUN_00403930(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_808 [2052];
  
  iVar1 = FUN_0040387c(auStack_808);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = XiaoMi(auStack_808);
  if ((uVar2 == 0) &&
     ((*(int *)(DAT_0041787c + 0x98) < 1 || (uVar2 = 1, 0 < *(int *)(DAT_0041787c + 0xa0))))) {
    if (*(int *)(DAT_0041787c + 0xc0) < 1) {
      return 0;
    }
    uVar2 = (uint)(*(int *)(DAT_0041787c + 200) < 1);
  }
  return uVar2;
}



// ==== FUN_00403ed4 @ 00403ed4 size=644

undefined4 FUN_00403ed4(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_820 [2048];
  
  memset(auStack_820,0,0x800);
  if (*DAT_0041787c != 0) {
    DAT_00417380 = 5;
    return 1;
  }
  while (FUN_00404d88("recbak.cifs","cifs_init",0x173,"gateway: [%s]",DAT_00417870 + 0x3e0),
        *(char *)(DAT_00417870 + 0x3e0) == '\0') {
    sleep(2);
  }
  while( true ) {
    iVar3 = FUN_0040387c(auStack_820);
    FUN_00404d88("recbak.cifs","cifs_init",0x17f,"is miwifi: %d",iVar3);
    if (0 < iVar3) {
      while( true ) {
        piVar1 = DAT_0041787c;
        iVar3 = FUN_00402dc4();
        piVar2 = DAT_0041787c;
        piVar1[1] = iVar3;
        FUN_00404d88("recbak.cifs","cifs_init",400,"get_date: %d",piVar2[1]);
        if (0x1339e64 < DAT_0041787c[1]) break;
        sleep(2);
      }
      iVar3 = access("/tmp/cifs",0);
      if (iVar3 == -1) {
        system("insmod /home/app/localko/md4.ko");
        system("insmod /home/app/localko/cifs.ko");
        mkdir("/tmp/cifs",0x1ed);
      }
      else {
        umount_cifs();
        memset(DAT_0041787c + 0x24,0,0x50);
        piVar1 = DAT_0041787c;
        DAT_0041787c[0x28] = -1;
        piVar1[0x32] = -1;
      }
      XiaoMi(auStack_820);
      mount_fail();
      *DAT_0041787c = 1;
      return 1;
    }
    if (iVar3 == 0) break;
    sleep(2);
  }
  send_mq_msg(1,0,0x5000,0,"not_miwifi");
  return 0;
}



// ==== FUN_004047c0 @ 004047c0 size=120

void FUN_004047c0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + param_2 + 1);
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    if (cVar1 == '/') {
      *pcVar2 = '\0';
      mkdir(param_1,0x1ff);
      *pcVar2 = '/';
    }
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  mkdir(param_1,0x1ff);
  return;
}



// ==== FUN_00404838 @ 00404838 size=120

undefined8 FUN_00404838(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  int local_c;
  
  iVar2 = clock_gettime(4,&local_10);
  if (iVar2 == 0) {
    uVar1 = (uint)((longlong)local_10 * 1000);
    uVar3 = uVar1 + local_c / 1000000;
    iVar2 = (uint)(uVar3 < uVar1) +
            (int)((ulonglong)((longlong)local_10 * 1000) >> 0x20) + (local_c / 1000000 >> 0x1f);
  }
  else {
    uVar3 = 0xffffffff;
    iVar2 = -1;
  }
  return CONCAT44(iVar2,uVar3);
}



// ==== FUN_004048b0 @ 004048b0 size=240

int FUN_004048b0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_14;
  
  iVar5 = (int)*(char *)(DAT_00417870 + 0x98e);
  if (((iVar5 != DAT_00417390) &&
      (bVar1 = DAT_00417390 != -1, bVar2 = DAT_00417390 < iVar5, DAT_00417390 = iVar5, bVar1)) &&
     (bVar2)) {
    param_1 = -1;
  }
  if (iVar5 == 1) {
    iVar5 = 0x93a80;
  }
  else if (iVar5 == 2) {
    iVar5 = 0x278d00;
  }
  else {
    if (iVar5 != 0) {
      return param_1;
    }
    iVar5 = 0x15180;
  }
  local_14 = time(0);
  local_14 = local_14 + *(int *)(DAT_00417870 + 0x4b4);
  localtime_r(&local_14,&local_40);
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  iVar3 = mktime(&local_40);
  iVar4 = iVar3 - iVar5;
  if (iVar3 - iVar5 < param_1) {
    iVar4 = param_1;
  }
  return iVar4;
}



// ==== FUN_004049a0 @ 004049a0 size=120

int FUN_004049a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = open(param_1,2);
  if (iVar1 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = mmap(0,param_2,3,1,iVar1,0);
    close(iVar1);
    if (iVar2 == -1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



// ==== FUN_00404a18 @ 00404a18 size=96

void FUN_00404a18(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x1ff;
  if (param_1 + 0x1ff < 0) {
    iVar4 = param_1 + 0x3fe;
  }
  puVar1 = (uint *)(DAT_0041787c + (uint)(*(int *)(DAT_0041787c + 0x8c) != 0) * 0x28 + 0x90);
  uVar3 = *puVar1;
  uVar2 = uVar3 + (iVar4 >> 9);
  *puVar1 = uVar2;
  puVar1[1] = (uint)(uVar2 < uVar3) + puVar1[1] + (iVar4 >> 0x1f);
  return;
}



// ==== FUN_00404a78 @ 00404a78 size=376

void FUN_00404a78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = opendir();
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + param_2) = 0x2f;
LAB_00404adc:
  do {
    iVar2 = readdir(iVar1);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + param_2) = 0;
        closedir(iVar1);
        remove(param_1);
        return;
      }
      if ((*(char *)(iVar2 + 0xb) == '.') &&
         ((*(char *)(iVar2 + 0xc) == '\0' ||
          ((*(char *)(iVar2 + 0xc) == '.' && (*(char *)(iVar2 + 0xd) == '\0'))))))
      goto LAB_00404adc;
      iVar3 = strlen(iVar2 + 0xb);
      iVar4 = param_2 + 1 + iVar3;
      if (0x3ff < iVar4) goto LAB_00404adc;
      memcpy(param_1 + param_2 + 1,iVar2 + 0xb,iVar3 + 1);
      if (*(char *)(iVar2 + 10) == '\x04') break;
      remove();
      iVar2 = readdir(iVar1);
    }
    FUN_00404a78(param_1,iVar4);
  } while( true );
}



// ==== FUN_00404bf0 @ 00404bf0 size=124

undefined4 FUN_00404bf0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = open(param_1,0x101,0x1a4);
  if (iVar1 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = flock(iVar1,6);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)__errno_location();
    uVar3 = 1;
    if (*piVar2 != 0xb) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



// ==== FUN_00404c6c @ 00404c6c size=284

undefined4 FUN_00404c6c(int *param_1)

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
    acStack_76[0] = s__tmp_logsock_00406948[0];
    acStack_76[1] = s__tmp_logsock_00406948[1];
    acStack_76[2] = s__tmp_logsock_00406948[2];
    acStack_76[3] = s__tmp_logsock_00406948[3];
    acStack_72[0] = s__tmp_logsock_00406948[4];
    acStack_72[1] = s__tmp_logsock_00406948[5];
    acStack_72[2] = s__tmp_logsock_00406948[6];
    acStack_72[3] = s__tmp_logsock_00406948[7];
    local_6e[0] = s__tmp_logsock_00406948[8];
    local_6e[1] = s__tmp_logsock_00406948[9];
    local_6e[2] = s__tmp_logsock_00406948[10];
    local_6e[3] = s__tmp_logsock_00406948[0xb];
    local_6a = s__tmp_logsock_00406948[0xc];
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



// ==== FUN_00404d88 @ 00404d88 size=536

void FUN_00404d88(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  if (DAT_00417888 == (undefined4 *)0x0) {
    iVar1 = FUN_00404c6c(&DAT_004178a0);
    if (iVar1 == 0) {
      DAT_00417888 = (undefined4 *)&DAT_004178a0;
    }
    else if (DAT_00417888 == (undefined4 *)0x0) goto LAB_00404ed8;
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
  iVar1 = sendto(*DAT_00417888,&local_2828,uVar2 + 4,0x40,DAT_00417888 + 2,DAT_00417888[1]);
  if (0 < iVar1) {
    return;
  }
LAB_00404ed8:
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



// ==== FUN_00404fa0 @ 00404fa0 size=48

void FUN_00404fa0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = popen(param_1,&DAT_004069e4);
  if (iVar1 != 0) {
    pclose(iVar1);
    return;
  }
  return;
}



// ==== FUN_00404fd0 @ 00404fd0 size=496

int FUN_00404fd0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_a8 [32];
  uint local_28 [2];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = popen(param_1,&DAT_004069e4);
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
      FUN_00404fa0("killall cloudAPI");
      FUN_00404fa0("killall cloudAPI");
      FUN_00404fa0("killall cloudAPI");
    }
  }
  return -1;
}



// ==== FUN_004051c0 @ 004051c0 size=88

int FUN_004051c0(int *param_1,undefined4 param_2)

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



// ==== FUN_00405218 @ 00405218 size=44

undefined4 FUN_00405218(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != -1) && (param_3 < 0x201)) {
    uVar1 = mq_send();
    return uVar1;
  }
  return 0xffffffff;
}



// ==== FUN_00405244 @ 00405244 size=244

int FUN_00405244(undefined4 param_1,undefined4 param_2)

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



// ==== FUN_00405338 @ 00405338 size=168

int FUN_00405338(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = open(param_1,0x102,0x1ff);
  if (iVar1 == -1) {
    iVar2 = 0;
  }
  else {
    lseek(iVar1,param_2 + -1,0);
    write(iVar1,&DAT_00406050,1);
    iVar2 = mmap(0,param_2,3,1,iVar1,0);
    if (iVar2 == -1) {
      close(iVar1);
      iVar2 = 0;
    }
  }
  return iVar2;
}



// ==== FUN_004053e0 @ 004053e0 size=104

void FUN_004053e0(uint param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1 / 1000;
  local_c = (param_1 % 1000) * 1000;
  select(0,0,0,0,&local_10);
  return;
}



// ==== FUN_00405448 @ 00405448 size=892

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00405448(byte *param_1,int param_2,int param_3)

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
    if (pbVar10 < pbVar5) goto LAB_0040560c;
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
    if (uVar8 - 0x30 < 10) goto LAB_004055ac;
LAB_00405540:
    if (bVar11 == 0x2b) goto LAB_004055ac;
    if (bVar11 == 0x2d) goto LAB_004055ac;
    if ((uVar8 & 0xffffffdf) - 0x41 < 0x1a) goto LAB_004055c8;
LAB_00405564:
    pbVar6 = pbVar5;
    if (bVar11 == 0x22) goto LAB_00405650;
joined_r0x0040556c:
    pbVar5 = pbVar6;
    if (bVar11 == 0x5b) {
      iVar4 = iVar4 + 1;
      if (pbVar7 != (byte *)0x0) goto LAB_00405584;
      pbVar7 = pbVar6;
      goto LAB_00405584;
    }
LAB_00405574:
    if (bVar11 != 0x7b) goto LAB_00405668;
    iVar9 = iVar9 + 1;
    pbVar6 = pbVar5;
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = pbVar5;
    }
LAB_00405584:
    pbVar5 = pbVar6 + 1;
LAB_00405588:
    do {
      if (pbVar10 < pbVar5) goto LAB_00405618;
      bVar11 = *pbVar5;
      uVar8 = (uint)bVar11;
      if (9 < uVar8 - 0x30) goto LAB_00405540;
LAB_004055ac:
      if (pbVar7 != (byte *)0x0) {
LAB_004055d0:
        pbVar6 = pbVar5;
        if (bVar11 != 0x22) goto joined_r0x0040556c;
LAB_00405658:
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (*pbVar7 != 0x22) goto LAB_00405668;
          pbVar6 = pbVar5;
          if (iVar3 != 0) {
            if (bVar11 == 0x5d) goto LAB_00405670;
            goto LAB_0040572c;
          }
          goto joined_r0x004055f8;
        }
        if (*pbVar7 != 0x22) goto LAB_00405574;
LAB_004055f0:
        pbVar6 = pbVar7;
        if (pbVar5 != (byte *)0x0) goto joined_r0x004055f8;
        goto LAB_00405618;
      }
      bVar1 = true;
      pbVar7 = pbVar5;
      if (0x19 < (uVar8 & 0xffffffdf) - 0x41) goto LAB_00405564;
LAB_004055c8:
      if (pbVar7 != (byte *)0x0) goto LAB_004055d0;
      bVar2 = true;
      pbVar7 = pbVar5;
      pbVar6 = pbVar5;
      if (bVar11 != 0x22) goto joined_r0x0040556c;
LAB_00405650:
      if (pbVar7 != (byte *)0x0) goto LAB_00405658;
      iVar3 = iVar3 + 1;
      pbVar7 = pbVar5;
LAB_00405668:
      pbVar6 = pbVar5;
      if (bVar11 != 0x5d) {
LAB_0040572c:
        if (bVar11 == 0x7d) {
          if (!bVar1) {
            if (!bVar2) {
              iVar9 = iVar9 + -1;
              if (*pbVar7 != 0x7b) goto LAB_00405584;
              pbVar5 = pbVar6 + 1;
              if (iVar9 == 0) {
                bVar2 = false;
                bVar1 = false;
                pbVar5 = pbVar6;
                goto joined_r0x004055f8;
              }
              goto LAB_00405588;
            }
LAB_00405790:
            bVar1 = false;
          }
        }
        else {
          if (bVar11 != 0x2c) goto LAB_00405584;
          if (!bVar1) {
            pbVar5 = pbVar6 + 1;
            if (bVar2) goto LAB_00405790;
            goto LAB_00405588;
          }
        }
LAB_00405794:
        pbVar5 = pbVar6 + -1;
        goto LAB_004055f0;
      }
LAB_00405670:
      if (bVar1) goto LAB_00405794;
      if (bVar2) goto LAB_00405790;
      iVar4 = iVar4 + -1;
      if (*pbVar7 != 0x5b) goto LAB_00405584;
      pbVar5 = pbVar6 + 1;
      if (iVar4 == 0) {
        bVar2 = false;
        bVar1 = false;
        pbVar5 = pbVar6;
        goto joined_r0x004055f8;
      }
    } while( true );
  }
LAB_0040560c:
  bVar2 = false;
  bVar1 = false;
  pbVar7 = (byte *)0x0;
LAB_00405618:
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
joined_r0x004055f8:
  if (pbVar6 == (byte *)0x0) {
    return 0;
  }
  if (!bVar1) {
    bVar1 = pbVar5 < pbVar7;
    if (bVar2) goto LAB_004056cc;
    pbVar7 = pbVar7 + 1;
    pbVar5 = pbVar5 + -1;
  }
  bVar1 = pbVar5 < pbVar7;
LAB_004056cc:
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



// ==== FUN_004057d8 @ 004057d8 size=1480

void FUN_004057d8(int param_1,uint param_2,uint param_3,uint param_4)

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
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_004173c4[param_3 >> iVar1] + iVar1);
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
      uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_004173c4[param_3 >> iVar1] + iVar1);
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
    uVar2 = 0x20 - ((uint)(byte)PTR___clz_tab_004173c4[param_4 >> iVar1] + iVar1);
    if ((uVar2 != 0) &&
       ((param_4 << (uVar2 & 0x1f) |
        param_3 >> ((uint)(byte)PTR___clz_tab_004173c4[param_4 >> iVar1] + iVar1 & 0x1f)) >> 0x10 ==
        0)) {
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
      trap(0x1c00);
    }
  }
  return;
}



// ==== FUN_00405da0 @ 00405da0 size=72

void FUN_00405da0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_004171b4;
  pcVar2 = DAT_004171b4;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



