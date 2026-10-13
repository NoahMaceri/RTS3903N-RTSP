/* p2p_tnp — "pppp" subsystem
 * Ghidra decompilation of the Yi r10m firmware (sstripped MIPS32 LE).
 * Machine-generated pseudocode — navigable, not buildable. See README.md.
 */
#include "p2p_tnp.h"

// ==== PPPP_Close @ 00414120 size=136

undefined4 PPPP_Close(undefined4 param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6c98);
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    uVar1 = 0xfffff447;
  }
  else {
    uVar1 = (*(code *)PTR_PPPP__Close_Inner_004682c0)(param_1);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x6c80);
  }
  return uVar1;
}



// ==== PPPP_thread_recv_Proto_app @ 00416540 size=4632

/* PPPP_thread_recv_Proto_app(void*) */

void PPPP_thread_recv_Proto_app(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 local_5d8 [1408];
  undefined1 local_58 [2];
  ushort uStack_56;
  undefined4 local_54;
  undefined2 local_3c;
  undefined1 uStack_3a;
  byte local_39 [9];
  uint local_30;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x66f0);
  puVar2 = PTR_gTNPSession_004682bc;
  puVar1 = PTR_DAT_00468298;
  puVar7 = PTR_DAT_00468298 + -0x66cc;
  iVar6 = *(int *)PTR_gTNPSession_004682bc;
  while (iVar6 != 0) {
    iVar6 = iVar6 + (int)param_1 * 0x3f20;
    iVar5 = *(int *)(iVar6 + 0xc);
    if ((iVar5 < 0) || (*(char *)(iVar6 + 0xf2) != '\0')) break;
    iVar6 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                      (iVar5,local_58,200,local_39,&local_3c,local_5d8,0x500,&uStack_3a);
    uVar3 = local_3c;
    if (iVar6 == 0) {
      local_30 = (uint)local_39[0];
      uVar4 = (*(code *)PTR_inet_ntoa_00468804)(local_54);
      (*(code *)PTR_PPPP_DebugTrace_00468294)
                (0x400,puVar7,local_30,uVar3,uVar4,uStack_56 >> 8 | uStack_56 << 8);
      if (local_39[0] < 0xa2) {
                    /* WARNING: Could not emulate address calculation at 0x004166dc */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&_gp_1 + *(int *)(puVar1 + (uint)local_39[0] * 4 + -0x5250)))();
        return;
      }
    }
    else if (iVar6 != -1) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,puVar1 + -0x6398,iVar6);
    }
    iVar6 = *(int *)puVar2;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x6378);
  (*(code *)PTR_pthread_exit_004688b4)(0);
  return;
}



// ==== PPPP_thread_recv_Proto_TCP_app @ 00417758 size=2692

/* PPPP_thread_recv_Proto_TCP_app(void*) */

void PPPP_thread_recv_Proto_TCP_app(void *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  code *pcVar15;
  undefined1 auStack_7c8 [4];
  char local_7c4 [2];
  ushort local_7c2;
  char local_7c0 [12];
  undefined1 auStack_7b4 [1900];
  ushort local_48;
  ushort local_46;
  byte local_44 [4];
  int local_40;
  int local_3c;
  char *local_38;
  int local_34;
  int local_30;
  
  uVar7 = 0;
  uVar6 = 0;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x6358);
  iVar10 = (int)param_1 * 0x3f20;
  local_40 = (int)param_1 * 0x18;
LAB_004177dc:
  do {
    while( true ) {
      while( true ) {
        puVar2 = PTR_gTNPSession_004682bc;
        if ((*(int *)PTR_gTNPSession_004682bc == 0) ||
           (iVar12 = *(int *)PTR_gTNPSession_004682bc + iVar10, *(char *)(iVar12 + 0xf2) != '\0'))
        goto LAB_00417d50;
        iVar12 = *(int *)(iVar12 + 0xc);
        if (-1 < iVar12) break;
        (*(code *)PTR_mSecSleep_004682d4)(10);
      }
      local_46 = (ushort)(0x780 - uVar6);
      iVar12 = (*(code *)PTR_PPPP_Proto_Recv_TCP_004683a8)
                         (iVar12,auStack_7c8 + uVar6,0x780 - uVar6 & 0xffff,&local_46,0x28);
      puVar3 = PTR_gTNPSessionLock_004682c4;
      if (iVar12 != 0) break;
      uVar6 = uVar6 + local_46;
      uVar5 = 0;
      while( true ) {
        uVar6 = uVar6 & 0xffff;
        puVar8 = auStack_7c8 + uVar5;
        iVar12 = (*(code *)PTR_PPPP__Check_Session_Data_Ready_004683ac)
                           (puVar8,uVar6,&local_48,local_44);
        puVar3 = PTR_gTNPSessionLock_004682c4;
        puVar2 = PTR_gTNPSession_004682bc;
        if (iVar12 != 1) break;
        if ((*(int *)PTR_gTNPSession_004682bc == 0) ||
           (*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar10 + 0xf2) != '\0')) goto LAB_00417d50;
        pcVar9 = auStack_7c8 + uVar5 + 4;
        uVar13 = local_48 + 4 & 0xffff;
        uVar6 = uVar6 - uVar13;
        local_30 = iVar12;
        (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + local_40);
        if (local_44[0] == 0x87) {
          iVar12 = *(int *)puVar2 + iVar10;
          if ((*(byte *)(iVar12 + 0x1d0) < 0x17) && (*(int *)(iVar12 + 0x1ec) == 0)) {
            if ((*(byte *)(iVar12 + 0x1d0) != 0x16) || (*(char *)(iVar12 + 0x1a6) == -2)) {
              *(char *)(iVar12 + 0x1a6) = local_7c4[uVar5 + 1];
            }
            (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x16);
            if ((local_7c4[uVar5 + 1] == '\0') && (local_3c = (int)*pcVar9, 0 < *pcVar9)) {
              iVar12 = 0;
              local_38 = local_7c4 + uVar5 + 4;
              pcVar9 = local_7c4 + uVar5 + 4;
              do {
                iVar12 = iVar12 + 1;
                uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(pcVar9 + 4));
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x10,PTR_DAT_00468298 + -0x6330,iVar12,uVar4,
                           *(ushort *)(pcVar9 + 2) >> 8 | *(ushort *)(pcVar9 + 2) << 8,
                           (int)pcVar9[0x10]);
                pcVar9 = pcVar9 + 0x14;
              } while (iVar12 < local_3c);
              local_30 = local_3c * 0x14;
              iVar12 = (*(code *)PTR_malloc_00468890)(local_30);
              if (iVar12 == 0) {
                *(undefined4 *)(*(int *)PTR_gTNPSession_004682bc + iVar10 + 500) = 0;
              }
              else {
                uVar4 = (*(code *)PTR_memcpy_00468898)(iVar12,local_38,local_30);
                iVar12 = *(int *)PTR_gTNPSession_004682bc + iVar10;
                *(undefined4 *)(iVar12 + 0x1ec) = uVar4;
                *(undefined4 *)(iVar12 + 500) = 0;
                *(int *)(iVar12 + 0x1f0) = local_3c;
              }
            }
          }
        }
        else if (local_44[0] < 0x88) {
          if (local_44[0] == 6) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x10,PTR_DAT_00468298 + -0x63d0,*pcVar9,(int)local_7c4[uVar5 + 1],
                       (int)local_7c4[uVar5 + 2]);
            iVar12 = *(int *)puVar2 + iVar10;
            *(undefined1 *)(iVar12 + 0x1a5) = 0xf5;
            *(undefined1 *)(iVar12 + 0x1a6) = 0xf5;
            *(char *)(iVar12 + 0xf2) = (char)local_30;
          }
          else if ((local_44[0] == 0x22) && (*(char *)(*(int *)puVar2 + iVar10 + 0x137) != local_30)
                  ) {
            uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(local_7c4 + uVar5 + 4));
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x10,PTR_DAT_00468298 + -0x6310,uVar4,
                       *(ushort *)(local_7c4 + uVar5 + 2) >> 8 |
                       *(ushort *)(local_7c4 + uVar5 + 2) << 8);
            local_3c = *(int *)PTR_gP2PTcpAddrNum_004683b0;
            if (local_3c < 1) {
              iVar12 = 0;
            }
            else {
              local_38 = local_7c4 + uVar5 + 4;
              iVar12 = 0;
              local_34 = *(int *)puVar2 + iVar10;
              iVar14 = local_34 + 0x18;
              do {
                local_30 = iVar14;
                iVar14 = (*(code *)PTR_memcmp_0046882c)(iVar14,local_38,4);
                if ((iVar14 == 0) &&
                   (*(short *)(local_30 + -2) == *(short *)(local_7c4 + uVar5 + 2))) {
                  if (*(int *)(local_34 + 0xa4) == iVar12) {
                    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x62e8,iVar12);
                    *(undefined1 *)(*(int *)PTR_gTNPSession_004682bc + iVar10 + 0x1a6) = 0xfe;
                  }
                  else {
                    (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)(local_34 + 0xc));
                    puVar2 = PTR_PPPP__ConnectTcpServer_004683b8;
                    iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar10;
                    *(undefined4 *)(iVar14 + 0xc) = 0xffffffff;
                    *(undefined1 *)(iVar14 + 0x10) = 0;
                    uVar4 = (*(code *)puVar2)(pcVar9,1,iVar14 + 0xa4,0x1e,0x14);
                    *(undefined4 *)(iVar14 + 0xc) = uVar4;
                    iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar10;
                    if (*(int *)(iVar14 + 0xc) < 0) {
                      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x62c8);
                      (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(param_1);
                      *(undefined1 *)(*(int *)PTR_gTNPSession_004682bc + iVar10 + 0x1a6) = 0xe2;
                    }
                    else {
                      *(int *)(iVar14 + 0xa4) = iVar12;
                      *(undefined1 *)(iVar14 + 0x10) = 1;
                      puVar2 = PTR_PPPP__Set_Session_State_00468398;
                      if ((byte)(*(char *)(iVar14 + 0x1d0) - 0x25U) < 2) {
                        *(undefined1 *)(iVar14 + 0x1a6) = 1;
                        (*(code *)puVar2)(param_1,0x24);
                        iVar12 = *(int *)PTR_gTNPSession_004682bc + iVar10;
                        iVar12 = (*(code *)PTR_PPPP_Proto_Send_RlyTCPReq_004683bc)
                                           (*(undefined4 *)(iVar12 + 0xc),1,
                                            iVar12 + (*(int *)(iVar12 + 0xa4) + 1) * 0x10 + 4,
                                            iVar12 + 0x1a8,*(undefined4 *)(iVar12 + 0x1b8),
                                            iVar12 + 0x1b0,iVar12 + 0x194,iVar12 + 0x1da);
                        if (-1 < iVar12) {
                          (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x25);
                        }
                      }
                    }
                  }
                  goto LAB_0041786c;
                }
                iVar12 = iVar12 + 1;
                iVar14 = local_30 + 0x10;
              } while (iVar12 != local_3c);
            }
            (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x6250,iVar12,local_3c)
            ;
            *(undefined1 *)(*(int *)PTR_gTNPSession_004682bc + iVar10 + 0x1a6) = 0xfe;
          }
        }
        else if (local_44[0] == 0x8a) {
          iVar12 = *(int *)puVar2 + iVar10;
          if (*(char *)(iVar12 + 0xf0) == '\0') {
            if (*(char *)(iVar12 + 0x1da) == '\0') {
              iVar12 = iVar12 + 0x1da;
              puVar8 = auStack_7b4 + uVar5;
            }
            else {
              local_30 = iVar12 + 0x1da;
              puVar8 = auStack_7b4 + uVar5;
              iVar14 = (*(code *)PTR_memcmp_0046882c)(local_30,puVar8,0x10);
              iVar12 = local_30;
              if (iVar14 == 0) goto LAB_00417da8;
            }
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x10,PTR_DAT_00468298 + -0x64a4,0x10,puVar8,0x10,iVar12);
          }
          else {
            puVar8 = auStack_7b4 + uVar5;
LAB_00417da8:
            (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x27);
            uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(local_7c4 + uVar5 + 4));
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x10,PTR_DAT_00468298 + -0x6424,uVar4,
                       *(ushort *)(local_7c4 + uVar5 + 2) >> 8 |
                       *(ushort *)(local_7c4 + uVar5 + 2) << 8,0x10,puVar8);
            iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar10;
            iVar11 = iVar14 + 0x1da;
            iVar12 = (*(code *)PTR_memcmp_0046882c)(iVar11,puVar8,0x10);
            if (iVar12 != 0) {
              (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,0x27);
              iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar10;
              iVar11 = iVar14 + 0x1da;
            }
            if ((*(char *)(iVar14 + 0x1d0) == '\'') && (-1 < *(int *)(iVar14 + 4))) {
              iVar12 = (*(code *)PTR_PPPP_Proto_Send_RlyTCPPkt_00468390)
                                 (*(int *)(iVar14 + 4),iVar14 + 0x194,iVar11,
                                  (int)*(char *)(iVar14 + 0xf0));
              if (iVar12 < 0) {
                (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(param_1);
                uVar4 = 0xffffffff;
                iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar10;
                iVar11 = iVar14 + 0x1da;
              }
              else {
                (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x28);
                uVar4 = 1;
                iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar10;
                iVar11 = iVar14 + 0x1da;
              }
            }
            else {
              uVar4 = 0;
            }
            (*(code *)PTR_PPPP_Proto_Send_RlyTCPToAck_00468384)
                      (*(undefined4 *)(iVar14 + 0xc),1,
                       iVar14 + (*(int *)(iVar14 + 0xa4) + 1) * 0x10 + 4,iVar14 + 0x1a8,
                       *(undefined4 *)(iVar14 + 0x1b8),iVar14 + 0x1b0,iVar11,
                       (int)*(char *)(iVar14 + 0xf0),uVar4);
          }
        }
        else if (local_44[0] == 0xa1) {
          cVar1 = *pcVar9;
          (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x63f0,cVar1);
          *(char *)(*(int *)puVar2 + iVar10 + 0x1d8) = cVar1;
        }
        else if ((local_44[0] == 0x89) && (*(byte *)(*(int *)puVar2 + iVar10 + 0x1d0) < 0x27)) {
          cVar1 = *pcVar9;
          (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x6548,(int)cVar1);
          pcVar15 = (code *)PTR_PPPP__Update_Session_State_0046835c;
          iVar12 = *(int *)puVar2 + iVar10;
          if (*(byte *)(iVar12 + 0x1d0) < 0x26) {
            *(char *)(iVar12 + 0x1a6) = cVar1;
            pcVar15 = (code *)PTR_PPPP__Update_Session_State_0046835c;
          }
          else if (*(char *)(iVar12 + 0x1a6) == -2) {
            *(char *)(iVar12 + 0x1a6) = cVar1;
          }
          (*pcVar15)(param_1,0x26);
        }
LAB_0041786c:
        (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar3 + local_40);
        uVar5 = uVar5 + uVar13 & 0xffff;
      }
      if ((uVar5 == 0) || (uVar6 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        (*(code *)PTR_memmove_004688bc)(auStack_7c8,puVar8,uVar6);
      }
    }
    if (iVar12 == -1) break;
    if (iVar12 == -2) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x6288);
      (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar3 + local_40);
      iVar10 = *(int *)puVar2 + iVar10;
      *(undefined1 *)(iVar10 + 0xf2) = 1;
      if (*(char *)(iVar10 + 1) == '\0') {
        *(undefined1 *)(iVar10 + 1) = 6;
      }
      iVar12 = *(int *)puVar3;
      *(undefined1 *)(iVar10 + 0x1a6) = 0xe1;
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(iVar12 + local_40);
      goto LAB_00417d50;
    }
  } while( true );
  uVar7 = uVar7 + 1;
  if (3000 < uVar7) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x62b0);
    (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar3 + local_40);
    iVar10 = *(int *)puVar2 + iVar10;
    if (*(char *)(iVar10 + 1) == '\0') {
      *(undefined1 *)(iVar10 + 1) = 1;
    }
    puVar2 = PTR_MUTEX_RELEASE_004682b4;
    iVar12 = *(int *)puVar3;
    *(undefined1 *)(iVar10 + 0xf2) = 1;
    *(undefined1 *)(iVar10 + 0x1a6) = 0xe0;
    (*(code *)puVar2)(iVar12 + local_40);
LAB_00417d50:
    puVar2 = PTR_DAT_00468298;
    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x6274);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x4000,puVar2 + -0x6274);
    (*(code *)PTR_pthread_exit_004688b4)(0);
    return;
  }
  goto LAB_004177dc;
}



// ==== PPPP_TryP2P @ 00419318 size=1056

/* PPPP_TryP2P(int, char) */

undefined4 PPPP_TryP2P(int param_1,char param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = (int)param_2 & 1;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5f00);
  uVar14 = (*(code *)PTR_getCurTime_004682c8)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x5ee0,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  puVar3 = PTR_gTNPSession_004682bc;
  uVar13 = (int)param_2 >> 1 & 0xf;
  if (uVar13 == 0) {
    iVar11 = 0x2d;
LAB_0041940c:
    if (uVar9 == 1) goto LAB_004193e0;
LAB_00419418:
    iVar5 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
    *(undefined1 *)(iVar5 + 0x1a5) = 1;
    if (iVar11 == 0) {
LAB_00419730:
      uVar10 = 0;
      goto LAB_004196b8;
    }
    uVar13 = 0;
  }
  else {
    iVar11 = 0;
    if (uVar13 == 0xf) goto LAB_0041940c;
    iVar11 = uVar13 * 10;
    if (uVar9 != 1) goto LAB_00419418;
LAB_004193e0:
    uVar13 = 0xfffffff2;
    iVar5 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
    *(char *)(iVar5 + 0x1a5) = (char)uVar9;
  }
  puVar2 = PTR_DAT_00468298;
  iVar8 = param_1 * 0x3f20;
  if (*(char *)(iVar5 + 0xf5) == '\0') {
    puVar12 = PTR_DAT_00468298 + -0x5e98;
    do {
      if (uVar9 == 0) {
        if ((int)uVar13 < 0) {
LAB_00419490:
          iVar5 = *(int *)puVar3;
        }
        else {
LAB_00419464:
          if (uVar13 != ((int)uVar13 / 5) * 5) goto LAB_00419490;
          iVar5 = 0;
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (1,PTR_DAT_00468298 + -0x5e70,(int)(0x3c - uVar13) / 5);
          (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,1);
          do {
            iVar6 = iVar5 + 0x15;
            iVar7 = *(int *)puVar3 + iVar8;
            iVar5 = iVar5 + 1;
            (*(code *)PTR_PPPP_Proto_Send_P2PReq_004683ec)
                      (*(undefined4 *)(iVar7 + 0xc),iVar7 + iVar6 * 0x10 + 4,iVar7 + 0x1a8,
                       *(undefined4 *)(iVar7 + 0x1b8),iVar7 + 0x1b0,iVar7 + 0xb8);
          } while (iVar5 != 3);
          iVar5 = *(int *)puVar3;
        }
        iVar5 = iVar5 + iVar8;
        cVar4 = *(char *)(iVar5 + 0xf6);
      }
      else {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar12,0x3c - uVar13);
        if (-1 < (int)uVar13) goto LAB_00419464;
        if ((uVar13 & 1) != 0) goto LAB_00419490;
        (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_TheLock_004682a4);
        (*(code *)PTR_PPPP_Proto_Send_LanSerch_004683e8)
                  (*(undefined4 *)(*(int *)puVar3 + iVar8 + 0xc),0x7d6c);
        (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
        iVar5 = *(int *)puVar3 + iVar8;
        cVar4 = *(char *)(iVar5 + 0xf6);
      }
      if (cVar4 != '\0') {
        cVar4 = *(char *)(iVar5 + 0x1a5);
        uVar10 = 1;
        goto LAB_00419540;
      }
      bVar1 = *(byte *)(iVar5 + 0x1a5);
      if (((bVar1 == 0xff) || ((bVar1 & 0xf7) == 0xf5)) || (bVar1 == 0xf9)) {
        uVar10 = 1;
        goto LAB_004196b8;
      }
      if (bVar1 == 0xf8) goto LAB_00419730;
      if ((bVar1 == 0xfe) || (bVar1 == 0)) {
        uVar13 = uVar13 + 2;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar2 + -0x5e58);
        (*(code *)PTR_mSecSleep_004682d4)(100);
      }
      else {
        uVar13 = uVar13 + 1;
        (*(code *)PTR_mSecSleep_004682d4)(100);
      }
      if (iVar11 <= (int)uVar13) {
        uVar10 = 0;
        cVar4 = *(char *)(*(int *)puVar3 + iVar8 + 0x1a5);
        goto LAB_00419540;
      }
    } while (*(char *)(*(int *)puVar3 + iVar8 + 0xf5) == '\0');
  }
  uVar10 = 1;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5ecc,param_1);
  cVar4 = *(char *)(*(int *)puVar3 + iVar8 + 0x1a5);
LAB_00419540:
  if (cVar4 == -2) {
    uVar10 = 1;
  }
LAB_004196b8:
  uVar15 = (*(code *)PTR_getCurTime_004682c8)();
  puVar12 = PTR_DAT_00468298;
  puVar2 = PTR_PPPP_DebugTrace_00468294;
  iVar11 = (int)uVar15 - (int)uVar14;
  *(int *)(*(int *)puVar3 + param_1 * 0x3f20 + 0x1c8) = iVar11;
  (*(code *)puVar2)(1,puVar12 + -0x5e3c,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),iVar11);
  return uVar10;
}



// ==== PPPP_TryRelayByUDP @ 00419738 size=1800

/* WARNING: Type propagation algorithm not settling */
/* PPPP_TryRelayByUDP(int, int) */

undefined4 PPPP_TryRelayByUDP(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5e14);
  uVar11 = (*(code *)PTR_getCurTime_004682c8)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x5dfc,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  puVar4 = PTR_gTNPSession_004682bc;
  puVar3 = PTR_DAT_00468298;
  if (param_2 < 1) {
LAB_00419d40:
    uVar9 = 0;
  }
  else {
    iVar5 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
    if (*(char *)(iVar5 + 0xf5) == '\0') {
      if (*(char *)(iVar5 + 0xf6) == '\0') {
        cVar1 = *(char *)(iVar5 + 0x1a5);
        while (iVar2 = (int)cVar1, iVar2 != -1) {
          if (iVar2 == -3) {
            uVar6 = 0xfffffffd;
            goto LAB_00419908;
          }
          if (iVar2 == -0xb) {
            uVar6 = 0xfffffff5;
            goto LAB_00419908;
          }
          if (iVar2 == -7) {
            uVar6 = 0xfffffff9;
            goto LAB_00419908;
          }
          iVar8 = -8;
          if ((iVar2 == -8) || (cVar1 = *(char *)(iVar5 + 0x1a6), iVar8 = iVar2, cVar1 == -8)) {
            uVar9 = 0;
            (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5dc4,iVar8);
            goto LAB_00419924;
          }
          if (cVar1 == -2) {
            param_2 = param_2 + -2;
            (*(code *)PTR_mSecSleep_004682d4)(100);
          }
          else {
            if (cVar1 < '\0') {
              uVar9 = 1;
              (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5dac);
              goto LAB_00419924;
            }
            uVar10 = *(byte *)(iVar5 + 0x1d0) - 0x17 & 0xff;
            if (uVar10 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x00419870 */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*(code *)(&_gp_1 + *(int *)(puVar3 + uVar10 * 4 + -0x4fc8)))();
              return uVar6;
            }
            param_2 = param_2 + -1;
            (*(code *)PTR_mSecSleep_004682d4)(100);
          }
          if (param_2 < 1) goto LAB_00419d40;
          iVar5 = *(int *)puVar4 + param_1 * 0x3f20;
          if (*(char *)(iVar5 + 0xf5) != '\0') goto LAB_00419d58;
          if (*(char *)(iVar5 + 0xf6) != '\0') goto LAB_00419d78;
          cVar1 = *(char *)(iVar5 + 0x1a5);
        }
        uVar6 = 0xffffffff;
LAB_00419908:
        uVar9 = 1;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5dc4,uVar6);
      }
      else {
LAB_00419d78:
        uVar9 = 1;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5de0);
      }
    }
    else {
LAB_00419d58:
      uVar9 = 1;
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5ecc,param_1);
    }
  }
LAB_00419924:
  uVar12 = (*(code *)PTR_getCurTime_004682c8)();
  puVar3 = PTR_PPPP_DebugTrace_00468294;
  iVar5 = (int)uVar12 - (int)uVar11;
  puVar7 = PTR_DAT_00468298 + -0x5d5c;
  *(int *)(*(int *)puVar4 + param_1 * 0x3f20 + 0x1cc) = iVar5;
  (*(code *)puVar3)(1,puVar7,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),iVar5);
  return uVar9;
}



// ==== PPPP_TryRelayByTCP @ 00419e40 size=2896

/* PPPP_TryRelayByTCP(int, int) */

undefined4 PPPP_TryRelayByTCP(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  int local_34;
  undefined4 *local_30;
  uint local_2c;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5d28);
  puVar3 = PTR_gTNPSession_004682bc;
  uVar12 = (*(code *)PTR_getCurTime_004682c8)();
  local_34 = (int)uVar12;
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x5d0c,local_34,(int)((ulonglong)uVar12 >> 0x20));
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5cf0,param_1,param_2);
  (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,0x21);
  iVar1 = param_1 * 0x3f20;
  iVar9 = *(int *)puVar3 + iVar1;
  *(undefined1 *)(iVar9 + 0x1a6) = 1;
  if (param_2 < 1) {
    local_38 = 1;
  }
  else if (*(char *)(iVar9 + 0xf5) == '\0') {
    if (*(char *)(iVar9 + 0xf6) == '\0') {
      cVar5 = *(char *)(iVar9 + 0x1a5);
      if (cVar5 == -1) {
LAB_0041a694:
        uVar6 = 0xffffffff;
      }
      else if (cVar5 == -3) {
LAB_0041a6bc:
        uVar6 = 0xfffffffd;
      }
      else if (cVar5 == -0xb) {
LAB_0041a6c4:
        uVar6 = 0xfffffff5;
      }
      else {
        if (cVar5 != -7) {
          uVar8 = 0;
          cVar5 = '\x01';
          local_38 = 1;
          do {
            if (cVar5 == -2) {
              param_2 = param_2 + -2;
              (*(code *)PTR_mSecSleep_004682d4)(100);
            }
            else if (cVar5 == -10) {
LAB_0041a2a0:
              param_2 = param_2 + -1;
              (*(code *)PTR_mSecSleep_004682d4)(100);
            }
            else {
              if (cVar5 < '\0') {
                (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5dac);
                local_38 = 1;
                goto LAB_0041a080;
              }
              (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,0x21);
              iVar9 = *(int *)puVar3 + iVar1;
              *(undefined1 *)(iVar9 + 0x1a6) = 1;
              if (uVar8 < *(uint *)(iVar9 + 0x1f0)) {
                iVar11 = uVar8 * 0x14;
                uVar8 = uVar8 + 1;
              }
              else {
                iVar11 = 0;
                uVar8 = 1;
              }
              puVar10 = (undefined4 *)(*(int *)(iVar9 + 0x1ec) + iVar11);
              local_40 = puVar10[4];
              local_50 = *puVar10;
              local_4c = puVar10[1];
              local_48 = puVar10[2];
              local_44 = puVar10[3];
              if ((char)local_40 != '\0') {
                local_30 = &local_50;
                (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(param_1);
                iVar9 = *(int *)puVar3 + iVar1;
                *(undefined4 *)(iVar9 + 0x194) = local_50;
                *(undefined4 *)(iVar9 + 0x198) = local_4c;
                *(undefined4 *)(iVar9 + 0x19c) = local_48;
                puVar4 = PTR_PPPP__Start_TCP_For_Session_004683f0;
                *(undefined4 *)(iVar9 + 0x1a0) = local_44;
                iVar9 = (*(code *)puVar4)(param_1,&local_50,5);
                (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5cb8,iVar9);
                if (iVar9 == -2) {
                  param_2 = param_2 + -0x32;
                }
                else {
                  if (iVar9 < 0) goto LAB_0041a2a0;
                  iVar9 = param_2;
                  if (0x3c < param_2) {
                    iVar9 = param_2 >> 1;
                  }
                  (*(code *)PTR_memset_00468810)(*(int *)puVar3 + iVar1 + 0x1da,0,0x10);
                  local_2c = uVar8;
LAB_0041a1c8:
                  do {
                    uVar8 = local_2c;
                    iVar11 = *(int *)puVar3 + iVar1;
                    if (*(char *)(iVar11 + 0xf5) != '\0') {
                      param_2 = 0;
                      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5ecc,param_1);
                      local_38 = 1;
                      break;
                    }
                    iVar7 = (int)*(char *)(iVar11 + 0xf6);
                    if (iVar7 != 0) {
                      puVar4 = PTR_DAT_00468298 + -0x5de0;
LAB_0041a714:
                      param_2 = 0;
                      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar4,iVar7);
                      local_38 = 1;
                      break;
                    }
                    cVar5 = *(char *)(iVar11 + 0x1a5);
                    if (cVar5 == -1) {
                      iVar7 = -1;
LAB_0041a734:
                      puVar4 = PTR_DAT_00468298 + -0x5dc4;
                      goto LAB_0041a714;
                    }
                    if (cVar5 == -3) {
                      iVar7 = -3;
                      goto LAB_0041a734;
                    }
                    if (cVar5 == -0xb) {
                      iVar7 = -0xb;
                      goto LAB_0041a734;
                    }
                    if (cVar5 == -7) {
                      iVar7 = -7;
                      goto LAB_0041a734;
                    }
                    iVar7 = (int)*(char *)(iVar11 + 0x1a6);
                    if (iVar7 == -8) {
                      (*(code *)PTR_PPPP_DebugTrace_00468294)
                                (1,PTR_DAT_00468298 + -0x5dac,0xfffffff8);
                      local_38 = 0;
                      break;
                    }
                    if (iVar7 == -2) {
                      iVar9 = iVar9 + -2;
                      param_2 = param_2 + -2;
                      (*(code *)PTR_mSecSleep_004682d4)(100);
                      uVar8 = local_2c;
                      if (iVar9 < 1) break;
                      goto LAB_0041a1c8;
                    }
                    if (iVar7 == -4) {
                      param_2 = param_2 + -1;
                      iVar9 = iVar9 + -1;
                      (*(code *)PTR_mSecSleep_004682d4)(100);
                      (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,0x22);
                      iVar11 = *(int *)PTR_gTNPSession_004682bc + iVar1;
                      *(undefined1 *)(iVar11 + 0x1a6) = 1;
LAB_0041a238:
                      (*(code *)PTR_PPPP_DebugTrace_00468294)
                                (1,PTR_DAT_00468298 + -0x5c90,*(undefined1 *)(iVar11 + 0x1d0));
                      uVar8 = (uint)(byte)(*(char *)(*(int *)puVar3 + iVar1 + 0x1d0) - 0x22);
                      if (uVar8 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0041a27c */
                    /* WARNING: Treating indirect jump as call */
                        uVar6 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00468298 + uVar8 * 4 + -0x4fa4)
                                          ))();
                        return uVar6;
                      }
                      (*(code *)PTR_mSecSleep_004682d4)(100);
                    }
                    else {
                      if (iVar7 != -10) {
                        if (iVar7 < 0) {
                          puVar4 = PTR_DAT_00468298 + -0x5dac;
                          goto LAB_0041a714;
                        }
                        goto LAB_0041a238;
                      }
                      (*(code *)PTR_mSecSleep_004682d4)(100);
                    }
                    iVar9 = iVar9 + -1;
                    param_2 = param_2 + -1;
                    uVar8 = local_2c;
                  } while (0 < iVar9);
                  puVar4 = PTR_gTNPSession_004682bc;
                  if (*(char *)(*(int *)puVar3 + iVar1 + 0x1d0) != ')') {
                    param_2 = param_2 - iVar9;
                    (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(param_1);
                    (*(code *)PTR_memset_00468810)(*(int *)puVar4 + iVar1 + 0x194,0,0x10);
                    (*(code *)PTR_memset_00468810)(*(int *)puVar4 + iVar1 + 0x1da,0,0x10);
                  }
                }
              }
            }
            if (param_2 < 1) goto LAB_0041a080;
            iVar9 = *(int *)puVar3 + iVar1;
            if (*(char *)(iVar9 + 0xf5) != '\0') goto LAB_0041a64c;
            if (*(char *)(iVar9 + 0xf6) != '\0') goto LAB_0041a670;
            cVar5 = *(char *)(iVar9 + 0x1a5);
            if (cVar5 == -1) goto LAB_0041a694;
            if (cVar5 == -3) goto LAB_0041a6bc;
            if (cVar5 == -0xb) goto LAB_0041a6c4;
            uVar6 = 0xfffffff9;
            if (cVar5 == -7) goto LAB_0041a698;
            cVar5 = *(char *)(iVar9 + 0x1a6);
          } while (cVar5 != -8);
          (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5dac,0xfffffff8);
          local_38 = 0;
          goto LAB_0041a080;
        }
        uVar6 = 0xfffffff9;
      }
LAB_0041a698:
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5dc4,uVar6);
      local_38 = 1;
    }
    else {
LAB_0041a670:
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5de0);
      local_38 = 1;
    }
  }
  else {
LAB_0041a64c:
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5ecc,param_1);
    local_38 = 1;
  }
LAB_0041a080:
  uVar12 = (*(code *)PTR_getCurTime_004682c8)();
  puVar2 = PTR_DAT_00468298;
  puVar4 = PTR_PPPP_DebugTrace_00468294;
  iVar9 = (int)uVar12 - local_34;
  *(int *)(*(int *)puVar3 + iVar1 + 0x1cc) = iVar9;
  (*(code *)puVar4)(1,puVar2 + -0x5c34,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),iVar9);
  return local_38;
}



// ==== PPPP_TryRelay @ 0041a990 size=1784

/* PPPP_TryRelay(int, char) */

int PPPP_TryRelay(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_34;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5c00);
  puVar5 = PTR_gTNPSession_004682bc;
  if ((param_2 & 0x20U) != 0) {
    return 1;
  }
  uVar16 = (*(code *)PTR_getCurTime_004682c8)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x5bec,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  iVar2 = param_1 * 0x3f20;
  iVar14 = *(int *)puVar5 + iVar2;
  if (*(char *)(iVar14 + 0x1d0) == '\x01') {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5bd4,1);
    iVar14 = *(int *)puVar5;
LAB_0041ad84:
    iVar14 = iVar14 + iVar2;
  }
  else {
    if ((*(char *)(iVar14 + 0x1a5) == -8) || (*(char *)(iVar14 + 0x1a6) == -8)) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5b98);
      iVar14 = *(int *)puVar5;
      goto LAB_0041ad84;
    }
    if (*(char *)(iVar14 + 0x137) != '\x01') goto LAB_0041aaa8;
  }
  iVar14 = (*(code *)PTR_PPPP__ConnectTcpServer_004683b8)
                     (iVar14 + 0x14,*(undefined4 *)PTR_gP2PTcpAddrNum_004683b0,iVar14 + 0xa4,5,0x14)
  ;
  puVar4 = PTR_WaitThreadExit_00468404;
  if (iVar14 < 0) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5b58);
    return 1;
  }
  iVar15 = *(int *)puVar5 + iVar2;
  iVar13 = iVar15 + (*(int *)(iVar15 + 0xa4) + 1) * 0x10;
  uVar9 = *(undefined4 *)(iVar13 + 0x10);
  uVar11 = *(undefined4 *)(iVar13 + 8);
  uVar10 = *(undefined4 *)(iVar13 + 0xc);
  *(undefined4 *)(iVar15 + 0x184) = *(undefined4 *)(iVar13 + 4);
  *(undefined4 *)(iVar15 + 0x188) = uVar11;
  *(undefined4 *)(iVar15 + 0x18c) = uVar10;
  *(undefined4 *)(iVar15 + 400) = uVar9;
  *(undefined1 *)(iVar15 + 0xf2) = 1;
  (*(code *)puVar4)(iVar15 + 0x140);
  iVar13 = *(int *)puVar5 + iVar2;
  if (0 < *(int *)(iVar13 + 0xc)) {
    (*(code *)PTR_CloseSocket_004683b4)();
    iVar13 = *(int *)PTR_gTNPSession_004682bc + iVar2;
    *(undefined4 *)(iVar13 + 4) = 0;
    *(undefined4 *)(iVar13 + 0xc) = 0;
  }
  puVar7 = PTR_DAT_00468298;
  puVar4 = PTR_PPPP_DebugTrace_00468294;
  *(int *)(iVar13 + 0xc) = iVar14;
  *(undefined1 *)(iVar13 + 0x10) = 1;
  *(undefined1 *)(iVar13 + 0xf2) = 0;
  (*(code *)puVar4)(1,puVar7 + -0x5b3c);
  iVar14 = *(int *)puVar5;
  uVar9 = (*(code *)PTR_CreateWorkerThread_00468408)
                    (PTR_PPPP_thread_recv_Proto_TCP_app_0046840c,param_1);
  *(undefined4 *)(iVar14 + iVar2 + 0x140) = uVar9;
LAB_0041aaa8:
  if ((param_2 & 0x40U) == 0) {
    iVar14 = 0x50;
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5ae4);
    *(undefined1 *)(*(int *)puVar5 + iVar2 + 0x13c) = 0;
  }
  else {
    iVar14 = 200;
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5b20);
    *(undefined1 *)(*(int *)puVar5 + iVar2 + 0x13c) = 1;
  }
  iVar13 = 0;
  (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,0x14);
  iVar15 = *(int *)puVar5;
  local_34 = 0;
  *(undefined1 *)(iVar15 + iVar2 + 0x1a6) = 1;
  bVar3 = false;
  do {
    iVar15 = iVar15 + iVar2;
    if (*(char *)(iVar15 + 0xf5) != '\0') {
      iVar13 = 1;
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5ecc,param_1);
LAB_0041abf8:
      if (*(int *)(*(int *)puVar5 + iVar2 + 0x1ec) != 0) {
        (*(code *)PTR_free_004687a8)();
        iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar2;
        *(undefined4 *)(iVar14 + 0x1ec) = 0;
        *(undefined4 *)(iVar14 + 0x1f0) = 0;
        *(undefined4 *)(iVar14 + 500) = 0;
      }
      uVar17 = (*(code *)PTR_getCurTime_004682c8)();
      puVar4 = PTR_PPPP_DebugTrace_00468294;
      iVar14 = (int)uVar17 - (int)uVar16;
      puVar7 = PTR_DAT_00468298 + -0x5aa8;
      *(int *)(*(int *)puVar5 + iVar2 + 0x1cc) = iVar14;
      (*(code *)puVar4)(1,puVar7,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),iVar14);
      (*(code *)PTR_PPPP_DebugTrace_00468294)
                (1,PTR_DAT_00468298 + -0x5a7c,(int)*(char *)(*(int *)puVar5 + iVar2 + 0x1a6));
      return iVar13;
    }
    if (*(char *)(iVar15 + 0xf6) != '\0') {
      iVar13 = 1;
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5de0);
      goto LAB_0041abf8;
    }
    cVar1 = *(char *)(iVar15 + 0x1a5);
    if (cVar1 == -1) {
      uVar9 = 0xffffffff;
LAB_0041af54:
      iVar13 = 1;
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5dc4,uVar9);
      goto LAB_0041abf8;
    }
    if (cVar1 == -3) {
      uVar9 = 0xfffffffd;
      goto LAB_0041af54;
    }
    if (cVar1 == -0xb) {
      uVar9 = 0xfffffff5;
      goto LAB_0041af54;
    }
    if (cVar1 == -7) {
      uVar9 = 0xfffffff9;
      goto LAB_0041af54;
    }
    if (*(char *)(iVar15 + 0x1a6) == -2) {
      iVar12 = iVar14 + -2;
      (*(code *)PTR_mSecSleep_004682d4)(100);
    }
    else {
      if (*(char *)(iVar15 + 0x1a6) < '\0') {
        iVar13 = 1;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5dac);
        goto LAB_0041abf8;
      }
      if ((*(byte *)(iVar15 + 0x1d0) < 0x17) && (*(int *)(iVar15 + 0x1ec) == 0)) {
        if (*(char *)(iVar15 + 0x10) == '\x01') {
          if (!bVar3) {
            (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,0x15);
            iVar15 = *(int *)puVar5 + iVar2;
            (*(code *)PTR_PPPP_Proto_Send_RlyServerReq_00468410)
                      (*(undefined4 *)(iVar15 + 0xc),(int)*(char *)(iVar15 + 0x10),
                       iVar15 + (*(int *)(iVar15 + 0xa4) + 1) * 0x10 + 4,iVar15 + 0x1a8,
                       *(undefined4 *)(iVar15 + 0x1b8),iVar15 + 0x1b0,0);
            bVar3 = true;
          }
        }
        else if (local_34 == (local_34 / 10) * 10) {
          iVar15 = 0;
          (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,0x15);
          do {
            iVar12 = iVar15 + 0x15;
            iVar6 = *(int *)puVar5 + iVar2;
            iVar15 = iVar15 + 1;
            (*(code *)PTR_PPPP_Proto_Send_RlyServerReq_00468410)
                      (*(undefined4 *)(iVar6 + 0xc),(int)*(char *)(iVar6 + 0x10),
                       iVar6 + iVar12 * 0x10 + 4,iVar6 + 0x1a8,*(undefined4 *)(iVar6 + 0x1b8),
                       iVar6 + 0x1b0,0);
          } while (iVar15 != 3);
        }
        iVar12 = iVar14 + -1;
        local_34 = local_34 + 1;
        (*(code *)PTR_mSecSleep_004682d4)(100);
      }
      else {
        iVar6 = *(int *)(iVar15 + 500);
        iVar8 = *(int *)(iVar15 + 0x1f0);
        iVar12 = iVar14;
        if ((0 < iVar6) && (*(char *)(iVar15 + 0x10) != '\x01')) {
          if ((iVar8 == iVar6) || (iVar14 < 0x1f)) {
            iVar12 = 0;
            iVar13 = (*(code *)PTR_PPPP_TryRelayByUDP_004683fc)(param_1,iVar14);
          }
          else {
            iVar12 = iVar14 - (iVar14 >> 1);
            iVar13 = (*(code *)PTR_PPPP_TryRelayByUDP_004683fc)(param_1);
          }
        }
        if ((iVar13 == 0) && (0 < iVar8 - iVar6)) {
          iVar13 = (*(code *)PTR_PPPP_TryRelayByTCP_00468400)(param_1,iVar12);
          goto LAB_0041abf8;
        }
      }
    }
    if (iVar12 < 1) goto LAB_0041abf8;
    iVar15 = *(int *)puVar5;
    iVar14 = iVar12;
  } while( true );
}



// ==== PPPP__GetLanSearchFlag @ 0041b088 size=8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__GetLanSearchFlag() */

undefined4 PPPP__GetLanSearchFlag(void)

{
  return 0x7f;
}



// ==== PPPP_TryWakeUp @ 0041b090 size=2024

/* PPPP_TryWakeUp(char*, int, char*, int, unsigned int, unsigned int) */

int PPPP_TryWakeUp(char *param_1,int param_2,char *param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  char local_d20 [8];
  undefined1 auStack_d18 [8];
  undefined4 local_d10 [476];
  char local_5a0 [1280];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [16];
  int local_50;
  ushort local_4c;
  ushort local_4a;
  undefined1 auStack_48 [2];
  undefined2 local_46;
  undefined1 uStack_44;
  char local_43 [3];
  int local_40;
  int *local_3c;
  undefined1 *local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  
  local_46 = 0;
  (*(code *)PTR_memset_00468810)(local_5a0,0,0x500);
  if ((param_1 == (char *)0x0) || (param_3 == (char *)0x0)) {
LAB_0041b830:
    iVar1 = -0xbbd;
  }
  else {
    if (param_5 == 0) {
      if (param_6 == 0) goto LAB_0041b830;
      local_40 = param_4 * 0x3f20;
      local_3c = (int *)PTR_gTNPSession_004682bc;
    }
    else {
      local_34 = (*(code *)PTR_time_00468800)(0);
      uVar2 = (*(code *)PTR_CreateSocket_004683c8)(0);
      iVar1 = (*(code *)PTR_TryBindPort_004683d0)(uVar2,&local_46);
      if (iVar1 < 0) {
        (*(code *)PTR_CloseSocket_004683b4)(uVar2);
        puVar3 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x5a68,*puVar3);
        return -0xbca;
      }
      iVar1 = 5;
      local_40 = param_4 * 0x3f20;
      local_3c = (int *)PTR_gTNPSession_004682bc;
      do {
        iVar1 = iVar1 + -1;
        (*(code *)PTR_PPPP_Proto_Send_WakeUp_00468414)
                  (uVar2,0,*local_3c + local_40 + 0x154,param_1,param_2,param_3);
        (*(code *)PTR_PPPP_Proto_Send_WakeUp_00468414)
                  (uVar2,0,*local_3c + local_40 + 0x164,param_1,param_2,param_3);
        (*(code *)PTR_PPPP_Proto_Send_WakeUp_00468414)
                  (uVar2,0,*local_3c + local_40 + 0x174,param_1,param_2,param_3);
        (*(code *)PTR_mSecSleep_004682d4)(10);
      } while (iVar1 != 0);
      local_38 = &uStack_44;
      local_30 = param_5 + 1;
      puVar8 = PTR_DAT_00468298 + -0x5a28;
      do {
        iVar1 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                          (uVar2,auStack_60,1000,local_43,auStack_48,local_5a0,0x500,&uStack_44);
        if (iVar1 == 0) {
          if (local_43[0] == '\x1a') {
            iVar4 = 0;
            (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x5a44,(int)local_5a0[0]);
            goto LAB_0041b4d0;
          }
          (*(code *)PTR_PPPP_DebugTrace_00468294)(8,puVar8,local_43[0]);
        }
        else if (iVar1 != -1) {
          iVar4 = -3000;
          (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x5a04,iVar1);
          goto LAB_0041b4d0;
        }
        if (*(char *)(*local_3c + local_40 + 0xf5) != '\0') {
          iVar4 = -0xbcb;
LAB_0041b4d0:
          (*(code *)PTR_CloseSocket_004683b4)(uVar2);
          return iVar4;
        }
        iVar1 = (*(code *)PTR_time_00468800)(0);
      } while ((uint)(iVar1 - local_34) <= local_30);
      (*(code *)PTR_CloseSocket_004683b4)(uVar2);
      if (param_6 == 0) {
        return -3000;
      }
    }
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x59e4);
    local_50 = 0;
    local_34 = (*(code *)PTR_time_00468800)(0);
    uVar7 = 5;
    if (param_6 < 6) {
      uVar7 = param_6;
    }
    local_38 = (undefined1 *)
               (*(code *)PTR_PPPP__ConnectTcpServer_004683b8)
                         (*local_3c + local_40 + 0x14,*(undefined4 *)PTR_gP2PTcpAddrNum_004683b0,
                          &local_50,uVar7,param_6);
    if ((int)local_38 < 0) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5b58);
      return -0xbd3;
    }
    iVar1 = (*(code *)PTR_PPPP_Proto_Send_WakeUp_00468414)
                      (local_38,1,
                       *(int *)PTR_gTNPSession_004682bc + local_40 + (local_50 + 1) * 0x10 + 4,
                       param_1,param_2,param_3);
    if (iVar1 < 0) {
      (*(code *)PTR_CloseSocket_004683b4)(local_38);
      iVar1 = -0xbd4;
    }
    else {
      uVar7 = 0;
      puVar8 = PTR_DAT_00468298 + -0x5a28;
      do {
        iVar1 = -0xbcb;
        if (*(char *)(*local_3c + local_40 + 0xf5) != '\0') goto LAB_0041b28c;
        while( true ) {
          local_4a = (ushort)(0x780 - uVar7);
          iVar1 = (*(code *)PTR_PPPP_Proto_Recv_TCP_004683a8)
                            (local_38,local_d20 + uVar7,0x780 - uVar7 & 0xffff,&local_4a,1000);
          if (iVar1 != 0) break;
          uVar6 = 0;
          uVar7 = uVar7 + local_4a;
          while( true ) {
            uVar7 = uVar7 & 0xffff;
            pcVar5 = local_d20 + uVar6;
            iVar1 = (*(code *)PTR_PPPP__Check_Session_Data_Ready_004683ac)
                              (pcVar5,uVar7,&local_4c,local_43);
            iVar4 = uVar6 + 4;
            if (iVar1 != 1) break;
            if (*pcVar5 == -0xe) {
              iVar4 = uVar6 + 0x1c;
              local_2c = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)((int)local_d10 + uVar6))
              ;
              (*(code *)PTR_memset_00468810)(auStack_a0,0,0x40);
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (4,PTR_DAT_00468298 + -0x59c8,local_d20[uVar6 + 1]);
              iVar1 = (*(code *)PTR_keymap_Search_00468418)(auStack_d18 + uVar6,local_2c,auStack_a0)
              ;
              if (iVar1 != 0) {
                (*(code *)PTR_strcpy_004688e0)(auStack_a0,PTR_gDefaultSigKey_00468424);
              }
              uVar2 = (*(code *)PTR_strlen_004687c0)(auStack_a0);
              iVar1 = (*(code *)PTR_PPPP_Proto_Verify_Header_0046841c)(auStack_a0,uVar2,pcVar5);
              if (iVar1 != 0) {
                iVar1 = -0xbd9;
                (*(code *)PTR_PPPP_Proto_Send_SigErrorAck_00468420)
                          (local_38,1,*local_3c + local_40 + (local_50 + 1) * 0x10 + 4,
                           local_d20[uVar6 + 1],(int)local_d20[uVar6 + 4],0xffffffff);
                goto LAB_0041b6a8;
              }
            }
            if (local_43[0] == '\x1a') {
              iVar1 = 0;
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (8,PTR_DAT_00468298 + -0x5a44,(int)local_d20[iVar4]);
              goto LAB_0041b6a8;
            }
            (*(code *)PTR_PPPP_DebugTrace_00468294)(8,puVar8,local_43[0]);
            if (*pcVar5 == -0xe) {
              uVar9 = local_4c + 0x1c;
            }
            else {
              uVar9 = local_4c + 4;
            }
            uVar7 = uVar7 - (uVar9 & 0xffff);
            uVar6 = uVar6 + (uVar9 & 0xffff) & 0xffff;
          }
          iVar1 = -3000;
LAB_0041b6a8:
          if ((uVar6 != 0) && (uVar7 != 0)) {
            (*(code *)PTR_memmove_004688bc)(local_d20,pcVar5,uVar7);
          }
          iVar4 = (*(code *)PTR_time_00468800)(0);
          if (param_6 + 1 < (uint)(iVar4 - local_34)) goto LAB_0041b288;
          if (iVar1 != -3000) goto LAB_0041b28c;
          if (*(char *)(*local_3c + local_40 + 0xf5) != '\0') {
            iVar1 = -0xbcb;
            goto LAB_0041b28c;
          }
        }
        if (iVar1 == -2) {
          iVar1 = -0xbd4;
          (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x5a04,0xfffffffe);
          goto LAB_0041b28c;
        }
        iVar1 = (*(code *)PTR_time_00468800)(0);
      } while ((uint)(iVar1 - local_34) <= param_6 + 1);
LAB_0041b288:
      iVar1 = -0xbbb;
LAB_0041b28c:
      (*(code *)PTR_CloseSocket_004683b4)(local_38);
    }
  }
  return iVar1;
}



// ==== PPPP_Connect_To @ 0041b878 size=6372

/* PPPP_Connect_To(char*, int, char*, char, char*, unsigned short, char*, char) */

uint PPPP_Connect_To(char *param_1,int param_2,char *param_3,char param_4,char *param_5,
                    ushort param_6,char *param_7,char param_8)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  undefined *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined *puVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined4 local_a0 [19];
  undefined2 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  ushort local_4c [2];
  int local_48;
  int local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  
  local_38 = (uint)param_6;
  local_48 = (int)param_4;
  local_3c = (int)param_8;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5990);
  if (*PTR_gFlagInitialized_0046829c == '\0') {
    return 0xfffff447;
  }
  if (param_5 == (char *)0x0) {
    return 0xfffff431;
  }
  if (*param_5 == '\0') {
    return 0xfffff431;
  }
  if (((param_7 == (char *)0x0) ||
      (iVar5 = (*(code *)PTR_strlen_004687c0)(param_7), puVar24 = PTR_gMaxSessionNumber_004682b8,
      iVar5 == 0)) || (0x3f < iVar5)) {
    return 0xfffff443;
  }
  uVar27 = (*(code *)PTR_getCurTime_004682c8)();
  local_44 = (int)uVar27;
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x5978,local_44,(int)((ulonglong)uVar27 >> 0x20));
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5960);
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_TheLock_004682a4);
  puVar13 = PTR_gLastHandle_00468428;
  uVar25 = *(uint *)puVar24;
  if (uVar25 == 0) {
    uVar20 = 0;
  }
  else {
    uVar26 = (*(int *)PTR_gLastHandle_00468428 + 1U) % uVar25;
    if (uVar25 == 0) {
      trap(0x1c00);
    }
    pcVar8 = (char *)(*(int *)PTR_gTNPSession_004682bc + uVar26 * 0x3f20);
    cVar1 = *pcVar8;
    uVar2 = 0;
    while (uVar20 = uVar26, cVar1 == '\x01') {
      uVar20 = uVar2 + 1;
      if (uVar20 == uVar25) goto LAB_0041ba34;
      uVar26 = (*(int *)PTR_gLastHandle_00468428 + uVar2 + 2) % uVar25;
      if (uVar25 == 0) {
        trap(0x1c00);
      }
      pcVar8 = (char *)(*(int *)PTR_gTNPSession_004682bc + uVar26 * 0x3f20);
      uVar2 = uVar20;
      cVar1 = *pcVar8;
    }
    *pcVar8 = '\x01';
    *(uint *)puVar13 = uVar20;
  }
LAB_0041ba34:
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
  if (*(uint *)puVar24 == uVar20) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x5944,uVar20);
    return 0xfffff437;
  }
  local_34 = uVar20;
  (*(code *)PTR_PPPP__Reset_Session_00468318)(uVar20,2);
  puVar13 = PTR_DAT_00468298;
  puVar24 = PTR_PPPP_DebugTrace_00468294;
  *(uint *)PTR_gCurrentSignalSession_0046842c = uVar20;
  puVar3 = PTR_gTNPSession_004682bc;
  (*(code *)puVar24)(2,puVar13 + -0x591c,uVar20);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5908);
  iVar5 = uVar20 * 0x3f20;
  (*(code *)PTR_strncpy_0046883c)(*(int *)puVar3 + iVar5 + 0x1a8,param_1,8);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (2,PTR_DAT_00468298 + -0x58fc,*(int *)puVar3 + iVar5 + 0x1a8);
  puVar24 = PTR_PPPP_DebugTrace_00468294;
  puVar13 = PTR_DAT_00468298 + -0x58f0;
  *(int *)(*(int *)puVar3 + iVar5 + 0x1b8) = param_2;
  (*(code *)puVar24)(2,puVar13);
  (*(code *)PTR_strncpy_0046883c)(*(int *)puVar3 + iVar5 + 0x1b0,param_3,8);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (2,PTR_DAT_00468298 + -0x58e4,*(int *)puVar3 + iVar5 + 0x1b0);
  iVar15 = *(int *)puVar3 + iVar5;
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x58d4,iVar15 + 0x1a8,*(undefined4 *)(iVar15 + 0x1b8),
             iVar15 + 0x1b0);
  (*(code *)PTR_PPPP_Set_Sig_Key_00468430)(uVar20,param_7);
  iVar15 = *(int *)puVar3 + iVar5;
  (*(code *)PTR_keymap_Add_00468434)(iVar15 + 0x1a8,*(undefined4 *)(iVar15 + 0x1b8),iVar15 + 0xf7);
  (*(code *)PTR_keymap_Dump_00468438)();
  puVar24 = PTR_PPPP_DebugTrace_00468294;
  puVar13 = PTR_DAT_00468298 + -0x58c0;
  *(byte *)(*(int *)puVar3 + iVar5 + 0x137) = (byte)((uint)local_48 >> 0x1f);
  (*(code *)puVar24)(2,puVar13,local_48);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (2,PTR_DAT_00468298 + -0x58ac,uVar20,(int)*(char *)(*(int *)puVar3 + iVar5 + 0x137));
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5888);
  uVar6 = (*(code *)PTR_time_00468800)(0);
  iVar15 = (*(code *)PTR_time_00468800)(0);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (2,PTR_DAT_00468298 + -0x5854,*(int *)PTR_gLastNetDetectTime_00468314,uVar6,
             iVar15 - *(int *)PTR_gLastNetDetectTime_00468314);
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_TheLock_004682a4);
  iVar15 = (*(code *)PTR_strncmp_00468840)(PTR_gLastServerString_0046843c,param_5,0x100);
  if (iVar15 == 0) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x580c);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x57e8);
    iVar15 = 0;
    do {
      puVar7 = (undefined4 *)(PTR_gLastServerAddr_00468468 + iVar15);
      iVar17 = iVar15 + 0x10;
      uVar12 = puVar7[1];
      uVar9 = puVar7[2];
      uVar6 = puVar7[3];
      *(undefined4 *)((int)local_a0 + iVar15) = *puVar7;
      *(undefined4 *)((int)local_a0 + iVar15 + 4) = uVar12;
      *(undefined4 *)((int)local_a0 + iVar15 + 8) = uVar9;
      *(undefined4 *)((int)local_a0 + iVar15 + 0xc) = uVar6;
      iVar15 = iVar17;
    } while (iVar17 != 0x30);
  }
  else {
    iVar15 = (*(code *)PTR_PPPP__DecodeServerString_004683c4)(param_5,local_a0,1);
    puVar24 = PTR_gTNPSessionLock_004682c4;
    if (iVar15 != 0) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x57c8);
      (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar24 + uVar20 * 0x18);
      (*(code *)PTR_PPPP__Reset_Session_00468318)(uVar20,0);
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar24 + uVar20 * 0x18);
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
      return 0xfffff441;
    }
  }
  puVar7 = local_a0;
  local_40 = local_a0 + 0xc;
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
  iVar15 = (*(code *)PTR_PPPP__GetLocalAddress_00468440)(puVar7,local_a0 + 0xc);
  if (-1 < iVar15) {
    uVar6 = (*(code *)PTR_inet_ntoa_00468804)(local_a0[0xd]);
    (*(code *)PTR_strncpy_0046883c)(PTR_gNetInfo_004682e8 + 4,uVar6,0x10);
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x57c0);
  uVar6 = (*(code *)PTR_inet_ntoa_00468804)(local_a0[1]);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x57ac,uVar6);
  uVar6 = (*(code *)PTR_inet_ntoa_00468804)(local_a0[5]);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x57a0,uVar6);
  (*(code *)PTR_inet_ntoa_00468804)(local_a0[9]);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(8);
  iVar19 = 0;
  iVar15 = *(int *)puVar3;
  iVar17 = 0;
  piVar18 = (int *)(PTR_gP2PTcpPortArray_00468444 + 0xc);
  puVar22 = puVar7;
  do {
    iVar15 = iVar15 + iVar5 + (iVar17 + 0x15) * 0x10;
    uVar9 = puVar22[2];
    uVar6 = puVar22[1];
    uVar12 = puVar22[3];
    *(undefined4 *)(iVar15 + 4) = *puVar22;
    *(undefined4 *)(iVar15 + 8) = uVar6;
    *(undefined4 *)(iVar15 + 0xc) = uVar9;
    piVar10 = (int *)PTR_gP2PTcpPortArray_00468444;
    *(undefined4 *)(iVar15 + 0x10) = uVar12;
    iVar15 = *(int *)puVar3;
    iVar16 = iVar19;
    do {
      iVar16 = iVar16 + 1;
      iVar15 = iVar15 + iVar5 + iVar16 * 0x10;
      piVar11 = piVar10 + 1;
      uVar12 = puVar22[2];
      uVar9 = puVar22[3];
      uVar6 = puVar22[1];
      *(undefined4 *)(iVar15 + 4) = *puVar22;
      *(undefined4 *)(iVar15 + 8) = uVar6;
      *(undefined4 *)(iVar15 + 0xc) = uVar12;
      *(undefined4 *)(iVar15 + 0x10) = uVar9;
      iVar15 = *(int *)puVar3;
      *(ushort *)(iVar15 + iVar5 + iVar16 * 0x10 + 6) =
           (ushort)*(byte *)((int)piVar10 + 1) | (ushort)(*piVar10 << 8);
      puVar13 = PTR_gP2PTcpAddrNum_004683b0;
      puVar24 = PTR_gTNPSession_004682bc;
      piVar10 = piVar11;
    } while (piVar11 != piVar18);
    iVar17 = iVar17 + 1;
    puVar22 = puVar22 + 4;
    iVar19 = iVar19 + 3;
  } while (iVar17 != 3);
  iVar17 = 0;
  if (0 < *(int *)PTR_gP2PTcpAddrNum_004683b0) {
    puVar21 = PTR_DAT_00468298 + -0x5788;
    while( true ) {
      iVar17 = iVar17 + 1;
      uVar6 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(iVar15 + iVar5 + iVar17 * 0x10 + 8))
      ;
      uVar4 = *(ushort *)(*(int *)puVar3 + iVar5 + iVar17 * 0x10 + 6);
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,puVar21,iVar17,uVar6,uVar4 >> 8 | uVar4 << 8);
      if (*(int *)puVar13 <= iVar17) break;
      iVar15 = *(int *)puVar24;
    }
  }
  if (local_3c != 0) {
    iVar15 = (*(code *)PTR_PPPP_TryWakeUp_00468448)(param_1,param_2,param_3,uVar20,5,5);
    puVar24 = PTR_gTNPSessionLock_004682c4;
    if (iVar15 < 0) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5764,iVar15);
      (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar24 + uVar20 * 0x18);
      (*(code *)PTR_PPPP__Reset_Session_00468318)(uVar20,0);
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar24 + uVar20 * 0x18);
      uVar25 = 0xfffff442;
      if (iVar15 == -0xbcb) {
        uVar25 = 0xfffff435;
      }
      return uVar25;
    }
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5748);
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5734);
  iVar15 = *(int *)puVar3;
  uVar6 = (*(code *)PTR_CreateSocket_004683c8)(0);
  iVar17 = *(int *)puVar3 + iVar5;
  *(undefined4 *)(iVar15 + iVar5 + 0xc) = uVar6;
  puVar13 = PTR_DAT_00468298;
  puVar24 = PTR_PPPP_DebugTrace_00468294;
  *(undefined1 *)(iVar17 + 0x10) = 0;
  *(undefined4 *)(iVar17 + 4) = *(undefined4 *)(iVar17 + 0xc);
  *(undefined1 *)(iVar17 + 8) = 0;
  (*(code *)puVar24)(2,puVar13 + -0x5714,*(undefined4 *)(iVar17 + 0xc));
  puVar13 = PTR_gTNPSessionLock_004682c4;
  puVar24 = PTR_gTNPSession_004682bc;
  if (*(int *)(*(int *)puVar3 + iVar5 + 0xc) < 0) {
    (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + uVar20 * 0x18);
    (*(code *)PTR_PPPP__Reset_Session_00468318)(uVar20,0);
    (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar13 + uVar20 * 0x18);
    return 0xfffff430;
  }
  (*(code *)PTR_SetSocketBroadcast_004683cc)();
  local_4c[0] = (ushort)local_38;
  iVar15 = (*(code *)PTR_TryBindPort_004683d0)
                     (*(undefined4 *)(*(int *)puVar24 + iVar5 + 0xc),local_4c);
  puVar21 = PTR_gNetInfo_004682e8;
  puVar13 = PTR_gTNPSessionLock_004682c4;
  if (iVar15 < 0) {
    (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)(*(int *)puVar24 + iVar5 + 0xc));
    (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar13 + uVar20 * 0x18);
    (*(code *)PTR_PPPP__Reset_Session_00468318)(uVar20,0);
    (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar13 + uVar20 * 0x18);
    puVar7 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x5a68,*puVar7);
    return 0xfffff436;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x61d8,local_4c[0]);
  puVar13 = PTR_PPPP_DebugTrace_00468294;
  puVar14 = PTR_DAT_00468298 + -0x5700;
  *(undefined2 *)(*(int *)puVar24 + iVar5 + 0xb8) = 2;
  (*(code *)puVar13)(2,puVar14,puVar21 + 4);
  iVar15 = (*(code *)PTR_gethostbyname_004687f4)(puVar21 + 4);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x56e4);
  if (iVar15 != 0) {
    (*(code *)PTR_memcpy_00468898)
              (*(int *)puVar24 + iVar5 + 0xbc,**(undefined4 **)(iVar15 + 0x10),
               *(undefined4 *)(iVar15 + 0xc));
  }
  puVar24 = PTR_PPPP_DebugTrace_00468294;
  puVar13 = PTR_DAT_00468298 + -0x56d4;
  *(undefined2 *)(*(int *)puVar3 + iVar5 + 200) = 2;
  (*(code *)puVar24)(2,puVar13,puVar21 + 0x14);
  puVar24 = PTR_gTNPSession_004682bc;
  iVar15 = (*(code *)PTR_gethostbyname_004687f4)(puVar21 + 0x14);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x56b8);
  if (iVar15 != 0) {
    (*(code *)PTR_memcpy_00468898)
              (*(int *)puVar24 + iVar5 + 0xcc,**(undefined4 **)(iVar15 + 0x10),
               *(undefined4 *)(iVar15 + 0xc));
  }
  puVar21 = PTR_DAT_00468298;
  puVar13 = PTR_PPPP_DebugTrace_00468294;
  iVar15 = *(int *)puVar24 + iVar5;
  uVar4 = local_4c[0] >> 8 | local_4c[0] << 8;
  *(ushort *)(iVar15 + 0xba) = uVar4;
  *(ushort *)(iVar15 + 0xca) = uVar4;
  *(undefined1 *)(iVar15 + 0xf0) = 0;
  (*(code *)puVar13)(2,puVar21 + -0x56a8,puVar21 + -0x569c);
  puVar13 = PTR_sprintf_004687f0;
  puVar24 = PTR_DAT_00468298;
  iVar15 = *(int *)puVar3 + iVar5;
  *(undefined1 *)(iVar15 + 0xf2) = 0;
  *(undefined1 *)(iVar15 + 0xf6) = 0;
  (*(code *)puVar13)(iVar15 + 0xd8,puVar24 + -0x5694,iVar15 + 0x1a8,*(undefined4 *)(iVar15 + 0x1b8),
                     iVar15 + 0x1b0);
  puVar21 = PTR_gFlagConnectInProgress_0046844c;
  puVar13 = PTR_DAT_00468298;
  puVar24 = PTR_PPPP_DebugTrace_00468294;
  iVar15 = *(int *)puVar3;
  *(undefined1 *)(iVar15 + iVar5 + 0x1d8) = 0;
  *(undefined1 *)(iVar15 + iVar5 + 0x1d0) = 0;
  *puVar21 = 1;
  (*(code *)puVar24)(1,puVar13 + -0x5688);
  iVar15 = *(int *)puVar3;
  uVar6 = (*(code *)PTR_CreateWorkerThread_00468408)(PTR_PPPP_thread_recv_Proto_app_00468450,uVar20)
  ;
  puVar24 = PTR_PPPP__GetLanSearchFlag_00468454;
  *(undefined4 *)(iVar15 + iVar5 + 0x140) = uVar6;
  iVar15 = (*(code *)puVar24)();
  if (local_48 != iVar15) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x566c);
    puVar22 = puVar7;
    do {
      puVar23 = puVar22 + 4;
      (*(code *)PTR_PPPP_Proto_Send_Hello_00468458)
                (*(undefined4 *)(*(int *)puVar3 + iVar5 + 0xc),puVar22);
      puVar22 = puVar23;
    } while (puVar23 != local_a0 + 0xc);
  }
  if ((*(char *)(*(int *)puVar3 + iVar5 + 0x137) == '\x01') ||
     (iVar15 = (*(code *)PTR_PPPP_TryP2P_0046845c)(uVar20,local_48), iVar15 == 0)) {
    iVar15 = (*(code *)PTR_PPPP_TryRelay_0046846c)(uVar20,local_48);
    iVar17 = *(int *)puVar3 + iVar5;
    if ((*(char *)(iVar17 + 0x137) != '\x01') && (iVar15 == 0)) {
      (*(code *)PTR_PPPP_TryRelay_0046846c)(uVar20,local_48);
      goto LAB_0041c308;
    }
  }
  else {
LAB_0041c308:
    iVar17 = *(int *)PTR_gTNPSession_004682bc + iVar5;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x565c,(int)*(char *)(iVar17 + 0x1a5),
             (int)*(char *)(iVar17 + 0x1a6),(int)*(char *)(iVar17 + 0xf6));
  iVar17 = *(int *)puVar3 + iVar5;
  iVar15 = (int)*(char *)(iVar17 + 0x1a5);
  if ((iVar15 < 0) && (iVar15 != -8)) {
    uVar25 = iVar15 + 0xbU & 0xff;
    if (uVar25 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0041c760 */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00468298 + uVar25 * 4 + -0x4f88)))();
      return uVar25;
    }
switchD_0041c798_caseD_3:
    uVar25 = 0xfffff445;
LAB_0041c390:
    puVar24 = PTR_WaitThreadExit_00468404;
    *(undefined1 *)(iVar17 + 0xf2) = 1;
    (*(code *)puVar24)(iVar17 + 0x140);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x53c0,uVar25);
  }
  else {
    if (*(char *)(iVar17 + 0x1a6) < 0) {
      uVar25 = (int)*(char *)(iVar17 + 0x1a6) + 0x20U & 0xff;
      if (uVar25 < 0x20) {
                    /* WARNING: Could not emulate address calculation at 0x0041c78c */
                    /* WARNING: Treating indirect jump as call */
        uVar25 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00468298 + uVar25 * 4 + -0x4f5c)))();
        return uVar25;
      }
      goto switchD_0041c798_caseD_3;
    }
    if (*(char *)(iVar17 + 0xf6) == '\0') {
      if (*(char *)(iVar17 + 0xf5) == '\0') {
        uVar25 = 0xfffff445;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5408);
        iVar17 = *(int *)puVar3 + iVar5;
      }
      else {
        uVar25 = 0xfffff435;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x543c);
        iVar17 = *(int *)puVar3 + iVar5;
      }
      goto LAB_0041c390;
    }
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x53e8);
    puVar24 = PTR_WaitThreadExit_00468404;
    iVar15 = *(int *)puVar3;
    *(undefined1 *)(iVar15 + iVar5 + 0xf2) = 1;
    (*(code *)puVar24)(iVar15 + iVar5 + 0x140);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x53c0,uVar20);
    local_50 = 0xd2;
    local_4f = 2;
    local_4e = 0xe;
    uVar25 = uVar20;
    if (-1 < (int)uVar20) {
      iVar15 = (*(code *)PTR_PPPP__GetLanSearchFlag_00468454)();
      if (local_48 != iVar15) {
        iVar15 = *(int *)PTR_gTNPSession_004682bc + iVar5;
        if (*(char *)(iVar15 + 0xf1) == '\0') {
          puVar24 = PTR_DAT_00468298 + -0x59a0;
        }
        else if (*(char *)(iVar15 + 0x1d0) == ')') {
          puVar24 = PTR_DAT_00468298 + -0x5998;
        }
        else if (*(char *)(iVar15 + 0x1a4) == '\x01') {
          puVar24 = PTR_DAT_00468298 + -0x599c;
        }
        else {
          puVar24 = PTR_DAT_00468298 + -0x5994;
        }
        iVar17 = (int)*(char *)(iVar15 + 0x10);
        if (iVar17 == 1) {
          (*(code *)PTR_PPPP_Proto_Send_Connect_Report_00468464)
                    (*(undefined4 *)(iVar15 + 0xc),1,
                     iVar15 + (*(int *)(iVar15 + 0xa4) + 1) * 0x10 + 4,iVar15 + 0xd8,&local_50,1,
                     puVar24,0);
        }
        else {
          iVar15 = *(int *)PTR_gTNPSession_004682bc + iVar5;
          puVar22 = puVar7;
          while( true ) {
            (*(code *)PTR_PPPP_Proto_Send_Connect_Report_00468464)
                      (*(undefined4 *)(iVar15 + 0xc),iVar17,puVar22,iVar15 + 0xd8,&local_50,1,
                       puVar24,0);
            if (puVar22 + 4 == local_a0 + 0xc) break;
            iVar15 = *(int *)puVar3 + iVar5;
            iVar17 = (int)*(char *)(iVar15 + 0x10);
            puVar22 = puVar22 + 4;
          }
        }
        if (*(char *)(*(int *)puVar3 + iVar5 + 0x1a4) == '\x01') {
          local_a0[0xc] = 0;
          local_a0[0xd] = 0;
          local_a0[0xe] = 0;
          local_a0[0xf] = 0;
          local_a0[0x10] = 0;
          local_a0[0x11] = 0;
          local_a0[0x12] = 0;
          local_54 = 0;
          uVar6 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(*(int *)puVar3 + iVar5 + 0x198))
          ;
          uVar4 = *(ushort *)(*(int *)PTR_gTNPSession_004682bc + iVar5 + 0x196);
          (*(code *)PTR_snprintf_004688b0)
                    (local_a0 + 0xc,0x1e,PTR_DAT_00468298 + -0x5398,uVar6,uVar4 >> 8 | uVar4 << 8);
          do {
            puVar22 = puVar7 + 4;
            iVar15 = *(int *)puVar3 + iVar5;
            (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                      (*(undefined4 *)(iVar15 + 0xc),(int)*(char *)(iVar15 + 0x10),puVar7,
                       iVar15 + 0xd8,1,(int)*(char *)(iVar15 + 0x1d0),(int)*(char *)(iVar15 + 0xf0),
                       0,local_a0 + 0xc);
            puVar7 = puVar22;
          } while (puVar22 != local_a0 + 0xc);
        }
      }
      puVar24 = PTR_gTNPSessionLock_004682c4;
      (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + uVar20 * 0x18);
      iVar15 = *(int *)puVar3;
      iVar17 = iVar15 + iVar5;
      *(undefined1 *)(iVar17 + 0xf3) = 0;
      *(undefined1 *)(iVar17 + 0xf4) = 0;
      if (*(char *)(iVar17 + 0x1d0) == ')') {
        *(undefined1 *)(iVar17 + 8) = 1;
      }
      else {
        *(undefined1 *)(iVar17 + 8) = 0;
        *(undefined4 *)(iVar17 + 4) = *(undefined4 *)(iVar17 + 0xc);
      }
      puVar13 = PTR_gTNPSession_004682bc;
      iVar17 = 0;
      while( true ) {
        iVar19 = iVar17 * 0x1c;
        iVar17 = iVar17 + 1;
        (*(code *)PTR_sll_Init_00468474)(iVar15 + iVar5 + iVar19 + 0x3f0,0x10000);
        (*(code *)PTR_sll_Init_00468474)(*(int *)puVar3 + iVar5 + iVar19 + 0x348,0x10000);
        (*(code *)PTR_sll_Init_00468474)(*(int *)puVar3 + iVar5 + iVar19 + 0x2a0,0x10000);
        (*(code *)PTR_sll_Init_00468474)(*(int *)puVar3 + iVar5 + iVar19 + 0x1f8,0x10000);
        puVar14 = PTR_gTNPSession_004682bc;
        puVar21 = PTR_MUTEX_RELEASE_004682b4;
        if (iVar17 == 6) break;
        iVar15 = *(int *)puVar13;
      }
      iVar15 = *(int *)puVar24;
      *(undefined1 *)(*(int *)PTR_gTNPSession_004682bc + iVar5 + 0x13b) = 1;
      (*(code *)puVar21)(iVar15 + uVar20 * 0x18);
      iVar15 = *(int *)puVar14 + iVar5;
      if (0 < *(int *)(iVar15 + 0xc)) {
        if (*(int *)(iVar15 + 0xc) != *(int *)(iVar15 + 4)) {
          (*(code *)PTR_CloseSocket_004683b4)();
          iVar15 = *(int *)puVar14 + iVar5;
        }
        *(undefined4 *)(iVar15 + 0xc) = 0xffffffff;
        *(undefined1 *)(iVar15 + 0x10) = 0;
      }
      if (*(char *)(iVar15 + 8) == '\0') {
        uVar6 = (*(code *)PTR_CreateWorkerThread_00468408)(PTR_PPPP_thread_recv_DRW_00468480,uVar20)
        ;
        iVar17 = *(int *)puVar3;
        *(undefined4 *)(iVar15 + 0x148) = uVar6;
        iVar15 = iVar17 + iVar5;
      }
      uVar6 = (*(code *)PTR_CreateWorkerThread_00468408)(PTR_PPPP_thread_send_DRW_00468478,uVar20);
      puVar24 = PTR_getCurTime_004682c8;
      *(undefined4 *)(iVar15 + 0x14c) = uVar6;
      uVar27 = (*(code *)puVar24)();
      puVar13 = PTR_DAT_00468298;
      puVar24 = PTR_PPPP_DebugTrace_00468294;
      iVar15 = (int)uVar27 - local_44;
      *(int *)(*(int *)puVar3 + iVar5 + 0x1c4) = iVar15;
      (*(code *)puVar24)(1,puVar13 + -0x5390,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),iVar15);
      (*(code *)PTR_PPPP___Dump_Session_Info_0046847c)(uVar20);
      goto LAB_0041c700;
    }
  }
  local_4e = 0xe;
  local_4f = 2;
  local_50 = 0xd2;
  (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(uVar20);
  iVar15 = (*(code *)PTR_PPPP__GetLanSearchFlag_00468454)();
  puVar24 = PTR_gTNPSession_004682bc;
  if (local_48 == iVar15) {
LAB_0041c67c:
    iVar17 = *(int *)puVar3 + iVar5;
  }
  else {
    iVar15 = *(int *)puVar3;
    iVar19 = iVar15 + iVar5;
    iVar17 = (int)*(char *)(iVar19 + 0x10);
    if (iVar17 == 1) {
      local_30 = iVar17;
      (*(code *)PTR_PPPP_Proto_Send_Connect_Report_00468464)
                (*(undefined4 *)(iVar19 + 0xc),1,iVar19 + (*(int *)(iVar19 + 0xa4) + 1) * 0x10 + 4,
                 iVar19 + 0xd8,&local_50,0,0,uVar25);
      iVar17 = *(int *)puVar24 + iVar5;
      if (*(char *)(iVar17 + 0x1d8) != '\0') {
        (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                  (*(undefined4 *)(iVar17 + 0xc),(int)*(char *)(iVar17 + 0x10),
                   iVar17 + (*(int *)(iVar17 + 0xa4) + 1) * 0x10 + 4,iVar17 + 0xd8,local_30,
                   (int)*(char *)(iVar17 + 0x1d0),(int)*(char *)(iVar17 + 0xf0),(int)(short)uVar25,
                   PTR_LAB_00468460 + 0x5a14);
        iVar17 = *(int *)puVar24 + iVar5;
      }
      if (uVar25 == 0xfffff426) {
        local_a0[0xc] = 0;
        local_a0[0xd] = 0;
        local_a0[0xe] = 0;
        local_a0[0xf] = 0;
        local_a0[0x10] = 0;
        local_a0[0x11] = 0;
        local_a0[0x12] = 0;
        local_54 = 0;
        (*(code *)PTR_sprintf_004687f0)(local_a0 + 0xc,PTR_DAT_00468298 + -0x53a0,iVar17 + 0xf7);
        iVar15 = *(int *)puVar3 + iVar5;
        (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                  (*(undefined4 *)(iVar15 + 0xc),(int)*(char *)(iVar15 + 0x10),
                   iVar15 + (*(int *)(iVar15 + 0xa4) + 1) * 0x10 + 4,iVar15 + 0xd8,1,
                   (int)*(char *)(iVar15 + 0x1d0),(int)*(char *)(iVar15 + 0xf0),0xfffff426,
                   local_a0 + 0xc);
        goto LAB_0041c67c;
      }
    }
    else {
      puVar24 = PTR_LAB_00468460 + 0x5a14;
      while( true ) {
        (*(code *)PTR_PPPP_Proto_Send_Connect_Report_00468464)
                  (*(undefined4 *)(iVar15 + iVar5 + 0xc),iVar17,puVar7,iVar15 + iVar5 + 0xd8,
                   &local_50,0,0,uVar25);
        iVar15 = *(int *)puVar3;
        iVar17 = iVar15 + iVar5;
        if (*(char *)(iVar17 + 0x1d8) != '\0') {
          (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                    (*(undefined4 *)(iVar17 + 0xc),(int)*(char *)(iVar17 + 0x10),puVar7,
                     iVar17 + 0xd8,1,(int)*(char *)(iVar17 + 0x1d0),(int)*(char *)(iVar17 + 0xf0),
                     (int)(short)uVar25,puVar24);
          iVar15 = *(int *)PTR_gTNPSession_004682bc;
          iVar17 = iVar15 + iVar5;
        }
        if (uVar25 == 0xfffff426) {
          local_a0[0xc] = 0;
          local_a0[0xd] = 0;
          local_a0[0xe] = 0;
          local_a0[0xf] = 0;
          local_a0[0x10] = 0;
          local_a0[0x11] = 0;
          local_a0[0x12] = 0;
          local_54 = 0;
          (*(code *)PTR_sprintf_004687f0)(local_a0 + 0xc,PTR_DAT_00468298 + -0x53a0,iVar17 + 0xf7);
          iVar15 = *(int *)puVar3 + iVar5;
          (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                    (*(undefined4 *)(iVar15 + 0xc),(int)*(char *)(iVar15 + 0x10),puVar7,
                     iVar15 + 0xd8,1,(int)*(char *)(iVar15 + 0x1d0),(int)*(char *)(iVar15 + 0xf0),
                     0xfffff426,local_a0 + 0xc);
          iVar15 = *(int *)puVar3;
          iVar17 = iVar15 + iVar5;
        }
        puVar7 = puVar7 + 4;
        if (puVar7 == local_a0 + 0xc) break;
        iVar17 = (int)*(char *)(iVar17 + 0x10);
      }
    }
  }
  if (0 < *(int *)(iVar17 + 0xc)) {
    (*(code *)PTR_CloseSocket_004683b4)();
    iVar15 = *(int *)puVar3;
    *(undefined4 *)(iVar15 + iVar5 + 0xc) = 0xffffffff;
    *(undefined1 *)(iVar15 + iVar5 + 0x10) = 0;
  }
  puVar24 = PTR_gTNPSessionLock_004682c4;
  (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + uVar20 * 0x18);
  (*(code *)PTR_PPPP__Reset_Session_00468318)(uVar20,0);
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar24 + uVar20 * 0x18);
  local_34 = uVar25;
LAB_0041c700:
  *PTR_gFlagConnectInProgress_0046844c = 0;
  return local_34;
}



// ==== PPPP__GetP2PServerAddrApp @ 0041d15c size=720

/* PPPP__GetP2PServerAddrApp(char const*, char*, int, char*, char*, char*) */

int PPPP__GetP2PServerAddrApp
              (char *param_1,char *param_2,int param_3,char *param_4,char *param_5,char *param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  
  puVar8 = PTR_gP2PServerMapNum_00468484;
  iVar7 = *(int *)PTR_gP2PServerMapNum_00468484;
  if (iVar7 < 1) {
    iVar6 = 0;
LAB_0041d1ec:
    if (iVar7 != iVar6) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5368,param_1);
      (*(code *)PTR_strcpy_004688e0)(param_6,PTR_P2PServerMap_00468488 + iVar6 * 0xc4 + 0x40);
      return 0;
    }
  }
  else {
    iVar6 = 0;
    puVar5 = PTR_P2PServerMap_00468488;
    do {
      iVar2 = (*(code *)PTR_strcmp_004687fc)(puVar5,param_1);
      if (iVar2 == 0) goto LAB_0041d1ec;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 0xc4;
    } while (iVar6 != iVar7);
  }
  iVar7 = (*(code *)PTR_PPPP__GetP2PServerAddr_0046848c)(param_2,param_3,param_4,param_5,param_6);
  puVar1 = PTR_P2PServerMap_00468488;
  puVar5 = PTR_gP2PServerMapNum_00468484;
  if (iVar7 != 0) {
    return iVar7;
  }
  if (*(int *)puVar8 < 0x40) {
    puVar8 = PTR_P2PServerMap_00468488 + *(int *)puVar8 * 0xc4;
    (*(code *)PTR_strcpy_004688e0)(puVar8,param_1);
    (*(code *)PTR_strcpy_004688e0)(puVar1 + iVar6 * 0xc4 + 0x40,param_6);
    uVar3 = (*(code *)PTR_time_00468800)(0);
    iVar7 = *(int *)puVar5;
    *(undefined4 *)(puVar8 + 0xc0) = uVar3;
    *(int *)puVar5 = iVar7 + 1;
    return 0;
  }
  iVar2 = 1;
  iVar7 = 0;
  piVar4 = (int *)(PTR_P2PServerMap_00468488 + 0x184);
  do {
    if (*piVar4 < *(int *)(PTR_P2PServerMap_00468488 + iVar7 * 0xc4 + 0xc0)) {
      iVar7 = iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 0x31;
  } while (iVar2 != 0x40);
  puVar8 = PTR_P2PServerMap_00468488 + iVar7 * 0xc4;
  (*(code *)PTR_memset_00468810)(puVar8,0,0xc4);
  (*(code *)PTR_strcpy_004688e0)(puVar8,param_1);
  (*(code *)PTR_strcpy_004688e0)(puVar1 + iVar6 * 0xc4 + 0x40,param_6);
  uVar3 = (*(code *)PTR_time_00468800)(0);
  *(undefined4 *)(puVar8 + 0xc0) = uVar3;
  return 0;
}



// ==== PPPP_ConnectByServer @ 0041d924 size=228

undefined4
PPPP_ConnectByServer
          (undefined4 param_1,char param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20[0] = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  iVar1 = (*(code *)PTR_PPPP__ParseDID_00468498)(param_1,&local_30,0x10,local_20,&local_40,0x10);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_PPPP_Connect_To_00468494)
                      (&local_30,local_20[0],&local_40,(int)param_2,param_4,param_3,param_5,0);
  }
  else {
    uVar2 = 0xfffff444;
  }
  return uVar2;
}



// ==== PPPP__App_Init @ 0041db1c size=60

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__App_Init() */

undefined4 PPPP__App_Init(void)

{
  (*(code *)PTR_memset_00468810)(PTR_P2PServerMap_00468488,0,0x3100);
  return 0;
}



// ==== PPPP__App_UnInit @ 0041db58 size=88

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__App_UnInit() */

undefined4 PPPP__App_UnInit(void)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = PTR_gFlagConnectInProgress_0046844c;
  cVar1 = *PTR_gFlagConnectInProgress_0046844c;
  while (cVar1 != '\0') {
    (*(code *)PTR_mSecSleep_004682d4)(10);
    cVar1 = *puVar2;
  }
  return 0;
}



// ==== PPPP_Connect_Break_All @ 0041dda0 size=88

undefined4 PPPP_Connect_Break_All(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)PTR_gMaxSessionNumber_004682b8;
  if (iVar2 != 0) {
    iVar4 = 0;
    iVar3 = *(int *)PTR_gTNPSession_004682bc;
    do {
      iVar1 = iVar4 * 0x3f20;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar3 + iVar1 + 0xf5) = 1;
    } while (iVar4 != iVar2);
  }
  return 0;
}



// ==== PPPP__thread_callback @ 0041de00 size=88

/* PPPP__thread_callback(void*) */

void PPPP__thread_callback(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_004687e0)();
  (*(code *)PTR_pthread_detach_0046886c)(uVar1);
  (**(code **)PTR_gIncomingConnectionCallback_004684a0)();
  (*(code *)PTR_pthread_exit_004688b4)(0);
  return;
}



// ==== PPPP_thread_recv_LanSearch @ 0041de58 size=1044

/* PPPP_thread_recv_LanSearch(void*) */

void PPPP_thread_recv_LanSearch(void *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_590 [8];
  undefined4 local_588;
  undefined1 auStack_584 [1268];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [2];
  ushort local_4e;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  char local_29;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x40,PTR_DAT_00468298 + -0x4ed0);
  iVar5 = (*(code *)PTR_setup_listen_port_004684a4)(0x7d6c);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x40,PTR_DAT_00468298 + -0x4ea8,iVar5);
  puVar2 = PTR_gTNPSession_004682bc;
  if (iVar5 < 0) {
    (*(code *)PTR_pthread_exit_004688b4)(0);
    return;
  }
  iVar1 = (int)param_1 * 0x3f20;
  puVar9 = PTR_DAT_00468298 + -0x66cc;
LAB_0041defc:
  do {
    iVar12 = *(int *)puVar2;
    while( true ) {
      puVar10 = PTR_gTNPSession_004682bc;
      if ((iVar12 == 0) || (*(char *)(iVar12 + iVar1 + 0xf2) != '\0')) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x40,PTR_DAT_00468298 + -0x4e58);
        (*(code *)PTR_CloseSocket_004683b4)(iVar5);
        (*(code *)PTR_pthread_exit_004688b4)(0);
        return;
      }
      iVar12 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                         (iVar5,auStack_50,200,&local_29,&local_2c,auStack_590,0x500,&uStack_2a);
      cVar4 = local_29;
      uVar3 = local_2c;
      if ((iVar12 != 0) || (*(char *)(*(int *)puVar10 + iVar1 + 0xf2) != '\0')) goto LAB_0041defc;
      uVar6 = (*(code *)PTR_inet_ntoa_00468804)(local_4c);
      (*(code *)PTR_PPPP_DebugTrace_00468294)
                (0x400,puVar9,cVar4,uVar3,uVar6,local_4e >> 8 | local_4e << 8);
      if (local_29 == '0') break;
      if (local_29 != '1') goto LAB_0041defc;
      local_38 = 0;
      local_34 = 0;
      local_40 = 0;
      local_3c = 0;
      (*(code *)PTR_PPPP_Proto_Read_LanNotify_004684a8)(auStack_590,&local_38,&local_30,&local_40);
      (*(code *)PTR_PPPP_DebugTrace_00468294)
                (0x40,PTR_DAT_00468298 + -0x34ec,&local_38,local_30,&local_40);
      iVar7 = *(int *)puVar10 + iVar1;
      iVar12 = (*(code *)PTR_strncmp_00468840)(auStack_590,iVar7 + 0x1a8,7);
      if (iVar12 == 0) {
        iVar12 = (*(code *)PTR_strncmp_00468840)(auStack_584,iVar7 + 0x1b0,7);
        if (iVar12 == 0) {
          iVar12 = (*(code *)PTR___bswapsi2_004683d8)(local_588);
          if (iVar12 == *(int *)(iVar7 + 0x1b8)) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x40,PTR_DAT_00468298 + -0x4e34,&local_38,local_30,&local_40);
            goto LAB_0041defc;
          }
        }
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)
                (0x40,PTR_DAT_00468298 + -0x4df4,&local_38,local_30,&local_40);
      iVar12 = *(int *)puVar2 + iVar1;
      (*(code *)PTR_PPPP_Proto_Send_LanNotifyAck_004684ac)
                (*(undefined4 *)(iVar12 + 4),auStack_50,iVar12 + 0x1a8,
                 *(undefined4 *)(iVar12 + 0x1b8),iVar12 + 0x1b0);
      puVar10 = PTR_memset_00468810;
      if (PTR_gSDevInfo_004684b0[0x61] != '\0') goto LAB_0041defc;
      PTR_gSDevInfo_004684b0[0x61] = 1;
      (*(code *)puVar10)(auStack_90,0,0x40);
      puVar10 = PTR_gP2PServerAddr_004682a8;
      puVar8 = PTR_gP2PServerAddr_004682a8 + 0x30;
      uVar13 = (*(code *)PTR_getCurTime_004682c8)();
      uVar6 = (*(code *)PTR___udivdi3_004682f0)((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0)
      ;
      (*(code *)PTR_snprintf_004688b0)(auStack_90,0x40,PTR_DAT_00468298 + -0x4e7c,uVar6,9);
      do {
        iVar12 = *(int *)puVar2 + iVar1;
        puVar11 = puVar10 + 0x10;
        (*(code *)PTR_PPPP_Proto_Send_SDev_Report_004684b4)
                  (iVar5,puVar10,PTR_LAB_00468460 + 0x5a14,0,PTR_LAB_00468460 + 0x5a14,
                   iVar12 + 0x1a8,*(undefined4 *)(iVar12 + 0x1b8),iVar12 + 0x1b0,3,auStack_90);
        puVar10 = puVar11;
      } while (puVar11 != puVar8);
      iVar12 = *(int *)puVar2;
    }
    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x40,PTR_DAT_00468298 + -0x4e8c);
    iVar12 = *(int *)puVar10 + iVar1;
    (*(code *)PTR_PPPP_Proto_Send_PunchPkt_EX_00468360)
              (*(undefined4 *)(iVar12 + 4),auStack_50,iVar12 + 0x1a8,*(undefined4 *)(iVar12 + 0x1b8)
               ,iVar12 + 0x1b0);
  } while( true );
}



// ==== PPPP_thread_hello @ 0041e26c size=744

/* PPPP_thread_hello(void*) */

void PPPP_thread_hello(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_s0;
  undefined1 *unaff_s1;
  undefined1 *unaff_s2;
  short *unaff_s3;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *unaff_s5;
  int unaff_s7;
  code *pcVar10;
  int unaff_s8;
  undefined1 auStack_548 [1280];
  undefined1 auStack_48 [16];
  undefined2 local_38;
  short local_36;
  undefined1 uStack_34;
  char local_33 [3];
  undefined1 *local_30;
  
  iVar7 = 0;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4db8);
  puVar2 = PTR_gExitHelloThread_004684b8;
LAB_0041e2c8:
  do {
    if (*(int *)puVar2 != 0) goto LAB_0041e498;
LAB_0041e2d8:
    iVar6 = (*(code *)PTR_time_00468800)(0);
    if (0x545f < (uint)(iVar6 - iVar7)) {
      while (unaff_s8 = (*(code *)PTR_CreateSocket_004683c8)(0), unaff_s8 < 0) {
        (*(code *)PTR_mSecSleep_004682d4)(100);
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x5710,unaff_s8);
      (*(code *)PTR_SetSocketBroadcast_004683cc)(unaff_s8);
      local_38 = 0;
      iVar6 = (*(code *)PTR_TryBindPort_004683d0)(unaff_s8,&local_38);
      puVar1 = PTR_gP2PServerAddr_004682a8;
      if (-1 < iVar6) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x61d8,local_38);
        puVar4 = PTR_gCheckCode_004684c0;
        puVar3 = PTR_gSN_004684bc;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4d98);
        puVar8 = puVar1;
        do {
          puVar9 = puVar8 + 0x10;
          (*(code *)PTR_PPPP_Proto_Send_Hello_With_Body_004684c4)
                    (unaff_s8,puVar8,PTR_gPrefix_004684c8,*(undefined4 *)puVar3,puVar4,1);
          puVar8 = puVar9;
        } while (puVar9 != puVar1 + 0x30);
        unaff_s1 = auStack_48;
        unaff_s5 = local_33;
        iVar7 = (*(code *)PTR_time_00468800)(0);
        unaff_s3 = &local_36;
        unaff_s2 = auStack_548;
        unaff_s7 = 3;
        unaff_s0 = 0x500;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4d78);
        local_30 = &uStack_34;
        do {
          iVar6 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                            (unaff_s8,unaff_s1,30000,unaff_s5,unaff_s3,unaff_s2,unaff_s0,&uStack_34)
          ;
          if (iVar6 != 0) goto LAB_0041e4a0;
          if (local_33[0] == '\x01') {
            iVar5 = unaff_s7 + -1;
            if (local_36 == 0x10) {
              (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4d50);
              pcVar10 = (code *)PTR_CloseSocket_004683b4;
              if (*(int *)PTR_gDeviceNextLoginType_004684cc == 0) goto LAB_0041e47c;
              *(undefined4 *)PTR_gDeviceNextLoginType_004684cc = 0;
              goto LAB_0041e47c;
            }
          }
          else {
            iVar5 = unaff_s7 + -1;
          }
          while (unaff_s7 = iVar5, pcVar10 = (code *)PTR_CloseSocket_004683b4, unaff_s7 == 0) {
LAB_0041e47c:
            (*pcVar10)(unaff_s8);
            while( true ) {
              if (*(int *)puVar2 == 0) goto LAB_0041e2d8;
LAB_0041e498:
              iVar6 = (*(code *)PTR_pthread_exit_004688b4)(0);
LAB_0041e4a0:
              iVar5 = unaff_s7 + -1;
              if (1 < iVar6 + 2U) break;
              (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4d34);
              (*(code *)PTR_CloseSocket_004683b4)(unaff_s8);
            }
          }
        } while( true );
      }
      (*(code *)PTR_CloseSocket_004683b4)(unaff_s8);
      (*(code *)PTR_mSecSleep_004682d4)(100);
      goto LAB_0041e2c8;
    }
    (*(code *)PTR_mSecSleep_004682d4)(1000);
  } while( true );
}



// ==== PPPP__ExitSuperDevice @ 0041e6b8 size=60

/* tnp::PPPP__ExitSuperDevice(char) */

void tnp::PPPP__ExitSuperDevice(char param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_gSDevInfo_004684b0;
  if ((PTR_gSDevInfo_004684b0[0x6c] != '\0') && (PTR_gSDevInfo_004684b0[0x6c] != '\x03')) {
    PTR_gSDevInfo_004684b0[0x6c] = 3;
    puVar1[0x6d] = param_1;
  }
  return;
}



// ==== PPPP__ResetSuperDevice @ 0041e6f4 size=100

/* tnp::PPPP__ResetSuperDevice() */

void tnp::PPPP__ResetSuperDevice(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_gSDevInfo_004684b0;
  uVar1 = PTR_gSDevInfo_004684b0[0x60];
  uVar2 = PTR_gSDevInfo_004684b0[0x61];
  (*(code *)PTR_memset_00468810)(PTR_gSDevInfo_004684b0,0,0x70);
  puVar3[0x60] = uVar1;
  puVar3[0x61] = uVar2;
  return;
}



// ==== PPPP__ShareBandwidth @ 0041e758 size=24

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__ShareBandwidth() */

int PPPP__ShareBandwidth(void)

{
  return (int)(char)PTR_gSDevInfo_004684b0[0x60];
}



// ==== PPPP__AnotherDeviceInLan @ 0041e770 size=24

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__AnotherDeviceInLan() */

int PPPP__AnotherDeviceInLan(void)

{
  return (int)(char)PTR_gSDevInfo_004684b0[0x61];
}



// ==== PPPP__IncomingConnectionCallback @ 0041e788 size=56

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__IncomingConnectionCallback() */

void PPPP__IncomingConnectionCallback(void)

{
  if (*(int *)PTR_gIncomingConnectionCallback_004684a0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041e7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_CreateWorkerThread_00468408)(PTR_PPPP__thread_callback_004684d4,0);
    return;
  }
  return;
}



// ==== PPPP__NoticeToCallback @ 0041e7c0 size=44

/* PPPP__NoticeToCallback(unsigned long long, char*, unsigned int) */

void PPPP__NoticeToCallback(ulonglong param_1,char *param_2,uint param_3)

{
  if (*(code **)PTR_gNoticeToCallback_004684d8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041e7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_gNoticeToCallback_004684d8)((int)param_1,(int)(param_1 >> 0x20));
    return;
  }
  return;
}



// ==== PPPP__Device_Init @ 0041e7ec size=88

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__Device_Init() */

undefined4 PPPP__Device_Init(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)PTR_gLastSuccessLoginTime_004684dc = 0;
  puVar1 = PTR_gSDevInfo_004684b0;
  *(undefined4 *)PTR_gExitHelloThread_004684b8 = 0;
  puVar2 = PTR_PPPP__ResetSuperDevice_004684e4;
  *(undefined4 *)PTR_hthread_hello_004684e0 = 0;
  puVar1[0x60] = 1;
  puVar1[0x61] = 0;
  (*(code *)puVar2)();
  return 0;
}



// ==== PPPP__Device_UnInit @ 0041e844 size=196

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__Device_UnInit() */

undefined4 PPPP__Device_UnInit(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar2 = PTR_gSDevInfo_004684b0;
  (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(0);
  puVar3 = PTR_gP2PTcpSocket_004684ec;
  (*(code *)PTR_WaitThreadExit_00468404)(puVar2 + 0x68);
  iVar5 = *(int *)puVar3;
  *(undefined4 *)(puVar2 + 0x68) = 0;
  if (0 < iVar5) {
    (*(code *)PTR_CloseSocket_004683b4)();
    *(undefined4 *)puVar3 = 0xffffffff;
  }
  puVar4 = PTR_gFlagListenInProgress_004684f0;
  puVar3 = PTR_hthread_hello_004684e0;
  puVar2 = PTR_WaitThreadExit_00468404;
  *(undefined4 *)PTR_gExitHelloThread_004684b8 = 1;
  (*(code *)puVar2)(puVar3);
  cVar1 = *puVar4;
  while (cVar1 != '\0') {
    (*(code *)PTR_mSecSleep_004682d4)(10);
    cVar1 = *puVar4;
  }
  return 0;
}



// ==== PPPP__SessionHandler_Is_Full @ 0041e908 size=104

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__SessionHandler_Is_Full() */

undefined4 PPPP__SessionHandler_Is_Full(void)

{
  char *pcVar1;
  int iVar2;
  
  if (*(int *)PTR_gMaxSessionNumber_004682b8 == 0) {
    return 1;
  }
  pcVar1 = *(char **)PTR_gTNPSession_004682bc;
  if (*pcVar1 == '\x01') {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 0x3f20;
      if (iVar2 == *(int *)PTR_gMaxSessionNumber_004682b8) {
        return 1;
      }
    } while (*pcVar1 == '\x01');
  }
  return 0;
}



// ==== PPPP_thread_recv_Proto_TCP_device @ 0041e970 size=3152

/* WARNING: Control flow encountered bad instruction data */
/* PPPP_thread_recv_Proto_TCP_device(void*) */

void PPPP_thread_recv_Proto_TCP_device(void *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined2 *puVar22;
  undefined1 auStack_c00 [4];
  byte local_bfc [2];
  ushort uStack_bfa;
  byte local_bf8 [4];
  undefined1 local_bf4 [4];
  undefined4 local_bf0 [476];
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74 [3];
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined2 local_5c;
  ushort local_5a;
  ushort local_58;
  byte local_56 [6];
  undefined4 *local_50;
  int local_4c;
  byte *local_48;
  int local_38;
  int local_34;
  
  uVar14 = 0;
  uVar13 = 0;
  (*(code *)PTR_getCurTime_004682c8)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x6358);
  iVar17 = (int)param_1 * 0x3f20;
  local_4c = (int)param_1 * 0x18;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          puVar5 = PTR_gTNPSession_004682bc;
          if ((*(int *)PTR_gTNPSession_004682bc == 0) ||
             (iVar19 = *(int *)PTR_gTNPSession_004682bc + iVar17, *(char *)(iVar19 + 0xf2) != '\0'))
          goto LAB_0041f27c;
          iVar19 = *(int *)(iVar19 + 0xc);
          if (-1 < iVar19) break;
          (*(code *)PTR_mSecSleep_004682d4)(10);
        }
        local_58 = (ushort)(0x780 - uVar13);
        iVar19 = (*(code *)PTR_PPPP_Proto_Recv_TCP_004683a8)
                           (iVar19,auStack_c00 + uVar13,0x780 - uVar13 & 0xffff,&local_58,0x28);
        puVar6 = PTR_gTNPSessionLock_004682c4;
        if (iVar19 != 0) break;
        uVar13 = uVar13 + local_58;
        uVar12 = 0;
        while( true ) {
          uVar13 = uVar13 & 0xffff;
          puVar15 = auStack_c00 + uVar12;
          iVar19 = (*(code *)PTR_PPPP__Check_Session_Data_Ready_004683ac)
                             (puVar15,uVar13,&local_5a,local_56);
          puVar5 = PTR_gTNPSessionLock_004682c4;
          if (iVar19 != 1) break;
          if ((*(int *)PTR_gTNPSession_004682bc == 0) ||
             (*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 0xf2) != '\0'))
          goto LAB_0041f27c;
          pbVar16 = auStack_c00 + uVar12 + 4;
          uVar20 = local_5a + 4 & 0xffff;
          uVar13 = uVar13 - uVar20;
          (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + local_4c);
          if (local_56[0] == 0x3c) {
            local_50 = &local_480;
            local_74[0] = 0;
            local_74[1] = 0;
            local_7c = 0;
            local_78 = 0;
            (*(code *)PTR_memset_00468810)(local_50,0,0x404);
            puVar22 = &local_5c;
            (*(code *)PTR_PPPP_Proto_Read_NoticeTo_00468508)
                      (pbVar16,local_74,&local_60,&local_7c,&local_68,puVar22,&local_480);
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x10,PTR_DAT_00468298 + -0x4bac,local_74,local_60,&local_7c,puVar22,local_68,
                       local_64,local_5c);
            iVar21 = *(int *)PTR_gTNPSession_004682bc + iVar17;
            iVar19 = (*(code *)PTR_strncmp_00468840)(local_74,iVar21 + 0x1a8,7);
            if (((iVar19 == 0) &&
                (iVar19 = (*(code *)PTR_strncmp_00468840)(&local_7c,iVar21 + 0x1b0,7), iVar19 == 0))
               && (*(int *)(iVar21 + 0x1b8) == local_60)) {
              (*(code *)PTR_PPPP__NoticeToCallback_0046850c)(local_68,local_64,&local_480,local_5c);
            }
          }
          else if (local_56[0] < 0x3d) {
            if (local_56[0] == 0x15) {
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x10,PTR_DAT_00468298 + -0x4c28,(int)(char)*pbVar16,local_bfc[uVar12 + 1]);
              puVar6 = PTR_time_00468800;
              *(undefined4 *)PTR_gDeviceTCPLoginSend_004684fc = 0;
              uVar7 = (*(code *)puVar6)(0);
              puVar6 = PTR_gLastSuccessLoginTime_004684dc;
              if (*pbVar16 == 0) {
                iVar19 = *(int *)PTR_gTNPSession_004682bc + iVar17;
                *(undefined1 *)(iVar19 + 0x1a7) = 0;
                bVar1 = local_bfc[uVar12 + 1];
                *(undefined4 *)puVar6 = uVar7;
                if (bVar1 - 10 < 0x29) {
                  *(byte *)(iVar19 + 0x1d9) = bVar1;
                }
                else {
                  *(undefined1 *)(iVar19 + 0x1d9) = 0x19;
                }
              }
              else {
                if (*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 0x1a7) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                *(byte *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 0x1a7) = *pbVar16;
              }
            }
            else if (local_56[0] == 0x3a) {
              local_50 = &local_480;
              local_7c = 0;
              local_78 = 0;
              local_480 = 0;
              local_47c = 0;
              (*(code *)PTR_PPPP_Proto_Read_NoticePing_004684f4)
                        (pbVar16,&local_7c,local_74,local_50);
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x10,PTR_DAT_00468298 + -0x4bf0,&local_7c,local_74[0],&local_480);
              iVar21 = *(int *)PTR_gTNPSession_004682bc + iVar17;
              iVar19 = (*(code *)PTR_strncmp_00468840)(&local_7c,iVar21 + 0x1a8,7);
              if (((iVar19 == 0) &&
                  (iVar19 = (*(code *)PTR_strncmp_00468840)(&local_480,iVar21 + 0x1b0,7),
                  iVar19 == 0)) &&
                 ((*(int *)(iVar21 + 0x1b8) == local_74[0] &&
                  ((iVar19 = (*(code *)PTR_PPPP_Proto_Send_NoticePingAck_004684f8)
                                       (*(undefined4 *)(iVar21 + 0xc),1,
                                        iVar21 + (*(int *)(iVar21 + 0xa4) + 1) * 0x10 + 4,pbVar16),
                   iVar19 < 0 &&
                   (*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 0xf0) == '\x01')))))) {
                (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x4bd4);
                iVar19 = *(int *)PTR_gTNPSession_004682bc + iVar17;
                *(undefined1 *)(iVar19 + 0xf2) = 1;
                if (*(char *)(iVar19 + 1) == '\0') {
                  *(undefined1 *)(iVar19 + 1) = 6;
                }
              }
            }
            else if (local_56[0] == 6) {
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x10,PTR_DAT_00468298 + -0x63d0,*pbVar16,(int)(char)local_bfc[uVar12 + 1],
                         (int)(char)local_bfc[uVar12 + 2]);
              iVar19 = *(int *)PTR_gTNPSession_004682bc + iVar17;
              *(undefined1 *)(iVar19 + 0x1a5) = 0xf5;
              *(undefined1 *)(iVar19 + 0x1a6) = 0xf5;
              *(undefined1 *)(iVar19 + 0xf2) = 1;
            }
          }
          else if (local_56[0] == 0x8a) {
            local_50 = &local_480;
            uVar7 = (*(code *)PTR_getCurTime_004682c8)();
            (*(code *)PTR_sprintf_004687f0)(&local_480,PTR_DAT_00468298 + -0x4ca4,param_1,uVar7);
            (*(code *)PTR_PPPP__SendReport_004682d0)
                      (1,(int)*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 0x1d0),
                       &local_480);
            iVar19 = (*(code *)PTR_PPPP__SessionHandler_Is_Full_00468504)();
            if (iVar19 == 1) {
              (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x4c88);
            }
            else {
              if (*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 0xf0) == '\x01') {
                (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(2);
              }
              puVar18 = (undefined4 *)((int)local_bf0 + uVar12 + 4);
              (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x27);
              uVar7 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(local_bfc + uVar12 + 4));
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x10,PTR_DAT_00468298 + -0x6424,uVar7,
                         *(ushort *)(local_bfc + uVar12 + 2) >> 8 |
                         *(ushort *)(local_bfc + uVar12 + 2) << 8,0x10,puVar18);
              uVar10 = 0x10;
              local_38 = *(int *)PTR_gTNPSession_004682bc + iVar17;
              local_34 = local_38 + 0x1da;
              iVar8 = (*(code *)PTR_memcmp_0046882c)(local_34,puVar18);
              iVar19 = local_34;
              iVar21 = local_38;
              if (iVar8 != 0) {
                (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,0x27);
                uVar2 = (uint)(local_bf4 + uVar12 + 3) & 3;
                iVar19 = *(int *)(local_bf4 + uVar12 + 3 + -uVar2);
                iVar21 = *(int *)PTR_gTNPSession_004682bc + iVar17;
                uVar9 = *(undefined4 *)(local_bfc + uVar12 + 4);
                uVar7 = *(undefined4 *)(local_bf4 + uVar12 + 4);
                uVar3 = (uint)(local_bf4 + uVar12) & 3;
                uVar4 = *(uint *)(local_bf4 + uVar12 + -uVar3);
                *(undefined4 *)(iVar21 + 0x194) = *(undefined4 *)pbVar16;
                *(undefined4 *)(iVar21 + 0x198) = uVar9;
                *(uint *)(iVar21 + 0x19c) =
                     (iVar19 << (3 - uVar2) * 8 | uVar10 & 0xffffffffU >> (uVar2 + 1) * 8) &
                     -1 << (4 - uVar3) * 8 | uVar4 >> uVar3 * 8;
                *(undefined4 *)(iVar21 + 0x1a0) = uVar7;
                uVar11 = *(undefined4 *)((int)local_bf0 + uVar12 + 8);
                uVar7 = *(undefined4 *)((int)local_bf0 + uVar12 + 0x10);
                uVar9 = *(undefined4 *)((int)local_bf0 + uVar12 + 0xc);
                *(undefined4 *)(iVar21 + 0x1da) = *puVar18;
                *(undefined4 *)(iVar21 + 0x1de) = uVar11;
                puVar6 = PTR_PPPP__Halt_TCP_For_Session_004683a0;
                *(undefined4 *)(iVar21 + 0x1e2) = uVar9;
                *(undefined4 *)(iVar21 + 0x1e6) = uVar7;
                (*(code *)puVar6)(param_1);
                (*(code *)PTR_PPPP__Start_TCP_For_Session_004683f0)(param_1,pbVar16,0x1e);
                iVar21 = *(int *)PTR_gTNPSession_004682bc + iVar17;
                iVar19 = iVar21 + 0x1da;
              }
              if ((*(char *)(iVar21 + 0x1d0) == '\'') && (-1 < *(int *)(iVar21 + 4))) {
                iVar19 = (*(code *)PTR_PPPP_Proto_Send_RlyTCPPkt_00468390)
                                   (*(int *)(iVar21 + 4),iVar21 + 0x194,iVar19,
                                    (int)*(char *)(iVar21 + 0xf0));
                if (iVar19 < 0) {
                  (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(param_1);
                  uVar7 = 0xffffffff;
                  iVar21 = *(int *)PTR_gTNPSession_004682bc + iVar17;
                  iVar19 = iVar21 + 0x1da;
                }
                else {
                  (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x28);
                  uVar7 = 1;
                  iVar21 = *(int *)PTR_gTNPSession_004682bc + iVar17;
                  iVar19 = iVar21 + 0x1da;
                }
              }
              else {
                uVar7 = 0;
              }
              iVar19 = (*(code *)PTR_PPPP_Proto_Send_RlyTCPToAck_00468384)
                                 (*(undefined4 *)(iVar21 + 0xc),1,
                                  iVar21 + (*(int *)(iVar21 + 0xa4) + 1) * 0x10 + 4,iVar21 + 0x1a8,
                                  *(undefined4 *)(iVar21 + 0x1b8),iVar21 + 0x1b0,iVar19,
                                  (int)*(char *)(iVar21 + 0xf0),uVar7);
              if (iVar19 < 0) {
                (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x4c5c);
                iVar19 = *(int *)PTR_gTNPSession_004682bc + iVar17;
                *(undefined1 *)(iVar19 + 0xf2) = 1;
                if (*(char *)(iVar19 + 1) == '\0') {
                  *(undefined1 *)(iVar19 + 1) = 6;
                }
              }
              local_480 = 0;
              local_47c = 0;
              local_478 = 0;
              local_474 = 0;
              local_470 = 0;
              local_46c = 0;
              local_468 = 0;
              local_464 = 0;
              uVar7 = (*(code *)PTR_getCurTime_004682c8)();
              uVar9 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(local_bfc + uVar12 + 4));
              (*(code *)PTR_sprintf_004687f0)
                        (&local_480,PTR_DAT_00468298 + -0x4c34,param_1,uVar7,uVar9);
              (*(code *)PTR_PPPP__SendReport_004682d0)
                        (1,(int)*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 0x1d0),
                         &local_480);
            }
          }
          else if (local_56[0] == 0xa1) {
            bVar1 = *pbVar16;
            (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x63f0,(uint)bVar1);
            *(byte *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 0x1d8) = bVar1;
            *(uint *)PTR_gCurrentReportLevel_00468500 = (uint)bVar1;
          }
          else if (local_56[0] == 0x87) {
            iVar19 = *(int *)PTR_gTNPSession_004682bc + iVar17;
            if ((*(byte *)(iVar19 + 0x1d0) < 0x17) && (*(int *)(iVar19 + 0x1ec) == 0)) {
              if ((*(byte *)(iVar19 + 0x1d0) != 0x16) || (*(char *)(iVar19 + 0x1a6) == -2)) {
                *(byte *)(iVar19 + 0x1a6) = local_bfc[uVar12 + 1];
              }
              if ((local_bfc[uVar12 + 1] == 0) &&
                 (local_50 = (undefined4 *)(int)(char)*pbVar16, 0 < (char)*pbVar16)) {
                iVar19 = 0;
                local_48 = local_bfc + uVar12 + 4;
                pbVar16 = local_bfc + uVar12 + 4;
                do {
                  iVar19 = iVar19 + 1;
                  uVar7 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(pbVar16 + 4));
                  (*(code *)PTR_PPPP_DebugTrace_00468294)
                            (0x10,PTR_DAT_00468298 + -0x6330,iVar19,uVar7,
                             *(ushort *)(pbVar16 + 2) >> 8 | *(ushort *)(pbVar16 + 2) << 8,
                             (int)(char)pbVar16[0x10]);
                  pbVar16 = pbVar16 + 0x14;
                } while (iVar19 < (int)local_50);
                local_38 = (int)local_50 * 0x14;
                iVar19 = (*(code *)PTR_malloc_00468890)(local_38);
                if (iVar19 == 0) {
                  *(undefined4 *)(*(int *)PTR_gTNPSession_004682bc + iVar17 + 500) = 0;
                }
                else {
                  uVar7 = (*(code *)PTR_memcpy_00468898)(iVar19,local_48,local_38);
                  iVar19 = *(int *)PTR_gTNPSession_004682bc + iVar17;
                  *(undefined4 *)(iVar19 + 0x1ec) = uVar7;
                  *(undefined4 *)(iVar19 + 500) = 0;
                  *(undefined4 **)(iVar19 + 0x1f0) = local_50;
                }
              }
              (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x16);
            }
          }
          (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar5 + local_4c);
          uVar12 = uVar12 + uVar20 & 0xffff;
        }
        if ((uVar12 == 0) || (uVar13 == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          (*(code *)PTR_memmove_004688bc)(auStack_c00,puVar15,uVar13);
        }
      }
      if (iVar19 != -1) break;
      uVar14 = uVar14 + 1;
      if (3000 < uVar14) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x62b0);
        (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar6 + local_4c);
        iVar17 = *(int *)puVar5 + iVar17;
        if (*(char *)(iVar17 + 1) == '\0') {
          *(undefined1 *)(iVar17 + 1) = 1;
        }
        puVar5 = PTR_MUTEX_RELEASE_004682b4;
        iVar19 = *(int *)puVar6;
        *(undefined1 *)(iVar17 + 0xf2) = 1;
        *(undefined1 *)(iVar17 + 0x1a6) = 0xe0;
        (*(code *)puVar5)(iVar19 + local_4c);
LAB_0041f27c:
        puVar5 = PTR_DAT_00468298;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x6274);
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x4000,puVar5 + -0x6274);
        (*(code *)PTR_pthread_exit_004688b4)(0);
        return;
      }
    }
  } while (iVar19 != -2);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x6288);
  (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar6 + local_4c);
  iVar17 = *(int *)puVar5 + iVar17;
  *(undefined1 *)(iVar17 + 0xf2) = 1;
  if (*(char *)(iVar17 + 1) == '\0') {
    *(undefined1 *)(iVar17 + 1) = 6;
  }
  iVar19 = *(int *)puVar6;
  *(undefined1 *)(iVar17 + 0x1a6) = 0xe1;
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(iVar19 + local_4c);
  goto LAB_0041f27c;
}



// ==== PPPP__Check_Device_Working @ 0041f7e8 size=160

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PPPP__Check_Device_Working() */

bool PPPP__Check_Device_Working(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  if (*(int *)PTR_gMaxSessionNumber_004682b8 == 0) {
    bVar3 = true;
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar4 * 0x3f20;
      iVar4 = iVar4 + 1;
      if (*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar1) == '\x01') {
        iVar2 = iVar2 + 1;
      }
    } while (iVar4 != *(int *)PTR_gMaxSessionNumber_004682b8);
    bVar3 = iVar2 < 2;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4acc,iVar2);
  return bVar3;
}



// ==== PPPP_thread_recv_Proto_device @ 0041f888 size=6528

/* PPPP_thread_recv_Proto_device(void*) */

void PPPP_thread_recv_Proto_device(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_998 [2324];
  undefined1 local_84 [2];
  ushort uStack_82;
  undefined4 local_80;
  undefined2 local_5a;
  undefined1 uStack_58;
  byte local_57 [31];
  uint local_38;
  
  puVar2 = PTR_gTNPSession_004682bc;
  (*(code *)PTR_getCurTime_004682c8)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x4ab8);
  puVar1 = PTR_DAT_00468298;
switchD_0041fa3c_caseD_0:
  iVar6 = *(int *)puVar2;
  do {
    if (iVar6 == 0) {
LAB_0041f9a4:
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x6378);
      (*(code *)PTR_pthread_exit_004688b4)(0);
      return;
    }
    iVar6 = iVar6 + (int)param_1 * 0x3f20;
    iVar5 = *(int *)(iVar6 + 0xc);
    if ((iVar5 < 0) || (*(char *)(iVar6 + 0xf2) != '\0')) goto LAB_0041f9a4;
    iVar6 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                      (iVar5,local_84,200,local_57,&local_5a,local_998,0x500,&uStack_58);
    uVar3 = local_5a;
    if (iVar6 == 0) {
      local_38 = (uint)local_57[0];
      uVar4 = (*(code *)PTR_inet_ntoa_00468804)(local_80);
      (*(code *)PTR_PPPP_DebugTrace_00468294)
                (0x400,puVar1 + -0x66cc,local_38,uVar3,uVar4,uStack_82 >> 8 | uStack_82 << 8);
      if (local_57[0] < 0xa2) {
                    /* WARNING: Could not emulate address calculation at 0x0041fa30 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&_gp_1 + *(int *)(puVar1 + (uint)local_57[0] * 4 + -0x3c70)))();
        return;
      }
      goto switchD_0041fa3c_caseD_0;
    }
    if (iVar6 == -1) goto switchD_0041fa3c_caseD_0;
    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,puVar1 + -0x6398,iVar6);
    iVar6 = *(int *)puVar2;
  } while( true );
}



// ==== PPPP__SendReport_SuperDevice_Connect @ 00421224 size=212

/* PPPP__SendReport_SuperDevice_Connect(char*) */

undefined4 PPPP__SendReport_SuperDevice_Connect(char *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_gSDevInfo_004684b0;
  puVar8 = PTR_gSDevInfo_004684b0 + 0x54;
  puVar7 = PTR_gSDevInfo_004684b0 + 0x38;
  puVar6 = PTR_gP2PServerAddr_004682a8 + 0x30;
  puVar5 = PTR_gSDevInfo_004684b0 + 0x40;
  puVar4 = PTR_gSDevInfo_004684b0 + 0x4c;
  puVar2 = PTR_gP2PServerAddr_004682a8;
  do {
    puVar3 = puVar2 + 0x10;
    (*(code *)PTR_PPPP_Proto_Send_SDev_Report_004684b4)
              (*(undefined4 *)puVar1,puVar2,puVar4,*(undefined4 *)(puVar1 + 0x5c),puVar8,puVar7,
               *(undefined4 *)(puVar1 + 0x48),puVar5,1,param_1);
    puVar2 = puVar3;
  } while (puVar3 != puVar6);
  return 0;
}



// ==== PPPP__SendReport_SuperDevice_ExitThread @ 004212f8 size=724

/* PPPP__SendReport_SuperDevice_ExitThread(char, char) */

undefined4 PPPP__SendReport_SuperDevice_ExitThread(char param_1,char param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_88 [64];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  (*(code *)PTR_memset_00468810)(auStack_88,0,0x40);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar2 = (*(code *)PTR_getCurTime_004682c8)();
  if ((byte)param_1 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x004213b0 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00468298 + (uint)(byte)param_1 * 4 + -0x39e8)))
                      (&local_48);
    return uVar2;
  }
  (*(code *)PTR_strncpy_0046883c)(&local_48,PTR_DAT_00468298 + -0x47e4,0x1f);
  if (param_1 == 5) {
    (*(code *)PTR_snprintf_004688b0)
              (auStack_88,0x40,PTR_DAT_00468298 + -0x4754,uVar2,5,&local_48,(int)param_2);
  }
  else {
    (*(code *)PTR_snprintf_004688b0)
              (auStack_88,0x40,PTR_DAT_00468298 + -0x4734,uVar2,(int)param_1,&local_48);
  }
  puVar1 = PTR_gSDevInfo_004684b0;
  puVar9 = PTR_gSDevInfo_004684b0 + 0x54;
  puVar8 = PTR_gSDevInfo_004684b0 + 0x38;
  puVar7 = PTR_gP2PServerAddr_004682a8 + 0x30;
  puVar6 = PTR_gSDevInfo_004684b0 + 0x40;
  puVar5 = PTR_gSDevInfo_004684b0 + 0x4c;
  puVar3 = PTR_gP2PServerAddr_004682a8;
  do {
    puVar4 = puVar3 + 0x10;
    (*(code *)PTR_PPPP_Proto_Send_SDev_Report_004684b4)
              (*(undefined4 *)puVar1,puVar3,puVar5,*(undefined4 *)(puVar1 + 0x5c),puVar9,puVar8,
               *(undefined4 *)(puVar1 + 0x48),puVar6,2,auStack_88);
    puVar3 = puVar4;
  } while (puVar4 != puVar7);
  return 0;
}



// ==== PPPP__SendSessionReport_SuperDevice @ 004215cc size=340

/* PPPP__SendSessionReport_SuperDevice(char, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int) */

undefined4
PPPP__SendSessionReport_SuperDevice
          (char param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined4 *)(*(code *)PTR_malloc_00468890)(0x518);
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)PTR_memset_00468810)(puVar2,0,0x518);
    uVar10 = (*(code *)PTR_getCurTime_004682c8)();
    uVar3 = (*(code *)PTR___udivdi3_004682f0)((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
    puVar1 = PTR_PPPP_Proto_Generate_SeqNum_004682f4;
    *puVar2 = uVar3;
    uVar3 = (*(code *)puVar1)();
    *(undefined1 *)(puVar2 + 3) = 0x93;
    puVar1 = PTR_PPPP_Proto_Generate_SDev_SessionReport_00468534;
    uVar6 = *(undefined4 *)(PTR_gSDevInfo_004684b0 + 0x5c);
    puVar9 = PTR_gSDevInfo_004684b0 + 0x54;
    uVar7 = *(undefined4 *)(PTR_gSDevInfo_004684b0 + 0x48);
    puVar8 = PTR_gSDevInfo_004684b0 + 0x38;
    puVar4 = PTR_gSDevInfo_004684b0 + 0x40;
    puVar5 = PTR_gSDevInfo_004684b0 + 0x4c;
    puVar2[2] = uVar3;
    puVar2[1] = 0;
    puVar2[0x145] = 0;
    uVar3 = (*(code *)puVar1)(puVar2 + 5,uVar3,puVar5,uVar6,puVar9,puVar8,uVar7,puVar4,(int)param_1,
                              param_2,param_3,param_4,param_5,param_6);
    puVar1 = PTR_PPPP__Timer_Push_004682fc;
    puVar2[4] = uVar3;
    (*(code *)puVar1)(puVar2);
  }
  return 0;
}



// ==== PPPP__HelloToIpEqual @ 00421720 size=52

/* PPPP__HelloToIpEqual(unsigned long, unsigned long, unsigned long, unsigned long) */

bool PPPP__HelloToIpEqual(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return true;
  }
  if (param_1 != param_4) {
    return false;
  }
  return param_3 == param_2;
}



// ==== PPPP_thread_SuperDevice @ 00421754 size=7320

/* PPPP_thread_SuperDevice(void*) */

void PPPP_thread_SuperDevice(void *param_1)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  char local_b48;
  char local_b47;
  undefined1 auStack_648 [16];
  char local_638 [2];
  ushort local_636;
  undefined4 local_634;
  undefined4 local_148;
  int local_144;
  undefined4 local_108;
  int local_104;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined2 local_64;
  short local_62;
  undefined1 uStack_60;
  byte local_5f [7];
  short *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  uint local_40;
  uint local_3c;
  undefined1 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  
  (*(code *)PTR_memset_00468810)(auStack_648,0,0x500);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x4720);
  puVar3 = PTR_gSDevInfo_004684b0;
  uVar7 = (*(code *)PTR_CreateSocket_004683c8)(0);
  *(undefined4 *)puVar3 = uVar7;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x5710,uVar7);
  (*(code *)PTR_SetSocketBroadcast_004683cc)(*(undefined4 *)puVar3);
  local_64 = 0;
  iVar8 = (*(code *)PTR_TryBindPort_004683d0)(*(undefined4 *)puVar3,&local_64);
  if (iVar8 < 0) {
    (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)puVar3);
    (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(6);
    iVar8 = 0;
  }
  else {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x46fc,local_64);
    uVar9 = (*(code *)PTR_rand_00468844)();
    uVar10 = (*(code *)PTR_rand_00468844)();
    uVar9 = uVar9 & 0x800000ff;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
    }
    uVar19 = uVar10 & 0x800000ff;
    if ((int)uVar19 < 0) {
      uVar19 = ((uVar10 & 0x800000ff) - 1 | 0xffffff00) + 1;
    }
    uVar10 = (*(code *)PTR_rand_00468844)();
    uVar10 = uVar10 & 0x800000ff;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffff00) + 1;
    }
    iVar8 = (*(code *)PTR_rand_00468844)();
    cVar6 = puVar3[0x6c];
    *(uint *)(PTR_gSDevInfo_004684b0 + 0x34) =
         uVar9 + uVar19 * 0x100 + uVar10 * 0x10000 + iVar8 * 0x1000000;
    if (cVar6 == '\x01') {
      if (PTR_gSDevInfo_004684b0[0x61] == '\0') {
        uVar9 = 0;
        local_54 = &uStack_60;
        local_50 = (undefined1 *)0x0;
        local_4c = 0;
        local_48 = 0;
        local_58 = &local_62;
        do {
          if (uVar9 == (uVar9 / 400) * 400) {
            puVar20 = PTR_gP2PServerAddr_004682a8 + 0x30;
            puVar17 = PTR_gSDevInfo_004684b0 + 0x40;
            puVar18 = PTR_gP2PServerAddr_004682a8;
            do {
              puVar21 = puVar18 + 0x10;
              (*(code *)PTR_PPPP_Proto_Send_SDevLgn_00468538)
                        (*(undefined4 *)puVar3,puVar18,puVar3 + 0x38,*(undefined4 *)(puVar3 + 0x48),
                         puVar17);
              puVar18 = puVar21;
            } while (puVar21 != puVar20);
          }
          iVar8 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                            (*(undefined4 *)puVar3,&local_88,100,local_5f,&local_62,auStack_648,
                             0x500,&uStack_60);
          bVar5 = local_5f[0];
          sVar4 = local_62;
          puVar18 = PTR_gSDevInfo_004684b0;
          if (iVar8 == 0) {
            uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_84);
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x400,PTR_DAT_00468298 + -0x66cc,bVar5,sVar4,uVar7,
                       local_88._2_2_ >> 8 | local_88._2_2_ << 8);
            if (local_5f[0] == 0x74) {
              if (local_62 == 0x54) {
                local_44 = &local_78;
                local_30 = &local_c8;
                local_70 = 0;
                local_6c = 0;
                local_78 = 0;
                local_74 = 0;
                local_a8 = 0;
                local_a4 = 0;
                local_a0 = 0;
                local_9c = 0;
                local_98 = 0;
                local_94 = 0;
                local_90 = 0;
                local_8c = 0;
                local_c8 = 0;
                local_c4 = 0;
                local_c0 = 0;
                local_bc = 0;
                local_b8 = 0;
                local_b4 = 0;
                local_b0 = 0;
                local_ac = 0;
                local_34 = &local_70;
                (*(code *)PTR_PPPP_Proto_Read_RlyPortKey_00468564)
                          (auStack_648,&local_70,&local_68,local_44,&local_a8,local_30);
                if (999999 < local_68) {
                  uVar7 = (*(code *)PTR_inet_ntoa_00468804)();
                  (*(code *)PTR_PPPP_DebugTrace_00468294)
                            (0x200,PTR_DAT_00468298 + -0x455c,uVar7,
                             local_88._2_2_ >> 8 | local_88._2_2_ << 8,local_68);
                  goto LAB_004219c4;
                }
                uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_84);
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x200,PTR_DAT_00468298 + -0x4524,uVar7,
                           local_88._2_2_ >> 8 | local_88._2_2_ << 8);
                (*(code *)PTR_memset_00468810)(&local_108,0,0x40);
                (*(code *)PTR_memset_00468810)(&local_148,0,0x40);
                (*(code *)PTR_snprintf_004688b0)
                          (&local_108,0x40,PTR_DAT_00468298 + -0x44fc,0x20,&local_a8,&local_70,
                           local_68,&local_78);
                local_2c = (*(code *)PTR_strlen_004687c0)(PTR_gSuperDeviceKey_00468394);
                uVar7 = (*(code *)PTR_strlen_004687c0)(&local_108);
                (*(code *)PTR_PPPP_MakeSha1_00468570)
                          (PTR_gSuperDeviceKey_00468394,local_2c,&local_108,uVar7,&local_148);
                iVar8 = (*(code *)PTR_strncmp_00468840)(&local_c8,&local_148,0x20);
                if (iVar8 == 0) {
                  iVar8 = 0;
                  uVar1 = *(ushort *)(puVar18 + 0x26);
                  uVar7 = 0;
                }
                else {
                  uVar1 = *(ushort *)(puVar18 + 0x26);
                  uVar7 = 0xfffffffb;
                  iVar8 = -5;
                }
                iVar12 = 3;
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x200,PTR_DAT_00468298 + -0x44ec,*(undefined4 *)(puVar18 + 0x34),
                           uVar1 >> 8 | uVar1 << 8,uVar7);
                (*(code *)PTR_PPPP_Proto_Send_RlyPortAck_Key_0046855c)
                          (*(undefined4 *)puVar3,&local_88,*(undefined4 *)(puVar3 + 0x34),
                           *(ushort *)(puVar3 + 0x26) >> 8 | *(ushort *)(puVar3 + 0x26) << 8,uVar7);
                do {
                  iVar12 = iVar12 + -1;
                  (*(code *)PTR_mSecSleep_004682d4)(10);
                  puVar18 = PTR_gSDevInfo_004684b0;
                  (*(code *)PTR_PPPP_Proto_Send_RlyPortAck_Key_0046855c)
                            (*(undefined4 *)puVar3,&local_88,*(undefined4 *)(puVar3 + 0x34),
                             *(ushort *)(puVar3 + 0x26) >> 8 | *(ushort *)(puVar3 + 0x26) << 8,uVar7
                            );
                } while (iVar12 != 0);
                (*(code *)PTR_strncpy_0046883c)(puVar18 + 0x4c,&local_70,7);
                (*(code *)PTR_strncpy_0046883c)(puVar18 + 0x54,&local_78,7);
                *(undefined4 *)(puVar18 + 0x14) = local_88;
                puVar17 = PTR_memset_00468810;
                *(undefined4 *)(puVar18 + 0x18) = local_84;
                *(undefined4 *)(puVar18 + 0x1c) = local_80;
                *(undefined4 *)(puVar18 + 0x20) = local_7c;
                *(uint *)(puVar18 + 0x5c) = local_68;
                (*(code *)puVar17)(&local_b48,0,0x40);
                uVar15 = (*(code *)PTR_getCurTime_004682c8)();
                (*(code *)PTR_sprintf_004687f0)
                          (&local_b48,PTR_DAT_00468298 + -0x449c,uVar15,PTR_DAT_00468298 + -0x448c,
                           uVar7);
                (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
                if (iVar8 == 0) {
                  cVar6 = '\x02';
                  puVar18[0x6c] = 2;
                }
                else {
                  cVar6 = puVar18[0x6c];
                  *(undefined4 *)(puVar18 + 0x4c) = 0;
                  *(undefined4 *)(puVar18 + 0x50) = 0;
                  *(undefined4 *)(puVar18 + 0x5c) = 0;
                  *(undefined4 *)(puVar18 + 0x54) = 0;
                  *(undefined4 *)(puVar18 + 0x58) = 0;
                  *(undefined4 *)(puVar18 + 0x14) = 0;
                  *(undefined4 *)(puVar18 + 0x18) = 0;
                  *(undefined4 *)(puVar18 + 0x1c) = 0;
                  *(undefined4 *)(puVar18 + 0x20) = 0;
                }
              }
              else {
                uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_84);
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (2,PTR_DAT_00468298 + -0x4590,0x54,uVar7,
                           local_88._2_2_ >> 8 | local_88._2_2_ << 8);
                cVar6 = puVar18[0x6c];
              }
            }
            else if (local_5f[0] < 0x75) {
              if (local_5f[0] == 2) {
                (*(code *)PTR_ntohAddr_00468358)(auStack_648,&local_108);
                (*(code *)PTR_ntohAddr_00468358)(local_638,&local_148);
                uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_104);
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x200,PTR_DAT_00468298 + -0x4654,uVar7,
                           local_108._2_2_ >> 8 | local_108._2_2_ << 8);
                uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_144);
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x200,PTR_DAT_00468298 + -0x4634,uVar7,
                           local_148._2_2_ >> 8 | local_148._2_2_ << 8);
                (*(code *)PTR_PPPP_Proto_Send_HelloToAck_00468550)
                          (*(undefined4 *)puVar18,&local_108);
                iVar8 = 3;
                (*(code *)PTR_PPPP_Proto_Send_HelloToAck_00468550)
                          (*(undefined4 *)puVar18,&local_148);
                do {
                  iVar8 = iVar8 + -1;
                  (*(code *)PTR_mSecSleep_004682d4)(10);
                  (*(code *)PTR_PPPP_Proto_Send_HelloToAck_00468550)
                            (*(undefined4 *)puVar3,&local_108);
                  (*(code *)PTR_PPPP_Proto_Send_HelloToAck_00468550)
                            (*(undefined4 *)puVar3,&local_148);
                } while (iVar8 != 0);
                uVar22 = (*(code *)PTR_getCurTime_004682c8)();
                uVar7 = (undefined4)((ulonglong)uVar22 >> 0x20);
                uVar15 = (undefined4)uVar22;
                if ((local_50 == (undefined1 *)0x0) ||
                   (local_2c = uVar7,
                   iVar8 = (*(code *)PTR_PPPP__HelloToIpEqual_00468560)
                                     (local_48,local_4c,local_104,local_144), uVar7 = local_2c,
                   iVar8 == 0)) {
                  puVar11 = (undefined1 *)(*(code *)PTR___udivdi3_004682f0)(uVar15,uVar7,1000,0);
                }
                else {
                  uVar22 = (*(code *)PTR___udivdi3_004682f0)(uVar15,local_2c,1000,0);
                  puVar11 = (undefined1 *)uVar22;
                  if (((uint)(puVar11 < puVar11 + -(int)local_50) ==
                       (uint)((ulonglong)uVar22 >> 0x20)) &&
                     (puVar11 + -(int)local_50 < &DAT_0000000b)) {
                    cVar6 = puVar3[0x6c];
                    goto joined_r0x00421b00;
                  }
                }
                (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
                (*(code *)PTR_sprintf_004687f0)
                          (&local_b48,PTR_DAT_00468298 + -0x45b0,uVar15,PTR_DAT_00468298 + -0x41dc);
                (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
                local_48 = local_104;
                local_4c = local_144;
                local_50 = puVar11;
              }
              else if (local_5f[0] == 0x70) {
                uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_84);
                puVar17 = PTR_DAT_00468298 + -0x4614;
                goto LAB_00421ae4;
              }
LAB_00422004:
              cVar6 = puVar3[0x6c];
            }
            else if (local_5f[0] == 0x76) {
              if (local_62 == 0) {
                uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_84);
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x200,PTR_DAT_00468298 + -0x45d0,uVar7,
                           local_88._2_2_ >> 8 | local_88._2_2_ << 8);
                (*(code *)PTR_PPPP_Proto_Send_RlyHelloSDevAck_00468554)
                          (*(undefined4 *)puVar18,&local_88);
                (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
                uVar7 = (*(code *)PTR_getCurTime_004682c8)();
                (*(code *)PTR_sprintf_004687f0)
                          (&local_b48,PTR_DAT_00468298 + -0x45b0,uVar7,PTR_DAT_00468298 + -0x45a8);
                (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
                cVar6 = puVar18[0x6c];
              }
              else {
                uVar7 = (*(code *)PTR_inet_ntoa_00468804)();
                puVar17 = PTR_DAT_00468298 + -0x45e8;
LAB_00421ae4:
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x200,puVar17,uVar7,local_88._2_2_ >> 8 | local_88._2_2_ << 8);
                cVar6 = puVar18[0x6c];
              }
            }
            else {
              if (local_5f[0] != 0x91) goto LAB_00422004;
              iVar8 = (int)local_638[0];
              uVar10 = (uint)local_636;
              if (iVar8 != 0) {
                uVar22 = (*(code *)PTR_getCurTime_004682c8)();
                iVar12 = (*(code *)PTR___bswapsi2_004683d8)(local_634);
                iVar13 = (*(code *)PTR___udivdi3_004682f0)
                                   ((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),1000,0);
                puVar17 = PTR_PPPP_DebugTrace_00468294;
                puVar20 = PTR_DAT_00468298 + -0x469c;
                *(int *)(puVar18 + 100) = iVar12 + iVar13;
                (*(code *)puVar17)(0x200,puVar20,(int)local_638[0],iVar12,iVar12 + iVar13);
                (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(5);
                goto LAB_004219f4;
              }
              uVar1 = local_636 >> 8;
              local_3c = (*(code *)PTR___bswapsi2_004683d8)(local_634);
              uVar19 = (uint)uVar1 | (uVar10 & 0xff) << 8;
              (*(code *)PTR_ntohAddr_00468358)(auStack_648,puVar18 + 0x24);
              local_40 = (uVar10 & 0xff) >> 4;
              local_38 = (undefined1 *)(uVar19 << 0x14);
              uVar7 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(puVar18 + 0x28));
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x200,PTR_DAT_00468298 + -0x46ec,uVar7,
                         *(ushort *)(puVar18 + 0x26) >> 8 | *(ushort *)(puVar18 + 0x26) << 8,
                         local_38,local_40,uVar19,local_3c);
              cVar6 = puVar18[0x6c];
            }
          }
          else {
LAB_004219c4:
            cVar6 = puVar18[0x6c];
          }
joined_r0x00421b00:
          if (cVar6 != '\x01') goto LAB_00421b08;
          uVar9 = uVar9 + 1;
        } while (puVar3[0x61] == '\0');
      }
      (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(9);
      iVar8 = 0;
    }
    else {
      local_50 = (undefined1 *)0x0;
      local_4c = 0;
      local_48 = 0;
LAB_00421b08:
      iVar8 = 0;
      if (cVar6 != '\x03') {
        uVar9 = 0;
        bVar16 = false;
        bVar14 = false;
        puVar18 = PTR_DAT_00468298 + -0x66cc;
        do {
          puVar17 = PTR_gSDevInfo_004684b0;
          cVar6 = puVar3[0x6c];
          if (cVar6 != '\x02') goto LAB_00421bb8;
          iVar8 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                            (*(undefined4 *)PTR_gSDevInfo_004684b0,&local_88,100,local_5f,&local_62,
                             auStack_648,0x500,&uStack_60);
          bVar5 = local_5f[0];
          sVar4 = local_62;
          if (iVar8 == 0) {
            uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_84);
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x400,puVar18,bVar5,sVar4,uVar7,local_88._2_2_ >> 8 | local_88._2_2_ << 8);
            if (local_5f[0] == 2) {
              iVar8 = 3;
              (*(code *)PTR_ntohAddr_00468358)(auStack_648,&local_108);
              (*(code *)PTR_ntohAddr_00468358)(local_638,&local_148);
              uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_104);
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x200,PTR_DAT_00468298 + -0x4654,uVar7,
                         local_108._2_2_ >> 8 | local_108._2_2_ << 8);
              uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_144);
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x200,PTR_DAT_00468298 + -0x4634,uVar7,
                         local_148._2_2_ >> 8 | local_148._2_2_ << 8);
              (*(code *)PTR_PPPP_Proto_Send_HelloToAck_00468550)(*(undefined4 *)puVar17,&local_108);
              (*(code *)PTR_PPPP_Proto_Send_HelloToAck_00468550)(*(undefined4 *)puVar17,&local_148);
              do {
                iVar8 = iVar8 + -1;
                (*(code *)PTR_mSecSleep_004682d4)(10);
                (*(code *)PTR_PPPP_Proto_Send_HelloToAck_00468550)(*(undefined4 *)puVar3,&local_108)
                ;
                (*(code *)PTR_PPPP_Proto_Send_HelloToAck_00468550)(*(undefined4 *)puVar3,&local_148)
                ;
              } while (iVar8 != 0);
              uVar22 = (*(code *)PTR_getCurTime_004682c8)();
              uVar7 = (undefined4)((ulonglong)uVar22 >> 0x20);
              uVar15 = (undefined4)uVar22;
              if ((local_50 == (undefined1 *)0x0) ||
                 (local_2c = uVar7,
                 iVar8 = (*(code *)PTR_PPPP__HelloToIpEqual_00468560)
                                   (local_48,local_4c,local_104,local_144), uVar7 = local_2c,
                 iVar8 == 0)) {
                puVar11 = (undefined1 *)(*(code *)PTR___udivdi3_004682f0)(uVar15,uVar7,1000,0);
              }
              else {
                uVar22 = (*(code *)PTR___udivdi3_004682f0)(uVar15,local_2c,1000,0);
                puVar11 = (undefined1 *)uVar22;
                if (((uint)(puVar11 < puVar11 + -(int)local_50) == (uint)((ulonglong)uVar22 >> 0x20)
                    ) && (puVar11 + -(int)local_50 < &DAT_0000000b)) goto LAB_00422334;
              }
              (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
              (*(code *)PTR_sprintf_004687f0)
                        (&local_b48,PTR_DAT_00468298 + -0x45b0,uVar15,PTR_DAT_00468298 + -0x41dc);
              (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
              local_48 = local_104;
              local_4c = local_144;
              local_50 = puVar11;
LAB_00422334:
              uVar9 = 0;
              if (local_62 == 0x1c) {
                local_108 = 0;
                local_104 = 0;
                local_148 = 0;
                local_144 = 0;
                (*(code *)PTR_PPPP_Proto_Read_RlyPkt_00468558)
                          (auStack_648,&local_108,&local_c8,&local_148,&local_78,&local_a8);
                puVar17 = PTR_gSDevInfo_004684b0;
                if (*(int *)(puVar3 + 0x34) == local_a8) {
                  if ((char)local_78 == '\0') {
                    if (!bVar14) {
                      (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
                      uVar7 = (*(code *)PTR_getCurTime_004682c8)();
                      (*(code *)PTR_sprintf_004687f0)
                                (&local_b48,PTR_DAT_00468298 + -0x45b0,uVar7,
                                 PTR_DAT_00468298 + -0x4474);
                      (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
                    }
                    (*(code *)PTR_strncpy_0046883c)(puVar17 + 0x4c,&local_108,8);
                    uVar9 = 0;
                    (*(code *)PTR_strncpy_0046883c)(puVar17 + 0x54,&local_148,8);
                    *(undefined4 *)(puVar17 + 0x18) = local_84;
                    *(undefined4 *)(puVar17 + 0x1c) = local_80;
                    puVar20 = PTR_inet_ntoa_00468804;
                    *(undefined4 *)(puVar17 + 0x20) = local_7c;
                    *(undefined4 *)(puVar17 + 0x14) = local_88;
                    *(undefined4 *)(puVar17 + 0x5c) = local_c8;
                    uVar15 = *(undefined4 *)puVar17;
                    uVar7 = (*(code *)puVar20)(local_84);
                    bVar14 = true;
                    (*(code *)PTR_PPPP_DebugTrace_00468294)
                              (0x200,PTR_DAT_00468298 + -0x445c,uVar15,uVar7,
                               *(ushort *)(puVar17 + 0x16) >> 8 | *(ushort *)(puVar17 + 0x16) << 8);
                  }
                  else {
                    if (!bVar16) {
                      (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
                      uVar7 = (*(code *)PTR_getCurTime_004682c8)();
                      (*(code *)PTR_sprintf_004687f0)
                                (&local_b48,PTR_DAT_00468298 + -0x45b0,uVar7,
                                 PTR_DAT_00468298 + -0x4440);
                      (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
                    }
                    uVar9 = 0;
                    *(undefined4 *)(puVar17 + 8) = local_84;
                    puVar20 = PTR_inet_ntoa_00468804;
                    *(undefined4 *)(puVar17 + 0xc) = local_80;
                    *(undefined4 *)(puVar17 + 4) = local_88;
                    *(undefined4 *)(puVar17 + 0x10) = local_7c;
                    uVar15 = *(undefined4 *)puVar17;
                    uVar7 = (*(code *)puVar20)(local_84);
                    bVar16 = true;
                    (*(code *)PTR_PPPP_DebugTrace_00468294)
                              (0x200,PTR_DAT_00468298 + -0x4428,uVar15,uVar7,
                               *(ushort *)(puVar17 + 6) >> 8 | *(ushort *)(puVar17 + 6) << 8);
                  }
                  goto LAB_00422454;
                }
                goto LAB_00422500;
              }
            }
            else {
              if (local_5f[0] == 0x83) goto LAB_00422334;
LAB_00422500:
              uVar9 = 0;
            }
          }
          else {
            if (uVar9 == (uVar9 / 5) * 5) {
LAB_00422454:
              bVar2 = uVar9 < 0x33;
              if ((!bVar16) && (!bVar14)) {
                (*(code *)PTR_PPPP_Proto_Send_RlyPortAck_Key_0046855c)
                          (*(undefined4 *)puVar3,puVar3 + 0x14,*(undefined4 *)(puVar3 + 0x34),
                           *(ushort *)(puVar3 + 0x26) >> 8 | *(ushort *)(puVar3 + 0x26) << 8,0);
                goto LAB_00421b98;
              }
            }
            else {
LAB_00421b98:
              bVar2 = uVar9 < 0x33;
            }
            uVar9 = uVar9 + 1;
            if (!bVar2) {
              (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(4);
              iVar8 = 0;
              goto LAB_004219f4;
            }
          }
        } while ((!bVar14) || (!bVar16));
        cVar6 = puVar3[0x6c];
LAB_00421bb8:
        if (cVar6 != '\x03') {
          puVar17 = puVar3 + 0x54;
          (*(code *)PTR_PPPP_Proto_Send_RlyRdy_00468540)
                    (*(undefined4 *)puVar3,puVar3 + 0x14,puVar3 + 0x4c,
                     *(undefined4 *)(puVar3 + 0x5c),puVar17);
          (*(code *)PTR_PPPP_Proto_Send_RlyRdy_00468540)
                    (*(undefined4 *)puVar3,puVar3 + 4,puVar3 + 0x4c,*(undefined4 *)(puVar3 + 0x5c),
                     puVar17);
          (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
          uVar7 = (*(code *)PTR_getCurTime_004682c8)();
          (*(code *)PTR_sprintf_004687f0)
                    (&local_b48,PTR_DAT_00468298 + -0x45b0,uVar7,PTR_DAT_00468298 + -0x440c);
          (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
          puVar18 = PTR_gSDevInfo_004684b0;
          if (puVar3[0x6c] != '\x02') {
            (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(1);
            iVar8 = 0;
            goto LAB_004219f4;
          }
          uVar9 = 0;
          local_58 = (short *)0x0;
          bVar16 = false;
          local_48 = 0;
          bVar14 = false;
          local_34 = (undefined4 *)0x0;
          local_44 = (undefined4 *)0x0;
          local_4c = 0;
          local_50 = (undefined1 *)0x0;
          local_54 = (undefined1 *)0x0;
          do {
            iVar8 = (*(code *)PTR_over_time_receive_00468548)
                              (*(undefined4 *)puVar3,&local_b48,0x500,&local_148,100);
            cVar6 = local_b47;
            if (iVar8 == 0) {
              uVar9 = uVar9 + 1;
              if ((!bVar14) && (uVar9 == (uVar9 / 5) * 5)) {
                (*(code *)PTR_PPPP_Proto_Send_RlyRdy_00468540)
                          (*(undefined4 *)puVar18,puVar18 + 0x14,puVar18 + 0x4c,
                           *(undefined4 *)(puVar18 + 0x5c),puVar17);
              }
              if ((!bVar16) && (uVar9 == (uVar9 / 5) * 5)) {
                (*(code *)PTR_PPPP_Proto_Send_RlyRdy_00468540)
                          (*(undefined4 *)puVar3,puVar3 + 4,puVar3 + 0x4c,
                           *(undefined4 *)(puVar3 + 0x5c),puVar17);
              }
              if (uVar9 < 0x33) goto LAB_00421d30;
              if ((bVar14) && (bVar16)) {
                bVar14 = true;
                (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(3);
              }
              else {
                (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(4);
              }
              break;
            }
            if (iVar8 < 0) {
              (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(7);
              break;
            }
            if ((bVar14) && (bVar16)) {
              local_58 = (short *)((int)local_58 + 1);
              iVar12 = (*(code *)PTR_AddrIsTheSame_00468568)(&local_148,puVar18 + 0x14);
              if (iVar12 == 0) {
                local_54 = local_54 + iVar8;
                (*(code *)PTR_SendMessage_0046856c)
                          (&local_b48,iVar8,*(undefined4 *)puVar18,puVar18 + 4);
                if (cVar6 == -0x30) {
                  local_4c = local_4c + iVar8;
                }
              }
              else {
                iVar12 = (*(code *)PTR_AddrIsTheSame_00468568)(&local_148,puVar18 + 4);
                if (iVar12 == 0) {
                  local_50 = local_50 + iVar8;
                  (*(code *)PTR_SendMessage_0046856c)
                            (&local_b48,iVar8,*(undefined4 *)puVar18,puVar18 + 0x14);
                  if (cVar6 == -0x30) {
                    local_44 = (undefined4 *)((int)local_44 + iVar8);
                  }
                }
                else {
                  local_48 = local_48 + 1;
                  if (local_48 < 4) {
                    uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_144);
                    (*(code *)PTR_PPPP_DebugTrace_00468294)
                              (0x10,PTR_DAT_00468298 + -0x43e8,uVar7,
                               local_148._2_2_ >> 8 | local_148._2_2_ << 8,puVar18 + 0x4c,
                               *(undefined4 *)(puVar18 + 0x5c),iVar8);
                  }
                }
              }
              if (local_58 == (short *)(((uint)local_58 / 10) * 10)) {
                uVar9 = (uint)(local_50 + (int)local_54 < local_50);
                if ((local_40 <= uVar9) &&
                   ((local_40 != uVar9 || (local_38 <= local_50 + (int)local_54)))) {
                  (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(8);
                }
                uVar22 = (*(code *)PTR_getCurTime_004682c8)();
                iVar8 = (*(code *)PTR___udivdi3_004682f0)
                                  ((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),1000,0);
                uVar10 = iVar8 - (int)local_34;
                if (local_3c <= uVar10) {
                  (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(8);
                }
                uVar9 = 0;
                bVar14 = true;
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x200,PTR_DAT_00468298 + -0x4340,local_54,local_50,local_4c,local_44,
                           local_38,local_40,uVar10,local_3c);
              }
              else {
LAB_004227d4:
                uVar9 = 0;
                bVar14 = true;
              }
            }
            else {
              if ((local_b48 == -0xf) && ((local_b47 == -0x30 || (local_b47 == -0x20)))) {
                iVar12 = (*(code *)PTR_AddrIsTheSame_00468568)(&local_148,puVar3 + 0x14);
                if (iVar12 == 0) {
                  local_54 = local_54 + iVar8;
                  if (cVar6 == -0x30) {
                    local_4c = local_4c + iVar8;
                  }
                }
                else {
                  iVar12 = (*(code *)PTR_AddrIsTheSame_00468568)(&local_148,puVar18 + 4);
                  if (iVar12 == 0) {
                    local_50 = local_50 + iVar8;
                    if (cVar6 == -0x30) {
                      bVar16 = true;
                      local_44 = (undefined4 *)((int)local_44 + iVar8);
                    }
                    else {
                      bVar16 = true;
                    }
                  }
                  else {
                    local_48 = local_48 + 1;
                    if (local_48 < 4) {
                      uVar7 = (*(code *)PTR_inet_ntoa_00468804)(local_144);
                      (*(code *)PTR_PPPP_DebugTrace_00468294)
                                (0x10,PTR_DAT_00468298 + -0x43e8,uVar7,
                                 local_148._2_2_ >> 8 | local_148._2_2_ << 8,puVar18 + 0x4c,
                                 *(undefined4 *)(puVar18 + 0x5c),iVar8);
                    }
                  }
                  if (!bVar14) {
                    uVar7 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(puVar3 + 0x18));
                    (*(code *)PTR_PPPP_DebugTrace_00468294)
                              (0x10,PTR_DAT_00468298 + -0x43a8,uVar7,
                               *(ushort *)(puVar3 + 0x16) >> 8 | *(ushort *)(puVar3 + 0x16) << 8,
                               puVar18 + 0x4c,*(undefined4 *)(puVar3 + 0x5c));
                    uVar9 = 0;
                    (*(code *)PTR_PPPP_Proto_Send_RlyRdy_00468540)
                              (*(undefined4 *)puVar3,puVar3 + 0x14,puVar18 + 0x4c,
                               *(undefined4 *)(puVar3 + 0x5c),puVar17);
                    goto LAB_00421d30;
                  }
                }
                uVar7 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(puVar3 + 8));
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (0x10,PTR_DAT_00468298 + -0x4374,uVar7,
                           *(ushort *)(puVar3 + 6) >> 8 | *(ushort *)(puVar3 + 6) << 8,
                           puVar18 + 0x4c,*(undefined4 *)(puVar3 + 0x5c));
                (*(code *)PTR_PPPP_Proto_Send_RlyRdy_00468540)
                          (*(undefined4 *)puVar3,puVar3 + 4,puVar18 + 0x4c,
                           *(undefined4 *)(puVar3 + 0x5c),puVar17);
              }
              else {
                (*(code *)PTR_PPPP_Proto_Send_RlyRdy_00468540)
                          (*(undefined4 *)puVar3,&local_148,puVar3 + 0x4c,
                           *(undefined4 *)(puVar3 + 0x5c),puVar17);
                if (!bVar14) {
                  uVar9 = 0;
                  goto LAB_00421d30;
                }
              }
              if (!bVar16) goto LAB_004227d4;
              uVar9 = 0;
              bVar14 = true;
              uVar22 = (*(code *)PTR_getCurTime_004682c8)();
              local_34 = (undefined4 *)
                         (*(code *)PTR___udivdi3_004682f0)
                                   ((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),1000,0);
              local_58 = (short *)0x0;
              local_48 = 0;
            }
LAB_00421d30:
          } while (puVar3[0x6c] == '\x02');
          (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(1);
          if (bVar14) {
            if (bVar16) {
              uVar22 = (*(code *)PTR_getCurTime_004682c8)();
              iVar8 = (*(code *)PTR___udivdi3_004682f0)
                                ((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),1000,0);
              iVar8 = iVar8 - (int)local_34;
              if (puVar3[0x6d] == '\x03') {
                uVar7 = 0;
              }
              else {
                uVar7 = 1;
                if (puVar3[0x6d] != '\b') {
                  uVar7 = 2;
                }
              }
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x10,PTR_DAT_00468298 + -0x42b4,uVar7,local_54,local_50,local_4c,local_44,
                         iVar8);
              (*(code *)PTR_PPPP__SendSessionReport_SuperDevice_00468574)
                        (uVar7,local_54,local_50,local_4c,local_44,iVar8);
              (*(code *)PTR_PPPP_Proto_Send_Close_0046854c)(*(undefined4 *)puVar3,0,puVar3 + 0x14);
              (*(code *)PTR_PPPP_Proto_Send_Close_0046854c)(*(undefined4 *)puVar3,0,puVar3 + 4);
              (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
              uVar7 = (*(code *)PTR_getCurTime_004682c8)();
              puVar18 = PTR_DAT_00468298 + -0x423c;
            }
            else {
              (*(code *)PTR_PPPP_Proto_Send_Close_0046854c)(*(undefined4 *)puVar3,0,puVar3 + 0x14);
              (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
              uVar7 = (*(code *)PTR_getCurTime_004682c8)();
              puVar18 = PTR_DAT_00468298 + -0x41c8;
            }
            (*(code *)PTR_sprintf_004687f0)(&local_b48,PTR_DAT_00468298 + -0x45b0,uVar7,puVar18);
            (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
            iVar8 = 0;
            goto LAB_004219f4;
          }
          if (bVar16) {
            (*(code *)PTR_PPPP_Proto_Send_Close_0046854c)(*(undefined4 *)puVar3,0,puVar3 + 4);
            (*(code *)PTR_memset_00468810)(&local_b48,0,0x40);
            uVar7 = (*(code *)PTR_getCurTime_004682c8)();
            (*(code *)PTR_sprintf_004687f0)
                      (&local_b48,PTR_DAT_00468298 + -0x45b0,uVar7,PTR_DAT_00468298 + -0x4218);
            (*(code *)PTR_PPPP__SendReport_SuperDevice_Connect_00468544)(&local_b48);
            iVar8 = 0;
            goto LAB_004219f4;
          }
        }
        iVar8 = 0;
      }
    }
  }
LAB_004219f4:
  (*(code *)PTR_PPPP__SendReport_SuperDevice_ExitThread_0046853c)((int)(char)puVar3[0x6d],iVar8);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x41fc);
  (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)puVar3);
  (*(code *)PTR_pthread_exit_004688b4)(0);
  return;
}



// ==== PPPP_Listen_To_With_Key @ 004233ec size=2068

/* PPPP_Listen_To_With_Key(int, unsigned int, unsigned short, char) */

undefined4 PPPP_Listen_To_With_Key(int param_1,uint param_2,ushort param_3,char param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined *puVar12;
  int iVar13;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  ushort local_34 [2];
  undefined1 *local_30;
  
  puVar8 = PTR_gLastNetDetectTime_00468314;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x41b0);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5888);
  uVar3 = (*(code *)PTR_time_00468800)(0);
  iVar4 = (*(code *)PTR_time_00468800)(0);
  iVar9 = *(int *)puVar8;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x5854,iVar9,uVar3,iVar4 - iVar9);
  iVar4 = (*(code *)PTR_time_00468800)(0);
  piVar11 = (int *)PTR_gTNPSession_004682bc;
  if ((0x15180 < (uint)(iVar4 - *(int *)puVar8)) && (param_4 != '\0')) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4024);
    iVar4 = (*(code *)PTR_PPPP__DoNetWorkDetect_004682b0)
                      (PTR_gNetInfo_004682e8,param_3,PTR_gServerString_004682ac,
                       PTR_gP2PServerAddr_004682a8,PTR_gP2PServerAddr_004682a8 + 0x10,
                       PTR_gP2PServerAddr_004682a8 + 0x20);
    piVar11 = (int *)PTR_gTNPSession_004682bc;
    if (iVar4 != 0) {
      (*(code *)(PTR_LAB_0046858c + -0x1aac))
                (*(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20 + 0xd8);
    }
  }
  iVar4 = param_1 * 0x3f20;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5734);
  iVar9 = *piVar11;
  uVar3 = (*(code *)PTR_CreateSocket_004683c8)(0);
  iVar13 = *piVar11 + iVar4;
  *(undefined4 *)(iVar9 + iVar4 + 0xc) = uVar3;
  puVar7 = PTR_DAT_00468298;
  puVar8 = PTR_PPPP_DebugTrace_00468294;
  *(undefined1 *)(iVar13 + 0x10) = 0;
  *(undefined4 *)(iVar13 + 4) = *(undefined4 *)(iVar13 + 0xc);
  *(undefined1 *)(iVar13 + 8) = 0;
  (*(code *)puVar8)(2,puVar7 + -0x5710,*(undefined4 *)(iVar13 + 0xc));
  puVar8 = PTR_gTNPSession_004682bc;
  if (*(int *)(*piVar11 + iVar4 + 0xc) < 0) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x418c);
    return 0xfffff430;
  }
  (*(code *)PTR_SetSocketBroadcast_004683cc)();
  local_34[0] = param_3;
  iVar9 = (*(code *)PTR_TryBindPort_004683d0)
                    (*(undefined4 *)(*(int *)puVar8 + iVar4 + 0xc),local_34);
  if (iVar9 < 0) {
    (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)(*(int *)puVar8 + iVar4 + 0xc));
    puVar5 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x5a68,*puVar5);
    return 0xfffff436;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x61d8,local_34[0]);
  puVar7 = PTR_gethostbyname_004687f4;
  puVar6 = PTR_gNetInfo_004682e8 + 4;
  *(undefined2 *)(*(int *)puVar8 + iVar4 + 0xb8) = 2;
  iVar9 = (*(code *)puVar7)(puVar6);
  if (iVar9 != 0) {
    (*(code *)PTR_memcpy_00468898)
              (*(int *)puVar8 + iVar4 + 0xbc,**(undefined4 **)(iVar9 + 0x10),
               *(undefined4 *)(iVar9 + 0xc));
  }
  puVar8 = PTR_gethostbyname_004687f4;
  puVar7 = PTR_gNetInfo_004682e8 + 0x14;
  *(undefined2 *)(*piVar11 + iVar4 + 200) = 2;
  iVar9 = (*(code *)puVar8)(puVar7);
  puVar8 = PTR_gTNPSession_004682bc;
  if (iVar9 != 0) {
    (*(code *)PTR_memcpy_00468898)
              (*(int *)PTR_gTNPSession_004682bc + iVar4 + 0xcc,**(undefined4 **)(iVar9 + 0x10),
               *(undefined4 *)(iVar9 + 0xc));
  }
  puVar7 = PTR_PPPP_DebugTrace_00468294;
  iVar9 = *(int *)puVar8;
  uVar2 = local_34[0] >> 8 | local_34[0] << 8;
  puVar8 = PTR_DAT_00468298 + -0x5688;
  *(ushort *)(iVar9 + iVar4 + 0xba) = uVar2;
  *(ushort *)(iVar9 + iVar4 + 0xca) = uVar2;
  (*(code *)puVar7)(1,puVar8);
  puVar8 = PTR_gTNPSession_004682bc;
  iVar9 = *piVar11;
  uVar3 = (*(code *)PTR_CreateWorkerThread_00468408)
                    (PTR_PPPP_thread_recv_Proto_device_00468578,param_1);
  iVar13 = *piVar11;
  *(undefined4 *)(iVar9 + iVar4 + 0x140) = uVar3;
  if (*(int *)(iVar13 + iVar4 + 0x140) == 0) {
    (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)(iVar13 + iVar4 + 0xc));
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4170);
    return 0xfffff432;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4128);
  iVar9 = *(int *)puVar8;
  uVar3 = (*(code *)PTR_CreateWorkerThread_00468408)
                    (PTR_PPPP_thread_recv_LanSearch_0046857c,param_1);
  iVar13 = *(int *)puVar8 + iVar4;
  *(undefined4 *)(iVar9 + iVar4 + 0x144) = uVar3;
  puVar7 = PTR_WaitThreadExit_00468404;
  if (*(int *)(iVar13 + 0x144) == 0) {
    *(undefined1 *)(iVar13 + 0xf2) = 1;
    (*(code *)puVar7)(iVar13 + 0x140);
    (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)(*(int *)puVar8 + iVar4 + 0xc));
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4104);
    return 0xfffff432;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x40c0);
  puVar6 = PTR_gDeviceLostUDPLoginCount_00468580;
  puVar7 = PTR_gDeviceRecvUDPLoginAck_0046851c;
  *(undefined1 *)(*(int *)puVar8 + iVar4 + 0x1a7) = 1;
  puVar8 = PTR_gListenTimeOut_00468584;
  *(undefined4 *)puVar7 = 1;
  *(undefined4 *)puVar6 = 0;
  if (param_2 < 0x1999999a) {
    *(uint *)puVar8 = param_2;
    if (param_2 * 10 == 0) {
      return 0;
    }
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    *(undefined4 *)puVar8 = 0xffffffff;
  }
  do {
    puVar7 = PTR_gP2PServerAddr_004682a8;
    if (uVar10 == 0) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4084);
      puVar6 = puVar7 + 0x30;
      do {
        if (param_4 != '\0') {
          (*(code *)PTR_PPPP_Proto_Send_Hello_00468458)
                    (*(undefined4 *)(*piVar11 + iVar4 + 0xc),puVar7);
        }
        puVar7 = puVar7 + 0x10;
      } while (puVar7 != puVar6);
LAB_00423ab4:
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4078);
      iVar9 = *piVar11 + iVar4;
      (*(code *)PTR_PPPP_Proto_Send_LanNotify_00468594)
                (*(undefined4 *)(iVar9 + 0xc),0x7d6c,iVar9 + 0x1a8,*(undefined4 *)(iVar9 + 0x1b8),
                 iVar9 + 0x1b0);
    }
    else if ((uVar10 == 10) || (uVar10 == 0x14)) goto LAB_00423ab4;
    iVar9 = (*(code *)PTR_PPPP__SessionHandler_Is_Full_00468504)();
    iVar13 = *piVar11 + iVar4;
    uVar1 = (uint)*(byte *)(iVar13 + 0x1d9) * 10;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar10 % uVar1 == 0) || (uVar10 == 0x1e)) {
      if (iVar9 != *(int *)PTR_gLastSessionIsFull_00468588) goto LAB_004237ec;
joined_r0x004239d4:
      if (param_4 != '\0') {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x403c,uVar10 / 10);
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x40000,PTR_DAT_00468298 + -0x403c,uVar10 / 10);
        puVar7 = PTR_gDeviceLostUDPLoginCount_00468580;
        if (*(int *)PTR_gDeviceRecvUDPLoginAck_0046851c == 1) {
          *(undefined4 *)PTR_gDeviceRecvUDPLoginAck_0046851c = 0;
          *(undefined4 *)puVar7 = 0;
        }
        else {
          iVar13 = *(int *)PTR_gDeviceLostUDPLoginCount_00468580;
          *(int *)PTR_gDeviceLostUDPLoginCount_00468580 = iVar13 + 1;
          if (5 < iVar13 + 1) {
            *(undefined4 *)PTR_gDeviceNextLoginType_004684cc = 1;
            return 0;
          }
        }
      }
      puVar7 = PTR_gLoginFlag_00468518;
      local_36 = 0xe;
      local_37 = 2;
      local_38 = 0xd2;
      iVar13 = -7;
      if (iVar9 == 0) {
        iVar13 = (int)(char)PTR_gNetInfo_004682e8[3];
      }
      local_30 = &local_38;
      puVar12 = PTR_gP2PServerAddr_004682a8 + 0x30;
      puVar6 = PTR_gP2PServerAddr_004682a8;
      do {
        if (param_4 != '\0') {
          iVar9 = *piVar11 + iVar4;
          (*(code *)PTR_PPPP_Proto_Send_DevLgn_Key_00468590)
                    (*(undefined4 *)(iVar9 + 0xc),0,puVar6,iVar9 + 0x1a8,
                     *(undefined4 *)(iVar9 + 0x1b8),iVar9 + 0x1b0,iVar13,&local_38,iVar9 + 0xb8,
                     iVar9 + 0xf7,(int)(char)*puVar7);
        }
        puVar6 = puVar6 + 0x10;
      } while (puVar6 != puVar12);
      iVar13 = *piVar11 + iVar4;
    }
    else if (iVar9 != *(int *)PTR_gLastSessionIsFull_00468588) {
LAB_004237ec:
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4068,iVar9);
      *(int *)PTR_gLastSessionIsFull_00468588 = iVar9;
      goto joined_r0x004239d4;
    }
    if (*(char *)(iVar13 + 0xf6) != '\0') {
      return 0;
    }
    if (*(char *)(iVar13 + 0x1a7) < '\0') {
      return 0;
    }
    uVar10 = uVar10 + 1;
    (*(code *)PTR_mSecSleep_004682d4)(100);
    if ((uint)(*(int *)puVar8 * 10) <= uVar10) {
      return 0;
    }
  } while( true );
}



// ==== PPPP_Listen_To_With_Key_TCP @ 00423c00 size=2660

/* PPPP_Listen_To_With_Key_TCP(int, unsigned int) */

undefined4 PPPP_Listen_To_With_Key_TCP(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined *puVar15;
  uint uVar16;
  ushort *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  int iVar20;
  undefined4 *puVar21;
  int *piVar22;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  int local_38;
  int local_34;
  int *local_30;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4010);
  puVar15 = PTR_gTNPSession_004682bc;
  iVar2 = param_1 * 0x3f20;
  if ((*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar2 + 0x137) == '\x01') &&
     (iVar13 = (*(code *)PTR_time_00468800)(0),
     0x15180 < (uint)(iVar13 - *(int *)PTR_gLastNetDetectTime_00468314))) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4024);
    (*(code *)PTR_PPPP__DoNetWorkDetect_004682b0)
              (PTR_gNetInfo_004682e8,0,PTR_gServerString_004682ac,PTR_gP2PServerAddr_004682a8,
               PTR_gP2PServerAddr_004682a8 + 0x10,PTR_gP2PServerAddr_004682a8 + 0x20);
  }
  puVar6 = PTR_gP2PTcpServerAddr_00468598;
  puVar5 = PTR_gP2PTcpAddrNum_004683b0;
  iVar13 = *(int *)PTR_gP2PTcpAddrNum_004683b0;
  if (0 < iVar13) {
    iVar20 = 0;
    puVar19 = PTR_DAT_00468298 + -0x3fe8;
    puVar17 = (ushort *)(PTR_gP2PTcpServerAddr_00468598 + 2);
    do {
      iVar13 = iVar20 * 0x10;
      iVar20 = iVar20 + 1;
      uVar8 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(puVar6 + iVar13 + 4));
      (*(code *)PTR_PPPP_DebugTrace_00468294)
                (0x10,puVar19,iVar20,uVar8,*puVar17 >> 8 | *puVar17 << 8);
      iVar13 = *(int *)puVar5;
      puVar17 = puVar17 + 8;
    } while (iVar20 < iVar13);
  }
  iVar20 = *(int *)PTR_gP2PTcpSocket_004684ec;
  if (iVar20 < 0) {
    iVar20 = (*(code *)PTR_PPPP__ConnectTcpServer_004683b8)
                       (PTR_gP2PTcpServerAddr_00468598,iVar13,PTR_gCurP2PTCPServerIndex_0046859c,5,
                        0x14);
    *(int *)PTR_gP2PTcpSocket_004684ec = iVar20;
    if (iVar20 < 0) {
      return 0xfffff42e;
    }
  }
  puVar5 = PTR_gP2PTcpServerAddr_00468598;
  uVar8 = *(undefined4 *)PTR_gCurP2PTCPServerIndex_0046859c;
  iVar13 = *(int *)puVar15 + iVar2;
  puVar21 = (undefined4 *)(iVar13 + 0x14);
  *(int *)(iVar13 + 0xc) = iVar20;
  *(undefined1 *)(iVar13 + 0x10) = 1;
  *(undefined4 *)(iVar13 + 0xa4) = uVar8;
  puVar11 = (undefined4 *)puVar5;
  do {
    puVar10 = puVar11 + 4;
    uVar14 = puVar11[1];
    uVar12 = puVar11[2];
    uVar8 = puVar11[3];
    *puVar21 = *puVar11;
    puVar21[1] = uVar14;
    puVar21[2] = uVar12;
    puVar21[3] = uVar8;
    puVar21 = puVar21 + 4;
    puVar11 = puVar10;
  } while (puVar10 != (undefined4 *)(puVar5 + 0x90));
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3fcc);
  iVar13 = *(int *)puVar15;
  uVar8 = (*(code *)PTR_CreateWorkerThread_00468408)
                    (PTR_PPPP_thread_recv_Proto_TCP_device_004685a0,param_1);
  iVar20 = *(int *)puVar15;
  *(undefined4 *)(iVar13 + iVar2 + 0x140) = uVar8;
  if (*(int *)(iVar20 + iVar2 + 0x140) == 0) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x4170);
    uVar8 = 0xfffff432;
  }
  else {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x40c0);
    puVar6 = PTR_gListenTimeOut_00468584;
    *(undefined1 *)(*(int *)PTR_gTNPSession_004682bc + iVar2 + 0x1a7) = 1;
    puVar5 = PTR_gDeviceTCPLoginSend_004684fc;
    if (param_2 < 0x1999999a) {
      *(uint *)puVar6 = param_2;
      *(undefined4 *)puVar5 = 0;
      if (param_2 * 10 == 0) {
        return 0;
      }
    }
    else {
      *(undefined4 *)puVar6 = 0xffffffff;
      *(undefined4 *)puVar5 = 0;
    }
    puVar19 = PTR_gTNPSession_004682bc;
    uVar16 = 0;
    puVar18 = PTR_DAT_00468298 + -0x403c;
    do {
      iVar13 = (*(code *)PTR_PPPP__SessionHandler_Is_Full_00468504)();
      iVar20 = *(int *)puVar15 + iVar2;
      uVar3 = (uint)*(byte *)(iVar20 + 0x1d9) * 10;
      if (uVar3 == 0) {
        trap(0x1c00);
      }
      if ((uVar16 % uVar3 != 0) && (uVar16 != 0x1e)) {
        if (iVar13 != *(int *)PTR_gLastSessionIsFull_00468588) goto LAB_00423e54;
        cVar7 = *(char *)(iVar20 + 0x137);
        goto LAB_00423f84;
      }
      if (iVar13 != *(int *)PTR_gLastSessionIsFull_00468588) {
LAB_00423e54:
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x4068,iVar13);
        *(int *)PTR_gLastSessionIsFull_00468588 = iVar13;
      }
      if ((0x1e < uVar16) && (*(int *)puVar5 == 1)) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3fb0);
        (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)(*(int *)puVar15 + iVar2 + 0xc));
        iVar13 = *(int *)puVar15;
        *(undefined4 *)PTR_gP2PTcpSocket_004684ec = 0xffffffff;
        *(undefined4 *)(iVar13 + iVar2 + 0xc) = 0xffffffff;
        *(undefined1 *)(iVar13 + iVar2 + 0x10) = 0;
        break;
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,puVar18,uVar16 / 10);
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x40000,puVar18,uVar16 / 10);
      local_40 = 0xd2;
      local_3f = 2;
      local_3e = 0xe;
      if (iVar13 == 0) {
        iVar13 = (int)(char)PTR_gNetInfo_004682e8[3];
      }
      else {
        iVar13 = -7;
      }
      iVar20 = *(int *)puVar15 + iVar2;
      iVar13 = (*(code *)PTR_PPPP_Proto_Send_DevLgn_Key_00468590)
                         (*(undefined4 *)(iVar20 + 0xc),(int)*(char *)(iVar20 + 0x10),
                          iVar20 + (*(int *)(iVar20 + 0xa4) + 1) * 0x10 + 4,iVar20 + 0x1a8,
                          *(undefined4 *)(iVar20 + 0x1b8),iVar20 + 0x1b0,iVar13,&local_40,
                          iVar20 + 0xb8,iVar20 + 0xf7,(int)(char)*PTR_gLoginFlag_00468518);
      if (iVar13 < 0) {
        local_38 = iVar13;
        local_30 = (int *)PTR_gTNPSession_004682bc;
        (*(code *)PTR_CloseSocket_004683b4)
                  (*(undefined4 *)(*(int *)PTR_gTNPSession_004682bc + iVar2 + 0xc));
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3f98,local_38);
        iVar13 = *local_30;
        *(undefined4 *)PTR_gP2PTcpSocket_004684ec = 0xffffffff;
        *(undefined4 *)(iVar13 + iVar2 + 0xc) = 0xffffffff;
        *(undefined1 *)(iVar13 + iVar2 + 0x10) = 0;
        break;
      }
      iVar20 = *(int *)puVar19;
      *(undefined4 *)puVar5 = 1;
      iVar20 = iVar20 + iVar2;
      cVar7 = *(char *)(iVar20 + 0x137);
      if ((cVar7 == '\x01') && (*(char *)(iVar20 + 0x1d0) == '\"')) {
        iVar13 = (*(code *)PTR_PPPP_Proto_Send_RlyHello_00468380)
                           (*(undefined4 *)(iVar20 + 4),iVar20 + 0x194);
        if (-1 < iVar13) {
          iVar20 = *(int *)puVar19 + iVar2;
          cVar7 = *(char *)(iVar20 + 0x137);
          goto LAB_00423f84;
        }
        puVar15 = PTR_DAT_00468298 + -0x3f64;
LAB_004242c8:
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,puVar15);
        (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(param_1);
        break;
      }
LAB_00423f84:
      if (cVar7 == '\x01') {
        if (*(char *)(iVar20 + 0x1a7) == '\0') {
          bVar9 = *(byte *)(iVar20 + 0x1d0);
          if (bVar9 < 0x15) {
            iVar13 = (*(code *)PTR_PPPP_Proto_Send_RlyServerReq_00468410)
                               (*(undefined4 *)(iVar20 + 0xc),(int)*(char *)(iVar20 + 0x10),
                                iVar20 + (*(int *)(iVar20 + 0xa4) + 1) * 0x10 + 4,iVar20 + 0x1a8,
                                *(undefined4 *)(iVar20 + 0x1b8),iVar20 + 0x1b0,1);
            if (iVar13 < 0) {
              local_38 = iVar13;
              (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)(*(int *)puVar15 + iVar2 + 0xc));
              (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3f4c,local_38);
              goto LAB_00424224;
            }
            (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x15);
            iVar20 = *(int *)puVar15 + iVar2;
            bVar9 = *(byte *)(iVar20 + 0x1d0);
          }
        }
        else {
          bVar9 = *(byte *)(iVar20 + 0x1d0);
        }
        if (bVar9 != 0x16) goto LAB_00423f8c;
        iVar13 = *(int *)(iVar20 + 0x1ec);
        if (((iVar13 == 0) || (*(uint *)(iVar20 + 0x1f0) <= *(uint *)(iVar20 + 500))) ||
           (*(uint *)(iVar20 + 0x1f0) == 0)) {
LAB_00424338:
          (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3f18);
          return 0;
        }
        piVar22 = (int *)0x0;
        iVar20 = 1;
LAB_004240c0:
        iVar4 = (int)piVar22 * 0x14;
        iVar13 = iVar13 + iVar4;
        piVar22 = (int *)((int)piVar22 + 1);
        if (*(char *)(iVar13 + 0x10) != iVar20) {
          iVar13 = *(int *)puVar15 + iVar2;
          if (*(uint *)(iVar13 + 0x1f0) <= piVar22) goto LAB_004241a0;
LAB_004240bc:
          iVar13 = *(int *)(iVar13 + 0x1ec);
          goto LAB_004240c0;
        }
        local_38 = iVar4;
        local_34 = iVar20;
        local_30 = piVar22;
        iVar13 = (*(code *)PTR_PPPP__Start_TCP_For_Session_004683f0)(param_1,iVar13,5);
        if (iVar13 < 0) {
          uVar8 = (*(code *)PTR_inet_ntoa_00468804)
                            (*(undefined4 *)
                              (*(int *)(*(int *)puVar15 + iVar2 + 0x1ec) + local_38 + 4));
          uVar1 = *(ushort *)(*(int *)(*(int *)puVar15 + iVar2 + 0x1ec) + local_38 + 2);
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (0x10,PTR_DAT_00468298 + -0x3ed8,uVar8,uVar1 >> 8 | uVar1 << 8);
          iVar13 = *(int *)puVar15 + iVar2;
          iVar20 = local_34;
          piVar22 = local_30;
          if (*(uint *)(iVar13 + 0x1f0) <= local_30) goto LAB_004241a0;
          goto LAB_004240bc;
        }
        uVar8 = (*(code *)PTR_inet_ntoa_00468804)
                          (*(undefined4 *)(*(int *)(*(int *)puVar15 + iVar2 + 0x1ec) + local_38 + 4)
                          );
        uVar1 = *(ushort *)(*(int *)(*(int *)puVar15 + iVar2 + 0x1ec) + local_38 + 2);
        (*(code *)PTR_PPPP_DebugTrace_00468294)
                  (0x10,PTR_DAT_00468298 + -0x3ef8,uVar8,uVar1 >> 8 | uVar1 << 8);
        iVar13 = *(int *)puVar15 + iVar2;
        puVar11 = (undefined4 *)(*(int *)(iVar13 + 0x1ec) + local_38);
        uVar8 = puVar11[3];
        uVar14 = puVar11[1];
        uVar12 = puVar11[2];
        *(undefined4 *)(iVar13 + 0x194) = *puVar11;
        *(undefined4 *)(iVar13 + 0x198) = uVar14;
        *(undefined4 *)(iVar13 + 0x19c) = uVar12;
        *(undefined4 *)(iVar13 + 0x1a0) = uVar8;
LAB_004241a0:
        if (*(char *)(iVar13 + 0x1d0) != '\"') goto LAB_00424338;
        iVar13 = (*(code *)PTR_PPPP_Proto_Send_EasyTCPStart_004683f8)
                           (*(undefined4 *)(iVar13 + 4),iVar13 + 0x194,iVar13 + 0x1a8,
                            *(undefined4 *)(iVar13 + 0x1b8),iVar13 + 0x1b0,1,iVar13 + 0xf7);
        if (iVar13 < 0) {
          puVar15 = PTR_DAT_00468298 + -0x3eb8;
          goto LAB_004242c8;
        }
        iVar20 = *(int *)puVar15 + iVar2;
        cVar7 = *(char *)(iVar20 + 1);
        if (cVar7 != '\x06') goto LAB_00423fa0;
LAB_00424200:
        (*(code *)PTR_CloseSocket_004683b4)(*(undefined4 *)(iVar20 + 0xc));
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3e9c);
LAB_00424224:
        iVar13 = *(int *)puVar15;
        *(undefined4 *)PTR_gP2PTcpSocket_004684ec = 0xffffffff;
        *(undefined1 *)(iVar13 + iVar2 + 0x10) = 0;
        *(undefined4 *)(iVar13 + iVar2 + 0xc) = 0xffffffff;
        return 0;
      }
LAB_00423f8c:
      cVar7 = *(char *)(iVar20 + 1);
      if (cVar7 == '\x06') goto LAB_00424200;
LAB_00423fa0:
      if (cVar7 == '\x01') goto LAB_00424200;
      if (*(char *)(iVar20 + 0x1a7) < '\0') {
        return 0;
      }
      if (*(char *)(iVar20 + 0xf6) != '\0') {
        return 0;
      }
      uVar16 = uVar16 + 1;
      (*(code *)PTR_mSecSleep_004682d4)(100);
    } while (uVar16 < (uint)(*(int *)puVar6 * 10));
    uVar8 = 0;
  }
  return uVar8;
}



// ==== PPPP_Listen_With_Key2 @ 00424664 size=3612

uint PPPP_Listen_With_Key2
               (undefined4 param_1,int param_2,uint param_3,char param_4,int param_5,char param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined *puVar11;
  int iVar12;
  undefined *puVar13;
  int iVar14;
  undefined *puVar15;
  uint uVar16;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  
  local_34 = &local_68;
  local_38 = &local_78;
  local_30 = param_3 & 0xffff;
  local_4c = (int)param_6;
  local_48 = (int)param_4;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58[0] = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  iVar7 = (*(code *)PTR_PPPP__ParseDID_00468498)(param_1,&local_68,0x10,local_58,local_38,0x10);
  if (iVar7 == 0) {
    uVar8 = 0xfffff447;
    if (*PTR_gFlagInitialized_0046829c != '\0') {
      if ((((0x15144 < param_2 - 0x3cU) || (param_5 == 0)) ||
          (iVar7 = (*(code *)PTR_strlen_004687c0)(param_5), iVar7 == 0)) || (0x3f < iVar7)) {
        return 0xfffff443;
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5960);
      puVar5 = PTR_gMaxSessionNumber_004682b8;
      (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_TheLock_004682a4);
      puVar6 = PTR_gLastHandle_00468428;
      uVar8 = *(uint *)puVar5;
      if (uVar8 == 0) {
        local_3c = 0;
      }
      else {
        uVar16 = (*(int *)PTR_gLastHandle_00468428 + 1U) % uVar8;
        if (uVar8 == 0) {
          trap(0x1c00);
        }
        pcVar10 = (char *)(*(int *)PTR_gTNPSession_004682bc + uVar16 * 0x3f20);
        cVar1 = *pcVar10;
        uVar4 = 0;
        while (local_3c = uVar16, cVar1 == '\x01') {
          local_3c = uVar4 + 1;
          if (local_3c == uVar8) goto LAB_00424828;
          uVar16 = (local_3c + *(int *)PTR_gLastHandle_00468428 + 1) % uVar8;
          if (uVar8 == 0) {
            trap(0x1c00);
          }
          pcVar10 = (char *)(*(int *)PTR_gTNPSession_004682bc + uVar16 * 0x3f20);
          uVar4 = local_3c;
          cVar1 = *pcVar10;
        }
        *pcVar10 = '\x01';
        *(uint *)puVar6 = local_3c;
      }
LAB_00424828:
      uVar8 = local_3c;
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_TheLock_004682a4);
      if (*(uint *)puVar5 != local_3c) {
        (*(code *)PTR_PPPP__Reset_Session_00468318)(uVar8,2);
        puVar6 = PTR_hthread_hello_004684e0;
        (*(code *)PTR_PPPP_Set_Sig_Key_00468430)(local_3c,param_5);
        (*(code *)PTR_strncpy_0046883c)(PTR_gPrefix_004684c8,&local_68,0x10);
        puVar15 = PTR_strncpy_0046883c;
        puVar5 = PTR_gCheckCode_004684c0;
        *(undefined4 *)PTR_gSN_004684bc = local_58[0];
        (*(code *)puVar15)(puVar5,&local_78,0x10);
        iVar7 = *(int *)puVar6;
        *(uint *)PTR_gCurrentSignalSession_0046842c = local_3c;
        puVar5 = PTR_gFlagListenInProgress_004684f0;
        *PTR_gFlagUserBreakListen_004685a4 = 0;
        *puVar5 = 1;
        puVar15 = PTR_PPPP_thread_hello_004685b4;
        puVar5 = PTR_CreateWorkerThread_00468408;
        if (iVar7 == 0) {
          *(undefined4 *)PTR_gExitHelloThread_004684b8 = 0;
          uVar9 = (*(code *)puVar5)(puVar15,0);
          *(undefined4 *)puVar6 = uVar9;
        }
        puVar5 = PTR_gTNPSession_004682bc;
        (*(code *)PTR_PPPP__Timer_Thread_Check_004685a8)();
        uVar9 = (*(code *)PTR_getTickCount_004683c0)();
        (*(code *)PTR_srand_0046880c)(uVar9);
        puVar6 = PTR_gTNPSessionLock_004682c4;
        iVar7 = local_3c * 0x3f20;
        local_44 = local_3c * 0x18;
        local_50 = uVar8;
        do {
          local_40 = (*(code *)PTR_time_00468800)(0);
          (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x591c,local_50);
          (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x5908);
          (*(code *)PTR_strncpy_0046883c)(*(int *)puVar5 + iVar7 + 0x1a8,&local_68,8);
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (2,PTR_DAT_00468298 + -0x58fc,*(int *)puVar5 + iVar7 + 0x1a8);
          puVar15 = PTR_PPPP_DebugTrace_00468294;
          puVar11 = PTR_DAT_00468298 + -0x58f0;
          *(undefined4 *)(*(int *)puVar5 + iVar7 + 0x1b8) = local_58[0];
          (*(code *)puVar15)(2,puVar11,local_58[0]);
          (*(code *)PTR_strncpy_0046883c)(*(int *)puVar5 + iVar7 + 0x1b0,&local_78,8);
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (2,PTR_DAT_00468298 + -0x58e4,*(int *)puVar5 + iVar7 + 0x1b0);
          (*(code *)PTR_PPPP_Set_Sig_Key_00468430)(local_3c,param_5);
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (2,PTR_DAT_00468298 + -0x3914,*(int *)puVar5 + iVar7 + 0xf7);
          iVar12 = *(int *)puVar5 + iVar7;
          (*(code *)PTR_keymap_Add_00468434)
                    (iVar12 + 0x1a8,*(undefined4 *)(iVar12 + 0x1b8),iVar12 + 0xf7);
          (*(code *)PTR_keymap_Dump_00468438)();
          puVar15 = PTR_PPPP_DebugTrace_00468294;
          puVar11 = PTR_DAT_00468298 + -0x3e70;
          *(char *)(*(int *)puVar5 + iVar7 + 0x137) = (char)local_4c;
          (*(code *)puVar15)(2,puVar11);
          puVar15 = PTR_PPPP_DebugTrace_00468294;
          puVar13 = PTR_DAT_00468298 + -0x43f0;
          puVar11 = PTR_DAT_00468298 + -0x56a8;
          *(undefined1 *)(*(int *)puVar5 + iVar7 + 0xf0) = 1;
          (*(code *)puVar15)(2,puVar11,puVar13);
          iVar12 = *(int *)puVar5 + iVar7;
          (*(code *)PTR_sprintf_004687f0)
                    (iVar12 + 0xd8,PTR_DAT_00468298 + -0x5694,iVar12 + 0x1a8,
                     *(undefined4 *)(iVar12 + 0x1b8),iVar12 + 0x1b0);
          iVar12 = *(int *)puVar5 + iVar7;
          *(undefined1 *)(iVar12 + 0x1d9) = 0x19;
          *(undefined1 *)(iVar12 + 0xf2) = 0;
          *(undefined1 *)(iVar12 + 0xf6) = 0;
          *(undefined1 *)(iVar12 + 0x1d8) = 0;
          *(undefined1 *)(iVar12 + 0x1d0) = 0;
          puVar15 = PTR_gP2PTcpSocket_004684ec;
          if (*(char *)(iVar12 + 0x137) == '\x01') {
            *(undefined4 *)PTR_gDeviceNextLoginType_004684cc = 1;
LAB_00424f0c:
            puVar15 = PTR_PPPP_DebugTrace_00468294;
            if (local_48 != 0) {
              uVar8 = (*(code *)PTR_PPPP_Listen_To_With_Key_TCP_004685b0)(local_50,param_2);
              iVar12 = *(int *)puVar5;
              goto LAB_00424ba8;
            }
            puVar11 = PTR_DAT_00468298 + -0x3cf0;
            uVar8 = 0xfffff445;
            *(undefined1 *)(iVar12 + 0xf2) = 1;
            (*(code *)puVar15)(1,puVar11);
            (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar5 + iVar7 + 0x140);
            (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar5 + iVar7 + 0x144);
            (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3ccc,0xfffff445);
LAB_00424c60:
            (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(local_50);
            iVar12 = *(int *)puVar5 + iVar7;
            if (((*(char *)(iVar12 + 0x1d8) != '\0') && (uVar8 != 0xfffff445)) &&
               (0 < *(int *)(iVar12 + 0xc))) {
              local_98 = 0;
              bVar2 = *(char *)(iVar12 + 0x1a7) == '\0';
              local_94 = 0;
              local_90 = 0;
              local_8c = 0;
              local_88 = 0;
              local_84 = 0;
              local_80 = 0;
              local_7c = 0;
              uVar9 = (*(code *)PTR_getCurTime_004682c8)();
              (*(code *)PTR_sprintf_004687f0)
                        (&local_98,PTR_DAT_00468298 + -0x3c9c,local_50,uVar9,uVar8);
              iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar7;
              iVar12 = (int)*(char *)(iVar14 + 0x10);
              if (iVar12 < 1) {
                puVar15 = PTR_gP2PServerAddr_004682a8;
                while( true ) {
                  (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                            (*(undefined4 *)(iVar14 + 0xc),iVar12,puVar15,iVar14 + 0xd8,bVar2,
                             (int)*(char *)(iVar14 + 0x1d0),(int)*(char *)(iVar14 + 0xf0),
                             (int)(short)uVar8,&local_98);
                  if (puVar15 + 0x10 == PTR_gP2PServerAddr_004682a8 + 0x30) break;
                  iVar14 = *(int *)puVar5 + iVar7;
                  iVar12 = (int)*(char *)(iVar14 + 0x10);
                  puVar15 = puVar15 + 0x10;
                }
              }
              else {
                (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                          (*(undefined4 *)(iVar14 + 0xc),iVar12,
                           iVar14 + (*(int *)(iVar14 + 0xa4) + 1) * 0x10 + 4,iVar14 + 0xd8,bVar2,
                           (int)*(char *)(iVar14 + 0x1d0),(int)*(char *)(iVar14 + 0xf0),
                           (int)(short)uVar8,&local_98);
              }
              iVar12 = *(int *)puVar5 + iVar7;
            }
            if ((*(char *)(iVar12 + 0x10) == '\0') && (-1 < *(int *)(iVar12 + 0xc))) {
              (*(code *)PTR_CloseSocket_004683b4)();
            }
            (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar6 + local_44);
            (*(code *)PTR_PPPP__Reset_Session_00468318)(local_50,0);
            *(undefined1 *)(*(int *)puVar5 + iVar7) = 1;
            (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar6 + local_44);
          }
          else {
            if (*(int *)PTR_gDeviceNextLoginType_004684cc != 0) goto LAB_00424f0c;
            if (-1 < *(int *)PTR_gP2PTcpSocket_004684ec) {
              (*(code *)PTR_CloseSocket_004683b4)();
              *(undefined4 *)puVar15 = 0xffffffff;
            }
            uVar8 = (*(code *)PTR_PPPP_Listen_To_With_Key_004685ac)
                              (local_50,param_2,local_30,local_48);
            iVar12 = *(int *)puVar5;
LAB_00424ba8:
            puVar15 = PTR_PPPP_DebugTrace_00468294;
            iVar12 = iVar12 + iVar7;
            if (uVar8 == 0) {
              if (-1 < *(char *)(iVar12 + 0x1a7)) {
                if (*(char *)(iVar12 + 0xf6) == '\0') {
                  if (*PTR_gFlagUserBreakListen_004685a4 == '\0') {
                    uVar8 = 0xfffff445;
                    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3d30);
                  }
                  else {
                    uVar8 = 0xfffff438;
                    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3d58);
                  }
                  puVar15 = PTR_PPPP_DebugTrace_00468294;
                  puVar11 = PTR_DAT_00468298 + -0x3cf0;
                  *(undefined1 *)(*(int *)puVar5 + iVar7 + 0xf2) = 1;
                  (*(code *)puVar15)(1,puVar11);
                  (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar5 + iVar7 + 0x140);
                  (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar5 + iVar7 + 0x144);
                  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3ccc,uVar8);
                  goto LAB_00424c60;
                }
                (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3d14);
                iVar12 = *(int *)puVar5 + iVar7;
                uVar8 = local_50;
                goto LAB_00424fb0;
              }
              uVar16 = (int)*(char *)(iVar12 + 0x1a7) + 0x20U & 0xff;
              if (uVar16 < 0x20) {
                    /* WARNING: Could not emulate address calculation at 0x004251c4 */
                    /* WARNING: Treating indirect jump as call */
                uVar8 = (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00468298 + uVar16 * 4 + -0x39c0)))();
                return uVar8;
              }
              puVar11 = PTR_DAT_00468298 + -0x3cf0;
              *(undefined1 *)(iVar12 + 0xf2) = 1;
              (*(code *)puVar15)(1,puVar11);
              (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar5 + iVar7 + 0x140);
              (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar5 + iVar7 + 0x144);
              (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3ccc,0);
            }
            else {
LAB_00424fb0:
              puVar15 = PTR_PPPP_DebugTrace_00468294;
              puVar11 = PTR_DAT_00468298 + -0x3cf0;
              *(undefined1 *)(iVar12 + 0xf2) = 1;
              (*(code *)puVar15)(1,puVar11);
              (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar5 + iVar7 + 0x140);
              (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar5 + iVar7 + 0x144);
              (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3ccc,uVar8);
              if ((int)uVar8 < 0) goto LAB_00424c60;
            }
            (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar6 + local_44);
            iVar12 = *(int *)puVar5;
            iVar14 = iVar12 + iVar7;
            *(undefined1 *)(iVar14 + 0xf3) = 0;
            *(undefined1 *)(iVar14 + 0xf4) = 0;
            if (*(char *)(iVar14 + 0x1d0) == ')') {
              *(undefined1 *)(iVar14 + 8) = 1;
            }
            else {
              *(undefined1 *)(iVar14 + 8) = 0;
              *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(iVar14 + 0xc);
            }
            puVar15 = PTR_gTNPSession_004682bc;
            iVar14 = 0;
            while( true ) {
              iVar3 = iVar14 * 0x1c;
              iVar14 = iVar14 + 1;
              (*(code *)PTR_sll_Init_00468474)(iVar12 + iVar7 + iVar3 + 0x3f0,0x10000);
              (*(code *)PTR_sll_Init_00468474)(*(int *)puVar5 + iVar7 + iVar3 + 0x348,0x10000);
              (*(code *)PTR_sll_Init_00468474)(*(int *)puVar5 + iVar7 + iVar3 + 0x2a0,0x10000);
              (*(code *)PTR_sll_Init_00468474)(*(int *)puVar5 + iVar7 + iVar3 + 0x1f8,0x10000);
              puVar13 = PTR_gTNPSession_004682bc;
              puVar11 = PTR_MUTEX_RELEASE_004682b4;
              if (iVar14 == 6) break;
              iVar12 = *(int *)puVar15;
            }
            iVar12 = *(int *)puVar6;
            *(undefined1 *)(*(int *)PTR_gTNPSession_004682bc + iVar7 + 0x13b) = 1;
            (*(code *)puVar11)(iVar12 + local_44);
            iVar12 = *(int *)puVar13 + iVar7;
            if (*(char *)(iVar12 + 8) == '\0') {
              uVar9 = (*(code *)PTR_CreateWorkerThread_00468408)
                                (PTR_PPPP_thread_recv_DRW_00468480,local_50);
              iVar14 = *(int *)puVar13;
              *(undefined4 *)(iVar12 + 0x148) = uVar9;
              iVar12 = iVar14 + iVar7;
            }
            uVar9 = (*(code *)PTR_CreateWorkerThread_00468408)
                              (PTR_PPPP_thread_send_DRW_00468478,local_50);
            *(undefined4 *)(iVar12 + 0x14c) = uVar9;
          }
          if (local_48 == 0) {
            (*(code *)PTR_mSecSleep_004682d4)(1000);
          }
          if (-1 < (int)uVar8) {
            *PTR_gFlagListenInProgress_004684f0 = 0;
            return uVar8;
          }
          uVar16 = (*(code *)PTR_rand_00468844)();
          uVar16 = uVar16 & 0x80000003;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
          }
          (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3c8c,uVar16 * 1000);
          (*(code *)PTR_mSecSleep_004682d4)(uVar16 * 1000);
          if (uVar8 != 0xfffff445) break;
          iVar12 = (*(code *)PTR_time_00468800)(0);
          param_2 = param_2 - (iVar12 - local_40);
        } while (0 < param_2);
        puVar5 = PTR_PPPP__Reset_Session_00468318;
        *PTR_gFlagListenInProgress_004684f0 = 0;
        (*(code *)puVar5)(local_50,0);
        return uVar8;
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x5944,local_3c);
      uVar8 = 0xfffff437;
    }
  }
  else {
    uVar8 = 0xfffff444;
  }
  return uVar8;
}



// ==== PPPP_Listen_Break @ 004254c4 size=64

undefined4 PPPP_Listen_Break(void)

{
  if (*PTR_gFlagInitialized_0046829c != '\0') {
    *PTR_gFlagUserBreakListen_004685a4 = 1;
    *(undefined4 *)PTR_gListenTimeOut_00468584 = 0;
    return 0;
  }
  return 0xfffff447;
}



// ==== PPPP_Proto_Generate_SeqNum @ 00425fd0 size=96

/* tnp::PPPP_Proto_Generate_SeqNum() */

int tnp::PPPP_Proto_Generate_SeqNum(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gSeqNumLock_004685cc);
  puVar2 = PTR_gSeqNumLock_004685cc;
  puVar1 = PTR_MUTEX_RELEASE_004682b4;
  iVar3 = *(int *)PTR_gSeqNum_004685d0;
  *(int *)PTR_gSeqNum_004685d0 = iVar3 + 1;
  (*(code *)puVar1)(puVar2);
  return iVar3;
}



// ==== PPPP__Timer_Init @ 00426030 size=88

/* tnp::PPPP__Timer_Init() */

void tnp::PPPP__Timer_Init(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_gTimerLock_004685d8;
  puVar1 = PTR_gTimer_004685d4;
  UNRECOVERED_JUMPTABLE = PTR_MUTEX_INIT_0046830c;
  *(undefined4 *)(PTR_gTimer_004685d4 + 4) = 0;
  *(undefined4 *)puVar1 = 0;
  (*(code *)UNRECOVERED_JUMPTABLE)(puVar2);
  puVar1 = PTR_gSeqNumLock_004685cc;
  *(undefined4 *)PTR_gExitTimerThread_004685dc = 0;
  UNRECOVERED_JUMPTABLE = PTR_MUTEX_INIT_0046830c;
  *(undefined4 *)PTR_hthread_timer_004685e0 = 0;
                    /* WARNING: Could not recover jumptable at 0x00426080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(puVar1);
  return;
}



// ==== PPPP__Timer_Thread_Check @ 00426088 size=88

/* tnp::PPPP__Timer_Thread_Check() */

void tnp::PPPP__Timer_Thread_Check(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  puVar3 = PTR_PPPP__thread_timer_004685e4;
  puVar2 = PTR_hthread_timer_004685e0;
  puVar1 = PTR_CreateWorkerThread_00468408;
  if (*(int *)PTR_hthread_timer_004685e0 == 0) {
    *(undefined4 *)PTR_gExitTimerThread_004685dc = 0;
    uVar4 = (*(code *)puVar1)(puVar3,0);
    *(undefined4 *)puVar2 = uVar4;
  }
  return;
}



// ==== PPPP__Timer_Push @ 004260e0 size=240

/* tnp::PPPP__Timer_Push(tnp::st_PPPP_TimerElement_t*) */

undefined4 tnp::PPPP__Timer_Push(st_PPPP_TimerElement_t *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar3 = PTR_gTimerLock_004685d8;
  puVar2 = PTR_MUTEX_LOCK_004682a0;
  *(undefined4 *)(param_1 + 0x514) = 0;
  (*(code *)puVar2)(puVar3);
  puVar2 = PTR_gTimer_004685d4;
  puVar4 = *(uint **)PTR_gTimer_004685d4;
  if (puVar4 == (uint *)0x0) {
    *(st_PPPP_TimerElement_t **)(PTR_gTimer_004685d4 + 4) = param_1;
    *(st_PPPP_TimerElement_t **)puVar2 = param_1;
  }
  else {
    uVar5 = *(uint *)param_1;
    if (*puVar4 < uVar5) {
      if (uVar5 < **(uint **)(PTR_gTimer_004685d4 + 4)) {
        uVar6 = *(uint *)puVar4[0x145];
        puVar1 = (uint *)puVar4[0x145];
        while (uVar6 < uVar5) {
          uVar6 = *(uint *)puVar1[0x145];
          puVar4 = puVar1;
          puVar1 = (uint *)puVar1[0x145];
        }
        puVar4[0x145] = (uint)param_1;
        *(uint **)(param_1 + 0x514) = puVar1;
      }
      else {
        (*(uint **)(PTR_gTimer_004685d4 + 4))[0x145] = (uint)param_1;
        *(st_PPPP_TimerElement_t **)(puVar2 + 4) = param_1;
      }
    }
    else {
      *(uint **)(param_1 + 0x514) = puVar4;
      *(st_PPPP_TimerElement_t **)puVar2 = param_1;
    }
  }
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gTimerLock_004685d8);
  return 0;
}



// ==== PPPP__Timer_Pop @ 004261d0 size=128

/* tnp::PPPP__Timer_Pop() */

int tnp::PPPP__Timer_Pop(void)

{
  undefined *puVar1;
  int iVar2;
  
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gTimerLock_004685d8);
  puVar1 = PTR_gTimer_004685d4;
  iVar2 = *(int *)PTR_gTimer_004685d4;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x514) == 0) {
      *(undefined4 *)(PTR_gTimer_004685d4 + 4) = 0;
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *(int *)PTR_gTimer_004685d4 = *(int *)(iVar2 + 0x514);
    }
  }
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gTimerLock_004685d8);
  return iVar2;
}



// ==== PPPP__Timer_Delete @ 00426250 size=284

/* tnp::PPPP__Timer_Delete(unsigned int) */

void tnp::PPPP__Timer_Delete(uint param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_gTimer_004685d4;
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gTimerLock_004685d8);
  puVar4 = PTR_free_004687a8;
  puVar3 = PTR_gTimer_004685d4;
  iVar5 = *(int *)puVar2;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x514);
    if (iVar6 == 0) {
      if (*(uint *)(iVar5 + 8) == param_1) {
        (*(code *)PTR_free_004687a8)();
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)puVar2 = 0;
      }
    }
    else if (*(uint *)(iVar5 + 8) == param_1) {
      *(int *)puVar2 = iVar6;
      (*(code *)puVar4)();
    }
    else {
      do {
        if (*(uint *)(iVar6 + 8) == param_1) {
          if (*(int *)(puVar2 + 4) == iVar6) {
            *(undefined4 *)(iVar5 + 0x514) = 0;
            *(int *)(puVar3 + 4) = iVar5;
          }
          else {
            *(undefined4 *)(iVar5 + 0x514) = *(undefined4 *)(iVar6 + 0x514);
          }
          (*(code *)PTR_free_004687a8)(iVar6);
          (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gTimerLock_004685d8);
          return;
        }
        piVar1 = (int *)(iVar6 + 0x514);
        iVar5 = iVar6;
        iVar6 = *piVar1;
      } while (*piVar1 != 0);
    }
  }
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gTimerLock_004685d8);
  return;
}



// ==== PPPP__Timer_Timeout @ 0042636c size=164

/* tnp::PPPP__Timer_Timeout() */

bool tnp::PPPP__Timer_Timeout(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR_getCurTime_004682c8)();
  uVar1 = (*(code *)PTR___udivdi3_004682f0)((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gTimerLock_004685d8);
  if (*(uint **)PTR_gTimer_004685d4 == (uint *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = **(uint **)PTR_gTimer_004685d4 <= uVar1;
  }
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gTimerLock_004685d8);
  return bVar2;
}



// ==== PPPP__Timer_RemoveMaxElapse @ 00426410 size=376

/* tnp::PPPP__Timer_RemoveMaxElapse() */

void tnp::PPPP__Timer_RemoveMaxElapse(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  
  puVar3 = PTR_gTimer_004685d4;
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gTimerLock_004685d8);
  iVar6 = *(int *)puVar3;
  if (iVar6 != 0) {
    uVar9 = *(uint *)(iVar6 + 4);
    if (600 < uVar9) {
      puVar7 = PTR_DAT_00468298 + -0x38b8;
      do {
        puVar2 = PTR_PPPP_DebugTrace_00468294;
        uVar5 = *(undefined4 *)(iVar6 + 8);
        uVar1 = *(undefined1 *)(iVar6 + 0xc);
        *(undefined4 *)puVar3 = *(undefined4 *)(iVar6 + 0x514);
        (*(code *)puVar2)(0x100,puVar7,uVar5,uVar1,uVar9);
        (*(code *)PTR_free_004687a8)(iVar6);
        iVar6 = *(int *)puVar3;
        if (iVar6 == 0) {
          *(undefined4 *)(PTR_gTimer_004685d4 + 4) = 0;
          goto LAB_004264c8;
        }
        uVar9 = *(uint *)(iVar6 + 4);
      } while (600 < uVar9);
    }
    if (*(int *)(iVar6 + 0x514) != 0) {
      puVar7 = PTR_DAT_00468298 + -0x38b8;
      iVar4 = *(int *)(iVar6 + 0x514);
      do {
        while (iVar8 = iVar4, puVar2 = PTR_PPPP_DebugTrace_00468294, uVar9 = *(uint *)(iVar8 + 4),
              600 < uVar9) {
          uVar5 = *(undefined4 *)(iVar8 + 8);
          uVar1 = *(undefined1 *)(iVar8 + 0xc);
          *(undefined4 *)(iVar6 + 0x514) = *(undefined4 *)(iVar8 + 0x514);
          (*(code *)puVar2)(0x100,puVar7,uVar5,uVar1,uVar9);
          (*(code *)PTR_free_004687a8)(iVar8);
          iVar4 = *(int *)(iVar6 + 0x514);
          if (*(int *)(iVar6 + 0x514) == 0) {
            *(int *)(puVar3 + 4) = iVar6;
LAB_00426520:
            (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gTimerLock_004685d8);
            return;
          }
        }
        iVar6 = iVar8;
        iVar4 = *(int *)(iVar8 + 0x514);
      } while (*(int *)(iVar8 + 0x514) != 0);
      *(int *)(puVar3 + 4) = iVar8;
      goto LAB_00426520;
    }
  }
LAB_004264c8:
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gTimerLock_004685d8);
  return;
}



// ==== PPPP__thread_timer @ 00426588 size=1064

/* tnp::PPPP__thread_timer(void*) */

void tnp::PPPP__thread_timer(void *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 local_558 [320];
  undefined1 auStack_58 [2];
  ushort local_56;
  undefined4 local_54;
  undefined2 local_48;
  undefined2 local_46;
  undefined1 uStack_44;
  char local_43 [3];
  uint local_40;
  undefined4 *local_3c;
  undefined2 *local_38;
  undefined1 *local_34;
  uint local_30;
  int local_2c;
  
  local_3c = local_558;
  (*(code *)PTR_memset_00468810)(local_3c,0,0x500);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x3878);
  uVar4 = (*(code *)PTR_CreateSocket_004683c8)(0);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x5710,uVar4);
  local_48 = 0;
  iVar5 = (*(code *)PTR_TryBindPort_004683d0)(uVar4,&local_48);
  if (iVar5 < 0) {
    (*(code *)PTR_CloseSocket_004683b4)(uVar4);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x3858,uVar4);
  }
  else if (*(int *)PTR_gExitTimerThread_004685dc == 0) {
    local_34 = &uStack_44;
    local_40 = 0;
    local_38 = &local_46;
    do {
      if (local_40 == (local_40 / 0x3c) * 0x3c) {
        (*(code *)PTR_PPPP__Timer_RemoveMaxElapse_004685e8)();
      }
      puVar10 = PTR_gP2PServerAddr_004682a8;
      iVar5 = (*(code *)PTR_PPPP__Timer_Timeout_004685ec)();
      while (puVar12 = PTR_gP2PServerAddr_004682a8, iVar5 == 1) {
        iVar5 = 0;
        piVar6 = (int *)(*(code *)PTR_PPPP__Timer_Pop_004685f0)();
        do {
          iVar7 = (*(code *)PTR_SendMessage_0046856c)(piVar6 + 5,piVar6[4],uVar4,puVar12);
          if (iVar7 < 0) {
            local_2c = piVar6[2];
            local_30 = (uint)*(byte *)(piVar6 + 3);
            uVar8 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(puVar10 + iVar5 * 0x10 + 4));
            uVar1 = *(ushort *)(puVar12 + 2);
            puVar9 = PTR_DAT_00468298 + -0x382c;
          }
          else {
            local_2c = piVar6[2];
            local_30 = (uint)*(byte *)(piVar6 + 3);
            uVar8 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(puVar10 + iVar5 * 0x10 + 4));
            uVar1 = *(ushort *)(puVar12 + 2);
            puVar9 = PTR_DAT_00468298 + -0x37fc;
          }
          iVar5 = iVar5 + 1;
          puVar12 = puVar12 + 0x10;
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (4,puVar9,local_30,local_2c,uVar8,uVar1 >> 8 | uVar1 << 8);
          puVar9 = PTR_PPPP__Timer_Push_004682fc;
        } while (iVar5 != 3);
        piVar6[1] = piVar6[1] + 10;
        *piVar6 = *piVar6 + 10;
        (*(code *)puVar9)(piVar6);
        iVar5 = (*(code *)PTR_PPPP__Timer_Timeout_004685ec)();
      }
      iVar5 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                        (uVar4,auStack_58,1000,local_43,&local_46,local_558,0x500,&uStack_44);
      cVar3 = local_43[0];
      uVar2 = local_46;
      if (iVar5 == 0) {
        uVar8 = (*(code *)PTR_inet_ntoa_00468804)(local_54);
        (*(code *)PTR_PPPP_DebugTrace_00468294)
                  (0x400,PTR_DAT_00468298 + -0x66cc,cVar3,uVar2,uVar8,local_56 >> 8 | local_56 << 8)
        ;
        if (local_43[0] == -0x6d) {
          uVar8 = (*(code *)PTR___bswapsi2_004683d8)(local_558[0]);
          uVar11 = 0x93;
          puVar10 = PTR_DAT_00468298 + -0x37d8;
        }
        else {
          if (local_43[0] != -0x5c) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x376c);
            goto LAB_004267ec;
          }
          uVar8 = (*(code *)PTR___bswapsi2_004683d8)(local_558[0]);
          uVar11 = 0xa4;
          puVar10 = PTR_DAT_00468298 + -0x37a0;
        }
        (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar10,uVar11,uVar8);
        uVar8 = (*(code *)PTR___bswapsi2_004683d8)(local_558[0]);
        (*(code *)PTR_PPPP__Timer_Delete_004685f4)(uVar8);
      }
LAB_004267ec:
      local_40 = local_40 + 1;
    } while (*(int *)PTR_gExitTimerThread_004685dc == 0);
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x200,PTR_DAT_00468298 + -0x3750);
  (*(code *)PTR_pthread_exit_004688b4)(0);
  return;
}



// ==== PPPP__Timer_Clear @ 004269b0 size=120

/* tnp::PPPP__Timer_Clear() */

void tnp::PPPP__Timer_Clear(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_gTimer_004685d4;
  (*(code *)PTR_MUTEX_LOCK_004682a0)(PTR_gTimerLock_004685d8);
  iVar3 = *(int *)puVar1;
  while (puVar2 = PTR_free_004687a8, iVar3 != 0) {
    *(undefined4 *)puVar1 = *(undefined4 *)(iVar3 + 0x514);
    (*(code *)puVar2)();
    iVar3 = *(int *)puVar1;
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)puVar1 = 0;
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(PTR_gTimerLock_004685d8);
  return;
}



// ==== PPPP__Timer_UnInit @ 00426a28 size=112

/* tnp::PPPP__Timer_UnInit() */

void tnp::PPPP__Timer_UnInit(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_hthread_timer_004685e0;
  puVar1 = PTR_WaitThreadExit_00468404;
  *(undefined4 *)PTR_gExitTimerThread_004685dc = 1;
  (*(code *)puVar1)(puVar2);
  puVar1 = PTR_PPPP__Timer_Clear_004685f8;
  *(undefined4 *)PTR_hthread_timer_004685e0 = 0;
  (*(code *)puVar1)();
  (*(code *)PTR_MUTEX_DESTROY_0046834c)(PTR_gTimerLock_004685d8);
  (*(code *)PTR_MUTEX_DESTROY_0046834c)(PTR_gSeqNumLock_004685cc);
  return;
}



// ==== PPPP_Set_Sig_Key @ 00426a98 size=132

/* tnp::PPPP_Set_Sig_Key(unsigned int, char const*) */

undefined4 tnp::PPPP_Set_Sig_Key(uint param_1,char *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_gTNPSession_004682bc;
  (*(code *)PTR_strncpy_0046883c)
            (*(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20 + 0xf7,param_2,0x3f);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x10,PTR_DAT_00468298 + -0x3734,*(int *)puVar1 + param_1 * 0x3f20 + 0xf7);
  return 0;
}



// ==== PPPP_Calc_P2p_Pkt_Loss_Ratio @ 00426b1c size=192

/* tnp::PPPP_Calc_P2p_Pkt_Loss_Ratio(unsigned int) */

void tnp::PPPP_Calc_P2p_Pkt_Loss_Ratio(uint param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
  if (*(char *)(iVar2 + 8) != '\0') {
    *(undefined2 *)(iVar2 + 0x3f0e) = 0;
    return;
  }
  uVar3 = (uint)*(ushort *)(iVar2 + 0x3f0a);
  if ((uVar3 % 100 == 0) && (uVar3 != 0)) {
    uVar1 = *(ushort *)(iVar2 + 0x3f0c);
    if (uVar3 <= uVar1) {
      *(undefined2 *)(iVar2 + 0x3f0e) = 0;
      *(undefined2 *)(iVar2 + 0x3f0a) = 0;
      *(undefined2 *)(iVar2 + 0x3f0c) = 0;
      return;
    }
    *(undefined2 *)(iVar2 + 0x3f0a) = 0;
    *(undefined2 *)(iVar2 + 0x3f0c) = 0;
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    *(short *)(iVar2 + 0x3f0e) = (short)((int)((uVar3 - uVar1) * 100) / (int)uVar3);
  }
  return;
}



// ==== PPPP_Proto_Send_Alive_with_conuter @ 00426bdc size=84

/* tnp::PPPP_Proto_Send_Alive_with_conuter(unsigned int, int, char, sockaddr_in*) */

void tnp::PPPP_Proto_Send_Alive_with_conuter
               (uint param_1,int param_2,char param_3,sockaddr_in *param_4)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
    *(short *)(iVar1 + 0x3f0a) = *(short *)(iVar1 + 0x3f0a) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00426c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_PPPP_Proto_Send_Alive_004685fc)(param_2,(int)param_3,param_4);
  return;
}



// ==== PPPP__ConnectWithNonBlockSocket @ 00426c30 size=900

/* tnp::PPPP__ConnectWithNonBlockSocket(int, sockaddr*, int) */

int tnp::PPPP__ConnectWithNonBlockSocket(int param_1,sockaddr *param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint local_b8 [32];
  uint local_38 [5];
  
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2->sa_data + 2));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x372c,param_1,uVar2,
             *(ushort *)param_2->sa_data >> 8 | *(ushort *)param_2->sa_data << 8);
  (*(code *)PTR_SetSocketNonBlock_00468600)(param_1);
  iVar3 = (*(code *)PTR_ConnectAddress_00468604)(param_1,param_2);
  if (iVar3 < 0) {
    piVar4 = (int *)(*(code *)PTR___errno_location_004687d0)();
    iVar6 = *piVar4;
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2->sa_data + 2));
    uVar1 = *(ushort *)param_2->sa_data;
    uVar5 = (*(code *)PTR_strerror_004688c0)(iVar6);
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (1,PTR_DAT_00468298 + -0x36f0,param_1,uVar2,uVar1 >> 8 | uVar1 << 8,iVar3,iVar6,uVar5)
    ;
    if (iVar6 == 0x96) {
      puVar7 = local_b8;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (local_38 != puVar7);
      puVar7 = local_b8 + ((uint)param_1 >> 5);
      local_38[0] = param_3;
      *puVar7 = 1 << (param_1 & 0x1fU) | *puVar7;
      local_38[1] = 0;
      iVar3 = (*(code *)PTR_select_00468878)(param_1 + 1,0,local_b8,0,local_38);
      if (iVar3 < 1) {
        iVar3 = -2;
        uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2->sa_data + 2));
        (*(code *)PTR_PPPP_DebugTrace_00468294)
                  (1,PTR_DAT_00468298 + -0x36ac,param_1,uVar2,
                   *(ushort *)param_2->sa_data >> 8 | *(ushort *)param_2->sa_data << 8);
      }
      else {
        local_38[2] = 4;
        (*(code *)PTR_getsockopt_004687dc)(param_1,0xffff,0x1007,local_38 + 3,local_38 + 2);
        if (local_38[3] == 0) {
          iVar3 = 0;
          uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2->sa_data + 2));
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (1,PTR_DAT_00468298 + -0x3634,param_1,uVar2,
                     *(ushort *)param_2->sa_data >> 8 | *(ushort *)param_2->sa_data << 8);
        }
        else {
          iVar6 = *piVar4;
          uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
          uVar1 = *(ushort *)param_2->sa_data;
          uVar5 = (*(code *)PTR_strerror_004688c0)(iVar6);
          iVar3 = -1;
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (1,PTR_DAT_00468298 + -0x367c,param_1,uVar2,uVar1 >> 8 | uVar1 << 8,local_38[3],
                     iVar6,uVar5);
        }
      }
    }
    else {
      iVar3 = -1;
    }
  }
  (*(code *)PTR_SetSocketBlock_00468608)(param_1);
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2->sa_data + 2));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (1,PTR_DAT_00468298 + -0x3604,param_1,uVar2,
             *(ushort *)param_2->sa_data >> 8 | *(ushort *)param_2->sa_data << 8);
  return iVar3;
}



// ==== PPPP_Write_Block @ 00427318 size=284

/* tnp::PPPP_Write_Block(int, unsigned char, char*, int) */

int tnp::PPPP_Write_Block(int param_1,uchar param_2,char *param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_gTNPSession_004682bc;
  iVar4 = param_1 * 0x3f20;
  uVar1 = (uint)param_2;
  iVar3 = (*(code *)PTR_sll_element_Allocate_00468614)
                    (*(undefined2 *)(*(int *)PTR_gTNPSession_004682bc + iVar4 + (uVar1 + 0x24c) * 2)
                     ,param_4);
  if (iVar3 == 0) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x34c0);
    param_4 = -1;
  }
  else {
    (*(code *)PTR_memcpy_00468898)(*(undefined4 *)(iVar3 + 8),param_3,param_4);
    (*(code *)PTR_sll_Put_00468618)(*(int *)puVar2 + iVar4 + uVar1 * 0x1c + 0x1f8,iVar3);
    iVar4 = *(int *)puVar2 + iVar4 + uVar1 * 2;
    *(short *)(iVar4 + 0x498) = *(short *)(iVar4 + 0x498) + 1;
  }
  return param_4;
}



// ==== PPPP__Set_Session_State @ 00427470 size=88

/* tnp::PPPP__Set_Session_State(int, unsigned char) */

void tnp::PPPP__Set_Session_State(int param_1,uchar param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = PTR_time_00468800;
  iVar3 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
  *(uchar *)(iVar3 + 0x1d0) = param_2;
  uVar2 = (*(code *)puVar1)(0);
  *(undefined4 *)(iVar3 + 0x1d4) = uVar2;
  return;
}



// ==== PPPP__Reset_Session @ 004274c8 size=316

/* tnp::PPPP__Reset_Session(int, tnp::SESSION_RESET_FLAG) */

void tnp::PPPP__Reset_Session(int param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_gTNPSession_004682bc;
  if (param_2 == 2) {
    puVar2 = (undefined1 *)(*(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20);
    uVar7 = *(undefined4 *)(puVar2 + 0xc);
    uVar8 = *(undefined4 *)(puVar2 + 4);
    uVar4 = *puVar2;
  }
  else {
    uVar8 = 0xffffffff;
    uVar7 = 0xffffffff;
    uVar6 = 0;
    puVar2 = (undefined1 *)(*(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20);
    uVar4 = 0;
    if (param_2 == 1) {
      uVar4 = puVar2[1];
      uVar5 = puVar2[0xf0];
      uVar3 = puVar2[0x139];
      goto LAB_00427540;
    }
  }
  uVar6 = uVar4;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
LAB_00427540:
  (*(code *)PTR_memset_00468810)(puVar2,0,0x3f20);
  puVar2 = (undefined1 *)(*(int *)puVar1 + param_1 * 0x3f20);
  *puVar2 = uVar6;
  puVar2[1] = uVar4;
  puVar2[0xf0] = uVar5;
  puVar2[0x139] = uVar3;
  puVar2[0x1a5] = 1;
  puVar2[0x1a6] = 1;
  puVar2[0x1a7] = 1;
  puVar2[0x1c0] = 1;
  puVar2[0x1d0] = 0;
  puVar2[0x13b] = 0;
  *(undefined4 *)(puVar2 + 0xc) = uVar7;
  *(undefined4 *)(puVar2 + 4) = uVar8;
  *(undefined4 *)(puVar2 + 0x140) = 0;
  *(undefined4 *)(puVar2 + 0x144) = 0;
  *(undefined4 *)(puVar2 + 0x148) = 0;
  *(undefined4 *)(puVar2 + 0x14c) = 0;
  *(undefined4 *)(puVar2 + 0x150) = 0;
  return;
}



// ==== PPPP__Halt_TCP_For_Session @ 00427604 size=180

/* tnp::PPPP__Halt_TCP_For_Session(int) */

void tnp::PPPP__Halt_TCP_For_Session(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_WaitThreadExit_00468404;
  puVar1 = PTR_gTNPSession_004682bc;
  iVar4 = param_1 * 0x3f20;
  iVar3 = *(int *)PTR_gTNPSession_004682bc;
  *(undefined1 *)(iVar3 + iVar4 + 0xf4) = 1;
  (*(code *)puVar2)(iVar3 + iVar4 + 0x150);
  iVar3 = *(int *)puVar1 + iVar4;
  if ((-1 < *(int *)(iVar3 + 4)) && (*(char *)(iVar3 + 8) == '\x01')) {
    (*(code *)PTR_CloseSocket_004683b4)();
    iVar4 = *(int *)puVar1 + iVar4;
    *(undefined1 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 4) = 0xffffffff;
    return;
  }
  return;
}



// ==== PPPP__Update_Session_State @ 004276b8 size=356

/* tnp::PPPP__Update_Session_State(int, unsigned char) */

void tnp::PPPP__Update_Session_State(int param_1,uchar param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = PTR_gTNPSession_004682bc;
  iVar4 = param_1 * 0x3f20;
  bVar1 = *(byte *)(*(int *)PTR_gTNPSession_004682bc + iVar4 + 0x1d0);
  if (((bVar1 != 6) && (bVar1 != 0x20)) && (bVar1 != 0x29)) {
    if (((param_2 == '\x06') || (param_2 == ' ')) || ((param_2 == ')' || (bVar1 < param_2)))) {
LAB_004277e4:
                    /* WARNING: Could not recover jumptable at 0x004277f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_PPPP__Set_Session_State_00468398)(param_1,param_2);
      return;
    }
    if (param_2 < bVar1) {
      uVar5 = 10;
      if ((5 < bVar1) && (uVar5 = 0, bVar1 < 0x29)) {
        uVar5 = 0x14;
      }
      iVar3 = (*(code *)PTR_time_00468800)(0);
      if (uVar5 < (uint)(iVar3 - *(int *)(*(int *)puVar2 + iVar4 + 0x1d4))) {
        if ((0x20 < *(byte *)(*(int *)puVar2 + iVar4 + 0x1d0)) && (param_2 < 0x29)) {
          (*(code *)PTR_PPPP__Halt_TCP_For_Session_004683a0)(param_1);
          iVar4 = *(int *)PTR_gTNPSession_004682bc + iVar4;
          *(undefined1 *)(iVar4 + 8) = 0;
          *(undefined1 *)(iVar4 + 1) = 0;
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 0xc);
        }
        goto LAB_004277e4;
      }
    }
  }
  return;
}



// ==== PPPP__Start_TCP_For_Session @ 0042781c size=344

/* tnp::PPPP__Start_TCP_For_Session(int, sockaddr*, int) */

int tnp::PPPP__Start_TCP_For_Session(int param_1,sockaddr *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar3 = (*(code *)PTR_CreateSocket_004683c8)(1);
  if (iVar3 < 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = (*(code *)PTR_PPPP__ConnectWithNonBlockSocket_00468624)(iVar3,param_2,param_3);
    if (iVar4 < 0) {
      puVar6 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
      uVar8 = *puVar6;
      uVar5 = (*(code *)PTR_strerror_004688c0)(uVar8);
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x34a4,uVar8,uVar5);
      (*(code *)PTR_CloseSocket_004683b4)(iVar3);
      return iVar4;
    }
    (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x22);
    puVar2 = PTR_PPPP_thread_recv_Relay_TCP_00468628;
    puVar1 = PTR_CreateWorkerThread_00468408;
    iVar7 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
    *(int *)(iVar7 + 4) = iVar3;
    *(undefined1 *)(iVar7 + 8) = 1;
    *(undefined1 *)(iVar7 + 0xf4) = 0;
    *(undefined1 *)(iVar7 + 0x13b) = 0;
    uVar5 = (*(code *)puVar1)(puVar2,param_1);
    *(undefined4 *)(iVar7 + 0x150) = uVar5;
  }
  return iVar4;
}



// ==== PPPP__CheckValidDID @ 00427b40 size=160

/* tnp::PPPP__CheckValidDID(char const*) */

int tnp::PPPP__CheckValidDID(char *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == (char *)0x0) || (0x19 < (byte)(*param_1 + 0xbfU))) {
    return -1;
  }
  iVar3 = 0;
  iVar2 = 0;
  do {
    bVar1 = param_1[iVar3];
    if (bVar1 == 0x2d) {
      iVar2 = iVar2 + 1;
    }
    else if ((bVar1 == 0) || ((0x19 < (bVar1 & 0xffffffdf) - 0x41 && (9 < bVar1 - 0x30)))) {
      return -(uint)(iVar2 != 2);
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x40) {
      return -(uint)(iVar2 != 2);
    }
  } while( true );
}



// ==== PPPP__ParseDID @ 00427be0 size=428

/* tnp::PPPP__ParseDID(char const*, char*, int, int*, char*, int) */

undefined4
tnp::PPPP__ParseDID(char *param_1,char *param_2,int param_3,int *param_4,char *param_5,int param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_60 [64];
  
  (*(code *)PTR_memset_00468810)(auStack_60,0,0x40);
  iVar2 = (*(code *)PTR_PPPP__CheckValidDID_004683e0)(param_1);
  if (iVar2 == 0) {
    (*(code *)PTR_strncpy_0046883c)(auStack_60,param_1,0x40);
    puVar3 = (undefined1 *)(*(code *)PTR_strchr_004687bc)(auStack_60,0x2d);
    *puVar3 = 0;
    (*(code *)PTR_strncpy_0046883c)(param_2,auStack_60,param_3);
    puVar4 = (undefined1 *)(*(code *)PTR_strchr_004687bc)(puVar3 + 1,0x2d);
    puVar1 = PTR_atoi_004687c8;
    *puVar4 = 0;
    iVar2 = (*(code *)puVar1)(puVar3 + 1);
    puVar1 = PTR_strncpy_0046883c;
    *param_4 = iVar2;
    (*(code *)puVar1)(param_5,puVar4 + 1,param_6);
    uVar5 = (*(code *)PTR_strnlen_00468864)(param_2,8);
    if (((uVar5 < 8) && (uVar5 = (*(code *)PTR_strnlen_00468864)(param_5,8), uVar5 < 8)) &&
       (-1 < *param_4)) {
      return 0;
    }
  }
  return 0xfffff444;
}



// ==== PPPP__GetLocalAddress @ 00427d8c size=292

/* tnp::PPPP__GetLocalAddress(sockaddr_in*, sockaddr_in*) */

undefined4 tnp::PPPP__GetLocalAddress(sockaddr_in *param_1,sockaddr_in *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_20 [3];
  
  iVar1 = (*(code *)PTR_CreateSocket_004683c8)(0);
  if (iVar1 < 0) {
    uVar2 = 0xfffff430;
  }
  else {
    local_20[0] = 0x80;
    (*(code *)PTR_memset_00468810)(&local_a0,0,0x80);
    (*(code *)PTR_ConnectAddress_00468604)(iVar1,param_1);
    (*(code *)PTR_getsockname_004687a4)(iVar1,&local_a0,local_20);
    if ((short)local_a0 == 10) {
      (*(code *)PTR_memset_00468810)(param_2,0,0x10);
    }
    else {
      *(undefined4 *)param_2 = local_a0;
      *(undefined4 *)(param_2 + 4) = local_9c;
      *(undefined4 *)(param_2 + 8) = local_98;
      *(undefined4 *)(param_2 + 0xc) = local_94;
    }
    (*(code *)PTR_CloseSocket_004683b4)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== PPPP__ConnectTcpServer @ 00427eb0 size=492

/* tnp::PPPP__ConnectTcpServer(sockaddr_in*, int, int*, int, int) */

int tnp::PPPP__ConnectTcpServer
              (sockaddr_in *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  
  iVar1 = (*(code *)PTR_time_00468800)(0);
  (*(code *)PTR_srand_0046880c)(iVar1);
  iVar2 = (*(code *)PTR_rand_00468844)();
  if (0 < param_2) {
    iVar5 = 0;
    puVar6 = PTR_DAT_00468298 + -0x3468;
    do {
      iVar3 = (*(code *)PTR_time_00468800)(0);
      if (param_5 < iVar3 - iVar1) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3488);
        return -1;
      }
      iVar3 = (*(code *)PTR_CreateSocket_004683c8)();
      if (iVar3 < 0) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar6,iVar3);
LAB_00427ff0:
        iVar3 = 100;
        pcVar7 = (code *)PTR_mSecSleep_004682d4;
      }
      else {
        iVar8 = (iVar5 + iVar2) % param_2;
        if (param_2 == 0) {
          trap(0x1c00);
        }
        (*(code *)PTR_PPPP_DebugTrace_00468294)();
        iVar4 = (*(code *)PTR_PPPP__ConnectWithNonBlockSocket_00468624)
                          (iVar3,param_1 + iVar8 * 0x10,param_4);
        pcVar7 = (code *)PTR_CloseSocket_004683b4;
        if (iVar4 != -2) {
          if (iVar4 != -1) {
            *param_3 = iVar8;
            return iVar3;
          }
          (*(code *)PTR_CloseSocket_004683b4)(iVar3);
          goto LAB_00427ff0;
        }
      }
      iVar5 = iVar5 + 1;
      (*pcVar7)(iVar3);
    } while (iVar5 != param_2);
  }
  return -1;
}



// ==== PPPP__Check_Session_Data_Ready @ 0042809c size=172

/* tnp::PPPP__Check_Session_Data_Ready(char*, unsigned short, unsigned short*, unsigned char*) */

undefined4
tnp::PPPP__Check_Session_Data_Ready(char *param_1,ushort param_2,ushort *param_3,uchar *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)param_2;
  if (-1 < (int)((uVar1 - 4) * 0x10000) >> 0x10) {
    if (*param_1 == -0xf) {
      *param_4 = param_1[1];
      uVar3 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff) << 8;
      uVar2 = uVar3 + 4;
    }
    else {
      if ((int)((uVar1 - 0x1c) * 0x10000) >> 0x10 < 0) {
        return 0;
      }
      *param_4 = param_1[1];
      uVar3 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff) << 8;
      uVar2 = uVar3 + 0x1c;
    }
    if (uVar2 <= uVar1) {
      *param_3 = (ushort)uVar3;
      return 1;
    }
  }
  return 0;
}



// ==== PPPP__GetP2PServerAddr @ 00428148 size=1356

/* tnp::PPPP__GetP2PServerAddr(char*, int, char*, char*, char*) */

undefined4
tnp::PPPP__GetP2PServerAddr(char *param_1,int param_2,char *param_3,char *param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined2 *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  char local_8f0 [4];
  char acStack_8ec [14];
  char acStack_8de [1902];
  undefined1 auStack_170 [128];
  ushort local_f0 [64];
  undefined4 local_70;
  undefined4 local_6c [11];
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [4];
  char local_2c [4];
  
  local_70 = 0;
  local_6c[0] = 0;
  local_6c[1] = 0;
  local_6c[2] = 0;
  local_6c[3] = 0;
  local_6c[4] = 0;
  local_6c[5] = 0;
  local_6c[6] = 0;
  local_6c[7] = 0;
  local_6c[8] = 0;
  local_6c[9] = 0;
  local_6c[10] = 0;
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    return 0xfffff431;
  }
  iVar2 = (*(code *)PTR_gethostbyname_004687f4)(param_4);
  if (iVar2 == 0) {
    uVar5 = 0xfffff441;
  }
  else {
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_40 = 2;
    local_3e = 0xc87d;
    (*(code *)PTR_memcpy_00468898)
              (&local_3c,**(undefined4 **)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0xc));
    iVar2 = (*(code *)PTR_PPPP__ConnectTcpServer_004683b8)(&local_40,1,auStack_30,0x1e,0x14);
    if (-1 < iVar2) {
      iVar3 = (*(code *)PTR_PPPP_Proto_Send_P2PServerReq_0046862c)
                        (iVar2,1,&local_40,param_1,param_2,param_3,0,PTR_gDefaultSigKey_00468424);
      if (-1 < iVar3) {
        iVar3 = (*(code *)PTR_time_00468800)(0);
        iVar4 = (*(code *)PTR_time_00468800)(0);
        if (iVar4 - iVar3 < 0x1e) {
          uVar6 = 0;
          do {
            local_f0[0] = 0;
            iVar4 = (*(code *)PTR_PPPP_Proto_Recv_TCP_004683a8)
                              (iVar2,local_8f0 + uVar6,0x780 - uVar6 & 0xffff,local_f0,
                               ((iVar3 - iVar4) + 0x1e) * 1000);
            if (iVar4 < 0) {
              (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3454);
LAB_00428370:
              (*(code *)PTR_CloseSocket_004683b4)(iVar2);
              return 0xffffffff;
            }
            uVar6 = uVar6 + local_f0[0] & 0xffff;
            iVar4 = (*(code *)PTR_PPPP__Check_Session_Data_Ready_004683ac)
                              (local_8f0,uVar6,auStack_170,local_2c);
            if (iVar4 == 1) {
              pcVar7 = acStack_8ec;
              if (local_8f0[0] != -0xf) {
                pcVar7 = acStack_8de + 10;
              }
              if (local_2c[0] == '\x05') {
                (*(code *)PTR_PPPP_DebugTrace_00468294)
                          (1,PTR_DAT_00468298 + -0x3430,(int)pcVar7[0xe]);
                if (pcVar7[0xe] == '\0') {
                  puVar12 = PTR_DAT_00468298 + -0x340c;
                  iVar3 = 0;
                  pcVar9 = pcVar7;
                  puVar11 = &local_70;
                  do {
                    (*(code *)PTR_memset_00468810)(puVar11,0,0x10);
                    uVar1 = *(ushort *)(pcVar7 + 0xc);
                    uVar5 = *(undefined4 *)pcVar9;
                    *(undefined2 *)puVar11 = 2;
                    puVar11[1] = uVar5;
                    uVar5 = local_6c[iVar3 * 4];
                    *(ushort *)((int)puVar11 + 2) = uVar1 >> 8 | uVar1 << 8;
                    pcVar9 = pcVar9 + 4;
                    uVar5 = (*(code *)PTR_inet_ntoa_00468804)(uVar5);
                    iVar4 = iVar3 + 1;
                    (*(code *)PTR_PPPP_DebugTrace_00468294)
                              (1,puVar12,iVar3,uVar5,*(undefined2 *)((int)puVar11 + 2));
                    iVar3 = iVar4;
                    puVar11 = puVar11 + 4;
                  } while (iVar4 != 3);
                  (*(code *)PTR_CloseSocket_004683b4)(iVar2);
                  (*(code *)PTR_memset_00468810)(local_f0,0,0x80);
                  (*(code *)PTR_memset_00468810)(auStack_170,0,0x80);
                  puVar10 = PTR_DAT_00468298 + -0x33f4;
                  iVar2 = 0;
                  puVar8 = (undefined2 *)((int)&local_70 + 2);
                  do {
                    uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_6c[iVar2 * 4]);
                    (*(code *)PTR_sprintf_004687f0)(local_f0,puVar10,local_f0,uVar5);
                    uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_6c[iVar2 * 4]);
                    iVar3 = iVar2 + 1;
                    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar12,iVar2,uVar5,*puVar8);
                    iVar2 = iVar3;
                    puVar8 = puVar8 + 8;
                  } while (iVar3 != 3);
                  iVar2 = (*(code *)PTR_PPPP_EncodeString_00468630)(local_f0,auStack_170,0x80);
                  if (iVar2 < 0) {
                    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x33ec);
                    return 0xffffffff;
                  }
                  (*(code *)PTR_strcpy_004688e0)(param_5,auStack_170);
                  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x33d0,local_f0);
                  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x33c4,param_5);
                  return 0;
                }
                goto LAB_00428370;
              }
              break;
            }
            iVar4 = (*(code *)PTR_time_00468800)(0);
          } while (iVar4 - iVar3 < 0x1e);
        }
      }
      (*(code *)PTR_CloseSocket_004683b4)(iVar2);
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// ==== PPPP__ResolveHostName @ 00428694 size=184

/* tnp::PPPP__ResolveHostName(char*, sockaddr_in*) */

undefined4 tnp::PPPP__ResolveHostName(char *param_1,sockaddr_in *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_gethostbyname_004687f4)();
  if (iVar1 == 0) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x3394,param_1);
    uVar2 = 0xfffff441;
  }
  else {
    (*(code *)PTR_memcpy_00468898)
              (param_2 + 4,**(undefined4 **)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc));
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x33b0,param_1,uVar2);
    uVar2 = 0;
  }
  return uVar2;
}



// ==== PPPP__DecodeServerString @ 0042874c size=812

/* tnp::PPPP__DecodeServerString(char*, sockaddr_in*, int) */

undefined4 tnp::PPPP__DecodeServerString(char *param_1,sockaddr_in *param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  sockaddr_in *psVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  char local_728 [1024];
  undefined1 auStack_328 [768];
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar5 = 0xfffff441;
  }
  else {
    if (param_3 == 1) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x3374,param_1);
    }
    (*(code *)PTR_memset_00468810)(local_728,0,0x400);
    (*(code *)PTR_memset_00468810)(auStack_328,0,0x300);
    (*(code *)PTR_PPPP_DecodeString_0046832c)(param_1,local_728,0x400);
    iVar3 = (*(code *)PTR_strlen_004687c0)(local_728);
    if (0 < iVar3) {
      iVar14 = 0;
      puVar12 = PTR_DAT_00468298 + -0x3354;
      iVar6 = 0;
      iVar9 = 1;
      pcVar10 = local_728;
      do {
        while (*pcVar10 == ',') {
          puVar13 = auStack_328 + iVar14 * 0x100;
          *pcVar10 = '\0';
          iVar14 = iVar14 + 1;
          (*(code *)PTR_strncpy_0046883c)(puVar13,local_728 + iVar6,0xff);
          pcVar10 = pcVar10 + 1;
          (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar12,iVar14,puVar13);
          bVar1 = iVar3 <= iVar9;
          iVar6 = iVar9;
          iVar9 = iVar9 + 1;
          if (bVar1) goto LAB_004288ac;
        }
        bVar1 = iVar9 < iVar3;
        pcVar10 = pcVar10 + 1;
        iVar9 = iVar9 + 1;
      } while (bVar1);
    }
LAB_004288ac:
    puVar12 = PTR_DAT_00468298 + -0x3340;
    psVar4 = param_2;
    puVar13 = auStack_328;
    do {
      (*(code *)PTR_memset_00468810)(psVar4,0,0x10);
      *(undefined2 *)psVar4 = 2;
      puVar2 = PTR_PPPP__ResolveHostName_00468634;
      puVar11 = puVar13 + 0x100;
      *(undefined2 *)(psVar4 + 2) = 0x647d;
      iVar3 = (*(code *)puVar2)(puVar13,psVar4);
      if (iVar3 != 0) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x57c8);
        return 0xfffff441;
      }
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,puVar12);
      psVar4 = psVar4 + 0x10;
      puVar13 = puVar11;
    } while (puVar11 != &stack0xffffffd8);
    uVar5 = 0;
    if (param_3 == 1) {
      (*(code *)PTR_strncpy_0046883c)(PTR_gLastServerString_0046843c,param_1,0x100);
      puVar12 = PTR_gLastServerAddr_00468468;
      iVar3 = 0;
      do {
        psVar4 = param_2 + iVar3;
        puVar15 = (undefined4 *)(puVar12 + iVar3);
        iVar3 = iVar3 + 0x10;
        uVar8 = *(undefined4 *)(psVar4 + 4);
        uVar7 = *(undefined4 *)(psVar4 + 8);
        uVar5 = *(undefined4 *)(psVar4 + 0xc);
        *puVar15 = *(undefined4 *)psVar4;
        puVar15[1] = uVar8;
        puVar15[2] = uVar7;
        puVar15[3] = uVar5;
      } while (iVar3 != 0x30);
      return 0;
    }
  }
  return uVar5;
}



// ==== PPPP__DoNetWorkDetect @ 00428a78 size=1956

/* tnp::PPPP__DoNetWorkDetect(st_PPPP_NetInfo*, unsigned short, char*, sockaddr_in*, sockaddr_in*,
   sockaddr_in*) */

int tnp::PPPP__DoNetWorkDetect
              (st_PPPP_NetInfo *param_1,ushort param_2,char *param_3,sockaddr_in *param_4,
              sockaddr_in *param_5,sockaddr_in *param_6)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined1 auStack_5a0 [1280];
  undefined4 local_a0 [12];
  ushort local_6e;
  undefined4 local_6c;
  undefined1 auStack_60 [2];
  ushort local_5e;
  undefined4 local_5c;
  uint local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  short local_48;
  undefined1 uStack_46;
  byte local_45 [5];
  int local_40;
  uint local_3c;
  st_PPPP_NetInfo *local_38;
  st_PPPP_NetInfo *local_34;
  uint local_30;
  uint local_2c;
  
  puVar3 = PTR_DAT_00468298;
  local_38 = param_1 + 0x14;
  local_3c = (uint)param_2;
  local_34 = param_1 + 4;
  local_50 = 0;
  local_4c = 0;
  (*(code *)PTR_memset_00468810)(auStack_5a0,0,0x500);
  puVar4 = PTR_strncpy_0046883c;
  param_1[1] = (st_PPPP_NetInfo)0x1;
  *param_1 = (st_PPPP_NetInfo)0x0;
  param_1[2] = (st_PPPP_NetInfo)0x0;
  (*(code *)puVar4)(local_38,puVar3 + -0x67d0,0x10);
  (*(code *)PTR_strncpy_0046883c)(local_34,puVar3 + -0x67d0,0x10);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3338);
  local_40 = (*(code *)PTR_PPPP__DecodeServerString_004683c4)(param_3,local_a0,1);
  if (local_40 == 0) {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x57c0);
    uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_a0[1]);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x57ac,uVar5);
    uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_a0[5]);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x57a0,uVar5);
    uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_a0[9]);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(8,PTR_DAT_00468298 + -0x5794,uVar5);
    *(undefined4 *)param_4 = local_a0[0];
    *(undefined4 *)(param_4 + 4) = local_a0[1];
    *(undefined4 *)(param_4 + 8) = local_a0[2];
    *(undefined4 *)(param_4 + 0xc) = local_a0[3];
    *(undefined4 *)param_5 = local_a0[4];
    *(undefined4 *)(param_5 + 4) = local_a0[5];
    *(undefined4 *)(param_5 + 8) = local_a0[6];
    *(undefined4 *)(param_5 + 0xc) = local_a0[7];
    *(undefined4 *)param_6 = local_a0[8];
    *(undefined4 *)(param_6 + 4) = local_a0[9];
    puVar4 = PTR_strncmp_00468840;
    puVar3 = PTR_gServerString_004682ac;
    *(undefined4 *)(param_6 + 8) = local_a0[10];
    *(undefined4 *)(param_6 + 0xc) = local_a0[0xb];
    iVar6 = (*(code *)puVar4)(puVar3,param_3,0x100);
    if (iVar6 == 0) {
      piVar16 = (int *)(PTR_gP2PTcpPortArray_00468444 + 0xc);
      puVar11 = local_a0;
      puVar12 = (undefined4 *)PTR_gP2PServerAddr_004682a8;
      puVar17 = (undefined4 *)PTR_gP2PTcpServerAddr_00468598;
      do {
        piVar7 = (int *)PTR_gP2PTcpPortArray_00468444;
        uVar15 = *puVar11;
        uVar14 = puVar11[1];
        uVar13 = puVar11[2];
        uVar5 = puVar11[3];
        *puVar12 = uVar15;
        puVar12[1] = uVar14;
        puVar12[2] = uVar13;
        puVar12[3] = uVar5;
        puVar19 = puVar17;
        do {
          iVar6 = *piVar7;
          piVar8 = piVar7 + 1;
          bVar1 = *(byte *)((int)piVar7 + 1);
          *puVar19 = uVar15;
          puVar19[1] = uVar14;
          puVar19[2] = uVar13;
          puVar19[3] = uVar5;
          *(ushort *)((int)puVar19 + 2) = (ushort)bVar1 | (ushort)(iVar6 << 8);
          piVar7 = piVar8;
          puVar19 = puVar19 + 4;
        } while (piVar8 != piVar16);
        puVar11 = puVar11 + 4;
        puVar12 = puVar12 + 4;
        puVar17 = puVar17 + 0xc;
      } while (puVar11 != (undefined4 *)&stack0xffffff90);
    }
    if (param_1[1] == (st_PPPP_NetInfo)0x0) {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x32fc);
    }
    else {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3314);
    }
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x32f0);
    iVar6 = (*(code *)PTR_CreateSocket_004683c8)(0);
    if (iVar6 < 0) {
      local_40 = -0xbd0;
    }
    else {
      (*(code *)PTR_SetSocketBroadcast_004683cc)(iVar6);
      local_4a = (undefined2)local_3c;
      iVar9 = (*(code *)PTR_TryBindPort_004683d0)(iVar6,&local_4a);
      if (iVar9 < 0) {
        (*(code *)PTR_CloseSocket_004683b4)(iVar6);
        local_40 = -0xbca;
      }
      else {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x61d8,local_4a);
        (*(code *)PTR_PPPP_Proto_Send_Hello_00468458)(iVar6,local_a0);
        (*(code *)PTR_PPPP_Proto_Send_Hello_00468458)(iVar6,local_a0 + 4);
        iVar9 = 3;
        (*(code *)PTR_PPPP_Proto_Send_Hello_00468458)(iVar6,local_a0 + 8);
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x32cc);
        local_3c = 0;
        do {
          while( true ) {
            if (iVar9 == 3) {
              uVar5 = 5000;
            }
            else {
              uVar5 = 1000;
            }
            iVar10 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                               (iVar6,auStack_60,uVar5,local_45,&local_48,auStack_5a0,0x500,
                                &uStack_46);
            if (iVar10 == 0) break;
            if (iVar10 < 0) goto LAB_00428ebc;
joined_r0x00429028:
            if (iVar9 < 1) goto LAB_00428ebc;
          }
          if ((local_45[0] != 1) || (local_48 != 0x10)) goto joined_r0x00429028;
          local_2c = (uint)local_45[0];
          (*(code *)PTR_ntohAddr_00468358)(auStack_5a0,&stack0xffffff90);
          uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_6c);
          (*(code *)PTR_strncpy_0046883c)(local_38,uVar5,0x10);
          (*(code *)PTR_strncpy_0046883c)(PTR_gNetInfo_004682e8 + 0x14,local_38,0x10);
          local_30 = (uint)(local_6e >> 8) | (local_6e & 0xff) << 8;
          *(short *)((int)&local_50 + (3 - iVar9) * 2) = (short)local_30;
          uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_5c);
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (2,PTR_DAT_00468298 + -0x32a0,uVar5,local_5e >> 8 | local_5e << 8);
          if ((ushort)(local_5e >> 8 | local_5e << 8) != 0x7d64) {
            local_3c = 1;
            goto joined_r0x00429028;
          }
          iVar9 = iVar9 + -1;
          (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3280,local_38,local_30);
          *param_1 = SUB41(local_2c,0);
          param_1[2] = SUB41(local_2c,0);
        } while (0 < iVar9);
LAB_00428ebc:
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3268);
        if (param_1[2] == (st_PPPP_NetInfo)0x1) {
          iVar9 = (*(code *)PTR_PPPP__GetLocalAddress_00468440)(auStack_60,&stack0xffffff90);
          if (-1 < iVar9) {
            uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_6c);
            (*(code *)PTR_strncpy_0046883c)(local_34,uVar5,0x10);
            (*(code *)PTR_strncpy_0046883c)(PTR_gNetInfo_004682e8 + 4,local_34,0x10);
          }
          (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3254,local_34);
          uVar5 = (*(code *)PTR_time_00468800)(0);
          *(undefined4 *)PTR_gLastNetDetectTime_00468314 = uVar5;
        }
        uVar18 = local_50 & 0xffff;
        uVar2 = local_50 >> 0x10;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3244,uVar18,uVar2,local_4c);
        if ((uVar18 == 0) || (uVar2 == 0)) {
          param_1[3] = (st_PPPP_NetInfo)0x0;
          uVar5 = 0;
        }
        else if (uVar18 == uVar2) {
          if (local_3c == 0) {
            uVar5 = 2;
            param_1[3] = (st_PPPP_NetInfo)0x2;
          }
          else {
            uVar5 = 1;
            param_1[3] = (st_PPPP_NetInfo)0x1;
          }
        }
        else {
          uVar5 = 3;
          param_1[3] = (st_PPPP_NetInfo)0x3;
        }
        (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x3210,uVar5);
        puVar3 = PTR_CloseSocket_004683b4;
        *(st_PPPP_NetInfo *)(PTR_gNetInfo_004682e8 + 3) = param_1[3];
        (*(code *)puVar3)(iVar6);
      }
    }
  }
  else {
    (*(code *)PTR_PPPP_DebugTrace_00468294)(2,PTR_DAT_00468298 + -0x57c8);
    local_40 = -0xbbf;
    param_1[1] = (st_PPPP_NetInfo)0x0;
  }
  return local_40;
}



// ==== PPPP___Dump_Session_Info @ 00429338 size=1196

/* tnp::PPPP___Dump_Session_Info(int) */

void tnp::PPPP___Dump_Session_Info(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x20,PTR_DAT_00468298 + -0x31e0,param_1);
  puVar3 = PTR_gTNPSession_004682bc;
  iVar6 = param_1 * 0x3f20;
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x31b4,
             *(undefined4 *)(*(int *)PTR_gTNPSession_004682bc + iVar6 + 4));
  uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(*(int *)puVar3 + iVar6 + 0xac));
  uVar2 = *(ushort *)(*(int *)puVar3 + iVar6 + 0xaa);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x31a4,uVar4,uVar2 >> 8 | uVar2 << 8);
  uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(*(int *)puVar3 + iVar6 + 0xbc));
  uVar2 = *(ushort *)(*(int *)puVar3 + iVar6 + 0xba);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3190,uVar4,uVar2 >> 8 | uVar2 << 8);
  uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(*(int *)puVar3 + iVar6 + 0xcc));
  uVar2 = *(ushort *)(*(int *)puVar3 + iVar6 + 0xca);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3178,uVar4,uVar2 >> 8 | uVar2 << 8);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3164,*(undefined4 *)(*(int *)puVar3 + iVar6 + 0x1c4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3150,*(undefined4 *)(*(int *)puVar3 + iVar6 + 0x1c8));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3138,*(undefined4 *)(*(int *)puVar3 + iVar6 + 0x1cc));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x311c,*(int *)puVar3 + iVar6 + 0xd8);
  if (*(char *)(*(int *)puVar3 + iVar6 + 0xf0) == '\0') {
    puVar5 = PTR_DAT_00468298 + -0x569c;
  }
  else {
    puVar5 = PTR_DAT_00468298 + -0x43f0;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x20,PTR_DAT_00468298 + -0x3110,puVar5);
  (*(code *)PTR_memset_00468810)(&local_58,0,0x40);
  cVar1 = *(char *)(*(int *)puVar3 + iVar6 + 0xf1);
  if (cVar1 == '\0') {
    local_58 = 0x503250;
  }
  else if (cVar1 == '\x01') {
    local_58 = 0x616c6552;
    local_54 = CONCAT22(local_54._2_2_,0x79);
  }
  else if (cVar1 == '\x02') {
    local_58 = *(undefined4 *)(PTR_DAT_00468298 + -0x30f4);
    local_54 = *(undefined4 *)(PTR_DAT_00468298 + -0x30f0);
    local_50 = *(undefined2 *)(PTR_DAT_00468298 + -0x30ec);
  }
  else {
    local_58 = *(undefined4 *)(PTR_DAT_00468298 + -0x30e8);
    local_54 = *(undefined4 *)(PTR_DAT_00468298 + -0x30e4);
    local_50 = *(undefined2 *)(PTR_DAT_00468298 + -0x30e0);
    local_4e = PTR_DAT_00468298[-0x30de];
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x20,PTR_DAT_00468298 + -0x30dc,&local_58);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x30c4,(int)*(char *)(*(int *)puVar3 + iVar6 + 0xf2));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x30ac,(int)*(char *)(*(int *)puVar3 + iVar6 + 0xf6));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3098,*(undefined4 *)(*(int *)puVar3 + iVar6 + 0x140));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3080,*(undefined4 *)(*(int *)puVar3 + iVar6 + 0x144));
  uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(*(int *)puVar3 + iVar6 + 0x188));
  uVar2 = *(ushort *)(*(int *)puVar3 + iVar6 + 0x186);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3064,uVar4,uVar2 >> 8 | uVar2 << 8);
  uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(*(int *)puVar3 + iVar6 + 0x198));
  uVar2 = *(ushort *)(*(int *)puVar3 + iVar6 + 0x196);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x3050,uVar4,uVar2 >> 8 | uVar2 << 8);
  iVar6 = *(int *)puVar3 + iVar6;
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x20,PTR_DAT_00468298 + -0x303c,(int)*(char *)(iVar6 + 0x1a5),
             (int)*(char *)(iVar6 + 0x1a7),(int)*(char *)(iVar6 + 0x1a6));
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x20,PTR_DAT_00468298 + -0x3008,param_1);
  return;
}



// ==== PPPP__SendReport @ 004297e4 size=332

/* tnp::PPPP__SendReport(unsigned char, char, char*) */

undefined4 tnp::PPPP__SendReport(uchar param_1,char param_2,char *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_gTNPSession_004682bc;
  iVar2 = *(int *)PTR_gCurrentSignalSession_0046842c;
  if (2 < *(uint *)PTR_gCurrentReportLevel_00468500) {
    iVar5 = *(int *)PTR_gTNPSession_004682bc + iVar2 * 0x3f20;
    iVar3 = *(int *)(iVar5 + 0xc);
    if (0 < iVar3) {
      iVar4 = (int)*(char *)(iVar5 + 0x10);
      if (iVar4 < 1) {
        puVar7 = PTR_gP2PServerAddr_004682a8 + 0x30;
        puVar6 = PTR_gP2PServerAddr_004682a8;
        while( true ) {
          (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                    (iVar3,iVar4,puVar6,iVar5 + 0xd8,(int)(char)param_1,(int)param_2,
                     (int)*(char *)(iVar5 + 0xf0),0,param_3);
          if (puVar6 + 0x10 == puVar7) break;
          iVar5 = *(int *)puVar1 + iVar2 * 0x3f20;
          iVar3 = *(int *)(iVar5 + 0xc);
          iVar4 = (int)*(char *)(iVar5 + 0x10);
          puVar6 = puVar6 + 0x10;
        }
      }
      else {
        (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                  (iVar3,iVar4,iVar5 + (*(int *)(iVar5 + 0xa4) + 1) * 0x10 + 4,iVar5 + 0xd8,
                   (int)(char)param_1,(int)param_2,(int)*(char *)(iVar5 + 0xf0),0,param_3);
      }
    }
  }
  return 0;
}



// ==== PPPP__Close_Inner @ 00429930 size=1576

/* tnp::PPPP__Close_Inner(unsigned int) */

undefined4 tnp::PPPP__Close_Inner(uint param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x2fdc);
  puVar4 = PTR_gTNPSessionLock_004682c4;
  puVar3 = PTR_gTNPSession_004682bc;
  if (*(uint *)PTR_gMaxSessionNumber_004682b8 < param_1) {
    return 0xfffff43d;
  }
  iVar6 = param_1 * 0x3f20;
  if ((*(int *)(*(int *)PTR_gTNPSession_004682bc + iVar6 + 0xc) < 0) &&
     (*(int *)(*(int *)PTR_gTNPSession_004682bc + iVar6 + 4) < 0)) {
    return 0xfffff430;
  }
  iVar2 = param_1 * 0x18;
  (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar2);
  iVar10 = *(int *)puVar3 + iVar6;
  if (*(char *)(iVar10 + 0x138) == '\x01') {
    (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar4 + iVar2);
    return 0xfffff43a;
  }
  *(undefined1 *)(iVar10 + 0x138) = 1;
  if (*(char *)(iVar10 + 1) == '\0') {
    *(undefined1 *)(iVar10 + 1) = 3;
  }
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar4 + iVar2);
  puVar9 = PTR_gTNPSession_004682bc;
  iVar10 = *(int *)puVar3 + iVar6;
  if (*(char *)(iVar10 + 0xf0) == '\x01') {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    uVar5 = (*(code *)PTR_getCurTime_004682c8)();
    (*(code *)PTR_sprintf_004687f0)
              (&local_48,PTR_DAT_00468298 + -0x2fc0,param_1,uVar5,
               (int)*(char *)(*(int *)puVar9 + iVar6 + 1));
    (*(code *)PTR_PPPP__SendReport_004682d0)
              (2,(int)*(char *)(*(int *)puVar9 + iVar6 + 0x1d0),&local_48);
    iVar10 = *(int *)puVar9 + iVar6;
    if (*(char *)(iVar10 + 0xf0) != '\0') goto LAB_00429aac;
    bVar1 = *(byte *)(iVar10 + 1);
  }
  else {
    if (*(char *)(iVar10 + 0xf0) != '\0') goto LAB_00429aac;
    bVar1 = *(byte *)(iVar10 + 1);
  }
  uVar11 = bVar1 - 1 & 0xff;
  if (uVar11 < 6) {
    iVar12 = *(int *)(PTR_DAT_00468298 + uVar11 * 4 + -0x22f8);
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (1,PTR_DAT_00468298 + -0x2fa8,iVar10 + 0xd8,*(undefined1 *)(iVar10 + 0x1d0),iVar12);
    if (((iVar12 == -0xbc5) || (iVar12 + 0xbd1U < 2)) || (iVar12 == -0xbcc)) {
      iVar10 = 0;
      uVar5 = (*(code *)PTR_CreateSocket_004683c8)(0);
      do {
        iVar7 = iVar10 + 0x15;
        iVar8 = *(int *)puVar3 + iVar6;
        iVar10 = iVar10 + 1;
        (*(code *)PTR_PPPP_Proto_Send_Report_00468470)
                  (uVar5,0,iVar8 + iVar7 * 0x10 + 4,iVar8 + 0xd8,2,(int)*(char *)(iVar8 + 0x1d0),
                   (int)*(char *)(iVar8 + 0xf0),(int)(short)iVar12,PTR_DAT_00468298 + -0x2f74);
      } while (iVar10 != 3);
      (*(code *)PTR_CloseSocket_004683b4)(uVar5);
      iVar10 = *(int *)PTR_gTNPSession_004682bc + iVar6;
    }
    else {
      iVar10 = *(int *)puVar3 + iVar6;
    }
  }
  else {
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (1,PTR_DAT_00468298 + -0x2fa8,iVar10 + 0xd8,*(undefined1 *)(iVar10 + 0x1d0),0);
    iVar10 = *(int *)puVar3 + iVar6;
  }
LAB_00429aac:
  if ((*(char *)(iVar10 + 1) != '\x06') && (-1 < *(int *)(iVar10 + 4))) {
    (*(code *)PTR_PPPP_Proto_Send_Close_0046854c)(*(int *)(iVar10 + 4),(int)*(char *)(iVar10 + 8));
  }
  (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar4 + iVar2);
  puVar9 = PTR_MUTEX_RELEASE_004682b4;
  iVar10 = *(int *)puVar4;
  iVar12 = *(int *)puVar3 + iVar6;
  *(undefined1 *)(iVar12 + 0xf2) = 1;
  *(undefined1 *)(iVar12 + 0xf3) = 1;
  *(undefined1 *)(iVar12 + 0xf4) = 1;
  (*(code *)puVar9)(iVar10 + iVar2);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x2f60);
  (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar3 + iVar6 + 0x140);
  (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar3 + iVar6 + 0x144);
  (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar3 + iVar6 + 0x148);
  (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar3 + iVar6 + 0x14c);
  (*(code *)PTR_WaitThreadExit_00468404)(*(int *)puVar3 + iVar6 + 0x150);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x2f38);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x2f28);
  (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar4 + iVar2);
  puVar9 = PTR_DAT_00468298 + -0x2f10;
  iVar10 = 0;
  do {
    iVar12 = iVar10 * 0x1c;
    (*(code *)PTR_sll_DeInit_00468638)(*(int *)puVar3 + iVar6 + iVar12 + 0x3f0);
    (*(code *)PTR_sll_DeInit_00468638)(*(int *)puVar3 + iVar6 + iVar12 + 0x348);
    (*(code *)PTR_sll_DeInit_00468638)(*(int *)puVar3 + iVar6 + iVar12 + 0x2a0);
    (*(code *)PTR_sll_DeInit_00468638)(*(int *)puVar3 + iVar6 + iVar12 + 0x1f8);
    iVar12 = iVar10 + 1;
    (*(code *)PTR_PPPP_DebugTrace_00468294)(1,puVar9,iVar10);
    iVar10 = iVar12;
  } while (iVar12 != 6);
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar4 + iVar2);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x2f38);
  iVar10 = *(int *)PTR_gTNPSession_004682bc + iVar6;
  if ((*(char *)(iVar10 + 0xf0) == '\x01') && (*(char *)(iVar10 + 0x10) == '\x01')) {
    iVar6 = *(int *)(iVar10 + 4);
  }
  else {
    if (-1 < *(int *)(iVar10 + 0xc)) {
      (*(code *)PTR_CloseSocket_004683b4)();
      iVar10 = *(int *)puVar3 + iVar6;
    }
    iVar6 = *(int *)(iVar10 + 4);
  }
  if ((-1 < iVar6) && (iVar6 != *(int *)(iVar10 + 0xc))) {
    (*(code *)PTR_CloseSocket_004683b4)();
  }
  (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar4 + iVar2);
  (*(code *)PTR_PPPP__Reset_Session_00468318)(param_1,1);
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar4 + iVar2);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(1,PTR_DAT_00468298 + -0x2f08);
  return 0;
}



// ==== PPPP__CalculateLostRate @ 00429f58 size=600

/* tnp::PPPP__CalculateLostRate(int, unsigned int*) */

uint tnp::PPPP__CalculateLostRate(int param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int local_68 [12];
  int *local_38;
  int *local_34;
  int local_30;
  
  puVar1 = PTR_gTNPSession_004682bc;
  iVar6 = param_1 * 0x3f20;
  local_34 = local_68 + 6;
  piVar8 = local_68;
  piVar9 = local_68 + 6;
  local_68[6] = 0;
  local_68[7] = 0;
  iVar7 = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_38 = piVar8;
  do {
    iVar10 = *(int *)puVar1 + iVar6;
    iVar4 = iVar7 * 0x1c;
    iVar5 = (iVar7 + 0x250) * 2;
    if (*(int *)(iVar10 + iVar4 + 0x3f4) == 0) {
      iVar4 = (*(code *)PTR_IndexDistanse_0046863c)
                        (*(undefined2 *)(iVar10 + (iVar7 + 0x250) * 2 + 4),(short)*param_2);
      if (0 < iVar4) {
        *piVar9 = iVar4;
        *piVar8 = 0;
      }
    }
    else {
      local_30 = iVar5;
      iVar5 = (*(code *)PTR_IndexDistanse_0046863c)
                        (*(undefined2 *)(iVar10 + iVar5 + 4),(short)*param_2);
      iVar10 = (*(code *)PTR_IndexDistanse_0046863c)
                         (**(undefined2 **)(*(int *)puVar1 + iVar6 + iVar4 + 0x3f4),
                          *(undefined2 *)(*(int *)puVar1 + iVar6 + local_30 + 4));
      if ((0 < iVar5) && (-1 < iVar10)) {
        iVar2 = *(int *)puVar1;
        *piVar9 = iVar5 + iVar10 + 1;
        *piVar8 = (1 - *(int *)(iVar2 + iVar6 + iVar4 + 0x3f8)) + iVar10;
      }
    }
    iVar7 = iVar7 + 1;
    piVar9 = piVar9 + 1;
    piVar8 = piVar8 + 1;
    param_2 = param_2 + 1;
  } while (iVar7 != 6);
  iVar7 = 0;
  iVar6 = 0;
  uVar3 = 0;
  do {
    piVar8 = (int *)((int)local_68 + iVar7);
    iVar4 = iVar7 + 0x18;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + *piVar8;
    uVar3 = uVar3 + *(int *)((int)local_68 + iVar4);
  } while (iVar7 != 0x18);
  if ((uVar3 != 0) && (iVar6 != 0)) {
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    return ((uVar3 >> 1) + iVar6 * 100) / uVar3;
  }
  return 0;
}



// ==== PPPP__CalculateBitrate @ 0042a1b0 size=216

/* tnp::PPPP__CalculateBitrate(int, int, unsigned int, unsigned int, unsigned int*) */

void tnp::PPPP__CalculateBitrate(int param_1,int param_2,uint param_3,uint param_4,uint *param_5)

{
  int iVar1;
  
  if (param_3 == 0) {
    trap(0x1c00);
  }
  if (param_2 != 0) {
    iVar1 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
    (*(code *)PTR_PPPP_Proto_Send_BitrateInfo_00468640)
              (*(undefined4 *)(iVar1 + 4),(int)*(char *)(iVar1 + 8),iVar1 + 0xa8);
    return;
  }
  (*(code *)PTR_PPPP__CalculateLostRate_00468644)(param_1,param_5);
  iVar1 = *(int *)PTR_gTNPSession_004682bc + param_1 * 0x3f20;
  (*(code *)PTR_PPPP_Proto_Send_BitrateInfo_00468640)
            (*(undefined4 *)(iVar1 + 4),(int)*(char *)(iVar1 + 8),iVar1 + 0xa8,
             (param_4 * 8000) / param_3);
  return;
}



// ==== PPPP_thread_recv_Relay_TCP @ 0042a288 size=6424

/* tnp::PPPP_thread_recv_Relay_TCP(void*) */

void tnp::PPPP_thread_recv_Relay_TCP(void *param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  char *pcVar21;
  int iVar22;
  char acStack_828 [28];
  char acStack_80c [1892];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ushort local_70;
  ushort local_6e;
  byte local_6b [3];
  char *local_68;
  uint local_64;
  ushort *local_60;
  byte *local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar15 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_4c = (*(code *)PTR_getCurTime_004682c8)();
  puVar5 = PTR_gTNPSession_004682bc;
  (*(code *)PTR_getCurTime_004682c8)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x2ecc);
  iVar22 = (int)param_1 * 0x3f20;
  iVar4 = (int)param_1 * 0x18;
  iVar19 = *(int *)puVar5;
  local_50 = 0;
  local_58 = 0;
  local_54 = 0;
joined_r0x0042a36c:
  while( true ) {
    if (((iVar19 == 0) || (pcVar20 = (char *)(iVar19 + iVar22), pcVar20[0xf4] != '\0')) ||
       (*pcVar20 == '\0')) goto LAB_0042a3bc;
    if ((-1 < *(int *)(pcVar20 + 4)) && (pcVar20[8] != '\0')) break;
    (*(code *)PTR_mSecSleep_004682d4)(10);
    iVar19 = *(int *)puVar5;
  }
  local_68 = acStack_828;
  local_6e = (ushort)(0x780 - uVar15);
  iVar19 = (*(code *)PTR_PPPP_Proto_Recv_TCP_004683a8)
                     (*(int *)(pcVar20 + 4),local_68 + uVar15,0x780 - uVar15 & 0xffff,&local_6e,0x28
                     );
  uVar3 = local_6e;
  puVar6 = PTR_gTNPSessionLock_004682c4;
  puVar13 = PTR_gTNPSession_004682bc;
  if (iVar19 == 0) {
    uVar17 = *(undefined4 *)(*(int *)puVar5 + iVar22 + 4);
    uVar9 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(*(int *)puVar5 + iVar22 + 0x198));
    uVar2 = *(ushort *)(*(int *)puVar5 + iVar22 + 0x196);
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (0x80,PTR_DAT_00468298 + -0x2ea4,param_1,uVar17,uVar3,uVar9,uVar2 >> 8 | uVar2 << 8);
    uVar15 = uVar15 + local_6e & 0xffff;
    local_64 = 0;
    local_60 = &local_70;
    local_5c = local_6b;
LAB_0042a4d8:
    do {
      pcVar20 = acStack_828 + local_64;
      iVar19 = (*(code *)PTR_PPPP__Check_Session_Data_Ready_004683ac)
                         (pcVar20,uVar15,local_60,local_5c);
      puVar13 = PTR_gTNPSession_004682bc;
      if (iVar19 != 1) goto LAB_0042afb4;
      if (((*(int *)puVar5 == 0) ||
          (pcVar21 = (char *)(*(int *)puVar5 + iVar22), pcVar21[0xf4] != '\0')) ||
         (*pcVar21 == '\0')) goto LAB_0042a3bc;
      uVar18 = (uint)local_70;
      if (*pcVar20 == -0xf) {
        pcVar20 = acStack_828 + local_64 + 4;
        uVar10 = uVar18 + 4 & 0xffff;
        local_64 = local_64 + uVar10 & 0xffff;
        uVar15 = uVar15 - uVar10 & 0xffff;
LAB_0042a578:
        bVar8 = local_6b[0];
        uVar17 = *(undefined4 *)(pcVar21 + 4);
        uVar9 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(pcVar21 + 0x198));
        uVar3 = *(ushort *)(*(int *)puVar5 + iVar22 + 0x196);
        (*(code *)PTR_PPPP_DebugTrace_00468294)
                  (0x80,PTR_DAT_00468298 + -0x2e4c,param_1,uVar17,bVar8,uVar18,uVar9,
                   uVar3 >> 8 | uVar3 << 8);
        puVar13 = PTR_gTNPSessionLock_004682c4;
        cVar1 = *(char *)(*(int *)puVar5 + iVar22 + 0xf6);
        if (cVar1 == '\x01') {
          if (*(char *)(*(int *)puVar5 + iVar22 + 0x13b) == '\0') {
            (*(code *)PTR_mSecSleep_004682d4)(10);
            goto LAB_0042a4d8;
          }
LAB_0042a7ac:
          (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar4);
          uVar18 = local_6b[0] + 0x30 & 0xff;
          if (uVar18 < 0x21) {
                    /* WARNING: Could not emulate address calculation at 0x0042a7e4 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00468298 + uVar18 * 4 + -0x2400)))();
            return;
          }
        }
        else {
          if (cVar1 != '\0') goto LAB_0042a7ac;
          iVar19 = *(int *)PTR_gTNPSessionLock_004682c4;
          while (iVar19 = (*(code *)PTR_MUTEX_TRYLOCK_00468648)(iVar19 + iVar4), iVar19 != 0) {
            pcVar21 = (char *)(*(int *)puVar5 + iVar22);
            if (((*(int *)puVar5 == 0) || (pcVar21[0xf4] != '\0')) || (*pcVar21 == '\0'))
            goto LAB_0042a3bc;
            (*(code *)PTR_mSecSleep_004682d4)(10);
            iVar19 = *(int *)puVar13;
          }
          if (local_6b[0] == 0x71) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)(0x10,PTR_DAT_00468298 + -0x2d18);
          }
          else if (local_6b[0] < 0x72) {
            if (local_6b[0] == 6) {
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x10,PTR_DAT_00468298 + -0x63d0,*pcVar20,(int)pcVar20[1],(int)pcVar20[2]);
              iVar19 = *(int *)puVar5 + iVar22;
              *(undefined1 *)(iVar19 + 0x1a6) = 0xf5;
              *(undefined1 *)(iVar19 + 0xf2) = 1;
              *(undefined1 *)(iVar19 + 0xf4) = 1;
            }
          }
          else if (local_6b[0] == 0x88) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x2de4);
            puVar6 = PTR_gTNPSession_004682bc;
            if (*(byte *)(*(int *)puVar5 + iVar22 + 0x1d0) < 0x25) {
              (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x24);
              (*(code *)PTR_PPPP_DebugTrace_00468294)
                        (0x80,PTR_DAT_00468298 + -0x2dc8,pcVar20,(int)pcVar20[0x10]);
              iVar14 = *(int *)puVar6;
              iVar19 = iVar14 + iVar22;
              *(char *)(iVar19 + 0x1a6) = pcVar20[0x10];
              if (pcVar20[0x10] == '\0') {
                uVar12 = *(undefined4 *)(pcVar20 + 4);
                uVar17 = *(undefined4 *)(pcVar20 + 8);
                uVar9 = *(undefined4 *)(pcVar20 + 0xc);
                *(undefined4 *)(iVar19 + 0x1da) = *(undefined4 *)pcVar20;
                *(undefined4 *)(iVar19 + 0x1de) = uVar12;
                *(undefined4 *)(iVar19 + 0x1e2) = uVar17;
                *(undefined4 *)(iVar19 + 0x1e6) = uVar9;
                iVar16 = 0;
                if (*(char *)(iVar19 + 0x10) == '\x01') {
                  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x2d94);
                  iVar19 = *(int *)puVar6 + iVar22;
                  if ((*(byte *)(iVar19 + 0x1d0) < 0x25) &&
                     (iVar19 = (*(code *)PTR_PPPP_Proto_Send_RlyTCPReq_004683bc)
                                         (*(undefined4 *)(iVar19 + 0xc),1,
                                          iVar19 + (*(int *)(iVar19 + 0xa4) + 1) * 0x10 + 4,
                                          iVar19 + 0x1a8,*(undefined4 *)(iVar19 + 0x1b8),
                                          iVar19 + 0x1b0,iVar19 + 0x194,iVar19 + 0x1da), -1 < iVar19
                     )) {
                    (*(code *)PTR_PPPP__Update_Session_State_0046835c)(param_1,0x25);
                  }
                }
                else {
                  while( true ) {
                    iVar14 = iVar14 + iVar22;
                    iVar19 = iVar16 + 0x15;
                    iVar16 = iVar16 + 1;
                    (*(code *)PTR_PPPP_Proto_Send_RlyTCPReq_004683bc)
                              (*(undefined4 *)(iVar14 + 0xc),0,iVar14 + iVar19 * 0x10 + 4,
                               iVar14 + 0x1a8,*(undefined4 *)(iVar14 + 0x1b8),iVar14 + 0x1b0,
                               iVar14 + 0x194,iVar14 + 0x1da);
                    if (iVar16 == 3) break;
                    iVar14 = *(int *)puVar5;
                  }
                }
              }
            }
          }
          else if (local_6b[0] == 0x8b) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x2d78);
            puVar7 = PTR_gTNPSession_004682bc;
            puVar6 = PTR_DAT_00468298;
            iVar19 = *(int *)puVar5 + iVar22;
            if (*(byte *)(iVar19 + 0x1d0) < 0x2a) {
              *(char *)(iVar19 + 0x1a6) = *pcVar20;
              (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,puVar6 + -0x2d5c,(int)*pcVar20);
              puVar6 = PTR_PPPP__Update_Session_State_0046835c;
              if (*pcVar20 == '\0') {
                iVar19 = *(int *)puVar7 + iVar22;
                *(undefined4 *)(iVar19 + 0xa8) = *(undefined4 *)(iVar19 + 0x194);
                *(undefined4 *)(iVar19 + 0xac) = *(undefined4 *)(iVar19 + 0x198);
                *(undefined4 *)(iVar19 + 0xb0) = *(undefined4 *)(iVar19 + 0x19c);
                *(undefined4 *)(iVar19 + 0xb4) = *(undefined4 *)(iVar19 + 0x1a0);
                *(undefined1 *)(iVar19 + 0xf1) = 2;
                *(undefined1 *)(iVar19 + 0xf6) = 1;
                *(undefined1 *)(iVar19 + 0x1a6) = 0;
                *(undefined1 *)(iVar19 + 0xf2) = 1;
                (*(code *)puVar6)(param_1,0x29);
                iVar19 = *(int *)puVar7 + iVar22;
              }
              else {
                iVar19 = *(int *)puVar7 + iVar22;
              }
            }
            if (*(char *)(iVar19 + 0xf0) == '\x01') {
              uVar9 = (*(code *)PTR_getCurTime_004682c8)();
              (*(code *)PTR_sprintf_004687f0)(&local_a8,PTR_DAT_00468298 + -0x2d34,param_1,uVar9);
              (*(code *)PTR_PPPP__SendReport_004682d0)
                        (1,(int)*(char *)(*(int *)puVar5 + iVar22 + 0x1d0),&local_a8);
            }
          }
        }
        (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar13 + iVar4);
        goto LAB_0042a4d8;
      }
      pcVar20 = acStack_80c + local_64;
      uVar10 = uVar18 + 0x1c & 0xffff;
      uVar11 = local_64 + uVar10 & 0xffff;
      uVar15 = uVar15 - uVar10 & 0xffff;
      local_64 = uVar11;
      if (acStack_828[uVar11 + 4] != '\x01') goto LAB_0042a578;
      uVar9 = (*(code *)PTR_strlen_004687c0)(pcVar21 + 0xf7);
      iVar19 = (*(code *)PTR_PPPP_Proto_Verify_Header_0046841c)
                         (pcVar21 + 0xf7,uVar9,acStack_828 + uVar11);
      if (iVar19 == 0) {
        uVar18 = (uint)local_70;
        pcVar21 = (char *)(*(int *)puVar13 + iVar22);
        goto LAB_0042a578;
      }
      iVar19 = *(int *)puVar13 + iVar22;
      (*(code *)PTR_PPPP_Proto_Send_SigErrorAck_00468420)
                (*(undefined4 *)(iVar19 + 4),1,iVar19 + 0xa8,acStack_828[uVar11 + 1],
                 (int)acStack_828[uVar11 + 4],0xffffffff);
    } while( true );
  }
  if (iVar19 == -1) goto LAB_0042a714;
  if (iVar19 != -2) goto LAB_0042a440;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x6288);
  (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar6 + iVar4);
  iVar19 = *(int *)puVar5 + iVar22;
  *(undefined1 *)(iVar19 + 0xf3) = 1;
  *(undefined1 *)(iVar19 + 0xf4) = 1;
  if (*(char *)(iVar19 + 1) == '\0') {
    *(undefined1 *)(iVar19 + 1) = 6;
  }
  (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar6 + iVar4);
  if (*(char *)(*(int *)puVar5 + iVar22 + 0xf0) == '\x01') {
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    uVar9 = (*(code *)PTR_getCurTime_004682c8)();
    (*(code *)PTR_sprintf_004687f0)(&local_a8,PTR_DAT_00468298 + -0x2764,param_1,uVar9);
    (*(code *)PTR_PPPP__SendReport_004682d0)
              (2,(int)*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar22 + 0x1d0),&local_a8);
  }
  goto LAB_0042a3bc;
LAB_0042a714:
  iVar19 = *(int *)puVar5;
  if (*(char *)(iVar19 + iVar22 + 0x13b) == '\x01') {
    if (local_58 % 0x19 == 0) {
      (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar4);
      iVar19 = (*(code *)PTR_PPPP_Proto_Send_Alive_004685fc)
                         (*(undefined4 *)(*(int *)puVar13 + iVar22 + 4),1);
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x2834,iVar19);
      if (*(char *)(*(int *)puVar13 + iVar22 + 0xf0) == '\x01') {
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_8c = 0;
        uVar9 = (*(code *)PTR_getCurTime_004682c8)();
        (*(code *)PTR_sprintf_004687f0)(&local_a8,PTR_DAT_00468298 + -0x2814,param_1,uVar9);
        (*(code *)PTR_PPPP__SendReport_004682d0)
                  (2,(int)*(char *)(*(int *)puVar5 + iVar22 + 0x1d0),&local_a8);
      }
      if ((iVar19 < 0) && (*(char *)(*(int *)puVar5 + iVar22 + 8) != '\0')) {
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x100,PTR_DAT_00468298 + -0x27fc,iVar19);
        iVar22 = *(int *)PTR_gTNPSession_004682bc + iVar22;
        *(undefined1 *)(iVar22 + 0xf3) = 1;
        *(undefined1 *)(iVar22 + 0xf4) = 1;
        if (*(char *)(iVar22 + 1) == '\0') {
          *(undefined1 *)(iVar22 + 1) = 6;
        }
        (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar6 + iVar4);
LAB_0042a3bc:
        puVar5 = PTR_DAT_00468298;
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x274c);
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x4000,puVar5 + -0x274c);
        (*(code *)PTR_pthread_exit_004688b4)(0);
        return;
      }
      local_54 = local_54 + 1;
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x800,PTR_DAT_00468298 + -0x27d4,local_54,local_58);
      if (6 < local_54) {
        if (iVar19 == -2) {
          puVar13 = PTR_DAT_00468298 + -0x2eec;
        }
        else {
          puVar13 = PTR_DAT_00468298 + -0x2ed8;
        }
        (*(code *)PTR_PPPP_DebugTrace_00468294)(0x800,PTR_DAT_00468298 + -0x27a0,puVar13);
        iVar19 = *(int *)puVar5 + iVar22;
        if (*(char *)(iVar19 + 1) == '\0') {
          *(undefined1 *)(iVar19 + 1) = 1;
        }
        *(undefined1 *)(iVar19 + 0xf3) = 1;
        *(undefined1 *)(iVar19 + 0xf4) = 1;
        if (*(char *)(iVar19 + 0xf0) == '\x01') {
          local_a8 = 0;
          local_a4 = 0;
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
          local_94 = 0;
          local_90 = 0;
          local_8c = 0;
          uVar9 = (*(code *)PTR_getCurTime_004682c8)();
          (*(code *)PTR_sprintf_004687f0)(&local_a8,PTR_DAT_00468298 + -0x277c,param_1,uVar9);
          (*(code *)PTR_PPPP__SendReport_004682d0)
                    (2,(int)*(char *)(*(int *)puVar5 + iVar22 + 0x1d0),&local_a8);
        }
      }
      (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar6 + iVar4);
      iVar19 = *(int *)puVar5;
    }
    local_58 = local_58 + 1 & 0xffff;
  }
  goto joined_r0x0042a36c;
LAB_0042afb4:
  if ((local_64 == 0) || (uVar15 == 0)) {
LAB_0042a440:
    iVar19 = *(int *)puVar5;
  }
  else {
    (*(code *)PTR_memmove_004688bc)(acStack_828,pcVar20,uVar15);
    iVar19 = *(int *)puVar5;
  }
  goto joined_r0x0042a36c;
}



// ==== PPPP_thread_recv_DRW @ 0042bba0 size=4880

/* tnp::PPPP_thread_recv_DRW(void*) */

void tnp::PPPP_thread_recv_DRW(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_6e8 [1600];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ushort local_60;
  undefined1 uStack_5d;
  byte local_5c [4];
  uint local_58;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  
  local_88 = 0;
  uVar7 = 0;
  local_84 = 0;
  uVar10 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_4c = (*(code *)PTR_getCurTime_004682c8)();
  puVar3 = PTR_gTNPSession_004682bc;
  (*(code *)PTR_getCurTime_004682c8)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x2728);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x4000,PTR_DAT_00468298 + -0x2708);
  iVar2 = (int)param_1 * 0x18;
  iVar1 = (int)param_1 * 0x3f20;
  local_50 = 0;
  iVar8 = *(int *)puVar3;
joined_r0x0042bc94:
  do {
    if (iVar8 == 0) {
LAB_0042bdd0:
      puVar3 = PTR_DAT_00468298;
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x24f0);
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x4000,puVar3 + -0x24f0);
      (*(code *)PTR_pthread_exit_004688b4)(0);
      return;
    }
    iVar6 = *(int *)(iVar8 + iVar1 + 4);
    if ((iVar6 < 0) || (*(char *)(iVar8 + iVar1 + 0xf3) != '\0')) goto LAB_0042bdd0;
    iVar6 = (*(code *)PTR_PPPP_Proto_Recv_ALL_00468354)
                      (iVar6,&local_70,0x28,local_5c,&local_60,local_6e8,0x640,&uStack_5d);
    puVar4 = PTR_gTNPSessionLock_004682c4;
    if (iVar6 != 0) {
      if (iVar6 == -1) {
        if (uVar7 % 0x19 == 0) {
          (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar2);
          (*(code *)PTR_PPPP_Calc_P2p_Pkt_Loss_Ratio_00468668)(param_1);
          (*(code *)PTR_PPPP_Proto_Send_Alive_with_conuter_0046866c)
                    (param_1,*(undefined4 *)(*(int *)puVar3 + iVar1 + 4),0);
          if (*(char *)(*(int *)puVar3 + iVar1 + 0xf0) == '\x01') {
            local_a8 = 0;
            local_a4 = 0;
            local_a0 = 0;
            local_9c = 0;
            local_98 = 0;
            local_94 = 0;
            local_90 = 0;
            local_8c = 0;
            uVar5 = (*(code *)PTR_getCurTime_004682c8)();
            (*(code *)PTR_sprintf_004687f0)(&local_a8,PTR_DAT_00468298 + -0x2814,param_1,uVar5);
            (*(code *)PTR_PPPP__SendReport_004682d0)
                      (2,(int)*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar1 + 0x1d0),&local_a8)
            ;
          }
          uVar10 = uVar10 + 1;
          (*(code *)PTR_PPPP_DebugTrace_00468294)(0x800,PTR_DAT_00468298 + -0x27d4,uVar10,uVar7);
          if (6 < uVar10) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x800,PTR_DAT_00468298 + -0x27a0,PTR_DAT_00468298 + -0x2ed8);
            iVar8 = *(int *)puVar3 + iVar1;
            if (*(char *)(iVar8 + 1) == '\0') {
              *(undefined1 *)(iVar8 + 1) = 1;
            }
            *(undefined1 *)(iVar8 + 0xf3) = 1;
            if (*(char *)(iVar8 + 0xf0) == '\x01') {
              local_a8 = 0;
              local_a4 = 0;
              local_a0 = 0;
              local_9c = 0;
              local_98 = 0;
              local_94 = 0;
              local_90 = 0;
              local_8c = 0;
              uVar5 = (*(code *)PTR_getCurTime_004682c8)();
              (*(code *)PTR_sprintf_004687f0)(&local_a8,PTR_DAT_00468298 + -0x277c,param_1,uVar5);
              (*(code *)PTR_PPPP__SendReport_004682d0)
                        (2,(int)*(char *)(*(int *)puVar3 + iVar1 + 0x1d0),&local_a8);
            }
          }
          (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar4 + iVar2);
        }
        uVar7 = uVar7 + 1 & 0xffff;
        iVar8 = *(int *)puVar3;
      }
      else {
        if (iVar6 == -2) {
          (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x2608);
          (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)puVar4 + iVar2);
          iVar8 = *(int *)puVar3 + iVar1;
          *(undefined1 *)(iVar8 + 0xf3) = 1;
          if (*(char *)(iVar8 + 1) == '\0') {
            *(undefined1 *)(iVar8 + 1) = 6;
          }
          (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar4 + iVar2);
          if (*(char *)(*(int *)puVar3 + iVar1 + 0xf0) == '\x01') {
            local_a8 = 0;
            local_a4 = 0;
            local_a0 = 0;
            local_9c = 0;
            local_98 = 0;
            local_94 = 0;
            local_90 = 0;
            local_8c = 0;
            uVar5 = (*(code *)PTR_getCurTime_004682c8)();
            (*(code *)PTR_sprintf_004687f0)(&local_a8,PTR_DAT_00468298 + -0x2764,param_1,uVar5);
            (*(code *)PTR_PPPP__SendReport_004682d0)
                      (2,(int)*(char *)(*(int *)PTR_gTNPSession_004682bc + iVar1 + 0x1d0),&local_a8)
            ;
          }
          goto LAB_0042bdd0;
        }
        if (iVar6 == -4) {
          (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x25ac,0xfffffffc);
        }
        else if (iVar6 == -3) {
          (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x25f0,0xfffffffd);
        }
        else if (iVar6 == -5) {
          (*(code *)PTR_PPPP_DebugTrace_00468294)(0x80,PTR_DAT_00468298 + -0x2544,0xfffffffb);
        }
        puVar4 = PTR_gTNPSession_004682bc;
        iVar8 = *(int *)puVar3;
        if (*(char *)(iVar8 + iVar1 + 0xf0) == '\x01') {
          local_a8 = 0;
          local_a4 = 0;
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
          local_94 = 0;
          local_90 = 0;
          local_8c = 0;
          uVar5 = (*(code *)PTR_getCurTime_004682c8)();
          (*(code *)PTR_sprintf_004687f0)(&local_a8,PTR_DAT_00468298 + -0x2508,param_1,uVar5,iVar6);
          (*(code *)PTR_PPPP__SendReport_004682d0)
                    (2,(int)*(char *)(*(int *)puVar4 + iVar1 + 0x1d0),&local_a8);
          iVar8 = *(int *)puVar4;
        }
      }
      goto joined_r0x0042bc94;
    }
    (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar2);
    iVar8 = *(int *)puVar3 + iVar1;
    if (*(char *)(iVar8 + 8) != '\0') {
      local_6c = *(undefined4 *)(iVar8 + 0xac);
      local_70 = *(undefined4 *)(iVar8 + 0xa8);
      local_68 = *(undefined4 *)(iVar8 + 0xb0);
      local_64 = *(undefined4 *)(iVar8 + 0xb4);
    }
    local_48 = (uint)local_5c[0];
    local_58 = (uint)local_60;
    uVar5 = (*(code *)PTR_inet_ntoa_00468804)(local_6c);
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (0x80,PTR_DAT_00468298 + -0x26e8,param_1,local_48,local_58,uVar5,
               local_70._2_2_ >> 8 | local_70._2_2_ << 8);
    uVar9 = local_5c[0] + 0x30 & 0xff;
    if (uVar9 < 0x21) {
                    /* WARNING: Could not emulate address calculation at 0x0042bed4 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&_gp_1 + *(int *)(PTR_DAT_00468298 + uVar9 * 4 + -0x237c)))();
      return;
    }
    (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)puVar4 + iVar2);
    iVar8 = *(int *)puVar3;
  } while( true );
}



// ==== PPPP_thread_send_DRW @ 0042ceb0 size=2228

/* tnp::PPPP_thread_send_DRW(void*) */

void tnp::PPPP_thread_send_DRW(void *param_1)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int local_38;
  
  puVar6 = PTR_DAT_00468298;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x100,PTR_DAT_00468298 + -0x24d4);
  puVar7 = PTR_gTNPSession_004682bc;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x2000,puVar6 + -0x24d4);
  if (*(int *)puVar7 != 0) {
    iVar14 = (int)param_1 * 0x3f20;
    iVar18 = *(int *)puVar7 + iVar14;
    if ((-1 < *(int *)(iVar18 + 4)) && (*(char *)(iVar18 + 0xf3) == '\0')) {
      iVar4 = (int)param_1 * 0x18;
      cVar2 = *(char *)(iVar18 + 0xf0);
      uVar5 = 0;
      do {
        if (cVar2 == '\x01') {
          (*(code *)PTR_PPPP__ExitSuperDevice_004684e8)(2);
        }
        (*(code *)PTR_MUTEX_LOCK_004682a0)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar4);
        puVar6 = PTR_gTNPSession_004682bc;
        if (uVar5 % 100 == 0) {
          (*(code *)PTR_PPPP_Calc_P2p_Pkt_Loss_Ratio_00468668)(param_1);
          iVar18 = *(int *)puVar7 + iVar14;
          iVar15 = (*(code *)PTR_PPPP_Proto_Send_Alive_with_conuter_0046866c)
                             (param_1,*(undefined4 *)(iVar18 + 4),(int)*(char *)(iVar18 + 8),
                              iVar18 + 0xa8);
          iVar18 = *(int *)puVar6;
          if ((iVar15 < 0) && (*(char *)(iVar18 + iVar14 + 8) != '\0')) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)(0x100,PTR_DAT_00468298 + -0x27fc,iVar15);
            iVar18 = *(int *)puVar6;
LAB_0042d208:
            iVar18 = iVar18 + iVar14;
            *(undefined1 *)(iVar18 + 0xf3) = 1;
            *(undefined1 *)(iVar18 + 0xf4) = 1;
            if (*(char *)(iVar18 + 1) == '\0') {
              *(undefined1 *)(iVar18 + 1) = 6;
            }
            (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar4);
            break;
          }
        }
        else {
          iVar18 = *(int *)puVar7;
        }
        iVar15 = 0;
        iVar8 = iVar18 + iVar14;
        iVar16 = 0x34b0;
        local_38 = 0;
        iVar13 = 0;
        if (*(short *)(iVar8 + 0x34b0) != 0) goto LAB_0042d3e8;
LAB_0042cff0:
        iVar13 = iVar15 * 0x1c;
        iVar19 = iVar8 + iVar13;
        iVar16 = *(int *)(iVar19 + 0x2a8);
        if (((uint)(iVar16 + *(int *)(iVar19 + 0x350)) < 0x100) && (*(int *)(iVar19 + 0x1f8) != 0))
        {
          do {
            uVar9 = (*(code *)PTR_sll_Remove_ByNumber_004682d8)(iVar8 + iVar13 + 0x1f8,0);
            (*(code *)PTR_sll_Put_00468618)(*(int *)puVar7 + iVar14 + iVar13 + 0x2a0,uVar9);
            iVar18 = *(int *)puVar7;
            iVar8 = iVar18 + iVar14;
            iVar19 = iVar8 + iVar13;
            iVar16 = *(int *)(iVar19 + 0x2a8);
            *(undefined4 *)(iVar19 + 0x2b8) = 0;
            if (0xff < (uint)(iVar16 + *(int *)(iVar19 + 0x350))) break;
          } while (*(int *)(iVar19 + 0x1f8) != 0);
        }
        puVar6 = PTR_gTNPSession_004682bc;
        iVar13 = 7;
        iVar8 = iVar15 * 0x1c;
        while (iVar19 = iVar18 + iVar14, iVar16 != 0) {
          uVar17 = **(uint **)(iVar19 + iVar8 + 0x2a0);
          iVar18 = (*(code *)PTR_sll_Remove_ByNumber_004682d8)(iVar19 + iVar8 + 0x2a0,0);
          uVar17 = uVar17 & 0xffff;
          (*(code *)PTR_sll_Put_00468618)(*(int *)puVar7 + iVar14 + iVar8 + 0x348,iVar18);
          iVar16 = *(int *)puVar7 + iVar14;
          iVar16 = (*(code *)PTR_PPPP_DRW_Send_00468670)
                             (*(undefined4 *)(iVar16 + 4),(int)*(char *)(iVar16 + 8),iVar16 + 0xa8,
                              iVar15,uVar17,*(undefined4 *)(iVar18 + 8),*(undefined2 *)(iVar18 + 4))
          ;
          if ((iVar16 < 0) && (*(char *)(*(int *)puVar6 + iVar14 + 8) != '\0')) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x100,PTR_DAT_00468298 + -0x24b4,iVar15,uVar17,iVar16);
            iVar18 = *(int *)PTR_gTNPSession_004682bc;
            goto LAB_0042d208;
          }
          (*(code *)PTR_PPPP_DebugTrace_00468294)(0x100,PTR_DAT_00468298 + -0x2480,iVar15,uVar17);
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (0x2000,PTR_DAT_00468298 + -0x245c,iVar15,uVar17,*(undefined4 *)(iVar18 + 4));
          iVar18 = *(int *)puVar7;
          iVar19 = iVar18 + iVar14;
          if (*(ushort *)(iVar19 + (iVar15 + 0x1c5c) * 2) + 10 < *(uint *)(iVar19 + iVar8 + 0x350))
          {
            (*(code *)PTR_PPPP_DebugTrace_00468294)(0x100,PTR_DAT_00468298 + -0x244c,iVar15,10);
            iVar18 = *(int *)puVar6;
            iVar19 = iVar18 + iVar14;
          }
          if (iVar13 == 1) {
            if (*(int *)(iVar19 + iVar15 * 0x1c + 0x2a8) != 0) goto LAB_0042d2bc;
            break;
          }
          iVar13 = iVar13 + -1;
          iVar16 = *(int *)(iVar19 + iVar8 + 0x2a8);
        }
        uVar17 = 10;
        if (iVar15 == 1) {
          uVar11 = 0;
        }
        else if ((iVar15 == 2) || (iVar15 == 4)) {
          uVar17 = 10;
          uVar11 = 10;
        }
        else if (iVar15 == 3) {
          uVar17 = 5;
          uVar11 = 0;
        }
        else {
          uVar17 = 10;
          uVar11 = 0;
          if (iVar15 == 5) {
            uVar17 = 5;
          }
        }
        iVar8 = iVar15 * 0x1c;
        iVar13 = iVar19 + iVar8;
        uVar12 = *(int *)(iVar13 + 0x2b8) + 1;
        if (uVar17 == 0) {
          trap(0x1c00);
        }
        *(uint *)(iVar13 + 0x2b8) = uVar12;
        if (((uVar12 % uVar17 == 0) && (uVar17 = *(uint *)(iVar13 + 0x350), uVar11 < uVar17)) &&
           (0 < (int)uVar17)) {
          do {
            iVar18 = (*(code *)PTR_sll_Remove_ByNumber_004682d8)(iVar18 + iVar14 + iVar8 + 0x348,0);
            if (iVar18 == 0) {
              iVar19 = *(int *)puVar7 + iVar14;
              uVar3 = *(ushort *)(iVar19 + (iVar15 + 0x1c54) * 2 + 4);
              goto joined_r0x0042d524;
            }
            (*(code *)PTR_sll_Put_00468618)(*(int *)puVar7 + iVar14 + iVar8 + 0x2a0,iVar18);
            iVar18 = *(int *)puVar7;
            iVar19 = iVar18 + iVar14;
          } while ((*(int *)(iVar19 + iVar8 + 0x348) != 0) &&
                  (uVar17 = (int)uVar17 >> 2, uVar17 != 0));
        }
LAB_0042d2bc:
        uVar3 = *(ushort *)(iVar19 + (iVar15 + 0x1c54) * 2 + 4);
joined_r0x0042d524:
        uVar17 = (uint)uVar3;
        if (uVar17 < 2) {
          iVar18 = iVar19 + iVar15 * 0x1c;
          uVar11 = *(int *)(iVar18 + 0x2b4) + 1;
          *(uint *)(iVar18 + 0x2b4) = uVar11;
          if (uVar17 != 0) {
LAB_0042d5f4:
            if (0x14 < uVar11) goto LAB_0042d324;
          }
        }
        else {
          puVar10 = (ushort *)(iVar19 + iVar15 * 0xa4 + 0x34d4);
          do {
            if (puVar10 == (ushort *)(iVar19 + (local_38 + uVar17) * 2 + 0x34d2)) {
              iVar18 = iVar19 + iVar15 * 0x1c;
              uVar11 = *(int *)(iVar18 + 0x2b4) + 1;
              *(uint *)(iVar18 + 0x2b4) = uVar11;
              goto LAB_0042d5f4;
            }
            uVar3 = *puVar10;
            puVar1 = puVar10 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar3 + 1 == (uint)*puVar1);
LAB_0042d324:
          puVar6 = PTR_PPPP_DRWAck_Send_00468658;
          iVar8 = (iVar15 + 0x1c54) * 2;
          *(undefined4 *)(iVar19 + iVar15 * 0x1c + 0x2b4) = 0;
          iVar18 = (*(code *)puVar6)(*(undefined4 *)(iVar19 + 4),(int)*(char *)(iVar19 + 8),
                                     iVar19 + 0xa8,iVar15,iVar19 + iVar15 * 0xa4 + 0x34d4,uVar17);
          iVar13 = *(int *)puVar7 + iVar14;
          if ((iVar18 < 0) && (*(char *)(iVar13 + 8) != '\0')) {
            (*(code *)PTR_PPPP_DebugTrace_00468294)
                      (0x100,PTR_DAT_00468298 + -0x29dc,iVar15,*(undefined2 *)(iVar13 + iVar8 + 4),
                       iVar18);
            iVar14 = *(int *)PTR_gTNPSession_004682bc + iVar14;
            *(undefined1 *)(iVar14 + 0xf3) = 1;
            *(undefined1 *)(iVar14 + 0xf4) = 1;
            if (*(char *)(iVar14 + 1) == '\0') {
              *(undefined1 *)(iVar14 + 1) = 6;
            }
            (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar4);
            break;
          }
          (*(code *)PTR_PPPP_DebugTrace_00468294)
                    (0x100,PTR_DAT_00468298 + -0x299c,iVar15,*(undefined2 *)(iVar13 + iVar8 + 4));
          *(undefined2 *)(*(int *)puVar7 + iVar14 + iVar8 + 4) = 0;
        }
        if (iVar15 != 5) {
          local_38 = local_38 + 0x52;
          iVar13 = iVar15 + 1;
          iVar18 = *(int *)puVar7;
          iVar16 = (iVar15 + 0x1a59) * 2;
          iVar8 = iVar18 + iVar14;
          iVar15 = iVar13;
          if (*(short *)(iVar8 + iVar16) != 0) {
            iVar13 = iVar13 * 0x400;
LAB_0042d3e8:
            iVar18 = (*(code *)PTR_PPPP_Write_Block_004682e4)(param_1,iVar15,iVar8 + iVar13 + 0x4b0)
            ;
            if (iVar18 < 0) {
              (*(code *)PTR_PPPP_DebugTrace_00468294)(0x100,PTR_DAT_00468298 + -0x68b0);
              iVar18 = *(int *)puVar7;
              iVar8 = iVar18 + iVar14;
              *(undefined1 *)(iVar8 + 0xf3) = 1;
              *(undefined1 *)(iVar8 + 0xf4) = 1;
              if (*(char *)(iVar8 + 1) == '\0') {
                *(undefined1 *)(iVar8 + 1) = 4;
              }
            }
            else {
              iVar18 = *(int *)puVar7;
              iVar8 = iVar18 + iVar14;
              *(undefined2 *)(iVar8 + iVar16) = 0;
            }
          }
          goto LAB_0042cff0;
        }
        (*(code *)PTR_MUTEX_RELEASE_004682b4)(*(int *)PTR_gTNPSessionLock_004682c4 + iVar4);
        (*(code *)PTR_mSecSleep_004682d4)(10);
        if (((*(int *)puVar7 == 0) || (iVar18 = *(int *)puVar7 + iVar14, *(int *)(iVar18 + 4) < 0))
           || (*(char *)(iVar18 + 0xf3) != '\0')) break;
        cVar2 = *(char *)(iVar18 + 0xf0);
        uVar5 = uVar5 + 1 & 0xffff;
      } while( true );
    }
  }
  puVar6 = PTR_DAT_00468298;
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x100,PTR_DAT_00468298 + -0x2420);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x2000,puVar6 + -0x2420);
  (*(code *)PTR_pthread_exit_004688b4)(0);
  return;
}



// ==== pppp_sha1_init_ctx @ 0042e3b0 size=76

/* tnp::pppp_sha1_init_ctx(tnp::pppp_sha1_ctx*) */

void tnp::pppp_sha1_init_ctx(pppp_sha1_ctx *param_1)

{
  *(undefined4 *)param_1 = 0x67452301;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0xc) = 0x10325476;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xc3d2e1f0;
  return;
}



// ==== pppp_sha1_read_ctx @ 0042e3fc size=228

/* tnp::pppp_sha1_read_ctx(tnp::pppp_sha1_ctx const*, void*) */

void * tnp::pppp_sha1_read_ctx(pppp_sha1_ctx *param_1,void *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  *(uint *)param_2 = uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)((int)param_2 + 4) =
       uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)((int)param_2 + 8) =
       uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)((int)param_2 + 0xc) =
       uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)((int)param_2 + 0x10) =
       uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
  return param_2;
}



// ==== pppp_sha1_process_block @ 0042e4e0 size=6984

/* tnp::pppp_sha1_process_block(void const*, unsigned int, tnp::pppp_sha1_ctx*) */

void tnp::pppp_sha1_process_block(void *param_1,uint param_2,pppp_sha1_ctx *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint local_98 [4];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint *local_34;
  
  iVar24 = *(int *)(param_3 + 0x14);
  local_34 = (uint *)((int)param_1 + (param_2 & 0xfffffffc));
  local_48 = *(uint *)param_3;
  local_44 = *(uint *)(param_3 + 8);
  local_40 = *(uint *)(param_3 + 4);
  local_3c = *(uint *)(param_3 + 0xc);
  local_38 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x14) = param_2 + iVar24;
  if (param_2 + iVar24 < param_2) {
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  if (param_1 < local_34) {
    do {
      puVar25 = (uint *)((int)param_1 + 0x40);
      puVar2 = local_98;
      do {
        uVar1 = *(uint *)param_1;
        param_1 = (void *)((int)param_1 + 4);
        *puVar2 = uVar1 >> 0x18 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00;
        puVar2 = puVar2 + 1;
      } while (param_1 != puVar25);
      uVar6 = local_98[0] + 0x5a827999 + local_38 + (local_48 >> 0x1b | local_48 << 5) +
              ((local_3c ^ local_44) & local_40 ^ local_3c);
      uVar3 = local_40 << 0x1e | local_40 >> 2;
      uVar1 = local_48 << 0x1e | local_48 >> 2;
      uVar17 = local_98[1] + 0x5a827999 + local_3c + ((uVar3 ^ local_44) & local_48 ^ local_44) +
               (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar7 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar6 = local_98[2] + 0x5a827999 + local_44 + (uVar6 & (uVar1 ^ uVar3) ^ uVar3) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar3 = local_98[3] + 0x5a827999 + uVar3 + ((uVar7 ^ uVar1) & uVar17 ^ uVar1) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar17 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar1 = local_88 + 0x5a827999 + uVar1 + ((uVar18 ^ uVar7) & uVar6 ^ uVar7) +
              (uVar3 >> 0x1b | uVar3 * 0x20);
      uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar7 = local_84 + 0x5a827999 + uVar7 + ((uVar17 ^ uVar18) & uVar3 ^ uVar18) +
              (uVar1 >> 0x1b | uVar1 * 0x20);
      uVar3 = uVar1 * 0x40000000 | uVar1 >> 2;
      uVar18 = local_80 + 0x5a827999 + uVar18 + ((uVar6 ^ uVar17) & uVar1 ^ uVar17) +
               (uVar7 >> 0x1b | uVar7 * 0x20);
      uVar1 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar7 = local_7c + 0x5a827999 + uVar17 + ((uVar3 ^ uVar6) & uVar7 ^ uVar6) +
              (uVar18 >> 0x1b | uVar18 * 0x20);
      uVar17 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar6 = local_78 + 0x5a827999 + uVar6 + ((uVar1 ^ uVar3) & uVar18 ^ uVar3) +
              (uVar7 >> 0x1b | uVar7 * 0x20);
      uVar18 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar7 = local_74 + 0x5a827999 + uVar3 + ((uVar17 ^ uVar1) & uVar7 ^ uVar1) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar3 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar1 = local_70 + 0x5a827999 + uVar1 + ((uVar18 ^ uVar17) & uVar6 ^ uVar17) +
              (uVar7 >> 0x1b | uVar7 * 0x20);
      uVar16 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar17 = local_6c + 0x5a827999 + uVar17 + ((uVar3 ^ uVar18) & uVar7 ^ uVar18) +
               (uVar1 >> 0x1b | uVar1 * 0x20);
      uVar13 = uVar1 * 0x40000000 | uVar1 >> 2;
      uVar6 = local_68 + 0x5a827999 + uVar18 + ((uVar16 ^ uVar3) & uVar1 ^ uVar3) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar1 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar3 = local_64 + 0x5a827999 + uVar3 + ((uVar13 ^ uVar16) & uVar17 ^ uVar16) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar18 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar6 = local_60 + 0x5a827999 + uVar16 + ((uVar1 ^ uVar13) & uVar6 ^ uVar13) +
              (uVar3 >> 0x1b | uVar3 * 0x20);
      uVar17 = local_98[2] ^ local_98[0] ^ local_78 ^ local_64;
      uVar7 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar12 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = local_98[3] ^ local_98[1] ^ local_74 ^ local_60;
      uVar3 = local_5c + 0x5a827999 + uVar13 + ((uVar18 ^ uVar1) & uVar3 ^ uVar1) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar11 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar13 = local_88 ^ local_98[2] ^ local_70 ^ local_5c;
      uVar1 = uVar12 + 0x5a827999 + uVar1 + ((uVar7 ^ uVar18) & uVar6 ^ uVar18) +
              (uVar3 >> 0x1b | uVar3 * 0x20);
      uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar10 = uVar13 << 1 | uVar13 >> 0x1f;
      uVar13 = uVar11 + 0x5a827999 + uVar18 + ((uVar17 ^ uVar7) & uVar3 ^ uVar7) +
               (uVar1 >> 0x1b | uVar1 * 0x20);
      uVar18 = local_84 ^ local_98[3] ^ local_6c ^ uVar12;
      uVar3 = uVar1 * 0x40000000 | uVar1 >> 2;
      uVar9 = uVar18 << 1 | uVar18 >> 0x1f;
      uVar18 = uVar10 + 0x5a827999 + uVar7 + ((uVar6 ^ uVar17) & uVar1 ^ uVar17) +
               (uVar13 >> 0x1b | uVar13 * 0x20);
      uVar1 = local_80 ^ local_88 ^ local_68 ^ uVar11;
      uVar8 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar7 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar1 = local_7c ^ local_84 ^ local_64 ^ uVar10;
      uVar5 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar26 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar17 = uVar9 + 0x5a827999 + uVar17 + ((uVar3 ^ uVar6) & uVar13 ^ uVar6) +
               (uVar18 >> 0x1b | uVar18 * 0x20);
      uVar6 = uVar8 + 0x6ed9eba1 + uVar6 + (uVar7 ^ uVar3 ^ uVar18) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar1 = local_78 ^ local_80 ^ local_60 ^ uVar9;
      uVar4 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar1 = local_74 ^ local_7c ^ local_5c ^ uVar8;
      uVar14 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar16 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar1 = uVar5 + 0x6ed9eba1 + uVar3 + (uVar26 ^ uVar7 ^ uVar17) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar17 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar3 = local_70 ^ local_78 ^ uVar12 ^ uVar5;
      uVar7 = uVar4 + 0x6ed9eba1 + uVar7 + (uVar14 ^ uVar26 ^ uVar6) +
              (uVar1 >> 0x1b | uVar1 * 0x20);
      uVar13 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar6 = local_6c ^ local_74 ^ uVar11 ^ uVar4;
      uVar3 = uVar1 * 0x40000000 | uVar1 >> 2;
      uVar18 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar6 = uVar16 + 0x6ed9eba1 + uVar26 + (uVar17 ^ uVar14 ^ uVar1) +
              (uVar7 >> 0x1b | uVar7 * 0x20);
      uVar26 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar1 = local_68 ^ local_70 ^ uVar10 ^ uVar16;
      uVar14 = uVar13 + 0x6ed9eba1 + uVar14 + (uVar3 ^ uVar17 ^ uVar7) +
               (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar7 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar27 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar19 = uVar18 + 0x6ed9eba1 + uVar17 + (uVar26 ^ uVar3 ^ uVar6) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar1 = local_64 ^ local_6c ^ uVar9 ^ uVar13;
      uVar6 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar15 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar1 = local_60 ^ local_68 ^ uVar8 ^ uVar18;
      uVar1 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar17 = uVar7 + 0x6ed9eba1 + uVar3 + (uVar27 ^ uVar26 ^ uVar14) +
               (uVar19 >> 0x1b | uVar19 * 0x20);
      uVar20 = uVar19 * 0x40000000 | uVar19 >> 2;
      uVar3 = local_5c ^ local_64 ^ uVar5 ^ uVar7;
      uVar21 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar6 + 0x6ed9eba1 + uVar26 + (uVar15 ^ uVar27 ^ uVar19) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar14 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar28 = uVar1 + 0x6ed9eba1 + uVar27 + (uVar20 ^ uVar15 ^ uVar17) +
               (uVar3 >> 0x1b | uVar3 * 0x20);
      uVar17 = uVar12 ^ local_60 ^ uVar4 ^ uVar6;
      uVar27 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar26 = uVar21 + 0x6ed9eba1 + uVar15 + (uVar14 ^ uVar20 ^ uVar3) +
               (uVar28 >> 0x1b | uVar28 * 0x20);
      uVar3 = uVar11 ^ local_5c ^ uVar16 ^ uVar1;
      uVar29 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar19 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar10 ^ uVar12 ^ uVar13 ^ uVar21;
      uVar15 = uVar27 + 0x6ed9eba1 + uVar20 + (uVar17 ^ uVar14 ^ uVar28) +
               (uVar26 >> 0x1b | uVar26 * 0x20);
      uVar12 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar30 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar9 ^ uVar11 ^ uVar18 ^ uVar27;
      uVar11 = uVar19 + 0x6ed9eba1 + uVar14 + (uVar29 ^ uVar17 ^ uVar26) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar26 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar23 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar8 ^ uVar10 ^ uVar7 ^ uVar19;
      uVar17 = uVar30 + 0x6ed9eba1 + uVar17 + (uVar12 ^ uVar29 ^ uVar15) +
               (uVar11 >> 0x1b | uVar11 * 0x20);
      uVar10 = uVar11 * 0x40000000 | uVar11 >> 2;
      uVar22 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar5 ^ uVar9 ^ uVar6 ^ uVar30;
      uVar11 = uVar23 + 0x6ed9eba1 + uVar29 + (uVar26 ^ uVar12 ^ uVar11) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar9 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar28 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar4 ^ uVar8 ^ uVar1 ^ uVar23;
      uVar17 = uVar22 + 0x6ed9eba1 + uVar12 + (uVar10 ^ uVar26 ^ uVar17) +
               (uVar11 >> 0x1b | uVar11 * 0x20);
      uVar14 = uVar11 * 0x40000000 | uVar11 >> 2;
      uVar20 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar16 ^ uVar5 ^ uVar21 ^ uVar22;
      uVar8 = uVar28 + 0x6ed9eba1 + uVar26 + (uVar9 ^ uVar10 ^ uVar11) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar5 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar11 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar13 ^ uVar4 ^ uVar27 ^ uVar28;
      uVar17 = uVar20 + 0x6ed9eba1 + uVar10 + (uVar14 ^ uVar9 ^ uVar17) +
               (uVar8 >> 0x1b | uVar8 * 0x20);
      uVar12 = uVar8 * 0x40000000 | uVar8 >> 2;
      uVar10 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar18 ^ uVar16 ^ uVar19 ^ uVar20;
      uVar16 = uVar11 + 0x6ed9eba1 + uVar9 + (uVar5 ^ uVar14 ^ uVar8) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar8 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar9 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar14 = uVar10 + 0x6ed9eba1 + uVar14 + (uVar12 ^ uVar5 ^ uVar17) +
               (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar17 = uVar7 ^ uVar13 ^ uVar30 ^ uVar11;
      uVar3 = uVar9 + 0x6ed9eba1 + uVar5 + (uVar8 ^ uVar12 ^ uVar16) +
              (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar26 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar4 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar17 = uVar6 ^ uVar18 ^ uVar23 ^ uVar10;
      uVar18 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar16 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar5 = uVar26 + 0x8f1bbcdc + uVar12 + (uVar3 >> 0x1b | uVar3 * 0x20) +
              ((uVar14 | uVar4) & uVar8 | uVar14 & uVar4);
      uVar7 = uVar1 ^ uVar7 ^ uVar22 ^ uVar9;
      uVar17 = uVar16 + 0x8f1bbcdc + uVar8 + ((uVar3 | uVar18) & uVar4 | uVar3 & uVar18) +
               (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar29 = uVar7 << 1 | uVar7 >> 0x1f;
      uVar13 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar3 = uVar21 ^ uVar6 ^ uVar28 ^ uVar26;
      uVar14 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar5 = uVar29 + 0x8f1bbcdc + uVar4 + (uVar17 >> 0x1b | uVar17 * 0x20) +
              ((uVar5 | uVar13) & uVar18 | uVar5 & uVar13);
      uVar1 = uVar27 ^ uVar1 ^ uVar20 ^ uVar16;
      uVar7 = uVar14 + 0x8f1bbcdc + uVar18 + ((uVar17 | uVar3) & uVar13 | uVar17 & uVar3) +
              (uVar5 >> 0x1b | uVar5 * 0x20);
      uVar15 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar6 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar17 = uVar19 ^ uVar21 ^ uVar11 ^ uVar29;
      uVar1 = uVar5 * 0x40000000 | uVar5 >> 2;
      uVar4 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar18 = uVar15 + 0x8f1bbcdc + uVar13 + (uVar7 >> 0x1b | uVar7 * 0x20) +
               ((uVar5 | uVar6) & uVar3 | uVar5 & uVar6);
      uVar17 = uVar30 ^ uVar27 ^ uVar10 ^ uVar14;
      uVar13 = uVar4 + 0x8f1bbcdc + uVar3 + ((uVar7 | uVar1) & uVar6 | uVar7 & uVar1) +
               (uVar18 >> 0x1b | uVar18 * 0x20);
      uVar8 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar7 = uVar23 ^ uVar19 ^ uVar9 ^ uVar15;
      uVar3 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar5 = uVar7 << 1 | uVar7 >> 0x1f;
      uVar6 = uVar8 + 0x8f1bbcdc + uVar6 + (uVar13 >> 0x1b | uVar13 * 0x20) +
              ((uVar18 | uVar17) & uVar1 | uVar18 & uVar17);
      uVar18 = uVar22 ^ uVar30 ^ uVar26 ^ uVar4;
      uVar7 = uVar5 + 0x8f1bbcdc + uVar1 + ((uVar13 | uVar3) & uVar17 | uVar13 & uVar3) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar30 = uVar18 << 1 | uVar18 >> 0x1f;
      uVar18 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar1 = uVar28 ^ uVar23 ^ uVar16 ^ uVar8;
      uVar23 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar1 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar17 = uVar30 + 0x8f1bbcdc + uVar17 + (uVar7 >> 0x1b | uVar7 * 0x20) +
               ((uVar6 | uVar18) & uVar3 | uVar6 & uVar18);
      uVar13 = uVar20 ^ uVar22 ^ uVar29 ^ uVar5;
      uVar6 = uVar23 + 0x8f1bbcdc + uVar3 + ((uVar7 | uVar1) & uVar18 | uVar7 & uVar1) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar21 = uVar13 << 1 | uVar13 >> 0x1f;
      uVar7 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar3 = uVar11 ^ uVar28 ^ uVar14 ^ uVar30;
      uVar27 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar18 = uVar21 + 0x8f1bbcdc + uVar18 + (uVar6 >> 0x1b | uVar6 * 0x20) +
               ((uVar17 | uVar7) & uVar1 | uVar17 & uVar7);
      uVar13 = uVar10 ^ uVar20 ^ uVar15 ^ uVar23;
      uVar17 = uVar27 + 0x8f1bbcdc + uVar1 + ((uVar6 | uVar3) & uVar7 | uVar6 & uVar3) +
               (uVar18 >> 0x1b | uVar18 * 0x20);
      uVar12 = uVar13 << 1 | uVar13 >> 0x1f;
      uVar6 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar1 = uVar9 ^ uVar11 ^ uVar4 ^ uVar21;
      uVar19 = uVar1 << 1 | uVar1 >> 0x1f;
      uVar1 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar7 = uVar12 + 0x8f1bbcdc + uVar7 + (uVar17 >> 0x1b | uVar17 * 0x20) +
              ((uVar18 | uVar6) & uVar3 | uVar18 & uVar6);
      uVar18 = uVar26 ^ uVar10 ^ uVar8 ^ uVar27;
      uVar13 = uVar19 + 0x8f1bbcdc + uVar3 + ((uVar17 | uVar1) & uVar6 | uVar17 & uVar1) +
               (uVar7 >> 0x1b | uVar7 * 0x20);
      uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar10 = uVar18 << 1 | uVar18 >> 0x1f;
      uVar18 = uVar16 ^ uVar9 ^ uVar5 ^ uVar12;
      uVar3 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar11 = uVar18 << 1 | uVar18 >> 0x1f;
      uVar6 = uVar10 + 0x8f1bbcdc + uVar6 + (uVar13 >> 0x1b | uVar13 * 0x20) +
              ((uVar7 | uVar17) & uVar1 | uVar7 & uVar17);
      uVar7 = uVar29 ^ uVar26 ^ uVar30 ^ uVar19;
      uVar1 = uVar11 + 0x8f1bbcdc + uVar1 + ((uVar13 | uVar3) & uVar17 | uVar13 & uVar3) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar26 = uVar7 << 1 | uVar7 >> 0x1f;
      uVar13 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar7 = uVar14 ^ uVar16 ^ uVar23 ^ uVar10;
      uVar18 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar16 = uVar7 << 1 | uVar7 >> 0x1f;
      uVar17 = uVar26 + 0x8f1bbcdc + uVar17 + (uVar1 >> 0x1b | uVar1 * 0x20) +
               ((uVar6 | uVar13) & uVar3 | uVar6 & uVar13);
      uVar7 = uVar15 ^ uVar29 ^ uVar21 ^ uVar11;
      uVar6 = uVar16 + 0x8f1bbcdc + uVar3 + ((uVar1 | uVar18) & uVar13 | uVar1 & uVar18) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar20 = uVar7 << 1 | uVar7 >> 0x1f;
      uVar1 = uVar1 * 0x40000000 | uVar1 >> 2;
      uVar3 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar7 = uVar4 ^ uVar14 ^ uVar27 ^ uVar26;
      uVar14 = uVar7 << 1 | uVar7 >> 0x1f;
      uVar13 = uVar20 + 0x8f1bbcdc + uVar13 + (uVar6 >> 0x1b | uVar6 * 0x20) +
               ((uVar17 | uVar1) & uVar18 | uVar17 & uVar1);
      uVar17 = uVar8 ^ uVar15 ^ uVar12 ^ uVar16;
      uVar15 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar7 = uVar5 ^ uVar4 ^ uVar19 ^ uVar20;
      uVar18 = uVar14 + 0x8f1bbcdc + uVar18 + ((uVar6 | uVar3) & uVar1 | uVar6 & uVar3) +
               (uVar13 >> 0x1b | uVar13 * 0x20);
      uVar9 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar4 = uVar7 << 1 | uVar7 >> 0x1f;
      uVar6 = uVar30 ^ uVar8 ^ uVar10 ^ uVar14;
      uVar1 = uVar15 + 0xca62c1d6 + uVar1 + (uVar17 ^ uVar3 ^ uVar13) +
              (uVar18 >> 0x1b | uVar18 * 0x20);
      uVar13 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar8 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar3 = uVar4 + 0xca62c1d6 + uVar3 + (uVar9 ^ uVar17 ^ uVar18) +
              (uVar1 >> 0x1b | uVar1 * 0x20);
      uVar6 = uVar23 ^ uVar5 ^ uVar11 ^ uVar15;
      uVar18 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar17 = uVar8 + 0xca62c1d6 + uVar17 + (uVar13 ^ uVar9 ^ uVar1) +
               (uVar3 >> 0x1b | uVar3 * 0x20);
      uVar1 = uVar1 * 0x40000000 | uVar1 >> 2;
      uVar7 = uVar21 ^ uVar30 ^ uVar26 ^ uVar4;
      uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
      local_98[0] = uVar7 << 1 | uVar7 >> 0x1f;
      uVar5 = uVar18 + 0xca62c1d6 + uVar9 + (uVar1 ^ uVar13 ^ uVar3) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar7 = uVar27 ^ uVar23 ^ uVar16 ^ uVar8;
      uVar3 = local_98[0] + 0xca62c1d6 + uVar13 + (uVar6 ^ uVar1 ^ uVar17) +
              (uVar5 >> 0x1b | uVar5 * 0x20);
      local_98[1] = uVar7 << 1 | uVar7 >> 0x1f;
      uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar7 = uVar12 ^ uVar21 ^ uVar20 ^ uVar18;
      uVar13 = uVar5 * 0x40000000 | uVar5 >> 2;
      local_98[2] = uVar7 << 1 | uVar7 >> 0x1f;
      uVar1 = local_98[1] + 0xca62c1d6 + uVar1 + (uVar17 ^ uVar6 ^ uVar5) +
              (uVar3 >> 0x1b | uVar3 * 0x20);
      uVar7 = uVar19 ^ uVar27 ^ uVar14 ^ local_98[0];
      local_98[3] = uVar7 << 1 | uVar7 >> 0x1f;
      uVar7 = uVar3 * 0x40000000 | uVar3 >> 2;
      uVar6 = local_98[2] + 0xca62c1d6 + uVar6 + (uVar13 ^ uVar17 ^ uVar3) +
              (uVar1 >> 0x1b | uVar1 * 0x20);
      uVar3 = uVar10 ^ uVar12 ^ uVar15 ^ local_98[1];
      local_88 = uVar3 << 1 | uVar3 >> 0x1f;
      uVar3 = uVar1 * 0x40000000 | uVar1 >> 2;
      uVar1 = local_98[3] + 0xca62c1d6 + uVar17 + (uVar7 ^ uVar13 ^ uVar1) +
              (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar17 = uVar11 ^ uVar19 ^ uVar4 ^ local_98[2];
      uVar13 = local_88 + 0xca62c1d6 + uVar13 + (uVar3 ^ uVar7 ^ uVar6) +
               (uVar1 >> 0x1b | uVar1 * 0x20);
      local_84 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar6 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar17 = uVar26 ^ uVar10 ^ uVar8 ^ local_98[3];
      uVar7 = local_84 + 0xca62c1d6 + uVar7 + (uVar6 ^ uVar3 ^ uVar1) +
              (uVar13 >> 0x1b | uVar13 * 0x20);
      local_80 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar17 = uVar1 * 0x40000000 | uVar1 >> 2;
      uVar1 = uVar16 ^ uVar11 ^ uVar18 ^ local_88;
      local_7c = uVar1 << 1 | uVar1 >> 0x1f;
      uVar5 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar1 = local_80 + 0xca62c1d6 + uVar3 + (uVar17 ^ uVar6 ^ uVar13) +
              (uVar7 >> 0x1b | uVar7 * 0x20);
      uVar9 = uVar20 ^ uVar26 ^ local_98[0] ^ local_84;
      uVar3 = local_7c + 0xca62c1d6 + uVar6 + (uVar5 ^ uVar17 ^ uVar7) +
              (uVar1 >> 0x1b | uVar1 * 0x20);
      uVar13 = uVar7 * 0x40000000 | uVar7 >> 2;
      local_78 = uVar9 << 1 | uVar9 >> 0x1f;
      uVar6 = uVar14 ^ uVar16 ^ local_98[1] ^ local_80;
      uVar17 = local_78 + 0xca62c1d6 + uVar17 + (uVar13 ^ uVar5 ^ uVar1) +
               (uVar3 >> 0x1b | uVar3 * 0x20);
      uVar1 = uVar1 * 0x40000000 | uVar1 >> 2;
      local_74 = uVar6 << 1 | uVar6 >> 0x1f;
      uVar7 = uVar15 ^ uVar20 ^ local_98[2] ^ local_7c;
      uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
      local_70 = uVar7 << 1 | uVar7 >> 0x1f;
      uVar9 = uVar4 ^ uVar14 ^ local_98[3] ^ local_78;
      uVar16 = local_74 + 0xca62c1d6 + uVar5 + (uVar1 ^ uVar13 ^ uVar3) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar7 = uVar17 * 0x40000000 | uVar17 >> 2;
      local_6c = uVar9 << 1 | uVar9 >> 0x1f;
      uVar3 = local_70 + 0xca62c1d6 + uVar13 + (uVar6 ^ uVar1 ^ uVar17) +
              (uVar16 >> 0x1b | uVar16 * 0x20);
      uVar17 = uVar8 ^ uVar15 ^ local_88 ^ local_74;
      uVar5 = uVar16 * 0x40000000 | uVar16 >> 2;
      local_68 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar1 = local_6c + 0xca62c1d6 + uVar1 + (uVar7 ^ uVar6 ^ uVar16) +
              (uVar3 >> 0x1b | uVar3 * 0x20);
      uVar17 = uVar18 ^ uVar4 ^ local_84 ^ local_70;
      uVar13 = uVar3 * 0x40000000 | uVar3 >> 2;
      local_64 = uVar17 << 1 | uVar17 >> 0x1f;
      uVar6 = local_68 + 0xca62c1d6 + uVar6 + (uVar5 ^ uVar7 ^ uVar3) +
              (uVar1 >> 0x1b | uVar1 * 0x20);
      uVar17 = local_98[0] ^ uVar8 ^ local_80 ^ local_6c;
      uVar3 = uVar1 * 0x40000000 | uVar1 >> 2;
      local_60 = uVar17 << 1 | uVar17 >> 0x1f;
      local_38 = local_38 + uVar3;
      uVar17 = local_64 + 0xca62c1d6 + uVar7 + (uVar13 ^ uVar5 ^ uVar1) +
               (uVar6 >> 0x1b | uVar6 * 0x20);
      uVar1 = local_98[1] ^ uVar18 ^ local_7c ^ local_68;
      local_5c = uVar1 << 1 | uVar1 >> 0x1f;
      uVar1 = uVar6 * 0x40000000 | uVar6 >> 2;
      local_3c = local_3c + uVar1;
      uVar6 = local_60 + 0xca62c1d6 + uVar5 + (uVar3 ^ uVar13 ^ uVar6) +
              (uVar17 >> 0x1b | uVar17 * 0x20);
      local_40 = local_40 + uVar6;
      local_44 = local_44 + (uVar17 * 0x40000000 | uVar17 >> 2);
      local_48 = local_48 + local_5c + 0xca62c1d6 + uVar13 + (uVar1 ^ uVar3 ^ uVar17) +
                 (uVar6 >> 0x1b | uVar6 * 0x20);
      *(uint *)param_3 = local_48;
      *(uint *)(param_3 + 4) = local_40;
      *(uint *)(param_3 + 8) = local_44;
      *(uint *)(param_3 + 0xc) = local_3c;
      *(int *)(param_3 + 0x10) = local_38;
    } while (puVar25 < local_34);
  }
  return;
}



// ==== pppp_sha1_finish_ctx @ 00430028 size=352

/* tnp::pppp_sha1_finish_ctx(tnp::pppp_sha1_ctx*, void*) */

void tnp::pppp_sha1_finish_ctx(pppp_sha1_ctx *param_1,void *param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar9 = 0x40;
  uVar3 = *(uint *)(param_1 + 0x1c);
  bVar1 = 0x37 < uVar3;
  iVar7 = 0x38;
  if (bVar1) {
    uVar9 = 0x80;
  }
  uVar10 = uVar3 + *(int *)(param_1 + 0x14);
  if (bVar1) {
    iVar7 = 0x78;
  }
  iVar5 = 0xf;
  iVar8 = 0xe;
  if (bVar1) {
    iVar5 = 0x1f;
  }
  if (bVar1) {
    iVar8 = 0x1e;
  }
  *(uint *)(param_1 + 0x14) = uVar10;
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar10 < uVar3) {
    uVar4 = uVar4 + 1;
    *(uint *)(param_1 + 0x18) = uVar4;
  }
  puVar2 = PTR_memcpy_00468898;
  puVar6 = PTR_DAT_00468298 + -0x2210;
  *(uint *)(param_1 + (iVar8 + 8) * 4) =
       (uVar4 & 0x1fffffff) >> 0x15 | (uVar4 << 3 | uVar10 >> 0x1d) << 0x18 |
       (uVar4 << 3 & 0xff00) << 8 | (uVar4 & 0x1fffffff) >> 5 & 0xff00;
  *(uint *)(param_1 + (iVar5 + 8) * 4) =
       (uVar10 & 0x1fffffff) >> 0x15 | uVar10 * 0x8000000 | (uVar10 * 8 & 0xff00) << 8 |
       (uVar10 & 0x1fffffff) >> 5 & 0xff00;
  (*(code *)puVar2)(param_1 + 0x20 + uVar3,puVar6,iVar7 - uVar3);
  (*(code *)PTR_pppp_sha1_process_block_00468680)(param_1 + 0x20,uVar9,param_1);
                    /* WARNING: Could not recover jumptable at 0x00430180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_pppp_sha1_read_ctx_00468684)(param_1,param_2);
  return;
}



// ==== pppp_sha1_process_bytes @ 00430188 size=472

/* tnp::pppp_sha1_process_bytes(void const*, unsigned int, tnp::pppp_sha1_ctx*) */

void tnp::pppp_sha1_process_bytes(void *param_1,uint param_2,pppp_sha1_ctx *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  pppp_sha1_ctx *ppVar5;
  
  iVar4 = *(int *)(param_3 + 0x1c);
  if (iVar4 != 0) {
    ppVar5 = param_3 + 0x20;
    uVar3 = 0x80U - iVar4;
    if (param_2 <= 0x80U - iVar4) {
      uVar3 = param_2;
    }
    (*(code *)PTR_memcpy_00468898)(ppVar5 + iVar4,param_1,uVar3);
    uVar2 = uVar3 + *(int *)(param_3 + 0x1c);
    *(uint *)(param_3 + 0x1c) = uVar2;
    if (uVar2 < 0x41) {
      param_1 = (void *)((int)param_1 + uVar3);
      param_2 = param_2 - uVar3;
    }
    else {
      param_1 = (void *)((int)param_1 + uVar3);
      param_2 = param_2 - uVar3;
      (*(code *)PTR_pppp_sha1_process_block_00468680)(ppVar5,uVar2 & 0xffffffc0,param_3);
      puVar1 = PTR_memcpy_00468898;
      *(uint *)(param_3 + 0x1c) = *(uint *)(param_3 + 0x1c) & 0x3f;
      (*(code *)puVar1)(ppVar5,ppVar5 + (uVar3 + iVar4 & 0xffffffc0));
    }
  }
  if (0x3f < param_2) {
    uVar3 = param_2 & 0xffffffc0;
    param_2 = param_2 & 0x3f;
    (*(code *)PTR_pppp_sha1_process_block_00468680)(param_1,uVar3,param_3);
    param_1 = (void *)((int)param_1 + uVar3);
  }
  if (param_2 != 0) {
    ppVar5 = param_3 + 0x20;
    uVar3 = param_2 + *(int *)(param_3 + 0x1c);
    (*(code *)PTR_memcpy_00468898)(ppVar5 + *(int *)(param_3 + 0x1c),param_1,param_2);
    if (uVar3 < 0x40) {
      *(uint *)(param_3 + 0x1c) = uVar3;
    }
    else {
      (*(code *)PTR_pppp_sha1_process_block_00468680)(ppVar5,0x40,param_3);
      (*(code *)PTR_memcpy_00468898)(ppVar5,param_3 + 0x60,uVar3 - 0x40);
      *(uint *)(param_3 + 0x1c) = uVar3 - 0x40;
    }
    return;
  }
  return;
}



// ==== pppp_memxor @ 00430534 size=52

/* tnp::pppp_memxor(void*, void const*, unsigned int) */

void * tnp::pppp_memxor(void *param_1,void *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_3 != 0) {
    pbVar1 = param_2;
    pbVar3 = param_1;
    do {
      pbVar2 = pbVar1 + 1;
      *pbVar3 = *pbVar3 ^ *pbVar1;
      pbVar1 = pbVar2;
      pbVar3 = pbVar3 + 1;
    } while (pbVar2 != (byte *)((int)param_2 + param_3));
  }
  return param_1;
}



// ==== pppp_hmac_sha1 @ 00430568 size=476

/* tnp::pppp_hmac_sha1(void const*, int, void const*, int, void*) */

undefined4 tnp::pppp_hmac_sha1(void *param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  undefined1 auStack_1d0 [160];
  undefined1 auStack_130 [160];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [20];
  int local_28;
  
  if (0x40 < param_2) {
    local_28 = param_2;
    (*(code *)PTR_pppp_sha1_init_ctx_00468688)(auStack_1d0);
    param_2 = 0x14;
    (*(code *)PTR_pppp_sha1_process_bytes_0046868c)(param_1,local_28,auStack_1d0);
    (*(code *)PTR_pppp_sha1_finish_ctx_00468690)(auStack_1d0,auStack_3c);
    param_1 = auStack_3c;
  }
  (*(code *)PTR_pppp_sha1_init_ctx_00468688)(auStack_130);
  (*(code *)PTR_memset_00468810)(auStack_90,0x36,0x40);
  (*(code *)PTR_pppp_memxor_00468694)(auStack_90,param_1,param_2);
  (*(code *)PTR_pppp_sha1_process_block_00468680)(auStack_90,0x40,auStack_130);
  (*(code *)PTR_pppp_sha1_process_bytes_0046868c)(param_3,param_4,auStack_130);
  (*(code *)PTR_pppp_sha1_finish_ctx_00468690)(auStack_130,auStack_50);
  (*(code *)PTR_pppp_sha1_init_ctx_00468688)(auStack_1d0);
  (*(code *)PTR_memset_00468810)(auStack_90,0x5c,0x40);
  (*(code *)PTR_pppp_memxor_00468694)(auStack_90,param_1,param_2);
  (*(code *)PTR_pppp_sha1_process_block_00468680)(auStack_90,0x40,auStack_1d0);
  (*(code *)PTR_pppp_sha1_process_bytes_0046868c)(auStack_50,0x14,auStack_1d0);
  (*(code *)PTR_pppp_sha1_finish_ctx_00468690)(auStack_1d0,param_5);
  return 0;
}



// ==== pppp_bin_to_string @ 00430744 size=136

/* tnp::pppp_bin_to_string(char const*, int, char*) */

void tnp::pppp_bin_to_string(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  
  if (0 < param_2) {
    pcVar3 = param_1 + param_2;
    puVar2 = PTR_DAT_00468298 + -0x2224;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      (*(code *)PTR_sprintf_004687f0)(param_3,puVar2,cVar1);
      param_3 = param_3 + 2;
    } while (param_1 != pcVar3);
  }
  return;
}



// ==== PPPP_MakeSha1 @ 004307cc size=124

/* tnp::PPPP_MakeSha1(char const*, int, char const*, int, char*) */

void tnp::PPPP_MakeSha1(char *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  undefined4 uVar1;
  undefined1 auStack_28 [24];
  char *local_10;
  int local_c;
  
  local_10 = param_3;
  local_c = param_4;
  uVar1 = (*(code *)PTR_strlen_004687c0)();
  (*(code *)PTR_pppp_hmac_sha1_00468698)(param_1,uVar1,local_10,local_c,auStack_28);
  (*(code *)PTR_pppp_bin_to_string_0046869c)(auStack_28,0x14,param_5);
  return;
}



// ==== PPPP_MakeSha2 @ 00430848 size=136

/* tnp::PPPP_MakeSha2(char const*, int, char const*, int, char*) */

void tnp::PPPP_MakeSha2(char *param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_18;
  int local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = (*(code *)PTR_strlen_004687c0)();
  (*(code *)PTR_pppp_hmac_sha1_00468698)(param_1,uVar1,local_18,local_14,&local_30);
  *(undefined4 *)param_5 = local_30;
  *(undefined4 *)(param_5 + 4) = local_2c;
  return;
}



// ==== PPPP_MakeNonce @ 004308d0 size=264

/* tnp::PPPP_MakeNonce(char*, int) */

void tnp::PPPP_MakeNonce(char *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_a3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar6 = (*(code *)PTR_getCurTime_004682c8)();
  (*(code *)PTR_snprintf_004688b0)(param_1,param_2,PTR_DAT_00468298 + -0x221c,in_a3,uVar6);
  (*(code *)PTR_srand_0046880c)((int)uVar6);
  iVar2 = (*(code *)PTR_strlen_004687c0)(param_1);
  puVar1 = PTR_DAT_00468298;
  if (0 < param_2 - iVar2) {
    pcVar4 = param_1 + iVar2;
    do {
      pcVar5 = pcVar4 + 1;
      iVar3 = (*(code *)PTR_rand_00468844)();
      *pcVar4 = puVar1[iVar3 % 0x3e + -0x21d0];
      pcVar4 = pcVar5;
    } while (pcVar5 != param_1 + iVar2 + (param_2 - iVar2));
  }
  return;
}



// ==== PPPP_DebugTrace @ 00430ac4 size=544

/* tnp::PPPP_DebugTrace(unsigned int, char*, ...) */

void tnp::PPPP_DebugTrace(uint param_1,char *param_2,...)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_a2;
  undefined4 in_a3;
  uint uVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 auStack_268 [512];
  undefined1 auStack_68 [64];
  undefined1 auStack_28 [4];
  int local_24;
  undefined4 *local_20;
  
  if ((param_1 & *(uint *)PTR_DEBUG_LEVEL_00468300) != 0) {
    local_res8 = in_a2;
    local_resc = in_a3;
    (*(code *)PTR_memset_00468810)(auStack_68,0,0x40);
    (*(code *)PTR_gettimeofday_0046881c)(auStack_28,0);
    puVar3 = (undefined4 *)(*(code *)PTR_localtime_00468814)(auStack_28);
    (*(code *)PTR_sprintf_004687f0)
              (auStack_68,PTR_DAT_00468298 + -0x2190,puVar3[5] + 0x76c,puVar3[4] + 1,puVar3[3],
               puVar3[2],puVar3[1],*puVar3,local_24 / 1000);
    (*(code *)PTR_memset_00468810)(auStack_268,0,0x200);
    local_20 = &local_res8;
    (*(code *)PTR_vsprintf_004688d0)(auStack_268,param_2);
    puVar1 = PTR_DEBUG_LOGFILE_00468308;
    uVar2 = 1;
    do {
      uVar5 = uVar2;
      uVar2 = uVar5 + 1;
    } while (param_1 >> (uVar5 & 0x1f) != 0);
    (*(code *)PTR_dump_string_004686a0)
              (PTR_LAB_00468460 + 0x5a14,PTR_LAB_00468460 + 0x5a14,0xffffffff,
               PTR_DAT_00468298 + -0x216c,auStack_68,uVar5 - 1,auStack_268);
    if (*puVar1 != '\0') {
      (*(code *)PTR_printf_004688d4)(PTR_DAT_00468298 + -0x215c,auStack_68,uVar5 - 1,auStack_268);
      iVar4 = (*(code *)PTR_fopen_00468818)(puVar1,PTR_DAT_00468298 + -0x2144);
      if (iVar4 != 0) {
        (*(code *)PTR_fprintf_0046885c)(iVar4,PTR_DAT_00468298 + -0x2140,auStack_68,auStack_268);
        (*(code *)PTR_fclose_00468808)(iVar4);
      }
    }
  }
  return;
}



// ==== PPPP_EncodeString @ 004319a4 size=532

/* tnp::PPPP_EncodeString(char*, char*, int) */

undefined4 tnp::PPPP_EncodeString(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  byte local_60 [4];
  undefined4 local_5c [4];
  byte local_4c [36];
  
  pbVar4 = local_60;
  puVar13 = (undefined4 *)(PTR_DAT_00468298 + -0x20f0);
  do {
    puVar12 = puVar13;
    pbVar5 = pbVar4;
    uVar10 = puVar12[1];
    uVar9 = puVar12[2];
    uVar8 = puVar12[3];
    puVar13 = puVar12 + 4;
    *(undefined4 *)pbVar5 = *puVar12;
    *(undefined4 *)(pbVar5 + 4) = uVar10;
    *(undefined4 *)(pbVar5 + 8) = uVar9;
    *(undefined4 *)(pbVar5 + 0xc) = uVar8;
    pbVar4 = pbVar5 + 0x10;
  } while (puVar13 != (undefined4 *)(PTR_DAT_00468298 + -0x20c0));
  iVar16 = 0;
  uVar8 = *puVar13;
  bVar2 = *(byte *)((int)puVar12 + 0x15);
  pbVar5[0x14] = *(byte *)(puVar12 + 5);
  *(undefined4 *)(pbVar5 + 0x10) = uVar8;
  pbVar5[0x15] = bVar2;
  iVar6 = (*(code *)PTR_strlen_004687c0)(param_1);
  pcVar11 = param_1;
  if (0 < iVar6) {
    do {
      if (iVar16 < 1) {
        uVar7 = 0x39;
      }
      else {
        uVar7 = 0x39;
        pcVar14 = param_1;
        do {
          cVar1 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          uVar7 = uVar7 ^ (int)cVar1;
        } while (pcVar11 != pcVar14);
      }
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      uVar7 = (uint)local_60[iVar16 % 0x36] ^ (int)cVar1 ^ uVar7;
      if (param_3 <= iVar16 << 1) {
        return 0xffffffff;
      }
      uVar15 = uVar7 + 0xf;
      if (-1 < (int)uVar7) {
        uVar15 = uVar7;
      }
      uVar7 = uVar7 & 0x8000000f;
      *param_2 = (char)((int)uVar15 >> 4) + 'A';
      puVar3 = PTR_strlen_004687c0;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      param_2[1] = (char)uVar7 + 'A';
      iVar6 = (*(code *)puVar3)(param_1);
      iVar16 = iVar16 + 1;
      param_2 = param_2 + 2;
    } while (iVar16 < iVar6);
  }
  return 0;
}



// ==== PPPP_DecodeString @ 00431bb8 size=484

/* tnp::PPPP_DecodeString(char*, char*, int) */

undefined4 tnp::PPPP_DecodeString(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  char *pcVar14;
  byte local_60 [4];
  undefined4 local_5c [4];
  byte local_4c [36];
  
  pbVar9 = local_60;
  puVar12 = (undefined4 *)(PTR_DAT_00468298 + -0x20f0);
  do {
    puVar11 = puVar12;
    pbVar13 = pbVar9;
    uVar8 = puVar11[1];
    uVar7 = puVar11[2];
    uVar6 = puVar11[3];
    puVar12 = puVar11 + 4;
    *(undefined4 *)pbVar13 = *puVar11;
    *(undefined4 *)(pbVar13 + 4) = uVar8;
    *(undefined4 *)(pbVar13 + 8) = uVar7;
    *(undefined4 *)(pbVar13 + 0xc) = uVar6;
    pbVar9 = pbVar13 + 0x10;
  } while (puVar12 != (undefined4 *)(PTR_DAT_00468298 + -0x20c0));
  bVar4 = *(byte *)(puVar11 + 5);
  bVar3 = *(byte *)((int)puVar11 + 0x15);
  iVar10 = 0;
  *(undefined4 *)(pbVar13 + 0x10) = *puVar12;
  pbVar13[0x14] = bVar4;
  pbVar13[0x15] = bVar3;
  pbVar9 = (byte *)param_2;
  pcVar14 = param_1;
  do {
    iVar5 = (*(code *)PTR_strlen_004687c0)(param_1);
    if (iVar5 / 2 <= iVar10) {
      return 0;
    }
    cVar2 = *pcVar14;
    pcVar1 = pcVar14 + 1;
    if (iVar10 == 0) {
      bVar4 = 0x39;
    }
    else {
      bVar4 = 0x39;
      pbVar13 = (byte *)param_2;
      do {
        bVar3 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        bVar4 = bVar4 ^ bVar3;
      } while (pbVar13 != pbVar9);
    }
    pcVar14 = pcVar14 + 2;
    iVar5 = iVar10 % 0x36;
    iVar10 = iVar10 + 1;
    *pbVar9 = bVar4 ^ *pcVar1 + -0x41 + (cVar2 + -0x41) * '\x10' ^ local_60[iVar5];
    pbVar9 = pbVar9 + 1;
  } while (iVar10 < param_3);
  return 0xffffffff;
}



// ==== PPPP_CRCEnc @ 004320c8 size=472

/* tnp::PPPP_CRCEnc(unsigned char*, int, unsigned char*, int, unsigned char*) */

int tnp::PPPP_CRCEnc(uchar *param_1,int param_2,uchar *param_3,int param_4,uchar *param_5)

{
  uchar uVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  
  if (param_2 + 3 < param_4) {
    if (param_5 == (uchar *)0x0) {
      bVar9 = 7;
      bVar7 = 5;
      bVar6 = 3;
      bVar5 = 1;
    }
    else {
      uVar1 = *param_5;
      bVar7 = 5;
      bVar5 = 1;
      bVar6 = 3;
      bVar9 = 7;
      while (uVar1 != '\0') {
        param_5 = param_5 + 1;
        (*(code *)PTR_CRCSelect4Key_004686ac)();
        bVar7 = local_2f;
        bVar5 = local_2d;
        bVar6 = local_2e;
        bVar9 = local_30;
        uVar1 = *param_5;
      }
    }
    iVar8 = 0;
    if (0 < param_2) {
      do {
        puVar2 = PTR_CRCSelect4Key_004686ac;
        pbVar3 = param_1 + iVar8;
        pbVar4 = param_3 + iVar8;
        iVar8 = iVar8 + 1;
        *pbVar4 = bVar9 ^ bVar7 ^ bVar6 ^ bVar5 ^ *pbVar3;
        (*(code *)puVar2)();
        bVar7 = local_2f;
        bVar5 = local_2d;
        bVar6 = local_2e;
        bVar9 = local_30;
      } while (iVar8 != param_2);
    }
    pbVar3 = param_3 + param_2;
    do {
      puVar2 = PTR_CRCSelect4Key_004686ac;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = bVar9 ^ bVar7 ^ bVar5 ^ bVar6 ^ 0x43;
      (*(code *)puVar2)();
      pbVar3 = pbVar4;
      bVar7 = local_2f;
      bVar5 = local_2d;
      bVar6 = local_2e;
      bVar9 = local_30;
    } while (pbVar4 != param_3 + param_2 + 4);
    iVar8 = param_2 + 4;
  }
  else {
    iVar8 = -1;
  }
  return iVar8;
}



// ==== PPPP_CRCDec @ 004322a0 size=548

/* tnp::PPPP_CRCDec(unsigned char*, int, unsigned char*, int, unsigned char*) */

int tnp::PPPP_CRCDec(uchar *param_1,int param_2,uchar *param_3,int param_4,uchar *param_5)

{
  uchar uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  
  iVar10 = param_2 + -4;
  iVar4 = (*(code *)PTR_malloc_00468890)(param_2);
  if (iVar10 <= param_4) {
    bVar3 = 7;
    if (param_5 == (uchar *)0x0) {
      bVar9 = 5;
      bVar8 = 3;
      bVar7 = 1;
    }
    else {
      uVar1 = *param_5;
      bVar7 = 1;
      bVar8 = 3;
      bVar9 = 5;
      while (uVar1 != '\0') {
        param_5 = param_5 + 1;
        (*(code *)PTR_CRCSelect4Key_004686ac)();
        bVar7 = local_35;
        bVar8 = local_36;
        bVar9 = local_37;
        bVar3 = local_38;
        uVar1 = *param_5;
      }
    }
    if (0 < param_2) {
      iVar11 = 0;
      do {
        puVar2 = PTR_CRCSelect4Key_004686ac;
        pbVar5 = param_1 + iVar11;
        pbVar6 = (byte *)(iVar4 + iVar11);
        iVar11 = iVar11 + 1;
        *pbVar6 = *pbVar5 ^ bVar3 ^ bVar9 ^ bVar8 ^ bVar7;
        (*(code *)puVar2)();
        bVar7 = local_35;
        bVar8 = local_36;
        bVar9 = local_37;
        bVar3 = local_38;
      } while (iVar11 != param_2);
    }
    iVar11 = iVar4 + param_2;
    while (*(char *)(iVar11 + -1) == 'C') {
      *(undefined1 *)(iVar11 + -1) = 0;
      iVar11 = iVar11 + -1;
      if (iVar11 == iVar4 + iVar10) {
        (*(code *)PTR_memcpy_00468898)(param_3,iVar4,iVar10);
        (*(code *)PTR_free_004687a8)(iVar4);
        return iVar10;
      }
    }
  }
  (*(code *)PTR_free_004687a8)(iVar4);
  return -1;
}



// ==== PPPP_Proto_Write_Header @ 004335e8 size=36

/* tnp::PPPP_Proto_Write_Header(tnp::st_PPPP_SessionHeader*, unsigned char, unsigned short) */

void tnp::PPPP_Proto_Write_Header(st_PPPP_SessionHeader *param_1,uchar param_2,ushort param_3)

{
  param_1[1] = (st_PPPP_SessionHeader)param_2;
  *param_1 = (st_PPPP_SessionHeader)0xf1;
  *(ushort *)(param_1 + 2) = param_3 >> 8 | param_3 << 8;
  return;
}



// ==== PPPP_Proto_Write_HeaderV2 @ 0043360c size=332

/* tnp::PPPP_Proto_Write_HeaderV2(tnp::st_PPPP_SessionHeaderV2*, unsigned char, unsigned short,
   char, char*, unsigned int) */

void tnp::PPPP_Proto_Write_HeaderV2
               (st_PPPP_SessionHeaderV2 *param_1,uchar param_2,ushort param_3,char param_4,
               char *param_5,uint param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar2 = (*(code *)PTR_keymap_Search_00468418)(param_5,param_6,&local_40);
  if (iVar2 != 0) {
    (*(code *)PTR_strcpy_004688e0)(&local_40,PTR_gDefaultSigKey_00468424);
  }
  puVar1 = PTR_strncpy_0046883c;
  *param_1 = (st_PPPP_SessionHeaderV2)0xf2;
  *(ushort *)(param_1 + 2) = param_3 >> 8 | param_3 << 8;
  param_1[1] = (st_PPPP_SessionHeaderV2)param_2;
  param_1[4] = (st_PPPP_SessionHeaderV2)param_4;
  (*(code *)puVar1)(param_1 + 8,param_5,8);
  uVar3 = (*(code *)PTR___bswapsi2_004683d8)(param_6);
  puVar1 = PTR_strlen_004687c0;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar3 = (*(code *)puVar1)(&local_40);
  (*(code *)PTR_PPPP_MakeSha2_004686c0)(&local_40,uVar3,param_1,0x14,param_1 + 0x14);
  return;
}



// ==== PPPP_Proto_Read_Header @ 00433758 size=80

/* tnp::PPPP_Proto_Read_Header(tnp::st_PPPP_SessionHeader*, unsigned char*, unsigned short*) */

undefined4
tnp::PPPP_Proto_Read_Header(st_PPPP_SessionHeader *param_1,uchar *param_2,ushort *param_3)

{
  if ((param_1 != (st_PPPP_SessionHeader *)0x0) && ((byte)((char)*param_1 + 0xfU) < 2)) {
    *param_3 = *(ushort *)(param_1 + 2) >> 8 | *(ushort *)(param_1 + 2) << 8;
    *param_2 = (uchar)param_1[1];
    return 0;
  }
  return 0xffffffff;
}



// ==== PPPP_Proto_Verify_Header @ 004337a8 size=124

/* tnp::PPPP_Proto_Verify_Header(char const*, int, tnp::st_PPPP_SessionHeaderV2*) */

int tnp::PPPP_Proto_Verify_Header(char *param_1,int param_2,st_PPPP_SessionHeaderV2 *param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  (*(code *)PTR_PPPP_MakeSha2_004686c0)();
  iVar1 = (*(code *)PTR_memcmp_0046882c)(&local_20,param_3 + 0x14,8);
  return -(uint)(iVar1 != 0);
}



// ==== PPPP_Proto_Recv_TCP @ 00433824 size=180

/* tnp::PPPP_Proto_Recv_TCP(int, char*, unsigned short, unsigned short*, unsigned int) */

undefined4
tnp::PPPP_Proto_Recv_TCP(int param_1,char *param_2,ushort param_3,ushort *param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = (*(code *)PTR_over_time_receive_tcp_004686c4)(param_1,param_2,param_3,param_5);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (iVar1 < 0) {
    puVar3 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
    uVar4 = *puVar3;
    uVar2 = (*(code *)PTR_strerror_004688c0)(uVar4);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x1f60,param_1,uVar4,uVar2);
    uVar2 = 0xfffffffe;
  }
  else {
    *param_4 = (ushort)iVar1;
    uVar2 = 0;
  }
  return uVar2;
}



// ==== PPPP_Proto_Send_Hello @ 004338d8 size=276

/* tnp::PPPP_Proto_Send_Hello(int, sockaddr_in*) */

int tnp::PPPP_Proto_Send_Hello(int param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_00468810)(auStack_110,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_110,0,0);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_110,4,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1f2c;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1f08;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Send_Hello_With_Body @ 004339ec size=484

/* tnp::PPPP_Proto_Send_Hello_With_Body(int, sockaddr_in*, char*, unsigned int, char*, char) */

int tnp::PPPP_Proto_Send_Hello_With_Body
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [8];
  undefined4 local_114;
  undefined1 auStack_110 [8];
  char local_108;
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,0,0x18);
  (*(code *)PTR_strncpy_0046883c)(auStack_11c,param_3,7);
  local_114 = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  (*(code *)PTR_strncpy_0046883c)(auStack_110,param_5,7);
  local_108 = param_6;
  iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0x1c,param_1,param_2);
  if (-1 < iVar1) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0x1eb0,uVar2,
               *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_3,param_4,param_5
               ,(int)param_6);
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x1eec,uVar2,
             *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_3,param_4,param_5,
             (int)param_6);
  return iVar1;
}



// ==== PPPP_Proto_Send_Probe @ 00433d04 size=488

/* tnp::PPPP_Proto_Send_Probe(int, sockaddr_in*, char*, unsigned int, char) */

int tnp::PPPP_Proto_Send_Probe
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_828 [4];
  undefined1 auStack_824 [16];
  undefined4 local_814;
  
  iVar3 = (int)param_5;
  (*(code *)PTR_memset_00468810)(auStack_828,0,0x800);
  uVar2 = 0x14;
  if (iVar3 != 0) {
    uVar2 = 0x4c4;
  }
  uVar4 = 0x18;
  if (iVar3 != 0) {
    uVar4 = 0x4c8;
  }
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_828,0xaa,uVar2);
  (*(code *)PTR_strncpy_0046883c)(auStack_824,param_3,0x10);
  local_814 = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_828,uVar4,param_1,param_2);
  if (-1 < iVar1) {
    uVar4 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0x1de0,uVar4,
               *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_4,param_3,iVar3,
               uVar2);
    return iVar1;
  }
  uVar4 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x1e38,uVar4,
             *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_4,param_3,iVar3,
             uVar2);
  return iVar1;
}



// ==== PPPP_Proto_Send_ProbeAck2 @ 00433eec size=408

/* tnp::PPPP_Proto_Send_ProbeAck2(int, sockaddr_in*, char*, unsigned int) */

int tnp::PPPP_Proto_Send_ProbeAck2(int param_1,sockaddr_in *param_2,char *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [16];
  undefined4 local_104;
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0xac,0x14);
  (*(code *)PTR_strncpy_0046883c)(auStack_114,param_3,0x10);
  local_104 = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x18,param_1,param_2);
  if (-1 < iVar1) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0x1d58,uVar2,
               *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_4,param_3);
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x1d94,uVar2,
             *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_4,param_3);
  return iVar1;
}



// ==== PPPP_Proto_Send_WakeUp @ 00434084 size=540

/* tnp::PPPP_Proto_Send_WakeUp(int, char, sockaddr_in*, char*, unsigned int, char*) */

int tnp::PPPP_Proto_Send_WakeUp
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_120 [28];
  undefined1 auStack_104 [8];
  undefined4 local_fc;
  undefined1 auStack_f8 [216];
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  iVar3 = (int)param_2;
  (*(code *)PTR_PPPP_Proto_Write_HeaderV2_004686cc)(auStack_120,0x1a,0x14,0,param_4,param_5);
  (*(code *)PTR_strncpy_0046883c)(auStack_104,param_4,7);
  local_fc = (*(code *)PTR___bswapsi2_004683d8)(param_5);
  (*(code *)PTR_strncpy_0046883c)(auStack_f8,param_6,7);
  if (iVar3 == 0) {
    iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0x30,param_1,param_3);
    uVar2 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar1 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_120,0x30,param_1);
    uVar2 = *(undefined4 *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0x1cd4,uVar2,
               *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8,param_4,param_5,param_6
               ,iVar3);
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(uVar2);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x1d28,uVar2,
             *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8,param_4,param_5,param_6,
             iVar3);
  return iVar1;
}



// ==== PPPP_Proto_Write_P2PServerReq @ 004342a0 size=432

/* tnp::PPPP_Proto_Write_P2PServerReq(tnp::st_PPPP_P2PServerReq*, char*, unsigned int, char*, char,
   char*, char*) */

void tnp::PPPP_Proto_Write_P2PServerReq
               (st_PPPP_P2PServerReq *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               char *param_6,char *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  char *pcVar33;
  uint uVar34;
  uint in_t0;
  uint uVar35;
  uint in_t1;
  undefined8 uVar36;
  
  pcVar33 = param_4;
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  uVar31 = 7;
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc);
  uVar36 = (*(code *)PTR___bswapsi2_004683d8)();
  *(int *)(param_1 + 8) = (int)uVar36;
  param_1[0x14] = (st_PPPP_P2PServerReq)param_5;
  uVar1 = (uint)(param_6 + 7) & 3;
  iVar8 = *(int *)(param_6 + 7 + -uVar1);
  uVar2 = (uint)(param_6 + 0xb) & 3;
  uVar3 = (uint)(param_6 + 0xf) & 3;
  uVar4 = (uint)(param_6 + 0x13) & 3;
  uVar5 = (uint)(param_6 + 0x17) & 3;
  uVar6 = (uint)(param_6 + 0x1b) & 3;
  uVar7 = (uint)(param_6 + 0x1f) & 3;
  uVar15 = (uint)(param_6 + 4) & 3;
  uVar20 = *(uint *)(param_6 + 4 + -uVar15);
  uVar16 = (uint)(param_6 + 8) & 3;
  uVar35 = (*(int *)(param_6 + 0xb + -uVar2) << (3 - uVar2) * 8 |
           in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar16) * 8 |
           *(uint *)(param_6 + 8 + -uVar16) >> uVar16 * 8;
  uVar2 = (uint)(param_6 + 0xc) & 3;
  uVar34 = (*(int *)(param_6 + 0xf + -uVar3) << (3 - uVar3) * 8 |
           (uint)pcVar33 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_6 + 0xc + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_6 + 0x10) & 3;
  uVar32 = (*(int *)(param_6 + 0x13 + -uVar4) << (3 - uVar4) * 8 |
           uVar31 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_6 + 0x10 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_6 + 0x14) & 3;
  uVar30 = (*(int *)(param_6 + 0x17 + -uVar5) << (3 - uVar5) * 8 |
           (uint)param_4 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_6 + 0x14 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_6 + 0x18) & 3;
  uVar29 = (*(int *)(param_6 + 0x1b + -uVar6) << (3 - uVar6) * 8 |
           param_3 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_6 + 0x18 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_6 + 0x1c) & 3;
  uVar28 = (*(int *)(param_6 + 0x1f + -uVar7) << (3 - uVar7) * 8 |
           (uint)((ulonglong)uVar36 >> 0x20) & 0xffffffffU >> (uVar7 + 1) * 8) &
           -1 << (4 - uVar2) * 8 | *(uint *)(param_6 + 0x1c + -uVar2) >> uVar2 * 8;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)param_6;
  *(uint *)(param_1 + 0x1c) =
       (iVar8 << (3 - uVar1) * 8 | in_t1 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8
       | uVar20 >> uVar15 * 8;
  *(uint *)(param_1 + 0x20) = uVar35;
  *(uint *)(param_1 + 0x24) = uVar34;
  *(uint *)(param_1 + 0x28) = uVar32;
  *(uint *)(param_1 + 0x2c) = uVar30;
  *(uint *)(param_1 + 0x30) = uVar29;
  *(uint *)(param_1 + 0x34) = uVar28;
  uVar1 = (uint)(param_7 + 7) & 3;
  iVar8 = *(int *)(param_7 + 7 + -uVar1);
  uVar2 = (uint)(param_7 + 0xb) & 3;
  iVar9 = *(int *)(param_7 + 0xb + -uVar2);
  uVar3 = (uint)(param_7 + 0xf) & 3;
  iVar10 = *(int *)(param_7 + 0xf + -uVar3);
  uVar4 = (uint)(param_7 + 0x13) & 3;
  iVar11 = *(int *)(param_7 + 0x13 + -uVar4);
  uVar5 = (uint)(param_7 + 0x17) & 3;
  iVar12 = *(int *)(param_7 + 0x17 + -uVar5);
  uVar6 = (uint)(param_7 + 0x1b) & 3;
  iVar13 = *(int *)(param_7 + 0x1b + -uVar6);
  uVar7 = (uint)(param_7 + 0x1f) & 3;
  iVar14 = *(int *)(param_7 + 0x1f + -uVar7);
  uVar15 = (uint)(param_7 + 4) & 3;
  uVar21 = *(uint *)(param_7 + 4 + -uVar15);
  uVar16 = (uint)(param_7 + 8) & 3;
  uVar22 = *(uint *)(param_7 + 8 + -uVar16);
  uVar20 = (uint)(param_7 + 0xc) & 3;
  uVar23 = *(uint *)(param_7 + 0xc + -uVar20);
  uVar31 = (uint)(param_7 + 0x10) & 3;
  uVar24 = *(uint *)(param_7 + 0x10 + -uVar31);
  uVar17 = (uint)(param_7 + 0x14) & 3;
  uVar25 = *(uint *)(param_7 + 0x14 + -uVar17);
  uVar18 = (uint)(param_7 + 0x18) & 3;
  uVar26 = *(uint *)(param_7 + 0x18 + -uVar18);
  uVar19 = (uint)(param_7 + 0x1c) & 3;
  uVar27 = *(uint *)(param_7 + 0x1c + -uVar19);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_7;
  *(uint *)(param_1 + 0x3c) =
       (iVar8 << (3 - uVar1) * 8 | uVar35 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8
       | uVar21 >> uVar15 * 8;
  *(uint *)(param_1 + 0x40) =
       (iVar9 << (3 - uVar2) * 8 | uVar34 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar16) * 8
       | uVar22 >> uVar16 * 8;
  *(uint *)(param_1 + 0x44) =
       (iVar10 << (3 - uVar3) * 8 | uVar32 & 0xffffffffU >> (uVar3 + 1) * 8) &
       -1 << (4 - uVar20) * 8 | uVar23 >> uVar20 * 8;
  *(uint *)(param_1 + 0x48) =
       (iVar11 << (3 - uVar4) * 8 | uVar30 & 0xffffffffU >> (uVar4 + 1) * 8) &
       -1 << (4 - uVar31) * 8 | uVar24 >> uVar31 * 8;
  *(uint *)(param_1 + 0x4c) =
       (iVar12 << (3 - uVar5) * 8 | uVar29 & 0xffffffffU >> (uVar5 + 1) * 8) &
       -1 << (4 - uVar17) * 8 | uVar25 >> uVar17 * 8;
  *(uint *)(param_1 + 0x50) =
       (iVar13 << (3 - uVar6) * 8 | uVar28 & 0xffffffffU >> (uVar6 + 1) * 8) &
       -1 << (4 - uVar18) * 8 | uVar26 >> uVar18 * 8;
  *(uint *)(param_1 + 0x54) =
       (iVar14 << (3 - uVar7) * 8 | (uint)(param_1 + 0x18) & 0xffffffffU >> (uVar7 + 1) * 8) &
       -1 << (4 - uVar19) * 8 | uVar27 >> uVar19 * 8;
  return;
}



// ==== PPPP_Proto_Send_P2PServerReq @ 00434450 size=656

/* tnp::PPPP_Proto_Send_P2PServerReq(int, char, sockaddr_in*, char*, unsigned int, char*, char,
   char*) */

int tnp::PPPP_Proto_Send_P2PServerReq
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char param_7,char *param_8)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 auStack_1d0 [4];
  undefined1 auStack_1cc [252];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [32];
  undefined4 local_30;
  
  (*(code *)PTR_memset_00468810)(auStack_1d0,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_1d0,4,0x58);
  (*(code *)PTR_memset_00468810)(auStack_90,0,0x40);
  (*(code *)PTR_memset_00468810)(auStack_d0,0,0x40);
  (*(code *)PTR_PPPP_MakeNonce_004686d4)(auStack_50,0x20);
  (*(code *)PTR_snprintf_004688b0)
            (auStack_90,0x40,PTR_DAT_00468298 + -0x44fc,0x20,auStack_50,param_4,param_5,param_6);
  local_30 = (*(code *)PTR_strlen_004687c0)(param_8);
  uVar2 = (*(code *)PTR_strlen_004687c0)(auStack_90);
  (*(code *)PTR_PPPP_MakeSha1_00468570)(param_8,local_30,auStack_90,uVar2,auStack_d0);
  (*(code *)PTR_memset_00468810)(auStack_1cc,0,0x58);
  (*(code *)PTR_PPPP_Proto_Write_P2PServerReq_004686d8)
            (auStack_1cc,param_4,param_5,param_6,(int)param_7,auStack_50,auStack_d0);
  if (param_2 == '\0') {
    iVar3 = (*(code *)PTR_SendMessage_0046856c)(auStack_1d0,0x5c,param_1,param_3);
    uVar2 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar3 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_1d0,0x5c,param_1);
    uVar2 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar3 < 0) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(uVar2);
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1c8c;
  }
  else {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1c5c;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar2,uVar1 >> 8 | uVar1 << 8);
  return iVar3;
}



// ==== PPPP_Proto_Send_DevOnline @ 004346e0 size=456

/* tnp::PPPP_Proto_Send_DevOnline(int, sockaddr_in*, char*, unsigned int, char*) */

int tnp::PPPP_Proto_Send_DevOnline
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [8];
  undefined4 local_114;
  undefined1 auStack_110 [244];
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,0x18,0x14);
  (*(code *)PTR_strncpy_0046883c)(auStack_11c,param_3,8);
  local_114 = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  (*(code *)PTR_strncpy_0046883c)(auStack_110,param_5,8);
  iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0x18,param_1,param_2);
  if (-1 < iVar1) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0x1bec,uVar2,
               *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_3,param_4,param_5
              );
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x1c38,uVar2,
             *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_3,param_4,param_5);
  return iVar1;
}



// ==== PPPP_Proto_Write_DevLgn @ 004348a8 size=208

/* tnp::PPPP_Proto_Write_DevLgn(tnp::st_PPPP_DevLgn*, char*, unsigned int, char*, char, unsigned
   char*, sockaddr_in*) */

void tnp::PPPP_Proto_Write_DevLgn
               (st_PPPP_DevLgn *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               uchar *param_6,sockaddr_in *param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  param_1[0x15] = (st_PPPP_DevLgn)*param_6;
  puVar1 = PTR___bswapsi2_004683d8;
  param_1[0x16] = *(st_PPPP_DevLgn *)(param_6 + 1);
  param_1[0x17] = *(st_PPPP_DevLgn *)(param_6 + 2);
  uVar2 = (*(code *)puVar1)(param_3);
  param_1[0x14] = (st_PPPP_DevLgn)param_5;
  *(undefined4 *)(param_1 + 8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00434970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_htonAddr_004686c8)(param_7,param_1 + 0x18);
  return;
}



// ==== PPPP_Proto_Send_DevLgn_Key @ 004350d8 size=1064

/* tnp::PPPP_Proto_Send_DevLgn_Key(int, char, sockaddr_in*, char*, unsigned int, char*, char,
   unsigned char*, sockaddr_in*, char*, char) */

int tnp::PPPP_Proto_Send_DevLgn_Key
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char param_7,uchar *param_8,sockaddr_in *param_9,char *param_10,
              char param_11)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 auStack_98 [64];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  local_38 = (int)param_11;
  local_30 = (int)param_2;
  local_34 = param_1;
  (*(code *)PTR_memset_00468810)(&local_1d8,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(&local_1d8,0x14,0x68);
  (*(code *)PTR_memset_00468810)(&local_1d4,0,0x68);
  local_1d4 = 0;
  local_1d0 = 0;
  local_1cc = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1bc = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  (*(code *)PTR_PPPP_Proto_Write_DevLgn_004686dc)
            (&local_1d4,param_4,param_5,param_6,(int)param_7,param_8,param_9);
  (*(code *)PTR_memset_00468810)(auStack_98,0,0x40);
  (*(code *)PTR_memset_00468810)(&local_d8,0,0x40);
  (*(code *)PTR_PPPP_MakeNonce_004686d4)(&local_58,0x20);
  local_1ac = local_58;
  local_1a8 = local_54;
  local_3c = CONCAT13((char)local_38,(undefined3)local_3c);
  local_1a4 = local_50;
  local_1a0 = local_4c;
  local_19c = local_48;
  local_198 = local_44;
  local_194 = local_40;
  local_190 = local_3c;
  (*(code *)PTR_snprintf_004688b0)
            (auStack_98,0x40,PTR_DAT_00468298 + -0x44fc,0x20,&local_58,param_4,param_5,param_6);
  local_38 = (*(code *)PTR_strlen_004687c0)(param_10);
  uVar2 = (*(code *)PTR_strlen_004687c0)(auStack_98);
  (*(code *)PTR_PPPP_MakeSha1_00468570)(param_10,local_38,auStack_98,uVar2,&local_d8);
  local_18c = local_d8;
  local_188 = local_d4;
  local_184 = local_d0;
  local_180 = local_cc;
  local_17c = local_c8;
  local_178 = local_c4;
  local_174 = local_c0;
  local_170 = local_bc;
  if (local_30 == 0) {
    iVar3 = (*(code *)PTR_SendMessage_0046856c)(&local_1d8,0x6c,local_34,param_3);
  }
  else {
    iVar3 = (*(code *)PTR_SendMessageByTCP_004686d0)(&local_1d8,0x6c,local_34);
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x1a7c,local_1d8,local_1d7,local_1d6,local_1d5,0x6c,param_4,
             param_5,param_6,&local_58,&local_1ac,&local_18c,(int)param_7);
  puVar4 = PTR_DAT_00468298;
  if (iVar3 < 0) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_3 + 4));
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,puVar4 + -0x19e0,uVar2,
               *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8);
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_3 + 4));
    puVar4 = puVar4 + -0x19e0;
    uVar1 = *(ushort *)(param_3 + 2);
  }
  else {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,puVar4 + -0x19b4,uVar2,
               *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8);
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_3 + 4));
    puVar4 = puVar4 + -0x19b4;
    uVar1 = *(ushort *)(param_3 + 2);
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(0x40000,puVar4,uVar2,uVar1 >> 8 | uVar1 << 8);
  return iVar3;
}



// ==== PPPP_Proto_Write_P2PReq @ 0043562c size=156

/* tnp::PPPP_Proto_Write_P2PReq(tnp::st_PPPP_P2PReq*, char*, unsigned int, char*, sockaddr_in*) */

void tnp::PPPP_Proto_Write_P2PReq
               (st_PPPP_P2PReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5)

{
  undefined4 uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x004356c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_htonAddr_004686c8)(param_5,param_1 + 0x14);
  return;
}



// ==== PPPP_Proto_Send_P2PReq @ 0043576c size=376

/* tnp::PPPP_Proto_Send_P2PReq(int, sockaddr_in*, char*, unsigned int, char*, sockaddr_in*) */

int tnp::PPPP_Proto_Send_P2PReq
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              sockaddr_in *param_6)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x20,0x24);
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  (*(code *)PTR_PPPP_Proto_Write_P2PReq_004686e4)(&local_114,param_3,param_4,param_5,param_6);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x28,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1940;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1918;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_RSLgn @ 00435b44 size=168

/* tnp::PPPP_Proto_Write_RSLgn(tnp::st_PPPP_RSLgn*, char*, unsigned int, char*, unsigned int,
   unsigned int) */

void tnp::PPPP_Proto_Write_RSLgn
               (st_PPPP_RSLgn *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
               uint param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = (*(code *)puVar1)(param_5);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = (*(code *)puVar1)(param_6);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}



// ==== PPPP_Proto_Write_RSLgn1 @ 00435f48 size=220

/* tnp::PPPP_Proto_Write_RSLgn1(tnp::st_PPPP_RSLgn1*, char*, unsigned int, char*, unsigned int,
   unsigned int, sockaddr_in*) */

void tnp::PPPP_Proto_Write_RSLgn1
               (st_PPPP_RSLgn1 *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
               uint param_6,sockaddr_in *param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = (*(code *)puVar1)(param_5);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = (*(code *)puVar1)(param_6);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0043601c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_htonAddr_004686c8)(param_7,param_1 + 0x1c);
  return;
}



// ==== PPPP_Proto_Send_RlyHello @ 004363c4 size=276

/* tnp::PPPP_Proto_Send_RlyHello(int, sockaddr_in*) */

int tnp::PPPP_Proto_Send_RlyHello(int param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_00468810)(auStack_110,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_110,0x70,0);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_110,4,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x174c;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1724;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Send_RlyHelloSDev @ 004365ec size=276

/* tnp::PPPP_Proto_Send_RlyHelloSDev(int, sockaddr_in*) */

int tnp::PPPP_Proto_Send_RlyHelloSDev(int param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_00468810)(auStack_110,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_110,0x76,0);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_110,4,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x16b4;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1684;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Send_RlyHelloSDevAck @ 00436700 size=276

/* tnp::PPPP_Proto_Send_RlyHelloSDevAck(int, sockaddr_in*) */

int tnp::PPPP_Proto_Send_RlyHelloSDevAck(int param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_00468810)(auStack_110,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_110,0x77,0);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_110,4,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1660;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x162c;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_RlyReq @ 00436814 size=188

/* tnp::PPPP_Proto_Write_RlyReq(tnp::st_PPPP_RlyReq*, char*, unsigned int, char*, sockaddr_in*,
   unsigned int) */

void tnp::PPPP_Proto_Write_RlyReq
               (st_PPPP_RlyReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5,uint param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = (*(code *)puVar1)(param_6);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x004368c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_htonAddr_004686c8)(param_5,param_1 + 0x14);
  return;
}



// ==== PPPP_Proto_Send_RlyReq @ 00436994 size=388

/* tnp::PPPP_Proto_Send_RlyReq(int, sockaddr_in*, char*, unsigned int, char*, sockaddr_in*, unsigned
   int) */

int tnp::PPPP_Proto_Send_RlyReq
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              sockaddr_in *param_6,uint param_7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x80,0x28);
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  (*(code *)PTR_PPPP_Proto_Write_RlyReq_004686f0)
            (&local_114,param_3,param_4,param_5,param_6,param_7);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x2c,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1604;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x15dc;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_RlyTo @ 00436c44 size=92

/* tnp::PPPP_Proto_Write_RlyTo(tnp::st_PPPP_RlyTo*, sockaddr_in*, unsigned int) */

void tnp::PPPP_Proto_Write_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00436c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_htonAddr_004686c8)(param_2,param_1);
  return;
}



// ==== PPPP_Proto_Read_RlyTo @ 00436ca0 size=96

/* tnp::PPPP_Proto_Read_RlyTo(tnp::st_PPPP_RlyTo*, sockaddr_in*, unsigned int*) */

void tnp::PPPP_Proto_Read_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint *param_3)

{
  undefined *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 0x10));
  UNRECOVERED_JUMPTABLE = PTR_ntohAddr_00468358;
  *param_3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00436cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



// ==== PPPP_Proto_Write_RlyToAck @ 00436e44 size=220

/* tnp::PPPP_Proto_Write_RlyToAck(tnp::st_PPPP_RlyToAck*, char*, unsigned int, char*, char, unsigned
   int, char) */

void tnp::PPPP_Proto_Write_RlyToAck
               (st_PPPP_RlyToAck *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               uint param_6,char param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x1c);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_6);
  puVar1 = PTR_strncpy_0046883c;
  *(undefined4 *)param_1 = uVar2;
  (*(code *)puVar1)(param_1 + 4,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0x10,param_4,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  param_1[0x18] = (st_PPPP_RlyToAck)param_5;
  param_1[0x19] = (st_PPPP_RlyToAck)param_7;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}



// ==== PPPP_Proto_Send_RlyToAck @ 00436f20 size=368

/* tnp::PPPP_Proto_Send_RlyToAck(int, sockaddr_in*, char*, unsigned int, char*, char, unsigned int,
   char) */

int tnp::PPPP_Proto_Send_RlyToAck
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char param_6,uint param_7,char param_8)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [252];
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,0x85,0x1c);
  (*(code *)PTR_PPPP_Proto_Write_RlyToAck_004686f8)
            (auStack_11c,param_3,param_4,param_5,(int)param_6,param_7,(int)param_8);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0x20,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1530;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1504;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_RlyPort_Key @ 004373b4 size=456

/* tnp::PPPP_Proto_Write_RlyPort_Key(tnp::st_PPPP_RlyPort_Key*, char*, unsigned int, char*, char*,
   char*) */

void tnp::PPPP_Proto_Write_RlyPort_Key
               (st_PPPP_RlyPort_Key *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               char *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  char *pcVar33;
  uint uVar34;
  uint in_t0;
  uint uVar35;
  uint in_t1;
  undefined8 uVar36;
  
  pcVar33 = param_4;
  (*(code *)PTR_memset_00468810)(param_1,0,0x54);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  uVar31 = 7;
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc);
  uVar36 = (*(code *)PTR___bswapsi2_004683d8)();
  *(int *)(param_1 + 8) = (int)uVar36;
  uVar1 = (uint)(param_5 + 7) & 3;
  iVar8 = *(int *)(param_5 + 7 + -uVar1);
  uVar2 = (uint)(param_5 + 0xb) & 3;
  uVar3 = (uint)(param_5 + 0xf) & 3;
  uVar4 = (uint)(param_5 + 0x13) & 3;
  uVar5 = (uint)(param_5 + 0x17) & 3;
  uVar6 = (uint)(param_5 + 0x1b) & 3;
  uVar7 = (uint)(param_5 + 0x1f) & 3;
  uVar15 = (uint)(param_5 + 4) & 3;
  uVar20 = *(uint *)(param_5 + 4 + -uVar15);
  uVar16 = (uint)(param_5 + 8) & 3;
  uVar35 = (*(int *)(param_5 + 0xb + -uVar2) << (3 - uVar2) * 8 |
           in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar16) * 8 |
           *(uint *)(param_5 + 8 + -uVar16) >> uVar16 * 8;
  uVar2 = (uint)(param_5 + 0xc) & 3;
  uVar34 = (*(int *)(param_5 + 0xf + -uVar3) << (3 - uVar3) * 8 |
           (uint)pcVar33 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_5 + 0xc + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_5 + 0x10) & 3;
  uVar32 = (*(int *)(param_5 + 0x13 + -uVar4) << (3 - uVar4) * 8 |
           uVar31 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_5 + 0x10 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_5 + 0x14) & 3;
  uVar30 = (*(int *)(param_5 + 0x17 + -uVar5) << (3 - uVar5) * 8 |
           (uint)param_4 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_5 + 0x14 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_5 + 0x18) & 3;
  uVar29 = (*(int *)(param_5 + 0x1b + -uVar6) << (3 - uVar6) * 8 |
           param_3 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_5 + 0x18 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_5 + 0x1c) & 3;
  uVar28 = (*(int *)(param_5 + 0x1f + -uVar7) << (3 - uVar7) * 8 |
           (uint)((ulonglong)uVar36 >> 0x20) & 0xffffffffU >> (uVar7 + 1) * 8) &
           -1 << (4 - uVar2) * 8 | *(uint *)(param_5 + 0x1c + -uVar2) >> uVar2 * 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_5;
  *(uint *)(param_1 + 0x18) =
       (iVar8 << (3 - uVar1) * 8 | in_t1 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8
       | uVar20 >> uVar15 * 8;
  *(uint *)(param_1 + 0x1c) = uVar35;
  *(uint *)(param_1 + 0x20) = uVar34;
  *(uint *)(param_1 + 0x24) = uVar32;
  *(uint *)(param_1 + 0x28) = uVar30;
  *(uint *)(param_1 + 0x2c) = uVar29;
  *(uint *)(param_1 + 0x30) = uVar28;
  uVar1 = (uint)(param_6 + 7) & 3;
  iVar8 = *(int *)(param_6 + 7 + -uVar1);
  uVar2 = (uint)(param_6 + 0xb) & 3;
  iVar9 = *(int *)(param_6 + 0xb + -uVar2);
  uVar3 = (uint)(param_6 + 0xf) & 3;
  iVar10 = *(int *)(param_6 + 0xf + -uVar3);
  uVar4 = (uint)(param_6 + 0x13) & 3;
  iVar11 = *(int *)(param_6 + 0x13 + -uVar4);
  uVar5 = (uint)(param_6 + 0x17) & 3;
  iVar12 = *(int *)(param_6 + 0x17 + -uVar5);
  uVar6 = (uint)(param_6 + 0x1b) & 3;
  iVar13 = *(int *)(param_6 + 0x1b + -uVar6);
  uVar7 = (uint)(param_6 + 0x1f) & 3;
  iVar14 = *(int *)(param_6 + 0x1f + -uVar7);
  uVar15 = (uint)(param_6 + 4) & 3;
  uVar21 = *(uint *)(param_6 + 4 + -uVar15);
  uVar16 = (uint)(param_6 + 8) & 3;
  uVar22 = *(uint *)(param_6 + 8 + -uVar16);
  uVar20 = (uint)(param_6 + 0xc) & 3;
  uVar23 = *(uint *)(param_6 + 0xc + -uVar20);
  uVar31 = (uint)(param_6 + 0x10) & 3;
  uVar24 = *(uint *)(param_6 + 0x10 + -uVar31);
  uVar17 = (uint)(param_6 + 0x14) & 3;
  uVar25 = *(uint *)(param_6 + 0x14 + -uVar17);
  uVar18 = (uint)(param_6 + 0x18) & 3;
  uVar26 = *(uint *)(param_6 + 0x18 + -uVar18);
  uVar19 = (uint)(param_6 + 0x1c) & 3;
  uVar27 = *(uint *)(param_6 + 0x1c + -uVar19);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)param_6;
  *(uint *)(param_1 + 0x38) =
       (iVar8 << (3 - uVar1) * 8 | uVar35 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8
       | uVar21 >> uVar15 * 8;
  *(uint *)(param_1 + 0x3c) =
       (iVar9 << (3 - uVar2) * 8 | uVar34 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar16) * 8
       | uVar22 >> uVar16 * 8;
  *(uint *)(param_1 + 0x40) =
       (iVar10 << (3 - uVar3) * 8 | uVar32 & 0xffffffffU >> (uVar3 + 1) * 8) &
       -1 << (4 - uVar20) * 8 | uVar23 >> uVar20 * 8;
  *(uint *)(param_1 + 0x44) =
       (iVar11 << (3 - uVar4) * 8 | uVar30 & 0xffffffffU >> (uVar4 + 1) * 8) &
       -1 << (4 - uVar31) * 8 | uVar24 >> uVar31 * 8;
  *(uint *)(param_1 + 0x48) =
       (iVar12 << (3 - uVar5) * 8 | uVar29 & 0xffffffffU >> (uVar5 + 1) * 8) &
       -1 << (4 - uVar17) * 8 | uVar25 >> uVar17 * 8;
  *(uint *)(param_1 + 0x4c) =
       (iVar13 << (3 - uVar6) * 8 | uVar28 & 0xffffffffU >> (uVar6 + 1) * 8) &
       -1 << (4 - uVar18) * 8 | uVar26 >> uVar18 * 8;
  *(uint *)(param_1 + 0x50) =
       (iVar14 << (3 - uVar7) * 8 | (uint)(param_1 + 0x14) & 0xffffffffU >> (uVar7 + 1) * 8) &
       -1 << (4 - uVar19) * 8 | uVar27 >> uVar19 * 8;
  return;
}



// ==== PPPP_Proto_Send_RlyPort_Key @ 00437724 size=600

/* tnp::PPPP_Proto_Send_RlyPort_Key(int, sockaddr_in*, char*, unsigned int, char*, char*) */

int tnp::PPPP_Proto_Send_RlyPort_Key
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char *param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 auStack_1d0 [4];
  undefined1 auStack_1cc [252];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [32];
  undefined4 local_30;
  
  (*(code *)PTR_memset_00468810)(auStack_1d0,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_1d0,0x74,0x54);
  (*(code *)PTR_memset_00468810)(auStack_90,0,0x40);
  (*(code *)PTR_memset_00468810)(auStack_d0,0,0x40);
  (*(code *)PTR_PPPP_MakeNonce_004686d4)(auStack_50,0x20);
  (*(code *)PTR_snprintf_004688b0)
            (auStack_90,0x40,PTR_DAT_00468298 + -0x44fc,0x20,auStack_50,param_3,param_4,param_5);
  local_30 = (*(code *)PTR_strlen_004687c0)(param_6);
  uVar2 = (*(code *)PTR_strlen_004687c0)(auStack_90);
  (*(code *)PTR_PPPP_MakeSha1_00468570)(param_6,local_30,auStack_90,uVar2,auStack_d0);
  (*(code *)PTR_memset_00468810)(auStack_1cc,0,0x54);
  (*(code *)PTR_PPPP_Proto_Write_RlyPort_Key_004686fc)
            (auStack_1cc,param_3,param_4,param_5,auStack_50,auStack_d0);
  iVar3 = (*(code *)PTR_SendMessage_0046856c)(auStack_1d0,0x58,param_1,param_2);
  if (iVar3 < 0) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x13ec;
  }
  else {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x13c0;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar2,uVar1 >> 8 | uVar1 << 8);
  return iVar3;
}



// ==== PPPP_Proto_Write_RlyPortAck_Key @ 0043797c size=144

/* tnp::PPPP_Proto_Write_RlyPortAck_Key(tnp::st_PPPP_RlyPortAck_Key*, unsigned int, unsigned short,
   char) */

void tnp::PPPP_Proto_Write_RlyPortAck_Key
               (st_PPPP_RlyPortAck_Key *param_1,uint param_2,ushort param_3,char param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR___bswapsi2_004683d8;
  *param_1 = (st_PPPP_RlyPortAck_Key)0x0;
  param_1[1] = (st_PPPP_RlyPortAck_Key)0x0;
  param_1[2] = (st_PPPP_RlyPortAck_Key)0x0;
  param_1[3] = (st_PPPP_RlyPortAck_Key)0x0;
  param_1[4] = (st_PPPP_RlyPortAck_Key)0x0;
  param_1[5] = (st_PPPP_RlyPortAck_Key)0x0;
  param_1[6] = (st_PPPP_RlyPortAck_Key)0x0;
  param_1[7] = (st_PPPP_RlyPortAck_Key)0x0;
  uVar2 = (*(code *)puVar1)(param_2);
  param_1[6] = (st_PPPP_RlyPortAck_Key)param_4;
  *(undefined4 *)param_1 = uVar2;
  *(ushort *)(param_1 + 4) = param_3 >> 8 | param_3 << 8;
  return;
}



// ==== PPPP_Proto_Read_RlyPortAck_Key @ 00437a0c size=132

/* tnp::PPPP_Proto_Read_RlyPortAck_Key(tnp::st_PPPP_RlyPortAck_Key*, unsigned int*, unsigned short*,
   char*) */

void tnp::PPPP_Proto_Read_RlyPortAck_Key
               (st_PPPP_RlyPortAck_Key *param_1,uint *param_2,ushort *param_3,char *param_4)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)param_1);
  uVar1 = *(ushort *)(param_1 + 4);
  *param_2 = uVar2;
  *param_3 = uVar1 >> 8 | uVar1 << 8;
  *param_4 = (char)param_1[6];
  return;
}



// ==== PPPP_Proto_Send_RlyPortAck_Key @ 00437a90 size=340

/* tnp::PPPP_Proto_Send_RlyPortAck_Key(int, sockaddr_in*, unsigned int, unsigned short, char) */

int tnp::PPPP_Proto_Send_RlyPortAck_Key
              (int param_1,sockaddr_in *param_2,uint param_3,ushort param_4,char param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [256];
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,0x75,8);
  (*(code *)PTR_PPPP_Proto_Write_RlyPortAck_Key_00468700)(auStack_11c,param_3,param_4,(int)param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0xc,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x13a0;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1370;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_RlyPkt @ 00437d18 size=204

/* tnp::PPPP_Proto_Write_RlyPkt(tnp::st_PPPP_RlyPkt*, char*, unsigned int, char*, char, unsigned
   int) */

void tnp::PPPP_Proto_Write_RlyPkt
               (st_PPPP_RlyPkt *param_1,char *param_2,uint param_3,char *param_4,char param_5,
               uint param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x1c);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_6);
  puVar1 = PTR_strncpy_0046883c;
  *(undefined4 *)param_1 = uVar2;
  (*(code *)puVar1)(param_1 + 4,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0x10,param_4,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  param_1[0x18] = (st_PPPP_RlyPkt)param_5;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}



// ==== PPPP_Proto_Read_RlyPkt @ 00437de4 size=184

/* tnp::PPPP_Proto_Read_RlyPkt(tnp::st_PPPP_RlyPkt*, char*, unsigned int*, char*, char*, unsigned
   int*) */

void tnp::PPPP_Proto_Read_RlyPkt
               (st_PPPP_RlyPkt *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,
               uint *param_6)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)param_1);
  puVar1 = PTR_strncpy_0046883c;
  *param_6 = uVar2;
  (*(code *)puVar1)(param_2,param_1 + 4,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0x10,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 0xc));
  *param_3 = uVar2;
  *param_5 = (char)param_1[0x18];
  return;
}



// ==== PPPP_Proto_Send_RlyPkt @ 00437e9c size=352

/* tnp::PPPP_Proto_Send_RlyPkt(int, sockaddr_in*, char*, unsigned int, char*, char, unsigned int) */

int tnp::PPPP_Proto_Send_RlyPkt
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char param_6,uint param_7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [256];
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,0x83,0x1c);
  (*(code *)PTR_PPPP_Proto_Write_RlyPkt_00468704)
            (auStack_11c,param_3,param_4,param_5,(int)param_6,param_7);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0x20,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x12f8;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x12d0;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_PunchPkt @ 00437ffc size=168

/* tnp::PPPP_Proto_Write_PunchPkt(tnp::st_PPPP_PunchPkt*, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Write_PunchPkt
               (st_PPPP_PunchPkt *param_1,char *param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x14);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ==== PPPP_Proto_Write_PunchPkt_EX @ 004380a4 size=84

/* tnp::PPPP_Proto_Write_PunchPkt_EX(tnp::st_PPPP_PunchPkt_EX*, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Write_PunchPkt_EX
               (st_PPPP_PunchPkt_EX *param_1,char *param_2,uint param_3,char *param_4)

{
  (*(code *)PTR_PPPP_Proto_Write_PunchPkt_00468708)();
  param_1[0x14] = (st_PPPP_PunchPkt_EX)0xd2;
  param_1[0x15] = (st_PPPP_PunchPkt_EX)0x2;
  param_1[0x16] = (st_PPPP_PunchPkt_EX)0xe;
  param_1[0x17] = (st_PPPP_PunchPkt_EX)0x0;
  return;
}



// ==== PPPP_Proto_Read_PunchPkt @ 004380f8 size=136

/* tnp::PPPP_Proto_Read_PunchPkt(tnp::st_PPPP_PunchPkt*, char*, unsigned int*, char*) */

void tnp::PPPP_Proto_Read_PunchPkt
               (st_PPPP_PunchPkt *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  return;
}



// ==== PPPP_Proto_Send_PunchPkt_EX @ 00438324 size=328

/* tnp::PPPP_Proto_Send_PunchPkt_EX(int, sockaddr_in*, char*, unsigned int, char*) */

int tnp::PPPP_Proto_Send_PunchPkt_EX
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x41,0x18);
  (*(code *)PTR_PPPP_Proto_Write_PunchPkt_EX_0046870c)(auStack_114,param_3,param_4,param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x1c,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x126c;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1240;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_P2PRdy @ 0043846c size=168

/* tnp::PPPP_Proto_Write_P2PRdy(tnp::st_PPPP_P2PRdy*, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Write_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x14);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ==== PPPP_Proto_Write_P2PRdy_EX @ 00438514 size=84

/* tnp::PPPP_Proto_Write_P2PRdy_EX(tnp::st_PPPP_P2PRdy_EX*, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Write_P2PRdy_EX
               (st_PPPP_P2PRdy_EX *param_1,char *param_2,uint param_3,char *param_4)

{
  (*(code *)PTR_PPPP_Proto_Write_P2PRdy_00468710)();
  param_1[0x14] = (st_PPPP_P2PRdy_EX)0xd2;
  param_1[0x15] = (st_PPPP_P2PRdy_EX)0x2;
  param_1[0x16] = (st_PPPP_P2PRdy_EX)0xe;
  param_1[0x17] = (st_PPPP_P2PRdy_EX)0x0;
  return;
}



// ==== PPPP_Proto_Read_P2PRdy @ 00438568 size=136

/* tnp::PPPP_Proto_Read_P2PRdy(tnp::st_PPPP_P2PRdy*, char*, unsigned int*, char*) */

void tnp::PPPP_Proto_Read_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  return;
}



// ==== PPPP_Proto_Send_P2PRdy @ 0043864c size=328

/* tnp::PPPP_Proto_Send_P2PRdy(int, sockaddr_in*, char*, unsigned int, char*) */

int tnp::PPPP_Proto_Send_P2PRdy
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x42,0x14);
  (*(code *)PTR_PPPP_Proto_Write_P2PRdy_00468710)(auStack_114,param_3,param_4,param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x18,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1220;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x11f8;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Send_P2PRdy_EX @ 00438794 size=328

/* tnp::PPPP_Proto_Send_P2PRdy_EX(int, sockaddr_in*, char*, unsigned int, char*) */

int tnp::PPPP_Proto_Send_P2PRdy_EX
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x42,0x18);
  (*(code *)PTR_PPPP_Proto_Write_P2PRdy_EX_00468714)(auStack_114,param_3,param_4,param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x1c,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x11dc;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x11b0;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Send_P2PRdy_Ack @ 004388dc size=276

/* tnp::PPPP_Proto_Send_P2PRdy_Ack(int, sockaddr_in*) */

int tnp::PPPP_Proto_Send_P2PRdy_Ack(int param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_00468810)(auStack_110,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_110,0x43,0);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_110,4,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1190;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x1164;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Send_LanSerch @ 004389f0 size=172

/* tnp::PPPP_Proto_Send_LanSerch(int, unsigned short) */

void tnp::PPPP_Proto_Send_LanSerch(int param_1,ushort param_2)

{
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_00468810)(auStack_110,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_110,0x30,0);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x1144,param_2);
  (*(code *)PTR_BroadcastMessage_00468718)(auStack_110,4,param_1,param_2);
  return;
}



// ==== PPPP_Proto_Send_LanNotify @ 00438a9c size=264

/* tnp::PPPP_Proto_Send_LanNotify(int, unsigned short, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Send_LanNotify
               (int param_1,ushort param_2,char *param_3,uint param_4,char *param_5)

{
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [8];
  undefined4 local_10c;
  undefined1 auStack_108 [240];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x31,0x14);
  (*(code *)PTR_strncpy_0046883c)(auStack_114,param_3,7);
  (*(code *)PTR_strncpy_0046883c)(auStack_108,param_5,7);
  local_10c = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x1120,param_2);
  (*(code *)PTR_BroadcastMessage_00468718)(auStack_118,0x18,param_1,param_2);
  return;
}



// ==== PPPP_Proto_Send_LanNotifyAck @ 00438ba4 size=368

/* tnp::PPPP_Proto_Send_LanNotifyAck(int, sockaddr_in*, char*, unsigned int, char*) */

int tnp::PPPP_Proto_Send_LanNotifyAck
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [8];
  undefined4 local_10c;
  undefined1 auStack_108 [240];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x32,0x14);
  (*(code *)PTR_strncpy_0046883c)(auStack_114,param_3,7);
  (*(code *)PTR_strncpy_0046883c)(auStack_108,param_5,7);
  local_10c = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x18,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x10f8;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x10c8;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_RlyRdy @ 00438d14 size=168

/* tnp::PPPP_Proto_Write_RlyRdy(tnp::st_PPPP_RlyRdy*, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Write_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x14);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ==== PPPP_Proto_Read_RlyRdy @ 00438dbc size=136

/* tnp::PPPP_Proto_Read_RlyRdy(tnp::st_PPPP_RlyRdy*, char*, unsigned int*, char*) */

void tnp::PPPP_Proto_Read_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  return;
}



// ==== PPPP_Proto_Send_RlyRdy @ 00438e44 size=328

/* tnp::PPPP_Proto_Send_RlyRdy(int, sockaddr_in*, char*, unsigned int, char*) */

int tnp::PPPP_Proto_Send_RlyRdy
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x84,0x14);
  (*(code *)PTR_PPPP_Proto_Write_RlyRdy_0046871c)(auStack_114,param_3,param_4,param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x18,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x10a4;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x107c;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_Connect_Report @ 00438f8c size=216

/* tnp::PPPP_Proto_Write_Connect_Report(tnp::st_PPPP_Connect_Report*, char*, unsigned char*, char,
   char*, int) */

void tnp::PPPP_Proto_Write_Connect_Report
               (st_PPPP_Connect_Report *param_1,char *param_2,uchar *param_3,char param_4,
               char *param_5,int param_6)

{
  st_PPPP_Connect_Report sVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,0x1f);
  param_1[0x20] = (st_PPPP_Connect_Report)*param_3;
  param_1[0x21] = *(st_PPPP_Connect_Report *)(param_3 + 1);
  sVar1 = *(st_PPPP_Connect_Report *)(param_3 + 2);
  param_1[0x23] = (st_PPPP_Connect_Report)param_4;
  param_1[0x22] = sVar1;
  if (param_4 != '\x01') {
    uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_6);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    return;
  }
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0x24,param_5,3);
  return;
}



// ==== PPPP_Proto_Send_Connect_Report @ 00439064 size=596

/* tnp::PPPP_Proto_Send_Connect_Report(int, char, sockaddr_in*, char*, unsigned char*, char, char*,
   int) */

int tnp::PPPP_Proto_Send_Connect_Report
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uchar *param_5,
              char param_6,char *param_7,int param_8)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 auStack_180 [4];
  undefined1 auStack_17c [252];
  undefined1 auStack_80 [64];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  (*(code *)PTR_memset_00468810)(auStack_80,0,0x40);
  (*(code *)PTR_strncpy_0046883c)(auStack_80,param_4,0x40);
  puVar2 = (undefined1 *)(*(code *)PTR_strchr_004687bc)(auStack_80,0x2d);
  puVar5 = PTR_strncpy_0046883c;
  *puVar2 = 0;
  (*(code *)puVar5)(&local_30,auStack_80,0x10);
  puVar2 = (undefined1 *)(*(code *)PTR_strchr_004687bc)(puVar2 + 1,0x2d);
  puVar5 = PTR_strncpy_0046883c;
  *puVar2 = 0;
  (*(code *)puVar5)(&local_40,puVar2 + 1,0x10);
  (*(code *)PTR_memset_00468810)(auStack_180,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_180,0xa0,0x28);
  (*(code *)PTR_PPPP_Proto_Write_Connect_Report_00468720)
            (auStack_17c,param_4,param_5,(int)param_6,param_7,param_8);
  if (param_2 == '\0') {
    iVar3 = (*(code *)PTR_SendMessage_0046856c)(auStack_180,0x2c,param_1,param_3);
    uVar4 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar3 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_180,0x2c,param_1);
    uVar4 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar3 < 0) {
    uVar4 = (*(code *)PTR_inet_ntoa_00468804)(uVar4);
    uVar1 = *(ushort *)(param_3 + 2);
    puVar5 = PTR_DAT_00468298 + -0x1060;
  }
  else {
    uVar4 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_3 + 2);
    puVar5 = PTR_DAT_00468298 + -0x1030;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar5,uVar4,uVar1 >> 8 | uVar1 << 8);
  return iVar3;
}



// ==== PPPP_Proto_Write_Report @ 004392b8 size=228

/* tnp::PPPP_Proto_Write_Report(tnp::st_PPPP_Report*, char*, char, char, char, short, char*) */

void tnp::PPPP_Proto_Write_Report
               (st_PPPP_Report *param_1,char *param_2,char param_3,char param_4,char param_5,
               short param_6,char *param_7)

{
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,0x17);
  param_1[0x19] = (st_PPPP_Report)param_3;
  param_1[0x1a] = (st_PPPP_Report)param_4;
  param_1[0x18] = (st_PPPP_Report)param_5;
  *(ushort *)(param_1 + 0x1c) = (ushort)param_6 >> 8 | param_6 << 8;
  if ((param_7 != (char *)0x0) && (*param_7 != '\0')) {
    (*(code *)PTR_strncpy_0046883c)(param_1 + 0x1e,param_7,0x1d);
    return;
  }
  return;
}



// ==== PPPP_Proto_Send_Report @ 0043939c size=712

/* tnp::PPPP_Proto_Send_Report(int, char, sockaddr_in*, char*, char, char, char, short, char*) */

int tnp::PPPP_Proto_Send_Report
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,char param_6
              ,char param_7,short param_8,char *param_9)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_190 [4];
  undefined1 auStack_18c [252];
  undefined1 auStack_90 [64];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  
  local_30 = (int)param_7;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  (*(code *)PTR_memset_00468810)(auStack_90,0,0x40);
  (*(code *)PTR_strncpy_0046883c)(auStack_90,param_4,0x40);
  puVar2 = (undefined1 *)(*(code *)PTR_strchr_004687bc)(auStack_90,0x2d);
  puVar1 = PTR_strncpy_0046883c;
  *puVar2 = 0;
  (*(code *)puVar1)(&local_40,auStack_90,0x10);
  puVar2 = (undefined1 *)(*(code *)PTR_strchr_004687bc)(puVar2 + 1,0x2d);
  puVar1 = PTR_strncpy_0046883c;
  *puVar2 = 0;
  (*(code *)puVar1)(&local_50,puVar2 + 1,0x10);
  (*(code *)PTR_memset_00468810)(auStack_190,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_190,0xa2,0x3c);
  (*(code *)PTR_PPPP_Proto_Write_Report_00468724)
            (auStack_18c,param_4,(int)param_5,(int)param_6,local_30,(int)param_8,param_9);
  if (param_2 == '\0') {
    iVar3 = (*(code *)PTR_SendMessage_0046856c)(auStack_190,0x40,param_1,param_3);
    uVar4 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar3 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_190,0x40,param_1);
    uVar4 = *(undefined4 *)(param_3 + 4);
  }
  if (-1 < iVar3) {
    uVar4 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0xfd8,uVar4,
               *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8,param_9);
    return iVar3;
  }
  uVar4 = (*(code *)PTR_inet_ntoa_00468804)(uVar4);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x100c,uVar4,
             *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8,param_9);
  return iVar3;
}



// ==== PPPP_Proto_Write_SDevReport @ 00439664 size=204

/* tnp::PPPP_Proto_Write_SDevReport(tnp::st_PPPP_SDev_Report*, char*, unsigned int, char*, char*,
   unsigned int, char*, char, char*) */

void tnp::PPPP_Proto_Write_SDevReport
               (st_PPPP_SDev_Report *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               uint param_6,char *param_7,char param_8,char *param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_00468298;
  (*(code *)PTR_sprintf_004687f0)(param_1,PTR_DAT_00468298 + -0x5694,param_5,param_6,param_7);
  (*(code *)PTR_sprintf_004687f0)(param_1 + 0x18,puVar1 + -0x5694,param_2,param_3,param_4);
  param_1[0x30] = (st_PPPP_SDev_Report)param_8;
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0x34,param_9,0x3f);
  return;
}



// ==== PPPP_Proto_Send_SDev_Report @ 00439730 size=448

/* tnp::PPPP_Proto_Send_SDev_Report(int, sockaddr_in*, char*, unsigned int, char*, char*, unsigned
   int, char*, char, char*) */

int tnp::PPPP_Proto_Send_SDev_Report
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char *param_6,uint param_7,char *param_8,char param_9,char *param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [252];
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,0x94,0x74);
  (*(code *)PTR_PPPP_Proto_Write_SDevReport_00468728)
            (auStack_11c,param_3,param_4,param_5,param_6,param_7,param_8,(int)param_9,param_10);
  iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0x78,param_1,param_2);
  if (-1 < iVar1) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0xf78,uVar2,
               *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_10);
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0xfb0,uVar2,
             *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8,param_10);
  return iVar1;
}



// ==== PPPP_Proto_Write_SDevSessionReport @ 004398f0 size=332

/* tnp::PPPP_Proto_Write_SDevSessionReport(tnp::st_PPPP_SDev_SessionReport*, unsigned int, char*,
   unsigned int, char*, char*, unsigned int, char*, char, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void tnp::PPPP_Proto_Write_SDevSessionReport
               (st_PPPP_SDev_SessionReport *param_1,uint param_2,char *param_3,uint param_4,
               char *param_5,char *param_6,uint param_7,char *param_8,char param_9,uint param_10,
               uint param_11,uint param_12,uint param_13,uint param_14)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_2);
  puVar1 = PTR_strncpy_0046883c;
  *(undefined4 *)param_1 = uVar2;
  (*(code *)puVar1)(param_1 + 4,param_3,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  puVar1 = PTR_strncpy_0046883c;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  (*(code *)puVar1)(param_1 + 0x10,param_5,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0x18,param_6,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_7);
  puVar1 = PTR_strncpy_0046883c;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  (*(code *)puVar1)(param_1 + 0x24,param_8,7);
  puVar1 = PTR___bswapsi2_004683d8;
  param_1[0x2c] = (st_PPPP_SDev_SessionReport)param_9;
  uVar2 = (*(code *)puVar1)(param_10);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = (*(code *)puVar1)(param_11);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = (*(code *)puVar1)(param_12);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = (*(code *)puVar1)(param_13);
  puVar1 = PTR___bswapsi2_004683d8;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = (*(code *)puVar1)(param_14);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return;
}



// ==== PPPP_Proto_Generate_SDev_SessionReport @ 00439a3c size=248

/* tnp::PPPP_Proto_Generate_SDev_SessionReport(char*, unsigned int, char*, unsigned int, char*,
   char*, unsigned int, char*, char, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int) */

undefined4
tnp::PPPP_Proto_Generate_SDev_SessionReport
          (char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char *param_6,
          uint param_7,char *param_8,char param_9,uint param_10,uint param_11,uint param_12,
          uint param_13,uint param_14)

{
  (*(code *)PTR_PPPP_Proto_Write_HeaderV2_004686cc)(param_1,0x93,0x44,1,param_6,param_7);
  (*(code *)PTR_PPPP_Proto_Write_SDevSessionReport_0046872c)
            (param_1 + 0x1c,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int)param_9,
             param_10,param_11,param_12,param_13,param_14);
  return 0x60;
}



// ==== PPPP_Proto_Generate_SendDataReport @ 00439b34 size=236

/* tnp::PPPP_Proto_Generate_SendDataReport(char*, unsigned int, char*, unsigned int, char*, char,
   char) */

undefined4
tnp::PPPP_Proto_Generate_SendDataReport
          (char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char param_6,
          char param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_PPPP_Proto_Write_HeaderV2_004686cc)(param_1,0xa4,0x1c,1,param_3,param_4);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_2);
  puVar1 = PTR_strncpy_0046883c;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  (*(code *)puVar1)(param_1 + 0x20,param_3,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  puVar1 = PTR_strncpy_0046883c;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  (*(code *)puVar1)(param_1 + 0x2c,param_5,7);
  param_1[0x34] = param_6;
  param_1[0x35] = param_7;
  return 0x38;
}



// ==== PPPP_DRW_Write_Header @ 00439c20 size=36

/* tnp::PPPP_DRW_Write_Header(tnp::st_PPPP_DRWHeader*, unsigned char, unsigned short) */

void tnp::PPPP_DRW_Write_Header(st_PPPP_DRWHeader *param_1,uchar param_2,ushort param_3)

{
  param_1[1] = (st_PPPP_DRWHeader)param_2;
  *param_1 = (st_PPPP_DRWHeader)0xd1;
  *(ushort *)(param_1 + 2) = param_3 >> 8 | param_3 << 8;
  return;
}



// ==== PPPP_DRW_Read_Header @ 00439c44 size=64

/* tnp::PPPP_DRW_Read_Header(tnp::st_PPPP_DRWHeader*, unsigned char*, unsigned short*) */

undefined4 tnp::PPPP_DRW_Read_Header(st_PPPP_DRWHeader *param_1,uchar *param_2,ushort *param_3)

{
  if (*param_1 == (st_PPPP_DRWHeader)0xd1) {
    *param_3 = *(ushort *)(param_1 + 2) >> 8 | *(ushort *)(param_1 + 2) << 8;
    *param_2 = (uchar)param_1[1];
    return 0;
  }
  return 0xffffffff;
}



// ==== PPPP_DRWAck_Write_Header @ 00439c84 size=36

/* tnp::PPPP_DRWAck_Write_Header(tnp::st_PPPP_DRWAckHeader*, unsigned char, unsigned short) */

void tnp::PPPP_DRWAck_Write_Header(st_PPPP_DRWAckHeader *param_1,uchar param_2,ushort param_3)

{
  param_1[1] = (st_PPPP_DRWAckHeader)param_2;
  *param_1 = (st_PPPP_DRWAckHeader)0xd1;
  *(ushort *)(param_1 + 2) = param_3 >> 8 | param_3 << 8;
  return;
}



// ==== PPPP_DRWAck_Read_Header @ 00439ca8 size=64

/* tnp::PPPP_DRWAck_Read_Header(tnp::st_PPPP_DRWAckHeader*, unsigned char*, unsigned short*) */

undefined4
tnp::PPPP_DRWAck_Read_Header(st_PPPP_DRWAckHeader *param_1,uchar *param_2,ushort *param_3)

{
  if (*param_1 == (st_PPPP_DRWAckHeader)0xd1) {
    *param_3 = *(ushort *)(param_1 + 2) >> 8 | *(ushort *)(param_1 + 2) << 8;
    *param_2 = (uchar)param_1[1];
    return 0;
  }
  return 0xffffffff;
}



// ==== PPPP_DRWAck_Send @ 00439ce8 size=592

/* tnp::PPPP_DRWAck_Send(int, char, sockaddr_in*, unsigned char, unsigned short*, unsigned short) */

int tnp::PPPP_DRWAck_Send
              (int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort *param_5,
              ushort param_6)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 auStack_530 [4];
  undefined1 auStack_52c [4];
  ushort local_528 [636];
  int local_30;
  
  local_30 = (int)param_2;
  uVar2 = (uint)param_6;
  iVar6 = uVar2 * 2;
  (*(code *)PTR_memset_00468810)(auStack_530,0,0x500);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_530,0xd1,iVar6 + 4U & 0xfffe);
  (*(code *)PTR_PPPP_DRWAck_Write_Header_00468730)(auStack_52c,param_4,uVar2);
  if ((param_5 != (ushort *)0x0) && (uVar2 != 0)) {
    puVar5 = PTR_DAT_00468298 + -0xf4c;
    puVar3 = local_528;
    do {
      (*(code *)PTR_PPPP_DebugTrace_00468294)(0x100,puVar5,param_4,*param_5);
      puVar4 = puVar3 + 1;
      *puVar3 = *param_5 >> 8 | *param_5 << 8;
      puVar3 = puVar4;
      param_5 = param_5 + 1;
    } while (puVar4 != local_528 + uVar2);
  }
  if (local_30 == 0) {
    iVar6 = (*(code *)PTR_SendMessage_0046856c)(auStack_530,iVar6 + 8,param_1,param_3);
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar6 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_530,iVar6 + 8,param_1);
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar6 < 0) {
    uVar1 = (*(code *)PTR_inet_ntoa_00468804)(uVar1);
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (0x2000,PTR_DAT_00468298 + -0xf0c,iVar6,uVar1,
               *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8);
    return iVar6;
  }
  uVar1 = (*(code *)PTR_inet_ntoa_00468804)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x2000,PTR_DAT_00468298 + -0xee4,uVar1,
             *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8);
  return iVar6;
}



// ==== PPPP_DRW_Send @ 00439f38 size=524

/* tnp::PPPP_DRW_Send(int, char, sockaddr_in*, unsigned char, unsigned short, char*, unsigned short)
    */

int tnp::PPPP_DRW_Send(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort param_5,
                      char *param_6,ushort param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_528 [4];
  undefined1 auStack_524 [4];
  undefined1 auStack_520 [1276];
  
  uVar3 = (uint)param_7;
  (*(code *)PTR_memset_00468810)(auStack_528,0,0x500);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_528,0xd0,uVar3 + 4 & 0xffff);
  (*(code *)PTR_PPPP_DRW_Write_Header_00468734)(auStack_524,param_4,param_5);
  if ((param_6 != (char *)0x0) && (uVar3 != 0)) {
    (*(code *)PTR_memcpy_00468898)(auStack_520,param_6,uVar3);
  }
  if (param_2 == '\0') {
    iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_528,uVar3 + 8,param_1,param_3);
    uVar2 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar1 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_528,uVar3 + 8,param_1);
    uVar2 = *(undefined4 *)(param_3 + 4);
  }
  if (-1 < iVar1) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (0x2000,PTR_DAT_00468298 + -0xea8,uVar2,
               *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8,param_4,param_5,uVar3);
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(uVar2);
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (0x2000,PTR_DAT_00468298 + -0xecc,iVar1,uVar2,
             *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8);
  return iVar1;
}



// ==== PPPP_Proto_Send_Alive @ 0043a144 size=316

/* tnp::PPPP_Proto_Send_Alive(int, char, sockaddr_in*) */

int tnp::PPPP_Proto_Send_Alive(int param_1,char param_2,sockaddr_in *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [260];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0xe0,0);
  if (param_2 == '\0') {
    iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,4,param_1,param_3);
  }
  else {
    iVar1 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_118,4,param_1);
  }
  if (-1 < iVar1) {
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_3 + 4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0xe70,iVar1,uVar2,
             *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8);
  return iVar1;
}



// ==== PPPP_Proto_Send_AliveAck @ 0043a280 size=316

/* tnp::PPPP_Proto_Send_AliveAck(int, char, sockaddr_in*) */

int tnp::PPPP_Proto_Send_AliveAck(int param_1,char param_2,sockaddr_in *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [260];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0xe1,0);
  if (param_2 == '\0') {
    iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,4,param_1,param_3);
  }
  else {
    iVar1 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_118,4,param_1);
  }
  if (-1 < iVar1) {
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_3 + 4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0xe48,iVar1,uVar2,
             *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8);
  return iVar1;
}



// ==== PPPP_Proto_Send_BitrateInfo @ 0043a3bc size=396

/* tnp::PPPP_Proto_Send_BitrateInfo(int, char, sockaddr_in*, unsigned int, unsigned int) */

int tnp::PPPP_Proto_Send_BitrateInfo
              (int param_1,char param_2,sockaddr_in *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_120 [4];
  undefined4 local_11c;
  undefined4 local_118;
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,0xe5,8);
  local_11c = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  local_118 = (*(code *)PTR___bswapsi2_004683d8)(param_5);
  if (param_2 == '\0') {
    iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0xc,param_1,param_3);
  }
  else {
    iVar1 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_120,0xc,param_1);
  }
  if (-1 < iVar1) {
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_3 + 4));
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0xe1c,iVar1,uVar2,
             *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8,param_4,param_5);
  return iVar1;
}



// ==== PPPP_Proto_Send_Close @ 0043a548 size=336

/* tnp::PPPP_Proto_Send_Close(int, char, sockaddr_in*) */

int tnp::PPPP_Proto_Send_Close(int param_1,char param_2,sockaddr_in *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [260];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0xf0,0);
  if (param_2 == '\0') {
    iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,4,param_1,param_3);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar2 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_118,4,param_1);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(uVar3);
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0xdd0;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0xdac;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Send_HelloToAck @ 0043a9d4 size=276

/* tnp::PPPP_Proto_Send_HelloToAck(int, sockaddr_in*) */

int tnp::PPPP_Proto_Send_HelloToAck(int param_1,sockaddr_in *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_00468810)(auStack_110,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_110,3,0);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_110,4,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0xc88;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0xc5c;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Read_RlyPortKey @ 0043ac3c size=204

/* tnp::PPPP_Proto_Read_RlyPortKey(tnp::st_PPPP_RlyPort_Key*, char*, unsigned int*, char*, char*,
   char*) */

void tnp::PPPP_Proto_Read_RlyPortKey
               (st_PPPP_RlyPort_Key *param_1,char *param_2,uint *param_3,char *param_4,char *param_5
               ,char *param_6)

{
  undefined *puVar1;
  uint uVar2;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  puVar1 = PTR_strncpy_0046883c;
  *param_3 = uVar2;
  (*(code *)puVar1)(param_5,param_1 + 0x14,0x20);
  (*(code *)PTR_strncpy_0046883c)(param_6,param_1 + 0x34,0x20);
  return;
}



// ==== PPPP_Proto_Read_LanNotify @ 0043ad08 size=136

/* tnp::PPPP_Proto_Read_LanNotify(tnp::st_PPPP_LanNotify*, char*, unsigned int*, char*) */

void tnp::PPPP_Proto_Read_LanNotify
               (st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  return;
}



// ==== PPPP_Proto_Read_LanNotifyAck @ 0043ad90 size=24

/* tnp::PPPP_Proto_Read_LanNotifyAck(tnp::st_PPPP_LanNotify*, char*, unsigned int*, char*) */

void tnp::PPPP_Proto_Read_LanNotifyAck
               (st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0043ada0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_PPPP_Proto_Read_LanNotify_004684a8)();
  return;
}



// ==== PPPP_Proto_Write_SDevLgn @ 0043ada8 size=168

/* tnp::PPPP_Proto_Write_SDevLgn(tnp::st_PPPP_SDevLgn*, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Write_SDevLgn
               (st_PPPP_SDevLgn *param_1,char *param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x14);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ==== PPPP_Proto_Send_SDevLgn @ 0043aed8 size=340

/* tnp::PPPP_Proto_Send_SDevLgn(int, sockaddr_in*, char*, unsigned int, char*) */

int tnp::PPPP_Proto_Send_SDevLgn
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [28];
  undefined1 auStack_fc [228];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_HeaderV2_004686cc)(auStack_118,0x91,0x14,1,param_3,param_4);
  (*(code *)PTR_PPPP_Proto_Write_SDevLgn_00468738)(auStack_fc,param_3,param_4,param_5);
  iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x30,param_1,param_2);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0xbf8;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0xbd0;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_ListReq1 @ 0043b4ac size=168

/* tnp::PPPP_Proto_Write_ListReq1(tnp::st_PPPP_ListReq1*, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Write_ListReq1
               (st_PPPP_ListReq1 *param_1,char *param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x14);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ==== PPPP_Proto_Write_RlyServerReq @ 0043b724 size=168

/* tnp::PPPP_Proto_Write_RlyServerReq(tnp::st_PPPP_RlyServerReq*, char*, unsigned int, char*) */

void tnp::PPPP_Proto_Write_RlyServerReq
               (st_PPPP_RlyServerReq *param_1,char *param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x14);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ==== PPPP_Proto_Send_RlyServerReq @ 0043b7cc size=376

/* tnp::PPPP_Proto_Send_RlyServerReq(int, char, sockaddr_in*, char*, unsigned int, char*, char) */

int tnp::PPPP_Proto_Send_RlyServerReq
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char param_7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x87,0x14);
  (*(code *)PTR_PPPP_Proto_Write_RlyServerReq_00468740)(auStack_114,param_4,param_5,param_6);
  if (param_2 == '\0') {
    iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x18,param_1,param_3);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar2 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_118,0x18,param_1);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(uVar3);
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0xa84;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0xa54;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_RlyTCPStart @ 0043b944 size=456

/* tnp::PPPP_Proto_Write_RlyTCPStart(tnp::st_PPPP_RlyTCPStart*, char*, unsigned int, char*, char*,
   char*) */

void tnp::PPPP_Proto_Write_RlyTCPStart
               (st_PPPP_RlyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               char *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  char *pcVar33;
  uint uVar34;
  uint in_t0;
  uint uVar35;
  uint in_t1;
  undefined8 uVar36;
  
  pcVar33 = param_4;
  (*(code *)PTR_memset_00468810)(param_1,0,0x54);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  uVar31 = 7;
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc);
  uVar36 = (*(code *)PTR___bswapsi2_004683d8)();
  *(int *)(param_1 + 8) = (int)uVar36;
  uVar1 = (uint)(param_5 + 7) & 3;
  iVar8 = *(int *)(param_5 + 7 + -uVar1);
  uVar2 = (uint)(param_5 + 0xb) & 3;
  uVar3 = (uint)(param_5 + 0xf) & 3;
  uVar4 = (uint)(param_5 + 0x13) & 3;
  uVar5 = (uint)(param_5 + 0x17) & 3;
  uVar6 = (uint)(param_5 + 0x1b) & 3;
  uVar7 = (uint)(param_5 + 0x1f) & 3;
  uVar15 = (uint)(param_5 + 4) & 3;
  uVar20 = *(uint *)(param_5 + 4 + -uVar15);
  uVar16 = (uint)(param_5 + 8) & 3;
  uVar35 = (*(int *)(param_5 + 0xb + -uVar2) << (3 - uVar2) * 8 |
           in_t0 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar16) * 8 |
           *(uint *)(param_5 + 8 + -uVar16) >> uVar16 * 8;
  uVar2 = (uint)(param_5 + 0xc) & 3;
  uVar34 = (*(int *)(param_5 + 0xf + -uVar3) << (3 - uVar3) * 8 |
           (uint)pcVar33 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_5 + 0xc + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_5 + 0x10) & 3;
  uVar32 = (*(int *)(param_5 + 0x13 + -uVar4) << (3 - uVar4) * 8 |
           uVar31 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_5 + 0x10 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_5 + 0x14) & 3;
  uVar30 = (*(int *)(param_5 + 0x17 + -uVar5) << (3 - uVar5) * 8 |
           (uint)param_4 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_5 + 0x14 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_5 + 0x18) & 3;
  uVar29 = (*(int *)(param_5 + 0x1b + -uVar6) << (3 - uVar6) * 8 |
           param_3 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar2) * 8 |
           *(uint *)(param_5 + 0x18 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_5 + 0x1c) & 3;
  uVar28 = (*(int *)(param_5 + 0x1f + -uVar7) << (3 - uVar7) * 8 |
           (uint)((ulonglong)uVar36 >> 0x20) & 0xffffffffU >> (uVar7 + 1) * 8) &
           -1 << (4 - uVar2) * 8 | *(uint *)(param_5 + 0x1c + -uVar2) >> uVar2 * 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_5;
  *(uint *)(param_1 + 0x18) =
       (iVar8 << (3 - uVar1) * 8 | in_t1 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8
       | uVar20 >> uVar15 * 8;
  *(uint *)(param_1 + 0x1c) = uVar35;
  *(uint *)(param_1 + 0x20) = uVar34;
  *(uint *)(param_1 + 0x24) = uVar32;
  *(uint *)(param_1 + 0x28) = uVar30;
  *(uint *)(param_1 + 0x2c) = uVar29;
  *(uint *)(param_1 + 0x30) = uVar28;
  uVar1 = (uint)(param_6 + 7) & 3;
  iVar8 = *(int *)(param_6 + 7 + -uVar1);
  uVar2 = (uint)(param_6 + 0xb) & 3;
  iVar9 = *(int *)(param_6 + 0xb + -uVar2);
  uVar3 = (uint)(param_6 + 0xf) & 3;
  iVar10 = *(int *)(param_6 + 0xf + -uVar3);
  uVar4 = (uint)(param_6 + 0x13) & 3;
  iVar11 = *(int *)(param_6 + 0x13 + -uVar4);
  uVar5 = (uint)(param_6 + 0x17) & 3;
  iVar12 = *(int *)(param_6 + 0x17 + -uVar5);
  uVar6 = (uint)(param_6 + 0x1b) & 3;
  iVar13 = *(int *)(param_6 + 0x1b + -uVar6);
  uVar7 = (uint)(param_6 + 0x1f) & 3;
  iVar14 = *(int *)(param_6 + 0x1f + -uVar7);
  uVar15 = (uint)(param_6 + 4) & 3;
  uVar21 = *(uint *)(param_6 + 4 + -uVar15);
  uVar16 = (uint)(param_6 + 8) & 3;
  uVar22 = *(uint *)(param_6 + 8 + -uVar16);
  uVar20 = (uint)(param_6 + 0xc) & 3;
  uVar23 = *(uint *)(param_6 + 0xc + -uVar20);
  uVar31 = (uint)(param_6 + 0x10) & 3;
  uVar24 = *(uint *)(param_6 + 0x10 + -uVar31);
  uVar17 = (uint)(param_6 + 0x14) & 3;
  uVar25 = *(uint *)(param_6 + 0x14 + -uVar17);
  uVar18 = (uint)(param_6 + 0x18) & 3;
  uVar26 = *(uint *)(param_6 + 0x18 + -uVar18);
  uVar19 = (uint)(param_6 + 0x1c) & 3;
  uVar27 = *(uint *)(param_6 + 0x1c + -uVar19);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)param_6;
  *(uint *)(param_1 + 0x38) =
       (iVar8 << (3 - uVar1) * 8 | uVar35 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar15) * 8
       | uVar21 >> uVar15 * 8;
  *(uint *)(param_1 + 0x3c) =
       (iVar9 << (3 - uVar2) * 8 | uVar34 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar16) * 8
       | uVar22 >> uVar16 * 8;
  *(uint *)(param_1 + 0x40) =
       (iVar10 << (3 - uVar3) * 8 | uVar32 & 0xffffffffU >> (uVar3 + 1) * 8) &
       -1 << (4 - uVar20) * 8 | uVar23 >> uVar20 * 8;
  *(uint *)(param_1 + 0x44) =
       (iVar11 << (3 - uVar4) * 8 | uVar30 & 0xffffffffU >> (uVar4 + 1) * 8) &
       -1 << (4 - uVar31) * 8 | uVar24 >> uVar31 * 8;
  *(uint *)(param_1 + 0x48) =
       (iVar12 << (3 - uVar5) * 8 | uVar29 & 0xffffffffU >> (uVar5 + 1) * 8) &
       -1 << (4 - uVar17) * 8 | uVar25 >> uVar17 * 8;
  *(uint *)(param_1 + 0x4c) =
       (iVar13 << (3 - uVar6) * 8 | uVar28 & 0xffffffffU >> (uVar6 + 1) * 8) &
       -1 << (4 - uVar18) * 8 | uVar26 >> uVar18 * 8;
  *(uint *)(param_1 + 0x50) =
       (iVar14 << (3 - uVar7) * 8 | (uint)(param_1 + 0x14) & 0xffffffffU >> (uVar7 + 1) * 8) &
       -1 << (4 - uVar19) * 8 | uVar27 >> uVar19 * 8;
  return;
}



// ==== PPPP_Proto_Send_RlyTCPStart @ 0043bb0c size=596

/* tnp::PPPP_Proto_Send_RlyTCPStart(int, sockaddr_in*, char*, unsigned int, char*, char*) */

int tnp::PPPP_Proto_Send_RlyTCPStart
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char *param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 auStack_1d0 [4];
  undefined1 auStack_1cc [252];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [32];
  undefined4 local_30;
  
  (*(code *)PTR_memset_00468810)(auStack_1d0,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_1d0,0x88,0x54);
  (*(code *)PTR_memset_00468810)(auStack_90,0,0x40);
  (*(code *)PTR_memset_00468810)(auStack_d0,0,0x40);
  (*(code *)PTR_PPPP_MakeNonce_004686d4)(auStack_50,0x20);
  (*(code *)PTR_snprintf_004688b0)
            (auStack_90,0x40,PTR_DAT_00468298 + -0x44fc,0x20,auStack_50,param_3,param_4,param_5);
  local_30 = (*(code *)PTR_strlen_004687c0)(param_6);
  uVar2 = (*(code *)PTR_strlen_004687c0)(auStack_90);
  (*(code *)PTR_PPPP_MakeSha1_00468570)(param_6,local_30,auStack_90,uVar2,auStack_d0);
  (*(code *)PTR_memset_00468810)(auStack_1cc,0,0x54);
  (*(code *)PTR_PPPP_Proto_Write_RlyTCPStart_00468744)
            (auStack_1cc,param_3,param_4,param_5,auStack_50,auStack_d0);
  iVar3 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_1d0,0x58,param_1);
  if (iVar3 < 0) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0xa34;
  }
  else {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0xa08;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar2,uVar1 >> 8 | uVar1 << 8);
  return iVar3;
}



// ==== PPPP_Proto_Write_RlyTCPReq @ 0043bd60 size=288

/* tnp::PPPP_Proto_Write_RlyTCPReq(tnp::st_PPPP_RlyTCPReq*, char*, unsigned int, char*,
   sockaddr_in*, char*) */

void tnp::PPPP_Proto_Write_RlyTCPReq
               (st_PPPP_RlyTCPReq *param_1,char *param_2,uint param_3,char *param_4,
               sockaddr_in *param_5,char *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 0xc);
  uVar3 = *(undefined4 *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)param_6;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar3 = *(undefined4 *)(param_5 + 0xc);
  uVar2 = *(undefined4 *)(param_5 + 4);
  uVar1 = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_5;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  return;
}



// ==== PPPP_Proto_Send_RlyTCPReq @ 0043be80 size=448

/* tnp::PPPP_Proto_Send_RlyTCPReq(int, char, sockaddr_in*, char*, unsigned int, char*, sockaddr_in*,
   char*) */

int tnp::PPPP_Proto_Send_RlyTCPReq
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,sockaddr_in *param_7,char *param_8)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x89,0x34);
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  (*(code *)PTR_PPPP_Proto_Write_RlyTCPReq_00468748)
            (&local_114,param_4,param_5,param_6,param_7,param_8);
  if (param_2 == '\0') {
    iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x38,param_1,param_3);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar2 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_118,0x38,param_1);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(uVar3);
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0x9e4;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0x9b8;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_EasyTCPStart @ 0043c040 size=144

/* tnp::PPPP_Proto_Write_EasyTCPStart(tnp::st_PPPP_EasyTCPStart*, char*, unsigned int, char*, char)
    */

void tnp::PPPP_Proto_Write_EasyTCPStart
               (st_PPPP_EasyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char param_5)

{
  undefined4 uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  param_1[0x14] = (st_PPPP_EasyTCPStart)param_5;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ==== PPPP_Proto_Send_EasyTCPStart @ 0043c0d0 size=720

/* tnp::PPPP_Proto_Send_EasyTCPStart(int, sockaddr_in*, char*, unsigned int, char*, char, char*) */

int tnp::PPPP_Proto_Send_EasyTCPStart
              (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,
              char param_6,char *param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_1c8 [4];
  undefined1 auStack_1c4 [24];
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_88 [64];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  (*(code *)PTR_memset_00468810)(auStack_1c8,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_1c8,0x8c,0x58);
  (*(code *)PTR_memset_00468810)(auStack_1c4,0,0x58);
  (*(code *)PTR_PPPP_Proto_Write_EasyTCPStart_0046874c)
            (auStack_1c4,param_3,param_4,param_5,(int)param_6);
  (*(code *)PTR_memset_00468810)(auStack_88,0,0x40);
  (*(code *)PTR_memset_00468810)(&local_c8,0,0x40);
  (*(code *)PTR_PPPP_MakeNonce_004686d4)(&local_48,0x20);
  local_1ac = local_48;
  local_1a8 = local_44;
  local_1a4 = local_40;
  local_1a0 = local_3c;
  local_19c = local_38;
  local_198 = local_34;
  local_194 = local_30;
  local_190 = local_2c;
  (*(code *)PTR_snprintf_004688b0)
            (auStack_88,0x40,PTR_DAT_00468298 + -0x44fc,0x20,&local_48,param_3,param_4,param_5);
  uVar2 = (*(code *)PTR_strlen_004687c0)(param_7);
  uVar3 = (*(code *)PTR_strlen_004687c0)(auStack_88);
  (*(code *)PTR_PPPP_MakeSha1_00468570)(param_7,uVar2,auStack_88,uVar3,&local_c8);
  local_18c = local_c8;
  local_188 = local_c4;
  local_184 = local_c0;
  local_180 = local_bc;
  local_17c = local_b8;
  local_178 = local_b4;
  local_174 = local_b0;
  local_170 = local_ac;
  iVar4 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_1c8,0x5c,param_1);
  if (iVar4 < 0) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar5 = PTR_DAT_00468298 + -0x998;
  }
  else {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar5 = PTR_DAT_00468298 + -0x968;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar5,uVar2,uVar1 >> 8 | uVar1 << 8);
  return iVar4;
}



// ==== PPPP_Proto_Write_RlyTCPToAck @ 0043c3a0 size=280

/* tnp::PPPP_Proto_Write_RlyTCPToAck(tnp::st_PPPP_RlyTCPToAck*, char*, unsigned int, char*, char*,
   char, char) */

void tnp::PPPP_Proto_Write_RlyTCPToAck
               (st_PPPP_RlyTCPToAck *param_1,char *param_2,uint param_3,char *param_4,char *param_5,
               char param_6,char param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x28);
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_5 + 0xc);
  uVar3 = *(undefined4 *)(param_5 + 4);
  uVar2 = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_5;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  param_1[0x24] = (st_PPPP_RlyTCPToAck)param_6;
  param_1[0x25] = (st_PPPP_RlyTCPToAck)param_7;
  return;
}



// ==== PPPP_Proto_Send_SigErrorAck @ 0043c4b8 size=388

/* tnp::PPPP_Proto_Send_SigErrorAck(int, char, sockaddr_in*, unsigned char, char, char) */

int tnp::PPPP_Proto_Send_SigErrorAck
              (int param_1,char param_2,sockaddr_in *param_3,uchar param_4,char param_5,char param_6
              )

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_120 [4];
  uchar local_11c;
  char local_11b;
  char local_11a;
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,6,4);
  local_11b = param_5;
  local_11a = param_6;
  local_11c = param_4;
  if (param_2 == '\x01') {
    iVar2 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_120,8,param_1);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,8,param_1,param_3);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(uVar3);
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0x940;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0x910;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Recv_ALL @ 0043c63c size=736

/* tnp::PPPP_Proto_Recv_ALL(int, sockaddr_in*, unsigned int, unsigned char*, unsigned short*, char*,
   unsigned short, unsigned char*) */

undefined4
tnp::PPPP_Proto_Recv_ALL
          (int param_1,sockaddr_in *param_2,uint param_3,uchar *param_4,ushort *param_5,
          char *param_6,ushort param_7,uchar *param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uchar local_688;
  undefined1 local_687;
  char local_684 [4];
  undefined1 auStack_680 [8];
  undefined4 local_678;
  char acStack_66c [1572];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar7 = (uint)param_7;
  (*(code *)PTR_memset_00468810)(&local_688,0,0x640);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar1 = (*(code *)PTR_over_time_receive_00468548)(param_1,&local_688,0x640,param_2,param_3);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (iVar1 < 0) {
    puVar4 = (undefined4 *)(*(code *)PTR___errno_location_004687d0)();
    uVar6 = *puVar4;
    uVar3 = (*(code *)PTR_strerror_004688c0)(uVar6);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x8ec,param_1,uVar6,uVar3);
    return 0xfffffffe;
  }
  iVar2 = (*(code *)PTR_PPPP_Proto_Read_Header_00468750)(&local_688,param_4,param_5);
  if (iVar2 != 0) {
    return 0xfffffffd;
  }
  *param_8 = local_688;
  if (local_688 == 0xf1) {
    if ((uint)*param_5 == iVar1 - 4U) {
      pcVar5 = local_684;
      if (*param_5 <= uVar7) {
        (*(code *)PTR_memcpy_00468898)(param_6,pcVar5);
        return 0;
      }
      goto LAB_0043c884;
    }
  }
  else {
    uVar3 = (*(code *)PTR___bswapsi2_004683d8)(local_678);
    (*(code *)PTR_PPPP_DebugTrace_00468294)(4,PTR_DAT_00468298 + -0x59c8,local_687);
    iVar2 = (*(code *)PTR_keymap_Search_00468418)(auStack_680,uVar3,&local_48);
    if (iVar2 != 0) {
      (*(code *)PTR_strcpy_004688e0)(&local_48,PTR_gDefaultSigKey_00468424);
    }
    uVar3 = (*(code *)PTR_strlen_004687c0)(&local_48);
    iVar2 = (*(code *)PTR_PPPP_Proto_Verify_Header_0046841c)(&local_48,uVar3,&local_688);
    if (iVar2 != 0) {
      (*(code *)PTR_PPPP_Proto_Send_SigErrorAck_00468420)
                (param_1,0,param_2,local_687,(int)local_684[0],0xffffffff);
      return 0xfffffffa;
    }
    if ((uint)*param_5 == iVar1 - 0x1cU) {
      pcVar5 = acStack_66c;
      if (*param_5 <= uVar7) {
        (*(code *)PTR_memcpy_00468898)();
        return 0;
      }
LAB_0043c884:
      (*(code *)PTR_memcpy_00468898)(param_6,pcVar5,uVar7);
      return 0xfffffffb;
    }
  }
  return 0xfffffffc;
}



// ==== PPPP_Proto_Send_RlyTCPToAck @ 0043c91c size=420

/* tnp::PPPP_Proto_Send_RlyTCPToAck(int, char, sockaddr_in*, char*, unsigned int, char*, char*,
   char, char) */

int tnp::PPPP_Proto_Send_RlyTCPToAck
              (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
              char *param_6,char *param_7,char param_8,char param_9)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [252];
  
  (*(code *)PTR_memset_00468810)(auStack_120,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_120,0x8a,0x28);
  (*(code *)PTR_PPPP_Proto_Write_RlyTCPToAck_00468754)
            (auStack_11c,param_4,param_5,param_6,param_7,(int)param_8,(int)param_9);
  if (param_2 == '\x01') {
    iVar2 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_120,0x2c,param_1);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar2 = (*(code *)PTR_SendMessage_0046856c)(auStack_120,0x2c,param_1,param_3);
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(uVar3);
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0x8bc;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_3 + 2);
    puVar4 = PTR_DAT_00468298 + -0x88c;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Write_RlyTCPPkt @ 0043cac0 size=160

/* tnp::PPPP_Proto_Write_RlyTCPPkt(tnp::st_PPPP_RlyTCPPkt*, char*, char) */

void tnp::PPPP_Proto_Write_RlyTCPPkt(st_PPPP_RlyTCPPkt *param_1,char *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_memset_00468810)(param_1,0,0x14);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  param_1[0x10] = (st_PPPP_RlyTCPPkt)param_3;
  return;
}



// ==== PPPP_Proto_Send_RlyTCPPkt @ 0043cb60 size=324

/* tnp::PPPP_Proto_Send_RlyTCPPkt(int, sockaddr_in*, char*, char) */

int tnp::PPPP_Proto_Send_RlyTCPPkt(int param_1,sockaddr_in *param_2,char *param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x8b,0x14);
  (*(code *)PTR_PPPP_Proto_Write_RlyTCPPkt_00468758)(auStack_114,param_3,(int)param_4);
  iVar2 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_118,0x18,param_1);
  if (iVar2 < 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(param_2 + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x868;
  }
  else {
    uVar3 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_2 + 2);
    puVar4 = PTR_DAT_00468298 + -0x83c;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar4,uVar3,uVar1 >> 8 | uVar1 << 8);
  return iVar2;
}



// ==== PPPP_Proto_Read_NoticePing @ 0043cf14 size=136

/* tnp::PPPP_Proto_Read_NoticePing(tnp::st_PPPP_NoticePing*, char*, unsigned int*, char*) */

void tnp::PPPP_Proto_Read_NoticePing
               (st_PPPP_NoticePing *param_1,char *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar1;
  return;
}



// ==== PPPP_Proto_Send_NoticePingAck @ 0043cf9c size=420

/* tnp::PPPP_Proto_Send_NoticePingAck(int, char, sockaddr_in*, tnp::st_PPPP_NoticePing*) */

int tnp::PPPP_Proto_Send_NoticePingAck
              (int param_1,char param_2,sockaddr_in *param_3,st_PPPP_NoticePing *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint in_t0;
  uint in_t1;
  uint in_t2;
  uint in_t8;
  undefined8 uVar12;
  undefined1 auStack_118 [4];
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  
  (*(code *)PTR_memset_00468810)(auStack_118,0,0x100);
  uVar12 = (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_118,0x3b,0x18);
  uVar2 = (uint)(param_4 + 3) & 3;
  uVar3 = (uint)(param_4 + 7) & 3;
  uVar4 = (uint)(param_4 + 0xb) & 3;
  uVar5 = (uint)(param_4 + 0xf) & 3;
  uVar6 = (uint)(param_4 + 0x13) & 3;
  uVar7 = (uint)(param_4 + 0x17) & 3;
  uVar8 = (uint)param_4 & 3;
  local_114 = (*(int *)(param_4 + 3 + -uVar2) << (3 - uVar2) * 8 |
              in_t8 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar8) * 8 |
              *(uint *)(param_4 + -uVar8) >> uVar8 * 8;
  uVar2 = (uint)(param_4 + 4) & 3;
  local_110 = (*(int *)(param_4 + 7 + -uVar3) << (3 - uVar3) * 8 |
              in_t2 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)(param_4 + 4 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_4 + 8) & 3;
  local_10c = (*(int *)(param_4 + 0xb + -uVar4) << (3 - uVar4) * 8 |
              in_t1 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)(param_4 + 8 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_4 + 0xc) & 3;
  local_108 = (*(int *)(param_4 + 0xf + -uVar5) << (3 - uVar5) * 8 |
              in_t0 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)(param_4 + 0xc + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_4 + 0x10) & 3;
  local_104 = (*(int *)(param_4 + 0x13 + -uVar6) << (3 - uVar6) * 8 |
              (uint)((ulonglong)uVar12 >> 0x20) & 0xffffffffU >> (uVar6 + 1) * 8) &
              -1 << (4 - uVar2) * 8 | *(uint *)(param_4 + 0x10 + -uVar2) >> uVar2 * 8;
  uVar2 = (uint)(param_4 + 0x14) & 3;
  local_100 = (*(int *)(param_4 + 0x17 + -uVar7) << (3 - uVar7) * 8 |
              (uint)uVar12 & 0xffffffffU >> (uVar7 + 1) * 8) & -1 << (4 - uVar2) * 8 |
              *(uint *)(param_4 + 0x14 + -uVar2) >> uVar2 * 8;
  if (param_2 == '\0') {
    iVar9 = (*(code *)PTR_SendMessage_0046856c)(auStack_118,0x1c,param_1,param_3);
    uVar10 = *(undefined4 *)(param_3 + 4);
  }
  else {
    iVar9 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_118,0x1c,param_1);
    uVar10 = *(undefined4 *)(param_3 + 4);
  }
  if (iVar9 < 0) {
    uVar10 = (*(code *)PTR_inet_ntoa_00468804)(uVar10);
    uVar1 = *(ushort *)(param_3 + 2);
    puVar11 = PTR_DAT_00468298 + -0x784;
  }
  else {
    uVar10 = (*(code *)PTR_inet_ntoa_00468804)();
    uVar1 = *(ushort *)(param_3 + 2);
    puVar11 = PTR_DAT_00468298 + -0x754;
  }
  (*(code *)PTR_PPPP_DebugTrace_00468294)(4,puVar11,uVar10,uVar1 >> 8 | uVar1 << 8);
  return iVar9;
}



// ==== PPPP_Proto_Read_NoticeTo @ 0043d140 size=276

/* tnp::PPPP_Proto_Read_NoticeTo(tnp::st_PPPP_MsgNotice*, char*, unsigned int*, char*, unsigned long
   long*, unsigned short*, char*) */

void tnp::PPPP_Proto_Read_NoticeTo
               (st_PPPP_MsgNotice *param_1,char *param_2,uint *param_3,char *param_4,
               ulonglong *param_5,ushort *param_6,char *param_7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  
  (*(code *)PTR_strncpy_0046883c)(param_2,param_1,7);
  (*(code *)PTR_strncpy_0046883c)(param_4,param_1 + 0xc,7);
  uVar2 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 8));
  *param_3 = uVar2;
  uVar3 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 0x14));
  uVar4 = (*(code *)PTR___bswapsi2_004683d8)(*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(undefined4 *)param_5 = uVar4;
  uVar6 = uVar1 << 8;
  uVar1 = uVar1 >> 8;
  uVar5 = uVar1 | uVar6;
  *(undefined4 *)((int)param_5 + 4) = uVar3;
  if (0x400 < (uVar1 | uVar6)) {
    uVar5 = 0x400;
  }
  *param_6 = uVar5;
  (*(code *)PTR_memcpy_00468898)(param_7,param_1 + 0x20,uVar5);
  return;
}



// ==== PPPP_Proto_Send_NoticeToAck @ 0043d254 size=700

/* tnp::PPPP_Proto_Send_NoticeToAck(int, char, sockaddr_in*, char*, unsigned int, char*, unsigned
   long long, unsigned short, char*) */

int __thiscall
tnp::PPPP_Proto_Send_NoticeToAck
          (tnp *this,int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,
          char *param_6,ulonglong param_7,ushort param_8,char *param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined3 in_register_00000019;
  int iVar3;
  uint uVar4;
  undefined4 in_stack_0000001c;
  undefined1 auStack_4a8 [4];
  undefined1 auStack_4a4 [8];
  undefined4 local_49c;
  undefined1 auStack_498 [8];
  undefined4 local_490;
  undefined4 local_48c;
  ushort local_488;
  undefined1 auStack_484 [1120];
  
  iVar3 = CONCAT31(in_register_00000019,param_2);
  uVar4 = (uint)(ushort)param_7;
  (*(code *)PTR_memset_00468810)(auStack_4a8,0,0x480);
  if (0x400 < uVar4) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(*(undefined4 *)(iVar3 + 4));
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0x730,uVar2,
               *(ushort *)(iVar3 + 2) >> 8 | *(ushort *)(iVar3 + 2) << 8,uVar4);
    return -1;
  }
  (*(code *)PTR_PPPP_Proto_Write_Header_0046860c)(auStack_4a8,0x3d,uVar4 + 0x20 & 0xffff);
  (*(code *)PTR_strncpy_0046883c)(auStack_4a4,param_3,7);
  (*(code *)PTR_strncpy_0046883c)(auStack_498,param_5,7);
  local_49c = (*(code *)PTR___bswapsi2_004683d8)(param_4);
  local_490 = (*(code *)PTR___bswapsi2_004683d8)(in_stack_0000001c);
  local_48c = (*(code *)PTR___bswapsi2_004683d8)(param_6);
  local_488 = (ushort)param_7 >> 8 | (ushort)param_7 << 8;
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    (*(code *)PTR_memcpy_00468898)(auStack_484,param_7._4_4_,uVar4);
  }
  if ((char)param_1 == '\0') {
    iVar1 = (*(code *)PTR_SendMessage_0046856c)(auStack_4a8,uVar4 + 0x24,this,iVar3);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    iVar1 = (*(code *)PTR_SendMessageByTCP_004686d0)(auStack_4a8,uVar4 + 0x24,this);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  if (iVar1 < 0) {
    uVar2 = (*(code *)PTR_inet_ntoa_00468804)(uVar2);
    (*(code *)PTR_PPPP_DebugTrace_00468294)
              (4,PTR_DAT_00468298 + -0x6d8,uVar2,
               *(ushort *)(iVar3 + 2) >> 8 | *(ushort *)(iVar3 + 2) << 8);
    return iVar1;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_00468804)();
  (*(code *)PTR_PPPP_DebugTrace_00468294)
            (4,PTR_DAT_00468298 + -0x6ac,uVar2,
             *(ushort *)(iVar3 + 2) >> 8 | *(ushort *)(iVar3 + 2) << 8);
  return iVar1;
}



// ==== PPPP_Proto_Write_MGMDumpLoginDID1 @ 0043d510 size=128

/* tnp::PPPP_Proto_Write_MGMDumpLoginDID1(tnp::st_PPPP_MGMDumpLoginDID1*, char*, unsigned int,
   char*) */

void tnp::PPPP_Proto_Write_MGMDumpLoginDID1
               (st_PPPP_MGMDumpLoginDID1 *param_1,char *param_2,uint param_3,char *param_4)

{
  undefined4 uVar1;
  
  (*(code *)PTR_strncpy_0046883c)(param_1,param_2,7);
  (*(code *)PTR_strncpy_0046883c)(param_1 + 0xc,param_4,7);
  uVar1 = (*(code *)PTR___bswapsi2_004683d8)(param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ==== PPPP_Proto_Write_MGMRemoteManagement @ 0043d8a4 size=52

/* tnp::PPPP_Proto_Write_MGMRemoteManagement(tnp::st_PPPP_MGMRemoteManagement*, unsigned char,
   unsigned char, unsigned char, unsigned char, unsigned short) */

void tnp::PPPP_Proto_Write_MGMRemoteManagement
               (st_PPPP_MGMRemoteManagement *param_1,uchar param_2,uchar param_3,uchar param_4,
               uchar param_5,ushort param_6)

{
  *param_1 = (st_PPPP_MGMRemoteManagement)0xf1;
  param_1[2] = (st_PPPP_MGMRemoteManagement)param_2;
  param_1[1] = (st_PPPP_MGMRemoteManagement)param_3;
  param_1[4] = (st_PPPP_MGMRemoteManagement)param_4;
  param_1[5] = (st_PPPP_MGMRemoteManagement)param_5;
  *(ushort *)(param_1 + 6) = param_6 >> 8 | param_6 << 8;
  return;
}



