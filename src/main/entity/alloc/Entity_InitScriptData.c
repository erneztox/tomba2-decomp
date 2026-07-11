/**
 * @brief Entity script data init: stores sprite/script ptrs at entity[0x6C/0x72/0x74]
 * @note Original: func_80040DE0 at 0x80040DE0
 */
// Entity_InitScriptData



#include "tomba.h"
void FUN_80040de0(int param_1,u16 *param_2)

{
  *(u16 **)(param_1 + 0x6c) = param_2;
  param_1->event_id = param_2->flags;
  param_1->event_param = param_2->kind;
  *(u16 *)(param_1 + 0x76) = param_2->sub_type;
  if ((*param_2 & 0x2000) != 0) {
    *(u16 *)(param_1 + 100) = param_2->state;
    *(u16 *)(param_1 + 0x66) = param_2->behavior_state;
    param_1->target_angle = param_2->action_state;
    param_1->type_flags = param_2->sub_action;
  }
  return;
}
