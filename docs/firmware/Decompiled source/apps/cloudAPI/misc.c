/* cloudAPI — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "cloudAPI.h"

// ==== entry @ 00405db0 size=92

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_004be620;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004beba0)
            (PTR_main_004be618,param_2,&stack0x00000004,PTR__init_004be61c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== devlog @ 0040e030 size=352

undefined4 devlog(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0;
  FUN_00412470(3);
  iVar1 = FUN_00412670();
  if (iVar1 != 0) {
    if (DAT_004bfd24 == 1) {
      FUN_004098c4(iVar1);
    }
    FUN_004126c8(iVar1,0x2712,DAT_004bfd3c);
    FUN_004126c8(iVar1,0x51,0);
    FUN_004126c8(iVar1,0x40,0);
    FUN_0040eedc(&local_14,&local_18,2,"devid",5,DAT_004bfd54,0x11);
    FUN_0040eedc(&local_14,&local_18,2,"devlog",10,DAT_004bfd40,0x11);
    FUN_004126c8(iVar1,0x2728,local_14);
    iVar2 = FUN_004126f8(iVar1);
    if (iVar2 != 0) {
      fwrite("POST error:",1,0xb,stderr);
      FUN_004174a0(iVar2);
    }
    FUN_0040f880(local_14);
    FUN_004128e4(iVar1);
  }
  return 0;
}



// ==== xiaomi @ 0040e190 size=420

undefined4 xiaomi(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20 [3];
  
  local_20[0] = 0;
  FUN_00412470(3);
  iVar1 = FUN_00412670();
  if (iVar1 != 0) {
    if (DAT_004bfd24 == 1) {
      FUN_004098c4(iVar1);
    }
    uVar2 = fopen(DAT_004bfd40,&DAT_0049b3d0);
    fseek(uVar2,0,2);
    uVar3 = ftell(uVar2);
    rewind(uVar2);
    FUN_004126c8(iVar1,0x2712,DAT_004bfd3c);
    FUN_004126c8(iVar1,0x51,0);
    FUN_004126c8(iVar1,0x40,0);
    FUN_004126c8(iVar1,0x36,1);
    FUN_004126c8(iVar1,0xd,0x3c);
    FUN_004126c8(iVar1,0x4e2c,&LAB_00405f98);
    FUN_004126c8(iVar1,0x2719,uVar2);
    FUN_004126c8(iVar1,0xe,uVar3);
    iVar4 = FUN_004126f8(iVar1);
    if (iVar4 == 0) {
      iVar4 = strstr(DAT_004bfd3c,"xiaomi");
      if ((iVar4 == 0) && (FUN_004128fc(iVar1,0x200002,local_20), local_20[0] == 200)) {
        puts("{\"accessKeyId\":\"access_key_id\"}");
      }
    }
    else {
      FUN_004174a0(iVar4);
    }
    FUN_004128e4(iVar1);
  }
  return 0;
}



// ==== domain @ 0041c748 size=2892

/* WARNING: Removing unreachable block (ram,0x0041cac0) */

undefined4 *
domain(undefined4 param_1,int *param_2,char param_3,char *param_4,char *param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  code *pcVar10;
  code *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  code *pcVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint local_438 [256];
  undefined1 auStack_38 [8];
  uint local_30;
  code *local_2c;
  
  uVar4 = time(0);
  piVar5 = (int *)(*DAT_004be4f0)(1,0x38);
  if (piVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_3 != '\0') {
    pcVar6 = (char *)(*DAT_004be500)(5000);
    if (pcVar6 != (char *)0x0) {
      pcVar7 = (char *)strchr(param_4,0x3b);
      while( true ) {
        cVar1 = *param_4;
        bVar2 = false;
        if ((cVar1 == '\0') || ((cVar1 != ' ' && (bVar2 = false, cVar1 != '\t')))) break;
        param_4 = param_4 + 1;
      }
LAB_0041c8c4:
      *pcVar6 = '\0';
      local_438[0] = local_438[0] & 0xffffff00;
      iVar8 = sscanf(param_4,&DAT_0049dd34,local_438,pcVar6);
      if (0 < iVar8) {
        local_2c = (code *)strlen(pcVar6);
        iVar8 = strlen(local_438);
        param_4 = param_4 + iVar8;
        do {
          while( true ) {
            pcVar17 = (code *)(int)*param_4;
            pcVar10 = local_2c;
            if (pcVar17 == (code *)0x0) goto LAB_0041c834;
            if (pcVar17 != (code *)0x20) break;
            param_4 = param_4 + 1;
          }
          param_4 = param_4 + 1;
        } while (pcVar17 == (code *)0x9);
LAB_0041c834:
        do {
          pcVar11 = pcVar10 + -1;
          pcVar13 = pcVar6;
          if (pcVar10 == (code *)0x0) goto LAB_0041c848;
          cVar1 = pcVar6[(int)pcVar11];
          if ((cVar1 != ' ') && (cVar1 != '\t')) goto LAB_0041c848;
          pcVar6[(int)pcVar11] = '\0';
          pcVar10 = pcVar11;
        } while( true );
      }
      goto LAB_0041c880;
    }
LAB_0041cbe4:
    (*DAT_004be4fc)(piVar5);
    return (undefined4 *)0x0;
  }
  local_438[0] = 0;
  iVar8 = strncmp(param_4,"#HttpOnly_",10);
  if (iVar8 == 0) {
    param_4 = param_4 + 10;
    *(undefined1 *)((int)piVar5 + 0x32) = 1;
  }
  if (*param_4 == '#') goto LAB_0041cbe4;
  puVar9 = (undefined1 *)strchr(param_4,0xd);
  if (puVar9 != (undefined1 *)0x0) {
    *puVar9 = 0;
  }
  puVar9 = (undefined1 *)strchr(param_4,10);
  if (puVar9 != (undefined1 *)0x0) {
    *puVar9 = 0;
  }
  pcVar6 = (char *)strtok_r(param_4,&DAT_0049ddb4,local_438);
  iVar8 = 0;
  bVar2 = false;
  while (pcVar6 != (char *)0x0) {
    if (bVar2) {
      if (iVar8 != 6) goto LAB_0041cba0;
      goto LAB_0041cdbc;
    }
    switch(iVar8) {
    case 0:
      iVar15 = (*DAT_004be4f4)(pcVar6 + (*pcVar6 == '.'));
      piVar5[5] = iVar15;
      goto LAB_0041cd8c;
    case 1:
      iVar15 = FUN_0042d7ac(pcVar6,&DAT_0049d510);
      *(bool *)(piVar5 + 9) = iVar15 != 0;
      break;
    case 2:
      iVar15 = strcmp(&DAT_0049d510,pcVar6);
      if ((iVar15 == 0) || (iVar15 = strcmp("FALSE",pcVar6), iVar15 == 0)) {
        iVar8 = (*DAT_004be4f4)(&DAT_0049df68);
        pcVar10 = DAT_004be4f4;
        bVar2 = iVar8 == 0;
        piVar5[3] = iVar8;
        iVar8 = (*pcVar10)(&DAT_0049df68);
        piVar5[4] = iVar8;
        if (iVar8 == 0) {
          bVar2 = true;
        }
        goto switchD_0041cc78_caseD_3;
      }
      iVar15 = (*DAT_004be4f4)(pcVar6);
      piVar5[3] = iVar15;
      if (iVar15 != 0) {
        iVar15 = FUN_0041c538(iVar15);
        piVar5[4] = iVar15;
        goto LAB_0041cd8c;
      }
      bVar2 = true;
      break;
    case 3:
switchD_0041cc78_caseD_3:
      iVar8 = 3;
      iVar15 = FUN_0042d7ac(pcVar6,&DAT_0049d510);
      *(bool *)(piVar5 + 0xc) = iVar15 != 0;
      break;
    case 4:
      uVar21 = strtoll(pcVar6,0,10);
      *(undefined8 *)(piVar5 + 6) = uVar21;
      break;
    case 5:
      iVar15 = (*DAT_004be4f4)(pcVar6);
      piVar5[1] = iVar15;
      goto LAB_0041cd8c;
    case 6:
      iVar15 = (*DAT_004be4f4)(pcVar6);
      piVar5[2] = iVar15;
LAB_0041cd8c:
      bVar2 = iVar15 == 0;
    }
    iVar8 = iVar8 + 1;
    pcVar6 = (char *)strtok_r(0,&DAT_0049ddb4,local_438);
  }
  if (iVar8 == 6) {
LAB_0041cdbc:
    iVar8 = (*DAT_004be4f4)(&DAT_0049bcf4);
    piVar5[2] = iVar8;
    if ((iVar8 == 0) || (bVar2)) goto LAB_0041cba0;
  }
  else if ((bVar2) || (iVar8 != 7)) goto LAB_0041cba0;
  goto LAB_0041cdec;
LAB_0041c848:
  for (; (cVar1 = *pcVar13, cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))));
      pcVar13 = pcVar13 + 1) {
  }
  if (pcVar10 == (code *)0x0) {
    local_2c = pcVar17;
    iVar8 = FUN_0042d7ac("secure",local_438);
    if (iVar8 == 0) {
      iVar8 = FUN_0042d7ac("httponly",local_438);
      if (iVar8 == 0) {
        if (local_2c == (code *)0x3d) goto LAB_0041c9ec;
      }
      else {
        *(undefined1 *)((int)piVar5 + 0x32) = 1;
      }
    }
    else {
      *(undefined1 *)(piVar5 + 0xc) = 1;
    }
LAB_0041c880:
    if ((pcVar7 != (char *)0x0) && (param_4 = pcVar7, *pcVar7 != '\0')) {
      do {
        param_4 = param_4 + 1;
        local_2c = (code *)(int)*param_4;
        if (local_2c == (code *)0x0) break;
      } while ((local_2c == (code *)0x20) || (local_2c == (code *)0x9));
      pcVar7 = (char *)strchr(param_4,0x3b);
      if (pcVar7 != (char *)0x0) goto LAB_0041c8c4;
      if (local_2c != (code *)0x0) {
        pcVar7 = (char *)strchr(param_4,0);
        if (pcVar7 == (char *)0x0) goto code_r0x0041c9e0;
        goto LAB_0041c8c4;
      }
    }
  }
  else {
LAB_0041c9ec:
    iVar8 = FUN_0042d7ac(&DAT_0049ddf0,local_438);
    if (iVar8 == 0) {
      iVar8 = FUN_0042d7ac("domain",local_438);
      if (iVar8 == 0) {
        iVar8 = FUN_0042d7ac("version",local_438,auStack_38);
        if (iVar8 == 0) {
          iVar8 = FUN_0042d7ac("max-age",local_438);
          if (iVar8 == 0) {
            iVar8 = FUN_0042d7ac("expires",local_438);
            if (iVar8 == 0) {
              if (piVar5[1] == 0) {
                local_2c = clock_gettime;
                uVar18 = (*DAT_004be4f4)(local_438);
                piVar5[1] = uVar18;
                iVar8 = (**(code **)(local_2c + -0x1b0c))(pcVar13);
                piVar5[2] = iVar8;
                if (piVar5[1] != 0) goto LAB_0041d08c;
                goto LAB_0041ca6c;
              }
              goto LAB_0041c880;
            }
            FUN_0041c274(piVar5 + 8,pcVar13);
            iVar8 = piVar5[8];
          }
          else {
            FUN_0041c274(piVar5 + 0xb,pcVar13);
            iVar8 = piVar5[0xb];
          }
        }
        else {
          FUN_0041c274(piVar5 + 10,pcVar13);
          iVar8 = piVar5[10];
        }
        if (iVar8 == 0) {
          bVar2 = true;
          goto LAB_0041ca70;
        }
        goto LAB_0041c880;
      }
      pcVar13 = pcVar13 + (*pcVar13 == '.');
      pcVar12 = pcVar13;
      if (param_5 != (char *)0x0) {
        pcVar12 = param_5;
      }
      iVar8 = inet_pton(2,pcVar12);
      local_30 = (uint)(iVar8 != 0);
      iVar8 = strchr(pcVar13,0x2e);
      if (iVar8 == 0) {
        param_5 = ":";
LAB_0041cf64:
        if (local_30 == 0) {
          iVar8 = FUN_0041c3a0(pcVar13,param_5);
          if (iVar8 == 0) {
LAB_0041cfb8:
            FUN_004104e0(param_1,"skipped cookie with bad tailmatch domain: %s\n",pcVar13);
            bVar2 = true;
            goto LAB_0041c880;
          }
        }
        else {
          iVar8 = strcmp();
          if (iVar8 != 0) goto LAB_0041cfb8;
        }
      }
      else if (param_5 != (char *)0x0) goto LAB_0041cf64;
      FUN_0041c274(piVar5 + 5,pcVar13);
      if (piVar5[5] != 0) {
        if (local_30 == 0) {
          *(undefined1 *)(piVar5 + 9) = 1;
        }
        goto LAB_0041c880;
      }
    }
    else {
      FUN_0041c274(piVar5 + 3,pcVar13);
      if (piVar5[3] != 0) {
        iVar8 = FUN_0041c538();
        piVar5[4] = iVar8;
LAB_0041d08c:
        if (iVar8 == 0) {
          bVar2 = true;
          goto LAB_0041ca70;
        }
        goto LAB_0041c880;
      }
    }
LAB_0041ca6c:
    bVar2 = true;
  }
LAB_0041ca70:
  pcVar7 = (char *)piVar5[0xb];
  goto LAB_0041ca74;
code_r0x0041c9e0:
  pcVar7 = (char *)piVar5[0xb];
LAB_0041ca74:
  if (pcVar7 == (char *)0x0) {
    if (piVar5[8] != 0) {
      iVar8 = FUN_0042d020(piVar5[8],0);
      if (iVar8 == 0) {
        uVar18 = 1;
      }
      else {
        if (-1 < iVar8 >> 0x1f) {
          piVar5[6] = iVar8;
          piVar5[7] = iVar8 >> 0x1f;
          goto LAB_0041cb48;
        }
        uVar18 = 0;
      }
      uVar19 = 0;
      goto LAB_0041cb40;
    }
  }
  else {
    lVar20 = strtoll(pcVar7 + (*pcVar7 == '\"'),0,10);
    *(longlong *)(piVar5 + 6) = lVar20;
    if (CONCAT44(0x7fffffff - ((int)uVar4 >> 0x1f),~uVar4) < lVar20) {
      uVar18 = 0xffffffff;
      uVar19 = 0x7fffffff;
LAB_0041cb40:
      piVar5[6] = uVar18;
      piVar5[7] = uVar19;
    }
    else {
      *(longlong *)(piVar5 + 6) = lVar20 + (int)uVar4;
    }
  }
LAB_0041cb48:
  if (bVar2) {
LAB_0041cb78:
    bVar2 = true;
  }
  else {
    if ((piVar5[5] == 0) && (param_5 != (char *)0x0)) {
      iVar8 = (*DAT_004be4f4)(param_5);
      piVar5[5] = iVar8;
      if (iVar8 == 0) goto LAB_0041cb78;
    }
    bVar2 = false;
    if ((piVar5[3] == 0) && (param_6 != 0)) {
      iVar8 = strchr(param_6,0x3f);
      if (iVar8 == 0) {
        iVar8 = strrchr();
      }
      else {
        iVar8 = FUN_0042ded0(param_6,0x2f,iVar8 - param_6);
      }
      if (iVar8 != 0) {
        iVar15 = (iVar8 - param_6) + 1;
        iVar8 = (*DAT_004be500)((iVar8 - param_6) + 2);
        piVar5[3] = iVar8;
        if (iVar8 == 0) goto LAB_0041cb78;
        memcpy(iVar8,param_6,iVar15);
        *(undefined1 *)(piVar5[3] + iVar15) = 0;
        iVar8 = FUN_0041c538(piVar5[3]);
        piVar5[4] = iVar8;
        bVar2 = iVar8 == 0;
      }
    }
  }
  (*DAT_004be4fc)(pcVar6);
  if ((bVar2) || (piVar5[1] == 0)) goto LAB_0041cba0;
LAB_0041cdec:
  if (((char)param_2[2] != '\0') ||
     (((char)param_2[4] == '\0' || (piVar5[6] != 0 || piVar5[7] != 0)))) {
    *(char *)((int)piVar5 + 0x31) = (char)param_2[2];
    FUN_0041c2cc(param_2);
    piVar14 = (int *)*param_2;
    piVar16 = (int *)0x0;
LAB_0041ce2c:
    if (piVar14 == (int *)0x0) {
      bVar2 = false;
LAB_0041cea4:
      if ((char)param_2[2] != '\0') {
        if (bVar2) {
          pcVar6 = "Replaced";
        }
        else {
          pcVar6 = "Added";
        }
        FUN_004104e0(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %lld\n",pcVar6,
                     piVar5[1],piVar5[2],piVar5[5],piVar5[3]);
      }
      if (!bVar2) {
        if (piVar16 == (int *)0x0) {
          *param_2 = (int)piVar5;
        }
        else {
          *piVar16 = (int)piVar5;
        }
        param_2[3] = param_2[3] + 1;
        return piVar5;
      }
      return piVar5;
    }
    iVar8 = FUN_0042d7ac(piVar14[1],piVar5[1]);
    piVar16 = piVar14;
    if (iVar8 != 0) {
      if (piVar14[5] != 0) {
        if (piVar5[5] == 0) goto LAB_0041ce94;
        iVar8 = FUN_0042d7ac();
        if (iVar8 != 0) goto LAB_0041ce7c;
        piVar14 = (int *)*piVar14;
        goto LAB_0041ce2c;
      }
      if (piVar5[5] != 0) goto LAB_0041ce94;
LAB_0041ce7c:
      if (piVar14[4] == 0) {
        if (piVar5[4] == 0) {
          cVar1 = *(char *)((int)piVar5 + 0x31);
          goto LAB_0041d154;
        }
      }
      else if ((piVar5[4] != 0) && (iVar8 = FUN_0042d7ac(), iVar8 != 0)) {
        cVar1 = *(char *)((int)piVar5 + 0x31);
LAB_0041d154:
        pcVar10 = DAT_004be4fc;
        if ((cVar1 != '\0') || (*(char *)((int)piVar14 + 0x31) == '\0')) {
          uVar18 = piVar14[1];
          *piVar5 = *piVar14;
          (*pcVar10)(uVar18);
          if (piVar14[2] != 0) {
            (*DAT_004be4fc)();
          }
          if (piVar14[5] != 0) {
            (*DAT_004be4fc)();
          }
          if (piVar14[3] != 0) {
            (*DAT_004be4fc)();
          }
          if (piVar14[4] != 0) {
            (*DAT_004be4fc)();
          }
          if (piVar14[8] != 0) {
            (*DAT_004be4fc)();
          }
          if (piVar14[10] != 0) {
            (*DAT_004be4fc)();
          }
          if (piVar14[0xb] != 0) {
            (*DAT_004be4fc)();
          }
          memcpy(piVar14,piVar5,0x38);
          (*DAT_004be4fc)(piVar5);
          piVar3 = piVar14;
          do {
            piVar16 = piVar3;
            bVar2 = true;
            piVar5 = piVar14;
            piVar3 = (int *)*piVar16;
          } while ((int *)*piVar16 != (int *)0x0);
          goto LAB_0041cea4;
        }
        goto LAB_0041cba0;
      }
    }
LAB_0041ce94:
    piVar14 = (int *)*piVar14;
    goto LAB_0041ce2c;
  }
LAB_0041cba0:
  FUN_0041c1a0(piVar5);
  return (undefined4 *)0x0;
}



// ==== compress @ 00420d88 size=4332

int compress(int param_1,int param_2,int *param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_30;
  int local_2c;
  
  do {
    iVar12 = *(int *)(param_1 + 0xac);
    iVar8 = *param_3;
    *(int *)(param_1 + 0xb0) = iVar12;
    iVar2 = memchr(iVar12,10,iVar8);
    *(int *)(param_1 + 0xb4) = iVar2;
    if (iVar2 == 0) {
      iVar2 = FUN_0041e4a4(param_1,param_1 + 0x50,iVar8);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (*(int *)(param_1 + 0xa0) != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xa8) < 6) {
        return 0;
      }
      iVar2 = FUN_0041e428(*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x52c));
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 2;
      return 0;
    }
    iVar7 = (iVar2 - iVar12) + 1;
    *param_3 = iVar8 - iVar7;
    *(int *)(param_1 + 0xac) = iVar2 + 1;
    iVar2 = FUN_0041e4a4(param_1,param_1 + 0x50,(iVar2 + 1) - iVar12);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x52c);
    if (((*(int *)(param_1 + 0xa0) == 0) && (5 < *(uint *)(param_1 + 0xa8))) &&
       (iVar2 = FUN_0041e428(*(undefined4 *)(param_1 + 0x290)), iVar2 == 0)) {
      iVar2 = *param_3;
      *(undefined1 *)(param_1 + 0x98) = 0;
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x9c) = 1;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x9c) = 2;
      *param_3 = iVar7;
      return 0;
    }
    pcVar5 = *(char **)(param_1 + 0xb8);
    if (*pcVar5 == '\n') {
LAB_00420efc:
      if (**(char **)(param_1 + 0xb8) == '\n') {
        *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
      }
      iVar2 = *(int *)(param_1 + 200);
      if (iVar2 - 100U < 100) {
        *(undefined1 *)(param_1 + 0x98) = 1;
        *(undefined4 *)(param_1 + 0xa0) = 0;
        if (iVar2 == 100) {
          if (*(int *)(param_1 + 0xd4) != 0) {
            *(undefined4 *)(param_1 + 0xd4) = 0;
            *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 2;
          }
        }
        else if ((iVar2 == 0x65) && (*(int *)(param_1 + 0xd8) == 1)) {
          FUN_004104e0(param_1,"Received 101\n");
          *(undefined4 *)(param_1 + 0xd8) = 2;
          return 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x98) = 0;
        if (((((*(int *)(param_1 + 0x50) == -1) && (*(int *)(param_1 + 0x54) == -1)) &&
             ((*(char *)(param_1 + 0x10c) == '\0' &&
              ((*(char *)(param_2 + 0x1d8) == '\0' && (*(int *)(param_2 + 0x13c) == 0xb)))))) &&
            ((*(uint *)(*(int *)(param_2 + 0x204) + 0x3c) & 0x40000) == 0)) &&
           (*(int *)(param_1 + 0x240) != 5)) {
          FUN_004104e0(param_1,"no chunk, no close, no size. Assume close to signal end\n");
          *(undefined1 *)(param_2 + 0x1d8) = 1;
        }
      }
      iVar2 = FUN_0041dddc(param_2);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 200);
LAB_004213c0:
        FUN_00410550(param_1,"The requested URL returned error: %d",iVar2);
        return 0x16;
      }
      uVar11 = 2;
      if (*(char *)(param_1 + 700) != '\0') {
        uVar11 = 3;
      }
      iVar8 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x52c);
      iVar2 = FUN_00410818(param_2,uVar11,*(int *)(param_1 + 0x52c),iVar8);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(int *)(param_1 + 0x8680) = *(int *)(param_1 + 0x8680) + iVar8;
      iVar2 = iVar8 + *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x80) = iVar2;
      if (99 < *(int *)(param_1 + 200) - 100U) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x84) = iVar2;
      if (*param_4 == '\0') {
        iVar2 = FUN_0041e7e4(param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (((*(int *)(param_1 + 200) < 300) || (*(char *)(param_2 + 0x1e6) != '\0')) ||
           (*(char *)(param_2 + 0x1d8) != '\0')) {
LAB_0042113c:
          cVar10 = *(char *)(param_2 + 0x1e7);
        }
        else {
          cVar10 = *(char *)(param_2 + 0x1e7);
          if (cVar10 == '\0') {
            if ((*(int *)(param_1 + 0x240) - 2U < 3) && (*(char *)(param_1 + 0xf8) == '\0')) {
              FUN_004104e0(param_1,"HTTP error before end of send, stop sending\n");
              uVar3 = *(uint *)(param_1 + 0xf4);
              *(undefined1 *)(param_2 + 0x1d8) = 1;
              *(undefined1 *)(param_1 + 0xf8) = 1;
              *(uint *)(param_1 + 0xf4) = uVar3 & 0xfffffffd;
              if (*(char *)(param_1 + 0x8610) != '\0') {
                *(undefined4 *)(param_1 + 0xd4) = 3;
              }
            }
            goto LAB_0042113c;
          }
        }
        if (cVar10 != '\0') {
          FUN_004104e0(param_1,"Keep sending data to get tossed away!\n");
          *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 2;
        }
      }
      if (*(char *)(param_1 + 0x98) == '\0') {
        if (*(char *)(param_1 + 0x2bf) == '\0') {
          if (*(char *)(param_1 + 0x10c) != '\0') {
            *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
            *(undefined4 *)(param_1 + 100) = 0xffffffff;
          }
        }
        else {
          *param_4 = '\x01';
        }
        if ((*(int *)(param_1 + 0x50) != -1) || (*(int *)(param_1 + 0x54) != -1)) {
          FUN_0041b804(param_1);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        }
        if (*(int *)(param_1 + 0x60) == 0 && *(int *)(param_1 + 100) == 0) {
          *param_4 = '\x01';
        }
        if (*param_4 != '\0') {
          *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfffffffe;
        }
        if (*(char *)(param_1 + 0x2c8) == '\0') {
          return 0;
        }
        FUN_004103f4(param_1,1,*(undefined4 *)(param_1 + 0xb0),iVar8,param_2);
        return 0;
      }
    }
    else {
      if (*pcVar5 == '\r') {
        *(char **)(param_1 + 0xb8) = pcVar5 + 1;
        goto LAB_00420efc;
      }
      iVar2 = *(int *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xa0) = iVar2 + 1;
      if (iVar2 == 0) {
        uVar3 = *(uint *)(*(int *)(param_2 + 0x204) + 0x3c);
        if ((uVar3 & 3) == 0) {
          if (((uVar3 & 0x40000) == 0) ||
             (iVar2 = sscanf(pcVar5," RTSP/%d.%d %3d",&local_30,param_2 + 0x140,param_1 + 200),
             iVar2 != 3)) {
LAB_00421e38:
            *(undefined1 *)(param_1 + 0x98) = 0;
            return 0;
          }
          *(int *)(param_2 + 0x140) = *(int *)(param_2 + 0x140) + local_30 * 10;
          iVar2 = 0xb;
LAB_00421314:
          *(int *)(param_2 + 0x13c) = iVar2;
        }
        else {
          iVar2 = sscanf(pcVar5," HTTP/%d.%d %3d",&local_2c,param_2 + 0x13c,param_1 + 200);
          if (iVar2 == 3) {
            iVar2 = *(int *)(param_2 + 0x13c) + local_2c * 10;
            goto LAB_00421314;
          }
          iVar2 = sscanf(*(undefined4 *)(param_1 + 0xb8)," HTTP %3d",param_1 + 200);
          *(undefined4 *)(param_2 + 0x13c) = 10;
          if (iVar2 == 0) {
            iVar2 = FUN_0041e428(*(undefined4 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0xb8));
            if (iVar2 == 0) goto LAB_00421e38;
            *(undefined4 *)(param_1 + 200) = 200;
            *(undefined4 *)(param_2 + 0x13c) = 10;
          }
        }
        iVar2 = *(int *)(param_1 + 200);
        iVar8 = *(int *)(param_2 + 0x13c);
        *(int *)(param_1 + 0x866c) = iVar2;
        *(int *)(param_1 + 0x8674) = iVar8;
        if ((*(int *)(param_1 + 0x860c) == 0) || (iVar8 < *(int *)(param_1 + 0x860c))) {
          *(int *)(param_1 + 0x860c) = iVar8;
        }
        if ((*(char *)(param_1 + 0x2b8) != '\0') && (399 < iVar2)) {
          if (iVar2 == 0x191) {
            cVar10 = *(char *)(param_2 + 0x1dc);
LAB_0042136c:
            if (cVar10 != '\0') goto LAB_004213e4;
          }
          else if (iVar2 == 0x197) {
            cVar10 = *(char *)(param_2 + 0x1dd);
            goto LAB_0042136c;
          }
          if (((*(int *)(param_1 + 0x8630) == 0 && *(int *)(param_1 + 0x8634) == 0) ||
              (*(int *)(param_1 + 0x240) != 1)) || (iVar2 != 0x1a0)) {
            uVar11 = *(undefined4 *)(param_1 + 0xb8);
            iVar8 = strncmp(uVar11,&DAT_0049e640,4);
            if (((iVar8 == 0) && (iVar8 = strchr(uVar11,0x20), iVar8 != 0)) &&
               (*(char *)(iVar8 + 1) != '\0')) {
              iVar8 = iVar8 + 1;
              uVar6 = 0xd;
              puVar4 = (undefined1 *)strchr(iVar8,0xd);
              if (puVar4 == (undefined1 *)0x0) {
                puVar4 = (undefined1 *)strchr(iVar8,10);
                if (puVar4 == (undefined1 *)0x0) goto LAB_004213c0;
                uVar6 = 10;
              }
              *puVar4 = 0;
              FUN_00410550(param_1,"The requested URL returned error: %s",iVar8);
              *puVar4 = uVar6;
              return 0x16;
            }
            goto LAB_004213c0;
          }
        }
LAB_004213e4:
        if (iVar8 == 10) {
          FUN_004104e0(param_1,"HTTP 1.0, assume close after body\n");
          *(undefined1 *)(param_2 + 0x1d8) = 1;
        }
        else if (((10 < iVar8) && (*(char *)(param_2 + 0x1d8) == '\0')) &&
                ((puVar4 = *(undefined1 **)(param_2 + 0x488), puVar4 != (undefined1 *)0x0 &&
                 (iVar2 = FUN_004188f8(param_1,param_2), iVar2 == 0)))) {
          *puVar4 = 1;
        }
        if ((*(int *)(param_1 + 200) == 0xcc) || (*(int *)(param_1 + 200) == 0x130)) {
          if (*(int *)(param_1 + 0x238) != 0) {
            *(undefined1 *)(param_1 + 0x867c) = 1;
          }
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined1 *)(param_1 + 0xfa) = 1;
        }
      }
      if (((*(char *)(param_1 + 0xfa) == '\0') && (*(char *)(param_1 + 0x2df) == '\0')) &&
         (iVar2 = FUN_0042d84c("Content-Length:",*(undefined4 *)(param_1 + 0xb8),0xf), iVar2 != 0))
      {
        lVar13 = strtoll(*(int *)(param_1 + 0xb8) + 0xf,0,10);
        iVar2 = (int)((ulonglong)lVar13 >> 0x20);
        iVar8 = *(int *)(param_1 + 0x29c);
        if ((*(uint *)(param_1 + 0x298) != 0 || iVar8 != 0) &&
           ((iVar8 < iVar2 || ((iVar2 == iVar8 && (*(uint *)(param_1 + 0x298) < (uint)lVar13)))))) {
          FUN_00410550(param_1,"Maximum file size exceeded");
          return 0x3f;
        }
        if (lVar13 < 0) {
          *(undefined1 *)(param_2 + 0x1d8) = 1;
          FUN_004104e0(param_1,"Negative content-length: %lld, closing after transfer\n");
        }
        else {
          *(longlong *)(param_1 + 0x50) = lVar13;
          *(longlong *)(param_1 + 0x60) = lVar13;
          FUN_0041b804();
        }
LAB_0042153c:
        cVar10 = *(char *)(param_1 + 700);
      }
      else {
        iVar2 = FUN_0042d84c("Content-Type:",*(undefined4 *)(param_1 + 0xb8),0xd);
        if (iVar2 != 0) {
          pcVar5 = (char *)FUN_0041e6c8(*(undefined4 *)(param_1 + 0xb8));
          if (pcVar5 == (char *)0x0) {
            return 0x1b;
          }
          if (*pcVar5 != '\0') {
            if (*(int *)(param_1 + 0x8694) != 0) {
              (*DAT_004be4fc)();
            }
            *(char **)(param_1 + 0x8694) = pcVar5;
            goto LAB_00421c78;
          }
LAB_00421534:
          (*DAT_004be4fc)(pcVar5);
          goto LAB_0042153c;
        }
        iVar2 = FUN_0042d84c("Server:",*(undefined4 *)(param_1 + 0xb8),7);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_2 + 0x13c);
          if ((iVar2 == 10) && (*(char *)(param_2 + 0x1db) != '\0')) {
            iVar2 = FUN_0041f2d4(*(undefined4 *)(param_1 + 0xb8),"Proxy-FUN_0041f3e4:","keep-alive");
            if (iVar2 == 0) {
              iVar2 = *(int *)(param_2 + 0x13c);
              goto LAB_00421620;
            }
            *(undefined1 *)(param_2 + 0x1d8) = 0;
            pcVar5 = "HTTP/1.0 proxy connection set to keep alive!\n";
          }
          else {
LAB_00421620:
            if (((iVar2 == 0xb) && (*(char *)(param_2 + 0x1db) != '\0')) &&
               (iVar2 = FUN_0041f2d4(*(undefined4 *)(param_1 + 0xb8),"Proxy-FUN_0041f3e4:","close"),
               iVar2 != 0)) {
              *(undefined1 *)(param_2 + 0x1d8) = 1;
              pcVar5 = "HTTP/1.1 proxy connection set close!\n";
            }
            else {
              if ((*(int *)(param_2 + 0x13c) != 10) ||
                 (iVar2 = FUN_0041f2d4(*(undefined4 *)(param_1 + 0xb8),"FUN_0041f3e4:","keep-alive"),
                 iVar2 == 0)) {
                iVar2 = FUN_0041f2d4(*(undefined4 *)(param_1 + 0xb8),"FUN_0041f3e4:","close");
                if (iVar2 == 0) {
                  iVar2 = FUN_0042d84c("Transfer-Encoding:",*(undefined4 *)(param_1 + 0xb8),0x12);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0042d84c("Content-Encoding:",*(int *)(param_1 + 0xb8),0x11);
                    if ((iVar2 == 0) ||
                       ((*(int *)(param_1 + 0x310) == 0 && (*(int *)(param_2 + 0x13c) != 0x14)))) {
                      iVar2 = FUN_0042d84c("Content-Range:",*(int *)(param_1 + 0xb8),0xe);
                      if (iVar2 == 0) {
                        if ((*(int *)(param_1 + 0x400) != 0) &&
                           (iVar2 = FUN_0042d84c("Set-Cookie:",*(int *)(param_1 + 0xb8),0xb),
                           iVar2 != 0)) {
                          FUN_004173d8(param_1,2,2);
                          iVar2 = *(int *)(param_2 + 0x234);
                          if (iVar2 == 0) {
                            iVar2 = *(int *)(param_2 + 0x98);
                          }
                          domain(param_1,*(undefined4 *)(param_1 + 0x400),1,
                                 *(int *)(param_1 + 0xb8) + 0xb,iVar2,
                                 *(undefined4 *)(param_1 + 0x8624));
                          FUN_00417438(param_1,2);
                          goto LAB_0042153c;
                        }
                        iVar2 = FUN_0042d84c("Last-Modified:",*(undefined4 *)(param_1 + 0xb8),0xe);
                        if ((iVar2 != 0) &&
                           ((*(int *)(param_1 + 0x238) != 0 || (*(char *)(param_1 + 0x2b1) != '\0'))
                           )) {
                          local_30 = time(0);
                          uVar11 = FUN_0042d020(*(int *)(param_1 + 0xb8) + 0xe,&local_30);
                          *(undefined4 *)(param_1 + 0xe0) = uVar11;
                          if (*(char *)(param_1 + 0x2b1) != '\0') {
                            *(undefined4 *)(param_1 + 0x8678) = uVar11;
                          }
                          goto LAB_00421c78;
                        }
                        iVar2 = FUN_0042d84c("WWW-Authenticate:",*(undefined4 *)(param_1 + 0xb8),
                                             0x11);
                        if ((iVar2 == 0) || (*(int *)(param_1 + 200) != 0x191)) {
                          iVar2 = FUN_0042d84c("Proxy-authenticate:",*(undefined4 *)(param_1 + 0xb8)
                                               ,0x13);
                          if ((iVar2 != 0) && (*(int *)(param_1 + 200) == 0x197)) {
                            iVar2 = *(int *)(param_1 + 200);
                            goto LAB_00421b48;
                          }
                          if (((99 < *(int *)(param_1 + 200) - 300U) ||
                              (iVar2 = FUN_0042d84c("Location:",*(undefined4 *)(param_1 + 0xb8),9),
                              iVar2 == 0)) || (*(int *)(param_1 + 0xfc) != 0)) {
                            if ((*(uint *)(*(int *)(param_2 + 0x204) + 0x3c) & 0x40000) != 0) {
                              return 4;
                            }
                            goto LAB_00421c78;
                          }
                          pcVar5 = (char *)FUN_0041e6c8(*(undefined4 *)(param_1 + 0xb8));
                          if (pcVar5 == (char *)0x0) {
                            return 0x1b;
                          }
                          if (*pcVar5 == '\0') goto LAB_00421534;
                          *(char **)(param_1 + 0xfc) = pcVar5;
                          if (*(char *)(param_1 + 0x2b9) == '\0') goto LAB_00421c78;
                          iVar2 = (*DAT_004be4f4)(pcVar5);
                          *(int *)(param_1 + 0x100) = iVar2;
                          if (iVar2 == 0) {
                            return 0x1b;
                          }
                          iVar2 = FUN_0041dfb8(param_2);
                        }
                        else {
                          iVar2 = *(int *)(param_1 + 200);
LAB_00421b48:
                          iVar8 = FUN_0041e6c8(*(undefined4 *)(param_1 + 0xb8));
                          if (iVar8 == 0) {
                            return 0x1b;
                          }
                          iVar2 = FUN_0041ecc4(param_2,iVar2 == 0x197,iVar8);
                          (*DAT_004be4fc)(iVar8);
                        }
                        if (iVar2 != 0) {
                          return iVar2;
                        }
                      }
                      else {
                        pbVar9 = (byte *)(*(int *)(param_1 + 0xb8) + 0xe);
                        while( true ) {
                          bVar1 = *pbVar9;
                          if (((bVar1 == 0) || ((*(ushort *)(__ctype_b + (uint)bVar1 * 2) & 8) != 0)
                              ) || (bVar1 == 0x2a)) break;
                          pbVar9 = pbVar9 + 1;
                        }
                        if ((*(ushort *)(__ctype_b + (uint)bVar1 * 2) & 8) == 0) {
                          *(undefined4 *)(param_1 + 0x8630) = 0;
                          *(undefined4 *)(param_1 + 0x8634) = 0;
                        }
                        else {
                          uVar14 = strtoll(pbVar9,0,10);
                          *(undefined8 *)(param_1 + 0xc0) = uVar14;
                          if ((*(int *)(param_1 + 0x8630) == (int)uVar14) &&
                             (*(int *)(param_1 + 0x8634) == (int)((ulonglong)uVar14 >> 0x20))) {
                            *(undefined1 *)(param_1 + 0xbc) = 1;
                          }
                        }
                      }
                    }
                    else {
                      pbVar9 = (byte *)(*(int *)(param_1 + 0xb8) + 0x11);
                      while ((*pbVar9 != 0 &&
                             ((*(ushort *)(__ctype_b + (uint)*pbVar9 * 2) & 0x20) != 0))) {
                        pbVar9 = pbVar9 + 1;
                      }
                      iVar2 = FUN_0042d84c("identity",pbVar9,8);
                      if (iVar2 == 0) {
                        iVar2 = FUN_0042d84c("deflate",pbVar9,7);
                        uVar11 = 1;
                        if (iVar2 == 0) {
                          iVar2 = FUN_0042d84c(&DAT_0049e788,pbVar9,4);
                          if (iVar2 == 0) {
                            iVar2 = FUN_0042d84c("x-gzip",pbVar9,6);
                            uVar11 = 2;
                            if (iVar2 == 0) {
                              iVar2 = FUN_0042d84c("compress",pbVar9,8);
                              if (iVar2 == 0) {
                                iVar2 = FUN_0042d84c("x-compress",pbVar9,10);
                                uVar11 = 3;
                                if (iVar2 == 0) {
                                  cVar10 = *(char *)(param_1 + 700);
                                  goto LAB_00421c80;
                                }
                              }
                              else {
                                uVar11 = 3;
                              }
                            }
                          }
                          else {
                            uVar11 = 2;
                          }
                        }
                        *(undefined4 *)(param_1 + 0xdc) = uVar11;
                      }
                      else {
                        *(undefined4 *)(param_1 + 0xdc) = 0;
                      }
                    }
                  }
                  else {
                    pbVar9 = (byte *)(*(int *)(param_1 + 0xb8) + 0x12);
                    while( true ) {
                      for (; (bVar1 = *pbVar9, bVar1 != 0 &&
                             (((*(ushort *)(__ctype_b + (uint)bVar1 * 2) & 0x20) != 0 ||
                              (bVar1 == 0x2c)))); pbVar9 = pbVar9 + 1) {
                      }
                      iVar2 = FUN_0042d84c("FUN_0041f794",pbVar9,7);
                      if (iVar2 != 0) {
                        *(undefined1 *)(param_1 + 0x10c) = 1;
                        pbVar9 = pbVar9 + 7;
                        FUN_0042a1c0(param_2);
                      }
                      if (*(int *)(param_1 + 0xdc) != 0) break;
                      iVar2 = FUN_0042d84c("identity",pbVar9,8);
                      if (iVar2 == 0) {
                        iVar2 = FUN_0042d84c("deflate",pbVar9,7);
                        if (iVar2 == 0) {
                          iVar2 = FUN_0042d84c(&DAT_0049e788,pbVar9,4);
                          if (iVar2 == 0) {
                            iVar2 = FUN_0042d84c("x-gzip",pbVar9,6);
                            if (iVar2 == 0) {
                              iVar2 = FUN_0042d84c("compress",pbVar9,8);
                              if (iVar2 != 0) {
                                *(undefined4 *)(param_1 + 0xdc) = 3;
                                goto LAB_00421818;
                              }
                              iVar2 = FUN_0042d84c("x-compress",pbVar9,10);
                              if (iVar2 == 0) break;
                              pbVar9 = pbVar9 + 10;
                              *(undefined4 *)(param_1 + 0xdc) = 3;
                            }
                            else {
                              pbVar9 = pbVar9 + 6;
                              *(undefined4 *)(param_1 + 0xdc) = 2;
                            }
                          }
                          else {
                            pbVar9 = pbVar9 + 4;
                            *(undefined4 *)(param_1 + 0xdc) = 2;
                          }
                        }
                        else {
                          pbVar9 = pbVar9 + 7;
                          *(undefined4 *)(param_1 + 0xdc) = 1;
                        }
                      }
                      else {
                        *(undefined4 *)(param_1 + 0xdc) = 0;
LAB_00421818:
                        pbVar9 = pbVar9 + 8;
                      }
                    }
                  }
                }
                else {
                  *(undefined1 *)(param_2 + 0x1d8) = 1;
                }
LAB_00421c78:
                cVar10 = *(char *)(param_1 + 700);
                goto LAB_00421c80;
              }
              *(undefined1 *)(param_2 + 0x1d8) = 0;
              pcVar5 = "HTTP/1.0 connection set to keep alive!\n";
            }
          }
          FUN_004104e0(param_1,pcVar5);
          goto LAB_0042153c;
        }
        pcVar5 = (char *)FUN_0041e6c8();
        if (((*(char **)(param_2 + 0x488) != (char *)0x0) && (**(char **)(param_2 + 0x488) != '\0'))
           && (iVar2 = FUN_00418b0c(param_1,pcVar5), iVar2 != 0)) {
          **(undefined1 **)(param_2 + 0x488) = 0;
        }
        if (pcVar5 != (char *)0x0) goto LAB_00421534;
        cVar10 = *(char *)(param_1 + 700);
      }
