/**
 * @brief Entity behavior setter variant 3: entity->state=0/1 state
 * @note Original: func_80068FBC at 0x80068FBC
 */
// Entity_BehaviorSet3



#include "tomba.h"
void Entity_BehaviorSet3(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      Entity_BehaviorSet2(param_1);
      return;
    }
    if (bVar1 == 2) {
      Entity_Behavior_Move2(param_1);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    Entity_ListInsert(param_1);
    return;
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    *param_1 = 1;
    param_1->move_mode = 0;
    param_1->behavior_state = param_1->behavior_state + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->flags = 1;
      if ((param_1->sub_type & 0x80) != 0) {
        Entity_UpdateMatrix(param_1);
        return;
      }
      GTE_ComposeAndProject(param_1);
      return;
    }
    if (bVar1 != 2) {
      return;
    }
  }
  Entity_Behavior_Move(param_1);
  if ((param_1->sub_type & 0x80) == 0) {
    GTE_ComposeAndProject(param_1);
  }
  else {
    Entity_UpdateMatrix(param_1);
  }
  iVar3 = GTE_ProjectSprite9(param_1,0,0,0);
  if ((iVar3 == 0) &&
     (sVar2 = param_1->timer2, param_1->timer2 = sVar2 + -1, sVar2 == 1)) {
    param_1->state = STATE_DEAD;
    param_1->move_mode = 2;
    *param_1 = 2;
  }
  return;
}
