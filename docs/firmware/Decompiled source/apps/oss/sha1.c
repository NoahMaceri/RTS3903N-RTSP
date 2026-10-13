/* oss — "sha1" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "oss.h"

// ==== SHA1_Init @ 0047c374 size=112

void SHA1_Init(undefined4 param_1)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x313c);
  (*(code *)PTR_CyaSSL_SHA_Init_00561120)(param_1);
  return;
}



// ==== SHA1_Update @ 0047c3e4 size=128

void SHA1_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3130);
  (*(code *)PTR_CyaSSL_SHA_Update_00561124)(param_1,param_2,param_3);
  return;
}



// ==== SHA1_Final @ 0047c464 size=120

void SHA1_Final(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_00560f90)(PTR_DAT_00560f88 + -0x3124);
  (*(code *)PTR_CyaSSL_SHA_Final_00561128)(param_1,param_2);
  return;
}



