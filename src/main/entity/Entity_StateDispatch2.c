/**
 * @brief Entity state dispatch variant 2: switch on entity->behavior_state
 * @note Original: func_80026AD0 at 0x80026AD0
 */
// Entity_StateDispatch2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_StateDispatch2(int param_1)

{
  int iVar1;
  
  switch(param_1->behavior_state) {
  case 0:
    if (g_HurtState != '\x01') {
      return 0;
    }
    param_1->sub_type = g_HurtParam + '\x01';
    Game_SetPause(param_1);
    break;
  case 1:
    if (DAT_800bf80f == '\0') {
      Game_SetUnpause(param_1);
      Pad_InitReset();
      iVar1 = _g_CurrentEntity;
      _g_CurrentEntity->normal_z = 3;
      iVar1->sprite_x = 0;
      param_1->behavior_state = 6;
      g_HurtState = 2;
      return 0;
    }
    return 0;
  case 2:
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    Game_ClearPause(param_1);
    break;
  case 3:
    if (g_HurtState != '\x03') {
      return 0;
    }
    Game_SetPause(param_1);
    break;
  case 4:
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    Entity_UpdateChild(param_1);
    Game_SetUnpause(param_1);
    iVar1 = _g_CurrentEntity;
    _g_CurrentEntity->normal_z = 2;
    iVar1->sprite_x = 4;
    g_HurtState = '\x04';
    break;
  case 5:
    if (DAT_800bf80f == '\0') {
      param_1->behavior_state = 0;
      Game_ClearPause(param_1);
      return 0;
    }
    return 0;
  case 6:
    param_1->behavior_state = 2;
    return 1;
  default:
    goto switchD_80026b0c_default;
  }
  param_1->behavior_state = param_1->behavior_state + '\x01';
switchD_80026b0c_default:
  return 0;
}
