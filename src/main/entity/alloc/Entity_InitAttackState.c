/**
 * @brief Initializes attack state: entity->anim_id dispatch, sets entity[0x6A], SFX 0x22, timer 0x6E
 * @note Original: func_8006923C at 0x8006923C
 */
// Entity_InitAttackState



#include "tomba.h"
void Entity_InitAttackState(int param_1)

{
  s16 uVar1;
  u8 bVar2;
  
  bVar2 = param_1->anim_id >> 1 & 3;
  if (bVar2 == 2) {
    uVar1 = 0xe80;
  }
  else {
    if (bVar2 < 3) {
      param_1->type_flags = 0;
      goto LAB_800692b0;
    }
    if (bVar2 != 3) goto LAB_800692b0;
    uVar1 = 0xc00;
  }
  param_1->type_flags = uVar1;
LAB_800692b0:
  param_1->timer1 = 1;
  param_1->anim_counter = 0x6e;
  param_1->anim_id = param_1->anim_id & 7;
  Audio_PlaySoundEffect(0x22,0,0);
  Entity_InitTrail(param_1,2);
  param_1->rot_y = param_1->target_angle;
  return;
}
