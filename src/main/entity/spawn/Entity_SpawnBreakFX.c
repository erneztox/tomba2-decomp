/**
 * @brief Spawns break effect entity 0x1F at saved position, plays SFX 0x28
 * @note Original: func_8004B2E8 at 0x8004B2E8
 */
// Entity_SpawnBreakFX



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8004b2e8(void)

{
  s16 uVar1;
  s16 uVar2;
  int iVar3;
  
  iVar3 = FUN_800310f4(0x1f,0xffffff74);
  if (iVar3 != 0) {
    iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
    uVar2 = _g_PlayerPosZ;
    uVar1 = _g_PlayerPosY;
    iVar3->pos_x = _g_PlayerPosX;
    iVar3->pos_y = uVar1;
    *(s16 *)(iVar3 + 0x30) = uVar2;
  }
  FUN_80074590(0x28,0,0);
  return;
}
