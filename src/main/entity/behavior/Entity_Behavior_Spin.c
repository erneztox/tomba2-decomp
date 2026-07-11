/**
 * @brief Entity spin behavior: entity[0x154] deceleration
 * @note Original: func_80063158 at 0x80063158
 */
// Entity_Behavior_Spin



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80063158(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  
  sVar2 = param_1->speed;
  param_1->speed = sVar2 + -0x20;
  if ((s16)(sVar2 + -0x20) < 0x20) {
    param_1[0x154] = 0x20;
    param_1[0x155] = 0;
  }
  param_1->timer2 = param_1->timer2 + param_1->speed;
  if (param_1->anim_param == param_1->direction) {
    sVar2 = param_1->rot_y - param_1->speed;
  }
  else {
    sVar2 = param_1->rot_y + param_1->speed;
  }
  param_1->rot_y = sVar2;
  if (0x400 < param_1->timer2) {
    if ((_g_PadState & _g_InputMask) != 0) {
      param_1->flag_5E = param_1->flag_5E | 1;
    }
    if (((param_1->game_flags & 7) == 0) && ((_g_PadState & _DAT_1f800174) != 0)) {
      param_1->flag_5E = param_1->flag_5E | 2;
    }
  }
  if (param_1->timer2 < 0x801) {
    return;
  }
  if (param_1->direction == 0) {
    param_1->direction = 1;
    param_1[0x149] = 3;
    param_1->behavior_flags = 3;
    param_1->rot_y = param_1->draw_angle + 0x800;
  }
  else {
    param_1->direction = 0;
    param_1[0x149] = 2;
    param_1->behavior_flags = 2;
    param_1->rot_y = param_1->draw_angle;
  }
  if ((param_1->timer_main < 1) || (bVar1 = *param_1, (bVar1 & 2) != 0)) {
    bVar1 = *param_1;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  else {
    if ((param_1->flag_5E & 1) != 0) {
      *param_1 = bVar1 & 3;
      param_1->flag_5E = 0;
      FUN_80064524();
      return;
    }
    if ((param_1->flag_5E & 2) != 0) {
      *param_1 = bVar1 & 3;
      param_1->flag_5E = 0;
      FUN_800645cc();
      return;
    }
    param_1[0x154] = 0;
    param_1[0x155] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    if ((((_g_InputState & _DAT_1f80016c) != 0) && (param_1->direction == 0)) ||
       (((_g_InputState & _DAT_1f80016e) != 0 && (param_1->direction == 1)))) {
      param_1->sub_action = 0;
      return;
    }
    bVar1 = *param_1;
  }
  param_1->sub_action = 2;
  *param_1 = bVar1 & 3;
  return;
}
