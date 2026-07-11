/**
 * @brief Entity action state variant 2: entity->action_state dispatch
 * @note Original: func_8005A970 at 0x8005A970
 */
// Entity_State_Action2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Action2(int param_1)

{
  int iVar1;
  s32 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1->action_state == 0) {
    param_1->anim_counter = 0;
    if (param_1->state_165 == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = 0x11;
    }
    Entity_LoadAnimIfChanged(param_1,uVar2,4);
    param_1->draw_pos_y = 0;
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (3 < param_1->action_state) goto LAB_8005ac70;
  Entity_PhysicsUpdate(param_1,1);
  Entity_BehaviorDispatcher(param_1,param_1->behavior_flags);
  Entity_ApplyVelocity(param_1,0);
  Entity_PhysicsStep2(param_1);
  *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
  Entity_CollisionGround(param_1);
  iVar1 = Entity_StateDispatch3(param_1);
  if (((iVar1 == 0) && (iVar3 = Entity_StateControl(param_1), iVar3 == 0)) &&
     (iVar1 = Entity_Behavior_Jump_2(param_1), iVar1 == 0)) {
    if ((param_1->behavior_flags & 2) == 0) {
      param_1->behavior_state = 1;
      param_1->action_state = 0;
      if (param_1->anim_id == '\x02') {
        uVar2 = 4;
      }
      else {
        uVar2 = 1;
      }
      Entity_StateMain(param_1,uVar2);
      Entity_Behavior_SpawnAtOffset(param_1,param_1 + 0x2c,0);
    }
    else if (g_CurrentOverlay == '\0') {
      uVar2 = Entity_AnimFrame(param_1);
      if (param_1->state_165 == '\0') {
        if (param_1->anim_id == '\x11') {
          Entity_LoadAnimIfChanged(param_1,2,2);
        }
        Entity_State_Attack6(param_1,uVar2);
      }
      else {
        Entity_LoadAnimIfChanged(param_1,0x11,2);
      }
    }
    else {
      Entity_LoadAnimIfChanged(param_1,2,4);
      Entity_AnimFrame(param_1);
    }
  }
  if ((param_1->collision_state & 0x80) != 0) {
    if (((param_1->physics_flag == '\0') && (g_CurrentOverlay == '\0')) &&
       (param_1->action_state == '\x01')) {
      iVar1 = Collision_Check2(param_1,0x39,
                           (int)(((param_1->velocity_y * 0x39 >> 8) +
                                 (uint)param_1->angle_delta) * 0x10000) >> 0x10);
      if (((iVar1 == 0) && ((int)*(s16 *)(param_1 + 0x32) - (int)_DAT_1f8001a4 < -500)) &&
         ((_g_GTE_Work8C != _DAT_1f800212 && (param_1->behavior_state == '\0')))) {
        param_1->timer1 = 0;
        Audio_PlaySoundEffect(0x25,0,0);
        Entity_LoadAnimIfChanged(param_1,0x70,0);
        param_1->action_state = 2;
        param_1->sub_action = 7;
      }
      _DAT_1f800212 = _g_GTE_Work8C;
    }
    iVar1 = Entity_CheckActionTrigger(param_1);
    if ((iVar1 == 0) && (iVar3 == 0)) {
      Entity_Behavior_Swing(param_1);
    }
  }
LAB_8005ac70:
  Entity_State_Physics(param_1);
  Entity_PhysicsMove(param_1,0);
  if ((param_1->behavior_state < 2) && (param_1->collision_state != '\0')) {
    g_ActionState = 1;
  }
  return;
}
