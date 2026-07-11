/**
 * @brief Entity timer decrement: entity[0x84]--, updates _DAT_1f8000d0/d2
 * @note Original: func_8006CDCC at 0x8006CDCC
 */
// Entity_DecrementTimer2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_8006cdcc(int param_1)

{
  if (param_1->bounds_min_y != 0) {
    param_1->bounds_min_y = param_1->bounds_min_y + -1;
    _DAT_1f8000d0 = _DAT_1f8000d0 + *(s16 *)(param_1 + 0x78) * 0x200;
    _DAT_1f8000d4 = _DAT_1f8000d4 + *(s16 *)(param_1 + 0x7a) * 0x200;
    _DAT_1f8000d8 = _DAT_1f8000d8 + *(s16 *)(param_1 + 0x7c) * 0x200;
    param_1->anim_data = param_1->anim_data + *(s16 *)(param_1 + 0x7e) * 0x200;
    param_1->sprite_data = param_1->sprite_data + param_1->bounds_min_x * 0x200;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_1->bounds_size * 0x200;
    return 0;
  }
  return 1;
}
