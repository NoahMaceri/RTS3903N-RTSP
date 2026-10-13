/* arp_test — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "arp_test.h"

// ==== _init @ 0040085c size=72

void _init(void)

{
  FUN_00400d5c();
  FUN_00401830();
  return;
}



// ==== _ftext @ 004008b0 size=776

undefined4 _ftext(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  char local_a8 [100];
  undefined4 local_44;
  undefined2 local_40;
  int local_3c;
  undefined4 local_38 [2];
  int local_30;
  undefined4 local_2c;
  
  local_44 = 0;
  local_40 = 0;
  local_38[0] = 0;
  memset(local_a8,0,100);
  pcVar8 = local_a8;
  do {
    *pcVar8 = '\x01';
    pcVar8 = pcVar8 + 1;
  } while ((char *)&local_44 != pcVar8);
  iVar2 = FUN_004016b0(&__bss_start,"/ipc_dispatch");
  if (iVar2 < 0) {
    FUN_00401498("arp_test.c",&DAT_004019e8,0x126,"init_mqueue MQ_NAME_DISPATCH fail");
  }
  else {
    DAT_004120d0 = FUN_00401734("/tmp/mmap.info",0xaa0);
    if (DAT_004120d0 != 0) {
      iVar3 = *(int *)(DAT_004120d0 + 0x9e8);
      uVar5 = 0;
      iVar2 = 100;
      bVar7 = true;
      iVar6 = 0;
      do {
        if ((iVar3 == 2) || (*(int *)(DAT_004120d0 + 0x584) != 1)) {
          bVar7 = true;
          sleep(1);
        }
        else {
          if (bVar7) {
            iVar3 = FUN_0040116c(&local_44,local_38);
            if ((iVar3 == 0) && (pcVar8 = local_a8, *(char *)(DAT_004120d0 + 0x3e0) != '\0')) {
              local_3c = 0;
              do {
                *pcVar8 = '\x01';
                pcVar8 = pcVar8 + 1;
              } while ((char *)&local_44 != pcVar8);
              iVar2 = 100;
              inet_pton(2,DAT_004120d0 + 0x3e0,&local_3c);
              iVar6 = local_3c;
              bVar7 = false;
              FUN_00400da0(&local_44,local_38[0],local_3c);
              goto LAB_00400988;
            }
          }
          else {
LAB_00400988:
            uVar5 = uVar5 + 1;
            arp_send();
            iVar3 = 100;
            do {
              iVar4 = FUN_00400fb8();
              if (((0 < iVar4) && ((ushort)(DAT_00412114 >> 8 | DAT_00412114 << 8) == 2)) &&
                 (DAT_0041211c == iVar6)) {
                iVar4 = iVar3 * 100000;
                local_2c = 1;
                local_30 = 1;
                goto LAB_00400a04;
              }
              iVar3 = iVar3 + -1;
              iVar4 = 0;
            } while (iVar3 != 0);
            local_2c = 0;
            local_30 = 0;
LAB_00400a04:
            usleep(iVar4);
            cVar1 = local_a8[uVar5 % 100];
            local_a8[uVar5 % 100] = (char)local_2c;
            iVar3 = iVar2 - cVar1;
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            iVar2 = 100;
            if (iVar3 + local_30 < 0x65) {
              iVar2 = iVar3 + local_30;
            }
            if (uVar5 == (uVar5 / 3) * 3) {
              send_arp_status_msg(__bss_start,iVar2);
            }
          }
          sleep(1);
        }
        iVar3 = *(int *)(DAT_004120d0 + 0x9e8);
      } while( true );
    }
    FUN_00401498("arp_test.c",&DAT_004019e8,300,"create_sharemem MMAP_FILE_NAME fail");
  }
  return 0xffffffff;
}



// ==== __uClibc_main @ 00401880 size=32

void __uClibc_main(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ff0))();
  FUN_00400cac();
  return;
}



// ==== _fini @ 004018a0 size=56

void _fini(void)

{
  FUN_00400cac();
  return;
}