LAB_00421c80:
      uVar11 = 2;
      if (cVar10 != '\0') {
        uVar11 = 3;
      }
      if (*(char *)(param_1 + 0x2c8) != '\0') {
        FUN_004103f4(param_1,1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xa8),
                     param_2);
      }
      iVar2 = FUN_00410818(param_2,uVar11,*(undefined4 *)(param_1 + 0xb8),
                           *(undefined4 *)(param_1 + 0xa8));
      if (iVar2 != 0) {
        return iVar2;
      }
      *(int *)(param_1 + 0x8680) = *(int *)(param_1 + 0x8680) + *(int *)(param_1 + 0xa8);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0xa8);
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x52c);
    if (*param_4 != '\0') {
      return 0;
    }
    if (**(char **)(param_1 + 0xac) == '\0') {
      return 0;
    }
  } while( true );
}



// ==== anonymous @ 0042505c size=7604

int anonymous(int param_1,int *param_2,char *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  undefined4 *puVar19;
  int *piVar20;
  char *pcVar21;
  int iVar22;
  undefined1 *puVar23;
  undefined **ppuVar24;
  int *piVar25;
  undefined1 *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_87;
  char local_84 [16];
  char *local_74;
  int local_70;
  char *local_6c;
  int local_68 [2];
  int local_60;
  int local_5c;
  uint local_58;
  undefined4 *local_54;
  uint local_50;
  uint local_4c;
  int *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  char *local_34;
  int local_30;
  
  uVar15 = *(undefined4 *)(param_1 + 0x40);
  *param_3 = '\0';
  iVar16 = 3;
  local_68[0] = 0;
  local_6c = (char *)0x0;
  local_50 = FUN_00415b78(uVar15);
  local_4c = FUN_00415b90(*(undefined4 *)(param_1 + 0x40));
  iVar22 = *(int *)(param_1 + 1000);
  *param_3 = '\0';
  if (iVar22 != 0) {
    piVar7 = (int *)(*DAT_004be4f0)(1,0x490);
    if (piVar7 == (int *)0x0) goto LAB_00425f40;
    piVar7[0x81] = (int)&PTR_s_<no_protocol>_0049ee3c;
    piVar7[0x55] = -1;
    piVar7[0x56] = -1;
    piVar7[0x57] = -1;
    piVar7[0x58] = -1;
    piVar7[0x11] = -1;
    piVar7[0x2c] = -1;
    piVar7[0x2d] = -1;
    *(undefined1 *)(piVar7 + 0x76) = 1;
    FUN_0041a540(&local_60);
    uVar15 = *(undefined4 *)(param_1 + 0x40);
    piVar7[0x53] = local_60;
    *piVar7 = param_1;
    piVar7[0x54] = local_5c;
    iVar16 = *(int *)(param_1 + 0x280);
    *(undefined1 *)((int)piVar7 + 0x1da) = 0;
    piVar7[0x4e] = iVar16;
    iVar16 = *(int *)(param_1 + 0x368);
    *(undefined1 *)((int)piVar7 + 0x1db) = 0;
    *(undefined1 *)((int)piVar7 + 0x1dd) = 0;
    *(bool *)(piVar7 + 0x77) = iVar16 != 0;
    uVar1 = *(undefined1 *)(param_1 + 0x2cc);
    *(undefined1 *)((int)piVar7 + 0x1e5) = 0;
    *(undefined1 *)(piVar7 + 0x7a) = uVar1;
    *(undefined1 *)((int)piVar7 + 0x1e9) = *(undefined1 *)(param_1 + 0x2cd);
    *(undefined1 *)(piVar7 + 0x11c) = *(undefined1 *)(param_1 + 0x250);
    *(undefined1 *)((int)piVar7 + 0x471) = *(undefined1 *)(param_1 + 0x251);
    piVar7[0x83] = *(int *)(param_1 + 0x294);
    iVar16 = FUN_00414b80(uVar15);
    if ((iVar16 != 0) && (piVar7[0x94] == 0)) {
      iVar16 = (*DAT_004be4f0)(0x4000,1);
      piVar7[0x94] = iVar16;
      if (iVar16 != 0) goto LAB_00425198;
      iVar16 = piVar7[0x92];
LAB_0042527c:
      FUN_0042a8a0(iVar16,0);
      FUN_0042a8a0(piVar7[0x93],0);
      piVar7[0x92] = 0;
      piVar7[0x93] = 0;
      if (piVar7[0x94] != 0) {
        (*DAT_004be4fc)();
        piVar7[0x94] = 0;
      }
      if (piVar7[0x11d] != 0) {
        (*DAT_004be4fc)();
        piVar7[0x11d] = 0;
      }
      (*DAT_004be4fc)(piVar7);
      iVar16 = 0x1b;
      goto LAB_00425f48;
    }
LAB_00425198:
    iVar16 = FUN_0042a6d0(&LAB_00421ef4);
    piVar7[0x92] = iVar16;
    iVar16 = FUN_0042a6d0(&LAB_00421ef4);
    piVar7[0x93] = iVar16;
    if (piVar7[0x92] == 0) {
      iVar16 = piVar7[0x92];
      goto LAB_0042527c;
    }
    if (iVar16 == 0) {
LAB_00425278:
      iVar16 = piVar7[0x92];
      goto LAB_0042527c;
    }
    if (*(int *)(param_1 + 0x30c) != 0) {
      iVar16 = (*DAT_004be4f4)();
      piVar7[0x11d] = iVar16;
      if (iVar16 == 0) goto LAB_00425278;
    }
    piVar7[0x11f] = *(int *)(param_1 + 0x16c);
    *(undefined2 *)(piVar7 + 0x11e) = *(undefined2 *)(param_1 + 0x168);
    piVar7[0xe] = *(int *)(param_1 + 0x1a8);
    piVar7[0xf] = *(int *)(param_1 + 0x1ac);
    *param_2 = (int)piVar7;
    uVar8 = strlen(*(undefined4 *)(param_1 + 1000));
    if (uVar8 < 0x100) {
      uVar8 = 0x100;
    }
    if (*(int *)(param_1 + 0x8620) != 0) {
      (*DAT_004be4fc)();
      *(undefined4 *)(param_1 + 0x8620) = 0;
    }
    pcVar5 = DAT_004be500;
    *(undefined4 *)(param_1 + 0x8624) = 0;
    iVar16 = (*pcVar5)(uVar8 + 2);
    *(int *)(param_1 + 0x8620) = iVar16;
    pcVar5 = DAT_004be500;
    if (iVar16 == 0) {
LAB_00425f40:
      iVar16 = 0x1b;
      goto LAB_00425f48;
    }
    *(int *)(param_1 + 0x8624) = iVar16;
    puVar9 = (undefined1 *)(*pcVar5)(uVar8 + 2);
    piVar7[0x24] = (int)puVar9;
    if (puVar9 == (undefined1 *)0x0) {
      if (*(int *)(param_1 + 0x8620) != 0) {
        (*DAT_004be4fc)();
        *(undefined4 *)(param_1 + 0x8620) = 0;
      }
      *(undefined4 *)(param_1 + 0x8624) = 0;
      goto LAB_00425f40;
    }
    piVar7[0x26] = (int)puVar9;
    *puVar9 = 0;
    local_68[0] = (*DAT_004be4f4)(&DAT_0049bcf4);
    local_6c = (char *)(*DAT_004be4f4)(&DAT_0049bcf4);
    pcVar10 = (char *)(*DAT_004be4f4)(&DAT_0049bcf4);
    if ((local_68[0] != 0) && (local_6c != (char *)0x0)) {
      if (pcVar10 == (char *)0x0) goto LAB_00425f40;
      pcVar18 = *(char **)(param_1 + 0x8624);
      local_84[0] = '\0';
      local_84[1] = '\0';
      local_84[2] = '\0';
      local_84[3] = '\0';
      local_84[4] = '\0';
      local_84[5] = '\0';
      local_84[6] = '\0';
      local_84[7] = '\0';
      local_84[8] = '\0';
      local_84[9] = '\0';
      local_84[10] = '\0';
      local_84[0xb] = '\0';
      local_84[0xc] = '\0';
      local_84[0xd] = '\0';
      local_84[0xe] = '\0';
      local_84[0xf] = '\0';
      iVar16 = sscanf(*(undefined4 *)(param_1 + 1000),"%15[^:]:%[^\n]",local_84,pcVar18);
      if ((iVar16 == 2) && (iVar16 = FUN_0042d7ac(local_84,"file"), iVar16 != 0)) {
        if ((*pcVar18 == '/') && (pcVar18[1] == '/')) {
          iVar16 = strlen(pcVar18 + 2);
          memmove(pcVar18,pcVar18 + 2,iVar16 + 1);
        }
        pcVar21 = "file";
        if ((*pcVar18 == '/') || (iVar16 = strchr(pcVar18,0x2f), iVar16 == 0)) {
          bVar4 = false;
        }
        else {
          iVar16 = iVar16 + (uint)(*(char *)(iVar16 + 1) == '/');
          iVar22 = strlen(iVar16);
          memmove(pcVar18,iVar16,iVar22 + 1);
          bVar4 = false;
        }
LAB_004255d8:
        iVar17 = piVar7[0x26];
        iVar22 = strchr(iVar17,0x40);
        iVar16 = iVar22 + 1;
        if (iVar22 == 0) {
          iVar16 = iVar17;
        }
        puVar9 = (undefined1 *)strchr(iVar16,0x3f);
        if (puVar9 == (undefined1 *)0x0) {
          bVar3 = false;
          if (*pcVar18 == '\0') {
            strcpy(pcVar18,&DAT_0049df68);
            goto LAB_00425668;
          }
        }
        else {
          iVar16 = strlen(puVar9);
          iVar22 = strlen(pcVar18);
          memmove(pcVar18 + iVar16 + 1,pcVar18,iVar22 + 1);
          memcpy(pcVar18 + 1,puVar9,iVar16);
          *pcVar18 = '/';
          *puVar9 = 0;
LAB_00425668:
          bVar3 = true;
        }
        if (*pcVar18 == '?') {
          iVar16 = strlen();
          memmove(pcVar18 + 1,pcVar18,iVar16 + 1);
          *pcVar18 = '/';
          goto LAB_004256fc;
        }
        pcVar11 = (char *)FUN_0042e0d0(pcVar18);
        if (pcVar11 == (char *)0x0) goto LAB_00425f24;
        iVar16 = strcmp(pcVar11,pcVar18);
        if (iVar16 == 0) {
          (*DAT_004be4fc)(pcVar11);
          if (bVar3) goto LAB_004256fc;
        }
        else {
          (*DAT_004be4fc)(*(undefined4 *)(param_1 + 0x8620));
          *(char **)(param_1 + 0x8620) = pcVar11;
          *(char **)(param_1 + 0x8624) = pcVar11;
          pcVar18 = pcVar11;
LAB_004256fc:
          local_58 = strlen(pcVar18);
          iVar16 = strlen(*(undefined4 *)(param_1 + 1000));
          iVar22 = strlen(piVar7[0x26]);
          if (!bVar4) {
            iVar17 = strlen(pcVar21);
            iVar22 = iVar22 + 3 + iVar17;
          }
          iVar16 = (*DAT_004be500)(iVar16 + 2);
          if (iVar16 == 0) goto LAB_00425f24;
          memcpy(iVar16,*(undefined4 *)(param_1 + 1000),iVar22);
          memcpy(iVar16 + iVar22,pcVar18,local_58 + 1);
          if (*(char *)(param_1 + 0x3ec) != '\0') {
            if (*(int *)(param_1 + 1000) != 0) {
              (*DAT_004be4fc)();
              *(undefined4 *)(param_1 + 1000) = 0;
            }
            *(undefined1 *)(param_1 + 0x3ec) = 0;
          }
          FUN_004104e0(param_1,"Rebuilt URL to: %s\n",iVar16);
          *(int *)(param_1 + 1000) = iVar16;
          *(undefined1 *)(param_1 + 0x3ec) = 1;
        }
        local_74 = (char *)0x0;
        local_98 = (undefined1 *)0x0;
        iVar22 = piVar7[0x26];
        local_70 = 0;
        iVar16 = strchr(iVar22,0x40);
        if (iVar16 == 0) {
          iVar17 = 0;
        }
        else {
          iVar14 = *(int *)(param_1 + 0x2c4);
          iVar17 = 0;
          piVar7[0x26] = iVar16 + 1;
          if ((iVar14 != 2) &&
             (iVar17 = FUN_00421efc(iVar22,((iVar16 + 1) - iVar22) + -1,&local_70,&local_74,
                                    &local_98), iVar17 == 0)) {
            if (local_70 == 0) {
LAB_0042585c:
              if (local_74 != (char *)0x0) {
                pcVar11 = (char *)FUN_004277e4(param_1,local_74,0,0);
                if (pcVar11 == (char *)0x0) goto LAB_004258d4;
                (*DAT_004be4fc)(local_6c);
                local_6c = pcVar11;
              }
              if (local_98 != (undefined1 *)0x0) {
                pcVar11 = (char *)FUN_004277e4(param_1,local_98,0,0);
                if (pcVar11 == (char *)0x0) goto LAB_004258d4;
                (*DAT_004be4fc)(pcVar10);
                pcVar10 = pcVar11;
              }
            }
            else {
              *(undefined1 *)((int)piVar7 + 0x1eb) = 1;
              *(undefined1 *)(piVar7 + 0x77) = 1;
              iVar16 = FUN_004277e4(param_1,local_70,0,0);
              if (iVar16 != 0) {
                (*DAT_004be4fc)(local_68[0]);
                local_68[0] = iVar16;
                goto LAB_0042585c;
              }
LAB_004258d4:
              iVar17 = 0x1b;
            }
          }
        }
        if (local_70 != 0) {
          (*DAT_004be4fc)();
          local_70 = 0;
        }
        if (local_74 != (char *)0x0) {
          (*DAT_004be4fc)();
          local_74 = (char *)0x0;
        }
        if (local_98 != (undefined1 *)0x0) {
          (*DAT_004be4fc)();
        }
        iVar16 = iVar17;
        if (iVar17 == 0) {
          if ((*(char *)piVar7[0x26] == '[') &&
             (iVar16 = strchr((char *)piVar7[0x26],0x25), iVar16 != 0)) {
            iVar22 = strncmp(&DAT_0049ea7c,iVar16,3);
            local_58 = 3;
            if (iVar22 != 0) {
              FUN_004104e0(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
              local_58 = 1;
            }
            local_34 = (char *)(iVar16 + local_58);
            iVar22 = strtoul(local_34,&local_74,10);
            if (*local_74 == ']') {
              local_34 = local_74;
              local_30 = iVar22;
              iVar22 = strlen(local_74);
              memmove(iVar16,local_34,iVar22 + 1);
              piVar7[0x22] = local_30;
              goto LAB_00425a78;
            }
            strncpy(&local_98,local_34,0x12);
            local_87 = 0;
            puVar9 = (undefined1 *)strchr(&local_98,0x5d);
            if (puVar9 != (undefined1 *)0x0) {
              *puVar9 = 0;
              pcVar11 = (char *)if_nametoindex(&local_98);
              if (pcVar11 != (char *)0x0) {
                local_34 = pcVar11;
                iVar22 = strlen(&local_98);
                memmove(iVar16,iVar16 + iVar22 + local_58);
                piVar7[0x22] = (int)local_34;
                goto LAB_00425a78;
              }
              puVar19 = (undefined4 *)__errno_location();
              uVar15 = strerror(*puVar19);
              FUN_004104e0(param_1,"Invalid network interface: %s; %s\n",&local_98,uVar15);
            }
            FUN_004104e0(param_1,"Invalid IPv6 address format\n");
            iVar16 = *(int *)(param_1 + 0x398);
          }
          else {
LAB_00425a78:
            iVar16 = *(int *)(param_1 + 0x398);
          }
          if (iVar16 != 0) {
            piVar7[0x22] = iVar16;
          }
          puVar9 = (undefined1 *)strchr(pcVar18,0x23);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 0;
            puVar9 = (undefined1 *)strchr(*(undefined4 *)(param_1 + 1000),0x23);
            if (puVar9 != (undefined1 *)0x0) {
              *puVar9 = 0;
            }
          }
          for (ppuVar24 = &PTR_PTR_0049ee80; puVar19 = (undefined4 *)*ppuVar24,
              puVar19 != (undefined4 *)0x0; ppuVar24 = ppuVar24 + 1) {
            iVar16 = FUN_0042d7ac(*puVar19,pcVar21);
            if (iVar16 != 0) {
              if (((puVar19[0xf] & *(uint *)(param_1 + 0x39c)) != 0) &&
                 ((*(char *)(param_1 + 0x8540) == '\0' ||
                  ((puVar19[0xf] & *(uint *)(param_1 + 0x3a0)) != 0)))) {
                piVar7[0x82] = (int)puVar19;
                piVar7[0x81] = (int)puVar19;
                if (bVar4) {
                  iVar16 = FUN_00412114("%s://%s",*puVar19,*(undefined4 *)(param_1 + 1000));
                  if (iVar16 == 0) goto LAB_00425f24;
                  if ((*(char *)(param_1 + 0x3ec) != '\0') && (*(int *)(param_1 + 1000) != 0)) {
                    (*DAT_004be4fc)();
                  }
                  *(int *)(param_1 + 1000) = iVar16;
                  *(undefined1 *)(param_1 + 0x3ec) = 1;
                }
                if (((*(uint *)(piVar7[0x82] + 0x40) & 0x40) != 0) &&
                   (puVar9 = (undefined1 *)strchr(*(undefined4 *)(*piVar7 + 0x8624),0x3f),
                   puVar9 != (undefined1 *)0x0)) {
                  *puVar9 = 0;
                }
                if (*(int *)(param_1 + 0x394) != 0) {
                  iVar16 = (*DAT_004be4f4)();
                  piVar7[0x4b] = iVar16;
                  if (iVar16 == 0) {
                    iVar16 = 0x1b;
                    goto LAB_00425f2c;
                  }
                }
                if ((*(uint *)(piVar7[0x82] + 0x40) & 1) == 0) {
                  iVar16 = piVar7[0x26];
                }
                else {
                  if (*(char *)((int)piVar7 + 0x1db) != '\0') {
                    *(undefined1 *)((int)piVar7 + 0x1e5) = 1;
                  }
                  iVar16 = piVar7[0x26];
                }
                iVar16 = sscanf(iVar16,"[%*45[0123456789abcdefABCDEF:.]%c",local_84);
                if ((iVar16 == 1) && (local_84[0] == ']')) {
                  iVar16 = piVar7[0x26] + 1;
                  *(undefined1 *)((int)piVar7 + 0x1de) = 1;
                  piVar7[0x26] = iVar16;
                  puVar12 = (undefined1 *)strchr(iVar16,0x5d);
                  puVar9 = puVar12;
                  if (puVar12 != (undefined1 *)0x0) {
                    puVar9 = puVar12 + 1;
                    *puVar12 = 0;
                    if (puVar12[1] != ':') {
                      puVar9 = (undefined1 *)0x0;
                    }
                  }
                }
                else {
                  puVar9 = (undefined1 *)strrchr(piVar7[0x26],0x3a);
                }
                if ((*(uint *)(param_1 + 0x138) == 0) || (*(char *)(param_1 + 0x856c) == '\0')) {
                  if (puVar9 != (undefined1 *)0x0) {
                    uVar8 = strtol(puVar9 + 1,&local_98,10);
                    if (0xffff < uVar8) {
                      pcVar18 = "Port number out of range";
                      goto LAB_00425dfc;
                    }
                    *puVar9 = 0;
                    if (local_98 != puVar9 + 1) {
                      iVar16 = FUN_004181b0(uVar8);
                      piVar7[0x2d] = iVar16;
                    }
                  }
                }
                else {
                  piVar7[0x2d] = *(uint *)(param_1 + 0x138) & 0xffff;
                  if (puVar9 != (undefined1 *)0x0) {
                    *puVar9 = 0;
                  }
                  if (*(char *)((int)piVar7 + 0x1db) != '\0') {
                    local_98 = (undefined1 *)0x0;
                    local_94 = 0;
                    local_90 = 0;
                    if ((char)piVar7[0x7c] != '\0') {
                      uVar15 = 0x41;
                      if ((*(char *)(param_1 + 0x2b3) == '\0') &&
                         (uVar15 = 0x44, *(char *)(param_1 + 0x2b5) == '\0')) {
                        uVar15 = 0x49;
                      }
                      FUN_00410eb0(&local_98,0xc,";type=%c",uVar15);
                    }
                    if (*(char *)((int)piVar7 + 0x1de) == '\0') {
                      puVar9 = &DAT_0049bcf4;
                    }
                    else {
                      puVar9 = &DAT_0049e1b8;
                    }
                    if (*(char *)((int)piVar7 + 0x1de) == '\0') {
                      puVar12 = &DAT_0049bcf4;
                    }
                    else {
                      puVar12 = &DAT_0049dd4c;
                    }
                    if (*(char *)(param_1 + 0x8628) == '\0') {
                      puVar23 = &DAT_0049bcf4;
                    }
                    else {
                      puVar23 = &DAT_0049df68;
                    }
                    iVar16 = FUN_00412114("%s://%s%s%s:%hu%s%s%s",*(undefined4 *)piVar7[0x82],puVar9
                                          ,piVar7[0x26],puVar12,piVar7[0x2d],puVar23,
                                          *(undefined4 *)(param_1 + 0x8624),&local_98);
                    if (iVar16 == 0) goto LAB_00425f24;
                    if ((*(char *)(param_1 + 0x3ec) != '\0') && (*(int *)(param_1 + 1000) != 0)) {
                      (*DAT_004be4fc)();
                    }
                    *(int *)(param_1 + 1000) = iVar16;
                    *(undefined1 *)(param_1 + 0x3ec) = 1;
                  }
                }
                if (*(int *)(param_1 + 0x368) != 0) {
                  (*DAT_004be4fc)(local_68[0]);
                  local_68[0] = (*DAT_004be4f4)(*(undefined4 *)(param_1 + 0x368));
                  if (local_68[0] == 0) goto LAB_00425f1c;
                }
                if (*(int *)(param_1 + 0x36c) == 0) {
                  iVar16 = *(int *)(param_1 + 0x370);
                }
                else {
                  (*DAT_004be4fc)(local_6c);
                  local_6c = (char *)(*DAT_004be4f4)(*(undefined4 *)(param_1 + 0x36c));
                  if (local_6c == (char *)0x0) goto LAB_00425f1c;
                  iVar16 = *(int *)(param_1 + 0x370);
                }
                if (iVar16 != 0) {
                  (*DAT_004be4fc)(pcVar10);
                  pcVar10 = (char *)(*DAT_004be4f4)(*(undefined4 *)(param_1 + 0x370));
                  if (pcVar10 == (char *)0x0) goto LAB_00425f40;
                }
                iVar16 = *(int *)(param_1 + 0x2c4);
                *(undefined1 *)((int)piVar7 + 0x1ea) = 0;
                if (iVar16 == 0) {
LAB_00426018:
                  iVar16 = piVar7[0x81];
                }
                else {
                  iVar16 = FUN_00427880(piVar7[0x26],local_68,&local_6c,
                                        *(undefined4 *)(param_1 + 0x330));
                  if (iVar16 < 1) {
                    if (iVar16 == 0) {
                      *(undefined1 *)((int)piVar7 + 0x1ea) = 1;
                      *(undefined1 *)(piVar7 + 0x77) = 1;
                      goto LAB_00426018;
                    }
                    goto LAB_00425f1c;
                  }
                  FUN_004104e0(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n"
                               ,piVar7[0x26]);
                  iVar16 = piVar7[0x81];
                }
                pcVar18 = local_6c;
                if (((*(uint *)(iVar16 + 0x40) & 0x20) == 0) || ((char)piVar7[0x77] != '\0')) {
                  iVar16 = (*DAT_004be4f4)(local_68[0]);
                  piVar7[0x48] = iVar16;
                  if (iVar16 != 0) goto LAB_00426084;
LAB_00426094:
                  piVar7[0x49] = 0;
                }
                else {
                  iVar16 = (*DAT_004be4f4)("anonymous");
                  piVar7[0x48] = iVar16;
                  if (iVar16 == 0) goto LAB_00426094;
                  pcVar18 = "ftp@example.com";
LAB_00426084:
                  iVar16 = (*DAT_004be4f4)(pcVar18);
                  piVar7[0x49] = iVar16;
                }
                if ((piVar7[0x48] == 0) || (piVar7[0x49] == 0)) goto LAB_00425f24;
                if (*pcVar10 != '\0') {
                  iVar16 = (*DAT_004be4f4)(pcVar10);
                  piVar7[0x4a] = iVar16;
                  if (iVar16 == 0) goto LAB_00425f24;
                }
                iVar16 = *piVar7;
                FUN_00424c60(iVar16);
                memset(iVar16 + 0x50,0,200);
                *(undefined4 *)(iVar16 + 0x60) = 0xffffffff;
                *(undefined4 *)(iVar16 + 100) = 0xffffffff;
                piVar7[0x23] = 2;
                iVar16 = piVar7[0x81];
                if (*(code **)(iVar16 + 4) != (code *)0x0) {
                  iVar16 = (**(code **)(iVar16 + 4))(piVar7);
                  if (iVar16 != 0) goto LAB_00425f2c;
                  iVar16 = piVar7[0x81];
                }
                if (piVar7[0x2c] < 0) {
                  piVar7[0x2c] = *(int *)(iVar16 + 0x38);
                }
                if (piVar7[0x2d] < 0) {
                  piVar7[0x2d] = (uint)*(ushort *)(piVar7[0x82] + 0x38);
                }
                piVar7[0x5c] = (int)FUN_00410624;
                local_48 = piVar7 + 0x68;
                piVar7[0x5d] = (int)FUN_00410624;
                uVar15 = *(undefined4 *)(param_1 + 0x348);
                piVar7[0x5a] = (int)FUN_00410740;
                piVar7[0x5b] = (int)FUN_00410740;
                *(undefined4 *)(param_1 + 0x254) = uVar15;
                *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x34c);
                *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x360);
                *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x364);
                *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x358);
                *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x354);
                *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x350);
                iVar16 = FUN_00418d84(param_1 + 0x248,local_48);
                if (iVar16 == 0) goto LAB_00425f24;
                FUN_0041a540(&local_98);
                iVar16 = FUN_0041a5b8(local_98,local_94,
                                      *(undefined4 *)(*(int *)(param_1 + 0x518) + 0xc),
                                      *(undefined4 *)(*(int *)(param_1 + 0x518) + 0x10));
                if (999 < iVar16) {
                  FUN_00418548(*(undefined4 *)(param_1 + 0x518),param_1,FUN_00424918);
                  iVar16 = *(int *)(param_1 + 0x518);
                  *(undefined1 **)(iVar16 + 0xc) = local_98;
                  *(undefined4 *)(iVar16 + 0x10) = local_94;
                }
                if ((*(char *)(param_1 + 0x2cb) != '\0') && (*(char *)(param_1 + 0x8540) == '\0'))
                goto LAB_00426b48;
                iVar16 = FUN_004036fc(param_1,piVar7[0x81]);
                local_40 = 0;
                if ((*(uint *)(param_1 + 0x85b8) & 0x28) != 0) {
                  local_40 = (uint)((*(uint *)(piVar7[0x81] + 0x3c) & 3) != 0);
                }
                bVar6 = 0;
                if (iVar16 != 0) {
                  bVar6 = FUN_004188f8(param_1,piVar7);
                  bVar6 = bVar6 ^ 1;
                }
                pcVar18 = (char *)FUN_00418394(*(undefined4 *)(param_1 + 0x518),piVar7[0x26]);
                if (pcVar18 == (char *)0x0) goto LAB_00426b48;
                local_3c = FUN_00415ba8(*(undefined4 *)(param_1 + 0x40));
                FUN_004104e0(param_1,"Found bundle for host %s: %p\n",piVar7[0x26],pcVar18);
                if ((bVar6 != 0) && (*pcVar18 == '\0')) {
                  bVar6 = 0;
                  FUN_004104e0(param_1,"Server doesn\'t support pipelining\n");
                }
                local_54 = (undefined4 *)**(undefined4 **)(pcVar18 + 8);
                local_44 = local_3c;
                piVar20 = (int *)0x0;
                goto LAB_00426300;
              }
              break;
            }
          }
          FUN_00410550(param_1,"Protocol \"%s\" not supported or disabled in libcurl",pcVar21);
          iVar16 = 1;
        }
      }
      else {
        *pcVar18 = '\0';
        pcVar21 = pcVar18;
        iVar16 = sscanf(*(undefined4 *)(param_1 + 1000),"%15[^\n:]://%[^\n/?]%[^\n]",local_84,
                        piVar7[0x26],pcVar18);
        bVar4 = false;
        if (1 < iVar16) {
          pcVar21 = local_84;
          goto LAB_004255d8;
        }
        iVar16 = sscanf(*(undefined4 *)(param_1 + 1000),"%[^\n/?]%[^\n]",piVar7[0x26],pcVar18,
                        pcVar21);
        if (0 < iVar16) {
          iVar16 = FUN_0042d84c(&DAT_0049ea38,piVar7[0x26],4);
          if (iVar16 == 0) {
            iVar16 = FUN_0042d84c("DICT.",piVar7[0x26],5);
            if (iVar16 == 0) {
              iVar16 = FUN_0042d84c("LDAP.",piVar7[0x26],5);
              if (iVar16 == 0) {
                iVar16 = FUN_0042d84c("IMAP.",piVar7[0x26],5);
                if (iVar16 == 0) {
                  iVar16 = FUN_0042d84c("SMTP.",piVar7[0x26],5);
                  if (iVar16 == 0) {
                    bVar4 = true;
                    iVar16 = FUN_0042d84c(&DAT_0049ea60,piVar7[0x26],5);
                    if (iVar16 == 0) {
                      pcVar21 = "http";
                    }
                    else {
                      pcVar21 = "pop3";
                    }
                  }
                  else {
                    bVar4 = true;
                    pcVar21 = "smtp";
                  }
                }
                else {
                  bVar4 = true;
                  pcVar21 = "IMAP";
                }
              }
              else {
                bVar4 = true;
                pcVar21 = "LDAP";
              }
            }
            else {
              bVar4 = true;
              pcVar21 = "DICT";
            }
          }
          else {
            bVar4 = true;
            pcVar21 = "ftp";
          }
          goto LAB_004255d8;
        }
        pcVar18 = "<url> malformed";
LAB_00425dfc:
        FUN_00410550(param_1,pcVar18);
        iVar16 = 3;
      }
      goto LAB_00425f2c;
    }
