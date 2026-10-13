/* dispatch — "ptz" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "dispatch.h"

// ==== ptz_get_position @ 0040b808 size=188

undefined4 ptz_get_position(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (DAT_00426414 < 0) {
    FUN_00410740("ptz_ctl.c","ptz_get_position",0x51,"PTZ not open");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = ioctl(DAT_00426414,1,param_1);
    uVar2 = 0;
    if (iVar1 < 0) {
      puVar3 = (undefined4 *)__errno_location();
      uVar4 = *puVar3;
      uVar2 = strerror(uVar4);
      FUN_00410740("ptz_ctl.c","ptz_get_position",0x55,"ioctl(%d) error(%d),%s",1,uVar4,uVar2);
      return 0;
    }
  }
  return uVar2;
}



// ==== ptz_stop @ 0040ba6c size=336

undefined4 ptz_stop(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [20];
  int local_1c;
  
  if (DAT_00426414 < 0) {
    FUN_00410740("ptz_ctl.c","ptz_stop",0x6f,"PTZ not open");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = ioctl(DAT_00426414,3,0);
    if (iVar1 < 0) {
      puVar3 = (undefined4 *)__errno_location();
      uVar4 = *puVar3;
      uVar2 = strerror(uVar4);
      FUN_00410740("ptz_ctl.c","ptz_stop",0x73,"ioctl(%d) error(%d),%s",3,uVar4,uVar2);
      iVar1 = 1000;
    }
    else {
      iVar1 = 1000;
    }
    while( true ) {
      iVar1 = iVar1 + -1;
      FUN_00410ed0(1);
      FUN_004105ec(auStack_30,0x20,0,0x20);
      ptz_get_position(auStack_30);
      if (local_1c == 0) break;
      if (iVar1 == 0) {
        FUN_00410740("ptz_ctl.c","ptz_stop",0x81,"PTZ stop timeout");
        return 0;
      }
    }
    FUN_00410740("ptz_ctl.c","ptz_stop",0x7c,"PTZ stop OK");
    uVar2 = 0;
  }
  return uVar2;
}



// ==== ptz_cruise_start @ 0040c4f4 size=968

/* WARNING: Type propagation algorithm not settling */

undefined4 ptz_cruise_start(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_80 [24];
  
  if (DAT_00426aac == 0) {
    DAT_0042636c = 0;
    DAT_00426368 = 0;
    DAT_00426364 = 0;
    DAT_00426aac = 1;
  }
  piVar8 = (int *)(DAT_0042640c + 0x8b8);
  piVar1 = local_80;
  do {
    iVar5 = *piVar8;
    iVar4 = piVar8[1];
    iVar3 = piVar8[2];
    iVar2 = piVar8[3];
    piVar8 = piVar8 + 4;
    *piVar1 = iVar5;
    piVar1[1] = iVar4;
    piVar1[2] = iVar3;
    piVar1[3] = iVar2;
    piVar1 = piVar1 + 4;
  } while (piVar8 != (int *)(DAT_0042640c + 0x918));
  piVar1 = local_80;
  iVar2 = 0;
  do {
    piVar1 = piVar1 + 3;
    iVar2 = iVar2 + 1;
    iVar3 = iVar2;
    piVar8 = piVar1;
    do {
      while( true ) {
        iVar5 = piVar8[1];
        iVar4 = piVar1[-2];
        if (DAT_00426364 != 0) break;
        if (iVar5 < iVar4) goto LAB_0040c6e4;
        if ((iVar5 == iVar4) && (iVar4 = piVar1[-1], piVar8[2] < iVar4)) {
          iVar7 = *piVar8;
          goto LAB_0040c5f4;
        }
LAB_0040c5ac:
        iVar3 = iVar3 + 1;
        piVar8 = piVar8 + 3;
        if (7 < iVar3) goto LAB_0040c628;
      }
      if (iVar4 < iVar5) {
LAB_0040c6e4:
        iVar7 = piVar1[-3];
        piVar1[-3] = *piVar8;
        iVar5 = piVar1[-1];
        piVar1[-2] = piVar8[1];
        piVar1[-1] = piVar8[2];
        *piVar8 = iVar7;
        piVar8[1] = iVar4;
        piVar8[2] = iVar5;
        goto LAB_0040c5ac;
      }
      if ((iVar5 != iVar4) || (iVar4 = piVar1[-1], piVar8[2] <= iVar4)) goto LAB_0040c5ac;
      iVar7 = *piVar8;
LAB_0040c5f4:
      iVar3 = iVar3 + 1;
      iVar6 = piVar1[-3];
      piVar1[-3] = iVar7;
      piVar1[-2] = piVar8[1];
      piVar1[-1] = piVar8[2];
      piVar8[2] = iVar4;
      *piVar8 = iVar6;
      piVar8[1] = iVar5;
      piVar8 = piVar8 + 3;
    } while (iVar3 < 8);
LAB_0040c628:
    if (iVar2 == 7) {
      while( true ) {
        while ((*(uint *)(DAT_0042640c + 0x18c) <= DAT_00426a94 && (DAT_00426a98 == 0))) {
          FUN_00410ed0(500);
        }
        iVar2 = FUN_0040c3b4();
        if (iVar2 != 2) {
          DAT_00426a9c = 0;
          return 0;
        }
        if (local_80[DAT_0042636c * 3] == 1) {
          if (DAT_00426360 == 0) {
            FUN_0040bffc(local_80[DAT_0042636c * 3 + 1],local_80[DAT_0042636c * 3 + 2]);
            FUN_0040b9bc(*(int *)(DAT_0042640c + 0x8a4) * 10,0);
            DAT_0042635c = DAT_0042635c + 1;
          }
          DAT_00426360 = 0;
        }
        if (DAT_00426a98 == 1) break;
        DAT_0042636c = DAT_0042636c + 1;
        if (7 < DAT_0042636c) {
          DAT_00426368 = DAT_00426368 + 1;
          DAT_0042636c = 0;
          DAT_00426360 = 1;
          if (DAT_00426364 != 0) {
            DAT_00426364 = 0;
            if (0x1d < DAT_0042635c) {
              FUN_00410740("ptz_ctl.c","ptz_cruise_start",0x401,"\n\n\ngoto default point\n\n\n");
              FUN_0040beb8();
              if ((uint)(*(int *)(DAT_0042640c + 0x988) - DAT_00426358) < 0x14) {
                DAT_0042635c = 0;
              }
              else {
                DAT_00426358 = *(int *)(DAT_0042640c + 0x988);
                FUN_0040be58();
                DAT_0042635c = 0;
              }
            }
            return 0;
          }
          DAT_00426364 = 1;
          return 0;
        }
        FUN_00410ed0(100);
      }
      return 0;
    }
  } while( true );
}



