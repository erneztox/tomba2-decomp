/**
 * @brief Entity pick state: entity->sub_state state machine for pickup
 * @note Original: func_80043EDC at 0x80043EDC
 */
// Entity_StatePick



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_StatePick(int param_1)

{
  s16 sVar1;
  u16 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1->sub_state != '\0') {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    if (g_ActionTrigger != '\0') {
      if ((((int)param_1->event_id & 0x8000U) != 0) &&
         (uVar4 = (uint)DAT_800e7fc7, uVar3 = Math_CompareAngle((int)_g_EntityAngle,(int)_g_CameraAngle,0),
         uVar4 != uVar3)) {
        DAT_800e7fc7 = '\x01' - DAT_800e7fc7;
        Entity_ResetState_2();
        return 1;
      }
      return 1;
    }
    return 0;
  }
  if (g_CameraMode2 != '\0') {
    return 1;
  }
  g_CollisionType = 0x23;
  if (param_1->event_param == 0) {
    g_CollisionType = 0x1e;
  }
  DAT_800e7e86 = 0;
  uVar2 = param_1->event_id & 0xf;
  param_1->sub_state = param_1->sub_state + '\x01';
  if (uVar2 == 1) {
    uVar2 = Math_Atan2((int)_g_PlayerPosZ - (int)param_1->pos_z,
                         (int)param_1->pos_y - (int)_g_PlayerPosX);
  }
  else {
    if (uVar2 < 2) {
      if ((param_1->event_id & 0xf) == 0) {
        _g_AngleInput = *(s16 *)(param_1 + 0x76);
        return 0;
      }
      return 0;
    }
    if (uVar2 != 2) {
      return 0;
    }
    sVar1 = Math_Atan2((int)_g_PlayerPosZ - (int)param_1->pos_z,
                         (int)param_1->pos_y - (int)_g_PlayerPosX);
    uVar2 = sVar1 - 0x800;
  }
  _g_AngleInput = uVar2 & 0xfff;
  return 0;
}
