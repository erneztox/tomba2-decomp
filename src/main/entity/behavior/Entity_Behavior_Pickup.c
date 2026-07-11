/**
 * @brief Entity pickup behavior: entity->behavior_state=0/1 state, picks up item animation
 * @note Original: func_8004C01C at 0x8004C01C
 */
// Entity_Behavior_Pickup



#include "tomba.h"
void Entity_Behavior_Pickup(u8 *param_1)

{
  s8 cVar1;
  
  if (param_1->flag_5E == '\0') {
    if (param_1->behavior_state == '\0') {
      param_1->behavior_state = 1;
      *param_1 = 3;
      param_1->gte_input = 0xffb0;
      *(s16 *)(param_1 + 0x8a) = 0x14;
      *(s16 *)(param_1 + 0x8c) = 0;
    }
    else if (param_1->behavior_state != '\x01') {
      return;
    }
    GTE_LoadMatrix(param_1,param_1 + 0x88,0,0);
    cVar1 = DAT_800e7e81;
    param_1->flags = DAT_800e7e81;
    if (cVar1 != '\0') {
      Sprite_Alloc3(param_1);
    }
  }
  else if (param_1->flag_5E == '\x01') {
    Entity_Behavior_Talk2(param_1);
  }
  return;
}
