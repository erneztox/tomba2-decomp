/**
 * @brief Entity state main variant 2: entity->action_state dispatch
 * @note Original: func_8005CDF8 at 0x8005CDF8
 */
// Entity_StateMain2



#include "tomba.h"
void Entity_StateMain2(int param_1)

{
  u8 bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    iVar2 = Entity_AnimFrame(param_1);
    iVar3 = Entity_OverlayDispatch2(param_1,1);
    if (iVar3 == 0) {
      iVar3 = Entity_CheckInputActive(param_1);
      if (iVar3 != 0) {
        param_1->direction = '\x01' - param_1->direction;
        Entity_State_Physics(param_1);
        Entity_AnimLoad2(param_1,0);
        goto LAB_8005d0a8;
      }
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
        Entity_BehaviorDispatch2(param_1,1,1);
        param_1->action_state = param_1->action_state + '\x01';
        return;
      }
LAB_8005d144:
      param_1->behavior_state = 4;
      param_1->action_state = 0;
      param_1->sub_action = 0;
    }
LAB_8005d150:
    param_1->state_flag146 = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->combat_flag = 0;
      param_1->gte_flags = 0;
      Entity_ResetState_2(param_1);
      Entity_PhysicsUpdate(param_1,0);
      *(void*)(param_1 + 0x14a) =
           (&DAT_800a46c4)
           [(uint)param_1->direction * 0x10 + (uint)param_1->behavior_flags];
      if (param_1->flag_175 != '\0') {
        param_1->state_flag146 = 2;
        Entity_BehaviorDispatch2(param_1,1,1);
        Entity_LoadAnimTable(param_1,1,param_1->anim_select);
        param_1->action_state = 2;
        iVar2 = Entity_OverlayDispatch2(param_1,1);
        if (iVar2 == 0) {
          return;
        }
        param_1->state_flag146 = 0;
        return;
      }
      param_1->state_flag146 = 1;
      Entity_BehaviorDispatch2(param_1,0,1);
      Entity_LoadAnimTable(param_1,0,param_1->anim_select);
      param_1->action_state = param_1->action_state + '\x01';
      iVar2 = Entity_OverlayDispatch2(param_1);
      if (iVar2 != 0) goto LAB_8005d150;
      iVar2 = Entity_CheckInputActive(param_1);
      if (iVar2 == 0) {
        return;
      }
      param_1->direction = '\x01' - param_1->direction;
      Entity_State_Physics(param_1);
      Entity_AnimLoad2(param_1,0);
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      Entity_PhysicsUpdate(param_1,0);
      *(void*)(param_1 + 0x14a) =
           (&DAT_800a46c4)
           [(uint)param_1->direction * 0x10 + (uint)param_1->behavior_flags];
      Entity_LoadAnimTable(param_1,1,param_1->anim_select);
      iVar2 = Entity_OverlayDispatch2(param_1,1);
      if (iVar2 != 0) goto LAB_8005d150;
      iVar2 = Entity_CheckInputActive(param_1);
      if (iVar2 == 0) {
        iVar2 = Entity_ActionCheck2(param_1,1);
        if (iVar2 == 0) {
          param_1->combat_flag = 0;
          param_1->state_flag146 = 3;
          Entity_BehaviorDispatch2(param_1,0,8);
          Entity_LoadAnimTable(param_1,0,param_1->anim_select);
          param_1->gte_flags = 0;
          param_1->action_state = 1;
          return;
        }
        if (0 < iVar2) {
          if (iVar2 != 2) {
            return;
          }
          Entity_AnimFrame(param_1);
          return;
        }
        if (iVar2 != -1) {
          return;
        }
        goto LAB_8005d144;
      }
      param_1->direction = '\x01' - param_1->direction;
      Entity_State_Physics();
      Entity_AnimLoad2(param_1,1);
      param_1->rot_z = 0;
    }
LAB_8005d0a8:
    Audio_PlaySoundEffect(0x1d,0,0);
    param_1->behavior_state = 6;
    param_1->sub_action = 0;
    Entity_StateSwitch();
  }
  return;
}
