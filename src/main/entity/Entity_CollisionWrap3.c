/**
 * @brief Collision wrapper 3: calls Collision_Move3 with entity[0x56] as angle
 * @note Original: func_8004957C at 0x8004957C
 */
// Entity_CollisionWrap3



#include "tomba.h"
void Entity_CollisionWrap3(int param_1,s16 param_2,s16 param_3)

{
  Collision_Move3(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
