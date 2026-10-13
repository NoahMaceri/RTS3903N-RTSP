/* rmm — "zbar" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== zbar_image_free_data @ 00402608 size=40

void zbar_image_free_data(void)

{
                    /* WARNING: Subroutine does not return */
  __assert("img->refcnt","zbar/image.c",0x71,"zbar_image_free_data");
}



// ==== zbar_proc @ 00407168 size=2132

undefined4 zbar_proc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 auStack_385f0 [230400];
  undefined1 auStack_1f0 [96];
  undefined1 auStack_190 [96];
  byte local_130 [64];
  byte local_f0 [64];
  char local_b0 [64];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined1 *local_48;
  int local_44;
  uint local_40;
  byte *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  
  memset(auStack_385f0,0,0x38400);
  local_4c = 0x280;
  local_50 = 0x168;
  local_40 = *(int *)(DAT_004778ac + 0x18c) + 0x78;
  send_wait_msg(DAT_004778a4);
  (*(code *)PTR_raw_video_resize_0042486c)(0x280,0x168);
  local_38 = FUN_00415d90();
  FUN_00415e44(local_38,0,0,1);
  local_44 = FUN_00414b54();
  if (local_44 == 0) {
    FUN_00413f64("rmm.c","zbar_proc",0x75e,"zbar_image_create fail");
  }
  (*(code *)PTR_FUN_00424870)(&local_4c,&local_50);
  FUN_00413f64("rmm.c","zbar_proc",0x762,"Got raw video size(%d,%d)",local_4c,local_50);
  if ((local_4c != 0x280) || (local_50 != 0x168)) {
    printf(&DAT_00422cb8,"zbar_proc",0x764,0x280,0x168,local_4c,local_50);
  }
  local_34 = DAT_00422cf4;
  iVar2 = DAT_004778ac;
