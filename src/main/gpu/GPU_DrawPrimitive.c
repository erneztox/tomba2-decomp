/**
 * @brief GPU draw primitive: reads type from struct+3, dispatches via function ptr table
 * @note Original: func_80081504 at 0x80081504
 */
// GPU_DrawPrimitive



#include "tomba.h"
void GPU_DrawPrimitive(int param_1)

{
  u8 uVar1;
  
  uVar1 = param_1->sub_type;
  (*PTR_PTR_800a5998->sprite_data)(0);
  (*PTR_PTR_800a5998->script_ptr)(param_1 + 4,uVar1);
  return;
}
