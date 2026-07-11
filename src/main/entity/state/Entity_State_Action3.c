/**
 * @brief Entity action state variant 3: entity->action_state switch
 * @note Original: func_8005E580 at 0x8005E580
 */
// Entity_State_Action3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8005e580(byte *param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  switchparam_1->action_state {
  case 0:
    param_1[0x61] = 0x30;
    FUN_80054198(param_1);
    uVar1 = _DAT_1f80018a;
    param_1->pos_y = _DAT_1f800188;
    param_1->pos_z = uVar1;
    FUN_80054d14(param_1,2,4);
    param_1->action_state = param_1->action_state + 1;
    _DAT_1f800194 = _DAT_1f80018c - 0x800U & 0xfff;
  case 1:
  case 3:
    uVar4 = (uint)_DAT_1f800194;
    sVar2 = FUN_800776f8(uVar4 & 0xfff,(int)param_1->rot_y,0x100);
    param_1->rot_y = sVar2;
    if ((int)sVar2 == (uVar4 & 0xfff)) {
      param_1->action_state = param_1->action_state + 1;
    }
    goto LAB_8005e664;
  case 2:
    FUN_80055e28(param_1,0);
    iVar3 = FUN_800558b4(param_1);
    if (iVar3 == 1) {
      DAT_800bf840 = 0x80;
      param_1[0x61] = 0x31;
      param_1->action_state = 5;
      param_1->direction = 1;
      *param_1 = *param_1 | 4;
      FUN_80054198(param_1);
    }
    else {
      param_1[0x61] = 0;
      param_1->action_state = param_1->action_state + 1;
      param_1->direction = param_1->behavior_flags & 1;
      FUN_80054198(param_1);
      if (param_1->direction == 0) {
        _DAT_1f800194 = param_1->draw_angle;
      }
      else {
        _DAT_1f800194 = param_1->draw_angle - 0x800U & 0xfff;
      }
    }
LAB_8005e664:
    FUN_80076d68(param_1);
    break;
  case 4:
    param_1[0x61] = 0;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    *param_1 = *param_1 & 3;
    FUN_80076d68(param_1);
    break;
  case 5:
    param_1->collision_dir = 0;
    DAT_1f800207 = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    FUN_80054d14(param_1,99,0);
    param_1->physics_flag = 2;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xd0;
    param_1->collision_state = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0xf6;
    param_1->action_state = param_1->action_state + 1;
  case 6:
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,0x11);
    if (param_1->state_flag145 == 2) {
      FUN_80054d14(param_1,100,6);
    }
    if (param_1->collision_state == 0) {
      return;
    }
    FUN_80054d14(param_1,0x17,1);
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1->physics_flag = 1;
    param_1->action_state = param_1->action_state + 1;
    return;
  case 7:
    iVar3 = FUN_80055824();
    if (iVar3 == 0) {
      if (((((_DAT_800ecf54 & 0x10) != 0) || (iVar3 = FUN_80076d68(param_1), iVar3 == 1)) ||
          (FUN_80055e28(param_1,0), (_DAT_800ecf54 & 0x10) != 0)) || ((param_1->behavior_flags & 2) == 0)) {
        param_1[0x61] = 0;
        param_1->behavior_state = 0;
        param_1->action_state = 0;
        param_1->sub_action = 0;
        *param_1 = *param_1 & 3;
        FUN_80054d14(param_1,2);
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
    goto switchD_8005e5bc_default;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_80056c00(param_1,1);
switchD_8005e5bc_default:
  return;
}
