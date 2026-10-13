/* dispatch — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== _init @ 00401188 size=72

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00401bac();
  iVar1 = FUN_00411f30();
  return iVar1;
}



// ==== main @ 004011d0 size=2104

void main(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 local_2c [2];
  
  signal(0x12,1);
  pthread_mutex_init(&DAT_00426b58,0);
  iVar11 = 0x410000;
  FUN_00410740("dispatch.c",&DAT_00414724,0x1182,"sysversion:%s",&DAT_00413ba8);
  FUN_00410f38();
  FUN_004105ec(&DAT_004263f0,0x768,0,0x768);
  iVar2 = access("/home/app/script/factory_test.sh",0);
  if (iVar2 == 0) {
    iVar2 = access("/tmp/sd/Factory/factory_test.sh",0);
    DAT_00426b50 = (uint)(iVar2 == 0);
  }
  else {
    DAT_00426b50 = 0;
  }
  iVar2 = FUN_00410c4c(&DAT_004263f0,"/ipc_dispatch");
  if (iVar2 < 0) {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x118c,"init_mqueue MQ_NAME_DISPATCH fail");
  }
  iVar3 = FUN_00410c4c(&DAT_004263f4,"/ipc_rmm");
  if (iVar3 < 0) {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x1191,"init_mqueue MQ_NAME_RMM fail");
  }
  iVar4 = FUN_00410c4c(&DAT_004263f8,"/ipc_cloud");
  if (iVar4 < 0) {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x1196,"init_mqueue MQ_NAME_CLOUD fail");
  }
  iVar5 = FUN_00410c4c(&DAT_004263fc,"/ipc_p2p");
  if (iVar5 < 0) {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x119b,"init_mqueue MQ_NAME_P2P fail");
  }
  iVar6 = FUN_00410c4c(&DAT_00426404,"/ipc_rcd");
  if (iVar6 < 0) {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x11a0,"init_mqueue MQ_NAME_RCD fail");
  }
  iVar7 = FUN_00410c4c(&DAT_00426400,"/ipc_rtmp");
  if (iVar7 < 0) {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x11a5,"init_mqueue MQ_NAME_RTMP fail");
  }
  iVar8 = FUN_00410c4c(&DAT_00426408,"/ipc_dispatch_worker");
  if (iVar8 < 0) {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x11aa,"init_mqueue MQ_NAME_DISPATCH_WORKER fail");
  }
  bVar1 = iVar8 >= 0 &&
          (iVar7 >= 0 && (iVar6 >= 0 && (iVar5 >= 0 && (iVar4 >= 0 && (iVar3 >= 0 && iVar2 >= 0)))))
  ;
  iVar2 = access("/tmp/mmap.info",0);
  if (iVar2 == 0) {
    DAT_0042640c = FUN_00410dc4("/tmp/mmap.info",0xaa0);
    if (DAT_0042640c == 0) {
      bVar1 = false;
      FUN_00410740("dispatch.c",&DAT_0041471c,0x11c0,"create_sharemem MMAP_FILE_NAME fail");
    }
  }
  else {
    DAT_0042640c = FUN_00410dc4("/tmp/mmap.info",0xaa0);
    if (DAT_0042640c == 0) {
      bVar1 = false;
      FUN_00410740("dispatch.c",&DAT_0041471c,0x11b3,"create_sharemem MMAP_FILE_NAME fail");
    }
    else {
      FUN_004105ec(DAT_0042640c,0xaa0,0,0xaa0);
    }
  }
  iVar3 = 0x420000;
  DAT_00426320 = DAT_0042640c + 0x1f5;
  get_productinfo();
  get_config();
  FUN_00401bf0();
  sem_init(&DAT_00426d30,0,0);
  iVar2 = DAT_0042640c;
  *(undefined4 *)(DAT_0042640c + 0x9a8) = 2;
  *(undefined4 *)(iVar2 + 0x4a0) = 0;
  *(undefined4 *)(iVar2 + 0x4a8) = 0;
  *(undefined4 *)(iVar2 + 0x4a4) = 0;
  uVar14 = 2;
  local_2c[0] = 0;
  FUN_00410740("dispatch.c",&DAT_0041471c,0x11e0,"hw_type(%d)\n",2);
  iVar2 = access("/dev/cpld_periph",0);
  if (iVar2 == 0) {
    DAT_00426410 = open("/dev/cpld_periph",2);
  }
  if (DAT_00426410 < 1) {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x11e9,"open_cpld fail",uVar14);
  }
  iVar2 = DAT_00426410;
  *(undefined4 *)(DAT_0042640c + 0x50c) = 1;
  iVar2 = ioctl(iVar2,0x20007015,0);
  if (iVar2 < 0) {
    puVar9 = (undefined4 *)__errno_location();
    uVar10 = *puVar9;
    uVar14 = strerror(uVar10);
    FUN_00410740("dispatch.c",&DAT_00414724,0x1202,"ioctl(%d) error(%d),%s",0x20007015,uVar10,uVar14
                );
  }
  iVar2 = ioctl(DAT_00426410,0x20007016,0);
  if (iVar2 < 0) {
    puVar9 = (undefined4 *)__errno_location();
    uVar10 = *puVar9;
    uVar14 = strerror(uVar10);
    FUN_00410740("dispatch.c",&DAT_00414724,0x1203,"ioctl(%d) error(%d),%s",0x20007016,uVar10,uVar14
                );
  }
  iVar2 = ioctl(DAT_00426410,0x20007013,local_2c);
  if (iVar2 < 0) {
    puVar9 = (undefined4 *)__errno_location();
    uVar10 = *puVar9;
    uVar14 = strerror(uVar10);
    FUN_00410740("dispatch.c",&DAT_00414724,0x1204,"ioctl(%d) error(%d),%s",0x20007013,uVar10,uVar14
                );
  }
  iVar2 = FUN_0040a844();
  if (iVar2 == 0) {
    DAT_00426b54 = 0;
    iVar2 = -1;
    goto LAB_0040152c;
  }
  if ((*(uint *)(DAT_0042640c + 0x218) & 0xffff0000) == 0x32320000) goto LAB_00401644;
  DAT_00426ab0 = 2;
  iVar2 = access("/dev/ssp",0);
  if (iVar2 == 0) {
    iVar2 = open("/dev/ssp",2);
    goto LAB_00401694;
  }
  iVar2 = -1;
  DAT_00426b54 = FUN_0040df64(DAT_00426ab0);
  do {
    FUN_00410740("dispatch.c",&DAT_0041471c,0x121f,"open_ptz fail");
LAB_0040152c:
    do {
      DAT_00426414 = iVar2;
      FUN_0040454c(DAT_0042640c + 0x255,0);
      if (*(char *)(DAT_0042640c + 0x275) != '\0') {
        FUN_0040454c(DAT_0042640c + 0x275,1);
        snprintf(DAT_0042640c + 0x8c,0x80,"%s",DAT_0042640c + 0xc);
      }
      link_audio_file();
      if (*(int *)(DAT_0042640c + 0x604) == 0) {
        iVar2 = ioctl(DAT_00426410,0x2000701c,0);
        if (-1 < iVar2) goto LAB_0040156c;
        iVar3 = 0x2000701c;
        puVar9 = (undefined4 *)__errno_location();
        uVar13 = *puVar9;
        uVar14 = strerror(uVar13);
        uVar15 = 0x2000701c;
        uVar10 = 0x124d;
LAB_00401718:
        FUN_00410740("dispatch.c",iVar11 + 0x4724,uVar10,"ioctl(%d) error(%d),%s",uVar15,uVar13,
                     uVar14);
      }
      else {
        if ((*(int *)(DAT_0042640c + 0x604) == 1) &&
           (iVar2 = ioctl(DAT_00426410,0x2000701b,0), iVar2 < 0)) {
          iVar3 = 0x2000701b;
          puVar9 = (undefined4 *)__errno_location();
          uVar13 = *puVar9;
          uVar14 = strerror(uVar13);
          uVar15 = 0x2000701b;
          uVar10 = 0x1251;
          goto LAB_00401718;
        }
LAB_0040156c:
        iVar3 = 0x20000000;
      }
      if (*(int *)(DAT_0042640c + 0x5bc) != 0) {
        DAT_00426a9c = 7;
      }
      pthread_create(auStack_30,0,&LAB_00402184,0);
      pthread_create(auStack_34,0,&LAB_004094f0,0);
      pthread_create(auStack_38,0,FUN_0040a7dc,0);
      if ((-1 < DAT_00426414) && (DAT_00426ab0 == 2)) {
        pthread_create(auStack_38,0,&LAB_0040d7f0,0);
      }
      iVar11 = 1;
      *(undefined4 *)(DAT_0042640c + 0x5c8) = 1;
      pthread_create(auStack_38,0,&LAB_00402108,0);
      if (bVar1) {
        uVar14 = FUN_00410f4c();
        FUN_00410740("dispatch.c",&DAT_0041471c,0x127d,"init ok, cost time(%d ms)",uVar14);
      }
      else {
        uVar14 = FUN_00410f4c();
        FUN_00410740("dispatch.c",&DAT_0041471c,0x1281,"init fail, cost time(%u ms)",uVar14);
      }
      FUN_004021e4(DAT_0042640c + 0x9f0);
      FUN_00404a28();
LAB_00401644:
      bVar12 = *(char *)(*(int *)(iVar3 + 0x6320) + 1) == '2';
      if ((bool)bVar12) {
        puts("exchange x............ ");
        iVar2 = *(int *)(iVar3 + 0x6320);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0x6320);
      }
      if (*(char *)(iVar2 + 2) == '2') {
        bVar12 = bVar12 | 2;
        puts("exchange y............ ");
      }
      iVar2 = ssp_uart_init(0xb,0x4e,0x30,1,bVar12);
      DAT_00426ab0 = 1;
LAB_00401694:
      DAT_00426b54 = FUN_0040df64(DAT_00426ab0);
    } while (-1 < iVar2);
  } while( true );
}



// ==== _fini @ 00411fa0 size=56

void _fini(void)

{
  FUN_00401afc();
  return;
}



