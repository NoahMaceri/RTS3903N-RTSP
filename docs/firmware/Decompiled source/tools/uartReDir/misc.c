/* uartReDir — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "uartReDir.h"

// ==== entry @ 004005a0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_00410b50;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00410b54)
            (PTR_main_00410b48,param_2,&stack0x00000004,PTR__init_00410b4c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== ioctl @ 00400a60 size=16

void ioctl(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00410b00)();
  return;
}



// ==== printf @ 00400a70 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00410b04)();
  return;
}



// ==== perror @ 00400a80 size=16

void perror(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00410b08)();
  return;
}



// ==== puts @ 00400a90 size=4

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00410b0c)();
  return;
}



// ==== strcmp @ 00400aa0 size=16

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00410b10)();
  return;
}



// ==== ttyname @ 00400ab0 size=4

void ttyname(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00410b14)();
  return;
}



// ==== open @ 00400ac0 size=16

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00410b18)();
  return;
}



// ==== close @ 00400ad0 size=4

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00410b1c)();
  return;
}