LAB_00407338:
  do {
    iVar1 = *(int *)(iVar2 + 0x5b8);
    while (iVar1 == 0) {
      if (local_40 < *(uint *)(iVar2 + 0x18c)) {
        local_40 = *(uint *)(iVar2 + 0x18c) + 0x78;
        iVar1 = *(int *)(iVar2 + 0x588);
        if ((*(int *)(iVar2 + 0x584) == 0) && ((iVar1 == 0 || (iVar1 == 3)))) {
          send_wait_msg(DAT_004778a4);
          usleep(20000);
          iVar2 = DAT_004778ac;
          goto LAB_0040789c;
        }
        if (iVar1 - 1U < 2) goto LAB_004078b0;
LAB_0040739c:
        iVar1 = *(int *)(iVar2 + 0x584);
      }
      else {
LAB_0040789c:
        if (1 < *(int *)(iVar2 + 0x588) - 1U) goto LAB_0040739c;
LAB_004078b0:
        sleep(1);
        FUN_004080b8(auStack_385f0,0x38400);
        iVar1 = *(int *)(DAT_004778ac + 0x584);
        iVar2 = DAT_004778ac;
      }
      if (iVar1 == 1) {
        FUN_00414cf4(local_44);
        dump_stats(local_38);
        sleep(3);
        return 0;
      }
      if ((*(int *)(iVar2 + 0x588) != 0) && (*(int *)(iVar2 + 0x588) != 3)) goto LAB_00407338;
      iVar2 = FUN_004080b8(auStack_385f0,0x38400);
      if (iVar2 < 1) {
        usleep(10000);
        puts("zbar error");
        iVar2 = DAT_004778ac;
        goto LAB_00407338;
      }
      usleep(10000);
      FUN_00414d98(local_44,local_34);
      FUN_00414da0(local_44,local_4c,local_50);
      FUN_00414dac(local_44,auStack_385f0,local_4c * local_50,0);
      zbar_scan_image(local_38,local_44);
      iVar1 = FUN_00414eec(local_44);
      iVar2 = DAT_004778ac;
      if (iVar1 == 0) goto LAB_00407338;
      local_3c = local_f0;
      do {
        while( true ) {
          uVar3 = FUN_00414880(iVar1);
          pcVar4 = (char *)FUN_00414888(iVar1);
          uVar3 = FUN_0041476c(uVar3);
          FUN_00413f64("rmm.c","zbar_proc",0x79a,"decoded %s symbol \"%s\"\n",uVar3,pcVar4);
          if (*pcVar4 != '\0') break;
LAB_004074bc:
          iVar1 = FUN_00414890(iVar1);
          if (iVar1 == 0) goto LAB_00407848;
        }
        memset(local_b0,0,0x40);
        memset(local_f0,0,0x40);
        memset(auStack_190,0,0x60);
        local_48 = auStack_1f0;
        memset(auStack_1f0,0,0x60);
        memset(local_130,0,0x40);
        local_70 = 0;
        local_6c = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        trans_info(local_48,0x5f,&DAT_00422d14,pcVar4);
        local_30 = auStack_190;
        trans_info(local_30,0x5f,&DAT_00422d18,pcVar4);
        trans_info(&local_70,0x1f,&DAT_00422d1c,pcVar4);
        FUN_0041457c(local_30,local_b0);
        FUN_0041457c(local_48,local_130);
        iVar2 = strlen(local_130);
        FUN_00413e10(local_f0,0x40,0,0x40);
        iVar9 = 0;
        if (0 < iVar2) {
          do {
            bVar5 = local_130[iVar9];
            pbVar8 = local_f0 + iVar9;
            iVar7 = iVar9 % 0x46;
            iVar9 = iVar9 + 1;
            bVar6 = bVar5 ^ (&DAT_00422d20)[iVar7];
            if (bVar6 != 0) {
              bVar5 = bVar6;
            }
            *pbVar8 = bVar5;
          } while (iVar2 != iVar9);
        }
        if ((local_b0[0] == '\0') || ((char)local_70 == '\0')) goto LAB_004074bc;
        FUN_00413f64("rmm.c","zbar_proc",0x7b0,"rmm got /tmp/got_wpa ssid(%s) pwd(%s) bind(%s)\n",
                     local_b0,local_3c,&local_70);
        local_30 = (undefined1 *)0x20000000;
        ioctl(DAT_00477968,0x20007004,0);
        ioctl(DAT_00477968,local_30 + 0x700a,0);
        printf("ssid = %s pwd = %s=========================\n\n",local_b0,local_3c);
        send_wifi_conf_msg(local_b0,local_3c,&local_70);
        FUN_004080b8(auStack_385f0,0x38400);
        if (*(int *)(DAT_004778ac + 0x588) == 3) {
          sleep(0xf);
        }
        else {
          sleep(2);
        }
        FUN_004080b8(auStack_385f0,0x38400);
        iVar1 = FUN_00414890(iVar1);
      } while (iVar1 != 0);
LAB_00407848:
      iVar2 = DAT_004778ac;
      iVar1 = *(int *)(DAT_004778ac + 0x5b8);
    }
    usleep(20000);
    iVar2 = DAT_004778ac;
  } while( true );
}



// ==== _zbar_image_scanner_recycle_syms @ 00414f34 size=500

void _zbar_image_scanner_recycle_syms(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x20);
  do {
    iVar1 = iVar4;
    if (iVar5 == 0) {
LAB_00414f7c:
      uVar2 = *(uint *)(param_2 + 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_2 + 0xc) = 0;
        *(undefined4 *)(param_2 + 8) = 0;
      }
      piVar3 = *(int **)(param_2 + 0x24);
      if (piVar3 != (int *)0x0) {
        pthread_mutex_lock(&DAT_00486b0c);
        iVar4 = *piVar3 + -1;
        *piVar3 = iVar4;
        pthread_mutex_unlock(&DAT_00486b0c);
        if (iVar4 < 0) goto LAB_004150c8;
        if (iVar4 != 0) goto LAB_004150d0;
        _zbar_image_scanner_recycle_syms(param_1,*(undefined4 *)(*(int *)(param_2 + 0x24) + 8));
        *(undefined4 *)(*(int *)(param_2 + 0x24) + 8) = 0;
        FUN_00414a74();
        uVar2 = *(uint *)(param_2 + 4);
        *(undefined4 *)(param_2 + 0x24) = 0;
      }
      uVar6 = 0;
      do {
        if (uVar2 >> ((uVar6 & 0xf) << 1) == 0) goto LAB_00415028;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 5);
      if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        __assert("sym->data","zbar/img_scanner.c",0x9d,"_zbar_image_scanner_recycle_syms");
      }
      free();
      uVar6 = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 4) = 0;
