/* arp_test — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "arp_test.h"

// ==== entry @ 00400bc0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_004120c0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004120c4)
            (PTR__ftext_004120b8,param_2,&stack0x00000004,PTR__init_004120bc);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== arp_send @ 00400e84 size=308

int arp_send(void)

{
  int iVar1;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  if (_fdata == -1) {
    _fdata = socket(0x11,10,0x608);
    if (_fdata < 0) {
      perror("arp_send sockets");
      return -1;
    }
    iVar1 = fcntl(_fdata,4,0x80);
    if (iVar1 == -1) {
      perror("arp_send fcntl");
      close(_fdata);
      _fdata = 0xffffffff;
      return -1;
    }
  }
  local_28 = 0x6c770000;
  local_24 = 0x6e61;
  local_20 = 0;
  local_1c = 0;
  local_22 = 0x30;
  local_18 = sendto(_fdata,&DAT_00412180,0x2a,0,&local_28,0x10);
  if (-1 < local_18) {
    return local_18;
  }
  perror("arp_send");
  return local_18;
}



// ==== send_arp_status_msg @ 00401298 size=200

int send_arp_status_msg(undefined4 param_1,int param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  int local_20;
  int local_18;
  
  FUN_00401360(&local_30,0x14,0,0x14);
  local_20 = 100 - param_2;
  if (local_20 < 0) {
    local_20 = 0;
  }
  local_30 = 1;
  local_28 = 0x400e;
  local_24 = 0;
  local_2c = 1;
  local_26 = 0x400e;
  local_18 = FUN_00401708(param_1,&local_30,0x14);
  if (-1 < local_18) {
    return local_18;
  }
  FUN_00401498("arp_test.c","send_arp_status_msg",0x107,"msg snd err, err no is %d",local_18);
  return local_18;
}



// ==== putchar @ 00401ce0 size=16

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041201c)();
  return;
}



// ==== ioctl @ 00401cf0 size=4

void ioctl(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412020)();
  return;
}



// ==== printf @ 00401d00 size=16

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412024)();
  return;
}



// ==== recv @ 00401d10 size=4

void recv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412028)();
  return;
}



// ==== inet_pton @ 00401d20 size=16

void inet_pton(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041202c)();
  return;
}



// ==== snprintf @ 00401d30 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412030)();
  return;
}



// ==== usleep @ 00401d40 size=16

void usleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412034)();
  return;
}



// ==== getpid @ 00401d50 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412038)();
  return;
}



// ==== perror @ 00401d60 size=16

void perror(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041203c)();
  return;
}



// ==== puts @ 00401d70 size=4

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412040)();
  return;
}



// ==== sleep @ 00401d80 size=16

void sleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412044)();
  return;
}



// ==== vsnprintf @ 00401d90 size=4

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412048)();
  return;
}



// ==== mq_send @ 00401da0 size=16

void mq_send(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041204c)();
  return;
}



// ==== socket @ 00401db0 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412050)();
  return;
}



// ==== select @ 00401dc0 size=16

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412054)();
  return;
}



// ==== mmap @ 00401dd0 size=4

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412058)();
  return;
}



// ==== sendto @ 00401de0 size=16

void sendto(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041205c)();
  return;
}



// ==== gettimeofday @ 00401df0 size=4

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412060)();
  return;
}



// ==== localtime @ 00401e00 size=16

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412064)();
  return;
}



// ==== memset @ 00401e10 size=16

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412068)();
  return;
}



// ==== time @ 00401e20 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041206c)();
  return;
}



// ==== strlen @ 00401e30 size=16

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412070)();
  return;
}



// ==== open @ 00401e40 size=4

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412074)();
  return;
}



// ==== fcntl @ 00401e50 size=16

void fcntl(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412078)();
  return;
}



// ==== mq_open @ 00401e60 size=4

void mq_open(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041207c)();
  return;
}



// ==== close @ 00401e70 size=16

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412080)();
  return;
}



// ==== vfprintf @ 00401e80 size=4

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412084)();
  return;
}



