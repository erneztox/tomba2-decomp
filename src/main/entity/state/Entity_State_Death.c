/**
 * @brief Entity death state: entity->action_state switch, death animation
 * @note Original: func_80066878 at 0x80066878
 */
// Entity_State_Death



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Death(int param_1)

{
  s16 sVar1;
  u16 uVar2;
  s16 uVar3;
  uint uVar4;
  
  switch(param_1->action_state) {
  case 0:
    Audio_PlaySoundEffect(0x24,0,0);
    g_TimerFlag = 1;
    param_1->state_flag145 = 0;
    param_1->state_flag146 = 0;
    Entity_StateSwitch(param_1);
    *(u8 *)(param_1 + 0x61) = 0;
    Entity_Behavior_Rotate(param_1,0);
  case 1:
    Entity_ApplyGravity(param_1);
    param_1->state_flag144 = 0;
    break;
  case 2:
    Entity_ApplyVelocityMax(param_1);
    param_1->state_flag144 = 0;
    if (param_1->collision_state == '\0') {
      uVar2 = param_1->type_flags & 0xf00;
      if (((int)param_1->type_flags & 0x8000U) == 0) {
        if (0x28 < param_1->timer1) {
          param_1->behavior_state = 7;
          param_1->action_state = 0;
          param_1->sub_action = 0;
        }
      }
      else if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
        param_1->behavior_state = 4;
        param_1->action_state = 1;
      }
      else if (uVar2 == 0x700) {
        param_1->timer1 = 3;
        param_1->behavior_state = 5;
        param_1->action_state = 1;
        param_1->sub_action = 0;
      }
    }
    else {
      param_1->state_flag145 = 0;
      uVar4 = Math_Random();
      if ((uVar4 & 3) == 0) {
        param_1->timer1 = 0x14;
        param_1->rot_z = 0;
        param_1->action_state = 7;
        Entity_LoadAnimIfChanged(param_1,0xd1,4);
        g_CameraEntity = 8;
        _DAT_800e8042 = _g_PlayerPosX;
        _DAT_800e8046 = _g_PlayerPosY;
        _DAT_800e804a = _g_PlayerPosZ;
      }
      else {
        param_1->timer1 = 0x14;
        param_1->timer2 = 0;
        param_1->action_state = param_1->action_state + '\x01';
        Entity_LoadAnimIfChanged(param_1,0x5a,0);
        if (param_1->entity_flags < 0) {
          param_1->angle_delta = 0x20;
          *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 0x26;
        }
        else {
          param_1->angle_delta = 0x40;
          *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 0x4c;
        }
      }
    }
    break;
  case 3:
    if (param_1->timer1 == 0) {
      uVar2 = param_1->rot_z - 0x200;
      param_1->rot_z = uVar2;
      if ((int)((uint)uVar2 << 0x10) < 0) {
        param_1->timer2 = 1;
      }
    }
    else {
      param_1->rot_z = param_1->rot_z - 0x200U & 0xfff;
    }
    Entity_ApplyVelocity(param_1,1);
    Entity_PhysicsStep2(param_1);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
    Entity_CollisionGround(param_1);
    if (param_1->timer1 == 0) {
      if (param_1->timer2 == 1) {
        param_1->rot_z = 0;
        Entity_LoadAnimIfChanged(param_1,0x58,4);
        param_1->action_state = param_1->action_state + '\x01';
        Pad_Init();
        uVar3 = 0x8c;
        if (param_1->entity_flags < 0) {
          uVar3 = 0x46;
        }
        param_1->angle_delta = uVar3;
        if (param_1->collision_state == '\0') {
          param_1->timer1 = 0x32;
        }
        else {
          param_1->timer1 = 0x78;
          Entity_SpawnChildAttached(param_1,param_1->sprite_ptr2,0xffffff9c,0);
          *(u8 *)(param_1 + 0x1b) = *(u8 *)(param_1 + 0x1b) | 0x40;
          Audio_PlaySoundEffect(0x10,0,0);
        }
        g_CameraEntity = 8;
        _DAT_800e8042 = _g_PlayerPosX;
        _DAT_800e8046 = _g_PlayerPosY;
        _DAT_800e804a = _g_PlayerPosZ;
      }
    }
    else {
      param_1->timer1 = param_1->timer1 + -1;
      uVar2 = param_1->type_flags & 0xf00;
      if (((int)param_1->type_flags & 0x8000U) != 0) {
        if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
          param_1->behavior_state = 4;
          param_1->action_state = 1;
        }
        else if (uVar2 == 0x700) {
          param_1->timer1 = 3;
          param_1->behavior_state = 5;
          param_1->action_state = 1;
          param_1->sub_action = 0;
        }
      }
    }
    goto LAB_80066cd8;
  case 4:
    sVar1 = param_1->timer1;
    param_1->timer1 = sVar1 + -1;
    if (sVar1 == 1) {
      Entity_OverlayDispatch(param_1,0);
      g_TimerFlag = 2;
      DAT_800bf80f = '\x02';
      param_1->action_state = param_1->action_state + '\x01';
      Pad_Init();
    }
    Entity_AnimFrame(param_1);
    Entity_CollisionGround(param_1);
    if (((g_ActionFlag == '\0') && (param_1->collision_state != '\0')) && (g_GameState != '\x04'))
    {
      _DAT_1f8000d6 = _DAT_1f8000d6 + -8;
    }
LAB_80066cd8:
    Entity_PhysicsMove(param_1,1);
    break;
  case 5:
    if (DAT_800bf80f == '\0') {
      g_TimerFlag = 3;
      param_1->action_state = param_1->action_state + '\x01';
    }
  case 6:
    Entity_AnimFrame(param_1);
    break;
  case 7:
    Entity_AnimFrame(param_1);
    sVar1 = param_1->timer1;
    param_1->timer1 = sVar1 + -1;
    param_1->rot_y = param_1->rot_y + 0x80;
    if (sVar1 == 1) {
      Entity_LoadAnimIfChanged(param_1,0xd2,6);
      param_1->timer1 = 0x14;
      param_1->action_state = param_1->action_state + '\x01';
    }
    break;
  case 8:
    Entity_AnimFrame(param_1);
    sVar1 = param_1->timer1;
    param_1->timer1 = sVar1 + -1;
    if (sVar1 == 1) {
      param_1->action_state = 4;
      param_1->timer1 = 0x5a;
      Entity_SpawnChildAttached(param_1,param_1->sprite_ptr2,0xffffff9c,0);
      *(u8 *)(param_1 + 0x1b) = *(u8 *)(param_1 + 0x1b) | 0x40;
      Audio_PlaySoundEffect(0x10,0,0);
    }
  }
  return;
}
