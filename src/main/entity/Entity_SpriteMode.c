/**
 * @brief Entity sprite mode setter: checks entity[0x72], switches on mode
 * @note Original: func_80042A8C at 0x80042A8C
 */
// Entity_SpriteMode



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_SpriteMode(int param_1)

{
  s16 sVar1;
  s16 sVar2;
  
  DAT_800e806e = 0;
  sVar1 = param_1->event_id;
  if (sVar1 == 0) {
    Entity_CopyStateData((int)param_1->event_param);
  }
  else if (sVar1 < 1) {
    if (sVar1 == -1) {
      Camera_CheckEntity();
      return 1;
    }
  }
  else if (sVar1 == 1) {
    g_CameraEntity = *(u8 *)(param_1 + 0x74);
  }
  if (*(s16 *)(param_1 + 0x76) == 0) {
    sVar1 = *(s16 *)(param_1 + 100);
    _DAT_800e8044 = (int)*(s16 *)(param_1 + 0x66) << 0x10;
    sVar2 = param_1->target_angle;
  }
  else {
    if (*(s16 *)(param_1 + 0x76) != 1) {
      return 1;
    }
    _DAT_800e8044 = (_g_PlayerPosY + -0x8c) * 0x10000;
    sVar2 = _g_PlayerPosZ;
    sVar1 = _g_PlayerPosX;
  }
  _DAT_800e8040 = (int)sVar1 << 0x10;
  _DAT_800e8048 = (int)sVar2 << 0x10;
  return 1;
}
