/* rmm — C-runtime entry / init stubs
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "rmm.h"

// ==== _init @ 004024bc size=72

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00404dbc();
  iVar1 = FUN_00421f60();
  return iVar1;
}



// ==== _ftext @ 00402510 size=12

void _ftext(void)

{
  FUN_004122c8();
  return;
}



// ==== main @ 0040440c size=2064

int main(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_148 [256];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  int local_30;
  
  iVar3 = *param_2;
  iVar2 = strrchr(iVar3,0x2f);
  if (iVar2 != 0) {
    iVar3 = iVar2 + 1;
  }
  signal(0x12,1);
  FUN_00413e10(&DAT_004778a0,0xf1f4,0,0xf1f4);
  FUN_00408008("realtek",&PTR_FUN_00424864);
  iVar3 = strcmp(iVar3,"aacplay");
  if (iVar3 == 0) {
    DAT_00486a90 = 1;
    if (param_1 < 2) {
      fprintf(stderr,"Usage:%s <filename> [ms]",*param_2);
      iVar3 = -1;
    }
    else {
      if (param_1 == 2) {
        iVar3 = 2000;
      }
      else {
        iVar3 = atoi(param_2[2]);
        if (iVar3 < 1) {
          iVar3 = 2000;
        }
      }
      FUN_0040bc78(param_2[1],iVar3);
      iVar3 = 0;
    }
  }
  else {
    iVar3 = FUN_0041439c(&DAT_004778a4,"/ipc_dispatch");
    if (iVar3 < 0) {
      FUN_00413f64("rmm.c",&DAT_0042349c,0x8d6,"init_mqueue MQ_NAME_DISPATCH fail");
      iVar3 = -1;
    }
    else {
      iVar3 = FUN_0041439c(&DAT_004778a8,"/ipc_rmm");
      if (iVar3 < 0) {
        FUN_00413f64("rmm.c",&DAT_0042349c,0x8db,"init_mqueue MQ_NAME_RMM fail");
        iVar3 = -1;
      }
      else {
        iVar3 = FUN_00402570();
        if (iVar3 < 0) {
          FUN_00413f64("rmm.c",&DAT_0042349c,0x8e1,"fshare_create fail");
          iVar3 = -1;
        }
        else {
          DAT_004778ac = FUN_00414420("/tmp/mmap.info",0xaa0);
          if (DAT_004778ac == 0) {
            FUN_00413f64("rmm.c",&DAT_0042349c,0x8e7,"create_sharemem MMAP_FILE_NAME fail");
            iVar3 = -1;
          }
          else {
            iVar3 = *(int *)(DAT_004778ac + 0x50c);
            while (iVar3 == 0) {
              ms_sleep(0x32);
              iVar3 = *(int *)(DAT_004778ac + 0x50c);
            }
            DAT_00436b74 = (char *)(DAT_004778ac + 0x1f5);
            FUN_00407a40();
            DAT_00486a84 = *(undefined4 *)(DAT_004778ac + 0x4f8);
            DAT_00486a88 = *(undefined4 *)(DAT_004778ac + 0x4fc);
            iVar3 = access("/dev/cpld_periph",0);
            if (iVar3 == 0) {
              DAT_00477968 = open("/dev/cpld_periph",2);
            }
            iVar3 = access("/tmp/sd/debug_msg",0);
            if (((iVar3 != 0) && (*DAT_00436b74 == '1')) &&
               (iVar3 = access("/dev/ssp",0), iVar3 == 0)) {
              DAT_0047796c = open("/dev/ssp",2);
            }
            DAT_00486a80 = 0;
            while( true ) {
              memset(auStack_148,0,0x100);
              iVar3 = FUN_004141ac("ps|grep \"\\<aacplay\\>\"|grep -v grep",auStack_148,0x100,1);
              if (iVar3 < 1) break;
              usleep(50000);
            }
            ioctl(DAT_00477968,0x20007011,0);
            (*(code *)PTR_cb_init_004249d0)(&DAT_00436b70,DAT_00436978);
            (*(code *)PTR_FUN_00424864)(0);
            puVar1 = PTR_init_raw_stream_00424868;
            (*(code *)PTR_init_raw_stream_00424868)(0);
            iVar3 = pthread_create(auStack_34,0,FUN_00406604,0);
            if (iVar3 < 0) {
              FUN_00413f64("rmm.c",&DAT_0042349c,0x943,"pthread_create failed ret[%d]\n",iVar3);
            }
            else {
              if ((*(int *)(DAT_004778ac + 0x5bc) == 1) &&
                 (iVar3 = access("/tmp/rmm_skip_zbar",0), iVar3 == -1)) {
                FUN_00411334();
                zbar_proc();
              }
              else {
                DAT_00436bd9 = '\x01';
                system("echo 3 > /proc/sys/vm/drop_caches");
              }
              (*(code *)puVar1)(2);
              iVar3 = access("/home/app/script/factory_test.sh",0);
              if (((iVar3 != 0) || (iVar3 = access("/tmp/sd/Factory/factory_test.sh",0), iVar3 != 0)
                  ) && (*(char *)(DAT_004778ac + 0x9f0) == '\0')) {
                while ((DAT_00436bd9 == '\0' || (*(int *)(DAT_004778ac + 0x5a0) == 0))) {
                  ms_sleep(0x14);
                }
              }
              if (*(int *)(DAT_004778ac + 0x600) == 1) {
                media_rtl_set_flip(1);
              }
              else {
                media_rtl_set_flip(0);
              }
              if (*(int *)(DAT_004778ac + 0x4dc) < 0x29) {
                media_rtl_set_ldc(0);
              }
              else {
                media_rtl_set_ldc(1);
              }
              (*(code *)PTR_FUN_00424874)();
              iVar3 = pthread_create(auStack_38,0,FUN_0040801c,&DAT_00436bd4);
              if (iVar3 < 0) {
                puts("\n\npthread creat media_rtl_get_videostream fail!!!\n");
              }
              else {
                puts("\n\npthread creat media_rtl_get_videostream ok!!!\n");
                iVar3 = pthread_create(auStack_3c,0,FUN_0040801c,&DAT_00436974);
                if (iVar3 < 0) {
                  puts("\n\npthread creat media_rtl_get_videostream 1 fail!!!\n");
                }
                else {
                  puts("\n\npthread creat media_rtl_get_videostream 1 ok!!!\n");
                  iVar3 = pthread_create(auStack_44,0,&LAB_004081a8,0);
                  if ((((-1 < iVar3) &&
                       (iVar3 = pthread_create(auStack_48,0,&LAB_004058a4,0), -1 < iVar3)) &&
                      (iVar3 = pthread_create(auStack_40,0,abnormal_sound_detection_func,0),
                      -1 < iVar3)) &&
                     (iVar3 = pthread_create(auStack_148,0,daynight_switch_func,0), -1 < iVar3)) {
                    iVar3 = *(int *)(DAT_004778ac + 0x89c);
                    do {
                      if ((iVar3 == 1) || (*(int *)(DAT_004778ac + 0x608) == 1)) {
                        if (((DAT_00477950 == 1) &&
                            ((*(int *)(DAT_004778ac + 0x8a0) - 2U < 2 && (_fdata != 100)))) &&
                           (*(int *)(DAT_004778ac + 0x4b0) != 2)) {
                          _fdata = 100;
                          local_30 = DAT_00477950;
                          ioctl(DAT_00477968,0x20007013,&_fdata);
                          DAT_00477a34 = local_30;
                        }
                        if (*(int *)(DAT_004778ac + 0x608) == 1) {
                          _fdata = 0;
                          ioctl(DAT_00477968,0x20007013,&_fdata);
                          set_light_switch(0);
                          DAT_00436bdc = 0;
                        }
                        else {
                          DAT_00436bdc = 0;
                        }
                      }
                      else {
                        if (*(byte *)(DAT_004778ac + 0x9ed) != DAT_00436b7c) {
                          printf(&DAT_004232dc,"auto_loop_func",0x4b9,DAT_00436b7c,
                                 (uint)*(byte *)(DAT_004778ac + 0x9ed));
                          DAT_00436b7c = (uint)*(byte *)(DAT_004778ac + 0x9ed);
                          set_light_switch(DAT_00436b7c == 1);
                        }
                        if (DAT_00477950 == DAT_00436b78) {
                          if ((_fdata == 0) && (DAT_00477950 == 1)) {
                            FUN_004055bc(1);
                            _fdata = 100;
                          }
                        }
                        else {
                          FUN_00413f64("rmm.c","auto_loop_func",0x4c0,
                                       "gIsGraySwitchLocal change to [%d]\n",DAT_00477950);
                          DAT_00436b78 = DAT_00477950;
                          media_venc_set_color2grey(DAT_00477950);
                          FUN_004055bc(DAT_00436b78);
                          if (DAT_00477950 == 1) {
                            DAT_00436bdc = DAT_00436bdc + 1;
                          }
                          DAT_00477a34 = 0;
                        }
                      }
                      sleep(1);
                      iVar3 = *(int *)(DAT_004778ac + 0x89c);
                    } while( true );
                  }
                }
              }
            }
            (*(code *)PTR_cb_deinit_004249d4)(&DAT_00436b70);
            DAT_00436b70 = 0;
          }
        }
      }
    }
  }
  return iVar3;
}



// ==== _fini @ 004221b0 size=56

void _fini(void)

{
  FUN_00404d0c();
  return;
}