LAB_00415028:
      iVar4 = param_1 + (uVar6 + 6) * 8;
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar4 + 8);
      *(int *)(iVar4 + 8) = param_2;
    }
    else {
      pthread_mutex_lock(&DAT_00486b0c);
      iVar4 = *(int *)(param_2 + 0x1c) + -1;
      *(int *)(param_2 + 0x1c) = iVar4;
      pthread_mutex_unlock(&DAT_00486b0c);
      if (iVar4 < 0) {
LAB_004150c8:
        FUN_00402630();
LAB_004150d0:
                    /* WARNING: Subroutine does not return */
        __assert(&DAT_004254bc,"zbar/img_scanner.c",0x92,"_zbar_image_scanner_recycle_syms");
      }
      if (iVar4 == 0) goto LAB_00414f7c;
      if (*(int *)(param_2 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
        __assert("sym->data_alloc","zbar/img_scanner.c",0x87,"_zbar_image_scanner_recycle_syms");
      }
      *(undefined4 *)(param_2 + 0x20) = 0;
    }
    if (iVar1 == 0) {
      return;
    }
    iVar5 = *(int *)(iVar1 + 0x1c);
    iVar4 = *(int *)(iVar1 + 0x20);
    param_2 = iVar1;
  } while( true );
}



// ==== zbar_scan_image @ 00415edc size=2344

int zbar_scan_image(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  code *pcVar15;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int *local_30;
  
  clock_gettime(0,&local_60);
  param_1[5] = local_60 * 1000 + (local_5c / 500000 + 1) / 2;
  FUN_0041aae0(param_1[2]);
  if ((*param_2 != 0x30303859) && (*param_2 != 0x59455247)) {
    return -1;
  }
  piVar4 = (int *)param_1[0xc];
  param_1[6] = param_2;
  if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
    pthread_mutex_lock(&DAT_00486b0c);
    iVar5 = *piVar4 + -1;
    *piVar4 = iVar5;
    pthread_mutex_unlock(&DAT_00486b0c);
    if (iVar5 < 0) goto LAB_0041677c;
    if (iVar5 == 0) {
      _zbar_image_scanner_recycle_syms(param_1,piVar4[2]);
      iVar5 = param_1[0x1e];
      piVar4[3] = 0;
      piVar4[2] = 0;
      piVar4[1] = 0;
      param_1[0x1e] = iVar5 + 1;
    }
    else {
      param_1[0xc] = 0;
      param_1[0x1d] = param_1[0x1d] + 1;
    }
  }
  local_30 = (int *)param_2[0xc];
  param_2[0xc] = 0;
  if (local_30 == (int *)0x0) {
LAB_00416004:
    local_30 = (int *)param_1[0xc];
joined_r0x00416008:
    if (local_30 == (int *)0x0) {
      local_30 = (int *)FUN_004148a8();
      param_1[0xc] = local_30;
      param_1[0x1c] = param_1[0x1c] + 1;
      FUN_0041490c(local_30,1);
      goto LAB_00416020;
    }
  }
  else {
    pthread_mutex_lock(&DAT_00486b0c);
    iVar5 = *local_30 + -1;
    *local_30 = iVar5;
    pthread_mutex_unlock(&DAT_00486b0c);
    if (iVar5 < 0) {
LAB_0041677c:
      FUN_00402630();
LAB_00416784:
                    /* WARNING: Subroutine does not return */
      __assert("p == data + x + y * (intptr_t)w","zbar/img_scanner.c",0x2e3,"zbar_scan_image");
    }
    if (iVar5 != 0) {
      param_1[0x1f] = param_1[0x1f] + 1;
      goto LAB_00416004;
    }
    _zbar_image_scanner_recycle_syms(param_1,local_30[2]);
    iVar5 = param_1[0x20];
    iVar3 = param_1[0xc];
    local_30[3] = 0;
    local_30[2] = 0;
    local_30[1] = 0;
    param_1[0x20] = iVar5 + 1;
    if (iVar3 != 0) {
      FUN_00414a74(local_30);
      local_30 = (int *)param_1[0xc];
      goto joined_r0x00416008;
    }
    param_1[0xc] = local_30;
  }
  FUN_0041490c(local_30,2);
