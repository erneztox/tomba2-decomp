/**
 * @brief Collision wrapper 2: calls FUN_80045cac with entity[0x56] as angle
 * @note Original: func_8004954C at 0x8004954C
 */
// Entity_CollisionWrap2



#include "tomba.h"
void FUN_8004954c(int param_1,s16 param_2,s16 param_3)

{
  FUN_80045cac(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
