/* rts_cam — miscellaneous functions
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rts_cam.h"

// ==== rts_test_bit @ 0001023c size=28

uint rts_test_bit(int param_1,uint param_2)

{
  return (int)(uint)*(byte *)(param_1 + ((int)param_2 >> 3)) >> (param_2 & 7) & 1;
}



// ==== rts_clear_bit @ 00010258 size=40

void rts_clear_bit(int param_1,uint param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + ((int)param_2 >> 3));
  *pbVar1 = ~(byte)(1 << (param_2 & 7)) & *pbVar1;
  return;
}



// ==== find_format_by_fourcc @ 0001069c size=40

void find_format_by_fourcc(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x158); (iVar1 != 0 && (param_2 != *(int *)(iVar1 + 0x24)));
      iVar1 = *(int *)(iVar1 + 100)) {
  }
  return;
}



// ==== find_frame @ 000109a4 size=52

void find_frame(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x30);
      (piVar1 != (int *)0x0 && ((*piVar1 != param_2 || (piVar1[1] != param_3))));
      piVar1 = (int *)piVar1[9]) {
  }
  return;
}



// ==== Camera @ 000138c4 size=3408

int Camera(int param_1,uint param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  code *pcVar12;
  
  iVar3 = video_devdata();
  piVar4 = (int *)dev_get_drvdata(iVar3 + 8);
  iVar8 = *piVar4;
  iVar3 = *(int *)(param_1 + 0x70);
  if (param_2 < 0xc018564a) {
    if (0xc0185646 < param_2) goto LAB_00013d4c;
    if (param_2 != 0x80085618) {
      if (0x80085618 < param_2) {
        if (param_2 != 0xc0047202) {
          if (param_2 < 0xc0047203) {
            if (0x8020565b < param_2) {
              if (param_2 == 0xc0045627) {
                iVar8 = v4l2_prio_check(*(undefined4 *)(piVar4[2] + 0xd4),
                                        *(undefined4 *)(iVar3 + 0x10));
                if (iVar8 < 0) {
                  return iVar8;
                }
                mutex_lock(piVar4 + 0x4e);
                iVar8 = FUN_00012558(iVar3);
                if (iVar8 < 0) {
                  mutex_unlock(piVar4 + 0x4e);
                  return iVar8;
                }
                if (*param_3 == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = -0x16;
                  FUN_00011df0(iVar3);
                }
LAB_000142ac:
                mutex_unlock(piVar4 + 0x4e);
                goto LAB_000144fc;
              }
              goto LAB_000144c8;
            }
            if (0x80205659 < param_2) goto LAB_0001448c;
            uVar11 = 0x8014563c;
LAB_000139a8:
            if (param_2 != uVar11) goto LAB_000144c8;
            goto LAB_0001448c;
          }
          if (param_2 != 0xc0087201) {
            if (0xc0087201 < param_2) {
              uVar11 = 0xc014563b;
              if (param_2 == 0xc0145608) {
                if (param_3 == (int *)0x0) {
                  return -0x16;
                }
                if (param_3[2] != 1) {
                  return -0x16;
                }
                iVar8 = v4l2_prio_check(*(undefined4 *)(piVar4[2] + 0xd4),
                                        *(undefined4 *)(iVar3 + 0x10));
                if (iVar8 < 0) {
                  return iVar8;
                }
                mutex_lock(piVar4 + 0x4e);
                iVar8 = FUN_00012558(iVar3);
                if (iVar8 < 0) {
                  mutex_unlock(piVar4 + 0x4e);
                  return iVar8;
                }
                mutex_lock(piVar4 + 0x51);
                iVar7 = vb2_reqbufs(piVar4 + 3,param_3);
                if ((iVar7 == 0) && (*param_3 != 0)) {
                  rtscam_init_capture_buffer(piVar4);
                }
                mutex_unlock(piVar4 + 0x51);
                if ((iVar7 == 0) && (*param_3 != 0)) {
                  piVar4[0x6d] = param_1;
                }
                else {
                  FUN_00011df0(iVar3);
                }
                goto LAB_000142ac;
              }
              goto LAB_000139a8;
            }
            if (1 < param_2 + 0x3ff7a9e5) goto LAB_000144c8;
          }
        }
LAB_00013d4c:
        iVar7 = rtscam_video_do_ctrl_ioctl(iVar8,param_2,param_3);
        goto LAB_000144fc;
      }
      if (param_2 != 0x4008563f) {
        if (0x4008563f < param_2) {
          if (param_2 == 0x80045612) {
            if (*param_3 != piVar4[3]) {
              return -0x16;
            }
            iVar7 = v4l2_prio_check(*(undefined4 *)(piVar4[2] + 0xd4),*(undefined4 *)(iVar3 + 0x10))
            ;
            if (iVar7 < 0) {
              return iVar7;
            }
            if (*(int *)(iVar3 + 0x34) != 1) {
              return -0x10;
            }
            mutex_lock(iVar8 + 0x84);
            mutex_lock(piVar4 + 0x4e);
            uVar6 = 1;
          }
          else {
            if (param_2 < 0x80045613) {
              uVar11 = 0x8004560e;
              if (param_2 != 0x40685600) goto LAB_000139a8;
              strlcpy(param_3,*(undefined4 *)(iVar8 + 0x74),0x10);
              if (*(int *)(*piVar4 + 0x78) != 0) {
                strlcpy(param_3 + 4,*(int *)(*piVar4 + 0x78),0x20);
              }
              param_3[0x15] = 0x4000001;
              goto LAB_000145a0;
            }
            if (param_2 != 0x80045613) {
              if (param_2 == 0x80045644) {
                iVar8 = v4l2_prio_check(*(undefined4 *)(piVar4[2] + 0xd4),
                                        *(undefined4 *)(iVar3 + 0x10));
                if (iVar8 < 0) {
                  return iVar8;
                }
                iVar7 = v4l2_prio_change(*(undefined4 *)(piVar4[2] + 0xd4),iVar3 + 0x10,*param_3);
                goto LAB_000144fc;
              }
              goto LAB_000144c8;
            }
            if (*param_3 != piVar4[3]) {
              return -0x16;
            }
            iVar7 = v4l2_prio_check(*(undefined4 *)(piVar4[2] + 0xd4),*(undefined4 *)(iVar3 + 0x10))
            ;
            if (iVar7 < 0) {
              return iVar7;
            }
            if (*(int *)(iVar3 + 0x34) != 1) {
              return -0x10;
            }
            mutex_lock(iVar8 + 0x84);
            mutex_lock(piVar4 + 0x4e);
            uVar6 = 0;
          }
          iVar7 = FUN_000135a8(piVar4,uVar6);
          mutex_unlock(piVar4 + 0x4e);
          mutex_unlock(iVar8 + 0x84);
          goto LAB_000144fc;
        }
        if (param_2 == 0x40045626) {
          *param_3 = 0;
LAB_000145a0:
          iVar7 = 0;
          goto LAB_000144fc;
        }
        if (param_2 < 0x40045627) {
          uVar11 = 0x20005646;
        }
        else {
          if (param_2 == 0x40045643) {
            iVar3 = v4l2_prio_max(*(undefined4 *)(piVar4[2] + 0xd4));
            *param_3 = iVar3;
            goto LAB_000145a0;
          }
          uVar11 = 0x40085617;
        }
        goto LAB_000139a8;
      }
    }
LAB_0001448c:
    iVar7 = -0x19;
    if ((rtscam_debug & 8) != 0) {
      printk(&_LC20,param_2);
    }
    goto LAB_000144fc;
  }
  if (param_2 == 0xc044560f) {
    if (*(int *)(iVar3 + 0x34) != 1) {
      return -0x10;
    }
    mutex_lock(piVar4 + 0x51);
    pcVar12 = vb2_qbuf;
LAB_00014328:
    iVar7 = (*pcVar12)(piVar4 + 3,param_3);
LAB_0001437c:
    mutex_unlock(piVar4 + 0x51);
    goto LAB_000144fc;
  }
  if (param_2 < 0xc0445610) {
    if (param_2 == 0xc034564b) {
      pcVar5 = (char *)get_video_frmival(piVar4,param_3[1],param_3[2],param_3[3]);
      iVar7 = -0x16;
      if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) goto LAB_000144fc;
      if (pcVar5[1] == '\0') {
        iVar3 = 0;
        for (piVar4 = *(int **)(pcVar5 + 4); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
          bVar1 = *param_3 == iVar3;
          iVar3 = iVar3 + 1;
          if (bVar1) {
            param_3[4] = 1;
            param_3[5] = *piVar4;
            param_3[6] = piVar4[1];
            goto LAB_000145a0;
          }
        }
      }
      else if (*param_3 == 0) {
        param_3[4] = 3;
        param_3[7] = *(int *)(pcVar5 + 4);
        param_3[8] = *(int *)(pcVar5 + 8);
        param_3[5] = *(int *)(pcVar5 + 0xc);
        param_3[6] = *(int *)(pcVar5 + 0x10);
        param_3[9] = *(int *)(pcVar5 + 0x14);
        param_3[10] = *(int *)(pcVar5 + 0x18);
        goto LAB_000145a0;
      }
    }
    else {
      if (0xc034564b < param_2) {
        if (param_2 < 0xc0405660) {
          if (0xc040565d < param_2) goto LAB_0001448c;
          if (param_2 == 0xc0405602) {
            iVar3 = 0;
            if (param_3[1] == *(int *)(iVar8 + 0x80)) {
              for (iVar8 = piVar4[0x56]; iVar7 = -0x16, iVar8 != 0; iVar8 = *(int *)(iVar8 + 100)) {
                if (iVar3 == *param_3) {
                  strlcpy(param_3 + 3,iVar8 + 4,0x20);
                  param_3[0xb] = *(int *)(iVar8 + 0x24);
                  goto LAB_000145a0;
                }
                iVar3 = iVar3 + 1;
              }
              goto LAB_000144fc;
            }
            goto LAB_00014134;
          }
        }
        else if (param_2 == 0xc0445609) {
          if (*(int *)(iVar3 + 0x34) != 1) {
            return -0x10;
          }
          mutex_lock(piVar4 + 0x51);
          pcVar12 = vb2_querybuf;
          goto LAB_00014328;
        }
LAB_000144c8:
        iVar7 = -0x19;
        if ((rtscam_debug & 1) != 0) {
          printk(&_LC21,param_2,param_2 >> 8 & 0xff,param_2 & 0xff);
        }
        goto LAB_000144fc;
      }
      if (param_2 != 0xc02c564a) {
        uVar11 = 0xc02c563a;
        if (param_2 < 0xc02c564b) goto LAB_000139a8;
        if (1 < param_2 + 0x3fcba9bf) goto LAB_000144c8;
        goto LAB_0001448c;
      }
      iVar3 = find_format_by_fourcc(piVar4,param_3[1]);
      iVar7 = -0x16;
      if ((iVar3 == 0) || (*(char *)(iVar3 + 0x2b) == '\0')) goto LAB_000144fc;
      if (*(char *)(iVar3 + 0x2c) == '\0') {
        iVar8 = 0;
        for (piVar4 = *(int **)(iVar3 + 0x30); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[9]) {
          bVar1 = *param_3 == iVar8;
          iVar8 = iVar8 + 1;
          if (bVar1) {
            param_3[2] = 1;
            param_3[3] = *piVar4;
            param_3[4] = piVar4[1];
            goto LAB_000145a0;
          }
        }
      }
      else if (*param_3 == 0) {
        param_3[2] = 3;
        param_3[4] = *(int *)(iVar3 + 0x30);
        param_3[7] = *(int *)(iVar3 + 0x34);
        param_3[3] = *(int *)(iVar3 + 0x38);
        param_3[6] = *(int *)(iVar3 + 0x3c);
        param_3[5] = *(int *)(iVar3 + 0x40);
        param_3[8] = *(int *)(iVar3 + 0x44);
        goto LAB_000145a0;
      }
    }
  }
  else {
    if (param_2 != 0xc050561a) {
      if (param_2 < 0xc050561b) {
        if (param_2 == 0xc0445624) goto LAB_00013d4c;
        if (0xc0445624 < param_2) {
          uVar11 = 0xc0485630;
          if (param_2 != 0xc0485619) goto LAB_000139a8;
          goto LAB_0001448c;
        }
        if (param_2 != 0xc0445611) goto LAB_000144c8;
        if (*(int *)(iVar3 + 0x34) != 1) {
          return -0x10;
        }
        uVar11 = *(uint *)(param_1 + 0x1c);
        mutex_lock(piVar4 + 0x51);
        iVar7 = vb2_dqbuf(piVar4 + 3,param_3,(uVar11 & 0x80) != 0);
        goto LAB_0001437c;
      }
      if (param_2 == 0xc0cc5615) {
        if (*param_3 == *(int *)(iVar8 + 0x80)) {
          param_3[1] = 0x1000;
          param_3[2] = 0;
          if ((piVar4[0x47] & 1U) == 0) {
            param_3[3] = piVar4[0x57];
            iVar3 = piVar4[0x58];
          }
          else {
            param_3[3] = piVar4[0x59];
            iVar3 = piVar4[0x5a];
          }
          param_3[4] = iVar3;
          param_3[5] = 0;
          param_3[6] = 0;
          goto LAB_000145a0;
        }
        goto LAB_00014134;
      }
      if (param_2 < 0xc0cc5616) {
        if (param_2 == 0xc0cc5604) {
          if ((*param_3 == *(int *)(iVar8 + 0x80)) &&
             (iVar3 = find_format_by_fourcc(piVar4,piVar4[0x62]), iVar3 != 0)) {
            param_3[3] = piVar4[0x62];
            param_3[1] = piVar4[99];
            param_3[2] = piVar4[100];
            param_3[5] = piVar4[0x65];
            param_3[6] = piVar4[0x66];
            param_3[4] = (uint)*(byte *)(iVar3 + 3);
            param_3[7] = (uint)*(byte *)(iVar3 + 2);
            goto LAB_000145a0;
          }
          goto LAB_00014134;
        }
        if (param_2 != 0xc0cc5605) goto LAB_000144c8;
        iVar8 = v4l2_prio_check(*(undefined4 *)(piVar4[2] + 0xd4),*(undefined4 *)(iVar3 + 0x10));
        piVar9 = piVar4 + 0x4e;
        if (iVar8 < 0) {
          return iVar8;
        }
        piVar10 = piVar4 + 0x51;
        mutex_lock(piVar9);
        mutex_lock(piVar10);
        iVar8 = piVar4[0x2f];
        mutex_unlock(piVar10);
        if (iVar8 != 0) {
          mutex_unlock(piVar9);
          return -0x10;
        }
        iVar8 = FUN_00012558(iVar3);
        if (iVar8 < 0) {
          mutex_unlock(piVar9);
          return iVar8;
        }
        iVar7 = FUN_000123d4(piVar4,param_3);
        if (iVar7 == 0) {
          mutex_lock(piVar10);
          iVar8 = piVar4[0x2f];
          mutex_unlock(piVar10);
          if (iVar8 != 0) {
            iVar7 = -0x10;
            goto LAB_000145c8;
          }
          iVar7 = -0x10;
          if ((piVar4[0x47] & 1U) != 0) goto LAB_000145c8;
          iVar8 = find_format_by_fourcc(piVar4,param_3[3]);
          iVar7 = rtscam_set_user_format(piVar4,param_3[3],param_3[1],param_3[2]);
          if (iVar7 != 0) goto LAB_000145c8;
          param_3[4] = (uint)*(byte *)(iVar8 + 3);
          param_3[5] = piVar4[0x65];
          param_3[6] = piVar4[0x66];
        }
        else {
LAB_000145c8:
          FUN_00011df0(iVar3);
        }
        mutex_unlock(piVar9);
        goto LAB_000144fc;
      }
      if (param_2 != 0xc0cc5616) {
        if (param_2 == 0xc0cc5640) {
          iVar7 = FUN_000123d4(piVar4,param_3);
          goto LAB_000144fc;
        }
        goto LAB_000144c8;
      }
      iVar8 = v4l2_prio_check(*(undefined4 *)(piVar4[2] + 0xd4),*(undefined4 *)(iVar3 + 0x10));
      piVar9 = piVar4 + 0x4e;
      if (iVar8 < 0) {
        return iVar8;
      }
      mutex_lock(piVar9);
      iVar8 = FUN_00012558(iVar3);
      if (iVar8 < 0) {
        mutex_unlock(piVar9);
        return iVar8;
      }
      if (*param_3 == *(int *)(*piVar4 + 0x80)) {
        iVar7 = rtscam_set_user_frmival(piVar4,param_3[3],param_3[4]);
        if (iVar7 != 0) goto LAB_000140e0;
      }
      else {
        iVar7 = -0x16;
LAB_000140e0:
        FUN_00011df0(iVar3);
      }
      mutex_unlock(piVar9);
      goto LAB_000144fc;
    }
    if (*param_3 == 0) {
      piVar4 = param_3 + 1;
      param_3[9] = 2;
      pcVar5 = "Camera";
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *(char *)piVar4 = cVar2;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (cVar2 != '\0');
      iVar7 = 0;
      goto LAB_000144fc;
    }
  }
LAB_00014134:
  iVar7 = -0x16;
LAB_000144fc:
  if ((rtscam_debug & 0x80) != 0) {
    printk(&_LC22,param_2,param_2 >> 8 & 0xff,param_2 & 0xff,param_2 & 0xff);
  }
  return iVar7;
}



// ==== get_video_frmival @ 000166c8 size=316

int get_video_frmival(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = find_format_by_fourcc();
  if (iVar1 == 0) {
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC5,param_2 & 0xff,param_2 >> 8 & 0xff,param_2 >> 0x10 & 0xff,param_2 >> 0x18);
    }
  }
  else if (*(byte *)(iVar1 + 0x2c) - 1 < 2) {
    if ((((*(uint *)(iVar1 + 0x38) <= param_3) && (param_3 <= *(uint *)(iVar1 + 0x30))) &&
        ((param_3 - *(uint *)(iVar1 + 0x38)) % *(uint *)(iVar1 + 0x40) == 0)) &&
       (((*(uint *)(iVar1 + 0x3c) <= param_4 && (param_4 <= *(uint *)(iVar1 + 0x34))) &&
        ((param_4 - *(uint *)(iVar1 + 0x3c)) % *(uint *)(iVar1 + 0x44) == 0)))) {
      return iVar1 + 0x48;
    }
  }
  else if ((*(byte *)(iVar1 + 0x2c) == 0) && (iVar1 = find_frame(iVar1,param_3,param_4), iVar1 != 0)
          ) {
    return iVar1 + 8;
  }
  return 0;
}



// ==== init_module @ 00016950 size=228

int init_module(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = register_chrdev_region(0x5200000,0x100,"rts_camera");
  if (iVar1 < 0) {
    if ((rtscam_debug & 1) != 0) {
      printk(&_LC9,0x52);
    }
  }
  else {
    iVar2 = __class_register(&PTR__LC6_0001781c,0x10000);
    iVar1 = 0;
    if (iVar2 < 0) {
      if ((rtscam_debug & 1) != 0) {
        printk(&_LC10);
      }
      unregister_chrdev_region(0x5200000,0x100);
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



// ==== cleanup_module @ 00016a34 size=56

void cleanup_module(void)

{
  class_unregister(&PTR__LC6_0001781c);
  unregister_chrdev_region(0x5200000,0x100);
  return;
}



