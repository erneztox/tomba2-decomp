/**
 * @brief Entity state main variant 10: entity->action_state switch (239L)
 * @note Original: func_80065A54 at 0x80065A54
 */
// Entity_StateMain10



#include "tomba.h"
void Entity_StateMain10(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  s8 cVar3;
  s16 uVar4;
  
  switchparam_1->action_state {
  case 0:
    Entity_StateSwitch(param_1);
    if (g_CurrentOverlay == '\x01') {
      g_ActionTrigger = '\0';
      uVar4 = 0xe;
LAB_80065b04:
      param_1->timer1 = uVar4;
    }
    else {
      if (g_GameState == '\x01') {
        uVar4 = 0x26;
        goto LAB_80065b04;
      }
      if (g_GameState == '\x06') {
        uVar4 = 0x1c;
        if (param_1->collision_dir != '\t') goto LAB_80065b04;
        param_1->timer1 = 6;
      }
      else {
        param_1->timer1 = 0x1c;
      }
    }
    param_1->state_flag146 = 0;
    param_1->direction = DAT_800bf81f >> 4;
    param_1->action_state = param_1->action_state + '\x01';
    Entity_ResetState_2(param_1);
    param_1->velocity_y = 0;
    Entity_LoadAnimIfChanged(param_1,4,0);
    uVar4 = 0xf000;
    if (param_1->direction == '\0') {
      uVar4 = 0x1000;
    }
    break;
  case 1:
    Entity_AnimFrame(param_1);
    if (param_1->state_flag145 == '\0') {
      Entity_ApplyVelocity(param_1,0);
      Entity_PhysicsStep2(param_1);
      Entity_SetActionFlag(param_1,1);
    }
    else {
      Entity_ApplyVelocity(param_1,1);
      Entity_PhysicsStep2(param_1);
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
      Entity_CollisionGround(param_1);
      Entity_PhysicsMove(param_1,1);
    }
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 != 1) goto LAB_80065f70;
    cVar3 = param_1->action_state + '\x01';
    goto LAB_80065f6c;
  case 2:
    *param_1 = 3;
    param_1->timer_172 = 0x1e;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    Entity_ResetState_2(param_1);
    Entity_LoadAnimIfChanged(param_1,2,3);
    if (g_CurrentOverlay == '\x01') {
      g_ActionTrigger = g_CurrentOverlay;
    }
    goto LAB_80066090;
  case 3:
    bVar1 = param_1->sub_action;
    if (bVar1 == 1) {
      param_1->timer1 = 1;
      param_1->sub_action = param_1->sub_action + '\x01';
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->timer1 = 0x14;
      param_1->sub_action = 2;
      return;
    }
    if (bVar1 != 2) {
      return;
    }
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    param_1->behavior_state = 7;
    *param_1 = 3;
    param_1->action_state = 2;
    param_1->sub_action = 0;
    param_1->timer_172 = 0x1e;
    return;
  case 4:
    bVar1 = param_1->sub_action;
    if (bVar1 == 1) {
      Entity_AnimFrame(param_1);
      Entity_ApplyVelocity(param_1,0);
      Entity_PhysicsStep2(param_1);
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
      Entity_CollisionGround(param_1);
      Entity_PhysicsMove(param_1,1);
      sVar2 = param_1->timer1;
      param_1->timer1 = sVar2 + -1;
      if (sVar2 == 1) {
        param_1->sub_action = param_1->sub_action + '\x01';
      }
      goto LAB_80065f70;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      Entity_StateSwitch(param_1);
      param_1->timer1 = 0x1c;
      param_1->sub_action = param_1->sub_action + '\x01';
      Entity_ResetState_2(param_1);
      Entity_LoadAnimIfChanged(param_1,4,0);
      uVar4 = 0xf000;
      if (param_1->direction == '\0') {
        uVar4 = 0x1000;
      }
      break;
    }
    if (bVar1 != 2) {
      return;
    }
    *param_1 = 3;
    param_1->timer_172 = 0x1e;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    Entity_ResetState_2(param_1);
    Entity_LoadAnimIfChanged(param_1,2,3);
    if (g_CurrentOverlay == '\x02') {
      g_CurrentOverlay = '\0';
    }
    goto LAB_80066090;
  case 5:
    Entity_StateSwitch(param_1);
    if (g_CurrentOverlay == '\x01') {
      g_ActionTrigger = '\0';
    }
    param_1->timer1 = 0x26;
    param_1->state_flag146 = 0;
    param_1->direction = DAT_800bf81f >> 4;
    Entity_ResetState_2(param_1);
    param_1->velocity_y = 0;
    Entity_LoadAnimIfChanged(param_1,4,0);
    uVar4 = 0xf800;
    if (param_1->direction == '\0') {
      uVar4 = 0x800;
    }
    param_1->anim_counter = uVar4;
    Entity_State_Physics(param_1);
    param_1->action_state = 1;
    return;
  case 6:
    Entity_StateSwitch(param_1);
    if (g_CurrentOverlay == '\x01') {
      g_ActionTrigger = '\0';
    }
    param_1->timer1 = 0x25;
    param_1->state_flag146 = 0;
    param_1->direction = DAT_800bf81f >> 4;
    param_1->action_state = param_1->action_state + '\x01';
    Entity_ResetState_2(param_1);
    param_1->velocity_y = 0;
    Entity_LoadAnimIfChanged(param_1,4,0);
    uVar4 = 0xf000;
    if (param_1->direction == '\0') {
      uVar4 = 0x1000;
    }
    break;
  case 7:
    Entity_AnimFrame(param_1);
    Entity_ApplyVelocity(param_1,0);
    Entity_PhysicsStep2(param_1);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
    Entity_CollisionGround(param_1);
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    cVar3 = '\x02';
    if (sVar2 != 1) goto LAB_80065f70;
LAB_80065f6c:
    param_1->action_state = cVar3;
LAB_80065f70:
    Entity_State_Physics(param_1);
    if (((int)param_1->timer1 % 7 & 0xffffU) != 0) {
      return;
    }
    Audio_PlaySoundEffect(0,5,0);
    return;
  case 8:
    Entity_StateSwitch(param_1);
    param_1->timer1 = 0x1c;
    param_1->state_flag146 = 0;
    bVar1 = DAT_800bf81f;
    param_1->action_state = 1;
    param_1->direction = bVar1 >> 4;
    Entity_ResetState_2(param_1);
    param_1->velocity_y = 0;
    Entity_LoadAnimIfChanged(param_1,4,0);
    uVar4 = 0xf000;
    if (param_1->direction == '\0') {
      uVar4 = 0x1000;
    }
    break;
  case 9:
    param_1->timer1 = 0x14;
    Entity_StateSwitch(param_1);
    param_1->state_flag146 = 0;
    bVar1 = DAT_800bf81f;
    param_1->action_state = 1;
    param_1->direction = bVar1 >> 4;
    Entity_ResetState_2(param_1);
    param_1->velocity_y = 0;
    Entity_LoadAnimIfChanged(param_1,4,0);
    uVar4 = 0xf000;
    if (param_1->direction == '\0') {
      uVar4 = 0x1000;
    }
    break;
  default:
    goto switchD_80065a90_default;
  }
  param_1->anim_counter = uVar4;
LAB_80066090:
  Entity_State_Physics(param_1);
switchD_80065a90_default:
  return;
}
