/* p2p_tnp — recovered function prototypes
 * CS2 "PPPP"/TNP peer-to-peer: live view, talkback, PTZ, playback
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef P2P_TNP_H
#define P2P_TNP_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00406118 */
void _ftext(void);  /* @ 00406160 */
undefined4 main(int param_1,undefined4 param_2);  /* @ 004062b0 */
undefined4 start_speaker(int param_1);  /* @ 0040fcb8 */
void _fini(void);  /* @ 004458e0 */

/* ---- do ---- */
undefined4 do_update(undefined4 param_1,undefined2 param_2);  /* @ 0040df0c */
undefined4 do_record_play(int param_1);  /* @ 0040f624 */
undefined4 do_auth(undefined4 param_1,int param_2);  /* @ 004102a4 */

/* ---- fshare ---- */
undefined4 fshare_create(void);  /* @ 0043e1d8 */
undefined4 fshare_open(void);  /* @ 0043e4c8 */
undefined4 fshare_write(undefined4 param_1,undefined4 *param_2);  /* @ 0043e7ac */
undefined4 fshare_read(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5);  /* @ 0043eb90 */
undefined4 fshare_read_newest(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5);  /* @ 0043ee0c */
undefined4 fshare_wait(int param_1);  /* @ 0043f0a0 */

