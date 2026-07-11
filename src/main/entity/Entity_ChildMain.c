/**
 * @brief Entity child main: manages child entity lifecycle (242L)
 * @note Original: func_8006F2D0 at 0x8006F2D0
 */
// Entity_ChildMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006f2d0(int param_1)

{
  short *psVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  
  bVar7 = param_1->state;
  if (bVar7 != 1) {
    if (1 < bVar7) {
      if (bVar7 == 2) {
        param_1->state = 3;
        DAT_800bf840 = 0;
        return;
      }
      if (bVar7 != 3) {
        DAT_800bf840 = 0;
        return;
      }
      FUN_8007a624(param_1);
      DAT_800bf840 = 0;
      return;
    }
    if (bVar7 != 0) {
      DAT_800bf840 = 0;
      return;
    }
    param_1->counter1 = 2;
    param_1->flags = 0;
    param_1->collision_dir = 0;
    if (_DAT_800ed098 < 2) {
      param_1->state = 3;
      DAT_800bf840 = 0;
      return;
    }
    param_1->counter2 = 2;
    param_1->state = param_1->state + '\x01';
    iVar5 = _DAT_800ecf5c;
    param_1->render_flags = 0xf;
    iVar10 = 0;
    param_1->sprite_flags = 0;
    param_1->rot_x = 0;
    param_1->rot_y = 0;
    param_1->rot_z = 0;
    if (param_1->counter1 != '\0') {
      puVar9 = &DAT_800a4ba8;
      iVar8 = param_1;
      do {
        iVar10 = iVar10 + 1;
        iVar4 = FUN_8007aae8();
        iVar8->sprite_ptr1 = iVar4;
        *(undefined2 *)(iVar4 + 6) = 0xffff;
        **(undefined2 **)(iVar8 + 0xc0) = *puVar9;
        *(undefined2 *)(iVar8->sprite_ptr1 + 2) = puVar9->flags;
        *(undefined2 *)(iVar8->sprite_ptr1 + 4) = puVar9->kind;
        *(undefined2 *)(iVar8->sprite_ptr1 + 8) = 0;
        *(undefined2 *)(iVar8->sprite_ptr1 + 10) = 0;
        *(undefined2 *)(iVar8->sprite_ptr1 + 0xc) = 0;
        psVar1 = puVar9 + 3;
        puVar9 = puVar9 + 4;
        *(int *)(iVar8->sprite_ptr1 + 0x40) = iVar5 + *(int *)(*psVar1 * 4 + iVar5 + 4);
        iVar8 = iVar8 + 4;
      } while (iVar10 < (int)(uint)param_1->counter1);
    }
    param_1->parent = 0;
    param_1->script_ptr = 0;
    param_1->anim_id = 0xff;
    DAT_800bf840 = 0;
    return;
  }
  if ((DAT_1f800137 != '\0') || (DAT_800bf80d != '\0')) {
    iVar5 = param_1->script_ptr;
    if (iVar5 != 0) {
      if (iVar5->state < 2) {
        iVar5->state = 3;
      }
      param_1->script_ptr = 0;
    }
    iVar5 = param_1->parent;
    if (iVar5 != 0) {
      if (iVar5->state < 2) {
        iVar5->state = 3;
      }
      param_1->parent = 0;
    }
    FUN_8006f04c();
    DAT_800bf840 = 0;
    return;
  }
  if (((DAT_800e7ea9 == '\0') || (DAT_800e7fea != '\0')) && (DAT_800e8001 == '\0')) {
    iVar5 = param_1->script_ptr;
    if (iVar5 != 0) {
      if (iVar5->state < 2) {
        iVar5->state = 3;
        param_1->script_ptr = 0;
      }
      param_1->script_ptr = 0;
    }
    param_1->flags = 0;
    goto LAB_8006f87c;
  }
  param_1->pos_y = _DAT_800e7eae;
  *(short *)(param_1 + 0x32) = _DAT_800e7eb2 + -300;
  param_1->pos_z = _DAT_800e7eb6;
  param_1->collision_dir = DAT_800e7eaa;
  if ((_DAT_1f80018e & 0x1030) == 0) {
    if (((int)_DAT_800e7fec & 0xc000U) == 0xc000) {
      FUN_8004766c(param_1);
      if ((_DAT_1f8001a8 & 2) == 0) {
        if (((_DAT_1f8001a8 & 4) == 0) || (iVar5 = FUN_80047b5c(param_1,0), iVar5 == 0))
        goto LAB_8006f6c8;
        *(undefined2 *)(param_1->sprite_ptr2 + 10) = _DAT_1f8001a2;
        *(undefined2 *)(param_1->sprite_ptr2 + 0xc) = 0xe00;
        param_1->flags = 1;
      }
      else {
        iVar5 = FUN_80047b5c(param_1,1);
        if (iVar5 == 0) {
LAB_8006f6c8:
          param_1->flags = 0;
        }
        else {
          *(undefined2 *)(param_1->sprite_ptr2 + 10) = _DAT_1f8001a2;
          *(undefined2 *)(param_1->sprite_ptr2 + 0xc) = 0x200;
          param_1->flags = 2;
        }
      }
    }
  }
  else if ((_DAT_1f80018e & 0x1000) == 0) {
    if ((_DAT_1f80018e & 0x20) == 0) {
      param_1->flags = 1;
      *(short *)(param_1->sprite_ptr2 + 10) = _DAT_1f80018c + 0x800;
      *(undefined2 *)(param_1->sprite_ptr2 + 0xc) = 0xe00;
    }
    else {
      param_1->flags = 2;
      *(short *)(param_1->sprite_ptr2 + 10) = _DAT_1f80018c;
      *(undefined2 *)(param_1->sprite_ptr2 + 0xc) = 0x200;
    }
  }
  else {
    if ((_DAT_1f80018e & 0x100) == 0) {
      *(undefined2 *)(param_1->sprite_ptr2 + 0xc) = 0xe00;
      uVar3 = 1;
    }
    else {
      *(undefined2 *)(param_1->sprite_ptr2 + 0xc) = 0x200;
      uVar3 = 2;
    }
    param_1->flags = uVar3;
    *(undefined2 *)(param_1->sprite_ptr2 + 10) = _DAT_1f800194;
  }
  if (param_1->flags == '\0') {
    iVar5 = param_1->script_ptr;
    if (iVar5 == 0) goto LAB_8006f87c;
    if (iVar5->state < 2) {
      iVar5->state = 3;
    }
  }
  else {
    if (DAT_800e7fc7 == '\0') {
      *(undefined2 *)(param_1->sprite_ptr1 + 8) = 0x200;
      *(short *)(param_1->sprite_ptr1 + 10) = _DAT_800e7fc0;
    }
    else {
      *(undefined2 *)(param_1->sprite_ptr1 + 8) = 0xe00;
      *(short *)(param_1->sprite_ptr1 + 10) = _DAT_800e7fc0 + 0x800;
    }
    if (*(short *)(param_1->sprite_ptr2 + 0xc) == 0xe00) {
      *(undefined2 *)(param_1->sprite_ptr1 + 2) = DAT_800a4baa;
      *(undefined2 *)(param_1->sprite_ptr2 + 2) = DAT_800a4bb2;
    }
    else {
      *(undefined2 *)(param_1->sprite_ptr1 + 2) = DAT_800a4bb2;
      *(undefined2 *)(param_1->sprite_ptr2 + 2) = DAT_800a4baa;
    }
    FUN_8006f138(param_1);
    iVar5 = FUN_8006eff4(param_1->flags - 1);
    if (iVar5 == 0) {
      if (param_1->script_ptr == 0) {
        uVar6 = FUN_8007e038(param_1->flags - 1,0);
        param_1->script_ptr = uVar6;
        FUN_8006f02c(param_1->flags - 1);
        goto LAB_8006f87c;
      }
      if (*(byte *)(param_1->script_ptr + 4) < 2) goto LAB_8006f87c;
    }
    else {
      iVar5 = param_1->script_ptr;
      if (iVar5 == 0) goto LAB_8006f87c;
      if (iVar5->state < 2) {
        iVar5->state = 3;
      }
    }
  }
  param_1->script_ptr = 0;
LAB_8006f87c:
  FUN_8006f04c();
  bVar2 = true;
  if ((DAT_800e7ea9 == '\0') && (bVar2 = false, DAT_800bf840 == 0x47)) {
    bVar2 = true;
  }
  if (((((param_1->flags == '\0') && (bVar2)) && (DAT_800e7fea == '\0')) &&
      ((bVar7 = DAT_800bf840 & 0xf, (DAT_800bf840 & 0x40) != 0 &&
       (iVar5 = FUN_8006eff4(bVar7), iVar5 == 0)))) && ((DAT_800e7ee1 & 1) == 0)) {
    iVar5 = param_1->parent;
    if (iVar5 == 0) {
      uVar6 = FUN_8007e038(bVar7,0);
      param_1->parent = uVar6;
      FUN_8006f02c(bVar7);
      param_1->anim_id = bVar7;
      DAT_800bf840 = 0;
      return;
    }
    if (iVar5->state < 2) {
      if (param_1->anim_id == bVar7) {
        DAT_800bf840 = 0;
        return;
      }
      iVar5->state = 3;
    }
  }
  else {
    iVar5 = param_1->parent;
    if (iVar5 == 0) {
      DAT_800bf840 = 0;
      return;
    }
    if (iVar5->state < 2) {
      iVar5->state = 3;
    }
  }
  param_1->parent = 0;
  DAT_800bf840 = 0;
  return;
}
