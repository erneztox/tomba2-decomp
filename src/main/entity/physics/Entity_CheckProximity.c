/**
 * @brief Checks if entity is within 0x1CC distance of another entity on all axes
 * @note Original: func_80069B6C at 0x80069B6C
 */
// Entity_CheckProximity



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
bool FUN_80069b6c(int param_1)

{
  if (0x1cc < (ushort)((*(short *)(_DAT_800e7f5c + 0x34) - param_1->pos_z) + 0xe6U)) {
    return false;
  }
  if ((ushort)((_DAT_800e7f5c->pos_x - param_1->pos_y) + 0xe6U) < 0x1cd) {
    return (ushort)((*(short *)(_DAT_800e7f5c + 0x30) - *(short *)(param_1 + 0x32)) + 0xe6U) < 0x1cd
    ;
  }
  return false;
}
