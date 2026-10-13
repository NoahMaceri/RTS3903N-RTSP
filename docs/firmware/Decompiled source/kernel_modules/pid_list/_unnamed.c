/* pid_list — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "pid_list.h"

// ==== FUN_00010040 @ 00010040 size=356

undefined4 FUN_00010040(undefined4 param_1,uint param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  char cVar7;
  int iVar8;
  undefined *puVar9;
  char *__s;
  char *pcVar10;
  int unaff_gp;
  char local_68 [64];
  int local_28;
  
  if ((param_2 >> 8 & 0xff) == 0x70) {
    if (((param_3 + 0x40 | param_3) & *(uint *)(unaff_gp + 0x18)) == 0) {
      iVar8 = 0x40;
      iVar4 = __copy_user(local_68,param_3);
      if (iVar8 == 0) {
        if (iVar4 != 1) {
          return 0xffffffff;
        }
        puVar9 = &init_task;
        do {
          do {
            local_28 = *(int *)(puVar9 + 0xb4);
            puVar9 = (undefined *)(local_28 + -0xb4);
            __s = (char *)(local_28 + 0x10c);
            if (puVar9 == &init_task) {
              return 0;
            }
            sVar5 = strlen(__s);
            sVar6 = strlen(local_68);
          } while (sVar5 != sVar6);
          sVar5 = strlen(local_68);
          pcVar10 = local_68;
          while( true ) {
            cVar1 = *__s;
            cVar2 = *pcVar10;
            cVar7 = cVar2;
            if (sVar5 == 0) break;
            sVar5 = sVar5 - 1;
            __s = __s + 1;
            cVar7 = cVar1;
            if ((cVar2 != cVar1) || (pcVar10 = pcVar10 + 1, cVar7 = cVar2, cVar1 == '\0')) break;
          }
          if (cVar7 == cVar2) {
            return 1;
          }
        } while( true );
      }
    }
    printk(&_LC1);
    uVar3 = 0xfffffff2;
  }
  else {
    printk("pid_list_ioctl(), cmd(%d) is invalid !!!!!! \n");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



