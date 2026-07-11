/**
 * @brief Advances an animation data pointer by 4 bytes (word step).
 *        Checks if u8 at offset 3 has bit 0x80 (terminator flag).
 *        If set, clears entity[0x40] and entity[0x3C].
 * @note Original: func_80031708 at 0x80031708
 */
// Entity_AdvanceAnimWord

#include "tomba.h"
void Entity_AdvanceAnimWord(int param_1)

{
  int iVar1;

  iVar1 = param_1->sprite_data;
  if (iVar1 != 0) {
    if ((iVar1->sub_type & 0x80) != 0) {
      *(s32 *)(param_1 + 0x40) = 0;
      param_1->sprite_data = 0;
      return;
    }
    *(int *)(param_1 + 0x40) = iVar1 + 4;
  }
  return;
}
