/**
 * @brief Toggles blink/flash bits on entity->sprite_flags based on frame counter for transparency effect
 * @note Original: func_8004B374 at 0x8004B374
 */
// Entity_BlinkControl



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8004b374(int param_1,int param_2)

{
  if (param_2 != 0) {
    if ((_g_FrameCounter2 & 0x1f) == 0) {
      param_1->sprite_flags = param_1->sprite_flags | 2;
      return;
    }
    param_1->sprite_flags = param_1->sprite_flags & 0xfd;
    return;
  }
  if ((_g_FrameCounter2 & 0x1f) == 0) {
    param_1->sprite_flags = param_1->sprite_flags | 0x20;
    return;
  }
  param_1->sprite_flags = param_1->sprite_flags & 0xdf;
  return;
}
