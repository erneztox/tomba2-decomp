/**
 * @brief Circular motion: cos/sin on entity[0x44] angle, offset from entity[0x4E/0x50/0x52], advance angle 0x20
 * @note Original: func_80070E60 at 0x80070E60
 */
// Entity_MoveInCircle



#include "tomba.h"
void FUN_80070e60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_80083f50((int)param_1->anim_counter);
  iVar1 = iVar1 * 0x18;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  param_1->pos_y = param_1->sprite_x + (s16)(iVar1 >> 0xc);
  iVar1 = FUN_80083e80((int)param_1->anim_counter << 1);
  iVar1 = iVar1 * 0x18;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  *(s16 *)(param_1 + 0x32) = param_1->angle_offset + (s16)(iVar1 >> 0xc);
  param_1->pos_z = param_1->sprite_y;
  param_1->anim_counter = param_1->anim_counter + 0x20U & 0xfff;
  return;
}
