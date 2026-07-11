/**
 * @brief Entity behavior main: primary behavior dispatcher
 * @note Original: func_8005D16C at 0x8005D16C
 */
// Entity_BehaviorMain



#include "tomba.h"
void FUN_8005d16c(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  FUN_80055e28(param_1,0);
  if ((param_1->sprite_cmd - 1 < 2) && (param_1->action_state != '\x02')) {
    if ((param_1->physics_flag == '\0') && (*(s8*)(param_1 + 0x61) == '\0')) {
      FUN_80054650(param_1,0);
    }
    else {
      param_1->input_flags = param_1->input_flags & 0xfb;
    }
  }
  else {
    FUN_80055fbc(param_1,param_1->behavior_flags);
    FUN_80056b48(param_1,1);
  }
  FUN_80055d5c(param_1);
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(u8 *)(param_1 + 0x181) = 0;
      DAT_1f800252 = 0;
      param_1->rot_z = 0;
      param_1->combat_flag = 0;
      param_1->gte_flags = 0;
      param_1->direction = param_1->behavior_flags & 1;
      FUN_800551c4(param_1);
      if (param_1->flag_175 == '\0') {
        param_1->state_flag146 = 1;
        FUN_80053670(param_1,0,0);
        FUN_8005490c(param_1,0,0);
        param_1->action_state = param_1->action_state + '\x01';
      }
      else {
        param_1->state_flag146 = 2;
        FUN_80053670(param_1,1,0);
        FUN_8005490c(param_1,1,1);
        param_1->action_state = 2;
      }
      if (param_1->sprite_cmd - 1 < 2) {
        return;
      }
      FUN_800574e0(param_1,0);
      return;
    }
    if (bVar1 != 2) {
      return;
    }
    *(u8 *)(param_1 + 0x181) = 0;
    FUN_80076d68(param_1);
    FUN_800574e0(param_1,0);
    param_1->direction = param_1->behavior_flags & 1;
    FUN_8005490c(param_1,1,1);
    FUN_800551c4(param_1);
    if (param_1->collision_state == '\0') {
      iVar2 = FUN_80055704(param_1,1);
      if (iVar2 != -1) {
        if (iVar2 != 0) {
          return;
        }
        DAT_1f800252 = 0;
        param_1->state_flag146 = 3;
        FUN_80053670(param_1,0,8);
        FUN_8005490c(param_1,0,0);
        param_1->gte_flags = 0;
        param_1->action_state = 1;
        return;
      }
      param_1->behavior_state = 2;
      param_1->action_state = 1;
      goto LAB_8005d510;
    }
    iVar2 = FUN_800532a0(param_1);
    if (iVar2 == 0) {
      param_1->behavior_state = 5;
      param_1->sub_action = 0;
      *(u8 *)(param_1 + 0x149) = *(u8 *)(param_1 + 0x149) & 1 | 2;
      return;
    }
    goto LAB_8005d488;
  }
  iVar2 = 0;
  if (param_1->sub_state2 != '\x02') {
    iVar2 = FUN_80076d68(param_1);
  }
  if (param_1->sprite_cmd - 1 < 2) {
    if (DAT_1f800252 != '\0') {
      if ((param_1->entity_flags & 0x40) != 0) {
        *(u8 *)(param_1 + 0x178) = 0xc;
      }
      goto LAB_8005d368;
    }
  }
  else {
LAB_8005d368:
    FUN_800574e0(param_1,0);
  }
  if (param_1->collision_state == '\0') {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_8005376c(param_1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_80055704(param_1,0);
    if (iVar2 == 2) {
      param_1->state_flag146 = 2;
      FUN_80053670(param_1,1,0);
      param_1->action_state = param_1->action_state + '\x01';
      return;
    }
    param_1->behavior_state = 2;
    param_1->action_state = 1;
LAB_8005d510:
    param_1->state_flag146 = 0;
    FUN_80054d14(param_1,0x14,2);
    return;
  }
  iVar2 = FUN_800532a0(param_1);
  if (iVar2 == 0) {
    param_1->behavior_state = 5;
    *(u8 *)(param_1 + 0x149) = *(u8 *)(param_1 + 0x149) & 1 | 2;
    param_1->sub_action = 0;
    bVar1 = param_1->behavior_flags & 0xe;
    param_1->behavior_flags = bVar1;
    param_1->behavior_flags = bVar1 | param_1->direction;
    return;
  }
LAB_8005d488:
  param_1->state_flag146 = 0;
  return;
}
