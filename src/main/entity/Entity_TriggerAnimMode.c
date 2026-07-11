/**
 * @brief Triggers animation mode: checks entity->anim_check, calls FUN_80041718(2,2), sets flag
 * @note Original: func_800707E0 at 0x800707E0
 */
// Entity_TriggerAnimMode



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800707e0(void)

{
  s32 bVar1;
  int iVar2;
  
  iVar2 = _g_PlayerEntity;
  bVar1 = _g_PlayerEntity->anim_check == '\0';
  if (bVar1) {
    FUN_80041718(_g_PlayerEntity,2,2);
    iVar2->anim_check = 1;
  }
  return bVar1;
}
