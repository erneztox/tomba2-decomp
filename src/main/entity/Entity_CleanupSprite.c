/**
 * @brief Cleans up entity sprite data when returning to pool
 * @note Original address: 0x8007ADDC
 */
// Entity_CleanupSprite

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_CleanupSprite(int param_1)

{
  s32 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)param_1->counter2;
  if (uVar2 != 0) {
    iVar3 = uVar2 * 4 + param_1;
    do {
      uVar2 = uVar2 - 1;
      _g_EntityPoolCount = _g_EntityPoolCount + 1;
      puVar1 = (s32 *)(_DAT_800e7e74 + -4);
      _DAT_800e7e74 = _DAT_800e7e74 + -4;
      *puVar1 = *(s32 *)(iVar3 + 0xbc);
      iVar3 = iVar3 + -4;
    } while (uVar2 != 0);
  }
  param_1->counter2 = 0;
  return;
}

