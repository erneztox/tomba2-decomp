/**
 * @brief Sets sprite data pointer at entity[0x7C] and texture at entity[0x3C]
 * @note Original: func_800416A8 at 0x800416A8
 */
// Entity_SetSpriteData



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_SetSpriteData(int param_1,s16 param_2,s32 param_3)

{
  s32 uVar1;
  
  uVar1 = _DAT_800ecf68;
  if (param_2 < 0) {
    *(void ***)(param_1 + 0x7c) = &PTR_DAT_80017fe8;
  }
  else {
    uVar1 = *(s32 *)(&g_OT_Data + param_2 * 4);
    *(s32 *)(param_1 + 0x7c) = param_3;
  }
  param_1->sprite_data = uVar1;
  return 1;
}
