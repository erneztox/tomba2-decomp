/**
 * @brief Sets combat flags: entity->combat_flag + 3 globals at 0x800BF830/31/43
 * @note Original: func_80070724 at 0x80070724
 */
// Entity_SetCombatFlags



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_SetCombatFlags(u8 param_1,u8 param_2,u8 param_3)

{
  _g_PlayerEntity->combat_flag = param_1;
  DAT_800bf830 = param_2;
  DAT_800bf831 = param_3;
  g_EventFlag = 0;
  return;
}