/* ---- get ---- */
int get_video_replay_frame (byte *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5);  /* @ 004096e0 */
undefined4 get_resolution(int param_1,undefined2 param_2);  /* @ 0040dbd4 */
undefined4 get_record_speed(int param_1,undefined2 param_2);  /* @ 0040ddb4 */
undefined4 get_version(undefined4 param_1,undefined2 param_2);  /* @ 0040de84 */
int get_filename_by_time(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00440fd4 */

/* ---- keymap ---- */
void tnp::keymap_Init(void);  /* @ 00425b80 */
undefined4 tnp::keymap_Add(char *param_1,uint param_2,char *param_3);  /* @ 00425ba8 */
void tnp::keymap_Clear(void);  /* @ 00425d40 */
undefined4 tnp::keymap_Search(char *param_1,uint param_2,char *param_3);  /* @ 00425dbc */
void tnp::keymap_Dump(void);  /* @ 00425f04 */
void tnp::keymap_UnInit(void);  /* @ 00425f94 */

/* ---- mq ---- */
void mq_receive(void);  /* @ 00456f50 */
void mq_send(void);  /* @ 00456fc0 */
void mq_open(void);  /* @ 00457270 */

/* ---- mutex ---- */
undefined4 tnp::MUTEX_INIT(pthread_mutex_t *param_1);  /* @ 0042e150 */
void tnp::MUTEX_DESTROY(pthread_mutex_t *param_1);  /* @ 0042e184 */
void tnp::MUTEX_LOCK(pthread_mutex_t *param_1);  /* @ 0042e19c */
void tnp::MUTEX_TRYLOCK(pthread_mutex_t *param_1);  /* @ 0042e1b4 */
void tnp::MUTEX_RELEASE(pthread_mutex_t *param_1);  /* @ 0042e1cc */

/* ---- p2p ---- */
undefined4 p2p_send_ctrl_error(int param_1,int param_2,int param_3);  /* @ 00406950 */
undefined4 p2p_set_power(int param_1);  /* @ 00409da8 */
undefined4 p2p_set_light(int param_1);  /* @ 0040a014 */
undefined4 p2p_set_motion_record(int param_1);  /* @ 0040a0f0 */
undefined4 p2p_set_mirror_flip(int param_1);  /* @ 0040a1cc */
undefined4 p2p_set_alarm_mode(int param_1);  /* @ 0040a2a8 */
undefined4 p2p_set_day_night_mode(int param_1,int param_2);  /* @ 0040a370 */
undefined4 p2p_set_alarm_sensitivity(uint param_1);  /* @ 0040a45c */
void p2p_set_audio_mode(int param_1);  /* @ 0040a524 */
undefined4 p2p_set_encode_mode(int param_1);  /* @ 0040a61c */
undefined4 p2p_set_high_resolution(int param_1);  /* @ 0040a6e4 */
undefined4 p2p_send_connected(void);  /* @ 0040a7ac */
undefined4 p2p_send_disconnected(void);  /* @ 0040a818 */
undefined4 p2p_send_viewing(void);  /* @ 0040a884 */
undefined4 p2p_send_stop_viewing(void);  /* @ 0040a8fc */
undefined4 p2p_send_clr_viewing(void);  /* @ 0040a974 */
undefined4 p2p_set_tnp_init_status(undefined4 param_1);  /* @ 0040a9e0 */
undefined4 p2p_set_tnp_work_mode(undefined4 param_1);  /* @ 0040aa58 */
undefined4 p2p_set_tnp_check_login_success(void);  /* @ 0040aad0 */
undefined4 p2p_set_tnp_check_login_fail(void);  /* @ 0040ab30 */
undefined4 p2p_set_tnp_connect_success(void);  /* @ 0040ab90 */
undefined4 p2p_set_immediate_bitrate(undefined4 param_1);  /* @ 0040abf0 */
undefined4 p2p_set_pwd_used_cnt(void);  /* @ 0040ac5c */
undefined4 p2p_ptz_direction_ctrl(undefined4 param_1,undefined4 param_2);  /* @ 0040ad50 */
undefined4 p2p_ptz_direction_ctrl_stop(void);  /* @ 0040add8 */
undefined4 p2p_ptz_home(void);  /* @ 0040ae38 */
undefined4 p2p_ap_mode_set(char *param_1);  /* @ 0040ae98 */
undefined4 p2p_ptz_jump_to_point(undefined4 param_1,undefined4 param_2);  /* @ 0040aff4 */
undefined4 p2p_set_panorama_capture_state(undefined4 param_1);  /* @ 0040b07c */
undefined4 p2p_set_ldc(int param_1);  /* @ 0040b0e0 */
undefined4 p2p_set_baby_cry(int param_1);  /* @ 0040b1a8 */
undefined4 p2p_set_abnormal_sound(int param_1);  /* @ 0040b270 */
undefined4 p2p_set_abnormal_sound_sensitivity(uint param_1);  /* @ 0040b338 */
undefined4 p2p_set_mic_volume(int param_1);  /* @ 0040b400 */
undefined4 p2p_set_viewpoint_trace(char param_1);  /* @ 0040b4c8 */
undefined4 p2p_set_voice_ctrl(char param_1);  /* @ 0040b590 */
undefined4 p2p_set_alarm_sound(uint param_1);  /* @ 0040b66c */
undefined4 p2p_set_double_light(uint param_1);  /* @ 0040b734 */
undefined4 p2p_set_motion_detect_status(uint param_1);  /* @ 0040b7fc */
undefined4 p2p_set_lapse_video(int param_1);  /* @ 0040b8c4 */
undefined4 p2p_send_ctrl_data(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5);  /* @ 0040be44 */
undefined4 p2p_set_motion_detect(undefined4 param_1,undefined4 *param_2,undefined2 param_3);  /* @ 0040bf7c */
undefined4 p2p_set_video_backup_state(undefined4 param_1,byte *param_2,undefined2 param_3);  /* @ 0040c210 */
undefined4 p2p_ptz_preset_add(undefined4 param_1,undefined2 param_2);  /* @ 0040c4cc */
undefined4 p2p_ptz_preset_del(undefined4 param_1,int param_2,undefined2 param_3);  /* @ 0040c6ec */
undefined4 p2p_ptz_preset_call(undefined4 param_1,int param_2,undefined2 param_3);  /* @ 0040c87c */
undefined4 p2p_ptz_set_cruise_stay_time (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4);  /* @ 0040c9b4 */
undefined4 p2p_ptz_set_cruise_period (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4);  /* @ 0040ca58 */
undefined4 p2p_ptz_set_motion_track(undefined4 param_1,undefined4 param_2,undefined2 param_3);  /* @ 0040cafc */
undefined4 p2p_ptz_set_cruise(undefined4 param_1,int param_2,undefined2 param_3);  /* @ 0040cb9c */
undefined4 p2p_start_panorama_capture(undefined4 param_1,undefined2 param_2);  /* @ 0040cc8c */
undefined4 p2p_abort_panorama_capture(undefined4 param_1,undefined2 param_2);  /* @ 0040cdb4 */
undefined4 p2p_sync_info_from_server(undefined4 param_1,undefined2 param_2);  /* @ 0040cefc */
undefined4 p2p_send_frame_data(int param_1,char param_2,int param_3,int param_4,undefined4 *param_5, undefined1 *param_6,int param_7);  /* @ 0040e27c */
undefined4 p2p_send_auth_result(int param_1,uint param_2,uint param_3,undefined4 param_4);  /* @ 0040fe58 */
undefined4 p2p_send_unsupported_version_reply(int param_1,uint param_2,uint param_3);  /* @ 00410094 */

/* ---- pppp ---- */
undefined4 PPPP_Close(undefined4 param_1);  /* @ 00414120 */
void PPPP_thread_recv_Proto_app(void *param_1);  /* @ 00416540 */
void PPPP_thread_recv_Proto_TCP_app(void *param_1);  /* @ 00417758 */
undefined4 PPPP_TryP2P(int param_1,char param_2);  /* @ 00419318 */
undefined4 PPPP_TryRelayByUDP(int param_1,int param_2);  /* @ 00419738 */
undefined4 PPPP_TryRelayByTCP(int param_1,int param_2);  /* @ 00419e40 */
int PPPP_TryRelay(int param_1,char param_2);  /* @ 0041a990 */
undefined4 PPPP__GetLanSearchFlag(void);  /* @ 0041b088 */
int PPPP_TryWakeUp(char *param_1,int param_2,char *param_3,int param_4,uint param_5,uint param_6);  /* @ 0041b090 */
uint PPPP_Connect_To(char *param_1,int param_2,char *param_3,char param_4,char *param_5, ushort param_6,char *param_7,char param_8);  /* @ 0041b878 */
int PPPP__GetP2PServerAddrApp (char *param_1,char *param_2,int param_3,char *param_4,char *param_5,char *param_6);  /* @ 0041d15c */
undefined4 PPPP_ConnectByServer (undefined4 param_1,char param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5);  /* @ 0041d924 */
undefined4 PPPP__App_Init(void);  /* @ 0041db1c */
undefined4 PPPP__App_UnInit(void);  /* @ 0041db58 */
undefined4 PPPP_Connect_Break_All(void);  /* @ 0041dda0 */
void PPPP__thread_callback(void *param_1);  /* @ 0041de00 */
void PPPP_thread_recv_LanSearch(void *param_1);  /* @ 0041de58 */
void PPPP_thread_hello(void *param_1);  /* @ 0041e26c */
void tnp::PPPP__ExitSuperDevice(char param_1);  /* @ 0041e6b8 */
void tnp::PPPP__ResetSuperDevice(void);  /* @ 0041e6f4 */
int PPPP__ShareBandwidth(void);  /* @ 0041e758 */
int PPPP__AnotherDeviceInLan(void);  /* @ 0041e770 */
void PPPP__IncomingConnectionCallback(void);  /* @ 0041e788 */
void PPPP__NoticeToCallback(ulonglong param_1,char *param_2,uint param_3);  /* @ 0041e7c0 */
undefined4 PPPP__Device_Init(void);  /* @ 0041e7ec */
undefined4 PPPP__Device_UnInit(void);  /* @ 0041e844 */
undefined4 PPPP__SessionHandler_Is_Full(void);  /* @ 0041e908 */
void PPPP_thread_recv_Proto_TCP_device(void *param_1);  /* @ 0041e970 */
bool PPPP__Check_Device_Working(void);  /* @ 0041f7e8 */
void PPPP_thread_recv_Proto_device(void *param_1);  /* @ 0041f888 */
undefined4 PPPP__SendReport_SuperDevice_Connect(char *param_1);  /* @ 00421224 */
undefined4 PPPP__SendReport_SuperDevice_ExitThread(char param_1,char param_2);  /* @ 004212f8 */
unsigned int) */ undefined4 PPPP__SendSessionReport_SuperDevice (char param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);  /* @ 004215cc */
bool PPPP__HelloToIpEqual(ulong param_1,ulong param_2,ulong param_3,ulong param_4);  /* @ 00421720 */
void PPPP_thread_SuperDevice(void *param_1);  /* @ 00421754 */
undefined4 PPPP_Listen_To_With_Key(int param_1,uint param_2,ushort param_3,char param_4);  /* @ 004233ec */
undefined4 PPPP_Listen_To_With_Key_TCP(int param_1,uint param_2);  /* @ 00423c00 */
uint PPPP_Listen_With_Key2 (undefined4 param_1,int param_2,uint param_3,char param_4,int param_5,char param_6);  /* @ 00424664 */
undefined4 PPPP_Listen_Break(void);  /* @ 004254c4 */
int tnp::PPPP_Proto_Generate_SeqNum(void);  /* @ 00425fd0 */
void tnp::PPPP__Timer_Init(void);  /* @ 00426030 */
void tnp::PPPP__Timer_Thread_Check(void);  /* @ 00426088 */
undefined4 tnp::PPPP__Timer_Push(st_PPPP_TimerElement_t *param_1);  /* @ 004260e0 */
int tnp::PPPP__Timer_Pop(void);  /* @ 004261d0 */
void tnp::PPPP__Timer_Delete(uint param_1);  /* @ 00426250 */
bool tnp::PPPP__Timer_Timeout(void);  /* @ 0042636c */
void tnp::PPPP__Timer_RemoveMaxElapse(void);  /* @ 00426410 */
void tnp::PPPP__thread_timer(void *param_1);  /* @ 00426588 */
void tnp::PPPP__Timer_Clear(void);  /* @ 004269b0 */
void tnp::PPPP__Timer_UnInit(void);  /* @ 00426a28 */
undefined4 tnp::PPPP_Set_Sig_Key(uint param_1,char *param_2);  /* @ 00426a98 */
void tnp::PPPP_Calc_P2p_Pkt_Loss_Ratio(uint param_1);  /* @ 00426b1c */
void tnp::PPPP_Proto_Send_Alive_with_conuter (uint param_1,int param_2,char param_3,sockaddr_in *param_4);  /* @ 00426bdc */
int tnp::PPPP__ConnectWithNonBlockSocket(int param_1,sockaddr *param_2,int param_3);  /* @ 00426c30 */
int tnp::PPPP_Write_Block(int param_1,uchar param_2,char *param_3,int param_4);  /* @ 00427318 */
void tnp::PPPP__Set_Session_State(int param_1,uchar param_2);  /* @ 00427470 */
void tnp::PPPP__Reset_Session(int param_1,int param_2);  /* @ 004274c8 */
void tnp::PPPP__Halt_TCP_For_Session(int param_1);  /* @ 00427604 */
void tnp::PPPP__Update_Session_State(int param_1,uchar param_2);  /* @ 004276b8 */
int tnp::PPPP__Start_TCP_For_Session(int param_1,sockaddr *param_2,int param_3);  /* @ 0042781c */
int tnp::PPPP__CheckValidDID(char *param_1);  /* @ 00427b40 */
undefined4 tnp::PPPP__ParseDID(char *param_1,char *param_2,int param_3,int *param_4,char *param_5,int param_6);  /* @ 00427be0 */
undefined4 tnp::PPPP__GetLocalAddress(sockaddr_in *param_1,sockaddr_in *param_2);  /* @ 00427d8c */
int tnp::PPPP__ConnectTcpServer (sockaddr_in *param_1,int param_2,int *param_3,int param_4,int param_5);  /* @ 00427eb0 */
undefined4 tnp::PPPP__Check_Session_Data_Ready(char *param_1,ushort param_2,ushort *param_3,uchar *param_4);  /* @ 0042809c */
undefined4 tnp::PPPP__GetP2PServerAddr(char *param_1,int param_2,char *param_3,char *param_4,char *param_5);  /* @ 00428148 */
undefined4 tnp::PPPP__ResolveHostName(char *param_1,sockaddr_in *param_2);  /* @ 00428694 */
undefined4 tnp::PPPP__DecodeServerString(char *param_1,sockaddr_in *param_2,int param_3);  /* @ 0042874c */
sockaddr_in*) */ int tnp::PPPP__DoNetWorkDetect (st_PPPP_NetInfo *param_1,ushort param_2,char *param_3,sockaddr_in *param_4,;  /* @ 00428a78 */
void tnp::PPPP___Dump_Session_Info(int param_1);  /* @ 00429338 */
undefined4 tnp::PPPP__SendReport(uchar param_1,char param_2,char *param_3);  /* @ 004297e4 */
undefined4 tnp::PPPP__Close_Inner(uint param_1);  /* @ 00429930 */
uint tnp::PPPP__CalculateLostRate(int param_1,uint *param_2);  /* @ 00429f58 */
void tnp::PPPP__CalculateBitrate(int param_1,int param_2,uint param_3,uint param_4,uint *param_5);  /* @ 0042a1b0 */
void tnp::PPPP_thread_recv_Relay_TCP(void *param_1);  /* @ 0042a288 */
void tnp::PPPP_thread_recv_DRW(void *param_1);  /* @ 0042bba0 */
void tnp::PPPP_thread_send_DRW(void *param_1);  /* @ 0042ceb0 */
void tnp::pppp_sha1_init_ctx(pppp_sha1_ctx *param_1);  /* @ 0042e3b0 */
void * tnp::pppp_sha1_read_ctx(pppp_sha1_ctx *param_1,void *param_2);  /* @ 0042e3fc */
void tnp::pppp_sha1_process_block(void *param_1,uint param_2,pppp_sha1_ctx *param_3);  /* @ 0042e4e0 */
void tnp::pppp_sha1_finish_ctx(pppp_sha1_ctx *param_1,void *param_2);  /* @ 00430028 */
void tnp::pppp_sha1_process_bytes(void *param_1,uint param_2,pppp_sha1_ctx *param_3);  /* @ 00430188 */
void * tnp::pppp_memxor(void *param_1,void *param_2,uint param_3);  /* @ 00430534 */
undefined4 tnp::pppp_hmac_sha1(void *param_1,int param_2,void *param_3,int param_4,void *param_5);  /* @ 00430568 */
void tnp::pppp_bin_to_string(char *param_1,int param_2,char *param_3);  /* @ 00430744 */
void tnp::PPPP_MakeSha1(char *param_1,int param_2,char *param_3,int param_4,char *param_5);  /* @ 004307cc */
void tnp::PPPP_MakeSha2(char *param_1,int param_2,char *param_3,int param_4,char *param_5);  /* @ 00430848 */
void tnp::PPPP_MakeNonce(char *param_1,int param_2);  /* @ 004308d0 */
void tnp::PPPP_DebugTrace(uint param_1,char *param_2,...);  /* @ 00430ac4 */
undefined4 tnp::PPPP_EncodeString(char *param_1,char *param_2,int param_3);  /* @ 004319a4 */
undefined4 tnp::PPPP_DecodeString(char *param_1,char *param_2,int param_3);  /* @ 00431bb8 */
int tnp::PPPP_CRCEnc(uchar *param_1,int param_2,uchar *param_3,int param_4,uchar *param_5);  /* @ 004320c8 */
int tnp::PPPP_CRCDec(uchar *param_1,int param_2,uchar *param_3,int param_4,uchar *param_5);  /* @ 004322a0 */
void tnp::PPPP_Proto_Write_Header(st_PPPP_SessionHeader *param_1,uchar param_2,ushort param_3);  /* @ 004335e8 */
char, char*, unsigned int) */ void tnp::PPPP_Proto_Write_HeaderV2 (st_PPPP_SessionHeaderV2 *param_1,uchar param_2,ushort param_3,char param_4,;  /* @ 0043360c */
undefined4 tnp::PPPP_Proto_Read_Header(st_PPPP_SessionHeader *param_1,uchar *param_2,ushort *param_3);  /* @ 00433758 */
int tnp::PPPP_Proto_Verify_Header(char *param_1,int param_2,st_PPPP_SessionHeaderV2 *param_3);  /* @ 004337a8 */
undefined4 tnp::PPPP_Proto_Recv_TCP(int param_1,char *param_2,ushort param_3,ushort *param_4,uint param_5);  /* @ 00433824 */
int tnp::PPPP_Proto_Send_Hello(int param_1,sockaddr_in *param_2);  /* @ 004338d8 */
int tnp::PPPP_Proto_Send_Hello_With_Body (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5, char param_6);  /* @ 004339ec */
int tnp::PPPP_Proto_Send_Probe (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char param_5);  /* @ 00433d04 */
int tnp::PPPP_Proto_Send_ProbeAck2(int param_1,sockaddr_in *param_2,char *param_3,uint param_4);  /* @ 00433eec */
int tnp::PPPP_Proto_Send_WakeUp (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5, char *param_6);  /* @ 00434084 */
char*, char*) */ void tnp::PPPP_Proto_Write_P2PServerReq (st_PPPP_P2PServerReq *param_1,char *param_2,uint param_3,char *param_4,char param_5,;  /* @ 004342a0 */
char*) */ int tnp::PPPP_Proto_Send_P2PServerReq (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,;  /* @ 00434450 */
int tnp::PPPP_Proto_Send_DevOnline (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);  /* @ 004346e0 */
char*, sockaddr_in*) */ void tnp::PPPP_Proto_Write_DevLgn (st_PPPP_DevLgn *param_1,char *param_2,uint param_3,char *param_4,char param_5,;  /* @ 004348a8 */
unsigned char*, sockaddr_in*, char*, char) */ int tnp::PPPP_Proto_Send_DevLgn_Key (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,;  /* @ 004350d8 */
void tnp::PPPP_Proto_Write_P2PReq (st_PPPP_P2PReq *param_1,char *param_2,uint param_3,char *param_4, sockaddr_in *param_5);  /* @ 0043562c */
int tnp::PPPP_Proto_Send_P2PReq (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5, sockaddr_in *param_6);  /* @ 0043576c */
unsigned int) */ void tnp::PPPP_Proto_Write_RSLgn (st_PPPP_RSLgn *param_1,char *param_2,uint param_3,char *param_4,uint param_5,;  /* @ 00435b44 */
unsigned int, sockaddr_in*) */ void tnp::PPPP_Proto_Write_RSLgn1 (st_PPPP_RSLgn1 *param_1,char *param_2,uint param_3,char *param_4,uint param_5,;  /* @ 00435f48 */
int tnp::PPPP_Proto_Send_RlyHello(int param_1,sockaddr_in *param_2);  /* @ 004363c4 */
int tnp::PPPP_Proto_Send_RlyHelloSDev(int param_1,sockaddr_in *param_2);  /* @ 004365ec */
int tnp::PPPP_Proto_Send_RlyHelloSDevAck(int param_1,sockaddr_in *param_2);  /* @ 00436700 */
unsigned int) */ void tnp::PPPP_Proto_Write_RlyReq (st_PPPP_RlyReq *param_1,char *param_2,uint param_3,char *param_4,;  /* @ 00436814 */
int) */ int tnp::PPPP_Proto_Send_RlyReq (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,;  /* @ 00436994 */
void tnp::PPPP_Proto_Write_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint param_3);  /* @ 00436c44 */
void tnp::PPPP_Proto_Read_RlyTo(st_PPPP_RlyTo *param_1,sockaddr_in *param_2,uint *param_3);  /* @ 00436ca0 */
int, char) */ void tnp::PPPP_Proto_Write_RlyToAck (st_PPPP_RlyToAck *param_1,char *param_2,uint param_3,char *param_4,char param_5,;  /* @ 00436e44 */
char) */ int tnp::PPPP_Proto_Send_RlyToAck (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,;  /* @ 00436f20 */
char*) */ void tnp::PPPP_Proto_Write_RlyPort_Key (st_PPPP_RlyPort_Key *param_1,char *param_2,uint param_3,char *param_4,char *param_5,;  /* @ 004373b4 */
int tnp::PPPP_Proto_Send_RlyPort_Key (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5, char *param_6);  /* @ 00437724 */
char) */ void tnp::PPPP_Proto_Write_RlyPortAck_Key (st_PPPP_RlyPortAck_Key *param_1,uint param_2,ushort param_3,char param_4);  /* @ 0043797c */
char*) */ void tnp::PPPP_Proto_Read_RlyPortAck_Key (st_PPPP_RlyPortAck_Key *param_1,uint *param_2,ushort *param_3,char *param_4);  /* @ 00437a0c */
int tnp::PPPP_Proto_Send_RlyPortAck_Key (int param_1,sockaddr_in *param_2,uint param_3,ushort param_4,char param_5);  /* @ 00437a90 */
int) */ void tnp::PPPP_Proto_Write_RlyPkt (st_PPPP_RlyPkt *param_1,char *param_2,uint param_3,char *param_4,char param_5,;  /* @ 00437d18 */
int*) */ void tnp::PPPP_Proto_Read_RlyPkt (st_PPPP_RlyPkt *param_1,char *param_2,uint *param_3,char *param_4,char *param_5,;  /* @ 00437de4 */
int tnp::PPPP_Proto_Send_RlyPkt (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5, char param_6,uint param_7);  /* @ 00437e9c */
void tnp::PPPP_Proto_Write_PunchPkt (st_PPPP_PunchPkt *param_1,char *param_2,uint param_3,char *param_4);  /* @ 00437ffc */
void tnp::PPPP_Proto_Write_PunchPkt_EX (st_PPPP_PunchPkt_EX *param_1,char *param_2,uint param_3,char *param_4);  /* @ 004380a4 */
void tnp::PPPP_Proto_Read_PunchPkt (st_PPPP_PunchPkt *param_1,char *param_2,uint *param_3,char *param_4);  /* @ 004380f8 */
int tnp::PPPP_Proto_Send_PunchPkt_EX (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);  /* @ 00438324 */
void tnp::PPPP_Proto_Write_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint param_3,char *param_4);  /* @ 0043846c */
void tnp::PPPP_Proto_Write_P2PRdy_EX (st_PPPP_P2PRdy_EX *param_1,char *param_2,uint param_3,char *param_4);  /* @ 00438514 */
void tnp::PPPP_Proto_Read_P2PRdy(st_PPPP_P2PRdy *param_1,char *param_2,uint *param_3,char *param_4);  /* @ 00438568 */
int tnp::PPPP_Proto_Send_P2PRdy (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);  /* @ 0043864c */
int tnp::PPPP_Proto_Send_P2PRdy_EX (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);  /* @ 00438794 */
int tnp::PPPP_Proto_Send_P2PRdy_Ack(int param_1,sockaddr_in *param_2);  /* @ 004388dc */
void tnp::PPPP_Proto_Send_LanSerch(int param_1,ushort param_2);  /* @ 004389f0 */
void tnp::PPPP_Proto_Send_LanNotify (int param_1,ushort param_2,char *param_3,uint param_4,char *param_5);  /* @ 00438a9c */
int tnp::PPPP_Proto_Send_LanNotifyAck (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);  /* @ 00438ba4 */
void tnp::PPPP_Proto_Write_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint param_3,char *param_4);  /* @ 00438d14 */
void tnp::PPPP_Proto_Read_RlyRdy(st_PPPP_RlyRdy *param_1,char *param_2,uint *param_3,char *param_4);  /* @ 00438dbc */
int tnp::PPPP_Proto_Send_RlyRdy (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);  /* @ 00438e44 */
char*, int) */ void tnp::PPPP_Proto_Write_Connect_Report (st_PPPP_Connect_Report *param_1,char *param_2,uchar *param_3,char param_4,;  /* @ 00438f8c */
int) */ int tnp::PPPP_Proto_Send_Connect_Report (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uchar *param_5,;  /* @ 00439064 */
void tnp::PPPP_Proto_Write_Report (st_PPPP_Report *param_1,char *param_2,char param_3,char param_4,char param_5, short param_6,char *param_7);  /* @ 004392b8 */
int tnp::PPPP_Proto_Send_Report (int param_1,char param_2,sockaddr_in *param_3,char *param_4,char param_5,char param_6 ,char param_7,short param_8,char *param_9);  /* @ 0043939c */
unsigned int, char*, char, char*) */ void tnp::PPPP_Proto_Write_SDevReport (st_PPPP_SDev_Report *param_1,char *param_2,uint param_3,char *param_4,char *param_5,;  /* @ 00439664 */
int, char*, char, char*) */ int tnp::PPPP_Proto_Send_SDev_Report (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5,;  /* @ 00439730 */
unsigned int, char*, char*, unsigned int, char*, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */ void tnp::PPPP_Proto_Write_SDevSessionReport (st_PPPP_SDev_SessionReport *param_1,uint param_2,char *param_3,uint param_4,;  /* @ 004398f0 */
char*, unsigned int, char*, char, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */ undefined4 tnp::PPPP_Proto_Generate_SDev_SessionReport (char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char *param_6,;  /* @ 00439a3c */
char) */ undefined4 tnp::PPPP_Proto_Generate_SendDataReport (char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,char param_6,;  /* @ 00439b34 */
void tnp::PPPP_DRW_Write_Header(st_PPPP_DRWHeader *param_1,uchar param_2,ushort param_3);  /* @ 00439c20 */
undefined4 tnp::PPPP_DRW_Read_Header(st_PPPP_DRWHeader *param_1,uchar *param_2,ushort *param_3);  /* @ 00439c44 */
void tnp::PPPP_DRWAck_Write_Header(st_PPPP_DRWAckHeader *param_1,uchar param_2,ushort param_3);  /* @ 00439c84 */
undefined4 tnp::PPPP_DRWAck_Read_Header(st_PPPP_DRWAckHeader *param_1,uchar *param_2,ushort *param_3);  /* @ 00439ca8 */
int tnp::PPPP_DRWAck_Send (int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort *param_5, ushort param_6);  /* @ 00439ce8 */
int tnp::PPPP_DRW_Send(int param_1,char param_2,sockaddr_in *param_3,uchar param_4,ushort param_5, char *param_6,ushort param_7);  /* @ 00439f38 */
int tnp::PPPP_Proto_Send_Alive(int param_1,char param_2,sockaddr_in *param_3);  /* @ 0043a144 */
int tnp::PPPP_Proto_Send_AliveAck(int param_1,char param_2,sockaddr_in *param_3);  /* @ 0043a280 */
int tnp::PPPP_Proto_Send_BitrateInfo (int param_1,char param_2,sockaddr_in *param_3,uint param_4,uint param_5);  /* @ 0043a3bc */
int tnp::PPPP_Proto_Send_Close(int param_1,char param_2,sockaddr_in *param_3);  /* @ 0043a548 */
int tnp::PPPP_Proto_Send_HelloToAck(int param_1,sockaddr_in *param_2);  /* @ 0043a9d4 */
char*) */ void tnp::PPPP_Proto_Read_RlyPortKey (st_PPPP_RlyPort_Key *param_1,char *param_2,uint *param_3,char *param_4,char *param_5;  /* @ 0043ac3c */
void tnp::PPPP_Proto_Read_LanNotify (st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4);  /* @ 0043ad08 */
void tnp::PPPP_Proto_Read_LanNotifyAck (st_PPPP_LanNotify *param_1,char *param_2,uint *param_3,char *param_4);  /* @ 0043ad90 */
void tnp::PPPP_Proto_Write_SDevLgn (st_PPPP_SDevLgn *param_1,char *param_2,uint param_3,char *param_4);  /* @ 0043ada8 */
int tnp::PPPP_Proto_Send_SDevLgn (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5);  /* @ 0043aed8 */
void tnp::PPPP_Proto_Write_ListReq1 (st_PPPP_ListReq1 *param_1,char *param_2,uint param_3,char *param_4);  /* @ 0043b4ac */
void tnp::PPPP_Proto_Write_RlyServerReq (st_PPPP_RlyServerReq *param_1,char *param_2,uint param_3,char *param_4);  /* @ 0043b724 */
int tnp::PPPP_Proto_Send_RlyServerReq (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5, char *param_6,char param_7);  /* @ 0043b7cc */
char*) */ void tnp::PPPP_Proto_Write_RlyTCPStart (st_PPPP_RlyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char *param_5,;  /* @ 0043b944 */
int tnp::PPPP_Proto_Send_RlyTCPStart (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5, char *param_6);  /* @ 0043bb0c */
sockaddr_in*, char*) */ void tnp::PPPP_Proto_Write_RlyTCPReq (st_PPPP_RlyTCPReq *param_1,char *param_2,uint param_3,char *param_4,;  /* @ 0043bd60 */
char*) */ int tnp::PPPP_Proto_Send_RlyTCPReq (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,;  /* @ 0043be80 */
void tnp::PPPP_Proto_Write_EasyTCPStart (st_PPPP_EasyTCPStart *param_1,char *param_2,uint param_3,char *param_4,char param_5);  /* @ 0043c040 */
int tnp::PPPP_Proto_Send_EasyTCPStart (int param_1,sockaddr_in *param_2,char *param_3,uint param_4,char *param_5, char param_6,char *param_7);  /* @ 0043c0d0 */
char, char) */ void tnp::PPPP_Proto_Write_RlyTCPToAck (st_PPPP_RlyTCPToAck *param_1,char *param_2,uint param_3,char *param_4,char *param_5,;  /* @ 0043c3a0 */
int tnp::PPPP_Proto_Send_SigErrorAck (int param_1,char param_2,sockaddr_in *param_3,uchar param_4,char param_5,char param_6 );  /* @ 0043c4b8 */
unsigned short, unsigned char*) */ undefined4 tnp::PPPP_Proto_Recv_ALL (int param_1,sockaddr_in *param_2,uint param_3,uchar *param_4,ushort *param_5,;  /* @ 0043c63c */
char, char) */ int tnp::PPPP_Proto_Send_RlyTCPToAck (int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,;  /* @ 0043c91c */
void tnp::PPPP_Proto_Write_RlyTCPPkt(st_PPPP_RlyTCPPkt *param_1,char *param_2,char param_3);  /* @ 0043cac0 */
int tnp::PPPP_Proto_Send_RlyTCPPkt(int param_1,sockaddr_in *param_2,char *param_3,char param_4);  /* @ 0043cb60 */
void tnp::PPPP_Proto_Read_NoticePing (st_PPPP_NoticePing *param_1,char *param_2,uint *param_3,char *param_4);  /* @ 0043cf14 */
int tnp::PPPP_Proto_Send_NoticePingAck (int param_1,char param_2,sockaddr_in *param_3,st_PPPP_NoticePing *param_4);  /* @ 0043cf9c */
long*, unsigned short*, char*) */ void tnp::PPPP_Proto_Read_NoticeTo (st_PPPP_MsgNotice *param_1,char *param_2,uint *param_3,char *param_4,;  /* @ 0043d140 */
long long, unsigned short, char*) */ int __thiscall tnp::PPPP_Proto_Send_NoticeToAck (tnp *this,int param_1,char param_2,sockaddr_in *param_3,char *param_4,uint param_5,;  /* @ 0043d254 */
char*) */ void tnp::PPPP_Proto_Write_MGMDumpLoginDID1 (st_PPPP_MGMDumpLoginDID1 *param_1,char *param_2,uint param_3,char *param_4);  /* @ 0043d510 */
unsigned char, unsigned char, unsigned char, unsigned short) */ void tnp::PPPP_Proto_Write_MGMRemoteManagement (st_PPPP_MGMRemoteManagement *param_1,uchar param_2,uchar param_3,uchar param_4,;  /* @ 0043d8a4 */

/* ---- pthread ---- */
void pthread_create(void);  /* @ 00456ea0 */
void pthread_exit(void);  /* @ 00456ed0 */
void pthread_detach(void);  /* @ 00457010 */
void pthread_sigmask(void);  /* @ 004570e0 */
void pthread_mutex_unlock(void);  /* @ 004571c0 */
void pthread_self(void);  /* @ 004571e0 */
void pthread_mutex_lock(void);  /* @ 00457200 */

/* ---- reply ---- */
undefined4 reply_dev_info(undefined4 param_1,undefined4 param_2,undefined2 param_3,uint param_4);  /* @ 0040cfb0 */
undefined4 reply_ap_mode_info(undefined4 param_1,undefined4 param_2,undefined2 param_3);  /* @ 0040d42c */
undefined4 reply_factory_test_info(undefined4 param_1,undefined2 param_2);  /* @ 0040d58c */
undefined4 reply_event_list(undefined4 param_1,uint param_2);  /* @ 0040d680 */

/* ---- sll ---- */
uint * tnp::sll_element_Allocate(uint param_1,uint param_2);  /* @ 0042d848 */
void tnp::sll_element_Free(__the_SLL_Element *param_1);  /* @ 0042d8f8 */
void tnp::sll_Init(__the_SLL *param_1,uint param_2);  /* @ 0042da80 */
void tnp::sll_DeInit(__the_SLL *param_1);  /* @ 0042dae4 */
undefined4 tnp::sll_Put(__the_SLL *param_1,__the_SLL_Element *param_2);  /* @ 0042db60 */
undefined4 tnp::sll_Search_ByIndex(__the_SLL *param_1,uint param_2,uint *param_3);  /* @ 0042ddf0 */
int tnp::sll_Search_ByNumber(__the_SLL *param_1,uint param_2);  /* @ 0042dfe0 */
void tnp::sll_Remove_ByIndex(__the_SLL *param_1,uint param_2);  /* @ 0042e024 */
void tnp::sll_Remove_ByNumber(__the_SLL *param_1,uint param_2);  /* @ 0042e0bc */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00406770 */
int event_log_get(int param_1,int param_2,int param_3);  /* @ 00409000 */
undefined4 event_log_seach(void);  /* @ 00409118 */
int init_replay_frame(int param_1,int *param_2,undefined4 param_3,uint *param_4,uint param_5, int param_6,int param_7,uint *param_8,uint param_9,int *param_10);  /* @ 0040918c */
undefined4 close_replay_frame(int param_1);  /* @ 0040967c */
undefined4 tnp_reply_event_list(int param_1,uint param_2);  /* @ 0040b98c */
undefined4 set_resolution(int param_1,undefined4 param_2,uint param_3,undefined2 param_4);  /* @ 0040daa8 */
undefined4 set_record_speed(int param_1,undefined4 param_2,int param_3,undefined2 param_4);  /* @ 0040dca8 */
int send_realtime_video(int param_1,int param_2,int param_3);  /* @ 0040e944 */
int send_realtime_audio(int param_1,int param_2,int param_3);  /* @ 0040ecb4 */
void myDoIOCtrl(int param_1,ushort *param_2);  /* @ 00410b08 */
void myReleaseUser(int param_1);  /* @ 00412b0c */
int parse_msg(int param_1);  /* @ 00412bd0 */
void refresh_tnp_event_list(void);  /* @ 00413078 */
void state_statistics(void);  /* @ 0041334c */
undefined4 __test(int param_1,int param_2);  /* @ 00413bf8 */
undefined4 IBNj3F4L37HiSGpwBgD6(undefined4 param_1);  /* @ 0041da44 */
void tnp::CRCDec(uchar *param_1,int param_2,uchar *param_3,int param_4);  /* @ 00427434 */
uint tnp::SllIndexCompare(uint param_1,uint param_2,uint param_3);  /* @ 0042d770 */
undefined4 tnp::IndexCompare(ushort param_1,ushort param_2);  /* @ 0042d7c0 */
void tnp::IndexDistanse(ushort param_1,ushort param_2);  /* @ 0042d824 */
void tnp::mSecSleep(uint param_1);  /* @ 0042e1e4 */
void tnp::SetSocketNonBlock(int param_1);  /* @ 0042e208 */
void tnp::SetSocketBlock(int param_1);  /* @ 0042e25c */
void tnp::SetSocketBroadcast(int param_1);  /* @ 0042e2b4 */
undefined4 tnp::CreateWorkerThread(_func_void_ptr_void_ptr *param_1,void *param_2);  /* @ 0042e2fc */
void tnp::WaitThreadExit(ulong *param_1);  /* @ 0042e34c */
undefined4 tnp::InitSocketEnv(void);  /* @ 0042e394 */
void tnp::ClearSocketEnv(void);  /* @ 0042e39c */
int tnp::getTickCount(void);  /* @ 004309e0 */
void tnp::getCurTime(void);  /* @ 00430a48 */
char * tnp::trim(char *param_1);  /* @ 00430cf0 */
char * tnp::myrindex(char *param_1,int param_2);  /* @ 0043123c */
unsigned char*, unsigned char*, unsigned char*, unsigned char*) */ void tnp::CRCSelect4Key(uchar param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,;  /* @ 00431d9c */
bool tnp::AddrIsTheSame(sockaddr_in *param_1,sockaddr_in *param_2);  /* @ 004324d0 */
int tnp::over_time_receive_tcp(int param_1,char *param_2,int param_3,uint param_4);  /* @ 004324fc */
int tnp::SendMessageByTCP(char *param_1,int param_2,int param_3);  /* @ 004326c8 */
void tnp::CloseSocket(int param_1);  /* @ 00432894 */
int tnp::CreateSocket(char param_1);  /* @ 004328e4 */
int tnp::setup_listen_port(ushort param_1);  /* @ 004329dc */
int tnp::TryBindPort(int param_1,ushort *param_2);  /* @ 00432b6c */
void tnp::ConnectAddress(int param_1,sockaddr_in *param_2);  /* @ 00432d44 */
void tnp::SendToAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4);  /* @ 00432d60 */
int tnp::SendMessage(char *param_1,int param_2,int param_3,sockaddr_in *param_4);  /* @ 00432d9c */
void tnp::RecvFromAddress(int param_1,char *param_2,int param_3,sockaddr_in *param_4);  /* @ 00432eb4 */
undefined4 tnp::over_time_receive(int param_1,char *param_2,int param_3,sockaddr_in *param_4,uint param_5);  /* @ 00432fa0 */
void tnp::UpdateNetwork(void);  /* @ 00433188 */
uint tnp::LanIfNum(void);  /* @ 004331a0 */
undefined4 tnp::GetIP(int param_1,char *param_2);  /* @ 00433238 */
void tnp::BroadcastMessage(char *param_1,int param_2,int param_3,ushort param_4);  /* @ 0043334c */
void tnp::htonAddr(sockaddr_in *param_1,sockaddr_in *param_2);  /* @ 004334c0 */
void tnp::ntohAddr(sockaddr_in *param_1,sockaddr_in *param_2);  /* @ 00433554 */
undefined4 try_adjust_buf(int *param_1,int *param_2,int param_3);  /* @ 0043e074 */
void dump_string(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 004409bc */
void ms_sleep(uint param_1);  /* @ 00440f6c */
undefined4 AesSetKey(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);  /* @ 004443a4 */
undefined4 AesSetIV(int param_1,int param_2);  /* @ 004444e0 */
undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 00444854 */
void CYASSL_MSG(undefined4 param_1);  /* @ 00444e20 */
uint __bswapsi2(uint param_1);  /* @ 00445070 */
undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4);  /* @ 004450b0 */
void __PLT_HEAD(void);  /* @ 00456e40 */
void putchar(void);  /* @ 00456e60 */
void strcpy(void);  /* @ 00456e70 */
void popen(void);  /* @ 00456e80 */
void printf(void);  /* @ 00456e90 */
void sigemptyset(void);  /* @ 00456eb0 */
void pclose(void);  /* @ 00456ec0 */
void snprintf(void);  /* @ 00456ee0 */
void bsearch(void);  /* @ 00456ef0 */
void usleep(void);  /* @ 00456f00 */
void getpid(void);  /* @ 00456f10 */
void prctl(void);  /* @ 00456f20 */
void memcpy(void);  /* @ 00456f30 */
void perror(void);  /* @ 00456f40 */
void puts(void);  /* @ 00456f60 */
void system(void);  /* @ 00456f70 */
void malloc(void);  /* @ 00456f90 */
void sleep(void);  /* @ 00456fa0 */
void vsnprintf(void);  /* @ 00456fb0 */
void socket(void);  /* @ 00456fd0 */
void select(void);  /* @ 00456fe0 */
void sigaddset(void);  /* @ 00456ff0 */
void mmap(void);  /* @ 00457000 */
void calloc(void);  /* @ 00457020 */
void ctime(void);  /* @ 00457040 */
void fseek(void);  /* @ 00457050 */
void mktime(void);  /* @ 00457060 */
void strstr(void);  /* @ 00457080 */
void signal(void);  /* @ 004570a0 */
void strncmp(void);  /* @ 004570b0 */
void strncpy(void);  /* @ 004570c0 */
void sendto(void);  /* @ 004570d0 */
void realloc(void);  /* @ 004570f0 */
void memcmp(void);  /* @ 00457100 */
void sscanf(void);  /* @ 00457110 */
void fread(void);  /* @ 00457120 */
void gettimeofday(void);  /* @ 00457130 */
void fopen(void);  /* @ 00457140 */
void localtime(void);  /* @ 00457150 */
void memset(void);  /* @ 00457160 */
void ftell(void);  /* @ 00457170 */
void fclose(void);  /* @ 00457190 */
void time(void);  /* @ 004571a0 */
void strcmp(void);  /* @ 004571b0 */
void sprintf(void);  /* @ 004571d0 */
void access(void);  /* @ 004571f0 */
void exit(void);  /* @ 00457210 */
void atoi(void);  /* @ 00457220 */
void fileno(void);  /* @ 00457230 */
void gmtime(void);  /* @ 00457240 */
void strlen(void);  /* @ 00457250 */
void open(void);  /* @ 00457260 */
void close(void);  /* @ 00457280 */
void vfprintf(void);  /* @ 00457290 */
void free(void);  /* @ 004572a0 */

#endif /* P2P_TNP_H */
