/* load_cpld_ssp — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "load_cpld_ssp.h"

// ==== FUN_00400750 @ 00400750 size=64

/* WARNING: Removing unreachable block (ram,0x00400770) */
/* WARNING: Removing unreachable block (ram,0x00400780) */

void FUN_00400750(void)

{
  return;
}



// ==== FUN_00400790 @ 00400790 size=76

/* WARNING: Removing unreachable block (ram,0x004007bc) */
/* WARNING: Removing unreachable block (ram,0x004007cc) */

void FUN_00400790(void)

{
  return;
}



// ==== FUN_004007dc @ 004007dc size=176

/* WARNING: Removing unreachable block (ram,0x0040083c) */

void FUN_004007dc(void)

{
  if (DAT_00411610 == '\0') {
    FUN_00400750();
    DAT_00411610 = '\x01';
  }
  return;
}



// ==== FUN_0040088c @ 0040088c size=60

/* WARNING: Removing unreachable block (ram,0x004008a8) */

void FUN_0040088c(void)

{
  FUN_00400790();
  return;
}



// ==== FUN_004008d0 @ 004008d0 size=616

int FUN_004008d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint auStack_94 [32];
  int local_14 [3];
  
  local_ac = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_ac = -1;
  }
  else {
    iVar1 = popen(param_1,&DAT_00401250);
    if (iVar1 == 0) {
      local_ac = -3;
    }
    else {
      uVar2 = fileno(iVar1);
      if (-1 < (int)uVar2) {
        for (local_a8 = 0; local_a8 < 0x20; local_a8 = local_a8 + 1) {
          auStack_94[local_a8] = 0;
        }
        auStack_94[uVar2 >> 5] = auStack_94[uVar2 >> 5] | 1 << (uVar2 & 0x1f);
        local_14[1] = 0;
        local_14[0] = param_4;
        if (param_4 < 1) {
          local_b0 = select(uVar2 + 1,auStack_94,0,0,0);
        }
        else {
          local_b0 = select(uVar2 + 1,auStack_94,0,0,local_14);
        }
        if (local_b0 < 1) {
          local_ac = -1;
        }
        else {
          if (((int)auStack_94[uVar2 >> 5] >> (uVar2 & 0x1f) & 1U) != 0) {
            local_ac = fread(param_2,1,param_3 + -1,iVar1);
            *(undefined1 *)(param_2 + local_ac) = 0;
          }
          pclose(iVar1);
        }
      }
    }
  }
  return local_ac;
}



// ==== FUN_00400b38 @ 00400b38 size=252

int FUN_00400b38(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = open(param_1,0x102,0x1ff);
  if (iVar1 == -1) {
    iVar2 = 0;
  }
  else {
    lseek(iVar1,param_2 + -1,0);
    write(iVar1,&DAT_00401254,1);
    iVar2 = mmap(0,param_2,3,1,iVar1,0);
    if (iVar2 == -1) {
      close(iVar1);
      iVar2 = 0;
    }
  }
  return iVar2;
}



// ==== FUN_00400c34 @ 00400c34 size=248

undefined4 FUN_00400c34(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00400b38("/dev/mtdblock6",0x124);
  if (iVar1 == 0) {
    puts("create_sharemem fail! ");
    uVar2 = 1;
  }
  else if ((*(int *)(iVar1 + 0xa4) == 0xaa) && (*(int *)(iVar1 + 200) == 0xbb)) {
    memcpy(param_1,iVar1 + 0xa8,0x20);
    memcpy(param_2,iVar1 + 0xcc,0x20);
    munmap(iVar1,0x124);
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// ==== FUN_00400d2c @ 00400d2c size=928

void FUN_00400d2c(char *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_308 [256];
  undefined1 auStack_208 [512];
  
  memset(auStack_308,0,0x100);
  memset(auStack_208,0,0x200);
  uVar1 = strlen(param_1);
  printf("hw_ver[%d]=[%s] \n",uVar1,param_1);
  uVar1 = strlen(param_2);
  printf("gpio_pin[%d]=[%s] \n",uVar1,param_2);
  memset(auStack_308,0,0x100);
  memset(auStack_208,0,0x200);
  sprintf(auStack_308,"insmod %s/cpld_periph.ko hw=%s gpio=%s","/home/app/localko",param_1,param_2);
  FUN_004008d0(auStack_308,auStack_208,0x200,0);
  iVar2 = access("/tmp/sd/debug_msg",0);
  if (iVar2 != 0) {
    memset(auStack_308,0,0x100);
    memset(auStack_208,0,0x200);
    if (((((*param_1 == '1') && (*param_2 == '1')) && (param_2[1] == '1')) &&
        (((param_2[2] == '1' && (param_2[3] == '1')) &&
         ((param_2[4] == '1' && ((param_2[5] == '1' && (param_2[6] == '1')))))))) &&
       (param_2[7] == '1')) {
      puts("hw use 8 pin motor, PIN71/PIN38/PIN69/PIN34/PIN35/PIN37/PIN36/PIN39 ");
      sprintf(auStack_308,"insmod %s/ssp_ms41909.ko hw=%s gpio=%s","/home/app/localko",param_1,
              param_2);
    }
    else {
      if (((((*param_1 != '1') || (param_2[10] != '4')) || (param_2[3] != '4')) ||
          ((param_2[4] != '4' || (param_2[5] != '4')))) || (param_2[6] != '4')) {
        puts("moto not support !!! ");
        return;
      }
      puts("hw use 4+1 pin motor, PIN76/PIN34/PIN35/PIN37/PIN36 ");
      sprintf(auStack_308,"insmod %s/ssp_ms41909_union.ko hw=%s gpio=%s","/home/app/localko",param_1
              ,param_2);
    }
    FUN_004008d0(auStack_308,auStack_208,0x200,0);
  }
  return;
}



// ==== FUN_004011a0 @ 004011a0 size=72

void FUN_004011a0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_00411564;
  pcVar2 = DAT_00411564;
  while (pcVar2 != (code *)0xffffffff) {
    puVar1 = puVar1 + -1;
    (*pcVar2)();
    pcVar2 = (code *)*puVar1;
  }
  return;
}



