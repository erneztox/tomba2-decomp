/**
 * @brief Resets entity action state: clears flags 0x146/0x167/0x16A/0x178/0x181
 * @note Original: func_80056D44 at 0x80056D44
 */
// Entity_ResetActionState



#include "tomba.h"
void FUN_80056d44(int param_1,int param_2)

{
  *(u8 *)(param_1 + 0x181) = 0;
  *(s16 *)(param_1 + 0x182) = 0;
  param_1->flag_16A = 0;
  FUN_80053d90();
  *(u8 *)(param_1 + 0x178) = 0;
  if ((param_1->state_flag146 & 3) == 0) {
    if (param_2 == 0) {
      param_1->rot_z = 0;
      FUN_80054d14(param_1,0x14,0);
    }
    param_1->input_state = 0x10;
    param_1->state_flag146 = 0;
    param_1->state_flag145 = 1;
    param_1->collision_state = 0;
    param_1->state_flag144 = 0;
    *(u8 *)(param_1 + 0x148) = 0;
    param_1->velocity_y = 0;
    param_1->behavior_state = 2;
    param_1->action_state = 1;
  }
  else {
    param_1->rot_z = 0;
    param_1->state_flag145 = 1;
    param_1->collision_state = 0;
    *(u8 *)(param_1 + 0x148) = 0;
    param_1->velocity_y = 0;
    param_1->behavior_state = 6;
  }
  param_1->sub_action = 1;
  return;
}
