/* rtstream — address-only functions with no recoverable name
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rtstream.h"

// ==== FUN_00010030 @ 00010030 size=52

undefined4 * FUN_00010030(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_1; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == param_2) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}



// ==== FUN_00010064 @ 00010064 size=84

int FUN_00010064(int param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  
  piVar4 = *(int **)(param_1 + 0x18);
  do {
    pcVar7 = (char *)(piVar4 + 2);
    if (piVar4 == (int *)(param_1 + 0x18)) {
      return 0;
    }
    cVar2 = *pcVar7;
    pcVar5 = param_2;
    do {
      cVar3 = *pcVar5;
      pcVar7 = pcVar7 + 1;
      pcVar5 = pcVar5 + 1;
      cVar6 = cVar2;
      if (cVar3 != cVar2) break;
      bVar1 = cVar2 != '\0';
      cVar2 = *pcVar7;
      cVar6 = cVar3;
    } while (bVar1);
    if (cVar6 == cVar3) {
      return (int)piVar4;
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}



// ==== FUN_000100d0 @ 000100d0 size=420

int FUN_000100d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)dev_get_drvdata();
  iVar5 = 0;
  for (puVar6 = (undefined4 *)*puVar1; puVar6 != puVar1; puVar6 = (undefined4 *)*puVar6) {
    iVar2 = scnprintf(param_3 + iVar5,0x1000,"[%d] stream contain %d units\n",puVar6[2],puVar6[3]);
    iVar5 = iVar5 + iVar2;
    for (piVar4 = (int *)puVar6[4]; piVar4 != puVar6 + 4; piVar4 = (int *)*piVar4) {
      uVar3 = piVar4[2];
      iVar2 = scnprintf(param_3 + iVar5,0x1000,
                        "\t[unit] %c%c%c%c format = %d %d %d %d %d %d %d %d\n",uVar3 & 0xff,
                        uVar3 >> 8 & 0xff,uVar3 >> 0x10 & 0xff,uVar3 >> 0x18,piVar4[3],piVar4[4],
                        piVar4[5],piVar4[6],piVar4[7],piVar4[8],piVar4[9],piVar4[10]);
      iVar5 = iVar5 + iVar2;
    }
    for (piVar4 = (int *)puVar6[6]; piVar4 != puVar6 + 6; piVar4 = (int *)*piVar4) {
      iVar2 = scnprintf(param_3 + iVar5,0x1000,"\t\t%s\t = %d\n",piVar4 + 2,piVar4[10]);
      iVar5 = iVar5 + iVar2;
    }
  }
  return iVar5;
}



// ==== FUN_00010274 @ 00010274 size=68

undefined4 FUN_00010274(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = rtscam_devdata();
  uVar2 = dev_get_drvdata(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  return 0;
}



// ==== FUN_000102d0 @ 000102d0 size=116

void FUN_000102d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)**(int **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x10);
  while (piVar3 = piVar1, piVar4 != (int *)(param_1 + 0x10)) {
    piVar1 = (int *)piVar4[1];
    iVar2 = *piVar4;
    *(int **)(iVar2 + 4) = piVar1;
    *piVar1 = iVar2;
    *piVar4 = (int)piVar4;
    piVar4[1] = (int)piVar4;
    vfree(piVar4);
    piVar1 = (int *)*piVar3;
    piVar4 = piVar3;
  }
  return;
}



// ==== FUN_00010344 @ 00010344 size=116

void FUN_00010344(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)**(int **)(param_1 + 0x18);
  piVar4 = *(int **)(param_1 + 0x18);
  while (piVar3 = piVar1, piVar4 != (int *)(param_1 + 0x18)) {
    piVar1 = (int *)piVar4[1];
    iVar2 = *piVar4;
    *(int **)(iVar2 + 4) = piVar1;
    *piVar1 = iVar2;
    *piVar4 = (int)piVar4;
    piVar4[1] = (int)piVar4;
    vfree(piVar4);
    piVar1 = (int *)*piVar3;
    piVar4 = piVar3;
  }
  return;
}



// ==== FUN_000103b8 @ 000103b8 size=1372

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000103b8(int param_1,uint param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  char *__s;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int unaff_gp;
  
  puVar9 = *(undefined4 **)(param_1 + 0x70);
  if (puVar9 != (undefined4 *)0x0) {
    if ((param_2 >> 8 & 0xff) != 0x72) {
      return 0xffffffe7;
    }
    if (param_2 == 0xc00c7201) {
      if (param_3 != (int *)0x0) {
        if (*param_3 == 0) {
          piVar3 = (int *)vzalloc(0x20);
          if (piVar3 == (int *)0x0) {
            return 0xffffffea;
          }
          piVar3[4] = (int)(piVar3 + 4);
          piVar3[5] = (int)(piVar3 + 4);
          piVar3[6] = (int)(piVar3 + 6);
          piVar3[7] = (int)(piVar3 + 6);
          iVar4 = 1;
          while (iVar8 = FUN_00010030(puVar9,iVar4), iVar8 != 0) {
            __udelay(1);
            iVar4 = iVar4 + 1;
          }
          piVar3[2] = iVar4;
        }
        else {
          piVar3 = (int *)FUN_00010030(puVar9);
          if (piVar3 == (int *)0x0) {
            return 0xffffffea;
          }
          FUN_000102d0(piVar3);
        }
        iVar4 = 0;
        while( true ) {
          if (param_3[1] <= iVar4) {
            piVar3[3] = param_3[1];
            iVar4 = FUN_00010030(puVar9,piVar3[2]);
            if (iVar4 == 0) {
              piVar12 = (int *)puVar9[1];
              puVar9[1] = piVar3;
              *piVar3 = (int)puVar9;
              piVar3[1] = (int)piVar12;
              *piVar12 = (int)piVar3;
            }
            *param_3 = piVar3[2];
            return 0;
          }
          puVar11 = (undefined4 *)(param_3[2] + iVar4 * 0x24);
          puVar13 = (undefined4 *)vzalloc(0x2c);
          if (puVar13 == (undefined4 *)0x0) break;
          if ((((uint)(puVar11 + 9) | (uint)puVar11) & *(uint *)(unaff_gp + 0x18)) == 0) {
            puVar13 = (undefined4 *)__copy_user(puVar13 + 2,puVar11,0x24);
          }
          piVar12 = (int *)piVar3[5];
          iVar4 = iVar4 + 1;
          piVar3[5] = (int)puVar13;
          *puVar13 = piVar3 + 4;
          puVar13[1] = piVar12;
          *piVar12 = (int)puVar13;
        }
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC3,*puVar11);
        }
        FUN_000102d0(piVar3);
        if (*param_3 != 0) {
          return 0xffffffea;
        }
        vfree(piVar3);
        return 0xffffffea;
      }
    }
    else if (param_2 < 0xc00c7202) {
      if (param_2 == 0xc0047202) {
        piVar3 = (int *)FUN_00010030(puVar9,*param_3);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        piVar12 = (int *)piVar3[1];
        iVar4 = *piVar3;
        *(int **)(iVar4 + 4) = piVar12;
        *piVar12 = iVar4;
        *piVar3 = (int)piVar3;
        piVar3[1] = (int)piVar3;
        FUN_000102d0(piVar3);
        FUN_00010344(piVar3);
        vfree(piVar3);
        return 0;
      }
      if (param_2 != 0xc0087203) {
LAB_0001083c:
        if ((_rtscam_debug & 1) != 0) {
          printk(&_LC4,param_2,0x72,param_2 & 0xff);
          return 0xffffffe7;
        }
        return 0xffffffe7;
      }
      if (param_3 != (int *)0x0) {
        if (*param_3 < 0) {
          *param_3 = 0;
        }
        iVar4 = 0;
        for (puVar13 = (undefined4 *)*puVar9; puVar13 != puVar9; puVar13 = (undefined4 *)*puVar13) {
          bVar1 = *param_3 == iVar4;
          iVar4 = iVar4 + 1;
          if (bVar1) {
            param_3[1] = puVar13[2];
            return 0;
          }
        }
      }
    }
    else if (param_2 == 0xc00c7206) {
      if ((param_3 != (int *)0x0) && (iVar4 = FUN_00010030(puVar9,*param_3), iVar4 != 0)) {
        iVar8 = 0;
        while( true ) {
          if (param_3[1] <= iVar8) {
            return 0;
          }
          iVar10 = param_3[2] + iVar8 * 0x24;
          iVar6 = FUN_00010064(iVar4,iVar10);
          iVar8 = iVar8 + 1;
          if (iVar6 == 0) break;
          *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar6 + 0x28);
        }
        return 0xffffffea;
      }
    }
    else if (param_2 == 0xc02c7204) {
      if (param_3 != (int *)0x0) {
        if (param_3[1] < 0) {
          param_3[1] = 0;
        }
        iVar4 = FUN_00010030(puVar9,*param_3);
        iVar8 = 0;
        if (iVar4 != 0) {
          for (piVar3 = *(int **)(iVar4 + 0x10); piVar3 != (int *)(iVar4 + 0x10);
              piVar3 = (int *)*piVar3) {
            bVar1 = param_3[1] == iVar8;
            iVar8 = iVar8 + 1;
            if (bVar1) {
              memcpy(param_3 + 2,piVar3 + 2,0x24);
              return 0;
            }
          }
        }
      }
    }
    else {
      if (param_2 != 0xc00c7205) goto LAB_0001083c;
      if ((param_3 != (int *)0x0) && (iVar4 = FUN_00010030(puVar9,*param_3), iVar4 != 0)) {
        for (iVar8 = 0; iVar8 < param_3[1]; iVar8 = iVar8 + 1) {
          __s = (char *)(param_3[2] + iVar8 * 0x24);
          sVar5 = strlen(__s);
          if (sVar5 != 0) {
            iVar6 = FUN_00010064(iVar4,__s);
            if (iVar6 == 0) {
              piVar3 = (int *)vzalloc(0x2c);
              piVar12 = piVar3 + 2;
              pcVar7 = __s;
              do {
                cVar2 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                *(char *)piVar12 = cVar2;
                piVar12 = (int *)((int)piVar12 + 1);
              } while (cVar2 != '\0');
              piVar3[10] = *(int *)(__s + 0x20);
              piVar12 = *(int **)(iVar4 + 0x1c);
              *(int **)(iVar4 + 0x1c) = piVar3;
              *piVar3 = iVar4 + 0x18;
              piVar3[1] = (int)piVar12;
              *piVar12 = (int)piVar3;
            }
            else {
              *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(__s + 0x20);
            }
          }
        }
        return 0;
      }
    }
  }
  return 0xffffffea;
}



