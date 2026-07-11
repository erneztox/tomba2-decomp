/**
 * @brief Entity state switcher: switch on entity->sub_state, 8 states
 * @note Original: func_80053D90 at 0x80053D90
 */
// Entity_StateSwitch



#include "tomba.h"
void Entity_StateSwitch(int param_1)

{
  u16 uVar1;
  u8 uVar2;
  u8 *puVar3;
  
  switch(param_1->sub_state) {
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    puVar3 = *(u8 **)(param_1 + 0x10);
    *puVar3 = 2;
    uVar1 = param_1->rot_y;
    puVar3->state = STATE_FINISH;
    puVar3->behavior_state = 2;
    puVar3->action_state = 0;
    puVar3->move_mode = (char)(uVar1 >> 4);
    puVar3->alloc_flags = puVar3->alloc_flags | 0x80;
    goto switchD_80053dc4_default;
  case 2:
    puVar3 = *(u8 **)(param_1 + 0x10);
    puVar3->state = STATE_FINISH;
    uVar2 = 3;
    break;
  case 3:
    puVar3 = *(u8 **)(param_1 + 0x10);
    *puVar3 = 2;
    puVar3->state = STATE_FINISH;
    uVar2 = 1;
    break;
  default:
    goto switchD_80053dc4_default;
  }
  puVar3->behavior_state = uVar2;
  puVar3->action_state = 0;
switchD_80053dc4_default:
  param_1->state_flag144 = 0;
  param_1->sub_state = 0;
  *(u8 *)(param_1 + 0x181) = 0;
  Entity_StateCheck();
  return;
}
