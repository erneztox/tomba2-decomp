/**
 * @brief Entity idle state: entity->action_state=0, checks ground, transitions
 * @note Original: func_80060064 at 0x80060064
 */
// Entity_State_Idle



#include "tomba.h"
void Entity_State_Idle(int param_1)

{
  s32 bVar1;
  int iVar2;
  
  if (param_1->action_state == '\0') {
    if (param_1->sub_action == '\0') {
      param_1->state_flag145 = 0;
      param_1->state_flag146 = 0;
      Entity_StateSwitch(param_1);
      param_1->rot_z = 0;
      Entity_PhysicsUpdate(param_1,1);
      Entity_PhysicsStep2(param_1);
      param_1->sub_action = param_1->sub_action + '\x01';
      Entity_LoadAnimIfChanged(param_1,0x16,3);
    }
    else if (param_1->sub_action == '\x01') {
      Entity_PhysicsUpdate(param_1,1);
      Entity_PhysicsStep2(param_1);
      iVar2 = Entity_AnimFrame(param_1);
      if (iVar2 == 1) {
        param_1->sub_action = 0;
        param_1->state_flag145 = 1;
        param_1->angle_offset = 0;
        param_1->action_state = param_1->action_state + '\x01';
        Audio_PlaySoundEffect(0xf,0,0);
        Audio_PlaySoundEffect(0x25,0,0);
        Entity_LoadAnimIfChanged(param_1,0x12,4);
        Entity_Behavior_SpawnAtOffset(param_1,param_1 + 0x2c,0);
        Entity_SetAccel(param_1,0);
        iVar2 = Game_CheckFlagSys();
        if (iVar2 == 0) {
          param_1->velocity_y = 0xd800;
        }
        else {
          if (param_1->state_165 != '\0') {
            param_1->velocity_y = param_1->velocity_y + -0x580;
          }
          param_1->velocity_y =
               param_1->velocity_y + (param_1->velocity_y >> 2);
        }
      }
    }
  }
  else if (param_1->action_state == '\x01') {
    Entity_PhysicsUpdate(param_1,1);
    Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
    Entity_ApplyVelocity(param_1,1);
    Entity_PhysicsStep2(param_1);
    Entity_AnimFrame(param_1);
    bVar1 = param_1->state_flag145 != '\x02';
    if (bVar1) {
      Entity_State_Combo(param_1,0x11);
    }
    else {
      Entity_State_Combo(param_1,0);
    }
    Entity_State_Ground(param_1,bVar1);
  }
  Entity_State_Physics(param_1);
  return;
}
