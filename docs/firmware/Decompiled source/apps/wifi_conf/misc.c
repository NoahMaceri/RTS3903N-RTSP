/* wifi_conf — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "wifi_conf.h"

// ==== entry @ 00400750 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00426c80;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00426c84)
            (PTR_main_00426c78,param_2,&stack0x00000004,PTR__init_00426c7c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== __PLT_HEAD @ 00401b80 size=32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __PLT_HEAD(void)

{
  (*___DT_MIPS_PLTGOT)();
  (*(code *)PTR_snprintf_0041201c)();
  return;
}



// ==== snprintf @ 00401ba0 size=16

void snprintf(void)

{
  (*(code *)PTR_snprintf_0041201c)();
  return;
}



// ==== usleep @ 00401bb0 size=4

void usleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_usleep_00412020)();
  return;
}



// ==== perror @ 00401bc0 size=16

void perror(void)

{
  (*(code *)PTR_perror_00412024)();
  return;
}



// ==== puts @ 00401bd0 size=4

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_puts_00412028)();
  return;
}



// ==== mmap @ 00401be0 size=16

void mmap(void)

{
  (*(code *)PTR_mmap_0041202c)();
  return;
}



// ==== chmod @ 00401bf0 size=4

void chmod(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_chmod_00412030)();
  return;
}



// ==== strncat @ 00401c00 size=16

void strncat(void)

{
  (*(code *)PTR_strncat_00412034)();
  return;
}



// ==== fopen @ 00401c10 size=4

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fopen_00412038)();
  return;
}



// ==== memset @ 00401c20 size=16

void memset(void)

{
  (*(code *)PTR_memset_0041203c)();
  return;
}



// ==== fclose @ 00401c30 size=4

void fclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fclose_00412040)();
  return;
}



// ==== strcmp @ 00401c40 size=16

void strcmp(void)

{
  (*(code *)PTR_strcmp_00412044)();
  return;
}



// ==== fwrite @ 00401c50 size=4

void fwrite(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fwrite_00412048)();
  return;
}



// ==== strlen @ 00401c60 size=16

void strlen(void)

{
  (*(code *)PTR_strlen_0041204c)();
  return;
}



// ==== open @ 00401c70 size=4

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_00412050)();
  return;
}



// ==== close @ 00401c80 size=20

void close(void)

{
  (*(code *)PTR_close_00412054)();
  return;
}



