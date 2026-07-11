/**
 * @brief Entity turn state: entity->action_state state, turning around
 * @note Original: func_80064BA0 at 0x80064BA0
 */
// Entity_State_Turn



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80064ba0(int param_1)

{
  u8 bVar1;
  int iVar2;
  u16 local_18;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      FUN_8006483c(param_1,0);
      if (param_1->collision_state == '\0') {
        if (0x2800 < param_1->velocity_y) {
          param_1->anim_counter = 0;
          param_1->state_ptr = 0;
          param_1->action_flag = 0;
          param_1->angle_offset = param_1->velocity_y;
          FUN_80056d44(param_1,0);
          param_1->velocity_y = param_1->angle_offset;
        }
      }
      else {
        param_1->velocity_y = 0;
        param_1->angle_offset = 0;
        param_1->state_flag144 = 0;
        param_1->state_ptr = 0;
        param_1->action_flag = 0;
        param_1->sub_action = 0;
        param_1->anim_counter = 0;
        param_1->state_flag145 = 0;
        FUN_8005314c();
        param_1->behavior_state = 2;
        param_1->action_state = 2;
        FUN_80054d14(param_1,0x17,1);
      }
      FUN_800551c4(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->type_flags = 0;
    FUN_80054d14(param_1,0x1a,0);
    *(u8 *)(param_1 + 0x169) = 0x18;
    param_1->sub_action = 0;
    *(u8 *)(param_1 + 0x168) = 1;
    param_1->action_state = param_1->action_state + '\x01';
    if ((*(uint *)(param_1 + 0x17c) & 0x4400200) == 0x200) {
      param_1->action_flag = 0;
      param_1->state_ptr = 0;
      *(s16 *)(param_1 + 0x32) = param_1->draw_pos_y + *(s16 *)(param_1 + 100);
      FUN_80056d44(param_1,0);
      return;
    }
  }
  iVar2 = param_1->state_ptr;
  if (iVar2 == 1) {
    local_18 = FUN_800634a8(param_1);
  }
  else {
    switch(g_GameState) {
    case 0:
      local_18 = func_0x8010b600(param_1);
      break;
    case 1:
      local_18 = func_0x8010ac3c(param_1);
      break;
    case 4:
      local_18 = func_0x801161ec(param_1);
      break;
    case 6:
      local_18 = func_0x80114784(param_1);
      break;
    case 8:
      local_18 = func_0x801136c4(param_1);
      break;
    case 10:
      local_18 = func_0x8010b42c(param_1);
      break;
    case 0xc:
      local_18 = func_0x8010cda4(param_1);
    }
  }
  if ((local_18 & 0x40) == 0) {
    if ((local_18 & (_g_InputMask | 0x10)) != 0) {
      if (iVar2 != 1) {
        iVar2->collision_state = 0;
      }
      param_1->sub_action = 0;
      param_1->action_state = param_1->action_state + '\x01';
    }
  }
  else {
    if (iVar2 != 1) {
      iVar2->collision_state = 0;
    }
    param_1->action_flag = 0;
    param_1->state_ptr = 0;
    FUN_80056d44(param_1,0);
  }
  return;
}
