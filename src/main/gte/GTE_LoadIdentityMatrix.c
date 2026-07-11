/**
 * @brief Loads 4x4 identity matrix in GTE fixed-point format (0x1000 = 1.0)
 * @note Original address: 0x80051794
 */

#include "tomba.h"
void GTE_LoadIdentityMatrix(s32 *param_1)

{
  *param_1 = 0x1000;
  param_1->flags = 0;
  param_1->kind = 0x1000;
  param_1->sub_type = 0;
  param_1->state = 0x1000;
  param_1->behavior_state = 0;
  param_1->action_state = 0;
  param_1->sub_action = 0;
  return;
}

