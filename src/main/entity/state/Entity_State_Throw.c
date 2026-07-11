/**
 * @brief Entity throw state: entity->action_state=0, spawns projectile
 * @note Original: func_80066DE8 at 0x80066DE8
 */
// Entity_State_Throw



#include "tomba.h"
void Entity_State_Throw(u8 *param_1)

{
  s16 uVar1;
  int iVar2;
  
  if (param_1->action_state == '\0') {
    param_1->timer_172 = 0x78;
    Audio_PlaySoundEffect(0x23,0,0);
    param_1->rot_z = 0;
    Entity_StateSwitch(param_1);
    param_1->state_flag146 = 0;
    param_1[0x61] = 0;
    iVar2 = Math_CompareAngle((int)param_1->draw_angle,(uint)(u8)param_1->move_mode << 4,0);
    uVar1 = 0xf000;
    if (iVar2 == 0) {
      param_1->direction = 1;
      uVar1 = 0x1000;
    }
    else {
      param_1->direction = 0;
    }
    param_1->anim_counter = uVar1;
    param_1->behavior_flags = param_1->direction + '\x02';
    param_1[0x149] = param_1->direction + '\x02';
    Entity_LoadAnimIfChanged(param_1,0x56,0);
    param_1->velocity_y = 0xe000;
    param_1->sub_action = 0;
    param_1->collision_state = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  Entity_AnimFrame(param_1);
  Entity_ApplyVelocity(param_1,1);
  Entity_PhysicsStep2(param_1);
  Entity_State_Combo(param_1,0x11);
  param_1->state_flag144 = 0;
  iVar2 = Entity_CheckFlag(param_1);
  if (iVar2 == 0) {
    if (param_1->collision_state == '\0') {
      if (0x2800 < param_1->velocity_y) {
        *param_1 = 3;
        param_1->timer_172 = 0x1e;
        param_1->state = 1;
        param_1->angle_offset = param_1->velocity_y;
        Entity_ResetActionState(param_1,0);
        param_1->velocity_y = param_1->angle_offset;
      }
    }
    else {
      *param_1 = 3;
      param_1->timer_172 = 0x1e;
      param_1->angle_offset = 0;
      param_1[0x148] = 0;
      param_1->state = 1;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      iVar2 = Entity_CheckEventTrigger();
      if (iVar2 == 0) {
        param_1->anim_counter = 0;
        Entity_LoadAnimIfChanged(param_1,2,0);
        param_1->behavior_state = 0;
      }
    }
    Entity_State_Physics(param_1);
  }
  return;
}
