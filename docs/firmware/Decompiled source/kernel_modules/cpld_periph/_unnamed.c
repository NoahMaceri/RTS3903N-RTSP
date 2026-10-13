/* cpld_periph — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cpld_periph.h"

// ==== FUN_00010144 @ 00010144 size=28

void FUN_00010144(undefined4 param_1)

{
  cpld_gpio_direction_output(PORT_IR_CUT_DN_CATHODE,param_1);
  return;
}



// ==== FUN_00010160 @ 00010160 size=28

void FUN_00010160(undefined4 param_1)

{
  cpld_gpio_direction_output(PORT_IR_CUT_DN_ANODE,param_1);
  return;
}



// ==== FUN_000101e8 @ 000101e8 size=1484

undefined4 FUN_000101e8(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_gp;
  int local_18 [2];
  
  local_18[0] = 0;
  if ((param_2 >> 8 & 0xff) != 0x70) {
    printk("KERN_ERR [CPLD_PERIPH] cmd(%d) is invalid \n");
    return 0xffffffff;
  }
  param_2 = param_2 & 0xff;
  if (DAT_000118e8 != 0) {
    printk("cpld---hue, cpld_ioctl() cmd get (%d) \n",param_2);
  }
  uVar5 = PORT_AUDIO_ENABLE;
  uVar4 = PORT_LED_GREEN;
  switch(param_2) {
  case 1:
    DAT_000118f4 = 1;
    uVar3 = LED_GREEN;
    if (DAT_000118ec != '\0') break;
    goto LAB_0001056c;
  case 2:
    DAT_000118f4 = 0;
    uVar3 = LED_GREEN;
    goto LAB_00010568;
  default:
    uVar6 = 0xffffffff;
    if (DAT_000118e8 != 0) {
      printk("cpld---hue, cpld_ioctl() cmd(%d) invalid !!! \n",param_2);
    }
    goto LAB_00010778;
  case 4:
    DAT_000118f4 = 2;
    break;
  case 9:
    DAT_000118f0 = 1;
    uVar4 = PORT_LED_RED;
    uVar3 = LED_RED;
    if (DAT_000118ec == '\0') goto LAB_0001056c;
    break;
  case 10:
    DAT_000118f0 = 0;
    uVar4 = PORT_LED_RED;
    uVar3 = LED_RED;
LAB_00010568:
    uVar3 = (uint)(uVar3 == 0);
LAB_0001056c:
    uVar6 = 0;
    cpld_gpio_set_value(uVar4,uVar3);
    goto LAB_00010778;
  case 0xc:
    DAT_000118f0 = 2;
    break;
  case 0xe:
    uVar5 = PORT_FACTORY_DEFAULT;
    goto LAB_000102c8;
  case 0xf:
    break;
  case 0x10:
    uVar3 = AUDIO_ON;
    goto LAB_0001042c;
  case 0x11:
    uVar3 = (uint)(AUDIO_ON == 0);
    goto LAB_0001042c;
  case 0x12:
LAB_000102c8:
    uVar6 = cpld_gpio_get_value(uVar5);
    goto LAB_00010778;
  case 0x13:
    if (((param_3 + 4 | param_3) & *(uint *)(unaff_gp + 0x18)) == 0) {
      __copy_user(local_18,param_3,4);
    }
    if (DAT_000118e8 != 0) {
      printk("cpld---KERN_DBG [CPLD_PERIPH] cmd(%d) value = %d \n",0x13,local_18[0]);
    }
    uVar5 = PORT_IR_LED;
    uVar3 = IR_ON;
    if (local_18[0] < 1) {
      uVar3 = (uint)(IR_ON == 0);
    }
LAB_0001042c:
    uVar6 = 0;
    cpld_gpio_direction_output(uVar5,uVar3);
    goto LAB_00010778;
  case 0x14:
    uVar3 = cpld_gpio_get_value(PORT_IR_LED);
    if (uVar3 == IR_ON) {
      local_18[0] = 100;
    }
    else {
      local_18[0] = 0;
    }
    if (((param_3 + 4 | param_3) & *(uint *)(unaff_gp + 0x18)) == 0) {
      __copy_user(param_3,local_18,4);
    }
    if (DAT_000118e8 != 0) {
      printk("cpld---KERN_DBG [CPLD_PERIPH] cmd(%d) value = %d \n",0x14,local_18[0]);
      uVar6 = 0;
      goto LAB_00010778;
    }
    break;
  case 0x15:
    FUN_00010144(1);
    uVar5 = 0;
    goto LAB_0001030c;
  case 0x16:
    FUN_00010144(0);
    uVar5 = 1;
LAB_0001030c:
    FUN_00010160(uVar5);
    msleep(200);
    FUN_00010144(0);
    FUN_00010160(0);
    uVar6 = 0;
    goto LAB_00010778;
  case 0x17:
    iVar1 = cpld_gpio_get_value(PORT_IR_CUT_DN_CATHODE);
    iVar2 = cpld_gpio_get_value(PORT_IR_CUT_DN_ANODE);
    if (iVar1 == 1) {
      uVar6 = 1;
      if (iVar2 == 0) goto LAB_00010778;
      uVar6 = 3;
    }
    else {
      uVar6 = 0;
      if (iVar1 != 0) goto LAB_00010778;
      uVar6 = 2;
    }
    if (iVar2 != 1) {
      uVar6 = 0;
    }
    goto LAB_00010778;
  case 0x1b:
    cpld_gpio_set_value(PORT_LED_GREEN,LED_GREEN == 0);
    cpld_gpio_set_value(PORT_LED_RED,LED_RED == 0);
    DAT_000118ec = '\x01';
    break;
  case 0x1c:
    if (DAT_000118f4 == 1) {
      cpld_gpio_set_value(PORT_LED_GREEN,LED_GREEN);
    }
    if (DAT_000118f0 == 1) {
      cpld_gpio_set_value(PORT_LED_RED,LED_RED);
    }
    DAT_000118ec = '\0';
    break;
  case 0x23:
    cpld_gpio_set_value(PORT_WHITE_LIGHT_PIN,LED_WHITE_ON);
    if (DAT_000118e8 != 0) {
      uVar5 = 0x23;
LAB_0001072c:
      uVar6 = 0;
      printk("cpld---KERN_DBG [CPLD_PERIPH] cmd(%d) \n",uVar5);
      goto LAB_00010778;
    }
    break;
  case 0x24:
    cpld_gpio_set_value(PORT_WHITE_LIGHT_PIN,LED_WHITE_ON == 0);
    if (DAT_000118e8 != 0) {
      uVar5 = 0x24;
      goto LAB_0001072c;
    }
    break;
  case 0x25:
    cpld_gpio_set_value(PORT_LED_ETHERNET,LED_ETH_ON);
    if (DAT_000118e8 != 0) {
      uVar5 = 0x25;
      goto LAB_0001072c;
    }
    break;
  case 0x26:
    cpld_gpio_set_value(PORT_LED_ETHERNET,LED_ETH_ON == 0);
    if (DAT_000118e8 != 0) {
      uVar5 = 0x26;
      goto LAB_0001072c;
    }
  }
  uVar6 = 0;
LAB_00010778:
  if (DAT_000118e8 != 0) {
    printk("cpld---hue, cpld_ioctl() ret (%ld) \n",uVar6);
  }
  return uVar6;
}



// ==== FUN_000107b4 @ 000107b4 size=192

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000107b4(void)

{
  if ((DAT_000118f4 == 2) && (DAT_000118ec == '\0')) {
    cpld_gpio_set_value(PORT_LED_GREEN,DAT_000118e4);
  }
  if ((DAT_000118f0 == 2) && (DAT_000118ec == '\0')) {
    cpld_gpio_set_value(PORT_LED_RED,DAT_000118e4);
  }
  DAT_000118e4 = (uint)(DAT_000118e4 == 0);
  DAT_00011900 = _jiffies + 1000;
  add_timer();
  return;
}



