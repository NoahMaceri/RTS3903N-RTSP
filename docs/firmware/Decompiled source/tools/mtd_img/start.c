/* mtd_img — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "mtd_img.h"

// ==== _init @ 00400770 size=72

void _init(void)

{
  FUN_00400c4c();
  FUN_00400c90();
  return;
}



// ==== _ftext @ 004007c0 size=744

undefined4 _ftext(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_328 [256];
  undefined1 auStack_228 [256];
  undefined1 auStack_128 [81];
  undefined1 auStack_d7 [143];
  int local_48;
  
  memset(auStack_228,0,0x100);
  memset(auStack_328,0,0x100);
  if (param_1 == 3) {
    uVar2 = atol(param_2[1]);
    strcpy(auStack_228,param_2[2]);
    iVar3 = libmtd_open();
    if (iVar3 == 0) {
      fwrite("open and init mtd lib fail.\n",1,0x1c,stderr);
      uVar2 = 0xffffffff;
    }
    else {
      snprintf(auStack_328,0x100,"/dev/mtd%d",uVar2);
      iVar4 = mtd_dev_present(iVar3,uVar2);
      if (iVar4 == 0) {
        fprintf(stderr,"mtd%d is not present.\n",0);
      }
      else {
        iVar4 = mtd_get_dev_info(iVar3,auStack_328,auStack_128);
        if (iVar4 < 0) {
          fprintf(stderr,"get mtd%d info fail.\n",0);
        }
        else {
          printf("mtd name: %s\n",auStack_d7);
          iVar4 = open(auStack_328,2);
          if (iVar4 < 0) {
            fprintf(stderr,"open mtd%d fail.\n",0);
          }
          else {
            printf("total blocks %d, erase block ",local_48);
            iVar6 = 0;
            iVar7 = 1;
            if (0 < local_48) {
              do {
                fflush(stdout);
                printf("%3d/%3d",iVar7,local_48);
                fflush(stdout);
                iVar5 = mtd_erase(iVar3,auStack_128,iVar4,iVar6);
                printf(&DAT_00400dfc);
                if (iVar5 < 0) {
                  fprintf(stderr,"erase block%d fail.\n",iVar6);
                }
                bVar1 = iVar7 < local_48;
                iVar6 = iVar7;
                iVar7 = iVar7 + 1;
              } while (bVar1);
            }
            putchar(10);
            printf("writing image file....");
            fflush(stdout);
            iVar6 = mtd_write_img(auStack_128,iVar4,0,0,auStack_228);
            if (iVar6 < 0) {
              fprintf(stderr,"write %s fail.\n",auStack_228);
              close(iVar4);
              libmtd_close(iVar3);
              return 0xffffffff;
            }
            putchar(10);
            close(iVar4);
          }
        }
      }
      libmtd_close(iVar3);
      uVar2 = 0;
    }
  }
  else {
    printf("usage: %s mtdnum imagefile\n",*param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== __uClibc_main @ 00400ce0 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00400b9c();
  return;
}



// ==== _fini @ 00400d00 size=56

void _fini(void)

{
  FUN_00400b9c();
  return;
}



