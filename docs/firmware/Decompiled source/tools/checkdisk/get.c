/* checkdisk — "get" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "checkdisk.h"

// ==== get_tfcard_size_v2 @ 00401294 size=188

uint get_tfcard_size_v2(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_19008 [102400];
  
  memset(auStack_19008,0,0x19000);
  FUN_00402068("cat /sys/block/mmcblk0/size",auStack_19008,0x19000,10);
  lVar2 = atoll(auStack_19008);
  if (lVar2 < 0) {
    lVar2 = lVar2 + 0x7ff;
  }
  uVar1 = (int)((ulonglong)lVar2 >> 0x20) << 0x15 | (uint)lVar2 >> 0xb;
  FUN_00401e20("checkdisk.c","get_tfcard_size_v2",0x6a,"TF card total size : %d MB\n",uVar1);
  return uVar1;
}



// ==== get_fs_type @ 004018f8 size=496

undefined4 get_fs_type(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar1 = FUN_00401140();
  if (iVar1 == -1) {
    iVar1 = open("/dev/mmcblk0p1",0);
    if (iVar1 == -1) {
      puVar3 = (undefined4 *)__errno_location();
      uVar4 = strerror(*puVar3);
      FUN_00401e20("checkdisk.c","get_fs_type",0x116,"Failed to open \'%s\': %s","/dev/mmcblk0p1",
                   uVar4);
      return 3;
    }
    FUN_00401e20("checkdisk.c","get_fs_type",0x11b,"\'%s\' is write-protected, mounting read-only",
                 "/dev/mmcblk0p1");
  }
  pread(iVar1,&local_28,8,0x52);
  iVar2 = memcmp(&local_28,"FAT32   ",8);
  if (iVar2 == 0) {
    FUN_00401e20("checkdisk.c","get_fs_type",0x122,"FS TYPE : VFAT\n");
    close(iVar1);
    return 1;
  }
  pread(iVar1,&local_28,8,3);
  iVar2 = memcmp(&local_28,"EXFAT   ",8);
  if (iVar2 == 0) {
    FUN_00401e20("checkdisk.c","get_fs_type",0x12a,"FS TYPE :EXFAT\n");
    close(iVar1);
    return 2;
  }
  FUN_00401e20("checkdisk.c","get_fs_type",0x12f,"FS TYPE ERROR!\n");
  close(iVar1);
  return 3;
}



// ==== get_cluster_size @ 00401ae8 size=540

int get_cluster_size(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ushort local_20;
  byte local_1e [6];
  
  iVar1 = FUN_00401140();
  if (iVar1 == -1) {
    iVar1 = open("/dev/mmcblk0p1",0);
    if (iVar1 == -1) {
      puVar2 = (undefined4 *)__errno_location();
      uVar3 = strerror(*puVar2);
      FUN_00401e20("checkdisk.c","get_cluster_size",0x142,"Failed to open \'%s\': %s",
                   "/dev/mmcblk0p1",uVar3);
      return -1;
    }
    FUN_00401e20("checkdisk.c","get_cluster_size",0x147,
                 "\'%s\' is write-protected, mounting read-only","/dev/mmcblk0p1");
  }
  pread(iVar1,&local_20,2,0xb);
  uVar4 = (uint)local_20;
  if (uVar4 == 0) {
    iVar5 = 0;
    FUN_00401e20("checkdisk.c","get_cluster_size",0x150,"Logical sector size is zero.");
    pread(iVar1,local_1e,1,0xd);
    printf(&DAT_004027e4,"get_cluster_size",0x15d,0,local_1e[0]);
  }
  else {
    pread(iVar1,local_1e,1,0xd);
    if ((local_20 & 0x1ff) != 0) {
      FUN_00401e20("checkdisk.c","get_cluster_size",0x159,
                   "Logical sector size (%d bytes) is not a multiple of the physical sector size.",
                   uVar4);
    }
    printf(&DAT_004027e4,"get_cluster_size",0x15d,uVar4,local_1e[0]);
    iVar5 = local_1e[0] * uVar4;
    if (iVar5 != 0) goto LAB_00401ba0;
  }
  FUN_00401e20("checkdisk.c","get_cluster_size",0x161,"Cluster size is zero.");
LAB_00401ba0:
  FUN_00401e20("checkdisk.c","get_cluster_size",0x163,"cluster_size = %d Bytes\n",iVar5);
  close(iVar1);
  return iVar5;
}



