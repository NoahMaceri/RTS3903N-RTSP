/* cpld_periph — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cpld_periph.h"

// ==== init_module @ 00010888 size=1828

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 init_module(void)

{
  char cVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  sVar2 = strlen(PTR_DAT_000117b4);
  if ((sVar2 != 0x20) || (sVar2 = strlen(PTR_DAT_000117b0), sVar2 != 0x20)) {
    sVar2 = strlen(PTR_DAT_000117b4);
    sVar3 = strlen(PTR_DAT_000117b0);
    printk("(strlen(hw)=(%d), strlen(gpio)=(%d), params error !!! \n",sVar2,sVar3);
    return 0xfffffff2;
  }
  printk("hw  =[%s] \n",PTR_DAT_000117b4);
  printk("gpio=[%s] \n",PTR_DAT_000117b0);
  iVar4 = misc_register(&DAT_000116e0);
  if (iVar4 == 0) {
    uVar6 = 0;
    if (DAT_000118e8 != 0) {
      printk("cpld---\n[CPLD_PERIPH] cpld_init ok, [ ver=%s, %s ] \n","Dec  5 2019","13:42:40");
    }
  }
  else {
    uVar6 = 0xfffffff2;
    if (DAT_000118e8 != 0) {
      printk("cpld---KERN_ERR [CPLD_PERIPH] cpld_init fail, [ misc_register fail ] \n");
    }
  }
  cVar1 = *PTR_DAT_000117b0;
  if (cVar1 == '2') {
    PORT_LED_GREEN = 0xb;
    cpld_gpio_request(0xb,"PORT_LED_GREEN");
    uVar5 = PORT_LED_GREEN;
    iVar4 = LED_GREEN;
LAB_00010a1c:
    cpld_gpio_direction_output(uVar5,iVar4);
  }
  else {
    if (cVar1 == '3') {
      PORT_LED_ETHERNET = 0xb;
      cpld_gpio_request(0xb,"ETH_LIGHT");
      uVar5 = PORT_LED_ETHERNET;
      iVar4 = LED_ETH_ON;
      goto LAB_00010a1c;
    }
    if (cVar1 == '4') {
      PORT_IR_LED = 0xb;
      cpld_gpio_request(0xb,"PORT_IR_LED");
      if (PTR_DAT_000117b4[7] == '2') {
        IR_ON = 0;
      }
    }
  }
  cVar1 = PTR_DAT_000117b0[2];
  if (cVar1 == '2') {
    LED_GREEN = 0;
LAB_00010aac:
    PORT_LED_GREEN = 0x16;
    cpld_gpio_request(0x16,"PORT_LED_GREEN");
    uVar5 = PORT_LED_GREEN;
    iVar4 = LED_GREEN;
LAB_00010b30:
    cpld_gpio_direction_output(uVar5,iVar4 == 0);
  }
  else {
    if (cVar1 == '3') {
      LED_GREEN = 1;
      goto LAB_00010aac;
    }
    if (cVar1 == '4') {
      LED_RED = 0;
LAB_00010b04:
      PORT_LED_RED = 0x16;
      cpld_gpio_request(0x16,"PORT_LED_RED");
      uVar5 = PORT_LED_RED;
      iVar4 = LED_RED;
      goto LAB_00010b30;
    }
    if (cVar1 == '5') {
      LED_RED = 1;
      goto LAB_00010b04;
    }
  }
  if (PTR_DAT_000117b0[3] == '2') {
    PORT_IR_LED = 0x12;
    cpld_gpio_request(0x12,"PORT_IR_LED");
    if (PTR_DAT_000117b4[7] == '2') {
      IR_ON = 0;
    }
  }
  else if (PTR_DAT_000117b0[3] == '3') {
    PORT_WHITE_LIGHT_PIN = 0x12;
    cpld_gpio_request(0x12,"WHITE_LIGHT");
    cpld_gpio_direction_output(PORT_WHITE_LIGHT_PIN,LED_WHITE_ON == 0);
  }
  if (PTR_DAT_000117b0[4] == '2') {
    PORT_WHITE_LIGHT_PIN = 0x13;
    cpld_gpio_request(0x13,"WHITE_LIGHT");
    cpld_gpio_direction_output(PORT_WHITE_LIGHT_PIN,LED_WHITE_ON == 0);
  }
  else if (PTR_DAT_000117b0[4] == '3') {
    PORT_IR_LED = 0x13;
    cpld_gpio_request(0x13,"PORT_IR_LED");
    if (PTR_DAT_000117b4[7] == '2') {
      IR_ON = 0;
    }
  }
  cVar1 = PTR_DAT_000117b0[7];
  if (cVar1 == '3') {
    LED_RED = 0;
LAB_00010cb0:
    PORT_LED_RED = 0xf;
    cpld_gpio_request(0xf,"PORT_LED_RED");
    uVar5 = PORT_LED_RED;
    iVar4 = LED_RED;
LAB_00010d34:
    cpld_gpio_direction_output(uVar5,iVar4 == 0);
  }
  else {
    if (cVar1 == '4') {
      LED_RED = 1;
      goto LAB_00010cb0;
    }
    if (cVar1 == '5') {
      LED_GREEN = 0;
LAB_00010d08:
      PORT_LED_GREEN = 0xf;
      cpld_gpio_request(0xf,"PORT_LED_GREEN");
      uVar5 = PORT_LED_GREEN;
      iVar4 = LED_GREEN;
      goto LAB_00010d34;
    }
    if (cVar1 == '6') {
      LED_GREEN = 1;
      goto LAB_00010d08;
    }
  }
  if (PTR_DAT_000117b0[8] == '1') {
    PORT_FACTORY_DEFAULT = 6;
    cpld_gpio_request(6,"PORT_FACTORY_DEFAULT");
    cpld_gpio_direction_input(PORT_FACTORY_DEFAULT);
  }
  if (PTR_DAT_000117b0[9] == '1') {
    PORT_AUDIO_ENABLE = 9;
    cpld_gpio_request(9,"PORT_AUDIO_ENABLE");
    if (PTR_DAT_000117b4[6] == '2') {
      AUDIO_ON = 0;
    }
  }
  if (PTR_DAT_000117b0[0xb] == '2') {
    PORT_IR_LED = 0;
    cpld_gpio_request(0,"PORT_IR_LED");
    if (PTR_DAT_000117b4[7] == '2') {
      IR_ON = 0;
    }
  }
  if (PTR_DAT_000117b0[0xc] == '1') {
    PORT_IR_CUT_DN_ANODE = 0x14;
    uVar5 = 0x14;
LAB_00010e70:
    cpld_gpio_request(uVar5,"PORT_IR_CUT_DN_ANODE");
  }
  else if (PTR_DAT_000117b0[0xd] == '2') {
    PORT_IR_CUT_DN_ANODE = 0x15;
    uVar5 = 0x15;
    goto LAB_00010e70;
  }
  if (PTR_DAT_000117b0[0xd] == '1') {
    PORT_IR_CUT_DN_CATHODE = 0x15;
    uVar5 = 0x15;
  }
  else {
    if (PTR_DAT_000117b0[0xc] != '2') goto LAB_00010ee0;
    PORT_IR_CUT_DN_CATHODE = 0x14;
    uVar5 = 0x14;
  }
  cpld_gpio_request(uVar5,"PORT_IR_CUT_DN_CATHODE");
LAB_00010ee0:
  init_timer_key(&DAT_000118f8,0,0,0);
  DAT_0001190c = 5;
  DAT_00011900 = _jiffies + 1000;
  DAT_00011908 = FUN_000107b4;
  add_timer();
  if (DAT_000118e8 != 0) {
    printk("cpld---[CPLD_PERIPH] timer init ok.\n");
  }
  proc_create_data("driver/cpld",0x309,0,&DAT_00011568,0);
  printk("[CPLD_PERIPH] CPLD_PERIPH module inited \n");
  return uVar6;
}



// ==== cleanup_module @ 00010fac size=324

void cleanup_module(void)

{
  remove_proc_entry("driver/cpld",0);
  misc_deregister(&DAT_000116e0);
  if (DAT_000118e8 != 0) {
    printk("cpld---\n[CPLD_PERIPH] misc_dev deregistered \n");
  }
  cpld_gpio_free(PORT_FACTORY_DEFAULT);
  cpld_gpio_free(PORT_AUDIO_ENABLE);
  cpld_gpio_free(PORT_IR_CUT_DN_CATHODE);
  cpld_gpio_free(PORT_IR_CUT_DN_ANODE);
  cpld_gpio_free(PORT_WHITE_LIGHT_PIN);
  cpld_gpio_free(PORT_WIFI_PWR);
  cpld_gpio_free(PORT_SDIO_ENABLE);
  cpld_gpio_free(PORT_IR_LED);
  cpld_gpio_free(PORT_LED_GREEN);
  cpld_gpio_free(PORT_LED_ETHERNET);
  if (DAT_0001190c != 0) {
    del_timer(&DAT_000118f8);
  }
  DAT_0001190c = 0;
  if (DAT_000118e8 != 0) {
    printk("cpld---[CPLD_PERIPH] Timer closed.\n");
  }
  printk("[CPLD_PERIPH] CPLD_PERIPH module exited \n");
  return;
}



