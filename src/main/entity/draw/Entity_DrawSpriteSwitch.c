/**
 * @brief Entity sprite draw switch: switch on entity->sub_type type, sets entity[0x40]=1
 * @note Original: func_8007D0D0 at 0x8007D0D0
 */
// Entity_DrawSpriteSwitch



#include "tomba.h"
void FUN_8007d0d0(int param_1)

{
  switch(param_1->sub_type) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    param_1->timer1 = 1;
  default:
    return;
  }
  if (DAT_800bf8a3 == '\0') {
    param_1->timer1 = 3;
    return;
  }
  if (DAT_800bf8a3 == '\x01') {
    param_1->timer1 = 2;
    return;
  }
  param_1->timer1 = 1;
  return;
}
