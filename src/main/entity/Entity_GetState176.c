/**
 * @brief Returns entity->behavior_type + 1 as state value
 * @note Original: func_800535D4 at 0x800535D4
 */
// Entity_GetState176



#include "tomba.h"
int FUN_800535d4(int param_1)

{
  return param_1->behavior_type + 1;
}
