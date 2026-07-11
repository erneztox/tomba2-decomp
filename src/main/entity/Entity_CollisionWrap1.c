/**
 * @brief Collision wrapper 1: calls FUN_80045b30 with entity[0x56] as angle
 * @note Original: func_8004951C at 0x8004951C
 */
// Entity_CollisionWrap1



#include "tomba.h"
void FUN_8004951c(int param_1,s16 param_2,s16 param_3)

{
  FUN_80045b30(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
