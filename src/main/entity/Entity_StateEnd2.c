/**
 * @brief Entity state end variant 2: checks timer, plays SFX, transitions
 * @note Original: func_80053E50 at 0x80053E50
 */
// Entity_StateEnd2



#include "tomba.h"
s32 Entity_StateEnd2(u8 *param_1)

{
  if (0 < param_1->timer_main) {
    return 0;
  }
  g_ActionState = 0;
  Entity_ActionDispatch(param_1,0xb);
  if (param_1->action_flag == 1) {
    if ((*param_1 & 4) == 0) {
      if ((param_1->sprite_flags & 0x80) == 0) {
        Sys_CallWithParams(0,0x81,0x81,0xf);
      }
      param_1->sprite_flags = 0;
      param_1[0x61] = 0;
      Entity_StateSwitch(param_1);
      *param_1 = 3;
      param_1[0x16e] = 0;
      param_1[0x16f] = 0;
      param_1[0x170] = 0;
      param_1[0x171] = 0;
      param_1->state_flag146 = 0;
LAB_80053fac:
      param_1->state = STATE_FINISH;
      param_1->behavior_state = 1;
      param_1->action_state = 0;
      g_TimerFlag = 1;
      Entity_SpawnWithFlag(6,param_1 + 0x2c,0xffffffb0);
      return 1;
    }
    if ((param_1->sprite_flags & 0x80) != 0) {
      return 1;
    }
    Sys_CallWithParams(0,0x81,0x81,0xf);
    param_1->sprite_flags = param_1->sprite_flags | 0x82;
  }
  else if (g_TimerFlag < '\x01') {
    Sys_CallWithParams(0,0x81,0x81,0xf);
    param_1->sprite_flags = 0;
    param_1[0x61] = 0;
    Entity_StateSwitch(param_1);
    *param_1 = 3;
    param_1[0x16e] = 0;
    param_1[0x16f] = 0;
    param_1[0x170] = 0;
    param_1[0x171] = 0;
    param_1->state_flag146 = 0;
    param_1->flag_16A = 0;
    goto LAB_80053fac;
  }
  return 1;
}
