/**
 * @brief Entity enemy behavior main: entity->action_state switch, AI states
 * @note Original: func_8006A384 at 0x8006A384
 */
// Entity_Behavior_EnemyMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006a384(u8 *param_1)

{
  s8 cVar1;
  s16 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  s16 sVar7;
  
  switchparam_1->action_state {
  case 0:
    FUN_80069bec(param_1,0);
    cVar1 = param_1->action_state;
    goto LAB_8006a52c;
  case 1:
    FUN_80069ae4(param_1);
    sVar7 = param_1->timer1;
    param_1->timer1 = sVar7 + -1;
    if (sVar7 != 1) break;
    FUN_80074590(0xb,0,0);
    *param_1 = 1;
    param_1->action_state = param_1->action_state + '\x01';
LAB_8006a47c:
    iVar3 = FUN_80069948(param_1);
    if (iVar3 != 1) break;
    goto LAB_8006a490;
  case 2:
    if (param_1->collision_state != '\0') goto LAB_8006a4b8;
    FUN_80069ae4(param_1);
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
    if (param_1->move_mode == '\0') goto LAB_8006a47c;
LAB_8006a490:
    param_1->action_state = 8;
    param_1->anim_counter = 0;
    break;
  case 3:
    FUN_8006a240(param_1);
    if (param_1->collision_state == '\0') break;
LAB_8006a4b8:
    param_1->behavior_state = 2;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    break;
  case 4:
    param_1->action_state = param_1->action_state + '\x01';
    param_1->type_flags = param_1->type_flags + -0x500;
  case 5:
    *(s16 *)(param_1 + 0x66) = 2;
    param_1->type_flags = param_1->type_flags + -0x40;
    sVar7 = param_1->anim_counter;
    param_1->anim_counter = sVar7 + 0x28;
    if (0x3c < (s16)(sVar7 + 0x28)) {
      cVar1 = param_1->action_state;
      param_1->timer1 = 0;
LAB_8006a52c:
      param_1->action_state = cVar1 + '\x01';
    }
    break;
  case 6:
    param_1->event_id = 1;
    DAT_1f800252 = 1;
    uVar2 = FUN_800782b0(param_1 + 0x2c,(int)_DAT_800e7f5c->pos_x,
                         (int)*(s16 *)(_DAT_800e7f5c + 0x34));
    param_1->event_param = uVar2;
    uVar2 = FUN_80069a2c(param_1,(int)_DAT_800e7f5c->pos_x,
                         (int)*(s16 *)(_DAT_800e7f5c + 0x30),(int)*(s16 *)(_DAT_800e7f5c + 0x34)
                        );
    param_1->type_flags = uVar2;
    sVar7 = param_1->anim_counter;
    param_1->anim_counter = sVar7 + 0x32;
    if (0x1a4 < (s16)(sVar7 + 0x32)) {
      param_1->anim_counter = 0x1a4;
    }
    iVar3 = FUN_80069b6c(param_1);
    if (iVar3 != 0) goto switchD_8006a3dc_caseD_7;
    break;
  case 7:
switchD_8006a3dc_caseD_7:
    *param_1 = 2;
    param_1->state = param_1->state + '\x01';
    if ((DAT_800e7fc6 & 1) != 0) {
      DAT_800e7ef9 = 0;
    }
    param_1->pos_y = _DAT_800e7f5c->pos_x;
    *(s16 *)(param_1 + 0x32) = *(s16 *)(_DAT_800e7f5c + 0x30);
    param_1->pos_z = *(s16 *)(_DAT_800e7f5c + 0x34);
    return;
  case 8:
    DAT_1f800252 = 1;
    *param_1 = 2;
    param_1->state = param_1->state + '\x01';
    if ((DAT_800e7fc6 & 1) == 0) {
      return;
    }
    DAT_800e7ef9 = 0;
    return;
  }
  if (DAT_800e7fc6 == 0) {
    *param_1 = 2;
    param_1->state = 3;
  }
  else if (2 < (u8)param_1->action_state) {
    if ((param_1->anim_id & 1) == 0) {
      sVar7 = param_1->type_flags;
    }
    else {
      sVar7 = 0x800 - param_1->type_flags;
    }
    if (param_1->event_id == 0) {
      iVar3 = (int)param_1->anim_counter;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x3f;
      }
      iVar5 = 0;
      if (0 < iVar3 >> 6) {
        do {
          iVar4 = FUN_80083e80((int)sVar7);
          param_1->pos_y_fixed = param_1->pos_y_fixed + iVar4 * 0x400;
          iVar4 = FUN_80083f50((int)sVar7);
          iVar4 = iVar4 * 0x40 >> 4;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar4;
          param_1->scale_y = param_1->scale_y + param_1->normal_z * iVar4;
          iVar4 = FUN_80069948(param_1);
          iVar5 = iVar5 + 1;
          if (iVar4 != 0) {
            return;
          }
        } while (iVar5 < iVar3 >> 6);
      }
      uVar6 = param_1->anim_counter & 0x3f;
      if ((param_1->anim_counter & 0x3f) != 0) {
        iVar3 = FUN_80083e80((int)sVar7);
        param_1->pos_y_fixed = param_1->pos_y_fixed + iVar3 * uVar6 * 0x10;
        iVar3 = FUN_80083f50((int)sVar7);
        iVar3 = (int)(iVar3 * uVar6) >> 4;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar3;
        param_1->scale_y = param_1->scale_y + param_1->normal_z * iVar3;
        FUN_80069948();
      }
    }
    else {
      iVar3 = FUN_80083e80((int)sVar7);
      param_1->pos_y_fixed =
           param_1->pos_y_fixed + iVar3 * param_1->anim_counter * 0x10;
      iVar3 = FUN_80083f50((int)sVar7);
      iVar3 = iVar3 * param_1->anim_counter >> 4;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar5 = FUN_80083f50((int)param_1->event_param);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar5 * iVar3 >> 4);
      iVar5 = FUN_80083e80((int)param_1->event_param);
      param_1->scale_y = param_1->scale_y - (iVar5 * iVar3 >> 4);
    }
  }
  return;
}
