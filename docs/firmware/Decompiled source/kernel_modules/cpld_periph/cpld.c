/* cpld_periph — "cpld" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cpld_periph.h"

// ==== cpld_proc_write @ 00010040 size=152

undefined4 cpld_proc_write(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int unaff_gp;
  
  if ((((uint)(param_2 + 1) | (uint)param_2) & *(uint *)(unaff_gp + 0x18)) == 0) {
    DAT_000118e8 = (uint)(*param_2 == '1');
    printk("%s, count(%d), dbg_cpld_enalbe(%d)\n","cpld_proc_write",param_3,DAT_000118e8);
  }
  else {
    param_3 = 0xfffffff2;
  }
  return param_3;
}



// ==== cpld_gpio_request @ 000100d8 size=36

undefined4 cpld_gpio_request(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    uVar1 = gpio_request();
    return uVar1;
  }
  return 0;
}



// ==== cpld_gpio_free @ 000100fc size=36

void cpld_gpio_free(int param_1)

{
  if (param_1 != 0xff) {
    gpio_free();
    return;
  }
  return;
}



// ==== cpld_gpio_direction_output @ 00010120 size=36

undefined4 cpld_gpio_direction_output(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    uVar1 = gpio_direction_output();
    return uVar1;
  }
  return 0;
}



// ==== cpld_gpio_direction_input @ 0001017c size=36

undefined4 cpld_gpio_direction_input(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    uVar1 = gpio_direction_input();
    return uVar1;
  }
  return 0;
}



// ==== cpld_gpio_get_value @ 000101a0 size=36

undefined4 cpld_gpio_get_value(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    uVar1 = __gpio_get_value();
    return uVar1;
  }
  return 0;
}



// ==== cpld_gpio_set_value @ 000101c4 size=36

void cpld_gpio_set_value(int param_1)

{
  if (param_1 != 0xff) {
    __gpio_set_value();
    return;
  }
  return;
}



