/**
 * @brief Calculates rotation angle from entity toward target entity
 * @note Original: func_8004130C at 0x8004130C
 */
// Entity_CalcAngleToward



#include "tomba.h"
undefined4 FUN_8004130c(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_1->gte_flags == '\0') {
    param_1->rot_y = param_1->draw_x;
    if (param_2 == 0) {
      return 1;
    }
    uVar1 = param_1->angle_delta >> 1;
  }
  else {
    param_1->rot_y = param_1->draw_x - 0x800U & 0xfff;
    if (param_2 == 0) {
      return 1;
    }
    uVar1 = 0x1000U - (param_1->angle_delta >> 1) & 0xfff;
  }
  param_1->rot_z = uVar1;
  return 1;
}
