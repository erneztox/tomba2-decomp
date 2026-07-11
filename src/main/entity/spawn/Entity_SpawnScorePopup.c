/**
 * @brief Spawns score popup entity at current position with SFX 0x28
 * @note Original: func_8004B0D8 at 0x8004B0D8
 */
// Entity_SpawnScorePopup



#include "tomba.h"
void FUN_8004b0d8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_800310f4(0x1f,0xffffff74);
  if (iVar1 != 0) {
    iVar1->alloc_flags = iVar1->alloc_flags | 0x80;
    iVar1->pos_x = param_1->pos_y;
    iVar1->pos_y = *(s16 *)(param_1 + 0x32);
    *(s16 *)(iVar1 + 0x30) = param_1->pos_z;
  }
  FUN_80074590(0x28,0,0);
  return;
}
