/**
 * @brief Entity damage state: entity->action_state=0->1, sets timer, applies knockback
 * @note Original: func_8006B9DC at 0x8006B9DC
 */
// Entity_State_Damage



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Damage(int param_1)

{
  u8 uVar1;
  s16 uVar2;
  s16 sVar3;
  
  if (param_1->action_state == '\0') {
    param_1->action_state = 1;
    param_1->timer1 = 1;
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  sVar3 = param_1->timer1;
  param_1->timer1 = sVar3 + -1;
  if (sVar3 == 1) {
    if (DAT_800e7f3e == '\0') {
      Audio_PlaySoundEffect(9,0,0);
      uVar2 = 0x12;
    }
    else {
      Audio_PlaySoundEffect(10,0,0);
      uVar2 = 10;
    }
    param_1->timer1 = uVar2;
  }
  if ((DAT_800e7f3e != '\0') && (param_1->flag_5E == '\0')) {
    param_1->flag_5E = 1;
    Entity_SpawnChild27(param_1);
  }
  if ((DAT_800e7fc4 == '\x02') || (DAT_800e7fc6 == '\0')) {
    param_1->behavior_state = 0;
    param_1->state = param_1->state + '\x01';
  }
  else if (DAT_800e7fc6 == '\x03') {
    param_1->anim_id = DAT_800e7fca;
    sVar3 = _g_EntityAngle;
    if (g_CollisionType == '\t') {
      sVar3 = _g_EntityAngle + -0x800;
    }
    param_1->target_angle = sVar3;
    uVar1 = DAT_800e7eaa;
    param_1->behavior_state = 1;
    param_1->collision_dir = uVar1;
    Entity_Behavior_Attack2(param_1);
    Entity_DispatchBehavior(param_1);
    param_1->action_state = 1;
  }
  Entity_InitTrail(param_1,0);
  return;
}
