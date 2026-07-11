/**
 * @brief Updates entity[0x56] angle: conditional wraparound based on entity->direction flag
 * @note Original: func_80055284 at 0x80055284
 */
// Entity_UpdateAngle



#include "tomba.h"
void FUN_80055284(int param_1)

{
  if (param_1->direction != '\0') {
    param_1->rot_y = param_1->draw_angle - 0x800U & 0xfff;
    return;
  }
  param_1->rot_y = param_1->draw_angle;
  return;
}
