/**
 * @brief Entity giant state: large entity state machine
 * @note Original: func_80061C64 at 0x80061C64
 */
// Entity_State_Giant



#include "tomba.h"
void Entity_State_Giant(int param_1)

{
  u8 bVar1;
  u16 uVar2;
  s16 sVar3;
  int iVar4;
  int local_20;
  s32 local_1c;
  int local_18;
  
  Entity_AnimFrame();
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    Entity_PhysicsUpdate(param_1,1);
    Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
    Entity_ApplyVelocity(param_1,1);
    Entity_PhysicsStep2(param_1);
    Entity_State_Combo(param_1,0);
    iVar4 = Entity_State_Hit(param_1);
    if (iVar4 != 0) goto LAB_800620b0;
    if (DAT_800bf848 == '\0') {
      if (param_1->collision_state != '\0') {
        param_1->sub_action = 0;
        iVar4 = Entity_StateDispatch3(param_1);
        if (iVar4 == 0) {
          param_1->angle_offset = 0;
          *(u8 *)(param_1 + 0x148) = 0;
          param_1->collision_state = 0;
          param_1->rot_z = 0;
          param_1->state_flag145 = 1;
          param_1->velocity_y = 0xe400;
          param_1->action_state = param_1->action_state + '\x01';
          Entity_LoadAnimIfChanged(param_1,0xe6,2);
        }
        else {
          param_1->state_flag145 = 0;
        }
      }
      goto LAB_800620b0;
    }
    param_1->collision_state = 0;
    param_1->behavior_state = 2;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        Entity_PhysicsUpdate(param_1,1);
        Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
        Entity_ApplyVelocity(param_1,1);
        Entity_PhysicsStep2(param_1);
        Entity_State_Combo(param_1,0);
        iVar4 = Entity_State_Hit(param_1);
        if (iVar4 == 0) {
          iVar4 = Entity_CheckCollisionFlags(param_1,0);
          if (iVar4 == 0) {
            if (param_1->state_flag145 == '\x02') {
              Entity_LoadAnimIfChanged(param_1,0xe5,4);
              param_1->action_state = param_1->action_state + '\x01';
            }
          }
          else {
            param_1->behavior_state = 6;
            param_1->action_state = 0;
          }
        }
      }
      goto LAB_800620b0;
    }
    if (bVar1 == 2) {
      Entity_PhysicsUpdate(param_1,1);
      Entity_BehaviorDispatcher(param_1,param_1->behavior_flags | 2);
      Entity_ApplyVelocity(param_1,1);
      Entity_PhysicsStep2(param_1);
      uVar2 = param_1->velocity_y + 0x500;
      param_1->velocity_y = uVar2;
      if (0 < (int)((uint)uVar2 << 0x10)) {
        param_1->state_flag145 = 2;
        param_1->state_flag144 = 1;
        param_1->action_state = param_1->action_state + '\x01';
      }
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
      Entity_SubState(param_1,1);
      Entity_PhysicsMove(param_1,1);
      if (DAT_800bf848 == '\0') goto LAB_800620b0;
      param_1->collision_state = 0;
    }
    else {
      if (bVar1 != 3) goto LAB_800620b0;
      Entity_PhysicsUpdate(param_1,1);
      Entity_BehaviorDispatcher(param_1,param_1->behavior_flags | 2);
      Entity_ApplyVelocity(param_1,1);
      Entity_PhysicsStep2(param_1);
      sVar3 = param_1->velocity_y + 0x500;
      param_1->velocity_y = sVar3;
      if (0x3e00 < sVar3) {
        param_1->velocity_y = 0x3e00;
      }
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
      Entity_CollisionGround(param_1);
      Entity_PhysicsMove(param_1,1);
      if (DAT_800bf848 == '\0') {
        if (param_1->collision_state == '\0') {
          if (0x2fff < param_1->velocity_y) {
            param_1->angle_offset = param_1->velocity_y;
            Entity_ResetActionState(param_1,0);
            param_1->velocity_y = param_1->angle_offset;
          }
        }
        else {
          param_1->state_flag145 = 0;
          param_1->velocity_y = 0;
          *(u8 *)(param_1 + 0x148) = 0;
          param_1->angle_offset = 0;
          if (param_1->state_flag144 < 2) {
            param_1->state_flag144 = 0;
          }
          local_1c = param_1->pos_y_fixed;
          if (param_1->direction == '\0') {
            local_20 = param_1->normal_x * -0x2800;
            local_18 = param_1->normal_z * -0x2800;
          }
          else {
            local_20 = param_1->normal_x * 0x2800;
            local_18 = param_1->normal_z * 0x2800;
          }
          local_20 = *(int *)(param_1 + 0x2c) + local_20;
          local_18 = param_1->scale_y + local_18;
          Entity_Behavior_SpawnAtOffset(param_1,&local_20,0);
          Entity_StateDispatch(param_1);
          if ((*(u8 *)(param_1 + 0x149) & 2) == 0) {
            param_1->behavior_state = 1;
          }
          else {
            Entity_ResetState_2(param_1);
            param_1->behavior_state = 0;
          }
          param_1->action_state = 0;
          param_1->sub_action = 0;
        }
        goto LAB_800620b0;
      }
      param_1->collision_state = 0;
    }
    param_1->behavior_state = 2;
  }
  param_1->action_state = 1;
  param_1->state_flag144 = 0;
LAB_800620b0:
  Entity_State_Physics(param_1);
  return;
}
