/* checkdisk — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "checkdisk.h"

// ==== entry @ 00400f60 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_00413170;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00413174)
            (PTR__ftext_00413168,param_2,&stack0x00000004,PTR__init_0041316c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== do_fat_check @ 00401350 size=936

int do_fat_check(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_192a8 [102400];
  undefined1 auStack_2a8 [256];
  undefined1 auStack_1a8 [256];
  undefined1 auStack_a8 [128];
  
  memset(auStack_192a8,0,0x19000);
  memset(auStack_a8,0,0x80);
  memset(auStack_1a8,0,0x100);
  memset(auStack_2a8,0,0x100);
  FUN_00401e20("checkdisk.c","do_fat_check",0x79,"Can fat check\n");
  uVar1 = system("/home/base/tools/fsck.fat -aw /dev/mmcblk0p1");
  FUN_00401e20("checkdisk.c","do_fat_check",0x7e,"retBuf(%s)",auStack_192a8);
  printf("ret(%d) \n",uVar1);
  if ((int)uVar1 < 0) {
    puVar3 = (undefined4 *)__errno_location();
    uVar4 = strerror(*puVar3);
    printf("system() return error(%s)",uVar4);
    iVar2 = 0x271a;
  }
  else {
    iVar2 = 10000;
  }
  if ((uVar1 & 0x7f) == 0) {
    uVar1 = (int)(uVar1 & 0xff00) >> 8;
    printf("normal termination, exit status(%d) \n",uVar1);
    if (1 < uVar1) {
      return 0x271a;
    }
  }
  else {
    if ((uVar1 & 0xffff) - 1 < 0xff) {
      printf("abnormal termination, signal number(%d) \n",1);
      return 0x271a;
    }
    if (((uVar1 & 0xff) == 0x7f) && ((uVar1 & 0xff00) != 0)) {
      printf("process stopped, singnal number(%d) \n",1);
      return 0x271a;
    }
    if (iVar2 != 10000) {
      return iVar2;
    }
  }
  iVar2 = mount("/dev/mmcblk0p1","/tmp/sd",&DAT_00402558,0,0);
  if (iVar2 == -1) {
    FUN_00401e20("checkdisk.c","do_fat_check",0x9a,"Card IO input error\n");
    iVar2 = 0x271a;
  }
  else {
    FUN_00401e20("checkdisk.c","do_fat_check",0x9f,"Mount sd ok.\n");
    FUN_00402068("cat /proc/mounts | grep \"/dev/mmcblk0p1\" | cut -d \" \" -f4 | cut -d \",\" -f1",
                 auStack_192a8,0x19000,10);
    printf("----ret_buf: %s----\n",auStack_192a8);
    iVar2 = strncmp(auStack_192a8,&DAT_00402640,2);
    if (iVar2 == 0) {
      return 0x271a;
    }
    FUN_00402068("cat /proc/mounts | grep \"/dev/mmcblk0p1\" | cut -d \" \" -f2",auStack_a8,0x80,10)
    ;
    sprintf(auStack_1a8,"%s %s",&DAT_00402688,auStack_a8);
    sprintf(auStack_2a8,"%s %s","umount",auStack_a8);
    system(auStack_1a8);
    FUN_00402068("cat /proc/mounts | grep \"/dev/mmcblk0p1\" | cut -d \" \" -f4 | cut -d \",\" -f1",
                 auStack_192a8,0x19000,10);
    printf("----ret_buf: %s----\n",auStack_192a8);
    iVar2 = strncmp(auStack_192a8,&DAT_00402640,2);
    if (iVar2 == 0) {
      puts("read-only!!!!!!!!!!");
      system(auStack_2a8);
      iVar2 = 0x271a;
    }
    else {
      iVar2 = 10000;
    }
  }
  return iVar2;
}



// ==== check_partion_vfat @ 004016f8 size=108

undefined4 check_partion_vfat(void)

{
  undefined4 uVar1;
  
  FUN_00401e20("checkdisk.c","check_partion_vfat",0xbf,"TF Card  checking ....\n");
  uVar1 = do_fat_check();
  FUN_00401e20("checkdisk.c","check_partion_vfat",0xc3,"TF Card check finished.\n");
  return uVar1;
}



// ==== check_partion_exfat @ 00401764 size=404

undefined4 check_partion_exfat(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_19098 [102400];
  undefined1 auStack_98 [128];
  
  puVar4 = auStack_19098;
  memset(auStack_98,0,0x80);
  memset(puVar4,0,0x19000);
  FUN_00401e20("checkdisk.c","check_partion_exfat",0xcf,"TF Card  checking ....\n");
  puVar3 = auStack_98;
  iVar1 = FUN_00402068("/home/base/tools/exfatfsck /dev/mmcblk0p1",puVar4,0x19000,0x5a);
  FUN_00401e20("checkdisk.c","check_partion_exfat",0xd3,"\ncmd(%s) retBuf(%s)\n",puVar3,puVar4);
  if (iVar1 < 1) {
    uVar2 = 0x271a;
    FUN_00401e20("checkdisk.c","check_partion_exfat",0xd8,"TF card bad\n",puVar3,puVar4);
  }
  else {
    puVar3 = (undefined1 *)0x0;
    iVar1 = mount("/dev/mmcblk0p1","/tmp/sd","exfat",0,0);
    if (iVar1 == -1) {
      uVar2 = 0x271a;
      FUN_00401e20("checkdisk.c","check_partion_exfat",0xe0,"Card IO input error\n",puVar3,puVar4);
    }
    else {
      uVar2 = 10000;
      FUN_00401e20("checkdisk.c","check_partion_exfat",0xe5,"Mount sd ok.\n",puVar3,puVar4);
    }
  }
  FUN_00401e20("checkdisk.c","check_partion_exfat",0xe8,"TF Card check finished.\n",puVar3,puVar4);
  return uVar2;
}



// ==== putchar @ 00402e40 size=16

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130c0)();
  return;
}



// ==== ioctl @ 00402e50 size=4

void ioctl(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130c4)();
  return;
}



// ==== popen @ 00402e60 size=16

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130c8)();
  return;
}



// ==== printf @ 00402e70 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130cc)();
  return;
}



// ==== strerror @ 00402e80 size=16

void strerror(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130d0)();
  return;
}



// ==== pclose @ 00402e90 size=16

void pclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130d4)();
  return;
}



// ==== snprintf @ 00402ea0 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130d8)();
  return;
}



// ==== munmap @ 00402eb0 size=16

void munmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130dc)();
  return;
}



// ==== getpid @ 00402ec0 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130e0)();
  return;
}



// ==== puts @ 00402ed0 size=16

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130e4)();
  return;
}



// ==== system @ 00402ee0 size=4

void system(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130e8)();
  return;
}



// ==== vsnprintf @ 00402ef0 size=16

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130ec)();
  return;
}



// ==== socket @ 00402f00 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130f0)();
  return;
}



// ==== select @ 00402f10 size=16

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130f4)();
  return;
}



// ==== lseek @ 00402f20 size=4

void lseek(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130f8)();
  return;
}



// ==== mmap @ 00402f30 size=16

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004130fc)();
  return;
}



// ==== write @ 00402f40 size=4

void write(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413100)();
  return;
}



// ==== strstr @ 00402f50 size=16

void strstr(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413104)();
  return;
}



// ==== strncmp @ 00402f60 size=4

void strncmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413108)();
  return;
}



// ==== strncpy @ 00402f70 size=16

void strncpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041310c)();
  return;
}



// ==== sendto @ 00402f80 size=4

void sendto(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413110)();
  return;
}



// ==== memcmp @ 00402f90 size=16

void memcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413114)();
  return;
}



// ==== fread @ 00402fa0 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413118)();
  return;
}



// ==== gettimeofday @ 00402fb0 size=16

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041311c)();
  return;
}



// ==== localtime @ 00402fc0 size=4

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413120)();
  return;
}



// ==== memset @ 00402fd0 size=16

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413124)();
  return;
}



// ==== time @ 00402fe0 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413128)();
  return;
}



// ==== mount @ 00402ff0 size=16

void mount(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041312c)();
  return;
}



// ==== sprintf @ 00403000 size=4

void sprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040300c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413130)();
  return;
}



// ==== umount @ 00403010 size=16

void umount(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040301c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413134)();
  return;
}



// ==== pread @ 00403020 size=4

void pread(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040302c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413138)();
  return;
}



// ==== __errno_location @ 00403030 size=16

void __errno_location(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040303c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041313c)();
  return;
}



// ==== fileno @ 00403040 size=4

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040304c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413140)();
  return;
}



// ==== strlen @ 00403050 size=16

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413144)();
  return;
}



// ==== open @ 00403060 size=4

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413148)();
  return;
}



// ==== atoll @ 00403070 size=16

void atoll(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041314c)();
  return;
}



// ==== close @ 00403080 size=4

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413150)();
  return;
}



// ==== vfprintf @ 00403090 size=20

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040309c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00413154)();
  return;
}



