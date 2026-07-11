/**
 * @brief Sets entity[0x4A] acceleration from table 0x800A457C based on entity->sprite_param1
 * @note Original: func_80055F48 at 0x80055F48
 */
// Entity_SetAccel



#include "tomba.h"
void FUN_80055f48(int param_1,int param_2)

{
  if ((param_1->game_flags & 0x30) == 0) {
    param_1->velocity_y =
         *(s16 *)(&DAT_800a457c + (uint)param_1->sprite_param1 * 2);
  }
  else {
    param_1->velocity_y = DAT_800a4582;
  }
  if ((param_2 != 0) && ((param_1->entity_flags & 0x180) != 0)) {
    param_1->velocity_y = param_1->velocity_y + 0x1940;
  }
  return;
}
