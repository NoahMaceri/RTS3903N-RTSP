/* dispatch — "send" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== send_connectting_msg @ 00402870 size=156

int send_connectting_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 2;
  local_14 = 0;
  local_18 = 0x1004;
  local_1c = 1;
  local_16 = 0x1004;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_connectting_msg",0x5d,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_connectting_msg",0x59,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_pwdwrong_msg @ 0040290c size=156

int send_pwdwrong_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 2;
  local_14 = 0;
  local_18 = 0x1003;
  local_1c = 1;
  local_16 = 0x1003;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_pwdwrong_msg",0x77,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_pwdwrong_msg",0x73,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_success_msg @ 004029a8 size=156

int send_success_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 2;
  local_14 = 0;
  local_18 = 0x1000;
  local_1c = 1;
  local_16 = 0x1000;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_success_msg",0x91,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_success_msg",0x8d,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_bind_fail_msg @ 00402a44 size=156

int send_bind_fail_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 2;
  local_14 = 0;
  local_18 = 0x1009;
  local_1c = 1;
  local_16 = 0x1009;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_bind_fail_msg",0xab,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_bind_fail_msg",0xa7,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_wrong_device_msg @ 00402ae0 size=156

int send_wrong_device_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 2;
  local_14 = 0;
  local_18 = 0x1031;
  local_1c = 1;
  local_16 = 0x1031;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_wrong_device_msg",0xc5,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_wrong_device_msg",0xc1,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_bind_timeout_msg @ 00402b7c size=156

int send_bind_timeout_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 2;
  local_14 = 0;
  local_18 = 0x102f;
  local_1c = 1;
  local_16 = 0x102f;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_bind_timeout_msg",0xe0,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_bind_timeout_msg",0xdc,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_connected_msg @ 00402c18 size=156

int send_connected_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 2;
  local_14 = 0;
  local_18 = 0x1006;
  local_1c = 1;
  local_16 = 0x1006;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_connected_msg",0xfa,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_connected_msg",0xf6,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_reset_msg @ 00402cb4 size=156

int send_reset_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 2;
  local_14 = 0;
  local_18 = 0x1001;
  local_1c = 1;
  local_16 = 0x1001;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_reset_msg",0x114,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_reset_msg",0x110,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_reboot_msg @ 00402d50 size=152

int send_reboot_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  local_20 = 1;
  local_18 = 0xfff;
  local_1c = 1;
  local_16 = 0xfff;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_reboot_msg",0x12e,"msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_reboot_msg",0x12a,"msg snd err, err no is %d",local_10);
  return local_10;
}



// ==== send_saveconfig_msg @ 00403a9c size=156

int send_saveconfig_msg(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  
  local_20 = 0x40;
  local_14 = 0;
  local_18 = 0xff;
  local_1c = 1;
  local_16 = 0xff;
  local_10 = FUN_00410ca4(param_1,&local_20,0x10);
  if (-1 < local_10) {
    FUN_00410740("dispatch.c","send_saveconfig_msg",0x176,"send_saveconfig_msg msg snd success");
    return local_10;
  }
  FUN_00410740("dispatch.c","send_saveconfig_msg",0x172,"msg snd err, err no is %d",local_10);
  return local_10;
}



