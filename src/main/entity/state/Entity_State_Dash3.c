/**
 * @brief Entity dash state variant 3: entity->action_state state machine
 * @note Original: func_8005EF48 at 0x8005EF48
 */
// Entity_State_Dash3



#include "tomba.h"
void Entity_State_Dash3(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 uVar3;
  int iVar4;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        param_1->flag_16A = 0;
        return;
      }
      Entity_StateSwitch(param_1);
      param_1->state_flag145 = 0;
      param_1->state_flag146 = 0;
      Entity_LoadAnimDispatch(param_1,0,0);
      param_1->velocity_y = 0;
      param_1->action_state = param_1->action_state + '\x01';
      if ((param_1->flag_16A & 1) == 0) {
        param_1->anim_counter = 0x800;
      }
      else {
        param_1->anim_counter = 0xf800;
      }
    }
    else {
      if (bVar1 != 2) {
        param_1->flag_16A = 0;
        return;
      }
      Entity_AnimFrame(param_1);
      if ((param_1->flag_16A & 2) != 0) {
        uVar3 = 0xf800;
        if ((param_1->flag_16A & 1) == 0) {
          uVar3 = 0x800;
        }
        param_1->anim_counter = uVar3;
      }
      Entity_PhysicsUpdate(param_1,1);
      Entity_ApplyVelocity(param_1,1);
      Entity_State_Combo(param_1,0);
      Entity_PhysicsStep2(param_1);
      Entity_State_Ground(param_1,2);
      if ((param_1->state_ptr == 0) &&
         (sVar2 = param_1->timer1, param_1->timer1 = sVar2 + -1, sVar2 == 1))
      {
        Entity_LoadAnimIfChanged(param_1,0x14,0);
        param_1->behavior_state = 2;
        param_1->action_state = 1;
      }
    }
    goto LAB_8005f19c;
  }
  iVar4 = (int)param_1->anim_counter;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 < 0x800) {
    uVar3 = 0xf800;
    if ((param_1->flag_16A & 1) == 0) {
      uVar3 = 0x800;
    }
    param_1->anim_counter = uVar3;
  }
  Entity_ApplyVelocity(param_1,1);
  Entity_PhysicsStep2(param_1);
  Entity_AnimFrame(param_1);
  if (((param_1->collision_state & 0x80) == 0) || (iVar4 = Game_CheckFlagInput(), iVar4 == 0)) {
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
    Entity_CollisionGround(param_1);
    if (param_1->collision_state == '\0') {
      param_1->anim_counter = 0;
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 0x40;
      Entity_ResetActionState(param_1,0);
      if (param_1->behavior_state == '\x02') {
        param_1->timer1 = 10;
        param_1->behavior_state = 0xf;
        param_1->action_state = 2;
      }
      goto LAB_8005f19c;
    }
    if (param_1->flag_16A != '\0') goto LAB_8005f19c;
    param_1->anim_counter = 0;
    param_1->behavior_state = 0;
  }
  else {
    param_1->behavior_state = 2;
  }
  param_1->action_state = 0;
  param_1->sub_action = 0;
LAB_8005f19c:
  param_1->flag_16A = 0;
  return;
}