LAB_00425f1c:
    if (pcVar10 == (char *)0x0) goto LAB_00425f40;
LAB_00425f24:
    iVar16 = 0x1b;
    goto LAB_00425f2c;
  }
  goto LAB_00425f48;
LAB_00426b48:
  uVar15 = *(undefined4 *)(param_1 + 0x518);
LAB_00426b4c:
  iVar16 = FUN_00418394(uVar15,piVar7[0x26]);
  if ((local_50 == 0) || (iVar16 == 0)) {
    piVar20 = (int *)0x0;
  }
  else {
    piVar20 = (int *)0x0;
    if (local_50 <= *(uint *)(iVar16 + 4)) {
      FUN_0041a540(&local_98);
      pcVar18 = (char *)0xffffffff;
      for (puVar19 = (undefined4 *)**(undefined4 **)(iVar16 + 8); puVar19 != (undefined4 *)0x0;
          puVar19 = (undefined4 *)puVar19[2]) {
        piVar25 = (int *)*puVar19;
        if (((char)piVar25[0x10] == '\0') &&
           (local_34 = pcVar18,
           pcVar21 = (char *)FUN_0041a5b8(local_98,local_94,piVar25[0x51],piVar25[0x52]),
           pcVar18 = local_34, (int)local_34 < (int)pcVar21)) {
          piVar20 = piVar25;
          pcVar18 = pcVar21;
        }
      }
      if (piVar20 == (int *)0x0) {
        piVar20 = (int *)&_DYNAMIC_LINKING;
      }
      else {
        *piVar20 = param_1;
        FUN_00424784(piVar20,0);
        piVar20 = (int *)0x0;
      }
    }
  }
  if ((local_4c == 0) || (*(uint *)(*(int *)(param_1 + 0x518) + 4) < local_4c)) {
LAB_0042697c:
    if (piVar20 == (int *)0x0) {
      FUN_004183e4(*(undefined4 *)(param_1 + 0x518),piVar7);
      if (((*(uint *)(param_1 + 0x85bc) & 0x28) != 0) && (*(char *)(param_1 + 0x85c4) != '\0')) {
        FUN_004104e0(param_1,"NTLM picked AND auth done set, clear picked!\n");
        *(undefined4 *)(param_1 + 0x85bc) = 0;
      }
      if (((*(uint *)(param_1 + 0x85cc) & 0x28) != 0) && (*(char *)(param_1 + 0x85d4) != '\0')) {
        FUN_004104e0(param_1,"NTLM-proxy picked AND auth done set, clear picked!\n");
        *(undefined4 *)(param_1 + 0x85cc) = 0;
      }
      iVar16 = *piVar7;
      goto LAB_004269c4;
    }
  }
  else {
    piVar25 = (int *)FUN_004224e4();
    if (piVar25 != (int *)0x0) {
      *piVar25 = param_1;
      FUN_00424784(piVar25,0);
      goto LAB_0042697c;
    }
  }
  iVar16 = 0x59;
  FUN_004104e0(param_1,"No connections available.\n");
  FUN_004221d4(piVar7);
  *param_2 = 0;
  goto LAB_00425f2c;
LAB_00426300:
  do {
    if (local_54 == (undefined4 *)0x0) {
      piVar25 = piVar20;
      if (piVar20 == (int *)0x0) goto LAB_00426b48;
LAB_00426668:
      iVar16 = FUN_004036fc(param_1,piVar25[0x81]);
      if (((iVar16 != 0) &&
          ((*(int *)(piVar25[0x93] + 0xc) + *(int *)(piVar25[0x92] + 0xc) != 0 &&
           (FUN_004104e0(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                         piVar25[0x11]), *(uint *)(piVar25[0x122] + 4) < local_50)))) &&
         (*(uint *)(*(int *)(param_1 + 0x518) + 4) < local_4c)) {
        FUN_004104e0(param_1,"We can reuse, but we want a new connection anyway\n");
        uVar15 = *(undefined4 *)(param_1 + 0x518);
        goto LAB_00426b4c;
      }
      goto LAB_00426758;
    }
    piVar25 = (int *)*local_54;
    local_54 = (undefined4 *)local_54[2];
    iVar16 = FUN_0042485c(piVar25,param_1);
  } while (iVar16 != 0);
  local_58 = ((undefined4 *)piVar25[0x93])[3] + ((int *)piVar25[0x92])[3];
  if (bVar6 == 0) {
    if (local_58 != 0) goto LAB_00426300;
    if ((piVar25[0x55] == -1) || ((char)piVar25[0x76] != '\0')) {
      FUN_004104e0(param_1,"FUN_0041f3e4 #%ld isn\'t open enough, can\'t reuse\n",piVar25[0x11]);
      goto LAB_00426300;
    }
  }
  else {
    piVar13 = *(int **)piVar25[0x92];
    if (piVar13 == (int *)0x0) {
      iVar16 = 0;
    }
    else {
      iVar16 = *piVar13;
    }
    piVar13 = *(int **)piVar25[0x93];
    iVar22 = iVar16;
    if ((((piVar13 != (int *)0x0) && (iVar22 = *piVar13, iVar16 != 0)) ||
        (iVar16 = iVar22, iVar16 != 0)) &&
       (iVar16 = FUN_004036fc(iVar16,piVar25[0x81]), iVar16 == 0)) goto LAB_00426300;
  }
  pcVar18 = *(char **)(piVar7[0x81] + 0x40);
  if ((((((((uint)pcVar18 ^ *(uint *)(piVar25[0x81] + 0x40)) & 1) != 0) &&
        ((*(uint *)(piVar25[0x81] + 0x3c) & *(uint *)(piVar7[0x81] + 0x3c)) == 0)) ||
       ((((uint)pcVar18 & 1) != 0 && (*(short *)(param_1 + 0x250) != (short)piVar25[0x11c])))) ||
      (*(char *)((int)piVar7 + 0x1da) != *(char *)((int)piVar25 + 0x1da))) ||
     ((bVar6 == 0 && ((char)piVar25[0x10] != '\0')))) goto LAB_00426300;
  if (((piVar7[0x11d] != 0) || ((short)piVar7[0x11e] != 0)) &&
     (((((short)piVar25[0x11e] != (short)piVar7[0x11e] || (piVar25[0x11f] != piVar7[0x11f])) ||
       (piVar25[0x11d] == 0)) ||
      ((piVar7[0x11d] == 0 ||
       (local_34 = pcVar18, iVar16 = strcmp(), pcVar18 = local_34, iVar16 != 0))))))
  goto LAB_00426300;
  if ((((uint)pcVar18 & 0x80) == 0) || (local_40 != 0)) {
    iVar16 = FUN_004123b0(piVar7[0x48],piVar25[0x48]);
    if ((iVar16 == 0) || (iVar16 = FUN_004123b0(piVar7[0x49],piVar25[0x49]), iVar16 == 0))
    goto LAB_00426300;
    local_38 = 1;
  }
  else {
    local_38 = 0;
  }
  if ((*(char *)((int)piVar7 + 0x1db) == '\0') || ((*(uint *)(piVar7[0x81] + 0x40) & 1) != 0)) {
    puVar19 = (undefined4 *)piVar7[0x81];
LAB_00426504:
    iVar16 = FUN_0042d7ac(*puVar19,*(undefined4 *)piVar25[0x81]);
    if (iVar16 == 0) {
      if ((*(uint *)(piVar25[0x81] + 0x3c) & *(uint *)(piVar7[0x81] + 0x3c)) == 0)
      goto LAB_00426300;
      iVar16 = piVar7[0x26];
    }
    else {
      iVar16 = piVar7[0x26];
    }
    iVar16 = FUN_0042d7ac(iVar16,piVar25[0x26]);
    if (((iVar16 == 0) || (piVar7[0x2d] != piVar25[0x2d])) ||
       (((*(uint *)(piVar7[0x81] + 0x40) & 1) != 0 &&
        ((iVar16 = FUN_00418cd0(local_48,piVar25 + 0x68), iVar16 == 0 || (piVar25[0x5f] != 2))))))
    goto LAB_00426300;
  }
  else {
    if ((((*(char *)((int)piVar25 + 0x1db) != '\0') && (*(char *)((int)piVar7 + 0x1e5) != '\0')) &&
        (*(char *)((int)piVar25 + 0x1e5) != '\0')) &&
       ((iVar16 = FUN_0042d7ac(piVar7[0x2a],piVar25[0x2a]), iVar16 != 0 &&
        (piVar7[0x2c] == piVar25[0x2c])))) {
      puVar19 = (undefined4 *)piVar7[0x81];
      goto LAB_00426504;
    }
    if ((*(char *)((int)piVar25 + 0x1da) == '\0') ||
       ((((piVar7[0x4e] != piVar25[0x4e] ||
          (*(char *)((int)piVar7 + 0x1e5) != *(char *)((int)piVar25 + 0x1e5))) ||
         (iVar16 = FUN_0042d7ac(piVar7[0x2a],piVar25[0x2a]), iVar16 == 0)) ||
        (piVar7[0x2c] != piVar25[0x2c])))) goto LAB_00426300;
  }
  if (local_40 == 0) {
    if ((bVar6 == 0) || (local_58 == 0)) goto LAB_00426668;
    if (((local_58 < local_3c) && (iVar16 = FUN_004186ac(param_1,piVar25), iVar16 == 0)) &&
       (local_58 < local_44)) {
      local_44 = local_58;
      piVar20 = piVar25;
    }
    goto LAB_00426300;
  }
  if ((local_38 == 0) || (piVar20 = piVar25, piVar25[0x9b] == 0)) goto LAB_00426300;
LAB_00426758:
  iVar16 = piVar7[0x28];
  *(undefined1 *)(piVar25 + 0x10) = 1;
  if (iVar16 != 0) {
    (*DAT_004be4fc)();
  }
  FUN_00418eac(local_48);
  *piVar25 = *piVar7;
  iVar16 = piVar7[0x77];
  *(char *)(piVar25 + 0x77) = (char)iVar16;
  if ((char)iVar16 != '\0') {
    if (piVar25[0x48] != 0) {
      (*DAT_004be4fc)();
      piVar25[0x48] = 0;
    }
    if (piVar25[0x49] != 0) {
      (*DAT_004be4fc)();
      piVar25[0x49] = 0;
    }
    piVar25[0x48] = piVar7[0x48];
    piVar25[0x49] = piVar7[0x49];
    piVar7[0x48] = 0;
    piVar7[0x49] = 0;
  }
  cVar2 = *(char *)((int)piVar7 + 0x1dd);
  *(char *)((int)piVar25 + 0x1dd) = cVar2;
  if (cVar2 != '\0') {
    if (piVar25[0x4c] != 0) {
      (*DAT_004be4fc)();
      piVar25[0x4c] = 0;
    }
    if (piVar25[0x4d] != 0) {
      (*DAT_004be4fc)();
      piVar25[0x4d] = 0;
    }
    piVar25[0x4c] = piVar7[0x4c];
    piVar25[0x4d] = piVar7[0x4d];
    piVar7[0x4c] = 0;
    piVar7[0x4d] = 0;
  }
  if (piVar25[0x24] != 0) {
    (*DAT_004be4fc)();
    piVar25[0x24] = 0;
  }
  memcpy(piVar25 + 0x24,piVar7 + 0x24,0x10);
  FUN_0041308c(piVar25);
  iVar16 = piVar7[0x48];
  *(undefined1 *)((int)piVar25 + 0x1d9) = 1;
  if (iVar16 != 0) {
    (*DAT_004be4fc)();
    piVar7[0x48] = 0;
  }
  if (piVar7[0x49] != 0) {
    (*DAT_004be4fc)();
    piVar7[0x49] = 0;
  }
  if (piVar7[0x4c] != 0) {
    (*DAT_004be4fc)();
    piVar7[0x4c] = 0;
  }
  if (piVar7[0x4d] != 0) {
    (*DAT_004be4fc)();
    piVar7[0x4d] = 0;
  }
  if (piVar7[0x11d] != 0) {
    (*DAT_004be4fc)();
    piVar7[0x11d] = 0;
  }
  FUN_0042a8a0(piVar7[0x92],0);
  FUN_0042a8a0(piVar7[0x93],0);
  piVar7[0x92] = 0;
  piVar7[0x93] = 0;
  if (piVar7[0x94] != 0) {
    (*DAT_004be4fc)();
    piVar7[0x94] = 0;
  }
  (*DAT_004be4fc)(piVar7);
  *param_2 = (int)piVar25;
  FUN_0040365c(param_1,piVar25 + 0x24);
  if (piVar25[0x2a] == 0) {
    iVar16 = piVar25[0x27];
  }
  else {
    iVar16 = piVar25[0x2b];
  }
  FUN_004104e0(param_1,"Re-using existing connection! (#%ld) with host %s\n",piVar25[0x11],iVar16);
  iVar16 = *piVar25;
  piVar7 = piVar25;
LAB_004269c4:
  *(undefined1 *)(piVar7 + 0x10) = 1;
  *(undefined1 *)(piVar7 + 0x7b) = 0;
  *(undefined1 *)(piVar7 + 0x78) = 0;
  *(undefined1 *)(iVar16 + 0x8610) = 0;
  if (*(char *)(iVar16 + 0x2bf) == '\0') {
    uVar15 = 1;
    if (*(int *)(iVar16 + 0x240) == 5) goto LAB_00426a04;
  }
  else {
    uVar15 = 5;
LAB_00426a04:
    *(undefined4 *)(iVar16 + 0x240) = uVar15;
  }
  FUN_0041a540(&local_60);
  *(int *)(iVar16 + 0x88) = local_60;
  *(int *)(iVar16 + 0x8c) = local_5c;
  *(undefined4 *)(iVar16 + 0x74) = 0;
  *(undefined4 *)(iVar16 + 0x90) = *(undefined4 *)(iVar16 + 0x88);
  *(undefined1 *)(iVar16 + 0xf9) = 0;
  *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(iVar16 + 0x8c);
  *(undefined1 *)(iVar16 + 0x98) = 1;
  *(undefined4 *)(iVar16 + 0x70) = 0;
  *(int *)(iVar16 + 0xe8) = iVar16 + 0x534;
  *(int *)(iVar16 + 0xec) = iVar16 + 0x4535;
  *(undefined4 *)(iVar16 + 0xa4) = *(undefined4 *)(iVar16 + 0x52c);
  FUN_00427350(iVar16);
  FUN_0041b7f8(iVar16);
  FUN_0041b7ec(iVar16);
  *(int *)(param_1 + 0x8630) = *(int *)(param_1 + 0x200);
  *(int *)(param_1 + 0x8634) = *(int *)(param_1 + 0x204);
  if ((*(int *)(param_1 + 0x200) == 0 && *(int *)(param_1 + 0x204) == 0) &&
     (*(int *)(param_1 + 0x33c) == 0)) {
    *(undefined1 *)(param_1 + 0x8629) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x862a) != '\0') {
      (*DAT_004be4fc)(*(undefined4 *)(param_1 + 0x862c));
    }
    if (*(int *)(param_1 + 0x8630) == 0 && *(int *)(param_1 + 0x8634) == 0) {
      uVar15 = (*DAT_004be4f4)(*(undefined4 *)(param_1 + 0x33c));
    }
    else {
      uVar15 = FUN_00412114(&DAT_0049ed60);
    }
    *(undefined4 *)(param_1 + 0x862c) = uVar15;
    *(bool *)(param_1 + 0x862a) = *(int *)(param_1 + 0x862c) != 0;
    if (*(int *)(param_1 + 0x862c) == 0) goto LAB_00425f24;
    *(undefined1 *)(param_1 + 0x8629) = 1;
  }
  piVar7[0x99] = *(int *)(param_1 + 0x17c);
  piVar7[0x9a] = *(int *)(param_1 + 300);
  piVar7[0x97] = *(int *)(param_1 + 0x158);
  piVar7[0x98] = *(int *)(param_1 + 0x1b0);
  uVar15 = FUN_00412f94(param_1,0,1);
  if (*(char *)((int)piVar7 + 0x1d9) == '\0') {
    FUN_0040365c(param_1,piVar7 + 0x24);
    if (((char *)piVar7[0x2a] == (char *)0x0) || (*(char *)piVar7[0x2a] == '\0')) {
      piVar7[0x2c] = piVar7[0x2d];
      iVar16 = FUN_0041ac94(piVar7,piVar7[0x26],piVar7[0x2d],&local_98,uVar15);
      if (iVar16 == 1) goto LAB_00426d24;
      if (iVar16 == -2) goto LAB_00426d3c;
      if (local_98 == (undefined1 *)0x0) {
        iVar17 = 6;
        FUN_00410550(param_1,"Couldn\'t resolve host \'%s\'",piVar7[0x27]);
      }
    }
    else {
      FUN_0040365c(param_1,piVar7 + 0x28);
      iVar16 = FUN_0041ac94(piVar7,piVar7[0x2a],piVar7[0x2c],&local_98,uVar15);
      if (iVar16 == 1) {
LAB_00426d24:
        *param_3 = '\x01';
      }
      else if (iVar16 == -2) {
LAB_00426d3c:
        iVar17 = 0x1c;
      }
      else if (local_98 == (undefined1 *)0x0) {
        iVar17 = 5;
        FUN_00410550(param_1,"Couldn\'t resolve proxy \'%s\'",piVar7[0x2b]);
      }
    }
    piVar7[0x12] = (int)local_98;
    iVar16 = iVar17;
  }
  else {
    *param_3 = '\0';
    iVar16 = iVar17;
  }
LAB_00425f2c:
  (*DAT_004be4fc)(pcVar10);
LAB_00425f48:
  if (local_6c != (char *)0x0) {
    (*DAT_004be4fc)();
    local_6c = (char *)0x0;
  }
  if (local_68[0] != 0) {
    (*DAT_004be4fc)();
  }
  if (iVar16 == 0) {
    iVar16 = *param_2;
    if ((*(int *)(*(int *)(iVar16 + 0x248) + 0xc) != 0) ||
       (*(int *)(*(int *)(iVar16 + 0x24c) + 0xc) != 0)) {
      *param_4 = 1;
      return 0;
    }
    if (*param_3 != '\0') {
      return 0;
    }
    iVar16 = FUN_00424ef8(iVar16,param_4);
    if (iVar16 != 0x59) {
      if (iVar16 == 0) {
        return 0;
      }
LAB_00425fe8:
      if (*param_2 == 0) {
        return iVar16;
      }
      FUN_00424784(*param_2,0);
      *param_2 = 0;
      return iVar16;
    }
    *param_2 = 0;
  }
  else {
    if (iVar16 != 0x59) goto LAB_00425fe8;
    *param_2 = 0;
  }
  return 0x59;
}



// ==== d41d8cd98f00b204e9800998ecf8427e @ 0042b7dc size=1480

int d41d8cd98f00b204e9800998ecf8427e(int *param_1,char param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  undefined1 *puVar14;
  undefined1 auStack_e0 [36];
  undefined1 auStack_bc [36];
  undefined1 auStack_98 [36];
  undefined1 auStack_74 [36];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  code *local_30;
  
  local_3c = 0;
  local_40 = 0;
  iVar11 = *param_1;
  if (param_2 == '\0') {
    piVar9 = param_1 + 0x89;
    pcVar10 = (char *)param_1[0x48];
    piVar8 = (int *)(iVar11 + 0x8570);
    puVar14 = (undefined1 *)param_1[0x49];
    iVar12 = 0x85b8;
  }
  else {
    piVar9 = param_1 + 0x86;
    piVar8 = (int *)(iVar11 + 0x8594);
    iVar12 = 0x85c8;
    pcVar10 = (char *)param_1[0x4c];
    puVar14 = (undefined1 *)param_1[0x4d];
  }
  iVar12 = iVar11 + iVar12;
  if (*piVar9 != 0) {
    (*DAT_004be4fc)();
    *piVar9 = 0;
  }
  if (pcVar10 == (char *)0x0) {
    pcVar10 = "";
  }
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = &DAT_0049bcf4;
  }
  if (*piVar8 == 0) {
    *(undefined1 *)(iVar12 + 0xc) = 0;
LAB_0042bd70:
    iVar11 = 0;
  }
  else {
    *(undefined1 *)(iVar12 + 0xc) = 1;
    if (piVar8[8] == 0) {
      piVar8[8] = 1;
    }
    if (piVar8[1] == 0) {
      local_34 = FUN_00418f58(iVar11);
      local_38 = FUN_00418f58(iVar11);
      local_30 = (code *)FUN_00418f58(iVar11);
      uVar3 = FUN_00418f58(iVar11);
      FUN_00410eb0(auStack_e0,0x21,"%08x%08x%08x%08x",local_34,local_38,local_30,uVar3);
      uVar3 = strlen(auStack_e0);
      iVar11 = FUN_0042e770(iVar11,auStack_e0,uVar3,&local_3c,&local_40);
      if (iVar11 != 0) {
        return iVar11;
      }
      piVar8[1] = local_3c;
    }
    local_30 = (code *)&DAT_004a0000;
    iVar11 = FUN_00412114("%s:%s:%s",pcVar10,piVar8[2],puVar14);
    pcVar13 = local_30;
    if (iVar11 != 0) {
      FUN_0042cd5c(auStack_50,iVar11);
      local_30 = clock_gettime;
      (*DAT_004be4fc)(iVar11);
      FUN_0042b2a4(auStack_50,auStack_98);
      pcVar2 = local_30;
      if (piVar8[3] == 1) {
        local_38 = FUN_00412114(pcVar13 + -0x8a0,auStack_98,*piVar8,piVar8[1]);
        if (local_38 == 0) goto LAB_0042b980;
        FUN_0042cd5c(auStack_50,local_38);
        (**(code **)(pcVar2 + -0x1b04))(local_38);
        FUN_0042b2a4(auStack_50,auStack_98);
      }
      if (*(char *)(iVar12 + 0xe) == '\0') {
LAB_0042ba28:
        iVar12 = strlen(param_4);
      }
      else {
        iVar11 = strchr(param_4,0x3f);
        iVar12 = iVar11 - param_4;
        if (iVar11 == 0) goto LAB_0042ba28;
      }
      iVar4 = FUN_00412114("%s:%.*s",param_3,iVar12,param_4);
      iVar11 = iVar4;
      if ((piVar8[6] != 0) && (iVar5 = FUN_0042d7ac(piVar8[6],"auth-int"), iVar5 != 0)) {
        iVar11 = FUN_00412114("%s:%s",iVar4,"d41d8cd98f00b204e9800998ecf8427e");
        if (iVar4 != 0) {
          local_38 = iVar11;
          (**(code **)(pcVar2 + -0x1b04))(iVar4);
          iVar11 = local_38;
        }
      }
      if (iVar11 == 0) {
        return 0x1b;
      }
      FUN_0042cd5c(auStack_50,iVar11);
      (**(code **)(pcVar2 + -0x1b04))(iVar11);
      FUN_0042b2a4(auStack_50,auStack_bc);
      if (piVar8[6] == 0) {
        local_38 = FUN_00412114(pcVar13 + -0x8a0,auStack_98,*piVar8,auStack_bc);
      }
      else {
        local_38 = FUN_00412114("%s:%s:%08x:%s:%s:%s",auStack_98,*piVar8,piVar8[8],piVar8[1],
                                piVar8[6],auStack_bc);
      }
      if (local_38 != 0) {
        FUN_0042cd5c(auStack_50,local_38);
        (**(code **)(pcVar2 + -0x1b04))(local_38);
        FUN_0042b2a4(auStack_50,auStack_74);
        iVar11 = 1;
        for (pcVar6 = pcVar10; cVar1 = *pcVar6, cVar1 != '\0'; pcVar6 = pcVar6 + 1) {
          if ((cVar1 == '\"') || (cVar1 == '\\')) {
            iVar11 = iVar11 + 2;
          }
          else {
            iVar11 = iVar11 + 1;
          }
        }
        pcVar7 = (char *)(*DAT_004be500)(iVar11);
        pcVar6 = pcVar7;
        if (pcVar7 != (char *)0x0) {
          for (; cVar1 = *pcVar10, cVar1 != '\0'; pcVar10 = pcVar10 + 1) {
            if ((cVar1 == '\"') || (cVar1 == '\\')) {
              *pcVar6 = '\\';
              pcVar6 = pcVar6 + 1;
            }
            *pcVar6 = *pcVar10;
            pcVar6 = pcVar6 + 1;
          }
          *pcVar6 = '\0';
          if (piVar8[6] == 0) {
            if (param_2 == '\0') {
              pcVar10 = "";
            }
            else {
              pcVar10 = "Proxy-";
            }
            iVar11 = FUN_00412114("%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%.*s\", response=\"%s\""
                                  ,pcVar10,pcVar7,piVar8[2],*piVar8,iVar12,param_4,auStack_74);
            *piVar9 = iVar11;
LAB_0042bcb4:
            pcVar13 = *(code **)(pcVar2 + -0x1b04);
          }
          else {
            if (param_2 == '\0') {
              pcVar10 = "";
            }
            else {
              pcVar10 = "Proxy-";
            }
            iVar11 = FUN_00412114("%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%.*s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                  ,pcVar10,pcVar7,piVar8[2],*piVar8,iVar12,param_4,piVar8[1],
                                  piVar8[8],piVar8[6],auStack_74);
            *piVar9 = iVar11;
            iVar11 = FUN_0042d7ac(piVar8[6],&DAT_0049f714);
            pcVar13 = *(code **)(pcVar2 + -0x1b04);
            if (iVar11 != 0) {
              piVar8[8] = piVar8[8] + 1;
              goto LAB_0042bcb4;
            }
          }
          (*pcVar13)(pcVar7);
          if (*piVar9 == 0) {
            return 0x1b;
          }
          if (piVar8[5] != 0) {
            iVar11 = FUN_00412114("%s, opaque=\"%s\"");
            if (iVar11 == 0) goto LAB_0042b980;
            (*DAT_004be4fc)(*piVar9);
            *piVar9 = iVar11;
          }
          if (piVar8[7] != 0) {
            iVar11 = FUN_00412114("%s, algorithm=\"%s\"",*piVar9);
            if (iVar11 == 0) goto LAB_0042b980;
            (**(code **)(pcVar2 + -0x1b04))(*piVar9);
            *piVar9 = iVar11;
          }
          iVar12 = *piVar9;
          iVar11 = strlen(iVar12);
          iVar12 = (*DAT_004be4f8)(iVar12,iVar11 + 3);
          if (iVar12 != 0) {
            strcpy(iVar12 + iVar11,&DAT_0049bd24);
            *piVar9 = iVar12;
            goto LAB_0042bd70;
          }
        }
      }
    }
LAB_0042b980:
    iVar11 = 0x1b;
  }
  return iVar11;
}



// ==== InitRng @ 0042f794 size=508

int InitRng(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_40;
  undefined1 auStack_3c [52];
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(0x108);
    *(undefined4 *)(param_1 + 4) = uVar1;
    if (*(int *)(param_1 + 4) == 0) {
      local_40 = -0x7d;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_004be638)(param_1,auStack_3c,0x30);
      if ((iVar2 == 0) &&
         (iVar2 = (*(code *)(PTR_LAB_004be624 + -0xa1c))
                            (*(undefined4 *)(param_1 + 4),auStack_3c,0x30,0,0), iVar2 == 0)) {
        local_40 = (*(code *)(PTR_LAB_004be624 + -0xc98))(*(undefined4 *)(param_1 + 4),0,0);
      }
      else {
        local_40 = 2;
      }
    }
    (*(code *)PTR_memset_004beb98)(auStack_3c,0,0x30);
    if (local_40 == 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      local_40 = 0;
    }
    else if (local_40 == 4) {
      *(undefined1 *)(param_1 + 8) = 3;
      local_40 = -0xd1;
    }
    else if (local_40 == 2) {
      *(undefined1 *)(param_1 + 8) = 2;
      local_40 = -199;
    }
    else {
      *(undefined1 *)(param_1 + 8) = 2;
    }
    return local_40;
  }
  return -0xad;
}



// ==== RNG_GenerateBlock @ 0042f990 size=600

undefined4 RNG_GenerateBlock(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int local_30;
  undefined1 auStack_2c [36];
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x10000 < param_3)) {
    local_30 = 0xffffff53;
  }
  else if (*(char *)(param_1 + 8) == '\x01') {
    local_30 = (*(code *)(PTR_LAB_004be624 + -0xc98))(*(undefined4 *)(param_1 + 4),param_2,param_3);
    if (local_30 == 3) {
      iVar1 = (*(code *)PTR_FUN_004be638)(param_1,auStack_2c,0x20);
      if ((iVar1 == 0) &&
         (iVar1 = (*(code *)(PTR_LAB_004be624 + -0x1340))
                            (*(undefined4 *)(param_1 + 4),auStack_2c,0x20), iVar1 == 0)) {
        local_30 = (*(code *)(PTR_LAB_004be624 + -0xc98))(*(undefined4 *)(param_1 + 4),0,0);
        if (local_30 == 0) {
          local_30 = (*(code *)(PTR_LAB_004be624 + -0xc98))
                               (*(undefined4 *)(param_1 + 4),param_2,param_3);
        }
      }
      else {
        local_30 = 2;
      }
      (*(code *)PTR_memset_004beb98)(auStack_2c,0,0x20);
    }
    if (local_30 == 0) {
      local_30 = 0;
    }
    else if (local_30 == 4) {
      local_30 = 0xffffff2f;
      *(undefined1 *)(param_1 + 8) = 3;
    }
    else {
      local_30 = 0xffffff39;
      *(undefined1 *)(param_1 + 8) = 2;
    }
  }
  else {
    local_30 = 0xffffff39;
  }
  return local_30;
}



// ==== FreeRng @ 0042fc50 size=220

undefined4 FreeRng(int param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0xffffff53;
  if (param_1 != 0) {
    iVar1 = (*(code *)(PTR_LAB_004be624 + -0x8d0))(*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = 0xffffff39;
    }
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return local_10;
}



// ==== InitSha256 @ 00430348 size=196

undefined4 InitSha256(undefined4 *param_1)

{
  param_1[3] = 0x6a09e667;
  param_1[4] = 0xbb67ae85;
  param_1[5] = 0x3c6ef372;
  param_1[6] = 0xa54ff53a;
  param_1[7] = 0x510e527f;
  param_1[8] = 0x9b05688c;
  param_1[9] = 0x1f83d9ab;
  param_1[10] = 0x5be0cd19;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



// ==== Sha256Update @ 00431564 size=432

int Sha256Update(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while( true ) {
    do {
      if (local_res8 == 0) {
        return 0;
      }
      iVar1 = (*(code *)(PTR_LAB_004be624 + 0x308))(local_res8,0x40 - *param_1);
      (*(code *)PTR_memcpy_004bebdc)((int)param_1 + *param_1 + 0x2c,local_res4,iVar1);
      *param_1 = *param_1 + iVar1;
      local_res4 = local_res4 + iVar1;
      local_res8 = local_res8 - iVar1;
    } while (*param_1 != 0x40);
    (*(code *)(PTR_LAB_004be624 + 0x23c))(param_1 + 0xb,param_1 + 0xb,0x40);
    iVar1 = (*(code *)(PTR_LAB_004be624 + 0x40c))(param_1);
    if (iVar1 != 0) break;
    (*(code *)(PTR_LAB_004be624 + 0x14ec))(param_1,0x40);
    *param_1 = 0;
  }
  return iVar1;
}



// ==== Sha256Final @ 00431714 size=812

int Sha256Final(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  (*(code *)(PTR_LAB_004be624 + 0x14ec))(param_1,*param_1);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  *(undefined1 *)((int)param_1 + uVar2 + 0x2c) = 0x80;
  if (0x38 < *param_1) {
    (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0x2c,0,0x40 - *param_1);
    *param_1 = 0x40;
    (*(code *)(PTR_LAB_004be624 + 0x23c))(param_1 + 0xb,param_1 + 0xb,0x40);
    iVar1 = (*(code *)(PTR_LAB_004be624 + 0x40c))(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0;
  }
  (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0x2c,0,0x38 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)(PTR_LAB_004be624 + 0x23c))(param_1 + 0xb,param_1 + 0xb,0x40);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x19,param_1 + 2,4);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x1a,param_1 + 1,4);
  iVar1 = (*(code *)(PTR_LAB_004be624 + 0x40c))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_004be624 + 0x23c))(param_1 + 3,param_1 + 3,0x20);
    (*(code *)PTR_memcpy_004bebdc)(param_2,param_1 + 3,0x20);
    iVar1 = (*(code *)PTR_InitSha256_004be628)(param_1);
  }
  return iVar1;
}



// ==== Sha256Hash @ 00431a40 size=324

int Sha256Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_78;
  undefined1 auStack_74 [108];
  
  local_78 = (*(code *)PTR_InitSha256_004be628)(auStack_74);
  if (local_78 == 0) {
    local_78 = (*(code *)PTR_Sha256Update_004be62c)(auStack_74,param_1,param_2);
    if (local_78 == 0) {
      local_78 = (*(code *)PTR_Sha256Final_004be630)(auStack_74,param_3);
      if (local_78 != 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x88);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x74);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x60);
  }
  return local_78;
}



// ==== AddCA @ 00434d58 size=1400

int AddCA(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_410;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3e0;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  char local_10d;
  char local_10c;
  ushort local_10a;
  
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x444);
  (*(code *)PTR_InitDecodedCert_004be6e4)
            (&local_3fc,param_3,param_2,*(undefined4 *)(param_1 + 0x48));
  local_410 = (*(code *)PTR_ParseCert_004be6e8)(&local_3fc,4,param_5,param_1);
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x450);
  if (((local_410 == 0) && (local_10d == '\0')) && (param_4 != 1)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x464);
    local_410 = -0x165;
  }
  else if (((local_410 == 0) && (local_10d == '\x01')) && ((param_4 != 1 && ((local_10a & 8) == 0)))
          ) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x48c);
    local_410 = -0x165;
  }
  else if ((local_410 == 0) && (iVar1 = (*(code *)PTR_FUN_004be6ec)(param_1,&local_138), iVar1 != 0)
          ) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x4bc);
  }
  else if (local_410 == 0) {
    puVar2 = (undefined4 *)(*(code *)PTR_MakeSigner_004be6f0)(*(undefined4 *)(param_1 + 0x48));
    if (puVar2 == (undefined4 *)0x0) {
      local_410 = -0x12f;
    }
    else {
      puVar2[1] = local_3e0;
      puVar2[3] = local_3fc;
      *puVar2 = local_3f8;
      puVar2[4] = local_398;
      puVar2[5] = local_39c;
      puVar2[6] = local_3d0;
      puVar2[7] = local_3cc;
      puVar2[0xd] = local_138;
      puVar2[0xe] = local_134;
      puVar2[0xf] = local_130;
      puVar2[0x10] = local_12c;
      puVar2[0x11] = local_128;
      puVar2[8] = local_3c8;
      puVar2[9] = local_3c4;
      puVar2[10] = local_3c0;
      puVar2[0xb] = local_3bc;
      puVar2[0xc] = local_3b8;
      if (local_10c == '\0') {
        local_10a = 0xffff;
      }
      *(ushort *)(puVar2 + 2) = local_10a;
      puVar2[0x12] = 0;
      local_3fc = 0;
      local_39c = 0;
      local_3d0 = 0;
      local_3cc = 0;
      iVar1 = (*(code *)(PTR_LAB_004be624 + 0x48b8))(puVar2 + 0xd);
      iVar3 = (*(code *)PTR_LockMutex_004be6b4)(param_1 + 0x2c);
      if (iVar3 == 0) {
        puVar2[0x12] = *(undefined4 *)(param_1 + iVar1 * 4);
        *(undefined4 **)(param_1 + iVar1 * 4) = puVar2;
        (*(code *)PTR_UnLockMutex_004be6b8)(param_1 + 0x2c);
        if (*(int *)(param_1 + 0x44) != 0) {
          (**(code **)(param_1 + 0x44))(param_3,param_2,param_4);
        }
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x4e8);
        local_410 = -0x6a;
        (*(code *)PTR_FreeSigner_004be6f4)(puVar2,*(undefined4 *)(param_1 + 0x48));
      }
    }
  }
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x504);
  (*(code *)PTR_FreeDecodedCert_004be6f8)(&local_3fc);
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x51c);
  if (param_3 != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(param_3);
  }
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x530);
  (*(code *)PTR_FUN_004be660)(PTR_DAT_004be644 + 0x54c,local_410);
  if (local_410 == 0) {
    local_410 = 1;
  }
  return local_410;
}



// ==== CyaSSLv3_client_method @ 00438df8 size=188

int CyaSSLv3_client_method(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(4);
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0xdf8);
  if (iVar1 != 0) {
    (*(code *)PTR_MakeSSLv3_004be6d0)(&local_c);
    (*(code *)PTR_InitSSL_Method_004be764)(iVar1,local_c);
  }
  return iVar1;
}



// ==== SSLv3_server_method @ 004396b0 size=196

