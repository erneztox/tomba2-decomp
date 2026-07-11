/**
 * @brief Entity sprite init variant 2: sets g_CameraEntity, inits timers
 * @note Original: func_80042BDC at 0x80042BDC
 */
// Entity_SpriteInit2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_SpriteInit2(int param_1)

{
  s16 sVar1;
  s16 sVar2;
  
  if (param_1->event_id == 0) {
    Entity_CopyStateData(1);
  }
  else {
    g_CameraEntity = 1;
  }
  _DAT_800e8076 = 0x130;
  _DAT_800e8040 = (int)_g_PlayerPosX << 0x10;
  _DAT_800e8044 = (_g_PlayerPosY + -0x8c) * 0x10000;
  _DAT_800e8048 = (int)_g_PlayerPosZ << 0x10;
  sVar1 = param_1->event_param;
  if (sVar1 != 1) {
    if (sVar1 < 2) {
      sVar2 = 0x180;
      if (sVar1 == 0) {
        sVar2 = 0x240;
      }
      goto LAB_80042cac;
    }
    if (sVar1 != 2) {
      sVar2 = 0x180;
      if (sVar1 == 3) {
        sVar2 = -0x180;
      }
      goto LAB_80042cac;
    }
  }
  sVar2 = 0x180;
LAB_80042cac:
  if ((param_1->event_param < 2) && (DAT_800e7fc7 != '\0')) {
    sVar2 = -sVar2;
  }
  _g_CameraAngle2 = sVar2 + _g_CameraAngle + _DAT_800e805a;
  _DAT_800e8074 = *(s16 *)(param_1 + 0x76);
  if (_DAT_800e8074 == 0) {
    _DAT_800e8074 = 0x480;
  }
  DAT_800e806e = 0;
  return 1;
}
