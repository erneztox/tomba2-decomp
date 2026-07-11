/**
 * @brief Checks if entity->behavior_state != 3, if so sets entity->behavior_state = 10 and returns 1
 * @note Original: func_80041FCC at 0x80041FCC
 */
// Entity_CheckStateAndSet



#include "tomba.h"
undefined4 FUN_80041fcc(int param_1)

{
  if (param_1 != 0) {
    if (param_1->behavior_state != '\x03') {
      return 0;
    }
    param_1->behavior_state = 10;
  }
  return 1;
}
