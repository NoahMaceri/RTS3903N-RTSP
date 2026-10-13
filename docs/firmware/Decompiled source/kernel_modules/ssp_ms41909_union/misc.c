/* ssp_ms41909_union — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "ssp_ms41909_union.h"

// ==== init_module @ 00010e20 size=1912

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int init_module(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  
  printk("moto, stepmotor_function_init() \n");
  sVar5 = strlen(PTR_DAT_00011c84);
  sVar6 = strlen(PTR_DAT_00011c80);
  printk("\n(strlen(hw)=(%d), strlen(gpio)=(%d) \n",sVar5,sVar6);
  sVar5 = strlen(PTR_DAT_00011c84);
  if ((sVar5 != 0x20) || (sVar5 = strlen(PTR_DAT_00011c80), sVar5 != 0x20)) {
    sVar5 = strlen(PTR_DAT_00011c84);
    sVar6 = strlen(PTR_DAT_00011c80);
    printk("(strlen(hw)=(%d), strlen(gpio)=(%d) params error !!! \n",sVar5,sVar6);
    return -0xe;
  }
  printk("hw[%s] \n",PTR_DAT_00011c84);
  printk("gpio[%s] \n",PTR_DAT_00011c80);
  if (*PTR_DAT_00011c84 == '1') {
    if ((((*PTR_DAT_00011c80 == '1') && (PTR_DAT_00011c80[1] == '1')) &&
        (PTR_DAT_00011c80[2] == '1')) &&
       (((PTR_DAT_00011c80[3] == '1' && (PTR_DAT_00011c80[4] == '1')) &&
        ((PTR_DAT_00011c80[5] == '1' &&
         ((PTR_DAT_00011c80[6] == '1' && (PTR_DAT_00011c80[7] == '1')))))))) {
      printk("hw use 8 pin motor, PIN71/PIN38/PIN69/PIN34/PIN35/PIN37/PIN36/PIN39 \n");
      MOTO_X_GPIO1 = 0x13;
      MOTO_X_GPIO2 = 0x11;
      MOTO_X_GPIO3 = 0x10;
      MOTO_X_GPIO4 = 0xf;
      MOTO_Y_GPIO1 = 0xb;
      MOTO_Y_GPIO2 = 0xe;
      MOTO_Y_GPIO3 = 0x16;
      MOTO_Y_GPIO4 = 0x12;
    }
    else {
      if ((PTR_DAT_00011c80[10] != '4') ||
         ((((PTR_DAT_00011c80[3] != '4' || (PTR_DAT_00011c80[4] != '4')) ||
           (PTR_DAT_00011c80[5] != '4')) || (PTR_DAT_00011c80[6] != '4')))) goto LAB_000110a0;
      printk("hw use 4+1 pin motor, PIN76/PIN34/PIN35/PIN37/PIN36 \n");
      MOTO_HV = 0x76;
      MOTO_Y_GPIO1 = 0x12;
      MOTO_X_GPIO1 = 0x12;
      MOTO_Y_GPIO2 = 0x13;
      MOTO_X_GPIO2 = 0x13;
      MOTO_Y_GPIO3 = 0x11;
      MOTO_X_GPIO3 = 0x11;
      MOTO_Y_GPIO4 = 0x10;
      MOTO_X_GPIO4 = 0x10;
    }
    puVar7 = (undefined4 *)kmem_cache_alloc(_DAT_00012068,0x80d0);
    DAT_00011dd8 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      printk(&_LC13);
      iVar8 = -1;
    }
    else {
      *puVar7 = &_LC14;
      puVar7[2] = stepmotor_misc;
      puVar7[3] = &step_motor_array;
      puVar7[4] = 2;
      puVar7[9] = FUN_000100bc;
      puVar7[10] = &LAB_00010030;
      puVar7[0xb] = FUN_00010268;
      puVar7[0xc] = &LAB_00010150;
      puVar7[0xd] = &LAB_0001004c;
      puVar1 = PTR_DAT_00011c84;
      puVar7[1] = 0;
      puVar7[7] = 0;
      puVar7[5] = 0;
      puVar7[8] = 0;
      puVar7[6] = 0;
      if (puVar1[8] == '2') {
        printk("moto, hw[PTZ_XY] == HW_REVERSE \n");
        uVar4 = MOTO_H_ON;
        uVar3 = MOTO_X_GPIO2;
        uVar12 = MOTO_X_GPIO3;
        uVar2 = MOTO_X_GPIO4;
        MOTO_H_ON = MOTO_V_ON;
        uVar10 = MOTO_X_GPIO1;
        MOTO_X_GPIO1 = MOTO_Y_GPIO1;
        MOTO_V_ON = uVar4;
        MOTO_X_GPIO2 = MOTO_Y_GPIO2;
        MOTO_X_GPIO3 = MOTO_Y_GPIO3;
        MOTO_X_GPIO4 = MOTO_Y_GPIO4;
        MOTO_Y_GPIO2 = uVar3;
        MOTO_Y_GPIO3 = uVar12;
        MOTO_Y_GPIO4 = uVar2;
        MOTO_Y_GPIO1 = uVar10;
      }
      if (PTR_DAT_00011c84[1] == '2') {
        printk("moto, hw[PTZ_HOR] == HW_REVERSE \n");
        uVar2 = MOTO_X_GPIO2;
        uVar12 = MOTO_X_GPIO1;
        MOTO_X_GPIO2 = MOTO_X_GPIO3;
        MOTO_X_GPIO1 = MOTO_X_GPIO4;
        MOTO_X_GPIO3 = uVar2;
        MOTO_X_GPIO4 = uVar12;
      }
      if (PTR_DAT_00011c84[2] == '2') {
        printk("moto, hw[PTZ_VER] == HW_REVERSE \n");
        uVar12 = MOTO_Y_GPIO1;
        uVar2 = MOTO_Y_GPIO2;
        MOTO_Y_GPIO1 = MOTO_Y_GPIO4;
        MOTO_Y_GPIO2 = MOTO_Y_GPIO3;
        MOTO_Y_GPIO3 = uVar2;
        MOTO_Y_GPIO4 = uVar12;
      }
      puVar7 = DAT_00011dd8;
      uVar2 = MOTO_X_GPIO2;
      *(undefined4 *)(*(int *)DAT_00011dd8[3] + 0x48) = MOTO_X_GPIO1;
      uVar12 = MOTO_HV;
      *(undefined4 *)(*(int *)puVar7[3] + 0x4c) = uVar2;
      *(undefined4 *)(*(int *)puVar7[3] + 0x50) = MOTO_X_GPIO3;
      *(undefined4 *)(*(int *)puVar7[3] + 0x54) = MOTO_X_GPIO4;
      *(undefined4 *)(*(int *)(puVar7[3] + 4) + 0x48) = MOTO_Y_GPIO1;
      *(undefined4 *)(*(int *)(puVar7[3] + 4) + 0x4c) = MOTO_Y_GPIO2;
      *(undefined4 *)(*(int *)(puVar7[3] + 4) + 0x50) = MOTO_Y_GPIO3;
      *(undefined4 *)(*(int *)(puVar7[3] + 4) + 0x54) = MOTO_Y_GPIO4;
      ssp_gpio_request(uVar12,"MOTO_HV");
      ssp_gpio_direction_output(MOTO_HV,0);
      for (iVar8 = 0; iVar8 < (int)DAT_00011dd8[4]; iVar8 = iVar8 + 1) {
        iVar11 = *(int *)(DAT_00011dd8[3] + iVar8 * 4);
        if (((*(int *)(iVar11 + 0x48) != 0) && (*(int *)(iVar11 + 0x4c) != 0)) &&
           ((*(int *)(iVar11 + 0x50) != 0 && (*(int *)(iVar11 + 0x54) != 0)))) {
          *(undefined4 *)(iVar11 + 0xc) = 2;
          *(undefined4 *)(iVar11 + 0x10) = 8000;
          *(undefined4 *)(iVar11 + 4) = 0;
          *(undefined4 *)(iVar11 + 8) = 0;
          init_timer_key(iVar11 + 0x14,0,0,0);
          *(undefined4 *)(iVar11 + 0x5c) = 8;
          *(code **)(iVar11 + 0x68) = FUN_00010444;
          *(undefined1 **)(iVar11 + 0x6c) = &LAB_000109d0;
          *(code **)(iVar11 + 0x24) = FUN_00010af8;
          *(int *)(iVar11 + 0x28) = iVar11;
          *(undefined4 *)(iVar11 + 0x30) = 0;
          *(undefined4 *)(iVar11 + 0x34) = 0;
          *(undefined4 *)(iVar11 + 0x38) = 0;
          *(undefined4 *)(iVar11 + 0x3c) = 0;
          *(undefined4 *)(iVar11 + 0x40) = 0;
          *(undefined4 *)(iVar11 + 0x44) = 0;
          *(undefined1 **)(iVar11 + 0x58) = timing;
          *(undefined4 *)(iVar11 + 0x60) = 0;
          *(code **)(iVar11 + 0x70) = FUN_00010384;
          iVar9 = ssp_gpio_request(*(undefined4 *)(iVar11 + 0x54),"motor_4");
          if (iVar9 != 0) {
            printk(&_LC20,"activate_ports",*(undefined4 *)(iVar11 + 0x54));
          }
          iVar9 = ssp_gpio_request(*(undefined4 *)(iVar11 + 0x50),"motor_3");
          if (iVar9 != 0) {
            printk(&_LC20,"activate_ports",*(undefined4 *)(iVar11 + 0x50));
          }
          iVar9 = ssp_gpio_request(*(undefined4 *)(iVar11 + 0x4c),"motor_2");
          if (iVar9 != 0) {
            printk(&_LC20,"activate_ports",*(undefined4 *)(iVar11 + 0x4c));
          }
          iVar9 = ssp_gpio_request(*(undefined4 *)(iVar11 + 0x48),"motor_1");
          if (iVar9 != 0) {
            printk(&_LC20,"activate_ports",*(undefined4 *)(iVar11 + 0x48));
          }
          ssp_gpio_direction_output(*(undefined4 *)(iVar11 + 0x48),0);
          ssp_gpio_direction_output(*(undefined4 *)(iVar11 + 0x4c),0);
          ssp_gpio_direction_output(*(undefined4 *)(iVar11 + 0x50),0);
          ssp_gpio_direction_output(*(undefined4 *)(iVar11 + 0x54),0);
          FUN_00010970(iVar11);
        }
      }
      iVar8 = misc_register(DAT_00011dd8[2]);
      if (iVar8 < 0) {
        printk(&_LC24);
      }
      printk(&_LC25);
    }
  }
  else {
LAB_000110a0:
    printk("moto not support !!! \n");
    iVar8 = -0xe;
  }
  return iVar8;
}



// ==== cleanup_module @ 00011598 size=244

void cleanup_module(void)

{
  int iVar1;
  int iVar2;
  
  printk("moto, stepmotor_function_exit() \n");
  (**(code **)(DAT_00011dd8 + 0x28))(DAT_00011dd8,0);
  (**(code **)(DAT_00011dd8 + 0x28))(DAT_00011dd8,1);
  for (iVar2 = 0; iVar2 < *(int *)(DAT_00011dd8 + 0x10); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(DAT_00011dd8 + 0xc) + iVar2 * 4);
    ssp_gpio_free(*(undefined4 *)(iVar1 + 0x48));
    ssp_gpio_free(*(undefined4 *)(iVar1 + 0x4c));
    ssp_gpio_free(*(undefined4 *)(iVar1 + 0x50));
    ssp_gpio_free(*(undefined4 *)(iVar1 + 0x54));
  }
  misc_deregister(*(undefined4 *)(DAT_00011dd8 + 8));
  kfree(DAT_00011dd8);
  return;
}