int SSLv3_server_method(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(4);
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1060);
  if (iVar1 != 0) {
    (*(code *)PTR_MakeSSLv3_004be6d0)(&local_c);
    (*(code *)PTR_InitSSL_Method_004be764)(iVar1,local_c);
    *(undefined1 *)(iVar1 + 2) = 0;
  }
  return iVar1;
}



// ==== GetSessionClient @ 0043a368 size=1068

undefined * GetSessionClient(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *local_28;
  int local_24;
  int local_20;
  int local_14;
  uint local_10;
  
  local_28 = (undefined *)0x0;
  local_14 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x12dc);
  if (*(char *)(param_1 + 0x4cc) == '\0') {
    local_28 = (undefined *)0x0;
  }
  else {
    uVar1 = (*(code *)(PTR_LAB_004be624 + 0x21f0))(0x14,param_3);
    uVar2 = (*(code *)(PTR_LAB_004be7a0 + -0x5e1c))(param_2,uVar1,&local_14);
    uVar2 = uVar2 % 0xb;
    if (local_14 == 0) {
      iVar3 = (*(code *)PTR_LockMutex_004be6b4)(PTR_clock_gettime_004be64c + -0x3f8);
      if (iVar3 == 0) {
        local_20 = (*(code *)(PTR_LAB_004be624 + 0x21f0))
                             (*(undefined4 *)(PTR_clock_gettime_004be64c + uVar2 * 0x14 + -0x3dc),3)
        ;
        local_24 = *(int *)(PTR_clock_gettime_004be64c + uVar2 * 0x14 + -0x3e0) + -1;
        if (local_24 < 0) {
          local_24 = 2;
        }
        while (0 < local_20) {
          if ((2 < local_24) || (local_24 < 0)) {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1320);
            break;
          }
          local_10 = *(uint *)(PTR_clock_gettime_004be64c + (uVar2 * 5 + local_24 + 2) * 4 + -0x3e0)
          ;
          puVar5 = PTR_clock_gettime_004be64c +
                   (local_10 >> 0x10) * 0x74 + (local_10 & 0xffff) * 0x164 + -0x133c;
          iVar3 = (*(code *)PTR_memcmp_004bebac)(puVar5 + 0x5c,param_2,uVar1);
          if (iVar3 == 0) {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1328);
            uVar4 = (*(code *)PTR_LowResTimer_004be7a4)();
            if (uVar4 < (uint)(*(int *)(puVar5 + 0x54) + *(int *)(puVar5 + 0x58))) {
              (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x134c);
              local_28 = puVar5;
              break;
            }
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x135c);
          }
          else {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1370);
          }
          local_20 = local_20 + -1;
          if (local_24 == 0) {
            local_24 = 2;
          }
          else {
            local_24 = local_24 + -1;
          }
        }
        (*(code *)PTR_UnLockMutex_004be6b8)(PTR_clock_gettime_004be64c + -0x3f8);
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x1304);
        local_28 = (undefined *)0x0;
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x12f0);
      local_28 = (undefined *)0x0;
    }
  }
  return local_28;
}



// ==== RSA_generate_key @ 0043c620 size=108

undefined4 RSA_generate_key(void)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1618);
  return 0;
}



// ==== X509_get_issuer_name @ 00441130 size=100

int X509_get_issuer_name(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1cd8);
  return param_1 + 4;
}



// ==== X509_get_subject_name @ 00441194 size=100

int X509_get_subject_name(int param_1)

{
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x1cf0);
  return param_1 + 0x16c;
}



// ==== RAND_bytes @ 00444e84 size=348

undefined4 RAND_bytes(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  undefined *local_18;
  undefined1 auStack_14 [12];
  
  local_20 = 0;
  bVar1 = false;
  local_18 = (undefined *)0x0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x281c);
  iVar2 = (*(code *)PTR_InitRng_004be8a8)(auStack_14);
  if (iVar2 == 0) {
    local_18 = auStack_14;
    bVar1 = true;
  }
  else if (*(int *)(PTR_clock_gettime_004be64c + -0x2f8) != 0) {
    local_18 = PTR_clock_gettime_004be64c + -0x304;
  }
  if (local_18 != (undefined *)0x0) {
    iVar2 = (*(code *)PTR_RNG_GenerateBlock_004be63c)(local_18,param_1,param_2);
    if (iVar2 == 0) {
      local_20 = 1;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x2828);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FreeRng_004be8ac)(auStack_14);
  }
  return local_20;
}



// ==== InitCyaSSL_BigNum @ 004450f0 size=116

void InitCyaSSL_BigNum(undefined4 *param_1)

{
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x287c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// ==== CyaSSLv23_client_method @ 0044a458 size=172

int CyaSSLv23_client_method(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(4);
  if (iVar1 != 0) {
    (*(code *)PTR_MakeTLSv1_2_004be6dc)(&local_c);
    (*(code *)PTR_InitSSL_Method_004be764)(iVar1,local_c);
    *(undefined1 *)(iVar1 + 3) = 1;
  }
  return iVar1;
}



// ==== HmacSetKey @ 0044a980 size=1340

int HmacSetKey(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_004be908 + -0x5850))(param_1,param_2);
  if (iVar1 == 0) {
    if (*(byte *)(param_1 + 0x210) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0044aa28 */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                          (uint)*(byte *)(param_1 + 0x210) * 4 + 0x3318)))();
      return iVar1;
    }
    iVar1 = -0xad;
  }
  return iVar1;
}



// ==== HmacUpdate @ 0044b0a0 size=508

int HmacUpdate(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x211) != '\0') ||
     (iVar1 = (*(code *)(PTR_LAB_004be908 + -0x5144))(param_1), iVar1 == 0)) {
    if (*(byte *)(param_1 + 0x210) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0044b134 */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                          (uint)*(byte *)(param_1 + 0x210) * 4 + 0x3348)))();
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



// ==== HmacFinal @ 0044b29c size=1384

int HmacFinal(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x211) != '\0') ||
     (iVar1 = (*(code *)(PTR_LAB_004be908 + -0x5144))(param_1), iVar1 == 0)) {
    if (*(byte *)(param_1 + 0x210) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0044b32c */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                          (uint)*(byte *)(param_1 + 0x210) * 4 + 0x3360)))();
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0x211) = 0;
    iVar1 = 0;
  }
  return iVar1;
}



// ==== InitRsaKey @ 0044b830 size=168

undefined4 InitRsaKey(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x6c);
  return 0;
}



// ==== FreeRsaKey @ 0044b8d8 size=340

undefined4 FreeRsaKey(int param_1)

{
  if (*(int *)(param_1 + 0x80) == 1) {
    (*(code *)PTR_mp_clear_004be8b8)(param_1 + 0x70);
    (*(code *)PTR_mp_clear_004be8b8)(param_1 + 0x60);
    (*(code *)PTR_mp_clear_004be8b8)(param_1 + 0x50);
    (*(code *)PTR_mp_clear_004be8b8)(param_1 + 0x40);
    (*(code *)PTR_mp_clear_004be8b8)(param_1 + 0x30);
    (*(code *)PTR_mp_clear_004be8b8)(param_1 + 0x20);
  }
  (*(code *)PTR_mp_clear_004be8b8)(param_1 + 0x10);
  (*(code *)PTR_mp_clear_004be8b8)(param_1);
  return 0;
}



// ==== RsaPublicEncrypt @ 0044c3a0 size=360

int RsaPublicEncrypt(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_resc;
  
  local_resc = param_4;
  iVar1 = (*(code *)PTR_mp_unsigned_bin_size_004be8cc)(param_5);
  if (local_resc < iVar1) {
    iVar2 = -0x83;
  }
  else if (iVar1 - 0xbU < param_2) {
    iVar2 = -0x83;
  }
  else {
    iVar2 = (*(code *)(PTR_LAB_004be908 + -0x45d4))(param_1,param_2,param_3,iVar1,2,param_6);
    if ((iVar2 == 0) &&
       (iVar3 = (*(code *)(PTR_LAB_004be908 + -0x4194))(param_3,iVar1,param_3,&local_resc,0,param_5)
       , iVar2 = iVar1, iVar3 < 0)) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}



// ==== RsaPrivateDecryptInline @ 0044c508 size=216

int RsaPrivateDecryptInline
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  iVar1 = (*(code *)(PTR_LAB_004be908 + -0x4194))(param_1,param_2,param_1,&local_res4,3,param_4);
  if (-1 < iVar1) {
    iVar1 = (*(code *)(PTR_LAB_004be908 + -0x43e4))(param_1,local_res4,local_res8,2);
  }
  return iVar1;
}



// ==== RsaSSL_VerifyInline @ 0044c790 size=216

int RsaSSL_VerifyInline(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  iVar1 = (*(code *)(PTR_LAB_004be908 + -0x4194))(param_1,param_2,param_1,&local_res4,1,param_4);
  if (-1 < iVar1) {
    iVar1 = (*(code *)(PTR_LAB_004be908 + -0x43e4))(param_1,local_res4,local_res8,1);
  }
  return iVar1;
}



// ==== RsaSSL_Sign @ 0044ca18 size=364

int RsaSSL_Sign(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_resc;
  
  local_resc = param_4;
  iVar1 = (*(code *)PTR_mp_unsigned_bin_size_004be8cc)(param_5);
  if (local_resc < iVar1) {
    iVar2 = -0x83;
  }
  else if (iVar1 - 0xbU < param_2) {
    iVar2 = -0x83;
  }
  else {
    iVar2 = (*(code *)(PTR_LAB_004be908 + -0x45d4))(param_1,param_2,param_3,iVar1,1,param_6);
    if ((iVar2 == 0) &&
       (iVar3 = (*(code *)(PTR_LAB_004be908 + -0x4194))(param_3,iVar1,param_3,&local_resc,2,param_5)
       , iVar2 = iVar1, iVar3 < 0)) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}



// ==== RsaEncryptSize @ 0044cb84 size=96

undefined4 RsaEncryptSize(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_mp_unsigned_bin_size_004be8cc)(param_1);
  return uVar1;
}



// ==== MakeRsaKey @ 0044d0bc size=1972

int MakeRsaKey(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int local_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  if ((param_1 == 0) || (param_4 == 0)) {
    local_60 = -0xad;
  }
  else if ((param_2 < 0x200) || (0x1000 < param_2)) {
    local_60 = -0xad;
  }
  else if (((int)param_3 < 3) || ((param_3 & 1) == 0)) {
    local_60 = -0xad;
  }
  else {
    local_60 = (*(code *)PTR_mp_init_multi_004be948)
                         (auStack_5c,auStack_4c,auStack_3c,auStack_2c,auStack_1c,0);
    if (local_60 == 0) {
      local_60 = (*(code *)PTR_mp_set_int_004be8c8)(auStack_1c,param_3);
      if (local_60 == 0) {
        do {
          iVar1 = param_2;
          if (param_2 < 0) {
            iVar1 = param_2 + 0xf;
          }
          local_60 = (*(code *)(PTR_LAB_004be908 + -0x3264))
                               (auStack_5c,iVar1 >> 4,param_4,*(undefined4 *)(param_1 + 0x84));
          if (local_60 == 0) {
            local_60 = (*(code *)PTR_mp_sub_d_004be8fc)(auStack_5c,1,auStack_3c);
          }
          if (local_60 == 0) {
            local_60 = (*(code *)PTR_mp_gcd_004be94c)(auStack_3c,auStack_1c,auStack_2c);
          }
        } while ((local_60 == 0) &&
                (iVar1 = (*(code *)PTR_mp_cmp_d_004be8d4)(auStack_2c,1), iVar1 != 0));
      }
      if (local_60 == 0) {
        do {
          iVar1 = param_2;
          if (param_2 < 0) {
            iVar1 = param_2 + 0xf;
          }
          local_60 = (*(code *)(PTR_LAB_004be908 + -0x3264))
                               (auStack_4c,iVar1 >> 4,param_4,*(undefined4 *)(param_1 + 0x84));
          if (local_60 == 0) {
            local_60 = (*(code *)PTR_mp_sub_d_004be8fc)(auStack_4c,1,auStack_3c);
          }
          if (local_60 == 0) {
            local_60 = (*(code *)PTR_mp_gcd_004be94c)(auStack_3c,auStack_1c,auStack_2c);
          }
        } while ((local_60 == 0) &&
                (iVar1 = (*(code *)PTR_mp_cmp_d_004be8d4)(auStack_2c,1), iVar1 != 0));
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_init_multi_004be948)
                             (param_1,param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,0)
        ;
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_init_multi_004be948)
                             (param_1 + 0x50,param_1 + 0x60,param_1 + 0x70,0,0,0);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_sub_d_004be8fc)(auStack_5c,1,auStack_2c);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_lcm_004be950)(auStack_3c,auStack_2c,auStack_3c);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_set_int_004be8c8)(param_1 + 0x10,param_3);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_invmod_004be954)(param_1 + 0x10,auStack_3c,param_1 + 0x20);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_mul_004be934)(auStack_5c,auStack_4c,param_1);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_sub_d_004be8fc)(auStack_5c,1,auStack_3c);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_sub_d_004be8fc)(auStack_4c,1,auStack_2c);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_mod_004be8c0)(param_1 + 0x20,auStack_3c,param_1 + 0x50);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_mod_004be8c0)(param_1 + 0x20,auStack_2c,param_1 + 0x60);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_invmod_004be954)(auStack_4c,auStack_5c,param_1 + 0x70);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_copy_004be8e8)(auStack_5c,param_1 + 0x30);
      }
      if (local_60 == 0) {
        local_60 = (*(code *)PTR_mp_copy_004be8e8)(auStack_4c,param_1 + 0x40);
      }
      if (local_60 == 0) {
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
      (*(code *)PTR_mp_clear_004be8b8)(auStack_1c);
      (*(code *)PTR_mp_clear_004be8b8)(auStack_2c);
      (*(code *)PTR_mp_clear_004be8b8)(auStack_3c);
      (*(code *)PTR_mp_clear_004be8b8)(auStack_4c);
      (*(code *)PTR_mp_clear_004be8b8)(auStack_5c);
      if (local_60 == 0) {
        local_60 = 0;
      }
      else {
        (*(code *)PTR_FreeRsaKey_004be730)(param_1);
      }
    }
  }
  return local_60;
}



// ==== AesSetKey @ 00450444 size=188

undefined4
AesSetKey(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (((param_3 == 0x10) || (param_3 == 0x18)) || (param_3 == 0x20)) {
    uVar1 = (*(code *)(PTR_LAB_004be908 + -0xab0))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = 0xffffff53;
  }
  return uVar1;
}



// ==== AesSetIV @ 00450580 size=196

undefined4 AesSetIV(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffff53;
  }
  else {
    if (param_2 == 0) {
      (*(code *)PTR_memset_004beb98)(param_1 + 0xf4,0,0x10);
    }
    else {
      (*(code *)PTR_memcpy_004bebdc)(param_1 + 0xf4,param_2,0x10);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ==== AesCbcDecryptWithKey @ 00450644 size=192

int AesCbcDecryptWithKey
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  int local_128;
  undefined1 auStack_124 [284];
  
  local_128 = (*(code *)PTR_AesSetKey_004be804)(auStack_124,param_4,param_5,param_6,1);
  if (local_128 == 0) {
    local_128 = (*(code *)PTR_AesCbcDecrypt_004be824)(auStack_124,param_1,param_2,param_3);
  }
  return local_128;
}



// ==== AesCbcEncrypt @ 004507dc size=280

undefined4 AesCbcEncrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 4;
  while (local_10 != 0) {
    (*(code *)(PTR_LAB_004be908 + -0x254c))(param_1 + 0xf4,local_res8,0x10);
    (*(code *)(PTR_LAB_004be908 + -0x2440))(param_1,param_1 + 0xf4,param_1 + 0xf4);
    (*(code *)PTR_memcpy_004bebdc)(local_res4,param_1 + 0xf4,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== AesCbcDecrypt @ 004508f4 size=320

undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4)

{
  int local_res4;
  int local_res8;
  uint local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = param_4 >> 4;
  while (local_10 != 0) {
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x104,local_res8,0x10);
    (*(code *)(PTR_LAB_004be908 + -0x1778))(param_1,param_1 + 0x104,local_res4);
    (*(code *)(PTR_LAB_004be908 + -0x254c))(local_res4,param_1 + 0xf4,0x10);
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0xf4,param_1 + 0x104,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_10 = local_10 - 1;
  }
  return 0;
}



// ==== AesCtrEncrypt @ 00450ab0 size=636

void AesCtrEncrypt(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *local_res4;
  byte *local_res8;
  uint local_resc;
  byte *local_10;
  
  local_res4 = param_2;
  local_res8 = param_3;
  local_10 = (byte *)((param_1 + 0x114) - *(int *)(param_1 + 0x114));
  for (local_resc = param_4; (*(int *)(param_1 + 0x114) != 0 && (local_resc != 0));
      local_resc = local_resc - 1) {
    *local_res4 = *local_res8 ^ *local_10;
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
    local_res4 = local_res4 + 1;
    local_res8 = local_res8 + 1;
    local_10 = local_10 + 1;
  }
  while (0xf < local_resc) {
    (*(code *)(PTR_LAB_004be908 + -0x2440))(param_1,param_1 + 0xf4,local_res4);
    (*(code *)(PTR_LAB_004be908 + 0xa34))(param_1 + 0xf4);
    (*(code *)(PTR_LAB_004be908 + -0x254c))(local_res4,local_res8,0x10);
    local_res4 = local_res4 + 0x10;
    local_res8 = local_res8 + 0x10;
    local_resc = local_resc - 0x10;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (local_resc != 0) {
    (*(code *)(PTR_LAB_004be908 + -0x2440))(param_1,param_1 + 0xf4,param_1 + 0x104);
    (*(code *)(PTR_LAB_004be908 + 0xa34))(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x114) = 0x10;
    local_10 = (byte *)(param_1 + 0x104);
    while (local_resc != 0) {
      *local_res4 = *local_res8 ^ *local_10;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + -1;
      local_res4 = local_res4 + 1;
      local_res8 = local_res8 + 1;
      local_resc = local_resc - 1;
      local_10 = local_10 + 1;
    }
  }
  return;
}



// ==== InitSha @ 00452efc size=148

undefined4 InitSha(undefined4 *param_1)

{
  param_1[0x13] = 0x67452301;
  param_1[0x14] = 0xefcdab89;
  param_1[0x15] = 0x98badcfe;
  param_1[0x16] = 0x10325476;
  param_1[0x17] = 0xc3d2e1f0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



// ==== ShaUpdate @ 00456ca0 size=404

undefined4 ShaUpdate(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while (local_res8 != 0) {
    iVar1 = (*(code *)(PTR_LAB_004be908 + 0x2ebc))(local_res8,0x40 - *param_1);
    (*(code *)PTR_memcpy_004bebdc)((int)param_1 + *param_1 + 0xc,local_res4,iVar1);
    *param_1 = *param_1 + iVar1;
    local_res4 = local_res4 + iVar1;
    local_res8 = local_res8 - iVar1;
    if (*param_1 == 0x40) {
      (*(code *)(PTR_LAB_004be908 + 0x2df0))(param_1 + 3,param_1 + 3,0x40);
      (*(code *)(PTR_LAB_004be908 + 0x2f90))(param_1);
      (*(code *)(PTR_LAB_004be908 + 0x6c28))(param_1,0x40);
      *param_1 = 0;
    }
  }
  return 0;
}



// ==== ShaFinal @ 00456e34 size=756

undefined4 ShaFinal(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  (*(code *)(PTR_LAB_004be908 + 0x6c28))(param_1,*param_1);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  *(undefined1 *)((int)param_1 + uVar2 + 0xc) = 0x80;
  if (0x38 < *param_1) {
    (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0xc,0,0x40 - *param_1);
    *param_1 = 0x40;
    (*(code *)(PTR_LAB_004be908 + 0x2df0))(param_1 + 3,param_1 + 3,0x40);
    (*(code *)(PTR_LAB_004be908 + 0x2f90))(param_1);
    *param_1 = 0;
  }
  (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0xc,0,0x38 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)(PTR_LAB_004be908 + 0x2df0))(param_1 + 3,param_1 + 3,0x40);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x11,param_1 + 2,4);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x12,param_1 + 1,4);
  (*(code *)(PTR_LAB_004be908 + 0x2f90))(param_1);
  (*(code *)(PTR_LAB_004be908 + 0x2df0))(param_1 + 0x13,param_1 + 0x13,0x14);
  (*(code *)PTR_memcpy_004bebdc)(param_2,param_1 + 0x13,0x14);
  uVar1 = (*(code *)PTR_InitSha_004be7d4)(param_1);
  return uVar1;
}



// ==== ShaHash @ 00457128 size=228

int ShaHash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_6c [100];
  
  iVar1 = (*(code *)PTR_InitSha_004be7d4)(auStack_6c);
  if (iVar1 == 0) {
    (*(code *)PTR_ShaUpdate_004be7d8)(auStack_6c,param_1,param_2);
    (*(code *)PTR_ShaFinal_004be7dc)(auStack_6c,param_3);
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x64e0);
  }
  return iVar1;
}



// ==== InitSha512 @ 004575ec size=420

undefined4 InitSha512(undefined4 *param_1)

{
  param_1[4] = 0xf3bcc908;
  param_1[5] = 0x6a09e667;
  param_1[6] = 0x84caa73b;
  param_1[7] = 0xbb67ae85;
  param_1[8] = 0xfe94f82b;
  param_1[9] = 0x3c6ef372;
  param_1[10] = 0x5f1d36f1;
  param_1[0xb] = 0xa54ff53a;
  param_1[0xc] = 0xade682d1;
  param_1[0xd] = 0x510e527f;
  param_1[0xe] = 0x2b3e6c1f;
  param_1[0xf] = 0x9b05688c;
  param_1[0x10] = 0xfb41bd6b;
  param_1[0x11] = 0x1f83d9ab;
  param_1[0x12] = 0x137e2179;
  param_1[0x13] = 0x5be0cd19;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



// ==== Sha512Update @ 0045e510 size=432

int Sha512Update(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while( true ) {
    do {
      if (local_res8 == 0) {
        return 0;
      }
      iVar1 = (*(code *)(PTR_LAB_004be908 + 0x75ac))(local_res8,0x80 - *param_1);
      (*(code *)PTR_memcpy_004bebdc)((int)param_1 + *param_1 + 0x50,local_res4,iVar1);
      *param_1 = *param_1 + iVar1;
      local_res4 = local_res4 + iVar1;
      local_res8 = local_res8 - iVar1;
    } while (*param_1 != 0x80);
    (*(code *)(PTR_LAB_004be908 + 0x74c0))(param_1 + 0x14,param_1 + 0x14,0x80);
    iVar1 = (*(code *)(PTR_LAB_004be908 + 0x7790))(param_1);
    if (iVar1 != 0) break;
    (*(code *)(PTR_LAB_004be958 + -0x1b68))(param_1,0x80);
    *param_1 = 0;
  }
  return iVar1;
}



// ==== Sha512Final @ 0045e6c0 size=804

int Sha512Final(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  (*(code *)(PTR_LAB_004be958 + -0x1b68))(param_1,*param_1);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  *(undefined1 *)((int)param_1 + uVar2 + 0x50) = 0x80;
  if (0x70 < *param_1) {
    (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0x50,0,0x80 - *param_1);
    *param_1 = 0x80;
    (*(code *)(PTR_LAB_004be908 + 0x74c0))(param_1 + 0x14,param_1 + 0x14,0x80);
    iVar1 = (*(code *)(PTR_LAB_004be908 + 0x7790))(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0;
  }
  (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0x50,0,0x70 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)(PTR_LAB_004be908 + 0x74c0))(param_1 + 0x14,param_1 + 0x14,0x70);
  param_1[0x30] = param_1[2];
  param_1[0x31] = 0;
  param_1[0x32] = param_1[1];
  param_1[0x33] = 0;
  iVar1 = (*(code *)(PTR_LAB_004be908 + 0x7790))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_004be908 + 0x74c0))(param_1 + 4,param_1 + 4,0x40);
    (*(code *)PTR_memcpy_004bebdc)(param_2,param_1 + 4,0x40);
    iVar1 = (*(code *)PTR_InitSha512_004be7f8)(param_1);
  }
  return iVar1;
}



// ==== Sha512Hash @ 0045e9e4 size=324

int Sha512Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_e0;
  undefined1 auStack_d8 [208];
  
  local_e0 = (*(code *)PTR_InitSha512_004be7f8)(auStack_d8);
  if (local_e0 == 0) {
    local_e0 = (*(code *)PTR_Sha512Update_004be7fc)(auStack_d8,param_1,param_2);
    if (local_e0 == 0) {
      local_e0 = (*(code *)PTR_Sha512Final_004be800)(auStack_d8,param_3);
      if (local_e0 != 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6798);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6784);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6770);
  }
  return local_e0;
}



// ==== InitSha384 @ 0045eb28 size=420

undefined4 InitSha384(undefined4 *param_1)

{
  param_1[4] = 0xc1059ed8;
  param_1[5] = 0xcbbb9d5d;
  param_1[6] = 0x367cd507;
  param_1[7] = 0x629a292a;
  param_1[8] = 0x3070dd17;
  param_1[9] = 0x9159015a;
  param_1[10] = 0xf70e5939;
  param_1[0xb] = 0x152fecd8;
  param_1[0xc] = 0xffc00b31;
  param_1[0xd] = 0x67332667;
  param_1[0xe] = 0x68581511;
  param_1[0xf] = 0x8eb44a87;
  param_1[0x10] = 0x64f98fa7;
  param_1[0x11] = 0xdb0c2e0d;
  param_1[0x12] = 0xbefa4fa4;
  param_1[0x13] = 0x47b5481d;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



// ==== Sha384Update @ 00465a4c size=432

int Sha384Update(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while( true ) {
    do {
      if (local_res8 == 0) {
        return 0;
      }
      iVar1 = (*(code *)(PTR_LAB_004be908 + 0x75ac))(local_res8,0x80 - *param_1);
      (*(code *)PTR_memcpy_004bebdc)((int)param_1 + *param_1 + 0x50,local_res4,iVar1);
      *param_1 = *param_1 + iVar1;
      local_res4 = local_res4 + iVar1;
      local_res8 = local_res8 - iVar1;
    } while (*param_1 != 0x80);
    (*(code *)(PTR_LAB_004be908 + 0x74c0))(param_1 + 0x14,param_1 + 0x14,0x80);
    iVar1 = (*(code *)(PTR_LAB_004be958 + -0x1334))(param_1);
    if (iVar1 != 0) break;
    (*(code *)(PTR_LAB_004be958 + 0x59d4))(param_1,0x80);
    *param_1 = 0;
  }
  return iVar1;
}



// ==== Sha384Final @ 00465bfc size=804

int Sha384Final(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  (*(code *)(PTR_LAB_004be958 + 0x59d4))(param_1,*param_1);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  *(undefined1 *)((int)param_1 + uVar2 + 0x50) = 0x80;
  if (0x70 < *param_1) {
    (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0x50,0,0x80 - *param_1);
    *param_1 = 0x80;
    (*(code *)(PTR_LAB_004be908 + 0x74c0))(param_1 + 0x14,param_1 + 0x14,0x80);
    iVar1 = (*(code *)(PTR_LAB_004be958 + -0x1334))(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0;
  }
  (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0x50,0,0x70 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)(PTR_LAB_004be908 + 0x74c0))(param_1 + 0x14,param_1 + 0x14,0x70);
  param_1[0x30] = param_1[2];
  param_1[0x31] = 0;
  param_1[0x32] = param_1[1];
  param_1[0x33] = 0;
  iVar1 = (*(code *)(PTR_LAB_004be958 + -0x1334))(param_1);
  if (iVar1 == 0) {
    (*(code *)(PTR_LAB_004be908 + 0x74c0))(param_1 + 4,param_1 + 4,0x30);
    (*(code *)PTR_memcpy_004bebdc)(param_2,param_1 + 4,0x30);
    iVar1 = (*(code *)PTR_InitSha384_004be7ec)(param_1);
  }
  return iVar1;
}



// ==== Sha384Hash @ 00465f20 size=324

int Sha384Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_e0;
  undefined1 auStack_d8 [208];
  
  local_e0 = (*(code *)PTR_InitSha384_004be7ec)(auStack_d8);
  if (local_e0 == 0) {
    local_e0 = (*(code *)PTR_Sha384Update_004be7f0)(auStack_d8,param_1,param_2);
    if (local_e0 == 0) {
      local_e0 = (*(code *)PTR_Sha384Final_004be7f4)(auStack_d8,param_3);
      if (local_e0 != 0) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x67d4);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x67c0);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x67ac);
  }
  return local_e0;
}



// ==== InitMutex @ 00466070 size=120

undefined4 InitMutex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_004beb60)(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff96;
  }
  return uVar2;
}



// ==== FreeMutex @ 004660e8 size=116

undefined4 FreeMutex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_004beb74)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff96;
  }
  return uVar2;
}



// ==== LockMutex @ 0046615c size=116

undefined4 LockMutex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_004beb6c)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff96;
  }
  return uVar2;
}



// ==== UnLockMutex @ 004661d0 size=116

undefined4 UnLockMutex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_004beb84)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff96;
  }
  return uVar2;
}



// ==== GetMyVersion @ 00466748 size=264

uint GetMyVersion(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6854);
  if (*(char *)(param_1 + iVar1) == '\x02') {
    if (*(char *)(param_1 + iVar1 + 1) == '\x01') {
      *param_3 = (uint)*(byte *)(param_1 + iVar1 + 2);
      *param_2 = iVar1 + 3;
      uVar2 = *param_3;
    }
    else {
      uVar2 = 0xffffff73;
    }
  }
  else {
    uVar2 = 0xffffff74;
  }
  return uVar2;
}



// ==== GetExplicitVersion @ 0046695c size=228

undefined4 GetExplicitVersion(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6864);
  if (*(char *)(param_1 + iVar2) == -0x60) {
    *param_2 = iVar2 + 2;
    uVar1 = (*(code *)PTR_GetMyVersion_004be960)(param_1,param_2,param_3);
  }
  else {
    *param_3 = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// ==== GetAlgoId @ 00466d38 size=516

undefined4 GetAlgoId(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  int local_10 [2];
  
  local_10[0] = *param_2;
  *param_3 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6878);
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,local_10,&local_14,param_4);
  if (iVar1 < 0) {
    uVar2 = 0xffffff74;
  }
  else if (*(char *)(param_1 + local_10[0]) == '\x06') {
    local_10[0] = local_10[0] + 1;
    iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,local_10,&local_14,param_4);
    if (iVar1 < 0) {
      uVar2 = 0xffffff74;
    }
    else {
      while (local_14 != 0) {
        *param_3 = *param_3 + (uint)*(byte *)(param_1 + local_10[0]);
        local_10[0] = local_10[0] + 1;
        local_14 = local_14 + -1;
      }
      iVar1 = local_10[0] + 1;
      if ((*(char *)(param_1 + local_10[0]) == '\x05') &&
         (local_10[0] = local_10[0] + 2, *(char *)(param_1 + iVar1) != '\0')) {
        uVar2 = 0xffffff6e;
      }
      else {
        *param_2 = local_10[0];
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0xffffff70;
  }
  return uVar2;
}



// ==== RsaPrivateKeyDecode @ 00466f3c size=672

undefined4 RsaPrivateKeyDecode(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,param_2,auStack_c,param_4);
  if (iVar1 < 0) {
    uVar2 = 0xffffff74;
  }
  else {
    iVar1 = (*(code *)PTR_GetMyVersion_004be960)(param_1,param_2,auStack_10);
    if (iVar1 < 0) {
      uVar2 = 0xffffff74;
    }
    else {
      *(undefined4 *)(param_3 + 0x80) = 1;
      iVar1 = (*(code *)PTR_FUN_004be968)(param_3,param_1,param_2,param_4);
      if (((((-1 < iVar1) &&
            (iVar1 = (*(code *)PTR_FUN_004be968)(param_3 + 0x10,param_1,param_2,param_4), -1 < iVar1
            )) && (iVar1 = (*(code *)PTR_FUN_004be968)(param_3 + 0x20,param_1,param_2,param_4),
                  -1 < iVar1)) &&
          ((iVar1 = (*(code *)PTR_FUN_004be968)(param_3 + 0x30,param_1,param_2,param_4), -1 < iVar1
           && (iVar1 = (*(code *)PTR_FUN_004be968)(param_3 + 0x40,param_1,param_2,param_4),
              -1 < iVar1)))) &&
         ((iVar1 = (*(code *)PTR_FUN_004be968)(param_3 + 0x50,param_1,param_2,param_4), -1 < iVar1
          && ((iVar1 = (*(code *)PTR_FUN_004be968)(param_3 + 0x60,param_1,param_2,param_4),
              -1 < iVar1 &&
              (iVar1 = (*(code *)PTR_FUN_004be968)(param_3 + 0x70,param_1,param_2,param_4),
              -1 < iVar1)))))) {
        return 0;
      }
      uVar2 = 0xffffff71;
    }
  }
  return uVar2;
}



// ==== ToTraditional @ 004671dc size=564

int ToTraditional(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  int local_c;
  
  local_18 = 0;
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_18,&local_c,param_2);
  if (iVar1 < 0) {
    local_c = -0x8c;
  }
  else {
    iVar1 = (*(code *)PTR_GetMyVersion_004be960)(param_1,&local_18,auStack_10);
    if (iVar1 < 0) {
      local_c = -0x8c;
    }
    else {
      iVar1 = (*(code *)PTR_GetAlgoId_004be96c)(param_1,&local_18,auStack_14,param_2);
      if (iVar1 < 0) {
        local_c = -0x8c;
      }
      else {
        if (*(char *)(param_1 + local_18) == '\x06') {
          local_18 = local_18 + 1;
          iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_18,&local_c,param_2);
          if (iVar1 < 0) {
            return -0x8c;
          }
          local_18 = local_18 + local_c;
        }
        if (*(char *)(param_1 + local_18) == '\x04') {
          local_18 = local_18 + 1;
          iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_18,&local_c,param_2);
          if (iVar1 < 0) {
            local_c = -0x8c;
          }
          else {
            (*(code *)PTR_memmove_004bebe0)(param_1,param_1 + local_18,local_c);
          }
        }
        else {
          local_c = -0x8c;
        }
      }
    }
  }
  return local_c;
}



// ==== ToTraditionalEnc @ 00467bc4 size=1532

undefined4 ToTraditionalEnc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [68];
  
  local_a8 = 0;
  local_90 = 0;
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_a8,&local_a0,param_2);
  if (iVar1 < 0) {
    uVar2 = 0xffffff74;
  }
  else {
    iVar1 = (*(code *)PTR_GetAlgoId_004be96c)(param_1,&local_a8,&local_a4,param_2);
    if (iVar1 < 0) {
      uVar2 = 0xffffff74;
    }
    else {
      iVar1 = (*(code *)(PTR_LAB_004be958 + 0x7410))
                        (*(undefined1 *)(param_1 + local_a8 + -2),
                         *(undefined1 *)(param_1 + local_a8 + -1),&local_94,&local_9c);
      if (iVar1 < 0) {
        uVar2 = 0xffffff66;
      }
      else {
        if (local_9c == 6) {
          iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_a8,&local_a0,param_2);
          if (iVar1 < 0) {
            return 0xffffff74;
          }
          iVar1 = (*(code *)PTR_GetAlgoId_004be96c)(param_1,&local_a8,&local_a4,param_2);
          if (iVar1 < 0) {
            return 0xffffff74;
          }
          if (local_a4 != 0x294) {
            return 0xffffff74;
          }
        }
        iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_a8,&local_a0,param_2);
        if (iVar1 < 0) {
          uVar2 = 0xffffff74;
        }
        else if (*(char *)(param_1 + local_a8) == '\x04') {
          local_a8 = local_a8 + 1;
          iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_a8,&local_98,param_2);
          if (iVar1 < 0) {
            uVar2 = 0xffffff74;
          }
          else if (local_98 < 0x41) {
            (*(code *)PTR_memcpy_004bebdc)(auStack_8c,param_1 + local_a8,local_98);
            local_a8 = local_a8 + local_98;
            iVar1 = (*(code *)(PTR_LAB_004be958 + 0x6850))(param_1,&local_a8,&local_90);
            if (iVar1 < 0) {
              uVar2 = 0xffffff74;
            }
            else {
              if (local_9c == 6) {
                iVar1 = (*(code *)PTR_GetAlgoId_004be96c)(param_1,&local_a8,&local_a4,param_2);
                if (iVar1 < 0) {
                  return 0xffffff74;
                }
                iVar1 = (*(code *)(PTR_LAB_004be958 + 0x757c))(local_a4,&local_94);
                if (iVar1 < 0) {
                  return 0xffffff74;
                }
                if (*(char *)(param_1 + local_a8) != '\x04') {
                  return 0xffffff74;
                }
                local_a8 = local_a8 + 1;
                iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_a8,&local_a0,param_2);
                if (iVar1 < 0) {
                  return 0xffffff74;
                }
                (*(code *)PTR_memcpy_004bebdc)(auStack_4c,param_1 + local_a8,local_a0);
                local_a8 = local_a8 + local_a0;
              }
              if (*(char *)(param_1 + local_a8) == '\x04') {
                local_a8 = local_a8 + 1;
                iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_a8,&local_a0,param_2);
                if (iVar1 < 0) {
                  uVar2 = 0xffffff74;
                }
                else {
                  iVar1 = (*(code *)(PTR_LAB_004be958 + 0x7600))
                                    (param_3,param_4,auStack_8c,local_98,local_90,local_94,
                                     param_1 + local_a8,local_a0,local_9c,auStack_4c);
                  if (iVar1 < 0) {
                    uVar2 = 0xffffff66;
                  }
                  else {
                    (*(code *)PTR_memmove_004bebe0)(param_1,param_1 + local_a8,local_a0);
                    uVar2 = (*(code *)PTR_ToTraditional_004be704)(param_1,local_a0);
                  }
                }
              }
              else {
                uVar2 = 0xffffff74;
              }
            }
          }
          else {
            uVar2 = 0xffffff74;
          }
        }
        else {
          uVar2 = 0xffffff74;
        }
      }
    }
  }
  return uVar2;
}



