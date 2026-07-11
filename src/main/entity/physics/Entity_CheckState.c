/**
 * @brief Entity state checker: switch on entity->sprite_cmd type, returns state
 * @note Original: func_800535E0 at 0x800535E0
 */
// Entity_CheckState



#include "tomba.h"
s32 FUN_800535e0(int param_1,int param_2)

{
  if (DAT_800f2410 == '\0') {
    return false;
  }
  switch(param_1->sprite_cmd) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
    return true;
  case 3:
  case 4:
    return DAT_1f800231 == 0;
  case 5:
    return DAT_1f800231 < 2;
  case 9:
    break;
  default:
    return false;
  }
  if (param_2 != 0) {
    return false;
  }
  return DAT_1f800251 == '\0';
}
