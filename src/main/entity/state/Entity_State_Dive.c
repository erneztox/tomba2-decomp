/**
 * @brief Entity dive state: entity->action_state state, diving movement
 * @note Original: func_8005EC70 at 0x8005EC70
 */
// Entity_State_Dive



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8005ec70(u8 *param_1)

{
  u8 bVar1;
  s16 uVar2;
  s16 sVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar5 = (uint)_DAT_1f800194;
        sVar3 = FUN_800776f8(uVar5 & 0xfff,(int)param_1->rot_y,0x100);
        param_1->rot_y = sVar3;
        if ((int)sVar3 == (uVar5 & 0xfff)) {
          param_1->action_state = param_1->action_state + 1;
        }
        FUN_80076d68(param_1);
      }
      else {
        if (bVar1 != 3) {
          return;
        }
        iVar4 = FUN_80055824();
        if (iVar4 == 0) {
          if (((((_g_InputState & 0x50) != 0) || (iVar4 = FUN_80076d68(param_1), iVar4 == 1)) ||
              (FUN_80055e28(param_1,0), (_g_InputState & 0x50) != 0)) || ((param_1->behavior_flags & 2) == 0)
             ) {
            param_1[0x61] = 0;
            param_1->behavior_state = 0;
            param_1->action_state = 0;
            param_1->sub_action = 0;
            *param_1 = *param_1 & 3;
            FUN_80054d14(param_1,2,2);
          }
        }
        else {
          param_1[0x61] = 0;
          param_1->behavior_state = 2;
          param_1->action_state = 0;
          param_1->sub_action = 0;
          *param_1 = *param_1 & 3;
        }
      }
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 8;
      FUN_8005444c(param_1);
      FUN_80056c00(param_1,1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    g_SFXState = 0x86;
    param_1[0x61] = 0x41;
    param_1->collision_dir = 0;
    DAT_1f800207 = 0;
    param_1->physics_flag = 3;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xe0;
    param_1->collision_state = 0;
    param_1->velocity_y = param_1->rot_z * 0x10 + -0x2000;
    if (param_1->direction == 0) {
      uVar2 = 0x1000;
    }
    else {
      uVar2 = 0xf000;
    }
    param_1->anim_counter = uVar2;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    FUN_80054d14(param_1,0x14,2);
    FUN_800538e0(param_1,param_1 + 0x2c,0);
    param_1->action_state = param_1->action_state + 1;
  }
  FUN_80076d68(param_1);
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_800574e0(param_1,1);
  if (param_1->collision_state != 0) {
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x148] = 0;
    param_1->action_state = param_1->action_state + 1;
    FUN_80054d14(param_1,0x17,2);
    param_1->physics_flag = 0;
    FUN_80055d5c(param_1);
    bVar1 = FUN_80055e28(param_1,0);
    param_1->direction = bVar1 & 1;
    FUN_80054198(param_1);
    if (param_1->direction == 0) {
      _DAT_1f800194 = param_1->draw_angle;
    }
    else {
      _DAT_1f800194 = param_1->draw_angle - 0x800U & 0xfff;
    }
  }
  return;
}
