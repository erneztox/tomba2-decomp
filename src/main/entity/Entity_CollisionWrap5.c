/**
 * @brief Collision wrapper 5: calls Collision_Push2 with entity[0x56] as angle
 * @note Original: func_800495DC at 0x800495DC
 */
// Entity_CollisionWrap5



#include "tomba.h"
void Entity_CollisionWrap5(int param_1,s16 param_2,s16 param_3)

{
  Collision_Push2(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
