/**
 * @brief Collision check variant 2: calls 0x80045CAC with entity angle
 * @note Original: func_80049280 at 0x80049280
 */
// Collision_Check2



#include "tomba.h"
void FUN_80049280(int param_1,s16 param_2,s16 param_3)

{
  FUN_800492b0(param_1,(int)param_2,(int)param_3,(int)param_1->rot_y);
  return;
}
