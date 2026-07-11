/**
 * @brief Entity attack state variant 5: entity->action_state state machine
 * @note Original: func_8006506C at 0x8006506C
 */
// Entity_State_Attack5



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Attack5(int param_1)

{
  u8 bVar1;
  int iVar2;
  s32 uVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        Entity_AnimFrame(param_1);
        if (((_g_PadState & 0x10) == 0) && (iVar2 = Game_CheckFlagInput(), iVar2 == 0)) {
          if ((_g_InputState & 0x40) == 0) {
            return;
          }
          *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 0x10;
          Entity_State_Slide(param_1,1);
          param_1->action_state = 1;
          return;
        }
        param_1->behavior_state = 7;
        param_1->action_state = 2;
        param_1->sub_action = 0;
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      Entity_AnimFrame(param_1);
      Entity_State_Slide(param_1,0x81);
      if ((_g_FrameCounter2 & 3) != 0) {
        return;
      }
      Audio_PlaySoundEffect(5,0xfffffffe,0xffffffc4);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    Entity_ResetState_2(param_1);
    param_1->type_flags = 0;
    if ((*(uint *)(param_1 + 0x17c) & 0x4400200) == 0x200) {
      param_1->action_state = 3;
      param_1->sub_action = 0;
      Entity_LoadAnimIfChanged(param_1,0x40);
      if ((param_1->anim_param & 2) == 0) {
        return;
      }
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 0x20;
      Entity_State_Slide(param_1,0x81);
      return;
    }
    if ((param_1->anim_param & 2) != 0) {
      Entity_LoadAnimIfChanged(param_1,0x18,3);
      param_1->action_state = 2;
      param_1->sub_action = 0;
      return;
    }
    Entity_LoadAnimIfChanged(param_1,0x40,3);
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  Entity_AnimFrame(param_1);
  if ((_g_InputState & 0x10) == 0) {
    if ((_g_InputState & 0x40) == 0) {
      Entity_LoadAnimIfChanged(param_1,0x40,4);
      Entity_State_Slide(param_1,2);
      goto LAB_80065238;
    }
    Entity_State_Slide(param_1,1);
    if ((_g_FrameCounter2 & 3) != 0) goto LAB_80065238;
    uVar3 = 0xfffffffe;
  }
  else {
    Entity_LoadAnimIfChanged(param_1,0x41,0);
    Entity_State_Slide(param_1,0);
    if ((_g_FrameCounter2 & 3) != 0) goto LAB_80065238;
    uVar3 = 3;
  }
  Audio_PlaySoundEffect(5,uVar3,0xffffffc4);
LAB_80065238:
  iVar2 = Game_CheckFlagInput();
  if (iVar2 != 0) {
    param_1->behavior_state = 4;
    param_1->action_state = 2;
    param_1->action_flag = 0;
    param_1->sub_action = 0;
    param_1->state_ptr = 0;
    param_1->rot_z = 0;
    param_1->timer1 = 8;
    Audio_PlaySoundEffect(0x1d,0,0);
    Entity_PhysicsUpdate(param_1,0);
    *(u8 *)(param_1 + 0x149) = (param_1->behavior_flags & 1) + 2;
    Entity_LoadAnimIfChanged(param_1,0x14,0);
  }
  return;
}
