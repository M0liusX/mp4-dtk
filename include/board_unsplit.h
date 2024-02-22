#ifndef _UNSPLIT_BOARD_H
#define _UNSPLIT_BOARD_H

#include "dolphin.h"

#ifndef _BOARD_SPACE_EVENT_FUNC
#define _BOARD_SPACE_EVENT_FUNC
typedef s32 (*BoardSpaceEventFunc)(void);
#endif

#ifndef _BOARD_MAIN_H
typedef void (*BoardLightHook)(void);
#endif

s32 BoardSpacePosGet(s32, s32, Vec*);
void BoardShopTutorialExec(s32);
void BoardLotteryTutorialExec(void);
void BoardMGSetupTutorialExec(void);
void BoardBooHouseTutorialExec(void);
void BoardCharWheelSetTarget(s32);
void BoardSpaceStarSetIndex(s32);
s32 BoardModelRotYSet(s16, f32);
f32 BoardModelRotYGet(s16);
s32 BoardModelLayerSet(s16, u8);
s16 BoardModelIDGet(s16);
s32 BoardModelScaleSetV(s16, Vec*);
void BoardLightHookSet(BoardLightHook set, BoardLightHook reset);
s16 BoardModelCreate(s32, s32*, s32);
void BoardModelKill(s16);
s32 fn_8006DDE8(s16, f32);
s32 BoardModelMotionStart(s16, s32, u32);
s32 BoardModelMotionSpeedSet(s16, f32);
s32 BoardModelPosSetV(s16, Vec*);
s32 BoardModelPosSet(s16, f32, f32, f32);
s32 BoardModelRotSetV(s16 arg0, Vec* arg1);
s32 BoardModelVisibilitySet(s16, s32);
void BoardSpaceWalkEventFuncSet(BoardSpaceEventFunc func);
void BoardSpaceWalkMiniEventFuncSet(BoardSpaceEventFunc func);
void BoardSpaceLandEventFuncSet(BoardSpaceEventFunc func);
s32 BoardSpaceFlagSearch(s32, u32);
void BoardSpaceInit(s32);
void BoardSpaceDestroy(void);
void BoardShopHostSet(s16);
void BoardLotteryHostSet(s16);
void BoardBooHouseHostSet(s16);
s32 BoardCameraRotGet(Vec*);
s32 BoardModelScaleSet(s16, f32, f32, f32);
s32 BoardIsKill(void);
void BoardModelMtxSet(s16, Mtx*);
s32 BoardModelRotSet(s16, f32, f32, f32);

void BoardBowserExec(s32 player, s32 space);
void BoardBattleExec(s32 player, s32 space);
void BoardFortuneExec(s32 player, s32 space);

#endif
