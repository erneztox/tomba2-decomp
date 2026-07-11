/**
 * @brief Collision wrapper 3: calls FUN_800468ac with entity[0x56] as angle
 * @note Original: func_8004957C at 0x8004957C
 */
// Entity_CollisionWrap3



#include "tomba.h"
void FUN_8004957c(int param_1,s16 param_2,s16 param_3)

{
  FUN_800468ac(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
