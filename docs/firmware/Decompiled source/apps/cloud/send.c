/* cloud — "send" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloud.h"

// ==== send_apmode_result @ 004016e4 size=308

int send_apmode_result(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  uVar3 = 0x106;
  if (param_1 != 1) {
    uVar3 = 0x107;
  }
  local_20 = (uint)uVar3;
  local_24 = 4;
  local_28 = 1;
  local_1c = 0;
  iVar1 = FUN_0040b6d4(DAT_00423a40,&local_28,0x10);
  uVar4 = local_20 & 0xffff;
  iVar5 = iVar1;
  FUN_0040b244("cloud.c","send_apmode_result",0x95d,"mqueue_send(0x%x), ret=%d",uVar4,iVar1);
  if ((-1 < iVar1) &&
     (iVar2 = 99, *(char *)(DAT_00423a48 + 0x9f0) != *(char *)(DAT_00423a48 + 0xa33))) {
    while( true ) {
      iVar2 = iVar2 + -1;
      usleep(10000);
      if (*(char *)(DAT_00423a48 + 0x9f0) == *(char *)(DAT_00423a48 + 0xa33)) break;
      if (iVar2 == 0) {
        FUN_0040b244("cloud.c","send_apmode_result",0x964,"Wait ap_enable timeout",uVar4,iVar5);
        return -1;
      }
    }
  }
  return iVar1;
}



// ==== send_vc_capture_end_msg @ 004066fc size=184

void send_vc_capture_end_msg(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_00401918(DAT_00423a40,0x4018,0,0);
  if (iVar1 < 0) {
    uVar2 = 0x1045;
    pcVar3 = "send_vc_capture_end_msg send_msg fail!\n";
  }
  else {
    iVar1 = 0x32;
    if (*(short *)(DAT_00423a48 + 0x9d0) != 0) {
      do {
        iVar1 = iVar1 + -1;
        FUN_0040b864(0x14);
        if (*(short *)(DAT_00423a48 + 0x9d0) == 0) break;
      } while (iVar1 != 0);
    }
    uVar2 = 0x104c;
    pcVar3 = "send_vc_capture_end_msg send_msg ok!\n";
  }
  FUN_0040b244("cloud.c","send_vc_capture_end_msg",uVar2,pcVar3);
  return;
}



// ==== send_vc_record_end_msg @ 004067b4 size=184

void send_vc_record_end_msg(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_00401918(DAT_00423a40,0x4020,0,0);
  if (iVar1 < 0) {
    uVar2 = 0x1054;
    pcVar3 = "send_vc_record_end_msg send_msg fail!\n";
  }
  else {
    iVar1 = 0x32;
    if (*(short *)(DAT_00423a48 + 0x9d2) != 0) {
      do {
        iVar1 = iVar1 + -1;
        FUN_0040b864(0x14);
        if (*(short *)(DAT_00423a48 + 0x9d2) == 0) break;
      } while (iVar1 != 0);
    }
    uVar2 = 0x105b;
    pcVar3 = "send_vc_record_end_msg send_msg ok!\n";
  }
  FUN_0040b244("cloud.c","send_vc_record_end_msg",uVar2,pcVar3);
  return;
}



