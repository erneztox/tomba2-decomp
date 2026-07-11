/**
 * @brief Entity collide state: entity->sub_action=1/2/3, handles collision
 * @note Original: func_8006A240 at 0x8006A240
 */
// Entity_State_Collide



#include "tomba.h"
void FUN_8006a240(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  
  bVar1 = param_1->sub_action;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        if (param_1->kind == '\x01') {
          uVar4 = param_1->anim_counter;
          param_1->anim_counter = (short)((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x76));
          if ((int)(((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x76)) * 0x10000) < 0)
          goto LAB_8006a368;
        }
        else {
          uVar4 = param_1->anim_counter;
          param_1->anim_counter = (short)((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x76));
          if ((int)(((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x76)) * 0x10000) >> 0x10 < 0x46)
          goto LAB_8006a368;
        }
        if (param_1->move_mode == '\0') {
          return;
        }
LAB_8006a368:
        param_1->anim_counter = 0;
        *param_1 = 2;
        param_1->action_state = param_1->action_state + '\x01';
        return;
      }
      if (param_1->move_mode == '\0') {
        sVar3 = param_1->timer1;
        param_1->timer1 = sVar3 + -1;
        if (sVar3 != 1) {
          return;
        }
        cVar2 = param_1->sub_action;
        goto LAB_8006a2b8;
      }
      goto LAB_8006a2a0;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->sub_action = 1;
    *(undefined2 *)(param_1 + 0x66) = 3;
  }
  if (param_1->move_mode == '\0') {
    cVar2 = param_1->sub_action;
    param_1->timer1 = 1;
LAB_8006a2b8:
    param_1->sub_action = cVar2 + '\x01';
    return;
  }
LAB_8006a2a0:
  param_1->action_state = 8;
  param_1->anim_counter = 0;
  return;
}
