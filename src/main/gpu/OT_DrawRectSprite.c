/**
 * @brief Draws a rectangle/sprite in the Ordering Table
 * @note Original address: 0x80081CF8
 */
// OT_DrawRectSprite

#include "tomba.h"
void OT_DrawRectSprite(int param_1,u16 *param_2)

{
  s32 uVar1;
  
  param_1->sub_type = 2;
  uVar1 = FUN_80082240((int)(s16)*param_2,(int)(s16)param_2->flags);
  *(s32 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_800822d8((int)(((uint)*param_2 + (uint)param_2->kind + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2->flags + (uint)param_2->sub_type + -1) * 0x10000) >> 0x10);
  *(s32 *)(param_1 + 8) = uVar1;
  return;
}

