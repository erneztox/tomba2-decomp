/**
 * @brief Entity projectile behavior: entity->state=1, reads parent, moves
 * @note Original: func_8002F738 at 0x8002F738
 */
// Entity_Behavior_Projectile



#include "tomba.h"
void Entity_Behavior_Projectile(int param_1)

{
  s8 cVar1;
  u8 bVar2;
  u16 uVar3;
  int iVar4;
  
  bVar2 = param_1->state;
  iVar4 = param_1->parent;
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          return;
        }
        Entity_Dealloc(param_1);
        return;
      }
      if (param_1->behavior_state == '\0') {
        param_1->behavior_state = 1;
        param_1->sub_action = 0;
      }
      else if (param_1->behavior_state != '\x01') {
        return;
      }
      iVar4 = UI_ElementUpdate(param_1,1);
      if (iVar4 == 0) {
        return;
      }
      param_1->state = STATE_DEAD;
      return;
    }
    if (bVar2 != 0) {
      return;
    }
    param_1->state = 1;
    param_1->behavior_state = 0;
    param_1->action_state = 0x20;
    param_1->sub_action = 0;
    uVar3 = Math_Random();
    *(u16 *)(param_1 + 0x32) = (uVar3 & 0x1ff) + 0x100;
    param_1->pos_x = iVar4->pos_y;
    param_1->pos_y = *(s16 *)(iVar4 + 0x32);
    *(s16 *)(param_1 + 0x30) = iVar4->pos_z;
  }
  if (param_1->behavior_state == '\0') {
    cVar1 = param_1->action_state + -1;
    param_1->action_state = cVar1;
    if (cVar1 == '\0') {
      param_1->behavior_state = param_1->behavior_state + '\x01';
      Entity_InitSpriteType2(iVar4);
    }
  }
  else if ((param_1->behavior_state == '\x01') &&
          (bVar2 = param_1->sub_action + 0xc, param_1->sub_action = bVar2, 0x9f < bVar2)) {
    param_1->state = STATE_FINISH;
    param_1->behavior_state = 0;
    param_1->sub_action = 0xa0;
  }
  param_1->flags = DAT_800e7e81;
  return;
}
