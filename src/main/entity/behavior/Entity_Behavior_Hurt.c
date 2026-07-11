/**
 * @brief Entity hurt behavior: entity->state state 0->1->2, knockback
 * @note Original: func_8006BB6C at 0x8006BB6C
 */
// Entity_Behavior_Hurt



#include "tomba.h"
void Entity_Behavior_Hurt(u8 *param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1->flags = 0;
        param_1->state = param_1->state + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      if (*(s16 *)(param_1 + 0x6e) == 0) {
        DAT_1f800231 = DAT_1f800231 + -1;
      }
      Entity_ListInsert(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->input_flags = 0x40;
    Entity_InitConfig(param_1);
    param_1->parent = 0;
    param_1->state = param_1->state + '\x01';
    param_1->target_angle = param_1->rot_y;
    param_1->rot_y = 0;
    param_1->type_flags = 0;
    *(s16 *)(param_1 + 0x66) = 1;
    *(s16 *)(param_1 + 0x6e) = 0;
    *param_1 = 2;
    param_1->rot_x = 0x400;
    param_1->move_mode = 0;
    if (param_1->sub_type == '\0') {
      param_1->behavior_state = 1;
      Entity_DispatchBehavior(param_1);
    }
    else {
      Entity_SpawnTrail(param_1,(u8)param_1->kind - 1);
    }
  }
  param_1->flags = 1;
  if (param_1->behavior_state == '\0') {
    Entity_State_Damage(param_1);
  }
  else if (param_1->behavior_state == '\x01') {
    Entity_Behavior_Attack(param_1);
    if (*(s16 *)(param_1 + 0x66) == 0) {
      if (param_1->kind == '\x06') {
        GTE_LoadScaleCompose(param_1);
      }
      else {
        Entity_UpdateMatrix(param_1);
      }
    }
    Entity_SyncToParent(param_1);
  }
  return;
}
