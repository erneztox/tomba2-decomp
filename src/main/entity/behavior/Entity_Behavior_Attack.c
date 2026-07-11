/**
 * @brief Entity attack behavior main: entity->action_state switch, attack types
 * @note Original: func_8006B494 at 0x8006B494
 */
// Entity_Behavior_Attack



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006b494(u8 *param_1)

{
  s16 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  s16 sVar7;
  
  switchparam_1->action_state {
  case 0:
    FUN_8006b124(param_1,0);
    param_1->action_state = param_1->action_state + '\x01';
    break;
  case 1:
    FUN_8006b020(param_1,0);
    sVar7 = param_1->timer1;
    param_1->timer1 = sVar7 + -1;
    if (sVar7 == 1) {
      FUN_80074590(0xb,0,0);
      *param_1 = 1;
      param_1->rot_x = 0;
      param_1->action_state = param_1->action_state + '\x01';
      iVar2 = FUN_8006b390(param_1);
      if ((iVar2 != 0) && (param_1->kind == '\x04')) {
        param_1->move_mode = 2;
        param_1->state = STATE_FINISH;
      }
    }
    break;
  case 2:
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
    *(s16 *)(param_1 + 0x66) = 0;
    if (1 < (u8)param_1->move_mode) {
      param_1->anim_counter = 0;
    }
    break;
  case 3:
    FUN_8006b1fc(param_1);
    FUN_8006b0d8(param_1);
    break;
  case 4:
    param_1->action_state = param_1->action_state + '\x01';
    *(s16 *)(param_1 + 0x70) = 0x40;
  case 5:
    if ((param_1->move_mode == '\x01') &&
       (sVar7 = param_1->timer2, param_1->timer2 = sVar7 + -1, sVar7 == 1)) {
      param_1->move_mode = 0;
      param_1->timer2 = 2;
    }
    sVar7 = param_1->anim_counter;
    param_1->anim_counter = sVar7 + 0x12;
    if (0x50 < (s16)(sVar7 + 0x12)) {
      param_1->move_mode = 2;
      param_1->timer1 = 0;
      param_1->action_state = param_1->action_state + '\x01';
    }
    FUN_8006b0d8(param_1);
    sVar7 = FUN_80069a2c(param_1,*(s32 *)(_DAT_800e7f5c + 0x2c),
                         _DAT_800e7f5c->pos_y_fixed,_DAT_800e7f5c->scale_y
                        );
    uVar1 = FUN_800776f8((int)sVar7,(int)param_1->type_flags,(int)*(s16 *)(param_1 + 0x70))
    ;
    param_1->type_flags = uVar1;
    *(s16 *)(param_1 + 0x70) = *(s16 *)(param_1 + 0x70) + param_1->anim_counter;
    break;
  case 6:
    uVar1 = FUN_80069a2c(param_1,*(s32 *)(_DAT_800e7f5c + 0x2c),
                         _DAT_800e7f5c->pos_y_fixed,_DAT_800e7f5c->scale_y
                        );
    param_1->type_flags = uVar1;
    param_1->event_id = 1;
    uVar1 = FUN_800782b0(param_1 + 0x2c,(int)_DAT_800e7f5c->pos_x,
                         (int)*(s16 *)(_DAT_800e7f5c + 0x34));
    param_1->event_param = uVar1;
    sVar7 = param_1->anim_counter;
    param_1->anim_counter = sVar7 + 0x32;
    if (0x1a4 < (s16)(sVar7 + 0x32)) {
      param_1->anim_counter = 0x1a4;
    }
    iVar2 = FUN_80069b6c(param_1);
    if (iVar2 != 0) goto switchD_8006b4f0_caseD_7;
    break;
  case 7:
switchD_8006b4f0_caseD_7:
    param_1->flags = 0;
    *param_1 = 2;
    param_1->state = param_1->state + '\x01';
    *(s16 *)(param_1 + 0x6e) = 1;
    param_1->pos_y = _g_CameraTargetX;
    *(s16 *)(param_1 + 0x32) = _g_CameraTargetY;
    DAT_1f800231 = DAT_1f800231 + -1;
    param_1->pos_z = _g_CameraTargetZ;
    return;
  }
  if (2 < (u8)param_1->action_state) {
    param_1->rot_z = param_1->rot_z + 0x280;
    if ((param_1->anim_id & 1) == 0) {
      sVar7 = param_1->type_flags;
    }
    else {
      sVar7 = 0x800 - param_1->type_flags;
    }
    iVar2 = FUN_80083e80((int)sVar7);
    iVar2 = (iVar2 * 0x50) / 100;
    if (param_1->event_id == 0) {
      iVar3 = (int)param_1->anim_counter;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x3f;
      }
      iVar6 = 0;
      if (0 < iVar3 >> 6) {
        do {
          param_1->pos_y_fixed = param_1->pos_y_fixed + iVar2 * 0x400;
          iVar4 = FUN_80083f50((int)sVar7);
          iVar4 = iVar4 * 0x40 >> 4;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar4;
          param_1->scale_y = param_1->scale_y + param_1->normal_z * iVar4;
          iVar4 = FUN_8006b390(param_1);
          iVar6 = iVar6 + 1;
          if (iVar4 != 0) {
            return;
          }
        } while (iVar6 < iVar3 >> 6);
      }
      uVar5 = param_1->anim_counter & 0x3f;
      if ((param_1->anim_counter & 0x3f) != 0) {
        param_1->pos_y_fixed = param_1->pos_y_fixed + iVar2 * uVar5 * 0x10;
        iVar2 = FUN_80083f50((int)sVar7);
        iVar2 = (int)(iVar2 * uVar5) >> 4;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar2;
        param_1->scale_y = param_1->scale_y + param_1->normal_z * iVar2;
        FUN_8006b390();
      }
    }
    else {
      param_1->pos_y_fixed =
           param_1->pos_y_fixed + iVar2 * param_1->anim_counter * 0x10;
      iVar2 = FUN_80083f50((int)sVar7);
      iVar2 = iVar2 * param_1->anim_counter >> 4;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar3 = FUN_80083f50((int)param_1->event_param);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * iVar2 >> 4);
      iVar3 = FUN_80083e80((int)param_1->event_param);
      param_1->scale_y = param_1->scale_y - (iVar3 * iVar2 >> 4);
    }
  }
  return;
}
