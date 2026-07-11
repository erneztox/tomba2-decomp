/**
 * @brief Collision wrapper 4: calls Collision_CheckEnv with entity[0x56] as angle
 * @note Original: func_800495AC at 0x800495AC
 */
// Entity_CollisionWrap4



#include "tomba.h"
void Entity_CollisionWrap4(int param_1,s16 param_2,s16 param_3)

{
  Collision_CheckEnv(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