// ==== RsaPublicKeyDecode @ 004681c0 size=920

undefined4 RsaPublicKeyDecode(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,param_2,&local_c,param_4);
  if (iVar1 < 0) {
    return 0xffffff74;
  }
  *(undefined4 *)(param_3 + 0x80) = 0;
  if (*(char *)(param_1 + *param_2) != '\x02') {
    iVar1 = (*(code *)PTR_FUN_004be964)(param_1,param_2,&local_c,param_4);
    if (iVar1 < 0) {
      return 0xffffff74;
    }
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    if (*(char *)(param_1 + iVar1) != '\x06') {
      return 0xffffff70;
    }
    iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,param_2,&local_c,param_4);
    if (iVar1 < 0) {
      return 0xffffff74;
    }
    *param_2 = *param_2 + local_c;
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    if (*(char *)(param_1 + iVar1) == '\x05') {
      iVar1 = *param_2;
      *param_2 = iVar1 + 1;
      if (*(char *)(param_1 + iVar1) != '\0') {
        return 0xffffff6e;
      }
    }
    else {
      *param_2 = *param_2 + -1;
    }
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    if (*(char *)(param_1 + iVar1) != '\x03') {
      return 0xffffff6d;
    }
    iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,param_2,&local_c,param_4);
    if (iVar1 < 0) {
      return 0xffffff74;
    }
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
    if (*(char *)(param_1 + iVar1) != '\0') {
      *param_2 = *param_2 + -1;
    }
    iVar1 = (*(code *)PTR_FUN_004be964)(param_1,param_2,&local_c,param_4);
    if (iVar1 < 0) {
      return 0xffffff74;
    }
  }
  iVar1 = (*(code *)PTR_FUN_004be968)(param_3,param_1,param_2,param_4);
  if ((iVar1 < 0) ||
     (iVar1 = (*(code *)PTR_FUN_004be968)(param_3 + 0x10,param_1,param_2,param_4), iVar1 < 0)) {
    uVar2 = 0xffffff71;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ==== InitDecodedCert @ 00468744 size=736

void InitDecodedCert(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0xc;
  param_1[0x1b] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x9d] = param_2;
  param_1[0x9e] = 0;
  param_1[0x9f] = param_3;
  param_1[0xa0] = param_4;
  (*(code *)PTR_memset_004beb98)(param_1 + 0xa1,0,0x20);
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  (*(code *)PTR_memset_004beb98)(param_1 + 0xb1,0,0x14);
  *(undefined1 *)(param_1 + 0xb6) = 0;
  (*(code *)PTR_memset_004beb98)((int)param_1 + 0x2d9,0,0x14);
  *(undefined1 *)((int)param_1 + 0x2ed) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)((int)param_1 + 0x2f2) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined1 *)((int)param_1 + 0x2f5) = 0;
  *(undefined1 *)((int)param_1 + 0x2ef) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  (*(code *)PTR_memset_004beb98)(param_1 + 0xcf,0,0x5c);
  (*(code *)PTR_memset_004beb98)(param_1 + 0xe6,0,0x5c);
  *(undefined1 *)((int)param_1 + 0x2f6) = 0;
  *(undefined1 *)((int)param_1 + 0x2f7) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)((int)param_1 + 0x301) = 0;
  *(undefined1 *)((int)param_1 + 0x302) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)((int)param_1 + 0x305) = 0;
  *(undefined1 *)((int)param_1 + 0x306) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined1 *)((int)param_1 + 0x2ee) = 0;
  return;
}



// ==== FreeDecodedCert @ 00468bac size=564

void FreeDecodedCert(int *param_1)

{
  if ((param_1[0x1b] == 1) && (param_1[0x18] != 0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(param_1[0x18]);
  }
  if ((param_1[2] == 1) && (*param_1 != 0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*param_1);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR_FUN_004be97c)(param_1[9],param_1[0xa0]);
  }
  if (param_1[10] != 0) {
    (*(code *)PTR_FUN_004be97c)(param_1[10],param_1[0xa0]);
  }
  if (param_1[0xb] != 0) {
    (*(code *)PTR_FUN_004be980)(param_1[0xb],param_1[0xa0]);
  }
  if (param_1[0xc] != 0) {
    (*(code *)PTR_FUN_004be980)(param_1[0xc],param_1[0xa0]);
  }
  if ((param_1[0xcf] != 0) && (param_1[0xcf] != 0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(param_1[0xcf]);
  }
  if ((param_1[0xe6] != 0) && (param_1[0xe6] != 0)) {
    (*(code *)PTR_CyaSSL_Free_004be640)(param_1[0xe6]);
  }
  return;
}



// ==== DecodeToKey @ 0046b790 size=592

int DecodeToKey(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  iVar1 = (*(code *)(PTR_LAB_004be984 + -0x7220))(param_1);
  if (-1 < iVar1) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x69bc);
    iVar1 = (*(code *)PTR_GetAlgoId_004be96c)
                      (*(undefined4 *)(param_1 + 0x274),param_1 + 0x278,param_1 + 0x18,
                       *(undefined4 *)(param_1 + 0x27c));
    if (-1 < iVar1) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x69cc);
      iVar1 = (*(code *)(PTR_LAB_004be984 + -0x6c60))(param_1,0);
      if (-1 < iVar1) {
        iVar1 = (*(code *)(PTR_LAB_004be984 + -0x49ac))(param_1,param_2);
        if (iVar1 < 0) {
          local_10 = iVar1;
        }
        iVar1 = (*(code *)(PTR_LAB_004be984 + -0x6c60))(param_1,1);
        if (-1 < iVar1) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x69d8);
          iVar1 = (*(code *)(PTR_LAB_004be984 + -0x6e64))(param_1);
          if ((-1 < iVar1) &&
             ((*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x69ec), local_10 != 0)) {
            iVar1 = local_10;
          }
        }
      }
    }
  }
  return iVar1;
}



// ==== EncodeSignature @ 0046c598 size=372

int EncodeSignature(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_74 [76];
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [12];
  
  iVar1 = (*(code *)(PTR_LAB_004be984 + -0x44a8))(param_2,param_3,auStack_74);
  iVar2 = (*(code *)PTR_FUN_004be998)(param_4,auStack_28,0,0);
  iVar3 = (*(code *)PTR_FUN_004be994)(iVar1 + iVar2,auStack_14);
  (*(code *)PTR_memcpy_004bebdc)(param_1,auStack_14,iVar3);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + iVar3,auStack_28,iVar2);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + iVar3 + iVar2,auStack_74,iVar1);
  return iVar1 + iVar2 + iVar3;
}



// ==== DecodeAltNames @ 0046d5b8 size=1484

undefined4 DecodeAltNames(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10 [2];
  
  local_20 = 0;
  local_1c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6b64);
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_20,&local_1c,param_2);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6b74);
    uVar4 = 0xffffff74;
  }
  else {
    while (0 < local_1c) {
      iVar1 = local_20 + 1;
      local_1c = local_1c + -1;
      if (*(char *)(param_1 + local_20) == -0x7e) {
        local_20 = iVar1;
        iVar2 = (*(code *)PTR_FUN_004be95c)(param_1,&local_20,&local_18,param_2);
        if (iVar2 < 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6b84);
          return 0xffffff74;
        }
        local_1c = (iVar1 - local_20) + local_1c;
        puVar3 = (undefined4 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(8);
        if (puVar3 == (undefined4 *)0x0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 27000);
          return 0xffffff74;
        }
        uVar4 = (*(code *)PTR_CyaSSL_Malloc_004be634)(local_18 + 1);
        puVar3[1] = uVar4;
        if (puVar3[1] == 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 27000);
          if (puVar3 != (undefined4 *)0x0) {
            (*(code *)PTR_CyaSSL_Free_004be640)(puVar3);
          }
          return 0xffffff74;
        }
        (*(code *)PTR_memcpy_004bebdc)(puVar3[1],param_1 + local_20,local_18);
        *(undefined1 *)(puVar3[1] + local_18) = 0;
        *puVar3 = *(undefined4 *)(param_3 + 0x24);
        *(undefined4 **)(param_3 + 0x24) = puVar3;
        local_1c = local_1c - local_18;
        local_20 = local_20 + local_18;
      }
      else if (*(char *)(param_1 + local_20) == -0x7f) {
        local_20 = iVar1;
        iVar2 = (*(code *)PTR_FUN_004be95c)(param_1,&local_20,&local_14,param_2);
        if (iVar2 < 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6b84);
          return 0xffffff74;
        }
        local_1c = (iVar1 - local_20) + local_1c;
        puVar3 = (undefined4 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(8);
        if (puVar3 == (undefined4 *)0x0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 27000);
          return 0xffffff74;
        }
        uVar4 = (*(code *)PTR_CyaSSL_Malloc_004be634)(local_14 + 1);
        puVar3[1] = uVar4;
        if (puVar3[1] == 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 27000);
          if (puVar3 != (undefined4 *)0x0) {
            (*(code *)PTR_CyaSSL_Free_004be640)(puVar3);
          }
          return 0xffffff74;
        }
        (*(code *)PTR_memcpy_004bebdc)(puVar3[1],param_1 + local_20,local_14);
        *(undefined1 *)(puVar3[1] + local_14) = 0;
        *puVar3 = *(undefined4 *)(param_3 + 0x28);
        *(undefined4 **)(param_3 + 0x28) = puVar3;
        local_1c = local_1c - local_14;
        local_20 = local_20 + local_14;
      }
      else {
        local_20 = iVar1;
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6b98);
        iVar2 = (*(code *)PTR_FUN_004be95c)(param_1,&local_20,local_10,param_2);
        if (iVar2 < 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6bbc);
          return 0xffffff74;
        }
        local_1c = (iVar1 - (local_10[0] + local_20)) + local_1c;
        local_20 = local_20 + local_10[0];
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ==== DecodeBasicCaConstraint @ 0046db84 size=680

undefined4 DecodeBasicCaConstraint(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6bdc);
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_10,&local_c,param_2);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6bf4);
    uVar2 = 0xffffff74;
  }
  else if (local_c == 0) {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + local_10) == '\x01') {
    local_10 = local_10 + 1;
    iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_10,&local_c,param_2);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6c28);
      uVar2 = 0xffffff74;
    }
    else {
      if (*(char *)(param_1 + local_10) != '\0') {
        *(undefined1 *)(param_3 + 0x2ef) = 1;
      }
      if (local_10 + 1U < param_2) {
        iVar1 = local_10 + 2;
        if (*(char *)(param_1 + local_10 + 1U) == '\x02') {
          local_10 = local_10 + 3;
          if (*(char *)(param_1 + iVar1) == '\x01') {
            *(uint *)(param_3 + 0x2fc) = (uint)*(byte *)(param_1 + local_10);
            *(undefined1 *)(param_3 + 0x2f8) = 1;
            uVar2 = 0;
          }
          else {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6c54);
            uVar2 = 0xffffff74;
          }
        }
        else {
          local_10 = iVar1;
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6c38);
          uVar2 = 0xffffff74;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    local_10 = local_10 + 1;
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6c08);
    uVar2 = 0xffffff74;
  }
  return uVar2;
}



// ==== DecodeCrlDist @ 0046de2c size=1032

undefined4 DecodeCrlDist(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6c6c);
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_10,&local_c,param_2);
  if (iVar1 < 0) {
    uVar2 = 0xffffff74;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_10,&local_c,param_2);
    if (iVar1 < 0) {
      uVar2 = 0xffffff74;
    }
    else {
      if (*(char *)(param_1 + local_10) == -0x60) {
        local_10 = local_10 + 1;
        iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_10,&local_c,param_2);
        if (iVar1 < 0) {
          return 0xffffff74;
        }
        if (*(char *)(param_1 + local_10) == -0x60) {
          local_10 = local_10 + 1;
          iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_10,&local_c,param_2);
          if (iVar1 < 0) {
            return 0xffffff74;
          }
          if (*(char *)(param_1 + local_10) == -0x7a) {
            local_10 = local_10 + 1;
            iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_10,&local_c,param_2);
            if (iVar1 < 0) {
              return 0xffffff74;
            }
            *(int *)(param_3 + 0x2c0) = local_c;
            *(uint *)(param_3 + 700) = param_1 + local_10;
            local_10 = local_10 + local_c;
          }
          else {
            local_10 = local_10 + local_c;
          }
        }
        else {
          local_10 = local_10 + local_c;
        }
      }
      if ((local_10 < param_2) && (*(char *)(param_1 + local_10) == -0x5f)) {
        local_10 = local_10 + 1;
        iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_10,&local_c,param_2);
        if (iVar1 < 0) {
          return 0xffffff74;
        }
        local_10 = local_10 + local_c;
      }
      if ((local_10 < param_2) && (*(char *)(param_1 + local_10) == -0x5e)) {
        local_10 = local_10 + 1;
        iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_10,&local_c,param_2);
        if (iVar1 < 0) {
          return 0xffffff74;
        }
        local_10 = local_10 + local_c;
      }
      if (local_10 < param_2) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6c7c);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



// ==== DecodeAuthInfo @ 0046e234 size=552

undefined4 DecodeAuthInfo(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_10 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6ccc);
  iVar2 = (*(code *)PTR_FUN_004be964)(param_1,&local_14,&local_10,param_2);
  if (iVar2 < 0) {
    uVar3 = 0xffffff74;
  }
  else {
    for (; local_14 < param_2; local_14 = local_14 + local_10) {
      iVar2 = (*(code *)PTR_FUN_004be964)(param_1,&local_14,&local_10,param_2);
      if (iVar2 < 0) {
        return 0xffffff74;
      }
      local_c = 0;
      iVar2 = (*(code *)(PTR_LAB_004be958 + 0x6c04))(param_1,&local_14,&local_c,param_2);
      if (iVar2 < 0) {
        return 0xffffff74;
      }
      cVar1 = *(char *)(param_1 + local_14);
      local_14 = local_14 + 1;
      iVar2 = (*(code *)PTR_FUN_004be95c)(param_1,&local_14,&local_10,param_2);
      if (iVar2 < 0) {
        return 0xffffff74;
      }
      if ((cVar1 == -0x7a) && (local_c == 0x74)) {
        *(int *)(param_3 + 0x2b8) = local_10;
        *(uint *)(param_3 + 0x2b4) = param_1 + local_14;
        break;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ==== DecodeAuthKeyId @ 0046e45c size=656

int DecodeAuthKeyId(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_74;
  int local_70;
  undefined1 auStack_6c [100];
  
  local_74 = 0;
  local_70 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6cdc);
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_74,&local_70,param_2);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6cec);
    iVar1 = -0x8c;
  }
  else if (*(char *)(param_1 + local_74) == -0x80) {
    local_74 = local_74 + 1;
    iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_74,&local_70,param_2);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6d34);
      iVar1 = -0x8c;
    }
    else {
      *(int *)(param_3 + 0x314) = param_1 + local_74;
      *(int *)(param_3 + 0x318) = local_70;
      if (local_70 == 0x14) {
        (*(code *)PTR_memcpy_004bebdc)(param_3 + 0x2d9,param_1 + local_74,0x14);
      }
      else {
        iVar1 = (*(code *)PTR_InitSha_004be7d4)(auStack_6c);
        if (iVar1 != 0) {
          return iVar1;
        }
        (*(code *)PTR_ShaUpdate_004be7d8)(auStack_6c,param_1 + local_74,local_70);
        (*(code *)PTR_ShaFinal_004be7dc)(auStack_6c,param_3 + 0x2d9);
      }
      iVar1 = 0;
    }
  }
  else {
    local_74 = local_74 + 1;
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6d0c);
    iVar1 = 0;
  }
  return iVar1;
}



// ==== DecodeSubjKeyId @ 0046e6ec size=556

int DecodeSubjKeyId(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_78;
  int local_74;
  int local_70;
  undefined1 auStack_6c [100];
  
  local_74 = 0;
  local_70 = 0;
  local_78 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6d54);
  if (*(char *)(param_1 + local_74) == '\x04') {
    local_74 = local_74 + 1;
    iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,&local_74,&local_70,param_2);
    if (iVar1 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6d34);
      local_78 = -0x8c;
    }
    else {
      *(int *)(param_3 + 0x31c) = param_1 + local_74;
      *(int *)(param_3 + 800) = local_70;
      if (local_70 == 0x14) {
        (*(code *)PTR_memcpy_004bebdc)(param_3 + 0x2c4,param_1 + local_74,0x14);
      }
      else {
        local_78 = (*(code *)PTR_InitSha_004be7d4)(auStack_6c);
        if (local_78 == 0) {
          (*(code *)PTR_ShaUpdate_004be7d8)(auStack_6c,param_1 + local_74,local_70);
          (*(code *)PTR_ShaFinal_004be7dc)(auStack_6c,param_3 + 0x2c4);
        }
      }
    }
  }
  else {
    local_74 = local_74 + 1;
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6d64);
    local_78 = -0x8c;
  }
  return local_78;
}



// ==== DecodeKeyUsage @ 0046e918 size=508

undefined4 DecodeKeyUsage(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  int local_10 [2];
  
  local_14 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6d88);
  if (*(char *)(param_1 + local_14) == '\x03') {
    local_14 = local_14 + 1;
    iVar2 = (*(code *)PTR_FUN_004be95c)(param_1,&local_14,local_10,param_2);
    if (iVar2 < 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6dc0);
      uVar3 = 0xffffff74;
    }
    else {
      bVar1 = *(byte *)(param_1 + local_14);
      if (local_10[0] == 3) {
        *(ushort *)(param_3 + 0x2f2) =
             (ushort)(((uint)*(byte *)(param_1 + local_14 + 1) << 0x18) >> 0x10) |
             (ushort)*(byte *)(param_1 + local_14 + 2);
        *(short *)(param_3 + 0x2f2) =
             (short)((int)(uint)*(ushort *)(param_3 + 0x2f2) >> (bVar1 & 0x1f));
      }
      else if (local_10[0] == 2) {
        *(ushort *)(param_3 + 0x2f2) = (ushort)*(byte *)(param_1 + local_14 + 1) << 1;
      }
      uVar3 = 0;
    }
  }
  else {
    local_14 = local_14 + 1;
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6d98);
    uVar3 = 0xffffff74;
  }
  return uVar3;
}



// ==== DecodeExtKeyUsage @ 0046eb14 size=564

undefined4 DecodeExtKeyUsage(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  undefined4 local_10 [2];
  
  local_18 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6ddc);
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,&local_18,local_10,param_2);
  if (iVar1 < 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6df0);
    uVar2 = 0xffffff74;
  }
  else {
    *(uint *)(param_3 + 0x308) = param_1 + local_18;
    *(undefined4 *)(param_3 + 0x30c) = local_10[0];
    while (local_18 < param_2) {
      iVar1 = (*(code *)(PTR_LAB_004be958 + 0x6c04))(param_1,&local_18,&local_14,param_2);
      if (iVar1 < 0) {
        return 0xffffff74;
      }
      if (local_14 == 0x48) {
        *(byte *)(param_3 + 0x2f5) = *(byte *)(param_3 + 0x2f5) | 2;
      }
      else if (local_14 < 0x49) {
        if (local_14 == 0x47) {
          *(byte *)(param_3 + 0x2f5) = *(byte *)(param_3 + 0x2f5) | 1;
        }
      }
      else if (local_14 == 0x4f) {
        *(byte *)(param_3 + 0x2f5) = *(byte *)(param_3 + 0x2f5) | 4;
      }
      else if (local_14 == 0x97) {
        *(byte *)(param_3 + 0x2f5) = *(byte *)(param_3 + 0x2f5) | 8;
      }
      *(int *)(param_3 + 0x310) = *(int *)(param_3 + 0x310) + 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ==== DecodeNameConstraints @ 0046f004 size=564

undefined4 DecodeNameConstraints(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  uint local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6e2c);
  iVar2 = (*(code *)PTR_FUN_004be964)(param_1,&local_10,&local_c,param_2);
  if (iVar2 < 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6df0);
    uVar3 = 0xffffff74;
  }
  else {
    for (; local_10 < param_2; local_10 = local_10 + local_c) {
      cVar1 = *(char *)(param_1 + local_10);
      local_10 = local_10 + 1;
      iVar2 = (*(code *)PTR_FUN_004be95c)(param_1,&local_10,&local_c,param_2);
      if (iVar2 < 1) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6e0c);
        return 0xffffff74;
      }
      if (cVar1 == -0x60) {
        local_18 = param_3 + 0x2c;
      }
      else {
        if (cVar1 != -0x5f) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6e44);
          return 0xffffff74;
        }
        local_18 = param_3 + 0x30;
      }
      (*(code *)(PTR_LAB_004be984 + -0x12b8))
                (param_1 + local_10,local_c,local_18,*(undefined4 *)(param_3 + 0x280));
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ==== DecodeCertExtensions @ 0046f238 size=1084

/* WARNING: Type propagation algorithm not settling */

