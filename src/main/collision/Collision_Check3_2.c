/**
 * @brief Collision check variant 3: calls 0x800468AC with entity angle
 * @note Original: func_800493E8 at 0x800493E8
 */
// Collision_Check3



#include "tomba.h"
void FUN_800493e8(int param_1,s16 param_2,s16 param_3)

{
  FUN_80049418(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
