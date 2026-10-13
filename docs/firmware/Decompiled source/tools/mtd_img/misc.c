/* mtd_img — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "mtd_img.h"

// ==== entry @ 00400ab0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_00411080;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00411084)
            (PTR__ftext_00411078,param_2,&stack0x00000004,PTR__init_0041107c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== putchar @ 00400e80 size=16

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041101c)();
  return;
}



// ==== strcpy @ 00400e90 size=4

void strcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411020)();
  return;
}



// ==== printf @ 00400ea0 size=16

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411024)();
  return;
}



// ==== snprintf @ 00400eb0 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411028)();
  return;
}



// ==== atol @ 00400ec0 size=16

void atol(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041102c)();
  return;
}



// ==== fflush @ 00400ed0 size=4

void fflush(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411030)();
  return;
}



// ==== fprintf @ 00400ef0 size=4

void fprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411038)();
  return;
}



// ==== memset @ 00400f10 size=4

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411040)();
  return;
}



// ==== libmtd_open @ 00400f30 size=4

void libmtd_open(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411048)();
  return;
}



// ==== fwrite @ 00400f40 size=16

void fwrite(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041104c)();
  return;
}



// ==== libmtd_close @ 00400f50 size=4

void libmtd_close(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411050)();
  return;
}



// ==== open @ 00400f60 size=16

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00411054)();
  return;
}



// ==== close @ 00400f80 size=20

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x00400f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041105c)();
  return;
}



