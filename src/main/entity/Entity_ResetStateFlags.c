/**
 * @brief Resets entity state flags: clears 0x29/0x58/0x6A/0x144-0x178, advances state
 * @note Original: func_8005749C at 0x8005749C
 */
// Entity_ResetStateFlags



#include "tomba.h"
void Entity_ResetStateFlags(int param_1)

{
  if (param_1->state_flag146 != '\0') {
    param_1->rot_z = 0;
  }
  *(u8 *)(param_1 + 0x178) = 0;
  param_1->input_state = 0;
  param_1->state_flag145 = 1;
  param_1->collision_state = 0;
  param_1->type_flags = 0;
  param_1->state_flag144 = 0;
  *(u8 *)(param_1 + 0x148) = 0;
  param_1->sub_action = param_1->sub_action + '\x01';
  return;
}