undefined4 DecodeCertExtensions(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint local_1c;
  int local_18;
  int local_14 [3];
  
  local_1c = 0;
  uVar5 = *(uint *)(param_1 + 0x2ac);
  iVar6 = *(int *)(param_1 + 0x2a8);
  bVar2 = false;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x6e58);
  if ((iVar6 == 0) || (uVar5 == 0)) {
    uVar7 = 0xffffff53;
  }
  else if (*(char *)(iVar6 + local_1c) == -0x5d) {
    local_1c = local_1c + 1;
    iVar3 = (*(code *)PTR_FUN_004be95c)(iVar6,&local_1c,&local_18,uVar5);
    if (iVar3 < 0) {
      uVar7 = 0xffffff74;
    }
    else {
      iVar3 = (*(code *)PTR_FUN_004be964)(iVar6,&local_1c,&local_18,uVar5);
      if (iVar3 < 0) {
        uVar7 = 0xffffff74;
      }
      else {
        for (; local_1c < uVar5; local_1c = local_1c + local_18) {
          iVar3 = (*(code *)PTR_FUN_004be964)(iVar6,&local_1c,&local_18,uVar5);
          if (iVar3 < 0) {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6df0);
            return 0xffffff74;
          }
          local_14[0] = 0;
          iVar3 = (*(code *)(PTR_LAB_004be958 + 0x6c04))(iVar6,&local_1c,local_14,uVar5);
          if (iVar3 < 0) {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6e70);
            return 0xffffff74;
          }
          bVar1 = false;
          if (*(char *)(iVar6 + local_1c) == '\x01') {
            local_14[1] = 0;
            local_1c = local_1c + 1;
            iVar3 = (*(code *)PTR_FUN_004be95c)(iVar6,&local_1c,local_14 + 1,uVar5);
            if (iVar3 < 0) {
              (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6e84);
              return 0xffffff74;
            }
            uVar4 = local_1c + 1;
            pcVar8 = (char *)(iVar6 + local_1c);
            local_1c = uVar4;
            if (*pcVar8 != '\0') {
              bVar1 = true;
            }
          }
          if (*(char *)(iVar6 + local_1c) != '\x04') {
            local_1c = local_1c + 1;
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6d64);
            return 0xffffff74;
          }
          local_1c = local_1c + 1;
          iVar3 = (*(code *)PTR_FUN_004be95c)(iVar6,&local_1c,&local_18,uVar5);
          if (iVar3 < 0) {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6d34);
            return 0xffffff74;
          }
          if (local_14[0] - 0x45U < 100) {
                    /* WARNING: Could not recover jumptable at 0x0046f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004be644 +
                                                (local_14[0] - 0x45U) * 4 + 0x6f04)))();
            return uVar7;
          }
          if (bVar1) {
            bVar2 = true;
          }
        }
        if (bVar2) {
          uVar7 = 0xffffff60;
        }
        else {
          uVar7 = 0;
        }
      }
    }
  }
  else {
    uVar7 = 0xffffff74;
  }
  return uVar7;
}



// ==== ParseCert @ 0046fa58 size=500

int ParseCert(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_ParseCertRelative_004be738)(param_1,param_2,param_3,param_4);
  if (-1 < iVar1) {
    if (0 < param_1[0x19]) {
      iVar2 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_1[0x19] + 1);
      if (iVar2 == 0) {
        return -0x7d;
      }
      (*(code *)PTR_memcpy_004bebdc)(iVar2,param_1[0x18],param_1[0x19]);
      *(undefined1 *)(iVar2 + param_1[0x19]) = 0;
      param_1[0x18] = iVar2;
      param_1[0x1b] = 1;
    }
    if (((param_1[7] == 0x285) && (*param_1 != 0)) && (param_1[1] != 0)) {
      iVar2 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_1[1]);
      if (iVar2 == 0) {
        iVar1 = -0x7d;
      }
      else {
        (*(code *)PTR_memcpy_004bebdc)(iVar2,*param_1,param_1[1]);
        *param_1 = iVar2;
        param_1[2] = 1;
      }
    }
  }
  return iVar1;
}



// ==== ParseCertRelative @ 0046fc4c size=1416

int ParseCertRelative(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  int local_70;
  undefined1 auStack_6c [100];
  
  local_80 = 0;
  local_7c = 0;
  iVar1 = (*(code *)PTR_DecodeToKey_004be734)(param_1,param_3);
  if (((iVar1 < 0) && (local_80 = iVar1, iVar1 != -0x96)) && (iVar1 != -0x97)) {
    return iVar1;
  }
  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7094);
  if ((uint)param_1[0x9e] < (uint)param_1[4]) {
    if (param_1[8] < 2) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x70a4);
      return -0x8d;
    }
    param_1[0xaa] = param_1[0x9d] + param_1[0x9e];
    param_1[0xab] = param_1[4] - param_1[0x9e];
    param_1[0xac] = param_1[0x9e];
    iVar1 = (*(code *)(PTR_LAB_004be984 + -0xdc8))(param_1);
    if ((iVar1 < 0) && (local_7c = iVar1, iVar1 != -0xa0)) {
      return iVar1;
    }
    param_1[0x9e] = param_1[4];
  }
  iVar1 = (*(code *)PTR_GetAlgoId_004be96c)(param_1[0x9d],param_1 + 0x9e,&local_70,param_1[0x9f]);
  if ((-1 < iVar1) && (iVar1 = (*(code *)(PTR_LAB_004be984 + -0x4620))(param_1), -1 < iVar1)) {
    if (param_1[6] == local_70) {
      if ((((char)param_1[0xb6] == '\0') && (*param_1 != 0)) && (param_1[1] != 0)) {
        iVar1 = (*(code *)PTR_InitSha_004be7d4)(auStack_6c);
        if (iVar1 != 0) {
          return iVar1;
        }
        (*(code *)PTR_ShaUpdate_004be7d8)(auStack_6c,*param_1,param_1[1]);
        (*(code *)PTR_ShaFinal_004be7dc)(auStack_6c,param_1 + 0xb1);
      }
      if ((param_3 != 0) && (param_2 != 4)) {
        local_78 = (undefined4 *)0x0;
        if (*(char *)((int)param_1 + 0x2ed) != '\0') {
          local_78 = (undefined4 *)(*(code *)PTR_FUN_004be9b0)(param_4,(int)param_1 + 0x2d9);
        }
        if (local_78 == (undefined4 *)0x0) {
          local_78 = (undefined4 *)(*(code *)PTR_FUN_004be9b4)(param_4,param_1 + 0x12);
        }
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x70d0);
        if (local_78 == (undefined4 *)0x0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7134);
          return -0xbc;
        }
        iVar1 = (*(code *)(PTR_LAB_004be984 + -0x384c))
                          (param_1[0x9d] + param_1[3],param_1[4] - param_1[3],local_78[3],*local_78,
                           local_78[1],param_1[0x17],param_1[5],param_1[6],param_1[0xa0]);
        if (iVar1 == 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x70f8);
          return -0x9b;
        }
        iVar1 = (*(code *)(PTR_LAB_004be984 + -0x2fec))(local_78,param_1);
        if (iVar1 == 0) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7114);
          return -0xc6;
        }
      }
      iVar1 = local_80;
      if ((local_80 == 0) && (iVar1 = local_7c, local_7c == 0)) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x98;
    }
  }
  return iVar1;
}



// ==== MakeSigner @ 004701d4 size=172

undefined4 * MakeSigner(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[0x12] = 0;
  }
  return puVar1;
}



// ==== FreeSigner @ 00470280 size=308

void FreeSigner(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (*(code *)PTR_FUN_004be980)(*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(code *)PTR_FUN_004be980)(*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if (param_1 != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
  }
  return;
}



// ==== FreeSignerTable @ 004703b4 size=224

void FreeSignerTable(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    local_14 = *(int *)(param_1 + local_18 * 4);
    while (local_14 != 0) {
      iVar1 = *(int *)(local_14 + 0x48);
      (*(code *)PTR_FreeSigner_004be6f4)(local_14,param_3);
      local_14 = iVar1;
    }
    *(undefined4 *)(param_1 + local_18 * 4) = 0;
  }
  return;
}



// ==== SetSerialNumber @ 00470568 size=332

int SetSerialNumber(char *param_1,uint param_2,undefined1 *param_3)

{
  int local_10;
  
  local_10 = 0;
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x7150);
  if (param_2 < 0x21) {
    *param_3 = 2;
    if (*param_1 < '\0') {
      param_3[1] = (char)param_2 + '\x01';
      param_3[2] = 0;
      (*(code *)PTR_memcpy_004bebdc)(param_3 + 3,param_1,param_2);
      local_10 = param_2 + 3;
    }
    else {
      param_3[1] = (char)param_2;
      (*(code *)PTR_memcpy_004bebdc)(param_3 + 2,param_1,param_2);
      local_10 = param_2 + 2;
    }
  }
  return local_10;
}



// ==== GetNameHash @ 004710a0 size=556

int GetNameHash(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_70 [96];
  int local_10 [2];
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004be644 + 0x71e0);
  if (*(char *)(param_1 + *param_2) == '\x06') {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x6898);
    iVar1 = (*(code *)PTR_FUN_004be95c)(param_1,param_2,local_10,param_4);
    if (iVar1 < 0) {
      return -0x8c;
    }
    *param_2 = *param_2 + local_10[0];
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x68b4);
  }
  iVar2 = *param_2;
  iVar1 = (*(code *)PTR_FUN_004be964)(param_1,param_2,local_10,param_4);
  if (iVar1 < 0) {
    iVar1 = -0x8c;
  }
  else {
    iVar1 = (*(code *)PTR_InitSha_004be7d4)(auStack_70);
    if (iVar1 == 0) {
      (*(code *)PTR_ShaUpdate_004be7d8)(auStack_70,param_1 + iVar2,(*param_2 + local_10[0]) - iVar2)
      ;
      (*(code *)PTR_ShaFinal_004be7dc)(auStack_70,param_3);
      *param_2 = *param_2 + local_10[0];
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== Base64_Decode @ 004712d0 size=1412

undefined4 Base64_Decode(int param_1,uint param_2,int param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  uint local_res4;
  uint local_28;
  int local_24;
  char local_18;
  
  local_28 = 0;
  local_24 = 0;
  uVar10 = param_2;
  iVar5 = local_24;
  if (*param_4 < ((param_2 - (param_2 + 0x3f >> 6)) + 1) * 3 >> 2) {
    uVar9 = 0xffffff53;
  }
  else {
    do {
      do {
        local_24 = iVar5;
        local_res4 = uVar10;
        if (local_res4 < 4) {
LAB_00471828:
          *param_4 = local_28;
          return 0;
        }
        bVar1 = *(byte *)(param_1 + local_24);
        bVar2 = *(byte *)(param_1 + local_24 + 1);
        bVar3 = *(byte *)(param_1 + local_24 + 2);
        iVar5 = local_24 + 4;
        bVar4 = *(byte *)(param_1 + local_24 + 3);
        if (bVar1 == 0) goto LAB_00471828;
        if ((((bVar1 < 0x2b) || (bVar2 < 0x2b)) || (bVar3 < 0x2b)) || (bVar4 < 0x2b)) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x72e0);
          return 0xffffff66;
        }
        if (((0x7a < bVar1) || (0x7a < bVar2)) || ((0x7a < bVar3 || (0x7a < bVar4)))) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7304);
          return 0xffffff66;
        }
        bVar2 = PTR_DAT_004be644[bVar2 + 0x7265];
        if (bVar3 == 0x3d) {
          bVar7 = 0;
        }
        else {
          bVar7 = PTR_DAT_004be644[bVar3 + 0x7265];
        }
        if (bVar4 == 0x3d) {
          bVar8 = 0;
        }
        else {
          bVar8 = PTR_DAT_004be644[bVar4 + 0x7265];
        }
        *(byte *)(param_3 + local_28) =
             (byte)(((uint)(byte)PTR_DAT_004be644[bVar1 + 0x7265] << 0x1a) >> 0x18) | bVar2 >> 4;
        uVar10 = local_28 + 1;
        if (bVar3 != 0x3d) {
          *(byte *)(param_3 + local_28 + 1) = (byte)(((uint)bVar2 << 0x1c) >> 0x18) | bVar7 >> 2;
          uVar10 = local_28 + 2;
        }
        local_28 = uVar10;
        if (bVar4 == 0x3d) goto LAB_00471828;
        uVar6 = local_28 + 1;
        *(byte *)(param_3 + local_28) = (byte)(((uint)bVar7 << 0x1e) >> 0x18) | bVar8;
        uVar10 = local_res4 - 4;
        local_28 = uVar6;
      } while ((uVar10 == 0) ||
              (((*(char *)(param_1 + iVar5) != ' ' && (*(char *)(param_1 + iVar5) != '\r')) &&
               (*(char *)(param_1 + iVar5) != '\n'))));
      local_res4 = local_res4 - 5;
      local_18 = *(char *)(param_1 + iVar5);
      local_24 = local_24 + 5;
      while ((local_res4 != 0 && (local_18 == ' '))) {
        local_res4 = local_res4 - 1;
        local_18 = *(char *)(param_1 + local_24);
        local_24 = local_24 + 1;
      }
      if ((local_18 == '\r') && (local_res4 != 0)) {
        local_18 = *(char *)(param_1 + local_24);
        local_res4 = local_res4 - 1;
        local_24 = local_24 + 1;
      }
      uVar10 = local_res4;
      iVar5 = local_24;
    } while (local_18 == '\n');
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7324);
    uVar9 = 0xffffff66;
  }
  return uVar9;
}



// ==== Base64_Encode @ 004721d4 size=124

undefined4
Base64_Encode(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(PTR_LAB_004be984 + 0x1b1c))(param_1,param_2,param_3,param_4,0);
  return uVar1;
}



// ==== Base16_Decode @ 004722d0 size=720

undefined4 Base16_Decode(char *param_1,uint param_2,char *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint local_res4;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (((param_2 == 1) && (*param_4 != 0)) && (param_1 != (char *)0x0)) {
    if ((byte)(*param_1 - 0x30U) < 0x37) {
      if (PTR_DAT_004be644[(byte)(*param_1 - 0x30U) + 0x73a4] == -1) {
        uVar2 = 0xffffff66;
      }
      else {
        *param_3 = PTR_DAT_004be644[(byte)(*param_1 - 0x30U) + 0x73a4];
        *param_4 = 1;
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffff66;
    }
  }
  else if ((param_2 & 1) == 0) {
    local_res4 = param_2;
    if (*param_4 < param_2 >> 1) {
      uVar2 = 0xffffff53;
    }
    else {
      for (; local_res4 != 0; local_res4 = local_res4 - 2) {
        iVar1 = local_18 + 1;
        pcVar3 = param_1 + local_18;
        local_18 = local_18 + 2;
        if (0x36 < (byte)(*pcVar3 - 0x30U)) {
          return 0xffffff66;
        }
        if (0x36 < (byte)(param_1[iVar1] - 0x30U)) {
          return 0xffffff66;
        }
        if ((PTR_DAT_004be644[(byte)(*pcVar3 - 0x30U) + 0x73a4] == 0xff) ||
           (PTR_DAT_004be644[(byte)(param_1[iVar1] - 0x30U) + 0x73a4] == 0xff)) {
          return 0xffffff66;
        }
        param_3[local_14] =
             (byte)(((uint)(byte)PTR_DAT_004be644[(byte)(*pcVar3 - 0x30U) + 0x73a4] << 0x1c) >> 0x18
                   ) | PTR_DAT_004be644[(byte)(param_1[iVar1] - 0x30U) + 0x73a4];
        local_14 = local_14 + 1;
      }
      *param_4 = local_14;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffff53;
  }
  return uVar2;
}



// ==== Arc4SetKey @ 004725a0 size=340

void Arc4SetKey(undefined1 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  *param_1 = 1;
  param_1[1] = 0;
  for (local_18 = 0; local_18 < 0x100; local_18 = local_18 + 1) {
    param_1[local_18 + 2] = (char)local_18;
  }
  for (local_18 = 0; local_18 < 0x100; local_18 = local_18 + 1) {
    bVar1 = param_1[local_18 + 2];
    local_10 = local_10 + (uint)*(byte *)(param_2 + local_14) + (uint)bVar1 & 0xff;
    param_1[local_18 + 2] = param_1[local_10 + 2];
    param_1[local_10 + 2] = bVar1;
    local_14 = local_14 + 1;
    if (param_3 <= local_14) {
      local_14 = 0;
    }
  }
  return;
}



// ==== Arc4Process @ 004727dc size=268

void Arc4Process(byte *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte *local_res4;
  byte *local_res8;
  int local_resc;
  uint local_18;
  uint local_14;
  
  local_18 = (uint)*param_1;
  local_14 = (uint)param_1[1];
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  while (local_resc != 0) {
    bVar1 = *local_res8;
    bVar2 = (*(code *)(PTR_LAB_004be984 + 0x26f4))(&local_18,&local_14,param_1 + 2);
    *local_res4 = bVar1 ^ bVar2;
    local_res4 = local_res4 + 1;
    local_res8 = local_res8 + 1;
    local_resc = local_resc + -1;
  }
  *param_1 = (byte)local_18;
  param_1[1] = (byte)local_14;
  return;
}



// ==== InitMd5 @ 0047297c size=124

void InitMd5(undefined4 *param_1)

{
  param_1[0x13] = 0x67452301;
  param_1[0x14] = 0xefcdab89;
  param_1[0x15] = 0x98badcfe;
  param_1[0x16] = 0x10325476;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ==== Md5Update @ 0047447c size=344

void Md5Update(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res4;
  int local_res8;
  
  local_res4 = param_2;
  local_res8 = param_3;
  while (local_res8 != 0) {
    iVar1 = (*(code *)(PTR_LAB_004be984 + 0x293c))(local_res8,0x40 - *param_1);
    (*(code *)PTR_memcpy_004bebdc)((int)param_1 + *param_1 + 0xc,local_res4,iVar1);
    *param_1 = *param_1 + iVar1;
    local_res4 = local_res4 + iVar1;
    local_res8 = local_res8 - iVar1;
    if (*param_1 == 0x40) {
      (*(code *)(PTR_LAB_004be984 + 0x29f8))(param_1);
      (*(code *)(PTR_LAB_004be984 + 0x4404))(param_1,0x40);
      *param_1 = 0;
    }
  }
  return;
}



// ==== Md5Final @ 004745d4 size=592

void Md5Final(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  
  (*(code *)(PTR_LAB_004be984 + 0x4404))(param_1,*param_1);
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  *(undefined1 *)((int)param_1 + uVar1 + 0xc) = 0x80;
  if (0x38 < *param_1) {
    (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0xc,0,0x40 - *param_1);
    *param_1 = 0x40;
    (*(code *)(PTR_LAB_004be984 + 0x29f8))(param_1);
    *param_1 = 0;
  }
  (*(code *)PTR_memset_004beb98)((int)param_1 + *param_1 + 0xc,0,0x38 - *param_1);
  param_1[2] = (param_1[1] >> 0x1d) + param_1[2] * 8;
  param_1[1] = param_1[1] << 3;
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x11,param_1 + 1,4);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x12,param_1 + 2,4);
  (*(code *)(PTR_LAB_004be984 + 0x29f8))(param_1);
  (*(code *)PTR_memcpy_004bebdc)(param_2,param_1 + 0x13,0x10);
  (*(code *)PTR_InitMd5_004be7c8)(param_1);
  return;
}



// ==== Md5Hash @ 00474824 size=172

undefined4 Md5Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [96];
  
  (*(code *)PTR_InitMd5_004be7c8)(auStack_68);
  (*(code *)PTR_Md5Update_004be7cc)(auStack_68,param_1,param_2);
  (*(code *)PTR_Md5Final_004be7d0)(auStack_68,param_3);
  return 0;
}



// ==== PBKDF1 @ 00474ab4 size=816

int PBKDF1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int local_e8;
  undefined1 auStack_dc [92];
  undefined1 auStack_80 [96];
  undefined1 auStack_20 [24];
  
  if (param_8 == 0) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    if (param_8 != 1) {
      return -0xad;
    }
  }
  if (iVar2 < param_7) {
    iVar2 = -0xad;
  }
  else if (param_6 < 1) {
    iVar2 = -0xad;
  }
  else {
    if (param_8 == 0) {
      (*(code *)PTR_InitMd5_004be7c8)(auStack_dc);
      (*(code *)PTR_Md5Update_004be7cc)(auStack_dc,param_2,param_3);
      (*(code *)PTR_Md5Update_004be7cc)(auStack_dc,param_4,param_5);
      (*(code *)PTR_Md5Final_004be7d0)(auStack_dc,auStack_20);
    }
    else {
      iVar1 = (*(code *)PTR_InitSha_004be7d4)(auStack_80);
      if (iVar1 != 0) {
        return iVar1;
      }
      (*(code *)PTR_ShaUpdate_004be7d8)(auStack_80,param_2,param_3);
      (*(code *)PTR_ShaUpdate_004be7d8)(auStack_80,param_4,param_5);
      (*(code *)PTR_ShaFinal_004be7dc)(auStack_80,auStack_20);
    }
    for (local_e8 = 1; local_e8 < param_6; local_e8 = local_e8 + 1) {
      if (param_8 == 0) {
        (*(code *)PTR_Md5Update_004be7cc)(auStack_dc,auStack_20,iVar2);
        (*(code *)PTR_Md5Final_004be7d0)(auStack_dc,auStack_20);
      }
      else {
        (*(code *)PTR_ShaUpdate_004be7d8)(auStack_80,auStack_20,iVar2);
        (*(code *)PTR_ShaFinal_004be7dc)(auStack_80,auStack_20);
      }
    }
    (*(code *)PTR_memcpy_004bebdc)(param_1,auStack_20,param_7);
    iVar2 = 0;
  }
  return iVar2;
}



// ==== PBKDF2 @ 00474de4 size=948

int PBKDF2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          int param_6,int param_7,int param_8)

{
  int iVar1;
  int local_res0;
  uint local_280;
  undefined4 local_27c;
  int local_278;
  int local_274;
  undefined1 auStack_268 [536];
  undefined1 auStack_50 [64];
  undefined1 local_10 [8];
  
  local_280 = 1;
  if (param_8 == 0) {
    local_27c = 0x10;
  }
  else if (param_8 == 1) {
    local_27c = 0x14;
  }
  else if (param_8 == 2) {
    local_27c = 0x20;
  }
  else {
    if (param_8 != 4) {
      return -0xad;
    }
    local_27c = 0x40;
  }
  local_274 = (*(code *)PTR_HmacSetKey_004be874)(auStack_268,param_8,param_2,param_3);
  local_res0 = param_1;
  if (local_274 == 0) {
    while ((param_7 != 0 &&
           (local_274 = (*(code *)PTR_HmacUpdate_004be878)(auStack_268,param_4,param_5),
           local_274 == 0))) {
      local_274 = 0;
      for (local_278 = 0; local_278 < 4; local_278 = local_278 + 1) {
        local_10[0] = (undefined1)(local_280 >> ((3 - local_278) * 8 & 0x1fU));
        local_274 = (*(code *)PTR_HmacUpdate_004be878)(auStack_268,local_10,1);
        if (local_274 != 0) break;
      }
      if (local_274 != 0) {
        return local_274;
      }
      iVar1 = (*(code *)PTR_HmacFinal_004be87c)(auStack_268,auStack_50);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = (*(code *)(PTR_LAB_004be984 + 0x4a74))(param_7,local_27c);
      (*(code *)PTR_memcpy_004bebdc)(local_res0,auStack_50,iVar1);
      local_278 = 1;
      local_274 = 0;
      while (((local_278 < param_6 &&
              (local_274 = (*(code *)PTR_HmacUpdate_004be878)(auStack_268,auStack_50,local_27c),
              local_274 == 0)) &&
             (local_274 = (*(code *)PTR_HmacFinal_004be87c)(auStack_268,auStack_50), local_274 == 0)
             )) {
        (*(code *)(PTR_LAB_004be984 + 0x4968))(local_res0,auStack_50,iVar1);
        local_278 = local_278 + 1;
      }
      if (local_274 != 0) {
        return local_274;
      }
      local_res0 = local_res0 + iVar1;
      param_7 = param_7 - iVar1;
      local_280 = local_280 + 1;
    }
  }
  return local_274;
}



// ==== PKCS12_PBKDF @ 00475198 size=3376

int PKCS12_PBKDF(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8,undefined4 param_9)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int local_res0;
  uint local_650;
  uint local_64c;
  int local_648;
  int local_640;
  uint local_63c;
  undefined1 *local_638;
  undefined1 auStack_608 [1024];
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 uStack_d8;
  undefined1 auStack_d7 [207];
  
  bVar2 = false;
  local_640 = 0;
  local_638 = auStack_608;
  if (param_6 == 0) {
    param_6 = 1;
  }
  if (param_8 == 0) {
    local_64c = 0x40;
    local_650 = 0x10;
  }
  else if (param_8 == 1) {
    local_64c = 0x40;
    local_650 = 0x14;
  }
  else if (param_8 == 2) {
    local_64c = 0x40;
    local_650 = 0x20;
  }
  else {
    if (param_8 != 4) {
      return -0xad;
    }
    local_64c = 0x80;
    local_650 = 0x40;
  }
  if (local_64c == 0) {
    trap(0x1c00);
  }
  iVar1 = (((param_5 + local_64c) - 1) / local_64c) * local_64c;
  if (param_3 == 0) {
    local_648 = 0;
  }
  else {
    if (local_64c == 0) {
      trap(0x1c00);
    }
    local_648 = (((param_3 + local_64c) - 1) / local_64c) * local_64c;
  }
  uVar4 = local_64c + iVar1 + local_648;
  if (0x400 < uVar4) {
    local_638 = (undefined1 *)(*(code *)PTR_CyaSSL_Malloc_004be634)(uVar4);
    if (local_638 == (undefined1 *)0x0) {
      return -0x7d;
    }
    bVar2 = true;
  }
  (*(code *)PTR_memset_004beb98)(local_638,param_9,local_64c);
  for (local_63c = 0; (int)local_63c < iVar1; local_63c = local_63c + 1) {
    if (param_5 == 0) {
      trap(0x1c00);
    }
    local_638[local_63c + local_64c] = *(undefined1 *)(param_4 + (int)local_63c % param_5);
  }
  for (local_63c = 0; local_res0 = param_1, (int)local_63c < local_648; local_63c = local_63c + 1) {
    if (param_3 == 0) {
      trap(0x1c00);
    }
    local_638[local_63c + iVar1 + local_64c] = *(undefined1 *)(param_2 + (int)local_63c % param_3);
  }
  do {
    if (param_7 < 1) {
LAB_00475e70:
      if ((bVar2) && (local_638 != (undefined1 *)0x0)) {
        (*(code *)PTR_CyaSSL_Free_004be640)(local_638);
      }
      return local_640;
    }
    if (param_8 == 0) {
      (*(code *)PTR_InitMd5_004be7c8)(&uStack_d8);
      (*(code *)PTR_Md5Update_004be7cc)(&uStack_d8,local_638,uVar4);
      (*(code *)PTR_Md5Final_004be7d0)(&uStack_d8,auStack_208);
      for (local_63c = 1; (int)local_63c < param_6; local_63c = local_63c + 1) {
        (*(code *)PTR_Md5Update_004be7cc)(&uStack_d8,auStack_208,local_650);
        (*(code *)PTR_Md5Final_004be7d0)(&uStack_d8,auStack_208);
      }
    }
    else if (param_8 == 1) {
      local_640 = (*(code *)PTR_InitSha_004be7d4)(&uStack_d8);
      if (local_640 != 0) goto LAB_00475e70;
      (*(code *)PTR_ShaUpdate_004be7d8)(&uStack_d8,local_638,uVar4);
      (*(code *)PTR_ShaFinal_004be7dc)(&uStack_d8,auStack_208);
      for (local_63c = 1; (int)local_63c < param_6; local_63c = local_63c + 1) {
        (*(code *)PTR_ShaUpdate_004be7d8)(&uStack_d8,auStack_208,local_650);
        (*(code *)PTR_ShaFinal_004be7dc)(&uStack_d8,auStack_208);
      }
    }
    else if (param_8 == 2) {
      local_640 = (*(code *)PTR_InitSha256_004be628)(&uStack_d8);
      if (((local_640 != 0) ||
          (local_640 = (*(code *)PTR_Sha256Update_004be62c)(&uStack_d8,local_638,uVar4),
          local_640 != 0)) ||
         (local_640 = (*(code *)PTR_Sha256Final_004be630)(&uStack_d8,auStack_208), local_640 != 0))
      goto LAB_00475e70;
      local_63c = 1;
      while ((((int)local_63c < param_6 &&
              (local_640 = (*(code *)PTR_Sha256Update_004be62c)(&uStack_d8,auStack_208,local_650),
              local_640 == 0)) &&
             (local_640 = (*(code *)PTR_Sha256Final_004be630)(&uStack_d8,auStack_208),
             local_640 == 0))) {
        local_63c = local_63c + 1;
      }
    }
    else if (param_8 == 4) {
      local_640 = (*(code *)PTR_InitSha512_004be7f8)(&uStack_d8);
      if (((local_640 != 0) ||
          (local_640 = (*(code *)PTR_Sha512Update_004be7fc)(&uStack_d8,local_638,uVar4),
          local_640 != 0)) ||
         (local_640 = (*(code *)PTR_Sha512Final_004be800)(&uStack_d8,auStack_208), local_640 != 0))
      goto LAB_00475e70;
      local_63c = 1;
      while ((((int)local_63c < param_6 &&
              (local_640 = (*(code *)PTR_Sha512Update_004be7fc)(&uStack_d8,auStack_208,local_650),
              local_640 == 0)) &&
             (local_640 = (*(code *)PTR_Sha512Final_004be800)(&uStack_d8,auStack_208),
             local_640 == 0))) {
        local_63c = local_63c + 1;
      }
    }
    for (local_63c = 0; (int)local_63c < (int)local_64c; local_63c = local_63c + 1) {
      if (local_650 == 0) {
        trap(0x1c00);
      }
      auStack_188[local_63c] = auStack_208[local_63c % local_650];
    }
    iVar3 = (*(code *)PTR_mp_init_004be8b0)(auStack_108);
    if (iVar3 == 0) {
      iVar3 = (*(code *)PTR_mp_read_unsigned_bin_004be8e0)(auStack_108,auStack_188,local_64c);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_mp_add_d_004be9c0)(auStack_108,1,auStack_108);
        if (iVar3 != 0) {
          local_640 = -0x73;
        }
      }
      else {
        local_640 = -0x6f;
      }
    }
    else {
      local_640 = -0x6e;
    }
    if (local_640 != 0) {
      (*(code *)PTR_mp_clear_004be8b8)(auStack_108);
      goto LAB_00475e70;
    }
    for (local_63c = 0; (int)local_63c < iVar1 + local_648; local_63c = local_63c + local_64c) {
      iVar3 = (*(code *)PTR_mp_init_multi_004be948)(auStack_f8,auStack_e8,0,0,0,0);
      if (iVar3 != 0) {
        local_640 = -0x6e;
        break;
      }
      iVar3 = (*(code *)PTR_mp_read_unsigned_bin_004be8e0)
                        (auStack_f8,local_638 + local_63c + local_64c,local_64c);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_mp_add_004be938)(auStack_f8,auStack_108,auStack_e8);
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_mp_unsigned_bin_size_004be8cc)(auStack_e8);
          if (iVar3 < 0) {
            local_640 = -0x71;
          }
          else if ((int)local_64c < iVar3) {
            local_640 = (*(code *)PTR_mp_to_unsigned_bin_004be8dc)(auStack_e8,&uStack_d8);
            (*(code *)PTR_memcpy_004bebdc)(local_638 + local_63c + local_64c,auStack_d7,local_64c);
          }
          else if (iVar3 < (int)local_64c) {
            (*(code *)PTR_memset_004beb98)(local_638 + local_63c + local_64c,0,local_64c - iVar3);
            local_640 = (*(code *)PTR_mp_to_unsigned_bin_004be8dc)
                                  (auStack_e8,local_638 + ((local_63c + local_64c * 2) - iVar3));
          }
          else {
            local_640 = (*(code *)PTR_mp_to_unsigned_bin_004be8dc)
                                  (auStack_e8,local_638 + local_63c + local_64c);
          }
        }
        else {
          local_640 = -0x73;
        }
      }
      else {
        local_640 = -0x6f;
      }
      (*(code *)PTR_mp_clear_004be8b8)(auStack_f8);
      (*(code *)PTR_mp_clear_004be8b8)(auStack_e8);
      if (local_640 < 0) break;
    }
    iVar3 = (*(code *)(PTR_LAB_004be984 + 0x4a74))(param_7,local_650);
    (*(code *)PTR_memcpy_004bebdc)(local_res0,auStack_208,iVar3);
    local_res0 = local_res0 + iVar3;
    param_7 = param_7 - iVar3;
    (*(code *)PTR_mp_clear_004be8b8)(auStack_108);
  } while( true );
}



// ==== IsAtLeastTLSv1_2 @ 0048200c size=148

undefined4 IsAtLeastTLSv1_2(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 8) == '\x03') && (2 < *(byte *)(param_1 + 9))) {
    uVar1 = 1;
  }
  else if ((*(char *)(param_1 + 8) == -2) && (*(byte *)(param_1 + 9) < 0xfe)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ==== c32to24 @ 004820a0 size=104

void c32to24(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = (char)((uint)param_1 >> 0x10);
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)param_1;
  return;
}



// ==== FreeSSL_Ctx @ 004826fc size=404

void FreeSSL_Ctx(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_LockMutex_004be6b4)(param_1 + 4);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    iVar1 = *(int *)(param_1 + 0x1c);
    (*(code *)PTR_UnLockMutex_004be6b8)(param_1 + 4);
    if (iVar1 == 0) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7894);
      (*(code *)PTR_FUN_004beaac)(param_1);
      (*(code *)PTR_FreeMutex_004be6b0)(param_1 + 4);
      if (param_1 != 0) {
        (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x78c0);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7878);
  }
  return;
}



// ==== InitSuites @ 00482c84 size=900

void InitSuites(int *param_1,undefined2 param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  char local_res4;
  byte bStackX_5;
  char local_res8;
  char in_stack_00000018;
  char in_stack_0000001c;
  int in_stack_00000020;
  ushort local_28;
  undefined4 local_24;
  
  local_28 = 0;
  local_res4 = (char)param_2;
  bStackX_5 = (byte)((ushort)param_2 >> 8);
  if ((local_res4 == '\x03') && (bStackX_5 != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((local_res4 == '\x03') && (2 < bStackX_5)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_24 = 1;
  if (param_1 == (int *)0x0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x78e4);
  }
  else if (*param_1 == 0) {
    local_res8 = param_3;
    if ((in_stack_00000020 == 0) && (in_stack_0000001c != '\0')) {
      local_res8 = '\0';
    }
    if ((in_stack_00000020 == 0) && (in_stack_00000018 != '\0')) {
      local_24 = 0;
    }
    if ((bVar1) && (local_res8 != '\0')) {
      *(undefined1 *)(param_1 + 1) = 0;
      local_28 = 2;
      *(undefined1 *)((int)param_1 + 5) = 0x3d;
    }
    if ((bVar1) && (local_res8 != '\0')) {
      uVar3 = local_28 + 1;
      *(undefined1 *)((int)param_1 + local_28 + 4) = 0;
      local_28 = local_28 + 2;
      *(undefined1 *)((int)param_1 + uVar3 + 4) = 0x3c;
    }
    if ((bVar2) && (local_res8 != '\0')) {
      uVar3 = local_28 + 1;
      *(undefined1 *)((int)param_1 + local_28 + 4) = 0;
      local_28 = local_28 + 2;
      *(undefined1 *)((int)param_1 + uVar3 + 4) = 0x35;
    }
    if ((bVar2) && (local_res8 != '\0')) {
      uVar3 = local_28 + 1;
      *(undefined1 *)((int)param_1 + local_28 + 4) = 0;
      local_28 = local_28 + 2;
      *(undefined1 *)((int)param_1 + uVar3 + 4) = 0x2f;
    }
    if (local_res8 != '\0') {
      *(undefined1 *)((int)param_1 + local_28 + 4) = 0;
      *(undefined1 *)((int)param_1 + (ushort)(local_28 + 1) + 4) = 5;
      *(undefined1 *)((int)param_1 + (ushort)(local_28 + 2) + 4) = 0;
      *(undefined1 *)((int)param_1 + (ushort)(local_28 + 3) + 4) = 4;
      uVar3 = local_28 + 5;
      *(undefined1 *)((int)param_1 + (ushort)(local_28 + 4) + 4) = 0;
      local_28 = local_28 + 6;
      *(undefined1 *)((int)param_1 + uVar3 + 4) = 10;
    }
    *(ushort *)(param_1 + 0x33) = local_28;
    (*(code *)(PTR_LAB_004bea88 + 0x2ad8))(param_1,in_stack_00000018,local_24,0);
  }
  return;
}



// ==== InitX509 @ 0048315c size=344

void InitX509(undefined4 *param_1,undefined1 param_2)

{
  (*(code *)PTR_FUN_004beab0)(param_1 + 1,0);
  (*(code *)PTR_FUN_004beab0)(param_1 + 0x5b,0);
  *param_1 = 0;
  param_1[0x115] = 0;
  param_1[0x112] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  *(undefined1 *)(param_1 + 0x11a) = param_2;
  *(undefined1 *)((int)param_1 + 0x469) = 0;
  param_1[0x11b] = 0;
  *(undefined1 *)((int)param_1 + 0x472) = 0;
  *(undefined1 *)((int)param_1 + 0x473) = 0;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  *(undefined1 *)((int)param_1 + 0x475) = 0;
  *(undefined1 *)((int)param_1 + 0x476) = 0;
  *(undefined1 *)((int)param_1 + 0x477) = 0;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined1 *)((int)param_1 + 0x485) = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  *(undefined1 *)((int)param_1 + 0x491) = 0;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  return;
}



// ==== FreeX509 @ 004832b4 size=512

void FreeX509(int param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR_FUN_004beab4)(param_1 + 4);
    (*(code *)PTR_FUN_004beab4)(param_1 + 0x16c);
    if ((*(int *)(param_1 + 0x454) != 0) && (*(int *)(param_1 + 0x454) != 0)) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x454));
    }
    if (*(int *)(param_1 + 0x45c) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x45c));
    }
    if (*(int *)(param_1 + 0x448) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x448));
    }
    if (*(int *)(param_1 + 0x47c) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x47c));
    }
    if (*(int *)(param_1 + 0x488) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x488));
    }
    if (*(int *)(param_1 + 0x460) != 0) {
      (*(code *)PTR_FUN_004be97c)(*(undefined4 *)(param_1 + 0x460),0);
    }
    if ((*(char *)(param_1 + 0x468) != '\0') && (param_1 != 0)) {
      (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
    }
  }
  return;
}



// ==== FreeArrays @ 00483fe0 size=220

void FreeArrays(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x4f0) != 0) && (param_2 != 0)) {
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x4f4,*(int *)(param_1 + 0x4f0) + 0x40,0x20);
    *(undefined1 *)(param_1 + 0x514) = *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0x60);
  }
  if (*(int *)(param_1 + 0x4f0) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x4f0));
  }
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  return;
}



// ==== FreeHandshakeResources @ 004844ac size=428

void FreeHandshakeResources(int param_1)

{
  if (*(char *)(param_1 + 0x495) != '\0') {
    (*(code *)PTR_FUN_004beac8)(param_1,0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(char *)(param_1 + 0x31) == '\0') || (*(char *)(param_1 + 0x4d6) == '\0')) {
    (*(code *)PTR_FreeRng_004be8ac)(*(undefined4 *)(param_1 + 0x158));
    if (*(int *)(param_1 + 0x158) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x158));
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  if (*(char *)(param_1 + 0x4ef) != '\0') {
    (*(code *)PTR_FreeArrays_004be6a0)(param_1,1);
  }
  if (*(int *)(param_1 + 0x570) != 0) {
    (*(code *)PTR_FreeRsaKey_004be730)(*(undefined4 *)(param_1 + 0x570));
    if (*(int *)(param_1 + 0x570) != 0) {
      (*(code *)PTR_CyaSSL_Free_004be640)(*(int *)(param_1 + 0x570));
    }
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  return;
}



// ==== FreeSSL @ 00484658 size=160

void FreeSSL(undefined4 *param_1)

{
  (*(code *)PTR_FreeSSL_Ctx_004be664)(*param_1);
  (*(code *)PTR_SSL_ResourceFree_004bead0)(param_1);
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)PTR_CyaSSL_Free_004be640)(param_1);
  }
  return;
}



// ==== MakeSSLv3 @ 004846f8 size=72

undefined1 * MakeSSLv3(undefined1 *param_1)

{
  *param_1 = 3;
  param_1[1] = 0;
  return param_1;
}



// ==== LowResTimer @ 00484740 size=88

undefined4 LowResTimer(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_time_004beb8c)(0);
  return uVar1;
}



// ==== SendBuffered @ 00485028 size=572

undefined4 SendBuffered(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x158) == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7a2c);
    return 0xfffffecc;
  }
  do {
    while( true ) {
      if (param_1[0x126] == 0) {
        param_1[0x127] = 0;
        if (*(char *)((int)param_1 + 0x4ad) != '\0') {
          (*(code *)PTR_FUN_004beacc)(param_1);
        }
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x158))
                        (param_1,param_1[0x128] + param_1[0x127],param_1[0x126],param_1[0x55]);
      if (iVar1 < 0) break;
      if (param_1[0x126] < iVar1) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004be644 + 0x7a58);
        return 0xfffffe7d;
      }
      param_1[0x127] = param_1[0x127] + iVar1;
      param_1[0x126] = param_1[0x126] - iVar1;
    }
  } while (iVar1 == -4);
  if (iVar1 < -3) {
    if (iVar1 == -5) {
      *(undefined1 *)(param_1 + 0x136) = 1;
      return 0xfffffecc;
    }
  }
  else {
    if (iVar1 == -3) {
      *(undefined1 *)(param_1 + 0x136) = 1;
      return 0xfffffecc;
    }
    if (iVar1 == -2) {
      return 0xfffffeb9;
    }
  }
  return 0xfffffecc;
}



// ==== CopyDecodedToX509 @ 00486fdc size=2316

undefined4 CopyDecodedToX509(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    local_10 = 0xffffff53;
  }
  else {
    *param_1 = param_2[8] + 1;
    (*(code *)PTR_strncpy_004bebb4)(param_1[1],param_2 + 0x1c,0x100);
    *(undefined1 *)(param_1[1] + 0xff) = 0;
    iVar1 = (*(code *)PTR_strlen_004beb5c)(param_1[1]);
    param_1[0x43] = iVar1 + 1;
    if (param_2[0xcf] != 0) {
      (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x44,param_2 + 0xcf,0x5c);
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_2[0xd0]);
      param_1[0x44] = iVar1;
      if (param_1[0x44] != 0) {
        (*(code *)PTR_memcpy_004bebdc)(param_1[0x44],param_2[0xcf],param_2[0xd0]);
      }
    }
    (*(code *)PTR_strncpy_004bebb4)(param_1[0x5b],param_2 + 0x5c,0x100);
    *(undefined1 *)(param_1[0x5b] + 0xff) = 0;
    iVar1 = (*(code *)PTR_strlen_004beb5c)(param_1[0x5b]);
    param_1[0x9d] = iVar1 + 1;
    if (param_2[0xe6] != 0) {
      (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x9e,param_2 + 0xe6,0x5c);
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_2[0xe7]);
      param_1[0x9e] = iVar1;
      if (param_1[0x9e] != 0) {
        (*(code *)PTR_memcpy_004bebdc)(param_1[0x9e],param_2[0xe6],param_2[0xe7]);
      }
    }
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0xb6,param_2 + 0xa1,0x20);
    param_1[0xb5] = param_2[0xa9];
    if (param_2[0x19] < 0x100) {
      (*(code *)PTR_memcpy_004bebdc)(param_1 + 0xbe,param_2[0x18],param_2[0x19]);
      *(undefined1 *)((int)param_1 + param_2[0x19] + 0x2f8) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xbe) = 0;
    }
    iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x1f70))(param_2[0xca],0x20);
    if (iVar1 == 0) {
      param_1[0xfe] = 0;
    }
    else {
      param_1[0xfe] = iVar1;
      (*(code *)PTR_memcpy_004bebdc)(param_1 + 0xff,param_2[0xc9],iVar1);
    }
    iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x1f70))(param_2[0xcc],0x20);
    if (iVar1 == 0) {
      param_1[0x107] = 0;
    }
    else {
      param_1[0x107] = iVar1;
      (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x108,param_2[0xcb],iVar1);
    }
    if ((*param_2 != 0) && (param_2[1] != 0)) {
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_2[1]);
      param_1[0x115] = iVar1;
      if (param_1[0x115] == 0) {
        local_10 = 0xffffff83;
      }
      else {
        param_1[0x113] = param_2[7];
        param_1[0x114] = param_2[1];
        (*(code *)PTR_memcpy_004bebdc)(param_1[0x115],*param_2,param_2[1]);
      }
    }
    if ((param_2[0x17] != 0) && (param_2[5] != 0)) {
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_2[5]);
      param_1[0x112] = iVar1;
      if (param_1[0x112] == 0) {
        local_10 = 0xffffff83;
      }
      else {
        (*(code *)PTR_memcpy_004bebdc)(param_1[0x112],param_2[0x17],param_2[5]);
        param_1[0x111] = param_2[5];
        param_1[0x110] = param_2[6];
      }
    }
    iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_2[0x9f]);
    param_1[0x117] = iVar1;
    if (param_1[0x117] == 0) {
      local_10 = 0xffffff83;
    }
    else {
      (*(code *)PTR_memcpy_004bebdc)(param_1[0x117],param_2[0x9d],param_2[0x9f]);
      param_1[0x116] = param_2[0x9f];
    }
    param_1[0x118] = param_2[9];
    param_2[9] = 0;
    param_1[0x119] = param_1[0x118];
    *(undefined1 *)((int)param_1 + 0x469) = *(undefined1 *)((int)param_2 + 0x2ef);
    param_1[0x11b] = param_2[0xbf];
    *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)((int)param_2 + 0x2f2);
    *(undefined1 *)((int)param_1 + 0x472) = *(undefined1 *)((int)param_2 + 0x2f6);
    *(undefined1 *)((int)param_1 + 0x473) = *(undefined1 *)((int)param_2 + 0x2f7);
    *(char *)(param_1 + 0x11d) = (char)param_2[0xbe];
    *(char *)((int)param_1 + 0x475) = (char)param_2[0xc0];
    *(undefined1 *)((int)param_1 + 0x476) = *(undefined1 *)((int)param_2 + 0x301);
    *(undefined1 *)((int)param_1 + 0x477) = *(undefined1 *)((int)param_2 + 0x2ed);
    *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)((int)param_2 + 0x302);
    if ((param_2[0xc5] != 0) && (param_2[0xc6] != 0)) {
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_2[0xc6]);
      param_1[0x11f] = iVar1;
      if (param_1[0x11f] == 0) {
        local_10 = 0xffffff83;
      }
      else {
        (*(code *)PTR_memcpy_004bebdc)(param_1[0x11f],param_2[0xc5],param_2[0xc6]);
        param_1[0x120] = param_2[0xc6];
      }
    }
    *(char *)(param_1 + 0x121) = (char)param_2[0xb6];
    *(char *)((int)param_1 + 0x485) = (char)param_2[0xc1];
    if ((param_2[199] != 0) && (param_2[200] != 0)) {
      iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(param_2[200]);
      param_1[0x122] = iVar1;
      if (param_1[0x122] == 0) {
        local_10 = 0xffffff83;
      }
      else {
        (*(code *)PTR_memcpy_004bebdc)(param_1[0x122],param_2[199],param_2[200]);
        param_1[0x123] = param_2[200];
      }
    }
    *(char *)(param_1 + 0x124) = (char)param_2[0xbc];
    *(undefined1 *)((int)param_1 + 0x491) = *(undefined1 *)((int)param_2 + 0x305);
  }
  return local_10;
}



// ==== DoHandShakeMsgType @ 004892a4 size=976

int DoHandShakeMsgType(int param_1,int param_2,int *param_3,byte param_4,int param_5,uint param_6)

{
  int iVar1;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004bead8 + -0x7590);
  if (param_6 < (uint)(*param_3 + param_5)) {
    iVar1 = -0x136;
  }
  else {
    iVar1 = (*(code *)(PTR_LAB_004beab8 + -0x75c0))(param_1,param_4);
    if (iVar1 == 0) {
      if ((param_4 == 0) ||
         (iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x4914))(param_1,param_2 + *param_3,param_5),
         iVar1 == 0)) {
        if ((*(char *)(param_1 + 0x4ca) == '\n') && (param_4 != 0)) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x7544);
          (*(code *)PTR_SendAlert_004be690)(param_1,2,10);
          iVar1 = -0x175;
        }
        else if ((((*(char *)(param_1 + 0x4cc) == '\x01') && (*(char *)(param_1 + 0x4d7) == '\0'))
                 && (*(char *)(param_1 + 0x4c8) == '\0')) && (param_4 != 2)) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x7518);
          (*(code *)PTR_SendAlert_004be690)(param_1,2,10);
          iVar1 = -0x175;
        }
        else if ((((*(char *)(param_1 + 0x4cc) == '\x01') && (*(char *)(param_1 + 0x4d7) != '\0'))
                 && (param_4 == 0xe)) && (*(byte *)(param_1 + 0x4c8) < 2)) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x74f0);
          (*(code *)PTR_SendAlert_004be690)(param_1,2,10);
          iVar1 = -0x175;
        }
        else if (((*(char *)(param_1 + 0x4cc) == '\0') && (*(char *)(param_1 + 0x4c9) == '\0')) &&
                (param_4 != 1)) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x74b8);
          (*(code *)PTR_SendAlert_004be690)(param_1,2,10);
          iVar1 = -0x175;
        }
        else {
          if (param_4 < 0x15) {
                    /* WARNING: Could not recover jumptable at 0x00489604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar1 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004bead8 + (uint)param_4 * 4 + -0x7320)))()
            ;
            return iVar1;
          }
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x7358);
          (*(code *)PTR_FUN_004be660)(PTR_DAT_004bead8 + -0x7338,0xfffffecd);
          iVar1 = -0x133;
        }
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x757c);
    }
  }
  return iVar1;
}



// ==== ProcessReply @ 0048b668 size=2700

int ProcessReply(int param_1)

{
  byte bVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_10 [2];
  
  local_20 = 0;
  local_1c = 0;
  if (((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == -0x143)) ||
     (*(int *)(param_1 + 4) == -0x147)) {
LAB_0048b6fc:
    bVar1 = *(byte *)(param_1 + 0x4e9);
    if (bVar1 == 2) {
LAB_0048b7a4:
      iVar2 = (*(code *)(PTR_LAB_004bea88 + 0x57a4))
                        (param_1,*(undefined4 *)(param_1 + 0x488),param_1 + 0x484,param_1 + 0x580,
                         param_1 + 0x586);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined1 *)(param_1 + 0x4e9) = 3;
      local_20 = 0;
LAB_0048b818:
      if ((*(char *)(param_1 + 0x4d7) == '\0') &&
         (local_20 = (*(code *)(PTR_LAB_004beab8 + -0x4fac))
                               (param_1,*(undefined2 *)(param_1 + 0x586)), local_20 < 0)) {
        return local_20;
      }
      *(undefined1 *)(param_1 + 0x4e9) = 4;
      local_1c = *(int *)(param_1 + 0x484);
    }
    else {
      if (bVar1 < 3) {
        if (bVar1 != 0) {
LAB_0048c0a8:
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6fdc);
          return -0x12d;
        }
        if ((*(char *)(param_1 + 0x4d7) == '\0') &&
           (iVar2 = (*(code *)(PTR_LAB_004beab8 + -0x4fac))(param_1,5), iVar2 < 0)) {
          return iVar2;
        }
        goto LAB_0048b7a4;
      }
      if (bVar1 == 3) goto LAB_0048b818;
      if (bVar1 != 4) goto LAB_0048c0a8;
    }
    if ((*(char *)(param_1 + 0x130) != '\0') && (*(char *)(param_1 + 0x131) == '\0')) {
      iVar2 = (*(code *)(PTR_LAB_004beab8 + -0x6150))(param_1,*(undefined2 *)(param_1 + 0x586));
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (*(code *)(PTR_LAB_004beab8 + -0x62dc))
                        (param_1,*(int *)(param_1 + 0x488) + *(int *)(param_1 + 0x484),
                         *(int *)(param_1 + 0x488) + *(int *)(param_1 + 0x484),
                         *(undefined2 *)(param_1 + 0x586));
      if (iVar2 < 0) {
        (*(code *)PTR_FUN_004be694)(iVar2);
        return -0x138;
      }
      if ((*(char *)(param_1 + 0x4d6) != '\0') && (*(char *)(param_1 + 0x31) == '\x01')) {
        *(uint *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + (uint)*(ushort *)(param_1 + 0x3c);
      }
      if ((*(char *)(param_1 + 0x31) == '\x02') && (*(char *)(param_1 + 0x30) != '\n')) {
        *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + 8;
      }
      local_20 = (*(code *)(PTR_LAB_004beab8 + -0x4d6c))
                           (param_1,*(int *)(param_1 + 0x488) + *(int *)(param_1 + 0x484),
                            *(undefined2 *)(param_1 + 0x586),*(undefined1 *)(param_1 + 0x580),
                            param_1 + 300);
      if (local_20 < 0) {
        (*(code *)PTR_FUN_004be694)(local_20);
        return -0x138;
      }
      *(uint *)(param_1 + 0x128) = (uint)*(ushort *)(param_1 + 0x586);
      *(undefined1 *)(param_1 + 0x131) = 1;
    }
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x70d4);
    bVar1 = *(byte *)(param_1 + 0x580);
    if (bVar1 == 0x15) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x7048);
      local_20 = (*(code *)(PTR_LAB_004beab8 + -0x517c))
                           (param_1,*(undefined4 *)(param_1 + 0x488),param_1 + 0x484,local_10,
                            *(undefined4 *)(param_1 + 0x480));
      if (local_20 == 2) {
        return -0x139;
      }
      if (local_20 < 0) {
        return local_20;
      }
      if (local_10[0] == 0) {
        *(undefined4 *)(param_1 + 4) = 0xfffffea9;
        return *(int *)(param_1 + 4);
      }
      if (local_10[0] == 0x33) {
        return -0x139;
      }
    }
    else {
      if (bVar1 < 0x16) {
        if (bVar1 != 0x14) {
LAB_0048bf88:
          (*(code *)PTR_FUN_004be694)(0xfffffec9);
          return -0x137;
        }
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x70b8);
        iVar2 = (*(code *)(PTR_LAB_004beab8 + -0x75c0))(param_1,0x37);
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((*(char *)(param_1 + 0x130) != '\0') && (*(char *)(param_1 + 0x4cb) != '\0')) {
          *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + *(int *)(param_1 + 300);
          *(short *)(param_1 + 0x586) =
               *(short *)(param_1 + 0x586) - (short)*(undefined4 *)(param_1 + 0x484);
        }
        if (*(short *)(param_1 + 0x586) != 1) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x70a0);
          return -0x155;
        }
        if ((((*(char *)(param_1 + 0x4cc) == '\0') && (*(char *)(param_1 + 0x4cd) != '\0')) &&
            (*(char *)(param_1 + 0x4e4) != '\0')) && (*(char *)(param_1 + 0x4e5) == '\0')) {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x7078);
          return -0x17a;
        }
        *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + 1;
        *(undefined1 *)(param_1 + 0x130) = 1;
        iVar2 = (*(code *)PTR_SetKeysSide_004beae4)(param_1,2);
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((*(char *)(param_1 + 0x4d3) == '\0') || (*(char *)(param_1 + 0x4cc) != '\x01')) {
          local_20 = 0;
          if ((*(char *)(param_1 + 0x4d3) == '\0') && (*(char *)(param_1 + 0x4cc) == '\0')) {
            local_20 = (*(code *)(PTR_LAB_004bea88 + 0x5dfc))
                                 (param_1,param_1 + 0x358,PTR_DAT_004be644 + 0x7820);
          }
        }
        else {
          local_20 = (*(code *)(PTR_LAB_004bea88 + 0x5dfc))
                               (param_1,param_1 + 0x358,PTR_DAT_004be644 + 0x7824);
        }
      }
      else {
        if (bVar1 != 0x16) {
          if (bVar1 != 0x17) goto LAB_0048bf88;
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x7058);
          local_20 = (*(code *)PTR_FUN_004beae8)
                               (param_1,*(undefined4 *)(param_1 + 0x488),param_1 + 0x484);
          if (local_20 != 0) {
            (*(code *)PTR_FUN_004be694)(local_20);
            return local_20;
          }
          goto LAB_0048bfac;
        }
        if (*(char *)(param_1 + 0x4d7) == '\0') {
          local_20 = (*(code *)(PTR_LAB_004beab8 + -0x65f8))
                               (param_1,*(undefined4 *)(param_1 + 0x488),param_1 + 0x484,
                                *(undefined4 *)(param_1 + 0x480));
        }
      }
      if (local_20 != 0) {
        return local_20;
      }
    }
LAB_0048bfac:
    *(undefined1 *)(param_1 + 0x4e9) = 0;
    if (*(int *)(param_1 + 0x484) != *(int *)(param_1 + 0x480)) {
      if ((uint)(*(int *)(param_1 + 0x484) - local_1c) < (uint)*(ushort *)(param_1 + 0x586)) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x703c);
        *(undefined1 *)(param_1 + 0x4e9) = 4;
        if (*(char *)(param_1 + 0x130) != '\0') {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x7024);
          *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) - *(int *)(param_1 + 300);
        }
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6ff4);
        *(undefined1 *)(param_1 + 0x4e9) = 0;
      }
      goto LAB_0048b6fc;
    }
    iVar2 = 0;
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x7104);
    iVar2 = *(int *)(param_1 + 4);
  }
  return iVar2;
}



// ==== SendChangeCipher @ 0048c0f4 size=480

int SendChangeCipher(int param_1)

{
  int iVar1;
  int local_20;
  undefined1 local_c [4];
  
  local_20 = 6;
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(char *)(param_1 + 0x4cb) != '\0')) {
    local_20 = 0x6c;
  }
  iVar1 = (*(code *)PTR_FUN_004beaec)(param_1,local_20);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
    (*(code *)(PTR_LAB_004bea88 + 0x4a84))(iVar1,1,0x14,param_1);
    *(undefined1 *)(iVar1 + 5) = 1;
    if ((*(char *)(param_1 + 0x130) != '\0') && (*(char *)(param_1 + 0x4cb) != '\0')) {
      local_c[0] = 1;
      local_20 = (*(code *)(PTR_LAB_004beab8 + -0x324c))(param_1,iVar1,local_20,local_c,1,0x14);
      if (local_20 < 0) {
        return local_20;
      }
    }
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_20;
    if (*(char *)(param_1 + 0x4ed) == '\0') {
      iVar1 = (*(code *)PTR_SendBuffered_004be768)(param_1);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



// ==== SendFinished @ 0048d248 size=868

int SendFinished(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [48];
  
  if (*(char *)(param_1 + 0x4d5) == '\0') {
    iVar3 = 0x24;
  }
  else {
    iVar3 = 0xc;
  }
  iVar1 = (*(code *)PTR_SetKeysSide_004beae4)(param_1,1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (*(code *)PTR_FUN_004beaec)(param_1,0x96);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x4a0);
  iVar4 = *(int *)(param_1 + 0x498);
  (*(code *)(PTR_LAB_004bea88 + 0x4b48))(auStack_3c,iVar3,0x14,param_1);
  if (*(char *)(param_1 + 0x4cc) == '\x01') {
    puVar5 = PTR_DAT_004be644 + 0x7820;
  }
  else {
    puVar5 = PTR_DAT_004be644 + 0x7824;
  }
  iVar2 = (*(code *)(PTR_LAB_004bea88 + 0x5dfc))(param_1,auStack_38,puVar5);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar3 = (*(code *)(PTR_LAB_004beab8 + -0x324c))
                    (param_1,iVar1 + iVar4,0x96,auStack_3c,iVar3 + 4,0x16);
  if (iVar3 < 0) {
    return -0x140;
  }
  if (*(char *)(param_1 + 0x4d3) == '\0') {
    (*(code *)PTR_FUN_004beaf0)(param_1);
    if (*(char *)(param_1 + 0x4cc) != '\x01') {
      *(undefined1 *)(param_1 + 0x4ca) = 10;
      *(undefined1 *)(param_1 + 0x4cb) = 1;
      goto LAB_0048d55c;
    }
    iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x5dfc))
                      (param_1,param_1 + 0x358,PTR_DAT_004be644 + 0x7824);
  }
  else {
    if (*(char *)(param_1 + 0x4cc) == '\x01') {
      *(undefined1 *)(param_1 + 0x4ca) = 10;
      *(undefined1 *)(param_1 + 0x4cb) = 1;
      goto LAB_0048d55c;
    }
    iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x5dfc))
                      (param_1,param_1 + 0x358,PTR_DAT_004be644 + 0x7820);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_0048d55c:
  *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + iVar3;
  iVar3 = (*(code *)PTR_SendBuffered_004be768)(param_1);
  return iVar3;
}



// ==== SendCertificate @ 0048d5ac size=1144

int SendCertificate(int param_1)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if ((*(char *)(param_1 + 0x4e6) == '\0') && (*(char *)(param_1 + 0x4e7) == '\0')) {
    if (*(char *)(param_1 + 0x4d2) == '\x02') {
      local_24 = 0;
      local_2c = 3;
      local_20 = 0;
    }
    else {
      local_24 = *(int *)(param_1 + 0x440);
      local_2c = local_24 + 6;
      local_20 = local_24 + 3;
      if (*(int *)(param_1 + 0x454) != 0) {
        local_2c = *(int *)(param_1 + 0x450) + local_2c;
        local_20 = local_20 + *(int *)(param_1 + 0x450);
      }
    }
    local_30 = local_2c + 9;
    if (*(char *)(param_1 + 0x130) != '\0') {
      local_30 = local_2c + 0x6f;
    }
    iVar2 = (*(code *)PTR_FUN_004beaec)(param_1,local_30);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
      (*(code *)(PTR_LAB_004bea88 + 0x4bcc))(iVar2,local_2c,0xb,param_1);
      (*(code *)PTR_c32to24_004be70c)(local_20,iVar2 + 9);
      local_28 = 0xc;
      if (local_24 != 0) {
        (*(code *)PTR_c32to24_004be70c)(local_24,iVar2 + 0xc);
        (*(code *)PTR_memcpy_004bebdc)(iVar2 + 0xf,*(undefined4 *)(param_1 + 0x444),local_24);
        local_28 = local_24 + 0xf;
        if (*(int *)(param_1 + 0x454) != 0) {
          (*(code *)PTR_memcpy_004bebdc)
                    (iVar2 + local_28,*(undefined4 *)(param_1 + 0x454),
                     *(undefined4 *)(param_1 + 0x450));
          local_28 = local_28 + *(int *)(param_1 + 0x450);
        }
      }
      if (*(char *)(param_1 + 0x130) == '\0') {
        iVar2 = (*(code *)(PTR_LAB_004bea88 + 0x4798))(param_1,iVar2,local_30,0);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        local_28 = local_28 + -5;
        iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(local_28);
        if (iVar1 == 0) {
          return -0x7d;
        }
        (*(code *)PTR_memcpy_004bebdc)(iVar1,iVar2 + 5,local_28);
        local_30 = (*(code *)(PTR_LAB_004beab8 + -0x324c))
                             (param_1,iVar2,local_30,iVar1,local_28,0x16);
        if (iVar1 != 0) {
          (*(code *)PTR_CyaSSL_Free_004be640)(iVar1);
        }
        if (local_30 < 0) {
          return local_30;
        }
      }
      if (*(char *)(param_1 + 0x4cc) == '\0') {
        *(undefined1 *)(param_1 + 0x4c8) = 3;
      }
      *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_30;
      if (*(char *)(param_1 + 0x4ed) == '\0') {
        iVar2 = (*(code *)PTR_SendBuffered_004be768)(param_1);
      }
      else {
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// ==== SendCertificateRequest @ 0048da24 size=792

int SendCertificateRequest(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  local_1c = 4;
  iVar1 = (*(code *)PTR_IsAtLeastTLSv1_2_004be90c)(param_1);
  if (iVar1 != 0) {
    local_1c = *(ushort *)(*(int *)(param_1 + 0xc) + 0xee) + 6;
  }
  if ((*(char *)(param_1 + 0x4e6) == '\0') && (*(char *)(param_1 + 0x4e7) == '\0')) {
    iVar2 = local_1c + 9;
    iVar1 = (*(code *)PTR_FUN_004beaec)(param_1,iVar2);
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
      (*(code *)(PTR_LAB_004bea88 + 0x4bcc))(iVar3,local_1c,0xd,param_1);
      *(undefined1 *)(iVar3 + 9) = 1;
      local_20 = 0xb;
      *(undefined1 *)(iVar3 + 10) = 1;
      iVar1 = (*(code *)PTR_IsAtLeastTLSv1_2_004be90c)(param_1);
      if (iVar1 != 0) {
        (*(code *)(PTR_LAB_004bea88 + 0x2108))
                  (*(undefined2 *)(*(int *)(param_1 + 0xc) + 0xee),iVar3 + 0xb);
        (*(code *)PTR_memcpy_004bebdc)
                  (iVar3 + 0xd,*(int *)(param_1 + 0xc) + 0xce,
                   *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xee));
        local_20 = *(ushort *)(*(int *)(param_1 + 0xc) + 0xee) + 0xd;
      }
      (*(code *)(PTR_LAB_004bea88 + 0x2108))(0,iVar3 + local_20);
      iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x4798))(param_1,iVar3,iVar2,0);
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + iVar2;
        if (*(char *)(param_1 + 0x4ed) == '\0') {
          iVar1 = (*(code *)PTR_SendBuffered_004be768)(param_1);
        }
        else {
          iVar1 = 0;
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// ==== SendData @ 0048dd3c size=1096

int SendData(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_30;
  
  local_30 = 0;
  if (*(int *)(param_1 + 4) == -0x147) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 0x4ca) != '\n') {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6f84);
    iVar1 = (*(code *)PTR_CyaSSL_negotiate_004beaf4)(param_1);
    if (iVar1 != 1) {
      return iVar1;
    }
  }
  if (*(int *)(param_1 + 0x498) != 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6f58);
    uVar2 = (*(code *)PTR_SendBuffered_004be768)(param_1);
    *(undefined4 *)(param_1 + 4) = uVar2;
    if (*(int *)(param_1 + 4) < 0) {
      (*(code *)PTR_FUN_004be694)(*(undefined4 *)(param_1 + 4));
      if ((*(int *)(param_1 + 4) == -0x134) && (*(char *)(param_1 + 0x4d8) != '\0')) {
        return 0;
      }
      return *(int *)(param_1 + 4);
    }
    local_30 = *(int *)(param_1 + 0x4b8) + *(int *)(param_1 + 0x4bc);
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6f28);
    if (param_3 < local_30) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6f0c);
      *(undefined4 *)(param_1 + 4) = 0xffffff53;
      return *(int *)(param_1 + 4);
    }
  }
  while( true ) {
    iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x1f70))(param_3 - local_30,0x4000);
    if (local_30 == param_3) {
      return local_30;
    }
    iVar3 = (*(code *)PTR_FUN_004beaec)(param_1,iVar1 + 0x66);
    if (iVar3 != 0) {
      *(int *)(param_1 + 4) = iVar3;
      return *(int *)(param_1 + 4);
    }
    iVar3 = (*(code *)(PTR_LAB_004beab8 + -0x324c))
                      (param_1,*(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498),iVar1 + 0x66,
                       param_2 + local_30,iVar1,0x17);
    if (iVar3 < 0) {
      return -0x140;
    }
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + iVar3;
    iVar3 = (*(code *)PTR_SendBuffered_004be768)(param_1);
    if (iVar3 < 0) break;
    local_30 = local_30 + iVar1;
    if (*(char *)(param_1 + 0x4ea) == '\x01') {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6edc);
      return local_30;
    }
  }
  (*(code *)PTR_FUN_004be694)(iVar3);
  *(int *)(param_1 + 0x4bc) = iVar1;
  *(int *)(param_1 + 0x4b8) = local_30;
  if ((iVar3 == -0x134) && (*(char *)(param_1 + 0x4d8) != '\0')) {
    return 0;
  }
  *(int *)(param_1 + 4) = iVar3;
  return *(int *)(param_1 + 4);
}



// ==== ReceiveData @ 0048e184 size=844

int ReceiveData(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004bead8 + -0x6eb0);
  if (*(int *)(param_1 + 4) == -0x143) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == -0x147)) {
    if (*(char *)(param_1 + 0x4ca) != '\n') {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6e68);
      iVar2 = (*(code *)PTR_CyaSSL_negotiate_004beaf4)(param_1);
      if (iVar2 != 1) {
        return iVar2;
      }
    }
    do {
      if (*(int *)(param_1 + 0x4b0) != 0) {
        local_10 = param_3;
        if (*(int *)(param_1 + 0x4b0) <= param_3) {
          local_10 = *(int *)(param_1 + 0x4b0);
        }
        (*(code *)PTR_memcpy_004bebdc)(param_2,*(undefined4 *)(param_1 + 0x4b4),local_10);
        if (param_4 == 0) {
          *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) - local_10;
          *(int *)(param_1 + 0x4b4) = *(int *)(param_1 + 0x4b4) + local_10;
        }
        if ((*(int *)(param_1 + 0x4b0) == 0) && (*(char *)(param_1 + 0x495) != '\0')) {
          (*(code *)PTR_FUN_004beac8)(param_1,0);
        }
        (*(code *)PTR_FUN_004be660)(PTR_DAT_004bead8 + -0x6eb0,local_10);
        return local_10;
      }
      uVar1 = (*(code *)PTR_ProcessReply_004be770)(param_1);
      *(undefined4 *)(param_1 + 4) = uVar1;
    } while (-1 < *(int *)(param_1 + 4));
    (*(code *)PTR_FUN_004be694)(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 4) == -0x157) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6e3c);
      iVar2 = 0;
    }
    else if ((*(int *)(param_1 + 4) == -0x134) &&
            ((*(char *)(param_1 + 0x4d8) != '\0' || (*(char *)(param_1 + 0x4d9) != '\0')))) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6e18);
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
    }
  }
  else {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x6ea0);
    iVar2 = *(int *)(param_1 + 4);
  }
  return iVar2;
}



// ==== SendAlert @ 0048e4d0 size=592

int SendAlert(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  undefined1 local_c;
  undefined1 local_b;
  
  if (*(char *)(param_1 + 0x4e8) == '\0') {
    iVar1 = (*(code *)PTR_FUN_004beaec)(param_1,0x68);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
      local_c = (undefined1)param_2;
      local_b = (undefined1)param_3;
      *(undefined4 *)(param_1 + 0xa38) = param_3;
      *(int *)(param_1 + 0xa3c) = param_2;
      if (param_2 == 2) {
        *(undefined1 *)(param_1 + 0x4d9) = 1;
      }
      if ((*(char *)(param_1 + 0x130) == '\0') || (*(char *)(param_1 + 0x4cb) == '\0')) {
        (*(code *)(PTR_LAB_004bea88 + 0x4a84))(iVar1,2,0x15,param_1);
        *(undefined1 *)(iVar1 + 5) = local_c;
        *(undefined1 *)(iVar1 + 6) = local_b;
        local_20 = 7;
      }
      else {
        local_20 = (*(code *)(PTR_LAB_004beab8 + -0x324c))(param_1,iVar1,0x68,&local_c,2,0x15);
      }
      if (local_20 < 0) {
        iVar1 = -0x140;
      }
      else {
        *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_20;
        *(undefined1 *)(param_1 + 0x4e8) = 1;
        iVar1 = (*(code *)PTR_SendBuffered_004be768)(param_1);
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_SendBuffered_004be768)(param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x4e8) = 0;
    }
  }
  return iVar1;
}



// ==== SetErrorString @ 0048edc8 size=128

void SetErrorString(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_CyaSSL_ERR_reason_error_string_004beafc)(param_1);
  (*(code *)PTR_strncpy_004bebb4)(param_2,uVar1,0x50);
  return;
}



// ==== GetCipherNames @ 0048ee48 size=56

undefined * GetCipherNames(void)

{
  return PTR_clock_gettime_004be64c + -0x1ce8;
}



// ==== GetCipherNamesSize @ 0048ee80 size=40

undefined4 GetCipherNamesSize(void)

{
  return 7;
}



// ==== SetCipherList @ 0048eea8 size=1192

int SetCipherList(undefined4 *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  char *local_5c;
  int local_58;
  undefined1 auStack_48 [60];
  
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  iVar1 = (*(code *)PTR_GetCipherNamesSize_004be674)();
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (char *)0x0)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5b74);
    local_70 = 0;
  }
  else if ((*param_2 == '\0') ||
          (iVar2 = (*(code *)PTR_strncmp_004bebb8)(param_2,PTR_DAT_004bead8 + -0x5b54,3),
          local_5c = param_2, iVar2 == 0)) {
    local_70 = 1;
  }
  else {
    do {
      iVar2 = (*(code *)PTR_strchr_004beb54)(local_5c,0x3a);
      if (iVar2 == 0) {
        iVar3 = (*(code *)PTR_strlen_004beb5c)(local_5c);
      }
      else {
        iVar3 = iVar2 - (int)local_5c;
      }
      iVar3 = (*(code *)(PTR_LAB_004bea88 + 0x1f70))(0x31,iVar3);
      (*(code *)PTR_strncpy_004bebb4)(auStack_48,local_5c,iVar3);
      if (iVar3 == 0x31) {
        iVar3 = 0x30;
      }
      auStack_48[iVar3] = 0;
      for (local_58 = 0; local_58 < iVar1; local_58 = local_58 + 1) {
        iVar3 = (*(code *)PTR_strncmp_004bebb8)
                          (auStack_48,
                           *(undefined4 *)(PTR_clock_gettime_004be64c + local_58 * 4 + -0x1ce8),0x31
                          );
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_strstr_004bebc0)(auStack_48,PTR_DAT_004bead8 + -0x5b50);
          if (iVar3 == 0) {
            iVar3 = (*(code *)PTR_strstr_004bebc0)(auStack_48,PTR_DAT_004bead8 + -0x5b48);
            if (iVar3 == 0) {
              iVar3 = (*(code *)PTR_strstr_004bebc0)(auStack_48,PTR_DAT_004bead8 + -0x5b44);
              if (iVar3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = 0xc0;
              }
            }
            else {
              uVar4 = 0xc0;
            }
          }
          else {
            uVar4 = 0xcc;
          }
          *(undefined1 *)((int)param_1 + local_6c + 4) = uVar4;
          *(char *)((int)param_1 + local_6c + 5) =
               (char)*(undefined4 *)(PTR_clock_gettime_004be64c + local_58 * 4 + -0x1a60);
          if ((local_64 == 0) &&
             (iVar3 = (*(code *)PTR_strstr_004bebc0)(auStack_48,PTR_DAT_004bead8 + -0x5b40),
             iVar3 != 0)) {
            local_64 = 1;
          }
          else {
            iVar3 = (*(code *)PTR_strstr_004bebc0)(auStack_48,PTR_DAT_004bead8 + -0x5b38);
            if (iVar3 == 0) {
              if ((local_68 == 0) &&
                 (iVar3 = (*(code *)PTR_strstr_004bebc0)(auStack_48,PTR_DAT_004bead8 + -0x5b34),
                 iVar3 == 0)) {
                local_68 = 1;
              }
            }
            else {
              local_60 = 1;
            }
          }
          local_70 = 1;
          local_6c = local_6c + 2;
          break;
        }
      }
      local_5c = (char *)(iVar2 + 1);
    } while (iVar2 != 0);
    if (local_70 != 0) {
      *param_1 = 1;
      *(short *)(param_1 + 0x33) = (short)local_6c;
      (*(code *)(PTR_LAB_004bea88 + 0x2ad8))(param_1,local_64,local_68,local_60);
    }
  }
  return local_70;
}



// ==== SendClientHello @ 0048f480 size=1928

int SendClientHello(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0x4d3) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + 0x514);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5b30);
    iVar4 = -0x173;
  }
  else {
    local_30 = *(ushort *)(*(int *)(param_1 + 0xc) + 0xcc) + uVar3 + 0x27;
    iVar4 = (*(code *)PTR_IsAtLeastTLSv1_2_004be90c)(param_1);
    if ((iVar4 != 0) && (*(short *)(*(int *)(param_1 + 0xc) + 0xee) != 0)) {
      local_30 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0xee) + local_30 + 8;
    }
    local_28 = local_30 + 9;
    if (*(char *)(param_1 + 0x130) != '\0') {
      local_28 = local_30 + 0x6f;
    }
    iVar4 = (*(code *)PTR_FUN_004beaec)(param_1,local_28);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
      (*(code *)(PTR_LAB_004bea88 + 0x4bcc))(iVar4,local_30,1,param_1);
      *(undefined1 *)(iVar4 + 9) = *(undefined1 *)(param_1 + 8);
      *(undefined1 *)(iVar4 + 10) = *(undefined1 *)(param_1 + 9);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 8);
      if (*(char *)(param_1 + 0x4dc) == '\0') {
        iVar1 = (*(code *)PTR_RNG_GenerateBlock_004be63c)
                          (*(undefined4 *)(param_1 + 0x158),iVar4 + 0xb,0x20);
        if (iVar1 != 0) {
          return iVar1;
        }
        (*(code *)PTR_memcpy_004bebdc)(*(undefined4 *)(param_1 + 0x4f0),iVar4 + 0xb,0x20);
      }
      local_2c = 0x2c;
      *(char *)(iVar4 + 0x2b) = (char)uVar3;
      if (uVar3 != 0) {
        (*(code *)PTR_memcpy_004bebdc)
                  (iVar4 + 0x2c,param_1 + 0x4f4,*(undefined1 *)(param_1 + 0x514));
        local_2c = *(byte *)(param_1 + 0x514) + 0x2c;
      }
      (*(code *)(PTR_LAB_004bea88 + 0x2108))
                (*(undefined2 *)(*(int *)(param_1 + 0xc) + 0xcc),iVar4 + local_2c);
      (*(code *)PTR_memcpy_004bebdc)
                (iVar4 + local_2c + 2,*(int *)(param_1 + 0xc) + 4,
                 *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xcc));
      iVar1 = local_2c + 2 + (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0xcc);
      *(undefined1 *)(iVar4 + iVar1) = 1;
      if (*(char *)(param_1 + 0x4de) == '\0') {
        *(undefined1 *)(iVar4 + iVar1 + 1) = 0;
      }
      else {
        *(undefined1 *)(iVar4 + iVar1 + 1) = 0xdd;
      }
      local_2c = iVar1 + 2;
      iVar2 = (*(code *)PTR_IsAtLeastTLSv1_2_004be90c)(param_1);
      if ((iVar2 != 0) && (*(short *)(*(int *)(param_1 + 0xc) + 0xee) != 0)) {
        (*(code *)(PTR_LAB_004bea88 + 0x2108))
                  (*(short *)(*(int *)(param_1 + 0xc) + 0xee) + 6,iVar4 + local_2c);
        (*(code *)(PTR_LAB_004bea88 + 0x2108))(0xd,iVar4 + iVar1 + 4);
        (*(code *)(PTR_LAB_004bea88 + 0x2108))
                  (*(short *)(*(int *)(param_1 + 0xc) + 0xee) + 2,iVar4 + iVar1 + 6);
        (*(code *)(PTR_LAB_004bea88 + 0x2108))
                  (*(undefined2 *)(*(int *)(param_1 + 0xc) + 0xee),iVar4 + iVar1 + 8);
        local_2c = iVar1 + 10;
        for (local_24 = 0; local_24 < (int)(uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0xee);
            local_24 = local_24 + 1) {
          *(undefined1 *)(iVar4 + local_2c) =
               *(undefined1 *)(*(int *)(param_1 + 0xc) + local_24 + 0xce);
          local_2c = local_2c + 1;
        }
      }
      if (*(char *)(param_1 + 0x130) == '\0') {
        iVar4 = (*(code *)(PTR_LAB_004bea88 + 0x4798))(param_1,iVar4,local_28,0);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else {
        local_2c = local_2c + -5;
        iVar1 = (*(code *)PTR_CyaSSL_Malloc_004be634)(local_2c);
        if (iVar1 == 0) {
          return -0x7d;
        }
        (*(code *)PTR_memcpy_004bebdc)(iVar1,iVar4 + 5,local_2c);
        local_28 = (*(code *)(PTR_LAB_004beab8 + -0x324c))
                             (param_1,iVar4,local_28,iVar1,local_2c,0x16);
        if (iVar1 != 0) {
          (*(code *)PTR_CyaSSL_Free_004be640)(iVar1);
        }
        if (local_28 < 0) {
          return local_28;
        }
      }
      *(undefined1 *)(param_1 + 0x4c9) = 7;
      *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_28;
      iVar4 = (*(code *)PTR_SendBuffered_004be768)(param_1);
    }
  }
  return iVar4;
}



// ==== VerifyClientSuite @ 00490480 size=260

bool VerifyClientSuite(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x4c6);
  uVar2 = *(undefined1 *)(param_1 + 0x4c7);
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004bead8 + -0x5988);
  iVar3 = (*(code *)(PTR_LAB_004bea88 + 0x607c))(uVar1,uVar2,4);
  if (iVar3 != 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5974);
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5964);
  }
  return iVar3 == 0;
}



// ==== SendClientKeyExchange @ 00490a2c size=1420

uint SendClientKeyExchange(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_238;
  int local_234;
  uint local_230;
  uint local_22c;
  int local_228;
  undefined1 auStack_20c [516];
  
  local_238 = 0;
  if (*(char *)(param_1 + 0x33) == '\x01') {
    local_230 = (*(code *)PTR_RNG_GenerateBlock_004be63c)
                          (*(undefined4 *)(param_1 + 0x158),*(int *)(param_1 + 0x4f0) + 0x61,0x30);
    if (local_230 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0x61) = *(undefined1 *)(param_1 + 10);
      *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0x62) = *(undefined1 *)(param_1 + 0xb);
      *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x294) = 0x30;
      if (*(char *)(param_1 + 0x574) == '\0') {
        local_230 = 0xfffffec4;
      }
      else {
        uVar1 = (*(code *)PTR_RsaPublicEncrypt_004beb0c)
                          (*(int *)(param_1 + 0x4f0) + 0x61,0x30,auStack_20c,0x200,
                           *(undefined4 *)(param_1 + 0x570),*(undefined4 *)(param_1 + 0x158));
        local_230 = uVar1;
        if (0 < (int)uVar1) {
          local_230 = 0;
          local_238 = uVar1;
        }
        if (local_230 == 0) {
          local_228 = 0;
          if ((*(char *)(param_1 + 0x4d5) != '\0') || (*(char *)(param_1 + 0x33) == '\x02')) {
            local_228 = 2;
          }
          if ((*(char *)(param_1 + 0x33) == '\a') || (*(char *)(param_1 + 0x33) == '\x05')) {
            local_228 = 0;
          }
          local_22c = local_238 + local_228 + 9;
          local_234 = 9;
          if (*(char *)(param_1 + 0x130) != '\0') {
            local_22c = local_238 + local_228 + 0x6f;
          }
          uVar1 = (*(code *)PTR_FUN_004beaec)(param_1,local_22c);
          if (uVar1 != 0) {
            return uVar1;
          }
          iVar3 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
          (*(code *)(PTR_LAB_004bea88 + 0x4bcc))(iVar3,local_238 + local_228,0x10,param_1);
          if (local_228 != 0) {
            (*(code *)(PTR_LAB_004bea88 + 0x2108))(local_238 & 0xffff,iVar3 + 9);
            local_234 = 0xb;
          }
          (*(code *)PTR_memcpy_004bebdc)(iVar3 + local_234,auStack_20c,local_238);
          if (*(char *)(param_1 + 0x130) == '\0') {
            uVar1 = (*(code *)(PTR_LAB_004bea88 + 0x4798))(param_1,iVar3,local_22c,0);
            if (uVar1 != 0) {
              return uVar1;
            }
          }
          else {
            iVar4 = local_234 + local_238 + -5;
            iVar2 = (*(code *)PTR_CyaSSL_Malloc_004be634)(iVar4);
            if (iVar2 == 0) {
              return 0xffffff83;
            }
            (*(code *)PTR_memcpy_004bebdc)(iVar2,iVar3 + 5,iVar4);
            local_22c = (*(code *)(PTR_LAB_004beab8 + -0x324c))
                                  (param_1,iVar3,local_22c,iVar2,iVar4,0x16);
            if (iVar2 != 0) {
              (*(code *)PTR_CyaSSL_Free_004be640)(iVar2);
            }
            if ((int)local_22c < 0) {
              return local_22c;
            }
          }
          *(uint *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_22c;
          if (*(char *)(param_1 + 0x4ed) == '\0') {
            local_230 = (*(code *)PTR_SendBuffered_004be768)(param_1);
          }
          else {
            local_230 = 0;
          }
        }
        if ((local_230 == 0) || (local_230 == 0xfffffeb9)) {
          uVar1 = (*(code *)PTR_MakeMasterSecret_004beb10)(param_1);
          if (uVar1 != 0) {
            local_230 = uVar1;
          }
          *(undefined1 *)(param_1 + 0x4c9) = 8;
        }
        (*(code *)PTR_memset_004beb98)
                  (*(int *)(param_1 + 0x4f0) + 0x61,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x294));
        *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x294) = 0;
      }
    }
  }
  else {
    local_230 = 0xffffff7b;
  }
  return local_230;
}



// ==== SendCertificateVerify @ 00490fb8 size=1656

/* WARNING: Removing unreachable block (ram,0x00491200) */

int SendCertificateVerify(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_2e0;
  int local_2dc;
  undefined1 *local_2d0;
  undefined4 local_2cc;
  int local_2c8;
  int local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_298;
  undefined1 auStack_294 [136];
  undefined1 auStack_20c [516];
  
  local_2e0 = 0x400;
  local_298 = 0;
  if (*(char *)(param_1 + 0x4d2) == '\x02') {
    return 0;
  }
  if (*(char *)(param_1 + 0x130) != '\0') {
    local_2e0 = 0x466;
  }
  iVar2 = (*(code *)PTR_FUN_004beaec)(param_1,local_2e0);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar4 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
  iVar2 = (*(code *)(PTR_LAB_004beab8 + -0x35a4))(param_1,param_1 + 0x3cc);
  if (iVar2 != 0) {
    return iVar2;
  }
  local_2dc = (*(code *)PTR_InitRsaKey_004be728)(auStack_294,*(undefined4 *)(param_1 + 0x57c));
  bVar1 = local_2dc == 0;
  if (bVar1) {
    local_2dc = (*(code *)PTR_RsaPrivateKeyDecode_004be72c)
                          (*(undefined4 *)(param_1 + 0x44c),&local_298,auStack_294,
                           *(undefined4 *)(param_1 + 0x448));
  }
  iVar2 = local_2dc;
  if (local_2dc == 0) {
    uVar3 = (*(code *)PTR_RsaEncryptSize_004beb14)(auStack_294);
    puVar5 = (undefined1 *)(iVar4 + 9);
    local_2d0 = (undefined1 *)(param_1 + 0x3cc);
    local_2cc = 0x24;
    local_2c8 = 0;
    iVar2 = (*(code *)PTR_IsAtLeastTLSv1_2_004be90c)(param_1);
    if (iVar2 != 0) {
      *puVar5 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0xf0);
      *(undefined1 *)(iVar4 + 10) = 1;
      local_2c8 = 2;
    }
    iVar2 = (*(code *)PTR_IsAtLeastTLSv1_2_004be90c)(param_1);
    if (iVar2 != 0) {
      local_2c4 = param_1 + 0x3dc;
      local_2c0 = 0x14;
      local_2bc = 0x58;
      if (*(char *)(*(int *)(param_1 + 0xc) + 0xf0) == '\x02') {
        local_2c4 = param_1 + 0x3dc;
        local_2bc = 0x58;
        local_2c0 = 0x14;
      }
      else if (*(char *)(*(int *)(param_1 + 0xc) + 0xf0) == '\x04') {
        local_2c4 = param_1 + 0x3f0;
        local_2bc = 0x19e;
        local_2c0 = 0x20;
      }
      else if (*(char *)(*(int *)(param_1 + 0xc) + 0xf0) == '\x05') {
        local_2c4 = param_1 + 0x410;
        local_2bc = 0x19f;
        local_2c0 = 0x30;
      }
      local_2cc = (*(code *)PTR_EncodeSignature_004be8f4)(auStack_20c,local_2c4,local_2c0,local_2bc)
      ;
      local_2d0 = auStack_20c;
    }
    (*(code *)(PTR_LAB_004bea88 + 0x2108))(uVar3 & 0xffff,puVar5 + local_2c8);
    local_2dc = (*(code *)PTR_RsaSSL_Sign_004be8f8)
                          (local_2d0,local_2cc,puVar5 + local_2c8 + 2,0x200,auStack_294,
                           *(undefined4 *)(param_1 + 0x158));
    if (0 < local_2dc) {
      local_2dc = 0;
    }
    iVar2 = local_2dc;
    if (local_2dc == 0) {
      (*(code *)(PTR_LAB_004bea88 + 0x4bcc))(iVar4,uVar3 + local_2c8 + 2,0xf,param_1);
      local_2e0 = uVar3 + local_2c8 + 0xb;
      if (*(char *)(param_1 + 0x130) == '\0') {
        iVar2 = (*(code *)(PTR_LAB_004bea88 + 0x4798))(param_1,iVar4,local_2e0,0);
      }
      else {
        iVar6 = uVar3 + local_2c8 + 6;
        iVar2 = (*(code *)PTR_CyaSSL_Malloc_004be634)(iVar6);
        if (iVar2 == 0) {
          local_2dc = -0x7d;
        }
        else {
          (*(code *)PTR_memcpy_004bebdc)(iVar2,iVar4 + 5,iVar6);
          local_2e0 = (*(code *)(PTR_LAB_004beab8 + -0x324c))(param_1,iVar4,0x466,iVar2,iVar6,0x16);
          if (iVar2 != 0) {
            (*(code *)PTR_CyaSSL_Free_004be640)(iVar2);
          }
          iVar2 = local_2e0;
          if (local_2e0 < 0) goto LAB_00491584;
        }
        iVar2 = local_2dc;
      }
    }
  }
LAB_00491584:
  local_2dc = iVar2;
  if (bVar1) {
    (*(code *)PTR_FreeRsaKey_004be730)(auStack_294);
  }
  if (local_2dc == 0) {
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + local_2e0;
    if (*(char *)(param_1 + 0x4ed) == '\0') {
      local_2dc = (*(code *)PTR_SendBuffered_004be768)(param_1);
    }
    else {
      local_2dc = 0;
    }
  }
  return local_2dc;
}