LAB_00416020:
  uVar11 = param_1[0x1b];
  uVar7 = param_2[1];
  param_2[0xc] = (int)local_30;
  uVar8 = param_2[2];
  local_4c = param_2[3];
  uVar6 = *param_1;
  if (0 < (int)uVar11) {
    if (uVar11 == 0) {
      trap(0x1c00);
    }
    param_1[8] = 0;
    local_58 = (uVar8 - 1) % uVar11 + 1 >> 1;
    if (uVar8 >> 1 < local_58) {
      local_58 = uVar8 >> 1;
    }
    iVar5 = local_58 * uVar7;
    param_1[0xb] = local_58;
    FUN_004169bc(uVar6);
    if (local_58 < uVar8) {
      uVar2 = uVar11 * uVar7;
      local_54 = local_58 + uVar11;
      local_44 = uVar11 * 2;
      local_38 = local_44 * uVar7;
      local_3c = ((iVar5 - local_4c) - local_54 * uVar7) - uVar2;
      local_40 = uVar2 - 1;
      local_34 = ~uVar2;
      local_48 = &DAT_00470000;
      puVar9 = (undefined1 *)(local_4c + iVar5);
      puVar12 = (undefined1 *)(local_4c + local_54 * uVar7 + uVar2);
      do {
        if (*(int *)(local_48 + 0x7890) < 0x80) {
          param_1[9] = 1;
          param_1[7] = 1;
          param_1[10] = 0;
          if (uVar7 != 0) goto LAB_00416128;
LAB_00416598:
          local_50 = 0;
          puVar13 = puVar9;
          uVar11 = local_50;
        }
        else {
          fprintf(stderr,"%s: img_x+: %04d,%04d @%p\n","zbar_scan_image",0,local_58,puVar9);
          param_1[9] = 1;
          param_1[7] = 1;
          param_1[10] = 0;
          if (uVar7 == 0) goto LAB_00416598;
LAB_00416128:
          puVar13 = puVar9 + uVar7;
          do {
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            FUN_00416ac4(uVar6,uVar1);
            uVar11 = uVar7;
          } while (puVar9 != puVar13);
        }
        local_50 = uVar11;
        if (puVar12 + local_4c + local_50 + local_3c != puVar13) {
                    /* WARNING: Subroutine does not return */
          __assert("p == data + x + y * (intptr_t)w","zbar/img_scanner.c",0x29e,"zbar_scan_image");
        }
        uVar10 = *param_1;
        iVar5 = local_50 - 1;
        puVar13 = puVar13 + local_40;
        FUN_004168e8(uVar10);
        FUN_004168e8(uVar10);
        FUN_004169bc(uVar10);
        param_1[0xb] = local_54;
        if (uVar8 <= local_54) break;
        if (0x7f < *(int *)(local_48 + 0x7890)) {
          fprintf(stderr,"%s: img_x-: %04d,%04d @%p\n","zbar_scan_image",iVar5,local_54,puVar13);
        }
        param_1[9] = 0xffffffff;
        param_1[7] = 0xffffffff;
        param_1[10] = uVar7;
        puVar9 = puVar13;
        if (iVar5 != -1) {
          do {
            iVar5 = iVar5 + -1;
            FUN_00416ac4(uVar6,*puVar9);
            puVar9 = puVar9 + -1;
          } while (iVar5 != -1);
          puVar13 = puVar13 + -local_50;
        }
        if (puVar13 != puVar12 + local_34) {
                    /* WARNING: Subroutine does not return */
          __assert("p == data + x + y * (intptr_t)w","zbar/img_scanner.c",0x2b0,"zbar_scan_image");
        }
        uVar10 = *param_1;
        local_58 = local_58 + local_44;
        local_54 = local_54 + local_44;
        FUN_004168e8(uVar10);
        FUN_004168e8(uVar10);
        FUN_004169bc(uVar10);
        param_1[0xb] = local_58;
        puVar9 = puVar12;
        puVar12 = puVar12 + local_38;
      } while (local_58 < uVar8);
    }
  }
  local_38 = param_1[0x1a];
  param_1[7] = 0;
  if (0 < (int)local_38) {
    if (local_38 == 0) {
      trap(0x1c00);
    }
    local_58 = (uVar7 - 1) % local_38 + 1 >> 1;
    if (uVar7 >> 1 < local_58) {
      local_58 = uVar7 >> 1;
    }
    puVar9 = (undefined1 *)(local_4c + local_58);
    param_1[0xb] = local_58;
    if (local_58 < uVar7) {
      local_40 = uVar8 * uVar7;
      local_54 = local_58 + local_38;
      local_44 = local_38 << 1;
      local_3c = local_38 - uVar7;
      local_48 = &DAT_00470000;
      do {
        if (*(int *)(local_48 + 0x7890) < 0x80) {
          param_1[9] = 1;
          param_1[8] = 1;
          param_1[10] = 0;
          if (uVar8 != 0) goto LAB_00416300;
LAB_00416520:
          iVar5 = 0;
          local_50 = 0;
        }
        else {
          fprintf(stderr,"%s: img_y+: %04d,%04d @%p\n","zbar_scan_image",local_58,0,puVar9);
          param_1[9] = 1;
          param_1[8] = 1;
          param_1[10] = 0;
          if (uVar8 == 0) goto LAB_00416520;
LAB_00416300:
          uVar11 = 0;
          puVar12 = puVar9;
          do {
            uVar1 = *puVar12;
            uVar11 = uVar11 + 1;
            puVar12 = puVar12 + uVar7;
            FUN_00416ac4(uVar6,uVar1);
          } while (uVar11 != uVar8);
          puVar9 = puVar9 + local_40;
          iVar5 = local_40;
          local_50 = uVar8;
        }
        if ((undefined1 *)(local_4c + iVar5 + local_58) != puVar9) {
                    /* WARNING: Subroutine does not return */
          __assert("p == data + x + y * (intptr_t)w","zbar/img_scanner.c",0x2d1,"zbar_scan_image");
        }
        uVar10 = *param_1;
        iVar5 = local_50 - 1;
        puVar9 = puVar9 + local_3c;
        FUN_004168e8(uVar10);
        FUN_004168e8(uVar10);
        FUN_004169bc(uVar10);
        param_1[0xb] = local_54;
        if (uVar7 <= local_54) break;
        if (0x7f < *(int *)(local_48 + 0x7890)) {
          fprintf(stderr,"%s: img_y-: %04d,%04d @%p\n","zbar_scan_image",local_54,iVar5,puVar9);
        }
        param_1[9] = 0xffffffff;
        param_1[8] = 0xffffffff;
        param_1[10] = uVar8;
        if (iVar5 != -1) {
          puVar12 = puVar9;
          do {
            uVar1 = *puVar12;
            iVar5 = iVar5 + -1;
            puVar12 = puVar12 + -uVar7;
            FUN_00416ac4(uVar6,uVar1);
          } while (iVar5 != -1);
          puVar9 = puVar9 + local_50 * -uVar7;
        }
        if (puVar9 != (undefined1 *)((local_4c - uVar7) + local_54)) goto LAB_00416784;
        uVar10 = *param_1;
        local_58 = local_58 + local_44;
        puVar9 = (undefined1 *)(local_4c + local_58);
        local_54 = local_54 + local_44;
        FUN_004168e8(uVar10);
        FUN_004168e8(uVar10);
        FUN_004169bc(uVar10);
        param_1[0xb] = local_58;
      } while (local_58 < uVar7);
    }
  }
  param_1[8] = 0;
  param_1[6] = 0;
  _zbar_qr_decode(param_1[2],param_1,param_2);
  iVar5 = local_30[1];
  iVar3 = 0;
  if (iVar5 != 0) {
    if ((param_1[0x17] == 0) && ((local_38 == 1 || (param_1[0x1b] == 1)))) {
      piVar4 = local_30 + 2;
      while (piVar14 = (int *)*piVar4, piVar14 != (int *)0x0) {
        while ((0x16 < *piVar14 - 2U || (2 < piVar14[0xc]))) {
          piVar4 = piVar14 + 8;
          piVar14 = (int *)*piVar4;
          if (piVar14 == (int *)0x0) goto LAB_00416708;
        }
        *piVar4 = piVar14[8];
        local_30[1] = iVar5 + -1;
        piVar14[8] = 0;
        _zbar_image_scanner_recycle_syms(param_1,piVar14);
        iVar5 = local_30[1];
      }
LAB_00416708:
      if (iVar5 == 0) {
        return 0;
      }
      pcVar15 = (code *)param_1[4];
    }
    else {
      pcVar15 = (code *)param_1[4];
    }
    if (pcVar15 == (code *)0x0) {
      return iVar5;
    }
    (*pcVar15)(param_2,param_1[3]);
    iVar3 = local_30[1];
  }
  return iVar3;
}



