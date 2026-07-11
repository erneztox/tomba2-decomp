/**
 * @brief Multi-segment chain animation: per-segment angles at entity[param*2+0x60], radius entity[0x82]
 * @note Original: func_80071CF4 at 0x80071CF4
 */
// Entity_AnimChain



#include "tomba.h"
void FUN_80071cf4(int param_1,s16 param_2,int param_3,int param_4)

{
  u16 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + (param_4 + 7) * 2;
  if (iVar3->draw_x == 0) {
    if ((param_4 <= param_1->timer2) &&
       (iVar2 = param_1 + param_4 * 2, uVar1 = iVar2->draw_x + 0x100U & 0xfff,
       iVar2->draw_x = uVar1, uVar1 == 0)) {
      iVar3->draw_x = iVar3->draw_x + 1;
    }
    param_1->pos_y = param_2 + param_1->bounds_size * (s16)param_4;
    iVar3 = FUN_80083e80((int)*(s16 *)(param_1 + param_4 * 2 + 0x60));
    param_1->pos_y_fixed = param_3 * 0x10000 + iVar3 * param_1->bounds_size * 0x10;
  }
  else if (iVar3->draw_x == 1) {
    *(s16 *)(param_1 + 0x32) = (s16)param_3;
    param_1->pos_y = param_2 + param_1->bounds_size * (s16)param_4;
  }
  return;
}
