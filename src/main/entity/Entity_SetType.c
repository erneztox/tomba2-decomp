/**
 * @brief Sets entity type u8 at entity->sub_type to given value
 * @note Original: func_8004CC64 at 0x8004CC64
 */
// Entity_SetType



#include "tomba.h"
void Entity_SetType(s32 param_1,u8 param_2)

{
  Entity_ItemPickup(param_1,param_2,1);
  return;
}
