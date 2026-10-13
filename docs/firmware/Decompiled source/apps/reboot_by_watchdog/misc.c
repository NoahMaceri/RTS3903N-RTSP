/* reboot_by_watchdog — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "reboot_by_watchdog.h"

// ==== entry @ 00400a00 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_00411810;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00411814)
            (PTR__ftext_00411808,param_2,&stack0x00000004,PTR__init_0041180c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== putchar @ 004015e0 size=16

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x004015ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411790)();
  return;
}



// ==== ioctl @ 004015f0 size=4

void ioctl(void)

{
                    /* WARNING: Could not recover jumptable at 0x004015fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411794)();
  return;
}



// ==== popen @ 00401600 size=16

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040160c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411798)();
  return;
}



// ==== printf @ 00401610 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040161c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041179c)();
  return;
}



// ==== strerror @ 00401620 size=16

void strerror(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117a0)();
  return;
}



// ==== pclose @ 00401630 size=16

void pclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117a4)();
  return;
}



// ==== snprintf @ 00401640 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117a8)();
  return;
}



// ==== getpid @ 00401650 size=16

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040165c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117ac)();
  return;
}



// ==== puts @ 00401660 size=4

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040166c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117b0)();
  return;
}



// ==== vsnprintf @ 00401670 size=16

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117b4)();
  return;
}



// ==== socket @ 00401680 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040168c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117b8)();
  return;
}



// ==== select @ 00401690 size=16

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040169c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117bc)();
  return;
}



// ==== strstr @ 004016a0 size=4

void strstr(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117c0)();
  return;
}



// ==== sendto @ 004016b0 size=16

void sendto(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117c4)();
  return;
}



// ==== fread @ 004016c0 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117c8)();
  return;
}



// ==== gettimeofday @ 004016d0 size=16

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117cc)();
  return;
}



// ==== localtime @ 004016e0 size=4

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117d0)();
  return;
}



// ==== memset @ 004016f0 size=16

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117d4)();
  return;
}



// ==== time @ 00401700 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040170c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117d8)();
  return;
}



// ==== access @ 00401710 size=16

void access(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117dc)();
  return;
}



// ==== __errno_location @ 00401720 size=4

void __errno_location(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117e0)();
  return;
}



// ==== fileno @ 00401730 size=16

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117e4)();
  return;
}



// ==== strlen @ 00401740 size=4

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040174c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117e8)();
  return;
}



// ==== open @ 00401750 size=16

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040175c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117ec)();
  return;
}



// ==== vfprintf @ 00401760 size=4

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040176c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004117f0)();
  return;
}



