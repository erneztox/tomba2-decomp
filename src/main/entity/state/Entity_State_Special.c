/**
 * @brief Entity special state: entity->action_state state 0->1->2, SFX
 * @note Original: func_800620D0 at 0x800620D0
 */
// Entity_State_Special



#include "tomba.h"
void Entity_State_Special(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  
  Entity_AnimFrame();
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        g_ActionTrigger = 0;
        param_1->state_flag146 = 0;
        Entity_StateSwitch(param_1);
        Entity_ResetState_2(param_1);
        Entity_LoadAnimIfChanged(param_1,0xe1,4);
        Audio_PlaySoundEffect(0x39,0,0);
        param_1->timer1 = 0x1e;
        param_1->action_state = param_1->action_state + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      Entity_State_Physics(param_1);
      sVar2 = param_1->timer1;
      param_1->timer1 = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      g_ActionTrigger = 1;
      param_1->state = 4;
      param_1->behavior_state = 0x20;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->state_flag146 = 0;
    Entity_StateSwitch(param_1);
    Entity_ResetState_2(param_1);
    Entity_LoadAnimIfChanged(param_1,0xe1,4);
    Audio_PlaySoundEffect(0x39,0,0);
    param_1->timer1 = 0x1e;
    param_1->action_state = param_1->action_state + '\x01';
    Entity_State_Physics(param_1);
  }
  Entity_PhysicsStep2(param_1);
  *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
  Entity_CollisionGround(param_1);
  Entity_PhysicsMove(param_1,1);
  if (param_1->timer1 == 0) {
    if (param_1->collision_state == '\0') {
      Entity_ResetActionState(param_1,0);
    }
    else {
      param_1->behavior_state = 0;
      param_1->action_state = 0;
    }
  }
  else {
    param_1->timer1 = param_1->timer1 + -1;
  }
  return;
}
