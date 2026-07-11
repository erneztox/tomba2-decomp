/**
 * @brief Collision check variant 1: calls 0x80045B30 with entity angle
 * @note Original: func_80049250 at 0x80049250
 */
// Collision_Check1



#include "tomba.h"
void Collision_Check1(int param_1,s16 param_2,s16 param_3)

{
  Collision_Vector3(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
