/**
 * @brief Entity state end variant 3: checks timer, transitions
 * @note Original: func_80053FDC at 0x80053FDC
 */
// Entity_StateEnd3



#include "tomba.h"
void Entity_StateEnd3(u8 *param_1,int param_2)

{
  s16 sVar1;
  int iVar2;
  
  iVar2 = Entity_StateEnd2();
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
  Sys_CallWithParams(0,0x81,0x81,0xf);
  Entity_ActionDispatch(param_1,0xb);
  g_ActionState = 0;
  if ((*param_1 & 4) == 0) {
    Entity_StateSwitch(param_1);
    param_1[0x61] = 0;
  }
  if (param_2 == 1) {
    param_1[0x172] = 0x5a;
    param_1[0x173] = 0;
    param_1->timer_170 = param_1->timer_main;
    param_1->sprite_flags = param_1->sprite_flags | 0x82;
    if ((*param_1 & 0xc) != 0) {
LAB_800540f8:
      Audio_PlaySoundEffect(0x23,0,0);
      Entity_SpawnWithFlag(6,param_1 + 0x2c,0xffffffb0);
      return;
    }
    *param_1 = 3;
    param_1->state_flag146 = 0;
    param_1->state_flag145 = 0;
    param_1->state = STATE_FINISH;
  }
  else {
    if (param_1->state == STATE_FINISH) {
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
    param_1->state = STATE_FINISH;
  }
  param_1->behavior_state = 0;
  param_1->action_state = 0;
  return;
}
