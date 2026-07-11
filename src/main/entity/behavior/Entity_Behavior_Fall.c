/**
 * @brief Entity fall behavior: entity->sub_action state 0->1->2->3, gravity
 * @note Original: func_8006B1FC at 0x8006B1FC
 */
// Entity_Behavior_Fall



#include "tomba.h"
void Entity_Behavior_Fall(int param_1)

{
  s16 sVar1;
  u8 bVar2;
  
  bVar2 = param_1->sub_action;
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          return;
        }
        param_1->anim_counter = param_1->anim_counter - *(s16 *)(param_1 + 0x76);
        param_1->type_flags = param_1->type_flags + -0x80;
        if ((param_1->move_mode == '\x01') &&
           (sVar1 = param_1->timer2, param_1->timer2 = sVar1 + -1, sVar1 == 1)
           ) {
          param_1->move_mode = 0;
          param_1->timer2 = 2;
        }
        if ((-1 < param_1->anim_counter) && (param_1->move_mode < 2)) {
          return;
        }
        param_1->move_mode = 2;
        param_1->anim_counter = 0;
        param_1->sub_action = 0;
        bVar2 = param_1->anim_id >> 1 & 3;
        param_1->action_state = param_1->action_state + '\x01';
        if (bVar2 == 2) {
          param_1->type_flags = 0x980;
          return;
        }
        if (2 < bVar2) {
          if (bVar2 != 3) {
            return;
          }
          param_1->type_flags = 0x700;
          return;
        }
        param_1->type_flags = 0xc00;
        return;
      }
      if (param_1->move_mode == 1) {
        param_1->timer2 = 2;
        param_1->move_mode = 0;
      }
      else if (1 < param_1->move_mode) {
        param_1->anim_counter = 0;
      }
      goto LAB_8006b264;
    }
    if (bVar2 != 0) {
      return;
    }
    param_1->sub_action = 1;
  }
  if (1 < param_1->move_mode) {
    param_1->anim_counter = 0;
    param_1->sub_action = 3;
    return;
  }
LAB_8006b264:
  param_1->sub_action = param_1->sub_action + '\x01';
  return;
}