// ==== SendServerHello @ 00491630 size=932

int SendServerHello(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_004beaec)(param_1,0x80);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
    (*(code *)(PTR_LAB_004bea88 + 0x4bcc))(iVar2,0x46,2,param_1);
    *(undefined1 *)(iVar2 + 9) = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)(iVar2 + 10) = *(undefined1 *)(param_1 + 9);
    if ((*(char *)(param_1 + 0x4d3) != '\0') ||
       (iVar1 = (*(code *)PTR_RNG_GenerateBlock_004be63c)
                          (*(undefined4 *)(param_1 + 0x158),*(int *)(param_1 + 0x4f0) + 0x20,0x20),
       iVar1 == 0)) {
      (*(code *)PTR_memcpy_004bebdc)(iVar2 + 0xb,*(int *)(param_1 + 0x4f0) + 0x20,0x20);
      *(undefined1 *)(iVar2 + 0x2b) = 0x20;
      if ((*(char *)(param_1 + 0x4d3) != '\0') ||
         (iVar1 = (*(code *)PTR_RNG_GenerateBlock_004be63c)
                            (*(undefined4 *)(param_1 + 0x158),*(int *)(param_1 + 0x4f0) + 0x40,0x20)
         , iVar1 == 0)) {
        (*(code *)PTR_memcpy_004bebdc)(iVar2 + 0x2c,*(int *)(param_1 + 0x4f0) + 0x40,0x20);
        *(undefined1 *)(iVar2 + 0x4c) = *(undefined1 *)(param_1 + 0x4c6);
        *(undefined1 *)(iVar2 + 0x4d) = *(undefined1 *)(param_1 + 0x4c7);
        if (*(char *)(param_1 + 0x4de) == '\0') {
          *(undefined1 *)(iVar2 + 0x4e) = 0;
        }
        else {
          *(undefined1 *)(iVar2 + 0x4e) = 0xdd;
        }
        *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + 0x4f;
        iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x4798))(param_1,iVar2,0x4f,0);
        if (iVar1 == 0) {
          *(undefined1 *)(param_1 + 0x4c8) = 2;
          if (*(char *)(param_1 + 0x4ed) == '\0') {
            iVar1 = (*(code *)PTR_SendBuffered_004be768)(param_1);
          }
          else {
            iVar1 = 0;
          }
        }
      }
    }
  }
  return iVar1;
}



