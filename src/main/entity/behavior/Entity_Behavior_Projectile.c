/**
 * @brief Entity projectile behavior: entity->state=1, reads parent, moves
 * @note Original: func_8002F738 at 0x8002F738
 */
// Entity_Behavior_Projectile



#include "tomba.h"
void FUN_8002f738(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  
  bVar2 = param_1->state;
  iVar4 = param_1->parent;
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          return;
        }
        FUN_8007a624(param_1);
        return;
      }
      if (param_1->behavior_state == '\0') {
        param_1->behavior_state = 1;
        param_1->sub_action = 0;
      }
      else if (param_1->behavior_state != '\x01') {
        return;
      }
      iVar4 = FUN_80049e54(param_1,1);
      if (iVar4 == 0) {
        return;
      }
      param_1->state = 3;
      return;
    }
    if (bVar2 != 0) {
      return;
    }
    param_1->state = 1;
    param_1->behavior_state = 0;
    param_1->action_state = 0x20;
    param_1->sub_action = 0;
    uVar3 = FUN_8009a450();
    *(ushort *)(param_1 + 0x32) = (uVar3 & 0x1ff) + 0x100;
    param_1->pos_x = iVar4->pos_y;
    param_1->pos_y = *(undefined2 *)(iVar4 + 0x32);
    *(undefined2 *)(param_1 + 0x30) = iVar4->pos_z;
  }
  if (param_1->behavior_state == '\0') {
    cVar1 = param_1->action_state + -1;
    param_1->action_state = cVar1;
    if (cVar1 == '\0') {
      param_1->behavior_state = param_1->behavior_state + '\x01';
      FUN_8002343c(iVar4);
    }
  }
  else if ((param_1->behavior_state == '\x01') &&
          (bVar2 = param_1->sub_action + 0xc, param_1->sub_action = bVar2, 0x9f < bVar2)) {
    param_1->state = 2;
    param_1->behavior_state = 0;
    param_1->sub_action = 0xa0;
  }
  param_1->flags = DAT_800e7e81;
  return;
}
