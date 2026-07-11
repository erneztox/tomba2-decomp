/**
 * @brief Entity combat state: entity->action_state=0, entity->behavior_state=3
 * @note Original: func_80070798 at 0x80070798
 */
// Entity_SetStateCombat



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80070798(void)

{
  int iVar1;
  
  iVar1 = _g_PlayerEntity;
  _g_PlayerEntity->action_state = 0;
  iVar1->behavior_state = 3;
  return;
}
