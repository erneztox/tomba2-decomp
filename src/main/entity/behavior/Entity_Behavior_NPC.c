/**
 * @brief Entity NPC behavior: entity->state=1, dialog/interaction
 * @note Original: func_8004C930 at 0x8004C930
 */
// Entity_Behavior_NPC



/* WARNING: Removing unreachable block (ram,0x8004c9cc) */
/* WARNING: Removing unreachable block (ram,0x8004c9dc) */
/* WARNING: Removing unreachable block (ram,0x8004c9e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004c930(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
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
      iVar9 = (int)_DAT_800e7eae;
      iVar8 = (int)_DAT_800e7eb2;
      iVar7 = (int)_DAT_800e7eb6;
      param_1->timer1 = 0x1e;
      iVar5 = (int)param_1->timer1;
      iVar8 = (iVar8 - (*(short *)(param_1 + 0x32) + 200)) * 0x10;
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
      param_1->normal_x = (short)(((iVar9 - param_1->pos_y) * 0x10) / 0x1e);
      param_1->velocity_y = (short)(iVar8 / iVar5);
      param_1->normal_z = (short)(iVar7 / iVar6);
      return;
    }
    if (bVar1 == 2) {
      iVar5 = FUN_8004a3d4(param_1);
      if (iVar5 == 0) {
        return;
      }
      param_1->state = 3;
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
    bVar4 = _DAT_1f800162 < *(short *)(param_1 + 0x32);
    param_1->angle_offset = param_1->angle_offset + param_1->sprite_y;
    if (bVar4) {
      param_1->state = 2;
      param_1->behavior_state = 0;
    }
  }
  param_1->flags = 1;
LAB_8004cb94:
  FUN_80077efc(param_1);
  return;
}
