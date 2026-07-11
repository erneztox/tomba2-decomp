/**
 * @brief Entity state end variant 3: checks timer, transitions
 * @note Original: func_80053FDC at 0x80053FDC
 */
// Entity_StateEnd3



#include "tomba.h"
void FUN_80053fdc(u8 *param_1,int param_2)

{
  s16 sVar1;
  int iVar2;
  
  iVar2 = FUN_80053e50();
  if (iVar2 != 0) {
    return;
  }
  if (param_1->timer_main == param_1->timer_170) {
    sVar1 = param_1->timer_172;
    if (param_1->timer_172 == 0) {
      return;
    }
    param_1->timer_172 = sVar1 + -1;
    if (sVar1 != 1) {
      return;
    }
    if ((*param_1 != 2) && ((*param_1 & 4) == 0)) {
      *param_1 = 1;
      if ((param_1->sprite_flags & 0x50) != 0) {
        param_1->sprite_flags = param_1->sprite_flags & 0x7f;
        return;
      }
      param_1->sprite_flags = 0;
      return;
    }
    param_1[0x172] = 1;
    param_1[0x173] = 0;
    return;
  }
  FUN_800521f4(0,0x81,0x81,0xf);
  FUN_80058304(param_1,0xb);
  g_ActionState = 0;
  if ((*param_1 & 4) == 0) {
    FUN_80053d90(param_1);
    param_1[0x61] = 0;
  }
  if (param_2 == 1) {
    param_1[0x172] = 0x5a;
    param_1[0x173] = 0;
    param_1->timer_170 = param_1->timer_main;
    param_1->sprite_flags = param_1->sprite_flags | 0x82;
    if ((*param_1 & 0xc) != 0) {
LAB_800540f8:
      FUN_80074590(0x23,0,0);
      FUN_800312d4(6,param_1 + 0x2c,0xffffffb0);
      return;
    }
    *param_1 = 3;
    param_1->state_flag146 = 0;
    param_1->state_flag145 = 0;
    param_1->state = 2;
  }
  else {
    if (param_1->state == 2) {
      return;
    }
    param_1[0x172] = 0x5a;
    param_1[0x173] = 0;
    param_1->timer_170 = param_1->timer_main;
    param_1->sprite_flags = param_1->sprite_flags | 0x82;
    if ((*param_1 & 0xc) != 0) goto LAB_800540f8;
    *param_1 = 3;
    param_1->state_flag146 = 0;
    param_1->state_flag145 = 0;
    param_1->state = 2;
  }
  param_1->behavior_state = 0;
  param_1->action_state = 0;
  return;
}
