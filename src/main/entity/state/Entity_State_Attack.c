/**
 * @brief Entity attack state: entity->action_state=0, sets attack params
 * @note Original: func_8005ACC8 at 0x8005ACC8
 */
// Entity_State_Attack



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Attack(int param_1)

{
  s16 sVar1;
  int iVar2;
  int iVar3;
  s32 uVar4;
  s32 uVar5;
  
  if (param_1->action_state == '\0') {
    param_1->timer1 = 7;
    param_1->timer2 = 0;
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  Entity_PhysicsUpdate(param_1,0);
  if ((param_1->behavior_flags & 2) == 0) {
    param_1->direction = param_1->behavior_flags & 1;
  }
  Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
  Entity_ApplyVelocity(param_1,0);
  Entity_StateMain(param_1,0);
  Entity_AnimFrame(param_1);
  Entity_PhysicsStep2(param_1);
  *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
  Entity_CollisionGround(param_1);
  iVar2 = Entity_StateDispatch3(param_1);
  if (iVar2 == 0) {
    iVar2 = Entity_StateControl(param_1);
    if (((iVar2 == 0) && (iVar3 = Entity_Behavior_Jump_2(param_1), iVar3 == 0)) &&
       ((*(u8 *)(param_1 + 0x149) & 2) != 0)) {
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      if (param_1->state_165 == '\0') {
        uVar4 = 2;
        uVar5 = 8;
      }
      else {
        uVar4 = 0x11;
        uVar5 = 4;
      }
      Entity_LoadAnimIfChanged(param_1,uVar4,uVar5);
    }
    iVar3 = Entity_CheckActionTrigger(param_1);
    if ((iVar3 == 0) && (iVar2 == 0)) {
      Entity_Behavior_Swing(param_1);
    }
  }
  if ((*(u8 *)(param_1 + 0x149) & 4) == 0) {
    Entity_State_Physics(param_1);
  }
  else if ((_g_FrameCounter2 & 3) == 0) {
    Entity_Behavior_SpawnAtOffset(param_1,param_1 + 0x2c,0);
  }
  if ((param_1->collision_state != '\0') &&
     (sVar1 = param_1->timer1, param_1->timer1 = sVar1 + -1, sVar1 == 1)) {
    Entity_State_Attack3(param_1);
  }
  Entity_PhysicsMove(param_1,0);
  if ((param_1->behavior_state < 2) && (param_1->collision_state != '\0')) {
    g_ActionState = 1;
  }
  return;
}
