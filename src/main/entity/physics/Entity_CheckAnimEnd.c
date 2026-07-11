/**
 * @brief Checks if animation ended: entity->anim_check < 1, calls FUN_80041718(0,2)
 * @note Original: func_80070830 at 0x80070830
 */
// Entity_CheckAnimEnd



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80070830(void)

{
  s32 bVar1;
  
  bVar1 = _g_PlayerEntity->anim_check < '\x01';
  if (bVar1) {
    FUN_80041718(_g_PlayerEntity,0,2);
  }
  return bVar1;
}
