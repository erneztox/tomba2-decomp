/**
 * @brief Entity attack behavior variant 2: entity->anim_id state, sets speed
 * @note Original: func_8006B124 at 0x8006B124
 */
// Entity_Behavior_Attack2



#include "tomba.h"
void Entity_Behavior_Attack2(int param_1,int param_2)

{
  s16 uVar1;
  u8 bVar2;
  
  bVar2 = param_1->anim_id >> 1 & 3;
  if (bVar2 == 2) {
    uVar1 = 0xe40;
  }
  else {
    if (bVar2 < 3) {
      param_1->type_flags = 0;
      goto LAB_8006b194;
    }
    uVar1 = 0xc20;
    if (bVar2 != 3) goto LAB_8006b194;
  }
  param_1->type_flags = uVar1;
LAB_8006b194:
  param_1->anim_id = param_1->anim_id & 7;
  Audio_PlaySoundEffect(0x22,0,0);
  Entity_SetAnimSpeed(param_1);
  Entity_InitTrail(param_1,0);
  if (param_2 == 0) {
    Entity_SpawnTrail(param_1,param_1->kind - 1);
  }
  param_1->timer2 = 2;
  param_1->rot_y = param_1->target_angle;
  return;
}
