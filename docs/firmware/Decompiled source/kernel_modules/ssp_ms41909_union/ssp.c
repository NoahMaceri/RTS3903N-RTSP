/* ssp_ms41909_union — "ssp" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "ssp_ms41909_union.h"

// ==== ssp_gpio_request @ 00010548 size=100

undefined4 ssp_gpio_request(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0xff) {
    printk("ssp---%s, (%s)PIN_INVALID \n","ssp_gpio_request",param_2);
    return 0xff;
  }
  if (param_1 != 0x76) {
    uVar1 = gpio_request();
    return uVar1;
  }
  return 0;
}



// ==== ssp_gpio_free @ 000105ac size=48

void ssp_gpio_free(int param_1)

{
  if ((param_1 != 0xff) && (param_1 != 0x76)) {
    gpio_free();
    return;
  }
  return;
}



// ==== ssp_gpio_direction_output @ 000105dc size=96

undefined4 ssp_gpio_direction_output(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0xff) {
    printk("ssp---%s, PIN_INVALID \n","ssp_gpio_direction_output");
    return 0xff;
  }
  if (param_1 != 0x76) {
    uVar1 = gpio_direction_output();
    return uVar1;
  }
  return 0;
}



// ==== ssp_gpio_set_value @ 0001063c size=120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ssp_gpio_set_value(int param_1,int param_2)

{
  if (param_1 == 0xff) {
    printk("ssp---%s, PIN_INVALID \n","ssp_gpio_set_value");
    return;
  }
  if (param_1 == 0x76) {
    if (param_2 == 0) {
      _DAT_b8140024 = _DAT_b8140024 & 0xfffdffff;
    }
    else {
      _DAT_b8140024 = _DAT_b8140024 | 0x20000;
    }
    return;
  }
  __gpio_set_value();
  return;
}



