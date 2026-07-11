/**
 * @brief Entity destroy behavior: entity->state 0->1->2, cleanup
 * @note Original: func_8006AE28 at 0x8006AE28
 */
// Entity_Behavior_Destroy



#include "tomba.h"
void Entity_Behavior_Destroy(u8 *param_1)

{
  u8 bVar1;
  s8 cVar2;
  u8 uVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1->state = STATE_DEAD;
        return;
      }
      if (bVar1 == 3) {
        Entity_ListInsert(param_1);
        return;
      }
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    uVar3 = 0x10;
    if (param_1->kind == '\x01') {
      uVar3 = 0x20;
    }
    param_1->input_flags = uVar3;
    Entity_InitConfig(param_1);
    param_1->target_angle = param_1->rot_y;
    param_1->state = param_1->state + '\x01';
    *(s16 *)(param_1 + 0x66) = 0;
    param_1->type_flags = 0;
    *(s16 *)(param_1 + 0x6c) = 0;
    *param_1 = 2;
    if (param_1->sub_type == '\0') {
      param_1->behavior_state = 1;
      Entity_DispatchBehavior(param_1);
    }
    else {
      Entity_SpawnTrail(param_1,(u8)param_1->kind - 1);
    }
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    Entity_Behavior_EnemyMain(param_1);
    cVar2 = param_1->kind;
joined_r0x8006af70:
    if (cVar2 == '\x01') goto LAB_8006af94;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        param_1->flags = 1;
        return;
      }
      Entity_State_Block(param_1);
      cVar2 = param_1->kind;
      goto joined_r0x8006af70;
    }
    if (bVar1 != 2) {
      param_1->flags = 1;
      return;
    }
    Entity_State_Bounce(param_1);
  }
  Entity_UpdateMatrix(param_1);
LAB_8006af94:
  param_1->flags = 1;
  return;
}
