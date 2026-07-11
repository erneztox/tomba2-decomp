/**
 * @brief Entity anim segment variant 2: entity->action_state=1 state, advances angle
 * @note Original: func_800721DC at 0x800721DC
 */
// Entity_AnimSegment2



#include "tomba.h"
void FUN_800721dc(int param_1,undefined2 param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    uVar2 = param_1->target_rot_y + 0x100U & 0xfff;
    param_1->target_rot_y = uVar2;
    if (uVar2 == 0) {
      param_1->action_state = param_1->action_state + '\x01';
    }
    iVar3 = FUN_80083e80((int)param_1->target_rot_y);
    param_1->pos_y = param_2;
    iVar3 = iVar3 * param_1->bounds_size * 8;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      param_1->pos_y = param_2;
      *(short *)(param_1 + 0x32) = (short)param_3;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    uVar2 = param_1->target_rot_y + 0x100U & 0xfff;
    param_1->target_rot_y = uVar2;
    if (uVar2 == 0) {
      param_1->action_state = param_1->action_state + '\x01';
    }
    iVar3 = FUN_80083e80((int)param_1->target_rot_y);
    param_1->pos_y = param_2;
    iVar3 = iVar3 * param_1->bounds_size * 0x10;
  }
  param_1->pos_y_fixed = param_3 * 0x10000 + iVar3;
  return;
}
