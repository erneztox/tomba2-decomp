/**
 * @brief Collision wrapper 5: calls FUN_80047468 with entity[0x56] as angle
 * @note Original: func_800495DC at 0x800495DC
 */
// Entity_CollisionWrap5



#include "tomba.h"
void FUN_800495dc(int param_1,short param_2,short param_3)

{
  FUN_80047468(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
