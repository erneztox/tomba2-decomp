/**
 * @brief Auto-configures sprite data from entity[0x72]/[0x74] params
 * @note Original: func_800416F0 at 0x800416F0
 */
// Entity_SetSpriteDataAuto



#include "tomba.h"
void Entity_SetSpriteDataAuto(int param_1)

{
  Entity_SetSpriteData(param_1,(int)param_1->event_id,*(s32 *)(param_1 + 0x74));
  return;
}
