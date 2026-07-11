/**
 * @brief Sets entity animation speed from table 0x800A4A6C by type and state
 * @note Original: func_80069634 at 0x80069634
 */
// Entity_SetAnimSpeed



#include "tomba.h"
void Entity_SetAnimSpeed(int param_1)

{
  param_1->anim_counter =
       *(s16 *)
        (&DAT_800a4a6c + (uint)param_1->flag_5E * 2 + (param_1->kind - 1) * 4);
  if (param_1->flag_5E != '\0') {
    param_1->timer1 = 2;
    return;
  }
  param_1->timer1 = 1;
  return;
}
