/**
 * @brief Collision wrapper 1: calls Collision_Vector4 with entity[0x56] as angle
 * @note Original: func_8004951C at 0x8004951C
 */
// Entity_CollisionWrap1



#include "tomba.h"
void Entity_CollisionWrap1(int param_1,s16 param_2,s16 param_3)

{
  Collision_Vector4(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
