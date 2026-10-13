/* recbackup — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "recbackup.h"

// ==== _init @ 00401070 size=72

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_0040153c();
  iVar1 = FUN_00405da0();
  return iVar1;
}



// ==== main @ 004010c0 size=724

undefined4 main(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 auStack_30 [28];
  
  signal(0x12,1);
  iVar1 = FUN_00404bf0("/tmp/recbackup.lock");
  if (iVar1 == 0) {
    local_34 = &LAB_00401580;
    local_38 = 0;
    sigemptyset(auStack_30);
    sigaction(1,&local_38,0);
    DAT_00417870 = FUN_00405244("/tmp/mmap.info",0xaa0);
    if (DAT_00417870 == 0) {
      FUN_00404d88("recbak.main",&DAT_00405f5c,0x2f,"get_sharemem MMAP_FILE_NAME fail");
    }
    else {
      DAT_0041787c = FUN_004049a0("/tmp/recbackup.mmap",0xe8);
      if (DAT_0041787c == 0) {
        DAT_0041787c = FUN_00405338("/tmp/recbackup.mmap",0xe8);
        if (DAT_0041787c == 0) {
          FUN_00404d88("recbak.main",&DAT_00405f5c,0x3a,"create_sharemem %s fail",
                       "/tmp/recbackup.mmap");
          goto LAB_004012a0;
        }
        memset(DAT_0041787c,0,0xe8);
        iVar1 = DAT_0041787c;
        *(undefined4 *)(DAT_0041787c + 0xa0) = 0xffffffff;
        *(undefined4 *)(iVar1 + 200) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0xe4) = 0xffffffff;
      }
      else {
        *(undefined4 *)(DAT_0041787c + 0x14) = 0;
      }
      iVar1 = FUN_00403ed4();
      if (0 < iVar1) {
        while ((*(int *)(DAT_00417870 + 0x5c8) != 1 || (*(int *)(DAT_00417870 + 0x5bc) != 0))) {
          FUN_004053e0(100);
        }
        iVar1 = *(int *)(DAT_00417870 + 0x5ac);
        while (iVar1 < 1) {
          FUN_004053e0(1000);
          iVar1 = *(int *)(DAT_00417870 + 0x5ac);
        }
        FUN_00404d88("recbak.main",&DAT_00405f5c,0x5d,"got sd exist");
        while (iVar1 = recordevent_init_read("/tmp/record_event"), iVar1 < 0) {
          FUN_004053e0(100);
        }
        FUN_00404d88("recbak.main",&DAT_00405f5c,99,"recordevent_init_read finish");
        iVar1 = -1;
        FUN_00402828(DAT_00417870 + 0x255);
        FUN_00404d88("recbak.main",&DAT_00405f5c,0x66,"recordbak_init finish");
        do {
          sleep(2);
          iVar2 = FUN_00401790(&local_38);
          if ((iVar2 != -1) && (iVar2 != iVar1)) {
            FUN_00402960(iVar2,local_38);
            iVar1 = iVar2;
          }
          resume_bak();
        } while( true );
      }
      FUN_00404d88("recbak.main",&DAT_00405f5c,0x4b,"cifs_init: %d",iVar1);
    }
  }
  else {
    FUN_00404d88("recbak.main",&DAT_00405f5c,0x26,"instance exist");
  }
LAB_004012a0:
  FUN_00404d88("recbak.main",&DAT_00405f64,0x75,"init fail");
  return 0xffffffff;
}



// ==== _fini @ 00405e10 size=56

void _fini(void)

{
  FUN_0040148c();
  return;
}



