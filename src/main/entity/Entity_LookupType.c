/**
 * @brief Entity type lookup: switch on entity->kind returns sprite/animation mode
 * @note Original: func_8005B5E4 at 0x8005B5E4
 */
// Entity_LookupType



#include "tomba.h"
s32 Entity_LookupType(int param_1)

{
  switch(param_1->kind) {
  case 0:
  case 0x10:
  case 0x19:
  case 0x1b:
  case 0x5f:
    return 2;
  case 1:
  case 8:
  case 0x13:
  case 0x33:
    return 1;
  default:
    return 0;
  case 0x40:
    return 4;
  case 0x41:
    return 3;
  }
}
