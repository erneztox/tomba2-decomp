/**
 * @brief Entity hit state: entity[0x158] ptr, checks hit reaction
 * @note Original: func_80057A68 at 0x80057A68
 */
// Entity_State_Hit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_State_Hit(u8 *param_1)

{
  u8 bVar1;
  u8 uVar2;
  int iVar3;
  s32 uVar4;
  
  iVar3 = Entity_Behavior_Hit(param_1,0);
  param_1->state_ptr = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  param_1->flag_16A = 0;
  param_1[0x181] = 0;
  uVar4 = _g_GTE_Work84;
  param_1->type_flags = 0;
  param_1->rot_z = 0;
  param_1->state_flag145 = 0;
  param_1->state_flag144 = 0;
  param_1->action_state = 0;
  param_1->sub_action = 0;
  param_1->parent = uVar4;
  bVar1 = param_1->action_flag;
  param_1->behavior_flags = param_1->direction | 2;
  if (bVar1 == 6) {
    uVar2 = 0x16;
LAB_80057bd4:
    param_1->behavior_state = uVar2;
    uVar4 = 4;
  }
  else {
    if (bVar1 < 7) {
      if (bVar1 == 3) {
        param_1->behavior_state = 8;
        uVar4 = 5;
        goto LAB_80057be4;
      }
      if (3 < bVar1) {
        uVar2 = 0x14;
        if ((bVar1 != 4) && (uVar2 = 0x15, bVar1 != 5)) {
          return 1;
        }
        goto LAB_80057bd4;
      }
      if (bVar1 != 1) {
        if (bVar1 != 2) {
          return 1;
        }
        goto LAB_80057ba8;
      }
    }
    else if (bVar1 != 9) {
      if (bVar1 < 9) {
LAB_80057ba8:
        uVar4 = 5;
        param_1->anim_counter = 0;
        param_1->behavior_state = 7;
        goto LAB_80057be4;
      }
      if (bVar1 != 0xb) {
        uVar2 = 0x15;
        if (10 < bVar1) {
          if (bVar1 != 0x81) {
            return 1;
          }
          uVar4 = 5;
          param_1->behavior_state = 0x18;
          *param_1 = 6;
          param_1->anim_counter = 0;
          param_1->action_state = 0xc;
          param_1->action_flag = param_1->action_flag & 1;
          goto LAB_80057be4;
        }
        goto LAB_80057bd4;
      }
    }
    uVar4 = 5;
    param_1->anim_counter = 0;
    param_1->behavior_state = 4;
  }
LAB_80057be4:
  Audio_PlaySoundEffect(uVar4,0,0);
  return 1;
}
