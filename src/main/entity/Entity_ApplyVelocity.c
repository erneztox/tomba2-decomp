/**
 * @brief Applies velocity vector (entity[0x44-0x4C]) to entity position
 * @note Original: func_80056B48 at 0x80056B48
 */
// Entity_ApplyVelocity



#include "tomba.h"
void Entity_ApplyVelocity(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)param_1->normal_x * (int)param_1->anim_counter;
  param_1->scale_y =
       param_1->scale_y + (int)param_1->normal_z * (int)param_1->anim_counter;
  if (param_2 == 0) {
    param_1->pos_y_fixed =
         param_1->pos_y_fixed +
         (int)param_1->velocity_y * (int)param_1->anim_counter;
  }
  if ((param_1->physics_flag == '\0') && (*(s8*)(param_1 + 0x61) == '\0')) {
    Entity_Behavior_Init2(param_1,0);
  }
  else {
    param_1->input_flags = param_1->input_flags & 0xfb;
  }
  return;
}
