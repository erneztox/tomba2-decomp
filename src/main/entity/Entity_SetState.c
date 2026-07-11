/**
 * @brief Sets entity state: entity->action_state=0, entity->sub_type=param_1 from global entity ptr
 * @note Original: func_800708B4 at 0x800708B4
 */
// Entity_SetState



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_SetState(u8 param_1)

{
  int iVar1;
  
  iVar1 = _g_PlayerEntity;
  _g_PlayerEntity->action_state = 0;
  iVar1->sub_type = param_1;
  return;
}
