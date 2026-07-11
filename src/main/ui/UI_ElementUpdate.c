/**
 * @brief UI element updater: checks _g_FrameCounter, updates element state
 * @note Original: func_80049E54 at 0x80049E54
 */
// UI_ElementUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80049e54(int param_1,int param_2)

{
  s32 bVar1;
  u16 uVar2;
  s16 sVar3;
  s32 uVar4;
  uint uVar5;
  
  uVar2 = _g_FrameCounter;
  if (param_1->sub_action == '\0') {
    if ((s16)_g_FrameCounter < 1) {
      uVar4 = 0;
    }
    else {
      param_1->sub_action = 1;
      param_1->timer1 = 0x10;
      uVar5 = (uint)_g_FrameCounter;
      DAT_800ed061 = DAT_800ed061 | 2;
      _g_FrameCounter = (u16)(uVar5 + param_2);
      bVar1 = _DAT_800e7ff0 != uVar2;
      if ((int)(uint)g_ItemCount <= (int)((uVar5 + param_2) * 0x10000) >> 0x10) {
        _g_FrameCounter = (u16)g_ItemCount;
      }
      _DAT_800e7ff0 = _g_FrameCounter;
      if (bVar1) {
        _DAT_800e7ff0 = _g_FrameCounter - 1;
      }
      FUN_80072114(param_1,param_2);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
    if (param_1->sub_action == '\x01') {
      sVar3 = param_1->timer1 + -1;
      param_1->timer1 = sVar3;
      uVar4 = 0;
      if (sVar3 == -1) {
        uVar4 = 1;
        DAT_800ed061 = DAT_800ed061 & 0xfd;
      }
    }
  }
  return uVar4;
}