// ==== _zbar_qr_destroy @ 0041aa60 size=128

void _zbar_qr_destroy(int param_1)

{
  if (0 < DAT_00477890) {
    fprintf(stderr,"%s: max finder lines = %dx%d\n","_zbar_qr_destroy",
            *(undefined4 *)(param_1 + 0xb18),*(undefined4 *)(param_1 + 0xb24));
  }
  if (*(int *)(param_1 + 0xb10) != 0) {
    free();
  }
  if (*(int *)(param_1 + 0xb1c) != 0) {
    free();
  }
  free(param_1);
  return;
}



// ==== _zbar_qr_decode @ 0041dbb0 size=1732

undefined4 _zbar_qr_decode(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  int *piVar23;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int *local_60;
  int local_5c;
  int *local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char *local_48;
  char *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int local_34;
  int local_30;
  
  iVar14 = *(int *)(param_1 + 0xb14);
  if (8 < iVar14) {
    iVar17 = *(int *)(param_1 + 0xb20);
    if (8 < iVar17) {
      uVar12 = *(undefined4 *)(param_1 + 0xb1c);
      uVar19 = *(undefined4 *)(param_1 + 0xb10);
      local_50 = malloc(iVar14 << 2);
      local_58 = (int *)malloc((iVar14 >> 1) << 3);
      iVar14 = FUN_004179b4(local_58,local_50,uVar19,iVar14,0);
      qsort(uVar12,iVar17,0x14,&LAB_00417264);
      local_4c = malloc(iVar17 << 2);
      local_60 = (int *)malloc((iVar17 >> 1) << 3);
      iVar17 = FUN_004179b4(local_60,local_4c,uVar12,iVar17,1);
      if ((iVar14 < 3) || (iVar17 < 3)) {
        local_5c = 0;
        local_30 = 0;
        local_54 = 0;
      }
      else {
        iVar21 = 0;
        piVar3 = local_58;
        do {
          piVar16 = piVar3 + 1;
          piVar3 = piVar3 + 2;
          iVar21 = iVar21 + *piVar16;
        } while (piVar3 != local_58 + iVar14 * 2);
        piVar3 = local_60;
        do {
          piVar16 = piVar3 + 1;
          piVar3 = piVar3 + 2;
          iVar21 = iVar21 + *piVar16;
        } while (piVar3 != local_60 + iVar17 * 2);
        local_54 = malloc(iVar21 * 0x20);
        iVar21 = iVar14;
        if (iVar17 < iVar14) {
          iVar21 = iVar17;
        }
        local_5c = malloc(iVar21 << 4);
        local_38 = (int *)malloc(iVar14 << 2);
        iVar21 = malloc(iVar17 << 2);
        local_44 = (char *)calloc(iVar14,1);
        local_48 = (char *)calloc(iVar17,1);
        piVar3 = local_38;
        local_30 = 0;
        pcVar15 = local_48 + iVar17;
        pcVar18 = local_44 + iVar14;
        iVar20 = 1;
        iVar17 = local_54;
        piVar16 = local_58;
        pcVar2 = local_44;
        local_40 = param_1;
        local_3c = param_3;
        do {
          if (*pcVar2 == '\0') {
            iVar13 = 0;
            iVar10 = 0;
            piVar8 = *(int **)(*piVar16 + (piVar16[1] >> 1) * 4);
            piVar23 = local_60;
            pcVar22 = local_48;
            do {
              if (*pcVar22 == '\0') {
                piVar4 = *(int **)(*piVar23 + (piVar23[1] >> 1) * 4);
                if ((*piVar8 <= *piVar4) && (*piVar4 < *piVar8 + piVar8[2])) {
                  iVar5 = piVar4[1];
                  if (iVar5 <= piVar8[1]) {
                    iVar9 = piVar4[2];
                    if (piVar8[1] < iVar5 + iVar9) {
                      iVar6 = piVar4[3];
                      *pcVar22 = '\x01';
                      iVar10 = iVar10 + iVar9 + iVar5 * 2;
                      if ((0 < iVar6) && (0 < piVar4[4])) {
                        iVar10 = iVar10 + (piVar4[4] - iVar6);
                      }
                      iVar5 = iVar13 * 4;
                      iVar13 = iVar13 + 1;
                      *(int **)(iVar21 + iVar5) = piVar23;
                    }
                  }
                }
              }
              pcVar22 = pcVar22 + 1;
              piVar23 = piVar23 + 2;
            } while (pcVar22 != pcVar15);
            if (iVar13 != 0) {
              iVar5 = *piVar8 * 2 + piVar8[2];
              if ((0 < piVar8[3]) && (0 < piVar8[4])) {
                iVar5 = iVar5 + (piVar8[4] - piVar8[3]);
              }
              *piVar3 = (int)piVar16;
              piVar23 = *(int **)(iVar21 + (iVar13 >> 1) * 4);
              piVar23 = *(int **)(*piVar23 + (piVar23[1] >> 1) * 4);
              if (iVar20 < iVar14) {
                iVar6 = 1;
                pcVar22 = pcVar2 + 1;
                piVar8 = piVar16;
                do {
                  piVar4 = piVar8 + 2;
                  iVar9 = iVar6;
                  if (*pcVar22 == '\0') {
                    piVar8 = *(int **)(*piVar4 + (piVar8[3] >> 1) * 4);
                    iVar7 = *piVar8;
                    if ((iVar7 <= *piVar23) && (iVar11 = piVar8[2], *piVar23 < iVar7 + iVar11)) {
                      if ((piVar23[1] <= piVar8[1]) && (piVar8[1] < piVar23[1] + piVar23[2])) {
                        iVar9 = piVar8[3];
                        *pcVar22 = '\x01';
                        iVar5 = iVar5 + iVar11 + iVar7 * 2;
                        if ((0 < iVar9) && (0 < piVar8[4])) {
                          iVar5 = iVar5 + (piVar8[4] - iVar9);
                        }
                        iVar9 = iVar6 + 1;
                        piVar3[iVar6] = (int)piVar4;
                      }
                    }
                  }
                  pcVar22 = pcVar22 + 1;
                  iVar6 = iVar9;
                  piVar8 = piVar4;
                } while (pcVar22 != pcVar18);
                iVar6 = iVar9 << 1;
              }
              else {
                iVar6 = 2;
                iVar9 = 1;
              }
              if (iVar6 == 0) {
                trap(0x1c00);
              }
              local_38 = (int *)(local_5c + local_30 * 0x10);
              local_38[2] = iVar17;
              local_30 = local_30 + 1;
              if (iVar13 << 1 == 0) {
                trap(0x1c00);
              }
              *local_38 = (iVar5 + iVar9) / iVar6;
              local_38[1] = (iVar13 + iVar10) / (iVar13 << 1);
              local_34 = iVar17;
              uVar12 = FUN_00417298(iVar17,0,piVar3,iVar9,0);
              iVar17 = FUN_00417298(local_34,uVar12,iVar21,iVar13,1);
              local_38[3] = iVar17;
              iVar17 = local_34 + iVar17 * 0x10;
            }
          }
          param_3 = local_3c;
          param_1 = local_40;
          piVar16 = piVar16 + 2;
          bVar1 = iVar20 < iVar14;
          iVar20 = iVar20 + 1;
          pcVar2 = pcVar2 + 1;
        } while (bVar1);
        local_38 = piVar3;
        free(local_48);
        free(local_44);
        free(iVar21);
        free(local_38);
        qsort(local_5c,local_30,0x10,&LAB_00417360);
      }
      free(local_60);
      free(local_4c);
      free(local_58);
      free(local_50);
      if (0xd < DAT_00477890) {
        fprintf(stderr,"%s: %dx%d finders, %d centers:\n","_zbar_qr_decode",
                *(undefined4 *)(param_1 + 0xb14),*(undefined4 *)(param_1 + 0xb20),local_30);
      }
      uVar12 = 0;
      if (2 < local_30) {
        uVar19 = FUN_00420e74(*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 4),
                              *(undefined4 *)(param_3 + 8));
        local_70 = 0;
        local_68 = 0;
        local_6c = 0;
        FUN_0041ab68(param_1,&local_70,local_5c,local_30,uVar19,*(undefined4 *)(param_3 + 4),
                     *(undefined4 *)(param_3 + 8));
        if (local_6c < 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = qr_code_data_list_extract_text(&local_70,param_2,param_3);
        }
        FUN_0041aaec(&local_70);
        free(uVar19);
      }
      if (local_5c != 0) {
        free(local_5c);
      }
      if (local_54 == 0) {
        return uVar12;
      }
      free(local_54);
      return uVar12;
    }
  }
  return 0;
}



