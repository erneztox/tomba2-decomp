/**
 * @brief Entity behavior setter variant 4: entity->state state
 * @note Original: func_80069300 at 0x80069300
 */
// Entity_BehaviorSet4



#include "tomba.h"
void FUN_80069300(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1->flags = 1;
        param_1->state = param_1->state + '\x01';
        FUN_8003116c(0x2f,param_1 + 0x2c,0xfffffff6);
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      if (*(s16 *)(param_1 + 0x6e) == 0) {
        DAT_1f800251 = DAT_1f800251 + -1;
      }
      FUN_8007ab44(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->input_flags = 0;
    FUN_8006acac(param_1);
    *param_1 = 2;
    param_1->move_mode = 0;
    param_1->state = param_1->state + '\x01';
    param_1->target_angle = param_1->rot_y;
    param_1->type_flags = 0;
    *(s16 *)(param_1 + 0x6e) = 0;
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    param_1->flags = 1;
    FUN_8006b020(param_1,2);
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 == 1) {
      FUN_80074590(0xb,0,0);
      param_1->timer1 = 0x14;
      *param_1 = 1;
      param_1->rot_x = 0;
      param_1->timer2 = 0x1e;
      param_1->behavior_state = param_1->behavior_state + '\x01';
      FUN_8006918c(param_1);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->flags = 1;
      FUN_8006923c(param_1);
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
  }
  else {
    if (bVar1 == 2) {
      param_1->behavior_state = 3;
    }
    else if (bVar1 != 3) goto LAB_80069498;
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if ((sVar2 == 1) || (param_1->move_mode != '\0')) {
      param_1->anim_counter = 0;
      *param_1 = 2;
      param_1->state = 2;
    }
  }
LAB_80069498:
  if (2 < (u8)param_1->behavior_state) {
    if ((param_1->anim_id & 1) == 0) {
      sVar2 = param_1->type_flags;
    }
    else {
      sVar2 = 0x800 - param_1->type_flags;
    }
    iVar3 = FUN_80083e80((int)sVar2);
    param_1->pos_y_fixed =
         param_1->pos_y_fixed + ((iVar3 * 0x50) / 100) * (int)param_1->anim_counter * 0x10;
    iVar3 = FUN_80083f50((int)sVar2);
    iVar3 = iVar3 * param_1->anim_counter >> 4;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar3;
    param_1->scale_y = param_1->scale_y + param_1->normal_z * iVar3;
    FUN_8006918c(param_1,0);
    iVar3 = FUN_80077acc(param_1,(int)param_1->pos_y,(int)*(s16 *)(param_1 + 0x32),
                         (int)param_1->pos_z);
    if ((iVar3 == 0) &&
       (sVar2 = param_1->timer2, param_1->timer2 = sVar2 + -1, sVar2 == 1)) {
      *param_1 = 2;
      param_1->state = 3;
    }
  }
  return;
}
