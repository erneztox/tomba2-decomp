/**
 * @brief Entity animation advance: decrements entity[0x44] counter, branches on threshold
 * @note Original: func_80052694 at 0x80052694
 */
// Entity_AdvanceAnim



#include "tomba.h"
void FUN_80052694(int param_1)

{
  short sVar1;
  
  sVar1 = param_1->anim_counter + -0x40;
  param_1->anim_counter = sVar1;
  if (sVar1 < 0xa00) {
    param_1->anim_counter = 0xa00;
  }
  sVar1 = param_1->velocity_y + 0xa0;
  param_1->velocity_y = sVar1;
  if (0x1000 < sVar1) {
    param_1->velocity_y = 0x1000;
  }
  param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  if (*(short *)(param_1 + 0x66) < *(short *)(param_1 + 0x32)) {
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x66);
  }
  return;
}
