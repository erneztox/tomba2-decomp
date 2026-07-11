/**
 * @brief Entity action state variant 4: entity->action_state switch
 * @note Original: func_8005E8FC at 0x8005E8FC
 */
// Entity_State_Action4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_State_Action4(u8 *param_1)

{
  s16 uVar1;
  s16 sVar2;
  int iVar3;
  uint uVar4;
  
  switchparam_1->action_state {
  case 0:
    param_1[0x61] = 0x30;
    Entity_ResetState_2(param_1);
    uVar1 = _DAT_1f80018a;
    param_1->pos_y = _DAT_1f800188;
    param_1->pos_z = uVar1;
    Entity_LoadAnimIfChanged(param_1,2,4);
    param_1->action_state = param_1->action_state + 1;
    _DAT_1f800194 = _DAT_1f80018c & 0xfff;
  case 1:
  case 3:
    uVar4 = (uint)_DAT_1f800194;
    sVar2 = Math_ApproachAngle_2(uVar4 & 0xfff,(int)param_1->rot_y,0x100);
    param_1->rot_y = sVar2;
    if ((int)sVar2 == (uVar4 & 0xfff)) {
      param_1->action_state = param_1->action_state + 1;
    }
    goto LAB_8005e9dc;
  case 2:
    Entity_PhysicsUpdate(param_1,0);
    iVar3 = Entity_Behavior_Jump_2(param_1);
    if (iVar3 == 2) {
      g_SFXState = 0x81;
      param_1[0x61] = 0x31;
      param_1->action_state = 5;
      param_1->direction = 0;
      *param_1 = *param_1 | 4;
      Entity_ResetState_2(param_1);
    }
    else {
      param_1[0x61] = 0;
      param_1->action_state = param_1->action_state + 1;
      param_1->direction = param_1->behavior_flags & 1;
      Entity_ResetState_2(param_1);
      if (param_1->direction == 0) {
        _DAT_1f800194 = param_1->draw_angle;
      }
      else {
        _DAT_1f800194 = param_1->draw_angle - 0x800U & 0xfff;
      }
    }
LAB_8005e9dc:
    Entity_AnimFrame(param_1);
    break;
  case 4:
    param_1[0x61] = 0;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    *param_1 = *param_1 & 3;
    Entity_AnimFrame(param_1);
    break;
  case 5:
    param_1->collision_dir = 0;
    DAT_1f800207 = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    Entity_LoadAnimIfChanged(param_1,99,0);
    param_1->physics_flag = 2;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xd0;
    param_1->collision_state = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 10;
    param_1->action_state = param_1->action_state + 1;
  case 6:
    Entity_AnimFrame(param_1);
    Entity_ApplyVelocity(param_1,1);
    Entity_PhysicsStep2(param_1);
    Entity_State_Combo(param_1,0x11);
    if (param_1->state_flag145 == 2) {
      Entity_LoadAnimIfChanged(param_1,100,6);
    }
    if (param_1->collision_state == 0) {
      return;
    }
    Entity_LoadAnimIfChanged(param_1,0x17,1);
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1->physics_flag = 1;
    param_1->action_state = param_1->action_state + 1;
    return;
  case 7:
    iVar3 = Game_CheckFlagInput();
    if (iVar3 == 0) {
      if (((((_g_InputState & 0x40) != 0) || (iVar3 = Entity_AnimFrame(param_1), iVar3 == 1)) ||
          (Entity_PhysicsUpdate(param_1,0), (_g_InputState & 0x40) != 0)) || ((param_1->behavior_flags & 2) == 0)) {
        param_1[0x61] = 0;
        param_1->behavior_state = 0;
        param_1->action_state = 0;
        param_1->sub_action = 0;
        *param_1 = *param_1 & 3;
        Entity_LoadAnimIfChanged(param_1,2);
      }
    }
    else {
      param_1[0x61] = 0;
      param_1->behavior_state = 2;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      *param_1 = *param_1 & 3;
    }
    break;
  default:
    goto switchD_8005e938_default;
  }
  *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
  Entity_PhysicsMove(param_1,1);
switchD_8005e938_default:
  return;
}