// ==== SendServerKeyExchange @ 004919d4 size=48

undefined4 SendServerKeyExchange(void)

{
  return 0;
}



// ==== VerifyServerSuite @ 00491a04 size=1248

undefined4 VerifyServerSuite(int param_1,ushort param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  
  cVar1 = *(char *)(param_1 + 0x4e3);
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004bead8 + -0x5954);
  if (*(int *)(param_1 + 0xc) == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5940);
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)param_2 + 4);
    uVar3 = *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)param_2 + 5);
    cVar4 = *(char *)(param_1 + 0x4e1);
    iVar5 = (*(code *)(PTR_LAB_004bea88 + 0x607c))(uVar2,uVar3,0);
    if ((iVar5 == 0) ||
       ((*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5928),
       cVar4 == '\0' && cVar1 == '\0')) {
      iVar5 = (*(code *)(PTR_LAB_004bea88 + 0x607c))(uVar2,uVar3,1);
      if ((iVar5 == 0) ||
         ((*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5908),
         *(char *)(param_1 + 0x4e0) != '\0')) {
        iVar5 = (*(code *)(PTR_LAB_004bea88 + 0x607c))(uVar2,uVar3,2);
        if ((iVar5 == 0) ||
           ((*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x58e8),
           *(char *)(param_1 + 0x4e2) != '\0')) {
          iVar5 = (*(code *)(PTR_LAB_004bea88 + 0x607c))(uVar2,uVar3,3);
          if ((iVar5 == 0) ||
             ((*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x58c4),
             *(char *)(param_1 + 0x4e3) != '\0')) {
            iVar5 = (*(code *)(PTR_LAB_004bea88 + 0x607c))(uVar2,uVar3,4);
            if (iVar5 == 0) {
              iVar5 = (*(code *)(PTR_LAB_004bea88 + 0x607c))(uVar2,uVar3,5);
              if ((iVar5 == 0) ||
                 ((*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5898),
                 *(char *)(param_1 + 0x4e1) != '\0')) {
                iVar5 = (*(code *)(PTR_LAB_004bea88 + 0x607c))(uVar2,uVar3,6);
                if ((iVar5 == 0) ||
                   (((*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5878),
                    *(char *)(param_1 + 0x4cc) != '\0' || (*(char *)(param_1 + 0x4e2) != '\x01'))))
                {
                  uVar6 = 1;
                }
                else {
                  (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5860);
                  uVar6 = 0;
                }
              }
              else {
                (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5888);
                uVar6 = 0;
              }
            }
            else {
              (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5974);
              (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5964);
              uVar6 = 0;
            }
          }
          else {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x58b0);
            uVar6 = 0;
          }
        }
        else {
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x58d8);
          uVar6 = 0;
        }
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x58f8);
        uVar6 = 0;
      }
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5918);
      uVar6 = 0;
    }
  }
  return uVar6;
}



// ==== MatchSuite @ 00491ee4 size=640

int MatchSuite(int param_1,int param_2)

{
  int iVar1;
  ushort local_10;
  ushort local_e;
  
  (*(code *)PTR_FUN_004be650)(PTR_DAT_004bead8 + -0x5844);
  if ((*(short *)(param_2 + 0xcc) == 0) || ((*(ushort *)(param_2 + 0xcc) & 1) != 0)) {
    iVar1 = -0x1f5;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = -0x173;
  }
  else {
    for (local_10 = 0; local_10 < *(ushort *)(*(int *)(param_1 + 0xc) + 0xcc);
        local_10 = local_10 + 2) {
      for (local_e = 0; local_e < *(ushort *)(param_2 + 0xcc); local_e = local_e + 2) {
        if ((*(char *)(*(int *)(param_1 + 0xc) + (uint)local_10 + 4) ==
             *(char *)(param_2 + (uint)local_e + 4)) &&
           (*(char *)(*(int *)(param_1 + 0xc) + (uint)local_10 + 5) ==
            *(char *)(param_2 + (uint)local_e + 5))) {
          iVar1 = (*(code *)(PTR_LAB_004beab8 + 0x1a04))(param_1,local_10);
          if (iVar1 != 0) {
            (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5838);
            *(undefined1 *)(param_1 + 0x4c6) =
                 *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)local_10 + 4);
            *(undefined1 *)(param_1 + 0x4c7) =
                 *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)local_10 + 5);
            iVar1 = (*(code *)PTR_SetCipherSpecs_004beb00)(param_1);
            if (iVar1 != 0) {
              return iVar1;
            }
            (*(code *)(PTR_LAB_004beab8 + -0xcb0))
                      (param_1,param_2 + 0xce,*(undefined2 *)(param_2 + 0xee));
            return 0;
          }
          (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5820);
        }
      }
    }
    iVar1 = -0x1f5;
  }
  return iVar1;
}



// ==== SendServerHelloDone @ 004930ec size=324

int SendServerHelloDone(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_004beaec)(param_1,9);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x498);
    (*(code *)(PTR_LAB_004bea88 + 0x4bcc))(iVar1,0,0xe,param_1);
    iVar1 = (*(code *)(PTR_LAB_004bea88 + 0x4798))(param_1,iVar1,9,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x4c8) = 5;
      *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + 9;
      iVar1 = (*(code *)PTR_SendBuffered_004be768)(param_1);
    }
  }
  return iVar1;
}



// ==== EmbedReceive @ 00493888 size=748

int EmbedReceive(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *param_4;
  uVar1 = (*(code *)PTR_recv_004bebe4)(uVar3,param_2,param_3,*(undefined4 *)(param_1 + 0x140));
  iVar2 = (*(code *)(PTR_LAB_004beab8 + 0x3800))(uVar1,uVar3);
  if (iVar2 < 0) {
    iVar2 = (*(code *)(PTR_LAB_004beab8 + 0x3830))();
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x55f8);
    if ((iVar2 == 0xb) || (iVar2 == 0xb)) {
      iVar2 = (*(code *)PTR_CyaSSL_dtls_004beb18)(param_1);
      if ((iVar2 == 0) ||
         (iVar2 = (*(code *)PTR_CyaSSL_get_using_nonblock_004beb1c)(param_1), iVar2 != 0)) {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x55e4);
        iVar2 = -2;
      }
      else {
        (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x55d4);
        iVar2 = -6;
      }
    }
    else if (iVar2 == 0x83) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x55c0);
      iVar2 = -3;
    }
    else if (iVar2 == 4) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x55a8);
      iVar2 = -4;
    }
    else if (iVar2 == 0x92) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5590);
      iVar2 = -2;
    }
    else if (iVar2 == 0x82) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5578);
      iVar2 = -5;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5560);
      iVar2 = -1;
    }
  }
  else if (iVar2 == 0) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x554c);
    iVar2 = -5;
  }
  return iVar2;
}



// ==== EmbedSend @ 00493b74 size=520

int EmbedSend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_send_004bebcc)(*param_4,param_2,param_3,*(undefined4 *)(param_1 + 0x144));
  if (iVar1 < 0) {
    iVar1 = (*(code *)(PTR_LAB_004beab8 + 0x3830))();
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x552c);
    if ((iVar1 == 0xb) || (iVar1 == 0xb)) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5518);
      iVar1 = -2;
    }
    else if (iVar1 == 0x83) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x55c0);
      iVar1 = -3;
    }
    else if (iVar1 == 4) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x55a8);
      iVar1 = -4;
    }
    else if (iVar1 == 0x20) {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5508);
      iVar1 = -5;
    }
    else {
      (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5560);
      iVar1 = -1;
    }
  }
  return iVar1;
}



// ==== SetCipherSpecs @ 00493f50 size=512

undefined4 SetCipherSpecs(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x4cc) == '\x01') &&
     (iVar1 = (*(code *)PTR_VerifyClientSuite_004beb20)(param_1), iVar1 != 1)) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x54c8);
    return 0xfffffe0c;
  }
  if (*(char *)(param_1 + 0x4c6) == -0x34) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5498);
    uVar2 = 0xfffffe0c;
  }
  else if (*(char *)(param_1 + 0x4c6) == -0x40) {
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5468);
    uVar2 = 0xfffffe0c;
  }
  else if ((*(char *)(param_1 + 0x4c6) == -0x40) || (*(char *)(param_1 + 0x4c6) == -0x34)) {
    if ((*(char *)(param_1 + 8) == '\x03') && (*(char *)(param_1 + 9) != '\0')) {
      *(undefined1 *)(param_1 + 0x4d5) = 1;
      *(undefined **)(param_1 + 0x578) = PTR_FUN_004beb24;
      if (1 < *(byte *)(param_1 + 9)) {
        *(undefined1 *)(param_1 + 0x4d6) = 1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar3 = *(byte *)(param_1 + 0x4c7) - 4;
    if (uVar3 < 0x3a) {
                    /* WARNING: Could not recover jumptable at 0x004940a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004bead8 + uVar3 * 4 + -0x540c)))();
      return uVar2;
    }
    (*(code *)PTR_CYASSL_MSG_004be648)(PTR_DAT_004bead8 + -0x5438);
    uVar2 = 0xfffffe0c;
  }
  return uVar2;
}



// ==== SetKeysSide @ 00494f00 size=316

undefined4 SetKeysSide(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 2) {
    local_1c = param_1 + 0x20;
  }
  else if (param_2 == 3) {
    local_20 = param_1 + 0x10;
    local_1c = param_1 + 0x20;
  }
  else {
    if (param_2 != 1) {
      return 0xffffff53;
    }
    local_20 = param_1 + 0x10;
  }
  uVar1 = (*(code *)(PTR_LAB_004beab8 + 0x46c8))
                    (local_20,local_1c,param_1 + 0x40,param_1 + 0x30,
                     *(undefined1 *)(param_1 + 0x4cc),*(undefined4 *)(param_1 + 0x57c),0xfffffffe);
  return uVar1;
}



// ==== StoreKeys @ 0049503c size=556

undefined4 StoreKeys(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = 0;
  if (*(char *)(param_1 + 0x31) != '\x02') {
    uVar1 = (uint)*(byte *)(param_1 + 0x35);
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x40,param_2,uVar1);
    (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x80,param_2 + uVar1,uVar1);
    local_18 = uVar1 * 2;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x38);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0xc0,param_2 + local_18,uVar1);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0xe0,param_2 + local_18 + uVar1,uVar1);
  iVar2 = local_18 + uVar1 + uVar1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x3a);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x100,param_2 + iVar2,uVar1);
  (*(code *)PTR_memcpy_004bebdc)(param_1 + 0x110,param_2 + iVar2 + uVar1,uVar1);
  return 0;
}



// ==== DeriveKeys @ 00495268 size=868

/* WARNING: Removing unreachable block (ram,0x004952c8) */

int DeriveKeys(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int local_220;
  int local_21c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined1 auStack_1f4 [48];
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 uStack_1b0;
  undefined1 auStack_1af [48];
  undefined1 auStack_17f [32];
  undefined1 auStack_15f [39];
  undefined1 auStack_138 [112];
  undefined1 auStack_c8 [92];
  undefined1 auStack_6c [100];
  
  bVar1 = *(byte *)(param_1 + 0x35);
  uVar2 = *(ushort *)(param_1 + 0x38);
  uVar3 = *(ushort *)(param_1 + 0x3a);
  (*(code *)PTR_InitMd5_004be7c8)(auStack_c8);
  local_21c = (*(code *)PTR_InitSha_004be7d4)(auStack_6c);
  if (local_21c == 0) {
    (*(code *)PTR_memcpy_004bebdc)(auStack_1f4,*(int *)(param_1 + 0x4f0) + 0x261,0x30);
    for (local_220 = 0; local_220 < (int)(((uint)bVar1 + (uint)uVar2 + (uint)uVar3) * 2 + 0xf) >> 4;
        local_220 = local_220 + 1) {
      iVar4 = (*(code *)(PTR_LAB_004beab8 + 0x44f0))(&uStack_1b0,local_220);
      if (iVar4 == 0) {
        local_21c = -0x12e;
        break;
      }
      (*(code *)PTR_memcpy_004bebdc)(auStack_1af + local_220,*(int *)(param_1 + 0x4f0) + 0x261,0x30)
      ;
      (*(code *)PTR_memcpy_004bebdc)(auStack_17f + local_220,*(int *)(param_1 + 0x4f0) + 0x20,0x20);
      (*(code *)PTR_memcpy_004bebdc)(auStack_15f + local_220,*(undefined4 *)(param_1 + 0x4f0),0x20);
      (*(code *)PTR_ShaUpdate_004be7d8)(auStack_6c,&uStack_1b0,local_220 + 0x71);
      (*(code *)PTR_ShaFinal_004be7dc)(auStack_6c,&local_208);
      local_1c4 = local_208;
      local_1c0 = local_204;
      local_1bc = local_200;
      local_1b8 = local_1fc;
      local_1b4 = local_1f8;
      (*(code *)PTR_Md5Update_004be7cc)(auStack_c8,auStack_1f4,0x44);
      (*(code *)PTR_Md5Final_004be7d0)(auStack_c8,auStack_138 + local_220 * 0x10);
    }
    if (local_21c == 0) {
      local_21c = (*(code *)PTR_StoreKeys_004be914)(param_1,auStack_138);
    }
  }
  return local_21c;
}



// ==== MakeMasterSecret @ 00495ac0 size=148

undefined4 MakeMasterSecret(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x4d5) == '\0') {
    uVar1 = (*(code *)(PTR_LAB_004beab8 + 0x56f4))(param_1);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_004beb28)(param_1);
  }
  return uVar1;
}



// ==== CTaoCryptGetErrorString @ 00495b60 size=112

undefined * CTaoCryptGetErrorString(int param_1)

{
  undefined *puVar1;
  
  if (param_1 + 0xd2U < 0x6e) {
                    /* WARNING: Could not recover jumptable at 0x00495ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)
             (*(code *)(&_gp_1 + *(int *)(PTR_DAT_004bead8 + (param_1 + 0xd2U) * 4 + -0x4710)))();
    return puVar1;
  }
  return PTR_DAT_004bead8 + -0x4728;
}



// ==== ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 @ 004982cc size=212

undefined4
ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789
          (uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar6;
  int local_20;
  int local_1c;
  char *pcVar5;
  
  if (param_3 < param_1) {
    uVar3 = 0xffffffff;
  }
  else {
    gettimeofday(&local_20,0);
    iVar1 = time(0);
    srand(local_1c + local_20 + iVar1);
    if (param_1 != 0) {
      pcVar6 = param_2 + param_1;
      pcVar5 = param_2;
      do {
        pcVar4 = pcVar5 + 1;
        uVar2 = rand();
        *pcVar5 = s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_004be5c0[uVar2 % 0x3e];
        pcVar5 = pcVar4;
        param_2 = pcVar6;
      } while (pcVar4 != pcVar6);
    }
    *param_2 = '\0';
    uVar3 = 0;
  }
  return uVar3;
}



// ==== __udivdi3 @ 004989e0 size=1388

undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(0x1c00);
      }
      if (param_3 < 0x10000) {
        iVar3 = 8;
        if (param_3 < 0x100) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x10;
        if (0xffffff < param_3) {
          iVar3 = 0x18;
        }
      }
      uVar9 = (uint)(byte)PTR___clz_tab_004beb2c[param_3 >> iVar3] + iVar3;
      uVar7 = 0x20 - uVar9;
      if (uVar7 == 0) {
        param_2 = param_2 - param_3;
        uVar7 = 1;
        uVar6 = param_1;
      }
      else {
        param_3 = param_3 << (uVar7 & 0x1f);
        uVar4 = param_2 >> (uVar9 & 0x1f);
        uVar6 = param_1 << (uVar7 & 0x1f);
        uVar2 = param_3 >> 0x10;
        uVar10 = uVar4 / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar7 = param_2 << (uVar7 & 0x1f) | param_1 >> (uVar9 & 0x1f);
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        uVar5 = uVar4 % uVar2 << 0x10 | uVar7 >> 0x10;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar4 = uVar10;
        if (uVar5 < uVar9) {
          uVar5 = uVar5 + param_3;
          uVar4 = uVar10 - 1;
          if ((param_3 <= uVar5) && (uVar5 < uVar9)) {
            uVar4 = uVar10 - 2;
            uVar5 = uVar5 + param_3;
          }
        }
        uVar10 = (uVar5 - uVar9) / uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
          trap(0x1c00);
        }
        param_2 = (uVar5 - uVar9) % uVar2 << 0x10 | uVar7 & 0xffff;
        uVar9 = uVar10 * (param_3 & 0xffff);
        uVar7 = uVar10;
        if (param_2 < uVar9) {
          param_2 = param_2 + param_3;
          uVar7 = uVar10 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar9)) {
            uVar7 = uVar10 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
        uVar7 = uVar7 | uVar4 << 0x10;
      }
      uVar9 = param_3 >> 0x10;
      uVar2 = param_2 / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      if (uVar9 == 0) {
        trap(0x1c00);
      }
      uVar5 = param_2 % uVar9 << 0x10 | uVar6 >> 0x10;
      uVar4 = uVar2 * (param_3 & 0xffff);
      uVar10 = uVar2;
      if (uVar5 < uVar4) {
        uVar5 = uVar5 + param_3;
        uVar10 = uVar2 - 1;
        if ((param_3 <= uVar5) && (uVar5 < uVar4)) {
          uVar10 = uVar2 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar2 = (uVar5 - uVar4) / uVar9;
      if (uVar9 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar4 = (uVar5 - uVar4) % uVar9 << 0x10 | uVar6 & 0xffff;
      uVar6 = uVar2 * (param_3 & 0xffff);
      uVar9 = uVar2;
      if (uVar4 < uVar6) {
        uVar4 = uVar4 + param_3;
        uVar9 = uVar2 - 1;
        if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
          uVar9 = uVar2 - 2;
        }
      }
      uVar9 = uVar9 | uVar10 << 0x10;
      goto LAB_00498f44;
    }
    if (param_3 < 0x10000) {
      iVar3 = 8;
      if (param_3 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_3) {
        iVar3 = 0x18;
      }
    }
    uVar9 = param_3 >> iVar3;
    uVar7 = 0x20 - ((uint)(byte)PTR___clz_tab_004beb2c[uVar9] + iVar3);
    if (uVar7 != 0) {
      param_3 = param_3 << (uVar7 & 0x1f);
      param_2 = param_2 << (uVar7 & 0x1f) |
                param_1 >> ((uint)(byte)PTR___clz_tab_004beb2c[uVar9] + iVar3 & 0x1f);
      param_1 = param_1 << (uVar7 & 0x1f);
    }
    uVar7 = param_3 >> 0x10;
    uVar9 = param_2 / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    uVar4 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
    uVar6 = uVar9 * (param_3 & 0xffff);
    uVar2 = uVar9;
    if (uVar4 < uVar6) {
      uVar4 = uVar4 + param_3;
      uVar2 = uVar9 - 1;
      if ((param_3 <= uVar4) && (uVar4 < uVar6)) {
        uVar2 = uVar9 - 2;
        uVar4 = uVar4 + param_3;
      }
    }
    uVar10 = (uVar4 - uVar6) / uVar7;
    if (uVar7 == 0) {
      trap(0x1c00);
      trap(0x1c00);
    }
    uVar6 = (uVar4 - uVar6) % uVar7 << 0x10 | param_1 & 0xffff;
    uVar7 = uVar10 * (param_3 & 0xffff);
    uVar9 = uVar10;
    if (uVar6 < uVar7) {
      uVar6 = uVar6 + param_3;
      uVar9 = uVar10 - 1;
      if ((param_3 <= uVar6) && (uVar6 < uVar7)) {
        uVar9 = uVar10 - 2;
      }
    }
    uVar9 = uVar9 | uVar2 << 0x10;
  }
  else {
    uVar7 = 0;
    if (param_2 < param_4) {
      uVar9 = 0;
      goto LAB_00498f44;
    }
    if (param_4 < 0x10000) {
      iVar3 = 8;
      if (param_4 < 0x100) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0x10;
      if (0xffffff < param_4) {
        iVar3 = 0x18;
      }
    }
    uVar7 = (uint)(byte)PTR___clz_tab_004beb2c[param_4 >> iVar3] + iVar3;
    uVar6 = 0x20 - uVar7;
    uVar9 = param_2 >> (uVar7 & 0x1f);
    if (uVar6 == 0) {
      if (param_4 < param_2) {
        uVar7 = 0;
        uVar9 = 1;
        goto LAB_00498f44;
      }
      uVar9 = param_1 < param_3 ^ 1;
    }
    else {
      uVar2 = param_4 << (uVar6 & 0x1f) | param_3 >> (uVar7 & 0x1f);
      uVar4 = uVar2 >> 0x10;
      uVar10 = uVar9 / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar7 = param_2 << (uVar6 & 0x1f) | param_1 >> (uVar7 & 0x1f);
      if (uVar4 == 0) {
        trap(0x1c00);
      }
      uVar8 = uVar9 % uVar4 << 0x10 | uVar7 >> 0x10;
      uVar9 = uVar10 * (uVar2 & 0xffff);
      uVar5 = uVar10;
      if (uVar8 < uVar9) {
        uVar8 = uVar8 + uVar2;
        uVar5 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar9)) {
          uVar5 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar10 = (uVar8 - uVar9) / uVar4;
      if (uVar4 == 0) {
        trap(0x1c00);
        trap(0x1c00);
      }
      uVar8 = (uVar8 - uVar9) % uVar4 << 0x10 | uVar7 & 0xffff;
      uVar4 = uVar10 * (uVar2 & 0xffff);
      uVar9 = uVar10;
      if (uVar8 < uVar4) {
        uVar8 = uVar8 + uVar2;
        uVar9 = uVar10 - 1;
        if ((uVar2 <= uVar8) && (uVar8 < uVar4)) {
          uVar9 = uVar10 - 2;
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar9 = uVar9 | uVar5 << 0x10;
      lVar1 = (ulonglong)uVar9 * (ulonglong)(param_3 << (uVar6 & 0x1f));
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar2 <= uVar8 - uVar4) &&
         ((uVar7 = 0, uVar2 != uVar8 - uVar4 || ((uint)lVar1 <= param_1 << (uVar6 & 0x1f)))))
      goto LAB_00498f44;
      uVar9 = uVar9 - 1;
    }
  }
  uVar7 = 0;
LAB_00498f44:
  return CONCAT44(uVar7,uVar9);
}



// ==== __PLT_HEAD @ 004add60 size=32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __PLT_HEAD(void)

{
  (*___DT_MIPS_PLTGOT)();
  (*(code *)PTR_clock_gettime_004be33c)();
  return;
}



// ==== clock_gettime @ 004add80 size=16

void clock_gettime(void)

{
  (*(code *)PTR_clock_gettime_004be33c)();
  return;
}



// ==== strcpy @ 004add90 size=4

void strcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x004add9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcpy_004be340)();
  return;
}



// ==== strtok_r @ 004adda0 size=16

void strtok_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x004addac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strtok_r_004be344)();
  return;
}



// ==== printf @ 004addb0 size=4

void printf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004addbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_printf_004be348)();
  return;
}



// ==== recv @ 004addc0 size=16

void recv(void)

{
  (*(code *)PTR_recv_004be34c)();
  return;
}



// ==== connect @ 004addd0 size=4

void connect(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_connect_004be350)();
  return;
}



// ==== strerror @ 004adde0 size=16

void strerror(void)

{
  (*(code *)PTR_strerror_004be354)();
  return;
}



// ==== geteuid @ 004addf0 size=4

void geteuid(void)

{
                    /* WARNING: Could not recover jumptable at 0x004addfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_geteuid_004be358)();
  return;
}



// ==== inet_pton @ 004ade00 size=16

void inet_pton(void)

{
  (*(code *)PTR_inet_pton_004be35c)();
  return;
}



// ==== stat64 @ 004ade10 size=4

void stat64(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ade1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_stat64_004be360)();
  return;
}



// ==== __xpg_basename @ 004ade20 size=16

void __xpg_basename(void)

{
  (*(code *)PTR___xpg_basename_004be364)();
  return;
}



// ==== memmove @ 004ade30 size=16

void memmove(void)

{
  (*(code *)PTR_memmove_004be368)();
  return;
}



// ==== snprintf @ 004ade40 size=16

void snprintf(void)

{
  (*(code *)PTR_snprintf_004be36c)();
  return;
}



// ==== getenv @ 004ade50 size=4

void getenv(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ade5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_getenv_004be370)();
  return;
}



// ==== qsort @ 004ade60 size=16

void qsort(void)

{
  (*(code *)PTR_qsort_004be374)();
  return;
}



// ==== fgets @ 004ade70 size=16

void fgets(void)

{
  (*(code *)PTR_fgets_004be378)();
  return;
}



// ==== __xpg_strerror_r @ 004ade80 size=4

void __xpg_strerror_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ade8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___xpg_strerror_r_004be37c)();
  return;
}



// ==== fcntl64 @ 004ade90 size=16

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_004be380)();
  return;
}



// ==== memcpy @ 004adea0 size=16

void memcpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_004be384)();
  return;
}



// ==== puts @ 004adeb0 size=4

void puts(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_puts_004be388)();
  return;
}



// ==== tolower @ 004adec0 size=16

void tolower(void)

{
  (*(code *)PTR_tolower_004be38c)();
  return;
}



// ==== system @ 004aded0 size=16

void system(void)

{
  (*(code *)PTR_system_004be390)();
  return;
}



// ==== siglongjmp @ 004adef0 size=16

void siglongjmp(void)

{
  (*(code *)PTR_siglongjmp_004be398)();
  return;
}



// ==== strtoll @ 004adf00 size=16

void strtoll(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adf0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strtoll_004be39c)();
  return;
}



// ==== strtoul @ 004adf10 size=4

void strtoul(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strtoul_004be3a0)();
  return;
}



// ==== socket @ 004adf20 size=16

void socket(void)

{
  (*(code *)PTR_socket_004be3a4)();
  return;
}



// ==== fflush @ 004adf30 size=16

void fflush(void)

{
  (*(code *)PTR_fflush_004be3a8)();
  return;
}



// ==== strncasecmp @ 004adf40 size=4

void strncasecmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strncasecmp_004be3ac)();
  return;
}



// ==== send @ 004adf50 size=16

void send(void)

{
  (*(code *)PTR_send_004be3b0)();
  return;
}



// ==== freeaddrinfo @ 004adf60 size=16

void freeaddrinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_freeaddrinfo_004be3b4)();
  return;
}



// ==== gmtime_r @ 004adf70 size=4

void gmtime_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gmtime_r_004be3b8)();
  return;
}



// ==== alarm @ 004adf80 size=16

void alarm(void)

{
  (*(code *)PTR_alarm_004be3bc)();
  return;
}



// ==== strtol @ 004adf90 size=16

void strtol(void)

{
  (*(code *)PTR_strtol_004be3c0)();
  return;
}



// ==== __sigsetjmp @ 004adfa0 size=4

void __sigsetjmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sigsetjmp_004be3c4)();
  return;
}



// ==== strrchr @ 004adfb0 size=16

void strrchr(void)

{
  (*(code *)PTR_strrchr_004be3c8)();
  return;
}



// ==== calloc @ 004adfc0 size=4

void calloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_calloc_004be3cc)();
  return;
}



// ==== fprintf @ 004adfd0 size=16

void fprintf(void)

{
  (*(code *)PTR_fprintf_004be3d0)();
  return;
}



// ==== bind @ 004adfe0 size=4

void bind(void)

{
                    /* WARNING: Could not recover jumptable at 0x004adfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_bind_004be3d4)();
  return;
}



// ==== if_nametoindex @ 004adff0 size=16

void if_nametoindex(void)

{
  (*(code *)PTR_if_nametoindex_004be3d8)();
  return;
}



// ==== setsockopt @ 004ae000 size=4

void setsockopt(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_setsockopt_004be3dc)();
  return;
}



// ==== fseek @ 004ae010 size=16

void fseek(void)

{
  (*(code *)PTR_fseek_004be3e0)();
  return;
}



// ==== memchr @ 004ae020 size=4

void memchr(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memchr_004be3e4)();
  return;
}



// ==== strstr @ 004ae030 size=16

void strstr(void)

{
  (*(code *)PTR_strstr_004be3e8)();
  return;
}



// ==== rand @ 004ae040 size=4

void rand(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rand_004be3ec)();
  return;
}



// ==== strncmp @ 004ae050 size=16

void strncmp(void)

{
  (*(code *)PTR_strncmp_004be3f0)();
  return;
}



// ==== strncpy @ 004ae060 size=4

void strncpy(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strncpy_004be3f4)();
  return;
}



// ==== strcasecmp @ 004ae070 size=16

void strcasecmp(void)

{
  (*(code *)PTR_strcasecmp_004be3f8)();
  return;
}



// ==== memcmp @ 004ae090 size=16

void memcmp(void)

{
  (*(code *)PTR_memcmp_004be400)();
  return;
}



// ==== sscanf @ 004ae0a0 size=16

void sscanf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sscanf_004be404)();
  return;
}



// ==== sigaction @ 004ae0b0 size=4

void sigaction(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sigaction_004be408)();
  return;
}



// ==== strdup @ 004ae0d0 size=4

void strdup(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strdup_004be410)();
  return;
}



// ==== gettimeofday @ 004ae0e0 size=16

void gettimeofday(void)

{
  (*(code *)PTR_gettimeofday_004be414)();
  return;
}



// ==== fopen @ 004ae0f0 size=4

void fopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fopen_004be418)();
  return;
}



// ==== localtime @ 004ae100 size=16

void localtime(void)

{
  (*(code *)PTR_localtime_004be41c)();
  return;
}



// ==== memset @ 004ae110 size=16

void memset(void)

{
  (*(code *)PTR_memset_004be420)();
  return;
}



// ==== ftell @ 004ae120 size=4

void ftell(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ftell_004be424)();
  return;
}



// ==== srand @ 004ae130 size=16

void srand(void)

{
  (*(code *)PTR_srand_004be428)();
  return;
}



// ==== fclose @ 004ae140 size=4

void fclose(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be42c)();
  return;
}



// ==== time @ 004ae150 size=16

void time(void)

{
  (*(code *)PTR_time_004be430)();
  return;
}



// ==== poll @ 004ae160 size=4

void poll(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be434)();
  return;
}



// ==== getpwuid_r @ 004ae170 size=16

void getpwuid_r(void)

{
  (*(code *)PTR_getpwuid_r_004be438)();
  return;
}



// ==== strcmp @ 004ae180 size=16

void strcmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcmp_004be43c)();
  return;
}



// ==== sprintf @ 004ae190 size=4

void sprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_sprintf_004be440)();
  return;
}



// ==== getpeername @ 004ae1a0 size=16

void getpeername(void)

{
  (*(code *)PTR_getpeername_004be444)();
  return;
}



// ==== getifaddrs @ 004ae1b0 size=4

void getifaddrs(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be448)();
  return;
}



// ==== fputc @ 004ae1c0 size=16

void fputc(void)

{
  (*(code *)PTR_fputc_004be44c)();
  return;
}



// ==== getsockopt @ 004ae1d0 size=4

void getsockopt(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be450)();
  return;
}



// ==== freeifaddrs @ 004ae1e0 size=16

void freeifaddrs(void)

{
  (*(code *)PTR_freeifaddrs_004be454)();
  return;
}



// ==== getaddrinfo @ 004ae1f0 size=4

void getaddrinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be458)();
  return;
}



// ==== stat @ 004ae200 size=16

void stat(void)

{
  (*(code *)PTR_stat_004be45c)();
  return;
}



// ==== fwrite @ 004ae210 size=4

void fwrite(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be460)();
  return;
}



// ==== rewind @ 004ae220 size=16

void rewind(void)

{
  (*(code *)PTR_rewind_004be464)();
  return;
}



// ==== __errno_location @ 004ae230 size=4

void __errno_location(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be468)();
  return;
}



// ==== exit @ 004ae240 size=16

void exit(void)

{
  (*(code *)PTR_exit_004be46c)();
  return;
}



// ==== inet_ntop @ 004ae250 size=16

void inet_ntop(void)

{
  (*(code *)PTR_inet_ntop_004be470)();
  return;
}



// ==== atoi @ 004ae260 size=16

void atoi(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_atoi_004be474)();
  return;
}



// ==== strlen @ 004ae270 size=4

void strlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strlen_004be478)();
  return;
}



// ==== strchr @ 004ae290 size=16

void strchr(void)

{
  (*(code *)PTR_strchr_004be480)();
  return;
}



// ==== fputs @ 004ae2a0 size=4

void fputs(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be484)();
  return;
}



// ==== close @ 004ae2b0 size=16

void close(void)

{
  (*(code *)PTR_close_004be488)();
  return;
}



// ==== __fputc_unlocked @ 004ae2d0 size=16

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_004be490)();
  return;
}



// ==== getsockname @ 004ae2e0 size=4

void getsockname(void)

{
                    /* WARNING: Could not recover jumptable at 0x004ae2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam004be494)();
  return;
}



// ==== fopen64 @ 004ae2f0 size=20

void fopen64(void)

{
  (*(code *)PTR_fopen64_004be498)();
  return;
}



