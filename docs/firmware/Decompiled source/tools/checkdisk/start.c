/* checkdisk — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "checkdisk.h"

// ==== _init @ 004009dc size=72

void _init(void)

{
  FUN_004010fc();
  FUN_00402370();
  return;
}



// ==== _ftext @ 00400a30 size=1324

undefined4 _ftext(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_28d8 [10240];
  undefined1 auStack_d8 [128];
  char local_58 [64];
  
  memset(local_58,0,0x40);
  memset(auStack_28d8,0,0x2800);
  iVar6 = 0x1e;
  DAT_004131a0 = FUN_00402258("/dev/mtdblock7",0x65c);
  if (DAT_004131a0 == 0) {
    FUN_00401e20("checkdisk.c",&DAT_00402ae8,0x177,"create_sharemem /dev/mtdblock7 fail");
    uVar5 = 0xffffffff;
  }
  else {
    do {
      iVar1 = FUN_004011d8(local_58,0x40);
      iVar6 = iVar6 + -1;
      if (iVar1 != 0x271c) {
        iVar6 = get_tfcard_size_v2();
        if (*(int *)(DAT_004131a0 + 0x128) == 1) {
          FUN_00402068("fdisk /dev/mmcblk0 < /home/base/tools/fdisk.input",auStack_28d8,0x2800,0x3c)
          ;
          FUN_00402068("mdev -s",auStack_28d8,0x2800,0x3c);
          uVar5 = 8;
          if (0xfff < iVar6) {
            if (iVar6 < 0x2000) {
              uVar5 = 0x10;
            }
            else {
              uVar5 = 0x20;
              if (0x3fff < iVar6) {
                uVar5 = 0x40;
              }
            }
          }
          memset(auStack_d8,0,0x80);
          snprintf(auStack_d8,0x80,"%s -s %d /dev/mmcblk0p1","mkfs.vfat",uVar5);
          FUN_00402068(auStack_d8,auStack_28d8,0x2800,0x78);
          *(undefined4 *)(DAT_004131a0 + 0x128) = 0;
        }
        if (iVar6 < 0xc00) {
          iVar1 = 0x2714;
          FUN_00401e20("checkdisk.c",&DAT_00402ae8,0x1be,
                       "ERROR! TF card space is too small: %d MB\n",iVar6);
          goto LAB_00400b18;
        }
        iVar2 = get_fs_type();
        if (iVar2 - 1U < 2) {
          umount("/tmp/sd");
          if (iVar2 == 1) {
            iVar3 = mount("/dev/mmcblk0p1","/tmp/sd",&DAT_00402558,0,0);
          }
          else {
            if (iVar2 != 2) {
              umount("/tmp/sd");
              goto LAB_00400c4c;
            }
            iVar3 = mount("/dev/mmcblk0p1","/tmp/sd","exfat",0,0);
          }
          if (iVar3 == -1) {
            iVar1 = 0x2712;
            FUN_00401e20("checkdisk.c",&DAT_00402ae8,0x1de,&DAT_004029ac);
            goto LAB_00400b18;
          }
          umount("/tmp/sd");
          if (iVar2 == 1) goto LAB_00400e6c;
          if (iVar2 == 2) {
            iVar1 = check_partion_exfat();
          }
        }
        else {
          FUN_00401e20("checkdisk.c",&DAT_00402ae8,0x1c6,"FS format error.");
          FUN_00402068("rmmod exfat.ko",auStack_28d8,0x2800,0x3c);
          if (*(int *)(DAT_004131a0 + 0x128) == 0) {
            iVar1 = 0x2712;
            *(undefined4 *)(DAT_004131a0 + 0xdc) = 0x2712;
            goto LAB_00400b18;
          }
          umount("/tmp/sd");
          umount("/tmp/sd");
          iVar1 = 0x2712;
          if (iVar2 == 1) {
LAB_00400e6c:
            uVar4 = get_cluster_size();
            if (((((iVar6 < 0x1000) && (uVar4 < 0x1000)) ||
                 ((iVar6 - 0x1001U < 0xfff && (uVar4 < 0x2000)))) ||
                ((iVar6 - 0x2001U < 0x1fff && (uVar4 < 0x4000)))) ||
               ((iVar6 - 0x4001U < 0x3fff && (uVar4 < 0x8000)))) {
              FUN_00401e20("checkdisk.c",&DAT_00402ae8,0x1f8,
                           "FS cluster size is too little. cluster_size = %d ",uVar4);
              iVar1 = 0x2712;
              goto LAB_00400b18;
            }
            printf(&DAT_00402a10,&DAT_00402ae0,0x1fc,uVar4 >> 10);
            iVar1 = check_partion_vfat();
          }
        }
LAB_00400c4c:
        if (*(int *)(DAT_004131a0 + 0x128) == 1) {
          *(undefined4 *)(DAT_004131a0 + 0x128) = 0;
        }
        goto LAB_00400b18;
      }
      FUN_00402300(100);
    } while (iVar6 != 0);
    printf(&DAT_004028d4,&DAT_00402ae0,0x183);
    if (*(int *)(DAT_004131a0 + 0x128) == 1) {
      *(undefined4 *)(DAT_004131a0 + 0x128) = 0;
    }
LAB_00400b18:
    printf("checkdisk, main() ret_status(%d) \n",iVar1);
    if (*(int *)(DAT_004131a0 + 0xdc) != iVar1) {
      FUN_00401e20("checkdisk.c",&DAT_00402ae8,0x213,
                   "Need update tf_status.stat,\nold stat : %d, new stat : %d",
                   *(int *)(DAT_004131a0 + 0xdc),iVar1);
      *(int *)(DAT_004131a0 + 0xdc) = iVar1;
    }
    iVar6 = DAT_004131a0;
    if (local_58[0] != '\0') {
      uVar5 = strlen(local_58);
      iVar1 = strncmp(iVar6 + 0xe4,local_58,uVar5);
      if (iVar1 != 0) {
        FUN_00401e20("checkdisk.c",&DAT_00402ae8,0x21a,
                     "Need update tf_status.cid,\nold cid : %s,\nnew cid : %s",iVar6 + 0xe4,local_58
                    );
        snprintf(DAT_004131a0 + 0xe4,0x40,&DAT_00402ad0,local_58);
      }
    }
    munmap(DAT_004131a0,0x65c);
    uVar5 = 0;
  }
  return uVar5;
}



// ==== __uClibc_main @ 004023c0 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_0040104c();
  return;
}



// ==== _fini @ 004023e0 size=56

void _fini(void)

{
  FUN_0040104c();
  return;
}



