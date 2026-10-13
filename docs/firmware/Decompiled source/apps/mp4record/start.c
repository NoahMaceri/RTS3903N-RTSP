/* mp4record — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "mp4record.h"

// ==== _init @ 00400d88 size=72

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_0040130c();
  iVar1 = FUN_00408e40();
  return iVar1;
}



// ==== _ftext @ 00400dd0 size=12

void _ftext(void)

{
  FUN_00404de0();
  return;
}



// ==== main @ 00400e30 size=828

undefined4 main(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20 [2];
  
  signal(0x12,1);
  FUN_004050a0(&DAT_0041a2d0,0x13c,0,0x13c);
  iVar1 = FUN_0040540c(&DAT_0041a2d0,"/ipc_dispatch");
  if (iVar1 < 0) {
    FUN_004051f4("mp4record.c",&DAT_00409674,0x4e7,"init_mqueue MQ_NAME_DISPATCH fail");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0040540c(&DAT_0041a2d4,"/ipc_rcd");
    if (iVar1 < 0) {
      FUN_004051f4("mp4record.c",&DAT_00409674,0x4ec,"init_mqueue MQ_NAME_RCD fail");
      uVar2 = 0xffffffff;
    }
    else {
      DAT_0041a2d8 = FUN_00405490("/tmp/mmap.info",0xaa0);
      if (DAT_0041a2d8 == 0) {
        uVar2 = 0xffffffff;
        FUN_004051f4("mp4record.c",&DAT_00409674,0x4f3,"create_sharemem MMAP_FILE_NAME fail");
      }
      else {
        while ((*(int *)(DAT_0041a2d8 + 0x5c8) != 1 || (*(int *)(DAT_0041a2d8 + 0x5bc) != 0))) {
          ms_sleep(100);
        }
        mmap_init("/tmp/sd/record","/tmp/record_event");
        FUN_004051f4("mp4record.c",&DAT_00409674,0x50d,"recordevent_init finish");
        while (iVar1 = time(0), iVar1 < 0x59a83281) {
          ms_sleep(100);
        }
        uVar2 = *(undefined4 *)(DAT_0041a2d8 + 0x5c8);
        uVar3 = *(undefined4 *)(DAT_0041a2d8 + 0x5bc);
        FUN_004051f4("mp4record.c",&DAT_00409674,0x518,"init_finish(%d), start_with_reset(%d)",uVar2
                     ,uVar3);
        FUN_004051f4("mp4record.c",&DAT_00409674,0x51a,"mp4 mode start init_finish");
        while (iVar1 = FUN_00400e10(), iVar1 != 0) {
          ms_sleep(100);
        }
        FUN_004051f4("mp4record.c",&DAT_00409674,0x520,"fshare_open ok",uVar2,uVar3);
        iVar1 = *(int *)(DAT_0041a2d8 + 0x608);
        while (iVar1 == 1) {
          ms_sleep(1000);
          iVar1 = *(int *)(DAT_0041a2d8 + 0x608);
        }
        iVar1 = FUN_0040192c();
        if (iVar1 == 0) {
          iVar1 = pthread_create(local_20,0,FUN_00401520,0);
          if (iVar1 == 0) {
            pthread_detach(local_20[0]);
          }
          iVar1 = *(int *)(DAT_0041a2d8 + 0x5ac);
          while (iVar1 < 1) {
            ms_sleep(1000);
            iVar1 = *(int *)(DAT_0041a2d8 + 0x5ac);
          }
          FUN_004051f4("mp4record.c",&DAT_00409674,0x532,"mp4 mode got sd exist");
          iVar1 = access("/tmp/sd/record",0);
          if (iVar1 == -1) {
            mkdir("/tmp/sd/record",0x1ff);
          }
          FUN_0040236c();
          record_file();
          uVar2 = 0;
        }
        else {
          FUN_004051f4("mp4record.c",&DAT_00409674,0x528,"record_init failed");
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}



// ==== _fini @ 00408f30 size=56

void _fini(void)

{
  FUN_0040125c();
  return;
}



