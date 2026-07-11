/**
 * @brief Entity NPC behavior: entity->state=1, dialog/interaction
 * @note Original: func_8004C930 at 0x8004C930
 */
// Entity_Behavior_NPC



/* WARNING: Removing unreachable block (ram,0x8004c9cc) */
/* WARNING: Removing unreachable block (ram,0x8004c9dc) */
/* WARNING: Removing unreachable block (ram,0x8004c9e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8004c930(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  s16 sVar3;
  s32 bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      FUN_8004a828(param_1);
      param_1->state = param_1->state + '\x01';
      iVar9 = (int)_g_CameraTargetX;
      iVar8 = (int)_g_CameraTargetY;
      iVar7 = (int)_g_CameraTargetZ;
      param_1->timer1 = 0x1e;
      iVar5 = (int)param_1->timer1;
      iVar8 = (iVar8 - (*(s16 *)(param_1 + 0x32) + 200)) * 0x10;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar8 == -0x80000000)) {
        trap(0x1800);
      }
      iVar6 = (int)param_1->timer1;
      iVar7 = (iVar7 - param_1->pos_z) * 0x10;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->angle_offset = 0xd800;
      param_1->sprite_y = 0x280;
      param_1->normal_x = (s16)(((iVar9 - param_1->pos_y) * 0x10) / 0x1e);
      param_1->velocity_y = (s16)(iVar8 / iVar5);
      param_1->normal_z = (s16)(iVar7 / iVar6);
      return;
    }
    if (bVar1 == 2) {
      iVar5 = FUN_8004a3d4(param_1);
      if (iVar5 == 0) {
        return;
      }
      param_1->state = STATE_DEAD;
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_8007a624(param_1);
    return;
  }
  if (param_1->behavior_state == '\0') {
    sVar2 = param_1->angle_offset;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * 0x1000;
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x1000;
    param_1->scale_y = param_1->scale_y + param_1->normal_z * 0x1000;
    sVar3 = param_1->timer1;
    param_1->angle_offset = param_1->angle_offset + param_1->sprite_y;
    param_1->timer1 = sVar3 + -1;
    param_1->pos_y_fixed = param_1->pos_y_fixed + sVar2 * 0x100;
    if (sVar3 == 1) {
      *param_1 = 1;
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
  }
  else {
    if (param_1->behavior_state != '\x01') {
      param_1->flags = 1;
      goto LAB_8004cb94;
    }
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->angle_offset * 0x100;
    bVar4 = _g_PlayerPosY < *(s16 *)(param_1 + 0x32);
    param_1->angle_offset = param_1->angle_offset + param_1->sprite_y;
    if (bVar4) {
      param_1->state = STATE_FINISH;
      param_1->behavior_state = 0;
    }
  }
  param_1->flags = 1;
LAB_8004cb94:
  FUN_80077efc(param_1);
  return;
}
