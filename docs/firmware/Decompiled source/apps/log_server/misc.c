/* log_server — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "log_server.h"

// ==== entry @ 00400c40 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_00411910;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00411914)
            (PTR__ftext_00411908,param_2,&stack0x00000004,PTR__init_0041190c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== popen @ 004016a0 size=16

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411880)();
  return;
}



// ==== printf @ 004016b0 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411884)();
  return;
}



// ==== strerror @ 004016c0 size=16

void strerror(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411888)();
  return;
}



// ==== pclose @ 004016d0 size=16

void pclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041188c)();
  return;
}



// ==== snprintf @ 004016e0 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411890)();
  return;
}



// ==== puts @ 004016f0 size=16

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x004016fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411894)();
  return;
}



// ==== recvfrom @ 00401700 size=4

void recvfrom(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040170c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411898)();
  return;
}



// ==== socket @ 00401710 size=16

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041189c)();
  return;
}



// ==== select @ 00401720 size=4

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118a0)();
  return;
}



// ==== fflush @ 00401730 size=16

void fflush(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118a4)();
  return;
}



// ==== fprintf @ 00401740 size=4

void fprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040174c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118a8)();
  return;
}



// ==== bind @ 00401750 size=16

void bind(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040175c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118ac)();
  return;
}



// ==== strstr @ 00401760 size=4

void strstr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040176c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118b0)();
  return;
}



// ==== strncmp @ 00401770 size=16

void strncmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040177c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118b4)();
  return;
}



// ==== strncpy @ 00401780 size=4

void strncpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040178c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118b8)();
  return;
}



// ==== unlink @ 00401790 size=16

void unlink(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040179c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118bc)();
  return;
}



// ==== fread @ 004017a0 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x004017ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118c0)();
  return;
}



// ==== gettimeofday @ 004017b0 size=16

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x004017bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118c4)();
  return;
}



// ==== fopen @ 004017c0 size=4

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004017cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118c8)();
  return;
}



// ==== localtime @ 004017d0 size=16

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x004017dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118cc)();
  return;
}



// ==== memset @ 004017e0 size=4

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x004017ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118d0)();
  return;
}



// ==== ftell @ 004017f0 size=16

void ftell(void)

{
                    /* WARNING: Could not recover jumptable at 0x004017fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118d4)();
  return;
}



// ==== fclose @ 00401800 size=4

void fclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040180c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118d8)();
  return;
}



// ==== rewind @ 00401810 size=16

void rewind(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118dc)();
  return;
}



// ==== __errno_location @ 00401820 size=4

void __errno_location(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040182c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118e0)();
  return;
}



// ==== fileno @ 00401830 size=16

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040183c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118e4)();
  return;
}



// ==== strlen @ 00401840 size=4

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040184c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118e8)();
  return;
}



// ==== close @ 00401850 size=20

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004118ec)();
  return;
}



