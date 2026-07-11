/**
 * @brief Entity talk behavior variant 2: entity->behavior_state=1, dialog
 * @note Original: func_8004B788 at 0x8004B788
 */
// Entity_Behavior_Talk2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004b788(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1->behavior_state;
  iVar4 = param_1->script_ptr;
  if (bVar1 == 1) {
    iVar4 = FUN_80041438(&DAT_800e7e80,(int)param_1->draw_x,0x100);
    if (iVar4 != 0) {
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
    param_1->rot_y = _DAT_800e7ed6;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800e7e85 != '\x12') {
        return;
      }
      param_1->behavior_state = 1;
      DAT_1f800137 = 2;
      uVar2 = FUN_800782b0(&DAT_800e7eac,(int)iVar4->pos_y,(int)iVar4->pos_z
                          );
      param_1->draw_x = uVar2;
      FUN_80054198(&DAT_800e7e80);
      return;
    }
  }
  else if (bVar1 == 2) {
    iVar3 = FUN_8004b528(param_1,iVar4);
    if (iVar3 == 1) {
      param_1->behavior_state = param_1->behavior_state + '\x01';
      iVar4->collision_state = 1;
    }
  }
  else if ((bVar1 == 3) && (iVar3 = FUN_8004b528(param_1,iVar4), iVar3 == 2)) {
    if ((DAT_800bf870 == '\0') &&
       ((DAT_800bf8b8 != -1 && (iVar3 = FUN_80072ddc(param_1,0x81,5,1), iVar3 != 0)))) {
      iVar3->callback = FUN_8004bb38;
      iVar3->sub_type = 0;
      iVar3->draw_y = 0;
      iVar3->flag_5E = 0;
      if (iVar3 != 0) {
        DAT_800bf88e = 0x28;
        DAT_800e7eee = 0x28;
        _DAT_800e7ef4 = iVar3;
      }
    }
    param_1->state = 3;
    iVar4->collision_state = 2;
  }
  iVar3 = _DAT_800e7f5c;
  iVar4 = _DAT_800e7f50;
  param_1->pos_y =
       (short)((*(int *)(_DAT_800e7f5c + 0x2c) + *(int *)(_DAT_800e7f50 + 0x2c)) / 2);
  *(short *)(param_1 + 0x32) = (short)((iVar3->pos_y_fixed + iVar4->pos_y_fixed) / 2);
  param_1->pos_z = (short)((iVar3->scale_y + iVar4->scale_y) / 2);
  if ((param_1->alloc_flags & 0x7f) != 0) {
    FUN_800517f8(param_1);
  }
  param_1->flags = 1;
  FUN_80077efc(param_1);
  return;
}
