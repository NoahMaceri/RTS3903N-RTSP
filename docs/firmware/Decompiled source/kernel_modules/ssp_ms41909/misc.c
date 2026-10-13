/* ssp_ms41909 — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "ssp_ms41909.h"

// ==== MS_MHal_GPIO_Pad_Oen @ 00010c80 size=120

void MS_MHal_GPIO_Pad_Oen(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = gpio_direction_output(param_1,0);
  if (iVar1 != 0) {
    printk(&_LC3,"MS_MHal_GPIO_Pad_Oen",param_1);
  }
  printk(&_LC4,"MS_MHal_GPIO_Pad_Oen",param_1);
  return;
}



// ==== init_module @ 00010cf8 size=1764

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int init_module(void)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  printk("moto, stepmotor_function_init() \n");
  sVar2 = strlen(PTR_DAT_00011990);
  sVar3 = strlen(PTR_DAT_0001198c);
  printk("\n(strlen(hw)=(%d), strlen(gpio)=(%d) \n",sVar2,sVar3);
  sVar2 = strlen(PTR_DAT_00011990);
  if ((sVar2 != 0x20) || (sVar2 = strlen(PTR_DAT_0001198c), sVar2 != 0x20)) {
    sVar2 = strlen(PTR_DAT_00011990);
    sVar3 = strlen(PTR_DAT_0001198c);
    printk("(strlen(hw)=(%d), strlen(gpio)=(%d) params error !!! \n",sVar2,sVar3);
    return -0xe;
  }
  printk("hw[%s] \n",PTR_DAT_00011990);
  printk("gpio[%s] \n",PTR_DAT_0001198c);
  if ((((*PTR_DAT_00011990 != '0') &&
       (((*PTR_DAT_0001198c == '1' && (PTR_DAT_0001198c[1] == '1')) && (PTR_DAT_0001198c[2] == '1'))
       )) && (((PTR_DAT_0001198c[3] == '1' && (PTR_DAT_0001198c[4] == '1')) &&
              (PTR_DAT_0001198c[5] == '1')))) &&
     ((PTR_DAT_0001198c[6] == '1' && (PTR_DAT_0001198c[7] == '1')))) {
    puVar4 = (undefined4 *)kmem_cache_alloc(_DAT_00012068,0x80d0);
    DAT_00011b78 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      printk(&_LC11);
      return -1;
    }
    *puVar4 = &_LC12;
    puVar4[2] = stepmotor_misc;
    puVar4[3] = &step_motor_array;
    puVar4[4] = 2;
    puVar4[9] = FUN_000100bc;
    puVar4[10] = &LAB_00010030;
    puVar4[0xb] = FUN_000104f8;
    puVar4[0xc] = FUN_000103e0;
    puVar4[0xd] = &LAB_0001004c;
    puVar4[1] = 0;
    puVar4[7] = 0;
    puVar4[5] = 0;
    puVar4[8] = 0;
    puVar4[6] = 0;
    if (PTR_DAT_00011990[8] == '2') {
      MOTO_X_GPIO0 = 0xb;
      MOTO_X_GPIO1 = 0xe;
      MOTO_X_GPIO2 = 0x16;
      MOTO_X_GPIO3 = 0x12;
      MOTO_Y_GPIO0 = 0x13;
      MOTO_Y_GPIO1 = 0x11;
      MOTO_Y_GPIO2 = 0x10;
      MOTO_Y_GPIO3 = 0xf;
    }
    else {
      MOTO_X_GPIO0 = 0x13;
      MOTO_X_GPIO1 = 0x11;
      MOTO_X_GPIO2 = 0x10;
      MOTO_X_GPIO3 = 0xf;
      MOTO_Y_GPIO0 = 0xb;
      MOTO_Y_GPIO1 = 0xe;
      MOTO_Y_GPIO2 = 0x16;
      MOTO_Y_GPIO3 = 0x12;
    }
    if (PTR_DAT_00011990[1] == '2') {
      printk("moto, hw[PTZ_HOR] == HW_REVERSE \n");
      GPIO_PTZ_MSC316D_MOTOR_1_D1 = MOTO_X_GPIO3;
      GPIO_PTZ_MSC316D_MOTOR_1_D3 = MOTO_X_GPIO1;
      GPIO_PTZ_MSC316D_MOTOR_1_D2 = MOTO_X_GPIO2;
      GPIO_PTZ_MSC316D_MOTOR_1_D4 = MOTO_X_GPIO0;
    }
    else {
      GPIO_PTZ_MSC316D_MOTOR_1_D2 = MOTO_X_GPIO1;
      GPIO_PTZ_MSC316D_MOTOR_1_D1 = MOTO_X_GPIO0;
      GPIO_PTZ_MSC316D_MOTOR_1_D3 = MOTO_X_GPIO2;
      GPIO_PTZ_MSC316D_MOTOR_1_D4 = MOTO_X_GPIO3;
    }
    if (PTR_DAT_00011990[2] == '2') {
      printk("moto, hw[PTZ_VER] == HW_REVERSE \n");
      GPIO_PTZ_MSC316D_MOTOR_2_D1 = MOTO_Y_GPIO3;
      GPIO_PTZ_MSC316D_MOTOR_2_D2 = MOTO_Y_GPIO2;
      GPIO_PTZ_MSC316D_MOTOR_2_D3 = MOTO_Y_GPIO1;
      GPIO_PTZ_MSC316D_MOTOR_2_D4 = MOTO_Y_GPIO0;
    }
    else {
      GPIO_PTZ_MSC316D_MOTOR_2_D1 = MOTO_Y_GPIO0;
      GPIO_PTZ_MSC316D_MOTOR_2_D2 = MOTO_Y_GPIO1;
      GPIO_PTZ_MSC316D_MOTOR_2_D3 = MOTO_Y_GPIO2;
      GPIO_PTZ_MSC316D_MOTOR_2_D4 = MOTO_Y_GPIO3;
    }
    puVar4 = DAT_00011b78;
    uVar1 = GPIO_PTZ_MSC316D_MOTOR_2_D1;
    *(undefined4 *)(*(int *)DAT_00011b78[3] + 0x48) = GPIO_PTZ_MSC316D_MOTOR_1_D1;
    *(undefined4 *)(*(int *)puVar4[3] + 0x4c) = GPIO_PTZ_MSC316D_MOTOR_1_D2;
    *(undefined4 *)(*(int *)puVar4[3] + 0x50) = GPIO_PTZ_MSC316D_MOTOR_1_D3;
    *(undefined4 *)(*(int *)puVar4[3] + 0x54) = GPIO_PTZ_MSC316D_MOTOR_1_D4;
    *(undefined4 *)(*(int *)(puVar4[3] + 4) + 0x48) = uVar1;
    *(undefined4 *)(*(int *)(puVar4[3] + 4) + 0x4c) = GPIO_PTZ_MSC316D_MOTOR_2_D2;
    *(undefined4 *)(*(int *)(puVar4[3] + 4) + 0x50) = GPIO_PTZ_MSC316D_MOTOR_2_D3;
    *(undefined4 *)(*(int *)(puVar4[3] + 4) + 0x54) = GPIO_PTZ_MSC316D_MOTOR_2_D4;
    for (iVar7 = 0; iVar7 < (int)DAT_00011b78[4]; iVar7 = iVar7 + 1) {
      iVar6 = *(int *)(DAT_00011b78[3] + iVar7 * 4);
      if ((((*(int *)(iVar6 + 0x48) != 0) && (*(int *)(iVar6 + 0x4c) != 0)) &&
          (*(int *)(iVar6 + 0x50) != 0)) && (*(int *)(iVar6 + 0x54) != 0)) {
        *(undefined4 *)(iVar6 + 0xc) = 2;
        *(undefined4 *)(iVar6 + 0x10) = 8000;
        *(undefined4 *)(iVar6 + 4) = 0;
        *(undefined4 *)(iVar6 + 8) = 0;
        init_timer_key(iVar6 + 0x14,0,0,0);
        *(undefined4 *)(iVar6 + 0x5c) = 8;
        *(code **)(iVar6 + 0x68) = FUN_0001085c;
        *(undefined1 **)(iVar6 + 0x6c) = &LAB_00010734;
        *(code **)(iVar6 + 0x24) = FUN_00010960;
        *(int *)(iVar6 + 0x28) = iVar6;
        *(undefined4 *)(iVar6 + 0x30) = 0;
        *(undefined4 *)(iVar6 + 0x34) = 0;
        *(undefined4 *)(iVar6 + 0x38) = 0;
        *(undefined4 *)(iVar6 + 0x3c) = 0;
        *(undefined4 *)(iVar6 + 0x40) = 0;
        *(undefined4 *)(iVar6 + 0x44) = 0;
        *(undefined1 **)(iVar6 + 0x58) = timing;
        *(undefined4 *)(iVar6 + 0x60) = 0;
        *(code **)(iVar6 + 0x70) = FUN_00010614;
        iVar5 = gpio_request(*(undefined4 *)(iVar6 + 0x54),"motor_4");
        if (iVar5 != 0) {
          printk(&_LC16,"activate_ports",*(undefined4 *)(iVar6 + 0x54));
        }
        iVar5 = gpio_request(*(undefined4 *)(iVar6 + 0x50),"motor_3");
        if (iVar5 != 0) {
          printk(&_LC16,"activate_ports",*(undefined4 *)(iVar6 + 0x50));
        }
        iVar5 = gpio_request(*(undefined4 *)(iVar6 + 0x4c),"motor_2");
        if (iVar5 != 0) {
          printk(&_LC16,"activate_ports",*(undefined4 *)(iVar6 + 0x4c));
        }
        iVar5 = gpio_request(*(undefined4 *)(iVar6 + 0x48),"motor_1");
        if (iVar5 != 0) {
          printk(&_LC16,"activate_ports",*(undefined4 *)(iVar6 + 0x48));
        }
        MS_MHal_GPIO_Pad_Oen(*(undefined1 *)(iVar6 + 0x48));
        MS_MHal_GPIO_Pad_Oen(*(undefined1 *)(iVar6 + 0x4c));
        MS_MHal_GPIO_Pad_Oen(*(undefined1 *)(iVar6 + 0x50));
        MS_MHal_GPIO_Pad_Oen(*(undefined1 *)(iVar6 + 0x54));
        FUN_000106d4(iVar6);
      }
    }
    iVar7 = misc_register(DAT_00011b78[2]);
    if (iVar7 < 0) {
      printk(&_LC20);
    }
    printk(&_LC21);
    return iVar7;
  }
  printk("moto not support !!! \n");
  return -0xe;
}



// ==== cleanup_module @ 000113dc size=244

void cleanup_module(void)

{
  int iVar1;
  int iVar2;
  
  printk("moto, stepmotor_function_exit() \n");
  (**(code **)(DAT_00011b78 + 0x28))(DAT_00011b78,0);
  (**(code **)(DAT_00011b78 + 0x28))(DAT_00011b78,1);
  for (iVar2 = 0; iVar2 < *(int *)(DAT_00011b78 + 0x10); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(DAT_00011b78 + 0xc) + iVar2 * 4);
    gpio_free(*(undefined4 *)(iVar1 + 0x48));
    gpio_free(*(undefined4 *)(iVar1 + 0x4c));
    gpio_free(*(undefined4 *)(iVar1 + 0x50));
    gpio_free(*(undefined4 *)(iVar1 + 0x54));
  }
  misc_deregister(*(undefined4 *)(DAT_00011b78 + 8));
  kfree(DAT_00011b78);
  return;
}



