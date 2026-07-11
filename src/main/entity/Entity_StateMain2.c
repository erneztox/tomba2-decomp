/**
 * @brief Entity state main variant 2: entity->action_state dispatch
 * @note Original: func_8005CDF8 at 0x8005CDF8
 */
// Entity_StateMain2



#include "tomba.h"
void FUN_8005cdf8(int param_1)

{
  u8 bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    iVar2 = FUN_80076d68(param_1);
    iVar3 = FUN_800633b0(param_1,1);
    if (iVar3 == 0) {
      iVar3 = FUN_800557ec(param_1);
      if (iVar3 != 0) {
        param_1->direction = '\x01' - param_1->direction;
        FUN_800551c4(param_1);
        FUN_80054c08(param_1,0);
        goto LAB_8005d0a8;
      }
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
        FUN_80053670(param_1,1,1);
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
      FUN_80054198(param_1);
      FUN_80055e28(param_1,0);
      *(void*)(param_1 + 0x14a) =
           (&DAT_800a46c4)
           [(uint)param_1->direction * 0x10 + (uint)param_1->behavior_flags];
      if (param_1->flag_175 != '\0') {
        param_1->state_flag146 = 2;
        FUN_80053670(param_1,1,1);
        FUN_80054b34(param_1,1,param_1->anim_select);
        param_1->action_state = 2;
        iVar2 = FUN_800633b0(param_1,1);
        if (iVar2 == 0) {
          return;
        }
        param_1->state_flag146 = 0;
        return;
      }
      param_1->state_flag146 = 1;
      FUN_80053670(param_1,0,1);
      FUN_80054b34(param_1,0,param_1->anim_select);
      param_1->action_state = param_1->action_state + '\x01';
      iVar2 = FUN_800633b0(param_1);
      if (iVar2 != 0) goto LAB_8005d150;
      iVar2 = FUN_800557ec(param_1);
      if (iVar2 == 0) {
        return;
      }
      param_1->direction = '\x01' - param_1->direction;
      FUN_800551c4(param_1);
      FUN_80054c08(param_1,0);
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      FUN_80055e28(param_1,0);
      *(void*)(param_1 + 0x14a) =
           (&DAT_800a46c4)
           [(uint)param_1->direction * 0x10 + (uint)param_1->behavior_flags];
      FUN_80054b34(param_1,1,param_1->anim_select);
      iVar2 = FUN_800633b0(param_1,1);
      if (iVar2 != 0) goto LAB_8005d150;
      iVar2 = FUN_800557ec(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_80055704(param_1,1);
        if (iVar2 == 0) {
          param_1->combat_flag = 0;
          param_1->state_flag146 = 3;
          FUN_80053670(param_1,0,8);
          FUN_80054b34(param_1,0,param_1->anim_select);
          param_1->gte_flags = 0;
          param_1->action_state = 1;
          return;
        }
        if (0 < iVar2) {
          if (iVar2 != 2) {
            return;
          }
          FUN_80076d68(param_1);
          return;
        }
        if (iVar2 != -1) {
          return;
        }
        goto LAB_8005d144;
      }
      param_1->direction = '\x01' - param_1->direction;
      FUN_800551c4();
      FUN_80054c08(param_1,1);
      param_1->rot_z = 0;
    }
LAB_8005d0a8:
    FUN_80074590(0x1d,0,0);
    param_1->behavior_state = 6;
    param_1->sub_action = 0;
    FUN_80053d90();
  }
  return;
}
