/**
 * @brief Spawns score popup with SFX + sets global flag at 0x800BF820
 * @note Original: func_8004B428 at 0x8004B428
 */
// Entity_SpawnScorePopupEx



#include "tomba.h"
undefined4 FUN_8004b428(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_800310f4(0x1f,0xffffff74);
  if (iVar1 != 0) {
    iVar1->alloc_flags = iVar1->alloc_flags | 0x80;
    iVar1->pos_x = param_1->pos_y;
    iVar1->pos_y = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x30) = param_1->pos_z;
  }
  FUN_80074590(0x28,0,0);
  DAT_800bf820 = 1;
  return 1;
}
