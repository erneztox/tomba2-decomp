/**
 * @brief Sets camera look-at target and rotation vectors from 6-s16 array
 * @note Original: func_8006CBD0 at 0x8006CBD0
 */
// Camera_SetTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006cbd0(int param_1,s16 *param_2)

{
  _DAT_1f8000d2 = *param_2;
  _DAT_1f8000d6 = param_2->flags;
  _DAT_1f8000da = param_2->kind;
  *(s16 *)(param_1 + 0x3a) = param_2->sub_type;
  *(s16 *)(param_1 + 0x3e) = param_2->state;
  param_1->timer2 = param_2->behavior_state;
  return;
}
