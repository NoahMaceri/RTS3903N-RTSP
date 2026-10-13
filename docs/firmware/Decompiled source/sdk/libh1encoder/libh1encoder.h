/* libh1encoder — recovered function prototypes
 * Hantro H1 H.264 encoder wrapper layer (EWL)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef LIBH1ENCODER_H
#define LIBH1ENCODER_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00014cb4 */
void _fini(void);  /* @ 00018a20 */
void _fini(void);  /* @ 00028a20 */

/* ---- ewlinit ---- */
void EWLInit_post(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 0001769c */
void EWLInit(void);  /* @ 00018514 */
undefined4 EWLInit_post(int param_1,undefined4 param_2);  /* @ 0002769c */
uint * EWLInit(uint *param_1);  /* @ 00028514 */

/* ---- h264 ---- */
void h264_ewl_set_epoll_hook(undefined4 param_1);  /* @ 00017eb0 */
void h264_ewl_use_sigio(undefined4 param_1);  /* @ 00017f30 */
void h264_ewl_check_done(void);  /* @ 00017fc4 */
void h264_ewl_make_rdy(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00018064 */
undefined4 h264_ewl_set_epoll_hook(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00027eb0 */
undefined4 h264_ewl_use_sigio(int param_1,int param_2);  /* @ 00027f30 */
undefined4 h264_ewl_check_done(int param_1);  /* @ 00027fc4 */
undefined4 h264_ewl_make_rdy(int param_1);  /* @ 00028064 */

/* ---- h264encinit ---- */
void H264EncInit_V2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00015d74 */
void H264EncInit(undefined4 param_1);  /* @ 00015e68 */
int H264EncInit_V2(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);  /* @ 00025d74 */
void H264EncInit(undefined4 param_1,undefined4 param_2);  /* @ 00025e68 */

/* ---- misc ---- */
void H264EncRelease(void);  /* @ 00012754 */
void processEntry entry(void);  /* @ 00014d30 */
void EncAsicSetRegisterValue(int param_1,int param_2,int param_3);  /* @ 00014ef0 */
void EncAsicWriteRegisterValue(undefined4 param_1,int param_2,int param_3,int param_4);  /* @ 00014f58 */
uint EncAsicGetRegisterValue(undefined4 param_1,int param_2,int param_3);  /* @ 00014ff0 */
void EncAsicMemFree_V2(undefined4 *param_1);  /* @ 00015080 */
undefined4 EncAsicMemAlloc_V2(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6, uint param_7,int param_8);  /* @ 000151e0 */
undefined4 EncAsicCheckStatus_V2(undefined4 *param_1);  /* @ 0001557c */
void EncAsicSetQuantTable(int param_1,int param_2,int param_3);  /* @ 00015770 */
void EncAsicGetId(undefined4 param_1);  /* @ 000157d4 */
undefined4 EncAsicControllerInit(undefined4 *param_1);  /* @ 000157f0 */
void EncAsicRecycleInternalImage (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);  /* @ 00015898 */
void CheckRegisterValues(void);  /* @ 00015a24 */
void EncAsicFrameStart(undefined4 param_1,undefined4 *param_2);  /* @ 00015a2c */
void H264EncStrmEnd(void);  /* @ 00015aa0 */
void H264EncGetBitsPerPixel (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5);  /* @ 00015bf0 */
void H264EncSetTestId(void);  /* @ 00015c44 */
void H264EncGetMbInfo(undefined4 param_1);  /* @ 00015c4c */
void H264EncGetEncodedMbLines (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00015cc8 */
void H264EncSetInputMBLines(undefined4 param_1);  /* @ 00015d10 */
void H264EncGetMbSizeInfo (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00015e88 */
void H264EncSetEpollHook(void);  /* @ 00015ec4 */
void H264EncCheckDone(void);  /* @ 00015ef0 */
void H264EncMakeRdy(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00015f1c */
void H264EncUseSigio(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00015f48 */
void H264CabacInit(void);  /* @ 00015f80 */
void H264MadInit(undefined4 param_1);  /* @ 00016110 */
void H264MadThreshold(undefined4 param_1);  /* @ 00016154 */
void H264InitSei(void);  /* @ 00016630 */
void H264UpdateSeiTS(void);  /* @ 000166dc */
void H264FillerSei(void);  /* @ 000167c4 */
void H264BufferingSei(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4, int param_5);  /* @ 000168cc */
void H264PicTimingSei(void);  /* @ 000169ec */
void H264UserDataUnregSei(void);  /* @ 00016cdc */
void H264RecoveryPointSei(void);  /* @ 00016e20 */
void H264ScalabilityInfoSei(void);  /* @ 00016f24 */
void EWLReadAsicID(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 000173a0 */
void EWLReadAsicConfig(undefined4 param_1);  /* @ 00017458 */
void EWLWriteReg(void);  /* @ 000176c4 */
void dump_reg_to_file(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 000177e4 */
void EWLEnableHW(void);  /* @ 00017910 */
void EWLDisableHW(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 000179c8 */
void EWLReadReg(void);  /* @ 00017a40 */
void EWLMallocLinear(void);  /* @ 00017ab8 */
void EWLMallocRefFrm(void);  /* @ 00017c50 */
void EWLFreeLinear(void);  /* @ 00017cb8 */
void EWLFreeRefFrm(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 00017da0 */
void EWLReserveHw(void);  /* @ 00017e04 */
void EWLWaitHwRdy(undefined4 param_1);  /* @ 0001812c */
void EWLReleaseHw(void);  /* @ 00018360 */
void EWLmalloc(void);  /* @ 0001840c */
void EWLfree(void);  /* @ 00018424 */
void EWLRelease(void);  /* @ 0001844c */
void EWLcalloc(void);  /* @ 00018650 */
void EWLmemcpy(void);  /* @ 00018668 */
void EWLmemset(void);  /* @ 00018680 */
void EWLmemcmp(void);  /* @ 00018698 */
void EncAsicFrameContinue(undefined4 param_1,int param_2);  /* @ 00018810 */
void EncAsicGetRegisters(undefined4 param_1,int param_2);  /* @ 000188a4 */
void EncAsicStop(undefined4 param_1);  /* @ 00018bb8 */
void EncAsicGetStatus(undefined4 param_1);  /* @ 00018bd8 */
int EncAsicGetMvOutput(int param_1,int param_2);  /* @ 00018bf4 */
void EncAsicClearStatusBit(undefined4 param_1,uint param_2);  /* @ 00018c70 */
void EncPreProcessFree(int param_1);  /* @ 00018f6c */
undefined4 EncPreProcessAlloc(int param_1,undefined4 param_2);  /* @ 00019048 */
int EncPreProcessCheck(uint *param_1);  /* @ 00019180 */
void EncSetColorConversion(int param_1,int param_2);  /* @ 000191e8 */
void EncAdaptiveROI(undefined4 param_1,int param_2);  /* @ 000192f8 */
void EncPreProcess(int param_1,int *param_2);  /* @ 00019eb0 */
uint float2fixpoint(float param_1);  /* @ 0001a280 */
undefined4 H264CodeFrame(int param_1);  /* @ 0001a2d8 */
undefined4 H264CheckCfg(uint *param_1);  /* @ 0001b6a0 */
void H264Shutdown(int param_1);  /* @ 0001b8a4 */
int H264GetAllowedWidth(int param_1,int param_2);  /* @ 0001b918 */
undefined4 H264Init(int *param_1,int *param_2,int param_3,undefined4 param_4);  /* @ 0001b958 */
void H264NalUnitHdr(int param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 0001c4b0 */
void H264NalUnitHdrMvcExtension(int param_1,int *param_2);  /* @ 0001c5a8 */
void H264NalUnitHdrSvcExtension(int param_1,int param_2);  /* @ 0001c68c */
int H264FillerNALU(int param_1,int param_2,undefined4 param_3);  /* @ 0001c7f0 */
void H264PicParameterSetInit(undefined4 *param_1);  /* @ 0001c890 */
void H264PicParameterSet(undefined4 param_1,undefined4 *param_2);  /* @ 0001c8e0 */
undefined4 H264PictureBufferAlloc(int param_1,int param_2,int param_3);  /* @ 0001cb00 */
undefined4 H264PictureBufferSetupH264(int *param_1,int param_2,uint param_3,int param_4);  /* @ 0001cc18 */
void H264PictureBufferFree(int param_1);  /* @ 0001cca8 */
void H264InitializePictureBuffer(int *param_1);  /* @ 0001cccc */
void H264UpdatePictureBuffer(int *param_1);  /* @ 0001cf74 */
void H264UpdatePictureBufferForSvct(int *param_1,uint param_2,int param_3);  /* @ 0001d0dc */
void H264PictureBufferSetRef(int *param_1,int param_2,int param_3);  /* @ 0001d24c */
void H264PictureBufferSetRefForSvct(int *param_1,int param_2,uint param_3);  /* @ 0001d638 */
void H264PutBits(undefined4 *param_1,int param_2,int param_3);  /* @ 0001d8a0 */
void H264PutNalBits(undefined4 *param_1,int param_2,int param_3);  /* @ 0001d938 */
undefined4 H264SetBuffer(int *param_1,undefined1 *param_2,uint param_3);  /* @ 0001da58 */
void H264ExpGolombUnsigned(undefined4 param_1,int param_2);  /* @ 0001daa0 */
void H264ExpGolombSigned(undefined4 param_1,int param_2);  /* @ 0001dbcc */
void H264RbspTrailingBits(int param_1);  /* @ 0001dc00 */
int H264FillerRc(int param_1,uint param_2,uint param_3);  /* @ 0001e190 */
int H264Calculate(uint param_1,uint param_2,uint param_3);  /* @ 0001e28c */
int predict_cur_bitrate_by_motion_and_mad(int param_1);  /* @ 0001e3d4 */
int predict_cur_bitrate_by_motion_and_mse(int param_1);  /* @ 0001e6d0 */
undefined4 H1H264InitRc(undefined4 *param_1,int param_2);  /* @ 0001eae8 */
undefined4 H264InitRc(undefined4 *param_1,int param_2);  /* @ 0001edf0 */
undefined4 H1H264AfterPicRc(int param_1,int param_2,int param_3,uint param_4);  /* @ 0001fc94 */
undefined4 H264AfterPicRc(int param_1,undefined4 param_2,int param_3,undefined4 param_4);  /* @ 0001ffd4 */
void H1H264BeforePicRc(int *param_1,int param_2,int param_3);  /* @ 0002073c */
void H264BeforePicRc(int *param_1,int param_2,int param_3);  /* @ 00020c44 */
undefined4 H264EncDnfInit(int param_1);  /* @ 000212d0 */
undefined4 H264EncDnfSetParameters(int param_1,int param_2);  /* @ 000212f8 */
undefined4 H264EncDnfGetParameters(int param_1,int param_2);  /* @ 00021318 */
undefined4 H264EncDnfPrepare(int param_1);  /* @ 00021338 */
undefined4 H264EncDnfUpdate(int param_1);  /* @ 00021680 */
void H264SeqParameterSetInit(undefined4 *param_1);  /* @ 00021810 */
void H264SeqParameterSet(undefined4 param_1,undefined4 *param_2,int param_3);  /* @ 00021898 */
void H264SubsetSeqParameterSet(undefined4 param_1,undefined4 *param_2);  /* @ 0002226c */
int H264CheckLevel(int param_1,int param_2,int param_3,int param_4);  /* @ 0002247c */
int H264GetLevelIndex(int param_1);  /* @ 00022534 */
void H264SpsSetVuiTimigInfo(int param_1,int param_2,undefined4 param_3);  /* @ 00022574 */
void H264SpsSetVuiVideoInfo(int param_1,int param_2);  /* @ 00022590 */
void H264SpsSetVuiAspectRatio(int param_1,int param_2,undefined4 param_3);  /* @ 000225a8 */
void H264SpsSetVuiHrd(int param_1,int param_2);  /* @ 000225c0 */
void H264SpsSetVuiHrdBitRate(int param_1,undefined4 param_2);  /* @ 00022614 */
void H264SpsSetVuiHrdCpbSize(int param_1,undefined4 param_2);  /* @ 0002261c */
undefined4 H264SpsGetVuiHrdBitRate(int param_1);  /* @ 00022624 */
undefined4 H264SpsGetVuiHrdCpbSize(int param_1);  /* @ 0002262c */
void H264EndOfSequence(undefined4 param_1,undefined4 *param_2);  /* @ 00022634 */
void H264EndOfStream(undefined4 param_1,undefined4 *param_2);  /* @ 00022658 */
void H264SpsSetVuiPictStructPresentFlag(int param_1,undefined4 param_2);  /* @ 0002267c */
void H264SliceInit(undefined4 *param_1);  /* @ 00022690 */
undefined4 * H264EncGetApiVersion(undefined4 *param_1);  /* @ 000226f0 */
undefined4 * H264EncGetBuild(undefined4 *param_1);  /* @ 00022708 */
undefined4 H264EncRelease(int param_1);  /* @ 00022754 */
undefined4 H264EncSetCodingCtrl(uint *param_1,uint *param_2);  /* @ 000227ac */
undefined4 H264EncGetCodingCtrl(int param_1,uint *param_2);  /* @ 00022f78 */
undefined4 H264EncSetRateCtrl(int *param_1,uint *param_2);  /* @ 00023210 */
undefined4 H264EncGetRateCtrl(int param_1,uint *param_2);  /* @ 000236a0 */
undefined4 H264EncSetPreProcessing(int param_1,uint *param_2);  /* @ 00023820 */
undefined4 H264EncGetPreProcessing(int param_1,undefined4 *param_2);  /* @ 00023c88 */
undefined4 H264EncSetRoiMap(int param_1,int param_2);  /* @ 00023d34 */
undefined4 H264EncSetSeiUserData(int param_1,int param_2,int param_3);  /* @ 00023dfc */
undefined4 H264EncStrmStart(uint *param_1,int param_2,int param_3);  /* @ 00023e68 */
undefined4 H264EncStrmEncode(int *param_1,int param_2,undefined4 *param_3);  /* @ 000243b8 */
undefined4 H264EncStrmEnd(int *param_1,int param_2,int param_3);  /* @ 00025aa0 */
undefined4 H264EncGetBitsPerPixel(uint param_1);  /* @ 00025bf0 */
undefined4 H264EncSetTestId(void);  /* @ 00025c44 */
undefined4 H264EncGetMbInfo(int param_1,int param_2,uint param_3);  /* @ 00025c4c */
undefined4 H264EncGetEncodedMbLines(int param_1);  /* @ 00025cc8 */
undefined4 H264EncSetInputMBLines(int param_1,undefined4 param_2);  /* @ 00025d10 */
undefined4 H264EncGetMbSizeInfo(int param_1,undefined1 *param_2);  /* @ 00025e88 */
undefined4 H264EncSetEpollHook(int param_1);  /* @ 00025ec4 */
undefined4 H264EncCheckDone(int param_1);  /* @ 00025ef0 */
undefined4 H264EncMakeRdy(int param_1);  /* @ 00025f1c */
undefined4 H264EncUseSigio(int param_1);  /* @ 00025f48 */
undefined4 H264CabacInit(uint *param_1,int param_2);  /* @ 00025f80 */
void H264MadInit(int param_1,undefined4 param_2);  /* @ 00026110 */
void H264MadThreshold(int *param_1,uint *param_2);  /* @ 00026154 */
void H264InitSei(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);  /* @ 00026630 */
void H264UpdateSeiTS(int param_1,int param_2);  /* @ 000266dc */
void H264FillerSei(undefined4 param_1,int param_2,int param_3);  /* @ 000267c4 */
void H264BufferingSei(undefined4 *param_1,int param_2);  /* @ 000268cc */
void H264PicTimingSei(undefined4 *param_1,int *param_2);  /* @ 000269ec */
void H264UserDataUnregSei(undefined4 param_1,int param_2);  /* @ 00026cdc */
void H264RecoveryPointSei(undefined4 *param_1,int param_2);  /* @ 00026e20 */
void H264ScalabilityInfoSei(undefined4 *param_1,int param_2,int param_3);  /* @ 00026f24 */
void EWLReadAsicID(void);  /* @ 000273a0 */
undefined4 * EWLReadAsicConfig(undefined4 *param_1);  /* @ 00027458 */
undefined4 EWLWriteReg(int param_1,int param_2,undefined4 param_3);  /* @ 000276c4 */
void dump_reg_to_file(int param_1);  /* @ 000277e4 */
undefined4 EWLEnableHW(int param_1,int param_2,undefined4 param_3);  /* @ 00027910 */
undefined4 EWLDisableHW(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 000279c8 */
undefined4 EWLReadReg(int param_1,int param_2);  /* @ 00027a40 */
undefined4 EWLMallocLinear(int param_1,int param_2,int *param_3);  /* @ 00027ab8 */
void EWLMallocRefFrm(int param_1,undefined4 param_2,int param_3);  /* @ 00027c50 */
void EWLFreeLinear(int param_1,undefined4 *param_2);  /* @ 00027cb8 */
void EWLFreeRefFrm(int param_1,int param_2);  /* @ 00027da0 */
undefined4 EWLReserveHw(int param_1);  /* @ 00027e04 */
undefined4 EWLWaitHwRdy(int param_1);  /* @ 0002812c */
void EWLReleaseHw(int param_1);  /* @ 00028360 */
void EWLfree(int param_1);  /* @ 00028424 */
uint * EWLRelease(int param_1);  /* @ 0002844c */

#endif /* LIBH1ENCODER_H */
