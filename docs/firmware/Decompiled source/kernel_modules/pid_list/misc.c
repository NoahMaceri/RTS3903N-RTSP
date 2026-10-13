/* pid_list — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "pid_list.h"

// ==== init_module @ 000101b0 size=120

undefined4 init_module(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = misc_register(&DAT_000103f0);
  if (iVar1 == 0) {
    printk("\n[PID_LIST] pid_list_init ok, [ ver=%s, %s ] \n","May 27 2019","16:21:04");
    uVar2 = 0;
  }
  else {
    printk("\n[PID_LIST] pid_list_init fail, [ misc_register fail ] \n");
    uVar2 = 0xfffffff2;
  }
  return uVar2;
}



// ==== cleanup_module @ 00010228 size=56

void cleanup_module(void)

{
  misc_deregister(&DAT_000103f0);
  printk("\n[PID_LIST] pid_list_exit ok \n");
  return;
}



