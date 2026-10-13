/* ssp_ms41909 — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "ssp_ms41909.h"

// ==== FUN_000100bc @ 000100bc size=148

void FUN_000100bc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  printk(&_LC0);
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + param_2 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x68))
            (iVar1,param_3,
             (uint)(param_4 * 100) / (uint)(*(int *)(iVar1 + 0x10) / *(int *)(iVar1 + 0xc)));
  return;
}



// ==== FUN_000103e0 @ 000103e0 size=280

void FUN_000103e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  
  iVar2 = **(int **)(param_1 + 0xc);
  uVar1 = arch_local_irq_save();
  *(undefined4 *)(iVar2 + 100) = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  arch_local_irq_restore(*(undefined4 *)(iVar2 + 100));
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  uVar1 = arch_local_irq_save();
  *(undefined4 *)(iVar2 + 100) = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  arch_local_irq_restore(*(undefined4 *)(iVar2 + 100));
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
    return;
  }
  return;
}



// ==== FUN_000104f8 @ 000104f8 size=284

uint FUN_000104f8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_gp;
  
  iVar3 = **(int **)(param_1 + 0xc);
  uVar1 = arch_local_irq_save();
  *(undefined4 *)(iVar3 + 100) = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar3 + 0x40);
  uVar4 = *(uint *)(iVar3 + 8);
  arch_local_irq_restore(*(undefined4 *)(iVar3 + 100));
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  uVar1 = arch_local_irq_save();
  *(undefined4 *)(iVar3 + 100) = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 0x40);
  uVar2 = *(uint *)(iVar3 + 8);
  arch_local_irq_restore(*(undefined4 *)(iVar3 + 100));
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
  }
  return uVar4 | uVar2;
}



// ==== FUN_00010614 @ 00010614 size=192

undefined4 FUN_00010614(int param_1,uint *param_2)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = arch_local_irq_save();
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  *param_2 = (uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x44)) /
             (uint)(*(int *)(param_1 + 0xc) * 1000);
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar1 = *(undefined4 *)(param_1 + 8);
  arch_local_irq_restore(*(undefined4 *)(param_1 + 100));
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) != 0) {
    preempt_schedule();
  }
  return uVar1;
}



// ==== FUN_000106d4 @ 000106d4 size=96

void FUN_000106d4(int param_1)

{
  __gpio_set_value(*(undefined4 *)(param_1 + 0x48),0);
  __gpio_set_value(*(undefined4 *)(param_1 + 0x4c),0);
  __gpio_set_value(*(undefined4 *)(param_1 + 0x50),0);
  __gpio_set_value(*(undefined4 *)(param_1 + 0x54),0);
  return;
}



// ==== FUN_0001085c @ 0001085c size=260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001085c(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar2 = arch_local_irq_save();
  param_1[0x19] = iVar2;
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + 1;
  bVar1 = param_3 < 0x1000;
  if (*param_1 == 0) {
    iVar2 = 0x1000;
  }
  else {
    if (*param_1 != 1) goto LAB_000108c8;
    bVar1 = param_3 < 0x5a0;
    iVar2 = 0x5a0;
  }
  if (!bVar1) {
    param_3 = iVar2;
  }
LAB_000108c8:
  param_1[2] = 1;
  param_1[0xf] = param_3;
  iVar2 = _jiffies;
  param_1[1] = param_2;
  iVar3 = usecs_to_jiffies(10);
  mod_timer(param_1 + 5,iVar3 + iVar2);
  arch_local_irq_restore(param_1[0x19]);
  *(int *)(unaff_gp + 0x14) = *(int *)(unaff_gp + 0x14) + -1;
  if ((*(uint *)(unaff_gp + 8) >> 2 & 1) == 0) {
    return;
  }
  preempt_schedule();
  return;
}



// ==== FUN_00010960 @ 00010960 size=796

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00010960(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 - 2U < 2) {
    iVar2 = param_1[0xd];
    if ((param_1[0xf] != 0) && (iVar2 == param_1[0xf])) {
      param_1[0x18] = 0;
      param_1[0x11] = param_1[0x11] + iVar2;
      iVar2 = iVar2 + param_1[0x10];
      param_1[0x10] = iVar2;
      if (*param_1 == 0) {
        if (0xfff < iVar2) {
          param_1[0x10] = 0x1000;
        }
      }
      else if ((*param_1 == 1) && (0x59f < iVar2)) {
        param_1[0x10] = 0x5a0;
      }
      if (param_1[0x10] < 1) {
        param_1[0x10] = 0;
      }
      param_1[0xd] = 0;
LAB_00010b48:
      param_1[1] = 0;
      param_1[0xf] = 0;
      param_1[2] = 0;
      FUN_000106d4(param_1);
      return;
    }
    if (param_1[0x18] == param_1[0x17]) {
      param_1[0x18] = 0;
    }
    param_1[0xd] = iVar2 + 1;
    __gpio_set_value(param_1[0x12],*(uint *)(param_1[0x16] + param_1[0x18] * 4) & 1);
    __gpio_set_value(param_1[0x13],*(uint *)(param_1[0x16] + param_1[0x18] * 4) >> 1 & 1);
    __gpio_set_value(param_1[0x14],*(uint *)(param_1[0x16] + param_1[0x18] * 4) >> 2 & 1);
    __gpio_set_value(param_1[0x15],*(uint *)(param_1[0x16] + param_1[0x18] * 4) >> 3 & 1);
    iVar2 = param_1[0x18] + 1;
  }
  else {
    if ((iVar2 != 1) && (iVar2 != 4)) goto LAB_00010c34;
    iVar2 = param_1[0xe];
    if ((param_1[0xf] != 0) && (iVar2 == param_1[0xf])) {
      param_1[0x18] = 0;
      param_1[0x11] = param_1[0x11] + iVar2;
      param_1[0xe] = 0;
      iVar2 = param_1[0x10] - iVar2;
      param_1[0x10] = iVar2;
      if (*param_1 == 0) {
        if (0xfff < iVar2) {
          param_1[0x10] = 0x1000;
        }
      }
      else if ((*param_1 == 1) && (0x59f < iVar2)) {
        param_1[0x10] = 0x5a0;
      }
      if (param_1[0x10] < 1) {
        param_1[0x10] = 0;
      }
      goto LAB_00010b48;
    }
    if (param_1[0x18] < 0) {
      param_1[0x18] = param_1[0x17] + -1;
    }
    param_1[0xe] = iVar2 + 1;
    __gpio_set_value(param_1[0x12],*(uint *)(param_1[0x16] + param_1[0x18] * 4) & 1);
    __gpio_set_value(param_1[0x13],*(uint *)(param_1[0x16] + param_1[0x18] * 4) >> 1 & 1);
    __gpio_set_value(param_1[0x14],*(uint *)(param_1[0x16] + param_1[0x18] * 4) >> 2 & 1);
    __gpio_set_value(param_1[0x15],*(uint *)(param_1[0x16] + param_1[0x18] * 4) >> 3 & 1);
    iVar2 = param_1[0x18] + -1;
  }
  param_1[0x18] = iVar2;
LAB_00010c34:
  iVar2 = _jiffies;
  iVar1 = usecs_to_jiffies(param_1[4] / param_1[3]);
  mod_timer(param_1 + 5,iVar1 + iVar2);
  return;
}



