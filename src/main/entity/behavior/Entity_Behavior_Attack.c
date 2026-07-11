/**
 * @brief Entity attack behavior main: entity->action_state switch, attack types
 * @note Original: func_8006B494 at 0x8006B494
 */
// Entity_Behavior_Attack



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_Behavior_Attack(u8 *param_1)

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
    Entity_Behavior_Attack2(param_1,0);
    param_1->action_state = param_1->action_state + '\x01';
    break;
  case 1:
    Entity_InitTrail(param_1,0);
    sVar7 = param_1->timer1;
    param_1->timer1 = sVar7 + -1;
    if (sVar7 == 1) {
      Audio_PlaySoundEffect(0xb,0,0);
      *param_1 = 1;
      param_1->rot_x = 0;
      param_1->action_state = param_1->action_state + '\x01';
      iVar2 = Entity_Behavior_Enemy(param_1);
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
    Entity_Behavior_Fall(param_1);
    Entity_SetState4(param_1);
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
    Entity_SetState4(param_1);
    sVar7 = Entity_CalcAngleToTarget_2(param_1,*(s32 *)(_DAT_800e7f5c + 0x2c),
                         _DAT_800e7f5c->pos_y_fixed,_DAT_800e7f5c->scale_y
                        );
    uVar1 = Math_ApproachAngle_2((int)sVar7,(int)param_1->type_flags,(int)*(s16 *)(param_1 + 0x70))
    ;
    param_1->type_flags = uVar1;
    *(s16 *)(param_1 + 0x70) = *(s16 *)(param_1 + 0x70) + param_1->anim_counter;
    break;
  case 6:
    uVar1 = Entity_CalcAngleToTarget_2(param_1,*(s32 *)(_DAT_800e7f5c + 0x2c),
                         _DAT_800e7f5c->pos_y_fixed,_DAT_800e7f5c->scale_y
                        );
    param_1->type_flags = uVar1;
    param_1->event_id = 1;
    uVar1 = Math_CalcAngle2D(param_1 + 0x2c,(int)_DAT_800e7f5c->pos_x,
                         (int)*(s16 *)(_DAT_800e7f5c + 0x34));
    param_1->event_param = uVar1;
    sVar7 = param_1->anim_counter;
    param_1->anim_counter = sVar7 + 0x32;
    if (0x1a4 < (s16)(sVar7 + 0x32)) {
      param_1->anim_counter = 0x1a4;
    }
    iVar2 = Entity_CheckProximity(param_1);
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
    iVar2 = Math_Cos((int)sVar7);
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
          iVar4 = Math_CosGTE((int)sVar7);
          iVar4 = iVar4 * 0x40 >> 4;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar4;
          param_1->scale_y = param_1->scale_y + param_1->normal_z * iVar4;
          iVar4 = Entity_Behavior_Enemy(param_1);
          iVar6 = iVar6 + 1;
          if (iVar4 != 0) {
            return;
          }
        } while (iVar6 < iVar3 >> 6);
      }
      uVar5 = param_1->anim_counter & 0x3f;
      if ((param_1->anim_counter & 0x3f) != 0) {
        param_1->pos_y_fixed = param_1->pos_y_fixed + iVar2 * uVar5 * 0x10;
        iVar2 = Math_CosGTE((int)sVar7);
        iVar2 = (int)(iVar2 * uVar5) >> 4;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar2;
        param_1->scale_y = param_1->scale_y + param_1->normal_z * iVar2;
        Entity_Behavior_Enemy();
      }
    }
    else {
      param_1->pos_y_fixed =
           param_1->pos_y_fixed + iVar2 * param_1->anim_counter * 0x10;
      iVar2 = Math_CosGTE((int)sVar7);
      iVar2 = iVar2 * param_1->anim_counter >> 4;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar3 = Math_CosGTE((int)param_1->event_param);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * iVar2 >> 4);
      iVar3 = Math_Cos((int)param_1->event_param);
      param_1->scale_y = param_1->scale_y - (iVar3 * iVar2 >> 4);
    }
  }
  return;
}
