/**
 * @brief Entity state main variant 9: entity->action_state switch (219L)
 * @note Original: func_8005C26C at 0x8005C26C
 */
// Entity_StateMain9



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_StateMain9(int param_1)

{
  s16 uVar1;
  s8 cVar2;
  s16 sVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1->parent;
  switch(param_1->action_state) {
  case 0:
    param_1->direction = param_1->behavior_flags & 1;
    Entity_UpdateAngle(param_1);
    param_1->flag_16A = 0;
    Entity_StateCheck(param_1);
    Entity_FlagHandler(param_1,0);
    param_1->state_flag146 = 0;
    param_1->anim_counter = 0;
    Entity_ResetState_2(param_1);
    param_1->velocity_y = 0;
    if ((param_1->sub_state == '\x04') || (param_1->sub_state == '\a')) {
      Entity_PhysicsApply(param_1,0);
      Entity_State_Physics(param_1);
      param_1->action_state = 2;
      param_1->state_flag144 = 0;
      param_1->velocity_y = 0;
      return;
    }
    param_1->action_state = 1;
  case 1:
    Entity_PhysicsStep2(param_1);
    Entity_State_Combo(param_1,6);
    if ((param_1->entity_flags & 0x40) != 0) {
      param_1->state_flag144 = 0;
    }
    iVar5 = Entity_FlagHandler(param_1,0);
    if (iVar5 == 0) {
      Entity_AnimFrame(param_1);
      iVar5 = Game_CheckFlagInput();
      if (iVar5 == 0) {
        if (param_1->collision_state != '\0') {
          param_1->velocity_y = 0;
          param_1->state_flag144 = 0;
          param_1->action_state = param_1->action_state + '\x01';
        }
      }
      else {
        param_1->action_state = 3;
        param_1->state_flag144 = 0;
        param_1->velocity_y = 0;
        param_1->state_flag145 = 1;
      }
    }
    else {
      Entity_AnimFrame(param_1);
      if (param_1->collision_state != '\0') {
        param_1->velocity_y = 0;
        param_1->state_flag144 = 0;
        param_1->action_state = param_1->action_state + '\x01';
        Entity_FlagHandler(param_1);
      }
    }
    Entity_PhysicsApply(param_1,1);
LAB_8005c7a0:
    Entity_State_Physics(param_1);
    break;
  case 2:
    Entity_AnimFrame(param_1);
    if (param_1->sub_state != '\a') {
      Entity_PhysicsUpdate(param_1,1);
      Entity_PhysicsStep2(param_1);
      if (param_1->sub_state == '\x04') {
        Entity_PhysicsApply(param_1,0);
        Entity_State_Physics(param_1);
        param_1->type_flags = 0;
        iVar5 = Collision_Check2(param_1,0,(int)param_1->angle_delta);
        if (iVar5 != 0) {
          param_1->type_flags = _DAT_1f8001a6;
        }
      }
      else {
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
        Entity_CollisionGround(param_1);
        Entity_PhysicsApply(param_1,1);
        Entity_State_Physics(param_1);
        Entity_PhysicsMove(param_1,1);
      }
      iVar5 = Game_CheckFlagInput();
      if (iVar5 == 0) {
        return;
      }
      param_1->velocity_y = 0;
      param_1->state_flag145 = 1;
      cVar2 = param_1->action_state + '\x01';
      goto LAB_8005c884;
    }
    Entity_PhysicsApply(param_1,0);
    goto LAB_8005c7a0;
  case 3:
    Audio_PlaySoundEffect(0x20,0,0);
    param_1->rot_z = 0;
    Entity_LoadAnimIfChanged(param_1,param_1->anim_id + 1,0);
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  case 4:
    if (param_1->sub_state == '\b') {
      Entity_PhysicsUpdate(param_1,1);
      Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
      Entity_ApplyVelocity(param_1,1);
    }
    Entity_PhysicsStep2(param_1);
    Entity_State_Combo(param_1,2);
    if (param_1->sub_state == '\b') {
      Entity_ParentUpdate(param_1,0);
    }
    else {
      Entity_PhysicsApply(param_1,1);
    }
    if ((DAT_800bf848 == '\0') &&
       ((iVar4 = Game_CheckFlagInput(), iVar4 != 0 || (param_1->collision_state != '\0')))) {
      if (param_1->sub_state == '\x04') {
        cVar2 = '\x06';
LAB_8005c79c:
        param_1->action_state = cVar2;
      }
      else {
        iVar4 = Entity_TypeCheck(param_1,iVar5);
        if (iVar4 == 0) {
          iVar5->state = STATE_DEAD;
        }
        cVar2 = '\t';
        if (param_1->sub_state != '\b') {
          cVar2 = param_1->action_state + '\x01';
        }
        param_1->action_state = cVar2;
        param_1->sub_action = 1;
        param_1->sub_state = 0;
        Entity_LoadAnimIfChanged(param_1,0x26,0);
        param_1->state_flag145 = 1;
        param_1->collision_state = 0;
        param_1->state_flag144 = 0;
        *(u8 *)(param_1 + 0x148) = 0;
        param_1->velocity_y = 0;
        param_1->rot_z = 0x20;
      }
    }
    goto LAB_8005c7a0;
  case 5:
    Entity_PhysicsStep2(param_1);
    Entity_AnimFrame(param_1);
LAB_8005c7dc:
    sVar3 = param_1->rot_z + 0x200;
    param_1->rot_z = sVar3;
    if (0xfff < sVar3) {
      param_1->rot_z = 0x1000;
      param_1->behavior_state = 2;
      param_1->action_state = 1;
      Entity_LoadAnimIfChanged(param_1,0x15,3);
    }
    goto LAB_8005c828;
  case 6:
    Entity_LoadAnimIfChanged(param_1,0x24,0);
    param_1->timer1 = 0;
    param_1->timer2 = 0;
    uVar1 = *(s16 *)(&DAT_800a4694 + param_1->timer1 * 2);
    param_1->action_state = param_1->action_state + '\x01';
    param_1->rot_z = uVar1;
    Entity_ParentUpdate();
    break;
  case 7:
    sVar3 = param_1->timer1 + 1;
    param_1->timer1 = sVar3;
    if (10 < sVar3) {
      param_1->timer1 = 10;
    }
    param_1->rot_z =
         *(s16 *)(&DAT_800a4694 + param_1->timer1 * 2);
    if ((param_1->timer2 == 0) &&
       (Entity_ParentUpdate(param_1,1), *(s16 *)(param_1->anim_data + 2) == 6)) {
      Audio_PlaySoundEffect(0x21,0,0);
      iVar5->behavior_state = 3;
      iVar5->action_state = 0;
      param_1->timer2 = 1;
      param_1->sub_state = 0;
    }
    iVar5 = Entity_AnimFrame(param_1);
    if (iVar5 != 1) goto LAB_8005c7a0;
    Entity_LoadAnimIfChanged(param_1,param_1->anim_id + 1,0);
    param_1->state_flag145 = 1;
    param_1->collision_state = 0;
    param_1->state_flag144 = 0;
    *(u8 *)(param_1 + 0x148) = 0;
    param_1->velocity_y = 0;
    param_1->sub_action = 1;
    cVar2 = param_1->action_state + '\x01';
    goto LAB_8005c79c;
  case 8:
    Entity_PhysicsStep2(param_1);
    Entity_AnimFrame(param_1);
    if (1 < *(u16 *)(param_1->anim_data + 2)) goto LAB_8005c7dc;
LAB_8005c828:
    Entity_State_Combo(param_1,8);
    Entity_State_Ground(param_1,0);
    break;
  case 9:
    Entity_PhysicsStep2(param_1);
    Entity_AnimFrame(param_1);
    sVar3 = param_1->rot_z + 0x200;
    param_1->rot_z = sVar3;
    if (sVar3 < 0x1000) {
      return;
    }
    param_1->behavior_state = 3;
    cVar2 = '\a';
    param_1->rot_z = 0;
LAB_8005c884:
    param_1->action_state = cVar2;
  }
  return;
}
