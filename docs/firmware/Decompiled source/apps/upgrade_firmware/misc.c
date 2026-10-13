/* upgrade_firmware — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "upgrade_firmware.h"

// ==== entry @ 00400b80 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_004122b0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004122b4)
            (PTR__ftext_004122a8,param_2,&stack0x00000004,PTR__init_004122ac);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== md5_check_file @ 00400d60 size=208

undefined4 md5_check_file(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_218 [256];
  undefined1 auStack_118 [256];
  undefined1 *local_18 [3];
  
  memset(auStack_118,0,0x100);
  memset(auStack_218,0,0x100);
  local_18[0] = (undefined1 *)0x0;
  snprintf(auStack_118,0x100,"md5sum %s | awk \'{print $1}\'",param_1);
  FUN_00401594(auStack_118,auStack_218,0x100,0x3c);
  local_18[0] = auStack_218;
  FUN_004018fc(local_18);
  iVar1 = strcmp(auStack_218,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0040134c("upgrade_firmware.c","md5_check_file",0x2c,"calc_md5 = %s, md5 = %s\n",auStack_218,
                 param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// ==== putchar @ 00402020 size=16

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040202c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412220)();
  return;
}



// ==== popen @ 00402030 size=4

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412224)();
  return;
}



// ==== printf @ 00402040 size=16

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040204c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412228)();
  return;
}



// ==== pclose @ 00402050 size=16

void pclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041222c)();
  return;
}



// ==== snprintf @ 00402060 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412230)();
  return;
}



// ==== usleep @ 00402070 size=16

void usleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412234)();
  return;
}



// ==== getpid @ 00402080 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040208c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412238)();
  return;
}



// ==== memcpy @ 00402090 size=16

void memcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040209c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041223c)();
  return;
}



// ==== puts @ 004020a0 size=4

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412240)();
  return;
}



// ==== system @ 004020b0 size=16

void system(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412244)();
  return;
}



// ==== sleep @ 004020c0 size=4

void sleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412248)();
  return;
}



// ==== vsnprintf @ 004020d0 size=16

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041224c)();
  return;
}



// ==== mq_send @ 004020e0 size=16

void mq_send(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412250)();
  return;
}



// ==== socket @ 004020f0 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412254)();
  return;
}



// ==== select @ 00402100 size=16

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412258)();
  return;
}



// ==== mmap @ 00402110 size=4

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040211c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041225c)();
  return;
}



// ==== strstr @ 00402120 size=16

void strstr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412260)();
  return;
}



// ==== sendto @ 00402130 size=4

void sendto(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040213c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412264)();
  return;
}



// ==== fread @ 00402140 size=16

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412268)();
  return;
}



// ==== gettimeofday @ 00402150 size=4

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040215c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041226c)();
  return;
}



// ==== localtime @ 00402160 size=16

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040216c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412270)();
  return;
}



// ==== memset @ 00402170 size=4

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040217c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412274)();
  return;
}



// ==== time @ 00402180 size=16

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412278)();
  return;
}



// ==== strcmp @ 00402190 size=4

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040219c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041227c)();
  return;
}



// ==== fileno @ 004021a0 size=16

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x004021ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412280)();
  return;
}



// ==== strlen @ 004021b0 size=4

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004021bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412284)();
  return;
}



// ==== open @ 004021c0 size=16

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x004021cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412288)();
  return;
}



// ==== mq_open @ 004021d0 size=4

void mq_open(void)

{
                    /* WARNING: Could not recover jumptable at 0x004021dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041228c)();
  return;
}



// ==== close @ 004021e0 size=16

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x004021ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412290)();
  return;
}



// ==== vfprintf @ 004021f0 size=4

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004021fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412294)();
  return;
}



