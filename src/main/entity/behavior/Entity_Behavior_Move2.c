/**
 * @brief Entity move behavior variant 2: entity->behavior_state state
 * @note Original: func_80068BE8 at 0x80068BE8
 */
// Entity_Behavior_Move2



#include "tomba.h"
void FUN_80068be8(int param_1)

{
  s16 sVar1;
  s16 uVar2;
  int iVar3;
  u8 bVar4;
  int iVar5;
  
  bVar4 = param_1->behavior_state;
  if (bVar4 != 1) {
    if (1 < bVar4) {
      if (bVar4 == 2) {
        return;
      }
      if (bVar4 != 3) {
        return;
      }
      func_0x8012c7cc(param_1);
      iVar3 = FUN_80077a4c(param_1,0,0,0);
      if (iVar3 == 0) {
        param_1->state = 3;
        return;
      }
      bVar4 = param_1->sub_type;
      goto joined_r0x80068de0;
    }
    if (bVar4 != 0) {
      return;
    }
    FUN_80074590((&DAT_800a4a58)[param_1->sub_type & 0x7f],0,0);
    bVar4 = param_1->sub_type & 0x7f;
    if ((bVar4 == 7) || (bVar4 == 0xb)) {
      param_1->behavior_state = 3;
      param_1->action_state = 0;
      func_0x8012c7cc();
      return;
    }
    param_1->timer1 = 0x3c;
    param_1->velocity_y = 0xe000;
    param_1->anim_counter = 0xffec;
    param_1->behavior_state = param_1->behavior_state + '\x01';
  }
  sVar1 = param_1->velocity_y + 0x200;
  param_1->velocity_y = sVar1;
  param_1->rot_z = param_1->rot_z + -0x200;
  if (0x3000 < sVar1) {
    param_1->velocity_y = 0x3000;
  }
  param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  iVar3 = FUN_80083f50((int)*(s16 *)(param_1 + 0xbe));
  iVar5 = iVar3 * param_1->anim_counter >> 4;
  iVar3 = param_1->normal_z * iVar5;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * iVar5;
  param_1->scale_y = param_1->scale_y + iVar3;
  if ((param_1->anim_id & 8) == 0) {
    uVar2 = FUN_80085690(-iVar3);
    param_1->rot_y = uVar2;
  }
  iVar3 = FUN_80069858(param_1,1,0);
  if ((iVar3 != 0) ||
     (sVar1 = param_1->timer1, param_1->timer1 = sVar1 + -1, sVar1 == 1)) {
    FUN_80074590(0x1b,0,0);
    FUN_800315d4(param_1 + 0x2c);
    param_1->state = 3;
  }
  iVar3 = FUN_80077a4c(param_1,0,0,0);
  if (iVar3 == 0) {
    param_1->state = 3;
    return;
  }
  bVar4 = param_1->sub_type;
joined_r0x80068de0:
  if ((bVar4 & 0x80) == 0) {
    FUN_800518fc(param_1);
  }
  else {
    FUN_800517f8(param_1);
  }
  return;
}
