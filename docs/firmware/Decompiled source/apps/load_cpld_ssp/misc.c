/* load_cpld_ssp — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "load_cpld_ssp.h"

// ==== entry @ 004006f0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_00411600;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00411604)
            (PTR_main_004115f8,param_2,&stack0x00000004,PTR__init_004115fc);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== popen @ 00401440 size=16

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411580)();
  return;
}



// ==== printf @ 00401450 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411584)();
  return;
}



// ==== pclose @ 00401460 size=16

void pclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040146c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411588)();
  return;
}



// ==== munmap @ 00401470 size=16

void munmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040147c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041158c)();
  return;
}



// ==== memcpy @ 00401480 size=4

void memcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411590)();
  return;
}



// ==== puts @ 00401490 size=16

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040149c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411594)();
  return;
}



// ==== select @ 004014a0 size=4

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x004014ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411598)();
  return;
}



// ==== lseek @ 004014b0 size=16

void lseek(void)

{
                    /* WARNING: Could not recover jumptable at 0x004014bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041159c)();
  return;
}



// ==== mmap @ 004014c0 size=4

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x004014cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115a0)();
  return;
}



// ==== write @ 004014d0 size=16

void write(void)

{
                    /* WARNING: Could not recover jumptable at 0x004014dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115a4)();
  return;
}



// ==== fread @ 004014e0 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x004014ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115a8)();
  return;
}



// ==== memset @ 004014f0 size=16

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x004014fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115ac)();
  return;
}



// ==== sprintf @ 00401500 size=4

void sprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115b0)();
  return;
}



// ==== access @ 00401510 size=16

void access(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040151c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115b4)();
  return;
}



// ==== fileno @ 00401520 size=4

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040152c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115b8)();
  return;
}



// ==== strlen @ 00401530 size=16

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115bc)();
  return;
}



// ==== open @ 00401540 size=16

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040154c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115c0)();
  return;
}



// ==== close @ 00401550 size=4

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040155c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004115c4)();
  return;
}



