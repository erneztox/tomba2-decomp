/**
 * @brief Entity swing behavior: checks timer, applies swing
 * @note Original: func_800559F4 at 0x800559F4
 */
// Entity_Behavior_Swing



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800559f4(int param_1)

{
  u8 bVar1;
  u16 uVar2;
  
  if (param_1->timer_main == 0) {
    return 0;
  }
  if (g_CurrentOverlay != '\0') {
    return 0;
  }
  if (((int)*(s16 *)(param_1 + 0x16c) & 0xc000U) == 0xc000) {
    FUN_8004766c(param_1);
    if (((param_1->state_data & 0xa0000) == 0xa0000) &&
       (FUN_80047b5c(param_1,1), (_DAT_1f8001a8 & 2) != 0)) {
      *(u8 *)(param_1 + 0x61) = 0x20;
      _DAT_1f80018e = 0x1100;
      _DAT_1f800194 = _g_CollisionNormalY & 0xfff;
      _DAT_1f800196 = _g_CollisionNormalX & 0xfff;
      if (param_1->behavior_state == '\n') {
        _DAT_1f80018e = 0x1100;
        return 3;
      }
      param_1->behavior_state = 10;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      return 3;
    }
    FUN_80047b5c(param_1,0);
    if ((_DAT_1f8001a8 & 8) != 0) {
      _DAT_1f80018e = 0x2000;
      _DAT_1f800194 = _g_CollisionNormalY & 0xfff;
      _DAT_1f800196 = _g_CollisionNormalX & 0xfff;
      if (param_1->behavior_state == '\v') {
        _DAT_1f80018e = 0x2000;
        return 2;
      }
      param_1->behavior_state = 0xb;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      return 2;
    }
    if ((param_1->state_data & 0x60000) != 0x60000) {
      return 0;
    }
    if ((_DAT_1f8001a8 & 4) == 0) {
      return 0;
    }
    *(u8 *)(param_1 + 0x61) = 0x10;
    _DAT_1f80018e = 0x1000;
    _DAT_1f800194 = _g_CollisionNormalY & 0xfff;
    _DAT_1f800196 = _g_CollisionNormalX & 0xfff;
    goto LAB_80055bfc;
  }
  bVar1 = param_1->behavior_flags;
  if ((bVar1 & 2) == 0) {
    return 0;
  }
  if ((_DAT_1f80018e & 0x4000) == 0) {
    return 0;
  }
  if ((bVar1 & 4) == 0) {
    uVar2 = _DAT_1f80018e & 0x200;
    if ((bVar1 & 8) == 0) {
      return 0;
    }
LAB_80055be8:
    if (uVar2 == 0) {
      return 0;
    }
  }
  else if ((_DAT_1f80018e & 0x100) == 0) {
    uVar2 = _DAT_1f80018e & 0xc00;
    goto LAB_80055be8;
  }
  _DAT_1f800194 = _DAT_1f80018c;
LAB_80055bfc:
  if (param_1->behavior_state != '\n') {
    param_1->behavior_state = 10;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    return 1;
  }
  return 1;
}
