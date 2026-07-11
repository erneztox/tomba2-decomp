/**
 * @brief Copies parent entity position (0x2C-0x36) to this entity from 0x800E7F5C
 * @note Original: func_80069AE4 at 0x80069AE4
 */
// Entity_CopyParentPos



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_CopyParentPos(int param_1)

{
  param_1->pos_y = _DAT_800e7f5c->pos_x;
  *(s16 *)(param_1 + 0x32) = *(s16 *)(_DAT_800e7f5c + 0x30);
  param_1->pos_z = *(s16 *)(_DAT_800e7f5c + 0x34);
  return;
}
