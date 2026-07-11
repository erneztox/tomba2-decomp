/**
 * @brief Loads 3D scale matrix (x,y,z shorts) in GTE format
 * @note Original address: 0x800517BC
 */
// GTE_LoadScaleMatrix

#include "tomba.h"
void GTE_LoadScaleMatrix(int *param_1,s16 param_2,s16 param_3,s16 param_4)

{
  *param_1 = (int)param_2;
  param_1->flags = 0;
  param_1->kind = (int)param_3;
  param_1->sub_type = 0;
  param_1->state = (int)param_4;
  param_1->behavior_state = 0;
  param_1->action_state = 0;
  param_1->sub_action = 0;
  return;
}

