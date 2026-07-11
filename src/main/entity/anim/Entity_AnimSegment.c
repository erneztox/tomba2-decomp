/**
 * @brief Single segment animation: entity->action_state state machine, angle advance 0x100, radius from entity[0x82]
 * @note Original: func_80071C48 at 0x80071C48
 */
// Entity_AnimSegment



#include "tomba.h"
void FUN_80071c48(int param_1,s16 param_2,int param_3)

{
  u16 uVar1;
  int iVar2;
  
  if (param_1->action_state == '\0') {
    uVar1 = param_1->draw_x + 0x100U & 0xfff;
    param_1->draw_x = uVar1;
    if (uVar1 == 0) {
      param_1->action_state = param_1->action_state + '\x01';
    }
    param_1->pos_y = param_2;
    iVar2 = FUN_80083e80((int)param_1->draw_x);
    param_1->pos_y_fixed = param_3 * 0x10000 + iVar2 * param_1->bounds_size * 0x10;
  }
  else if (param_1->action_state == '\x01') {
    param_1->pos_y = param_2;
    *(s16 *)(param_1 + 0x32) = (s16)param_3;
  }
  return;
}
