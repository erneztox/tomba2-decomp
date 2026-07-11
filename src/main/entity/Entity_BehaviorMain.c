/**
 * @brief Entity behavior main: primary behavior dispatcher
 * @note Original: func_8005D16C at 0x8005D16C
 */
// Entity_BehaviorMain



#include "tomba.h"
void Entity_BehaviorMain(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  Entity_PhysicsUpdate(param_1,0);
  if ((param_1->sprite_cmd - 1 < 2) && (param_1->action_state != '\x02')) {
    if ((param_1->physics_flag == '\0') && (*(s8*)(param_1 + 0x61) == '\0')) {
      Entity_Behavior_Init2(param_1,0);
    }
    else {
      param_1->input_flags = param_1->input_flags & 0xfb;
    }
  }
  else {
    Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
    Entity_ApplyVelocity(param_1,1);
  }
  Entity_PhysicsStep2(param_1);
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(u8 *)(param_1 + 0x181) = 0;
      DAT_1f800252 = 0;
      param_1->rot_z = 0;
      param_1->combat_flag = 0;
      param_1->gte_flags = 0;
      param_1->direction = param_1->behavior_flags & 1;
      Entity_State_Physics(param_1);
      if (param_1->flag_175 == '\0') {
        param_1->state_flag146 = 1;
        Entity_BehaviorDispatch2(param_1,0,0);
        Entity_AnimLoadDispatch(param_1,0,0);
        param_1->action_state = param_1->action_state + '\x01';
      }
      else {
        param_1->state_flag146 = 2;
        Entity_BehaviorDispatch2(param_1,1,0);
        Entity_AnimLoadDispatch(param_1,1,1);
        param_1->action_state = 2;
      }
      if (param_1->sprite_cmd - 1 < 2) {
        return;
      }
      Entity_State_Combo(param_1,0);
      return;
    }
    if (bVar1 != 2) {
      return;
    }
    *(u8 *)(param_1 + 0x181) = 0;
    Entity_AnimFrame(param_1);
    Entity_State_Combo(param_1,0);
    param_1->direction = param_1->behavior_flags & 1;
    Entity_AnimLoadDispatch(param_1,1,1);
    Entity_State_Physics(param_1);
    if (param_1->collision_state == '\0') {
      iVar2 = Entity_ActionCheck2(param_1,1);
      if (iVar2 != -1) {
        if (iVar2 != 0) {
          return;
        }
        DAT_1f800252 = 0;
        param_1->state_flag146 = 3;
        Entity_BehaviorDispatch2(param_1,0,8);
        Entity_AnimLoadDispatch(param_1,0,0);
        param_1->gte_flags = 0;
        param_1->action_state = 1;
        return;
      }
      param_1->behavior_state = 2;
      param_1->action_state = 1;
      goto LAB_8005d510;
    }
    iVar2 = Entity_StateDispatch3(param_1);
    if (iVar2 == 0) {
      param_1->behavior_state = 5;
      param_1->sub_action = 0;
      *(u8 *)(param_1 + 0x149) = *(u8 *)(param_1 + 0x149) & 1 | 2;
      return;
    }
    goto LAB_8005d488;
  }
  iVar2 = 0;
  if (param_1->sub_state2 != '\x02') {
    iVar2 = Entity_AnimFrame(param_1);
  }
  if (param_1->sprite_cmd - 1 < 2) {
    if (DAT_1f800252 != '\0') {
      if ((param_1->entity_flags & 0x40) != 0) {
        *(u8 *)(param_1 + 0x178) = 0xc;
      }
      goto LAB_8005d368;
    }
  }
  else {
LAB_8005d368:
    Entity_State_Combo(param_1,0);
  }
  if (param_1->collision_state == '\0') {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = Entity_CheckStateType(param_1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = Entity_ActionCheck2(param_1,0);
    if (iVar2 == 2) {
      param_1->state_flag146 = 2;
      Entity_BehaviorDispatch2(param_1,1,0);
      param_1->action_state = param_1->action_state + '\x01';
      return;
    }
    param_1->behavior_state = 2;
    param_1->action_state = 1;
LAB_8005d510:
    param_1->state_flag146 = 0;
    Entity_LoadAnimIfChanged(param_1,0x14,2);
    return;
  }
  iVar2 = Entity_StateDispatch3(param_1);
  if (iVar2 == 0) {
    param_1->behavior_state = 5;
    *(u8 *)(param_1 + 0x149) = *(u8 *)(param_1 + 0x149) & 1 | 2;
    param_1->sub_action = 0;
    bVar1 = param_1->behavior_flags & 0xe;
    param_1->behavior_flags = bVar1;
    param_1->behavior_flags = bVar1 | param_1->direction;
    return;
  }
LAB_8005d488:
  param_1->state_flag146 = 0;
  return;
}
