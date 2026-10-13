/* watch_process — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "watch_process.h"

// ==== entry @ 00400f20 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = DAT_004120e0;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004120e4)
            (PTR__ftext_004120d8,param_2,&stack0x00000004,PTR__init_004120dc);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== putchar @ 00401dc0 size=16

void putchar(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412030)();
  return;
}



// ==== ioctl @ 00401dd0 size=4

void ioctl(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412034)();
  return;
}



// ==== popen @ 00401de0 size=16

void popen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412038)();
  return;
}



// ==== printf @ 00401df0 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041203c)();
  return;
}



// ==== pclose @ 00401e00 size=16

void pclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412040)();
  return;
}



// ==== snprintf @ 00401e10 size=4

void snprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412044)();
  return;
}



// ==== usleep @ 00401e20 size=16

void usleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412048)();
  return;
}



// ==== getpid @ 00401e30 size=4

void getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041204c)();
  return;
}



// ==== puts @ 00401e40 size=16

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412050)();
  return;
}



// ==== system @ 00401e50 size=4

void system(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412054)();
  return;
}



// ==== malloc @ 00401e60 size=16

void malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412058)();
  return;
}



// ==== sleep @ 00401e70 size=4

void sleep(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041205c)();
  return;
}



// ==== vsnprintf @ 00401e80 size=16

void vsnprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412060)();
  return;
}



// ==== socket @ 00401e90 size=4

void socket(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412064)();
  return;
}



// ==== select @ 00401ea0 size=16

void select(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412068)();
  return;
}



// ==== mmap @ 00401eb0 size=4

void mmap(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041206c)();
  return;
}



// ==== fseek @ 00401ec0 size=16

void fseek(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412070)();
  return;
}



// ==== strstr @ 00401ed0 size=4

void strstr(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412074)();
  return;
}



// ==== strncmp @ 00401ee0 size=16

void strncmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412078)();
  return;
}



// ==== sendto @ 00401ef0 size=4

void sendto(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041207c)();
  return;
}



// ==== sscanf @ 00401f00 size=16

void sscanf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412080)();
  return;
}



// ==== fread @ 00401f10 size=4

void fread(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412084)();
  return;
}



// ==== gettimeofday @ 00401f20 size=16

void gettimeofday(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412088)();
  return;
}



// ==== fopen @ 00401f30 size=4

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041208c)();
  return;
}



// ==== localtime @ 00401f40 size=16

void localtime(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412090)();
  return;
}



// ==== memset @ 00401f50 size=16

void memset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412094)();
  return;
}



// ==== ftell @ 00401f60 size=4

void ftell(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_00412098)();
  return;
}



// ==== fclose @ 00401f70 size=16

void fclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_0041209c)();
  return;
}



// ==== time @ 00401f80 size=4

void time(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120a0)();
  return;
}



// ==== access @ 00401f90 size=16

void access(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120a4)();
  return;
}



// ==== atoi @ 00401fa0 size=4

void atoi(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120a8)();
  return;
}



// ==== fileno @ 00401fb0 size=16

void fileno(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120ac)();
  return;
}



// ==== strlen @ 00401fc0 size=4

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120b0)();
  return;
}



// ==== open @ 00401fd0 size=16

void open(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120b4)();
  return;
}



// ==== close @ 00401fe0 size=4

void close(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120b8)();
  return;
}



// ==== vfprintf @ 00401ff0 size=16

void vfprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120bc)();
  return;
}



// ==== free @ 00402000 size=4

void free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_004120c0)();
  return;
}



