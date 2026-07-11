/**
 * @brief Advances an animation data pointer by 1 u8.
 *        Checks if first u8 has bit 0x80 (terminator flag).
 *        If set, clears entity[0x40] and entity[0x3C].
 * @note Original: func_80031744 at 0x80031744
 */
// Entity_AdvanceAnimByte

#include "tomba.h"
void Entity_AdvanceAnimByte(int param_1)

{
  u8 *pbVar1;

  pbVar1 = *(u8 **)(param_1 + 0x3c);
  if (pbVar1 != (u8 *)0x0) {
    if ((*pbVar1 & 0x80) != 0) {
      *(s32 *)(param_1 + 0x40) = 0;
      param_1->sprite_data = 0;
      return;
    }
    *(u8 **)(param_1 + 0x40) = pbVar1 + 1;
  }
  return;
}
