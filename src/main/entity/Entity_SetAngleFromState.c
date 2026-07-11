/**
 * @brief Sets entity rotation angle: entity[0x56] = entity->collision_dir << 4
 * @note Original: func_8003FC78 at 0x8003FC78
 */
// Entity_SetAngleFromState



#include "tomba.h"
void Entity_SetAngleFromState(int param_1)

{
  param_1->rot_z = 0;
  param_1->rot_y = (u16)param_1->collision_dir << 4;
  return;
}
