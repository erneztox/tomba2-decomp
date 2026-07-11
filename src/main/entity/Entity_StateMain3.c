/**
 * @brief Entity state main variant 3: complex state dispatch
 * @note Original: func_80057FD4 at 0x80057FD4
 */
// Entity_StateMain3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80057fd4(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  ushort uVar11;
  int *piVar12;
  
  iVar5 = _DAT_800ed014;
  uVar11 = param_1->entity_flags & 0xf;
  switch(uVar11) {
  default:
    uVar10 = 0x11;
    puVar6 = (undefined2 *)&DAT_800a3fa8;
    break;
  case 1:
    uVar10 = 0x11;
    puVar6 = (undefined2 *)0x800a4030;
    break;
  case 2:
    uVar10 = 0x13;
    puVar6 = (undefined2 *)0x800a40c8;
    break;
  case 3:
  case 10:
    uVar10 = 0x11;
    puVar6 = (undefined2 *)0x800a4160;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar10 = 0x11;
    puVar6 = (undefined2 *)0x800a41e8;
    break;
  case 9:
    uVar10 = 0x11;
    puVar6 = &DAT_800a4270;
  }
  piVar12 = (int *)(_DAT_800ed014 + 4);
  uVar9 = (undefined1)uVar10;
  if ((int)(uVar10 - param_1->counter2) < 1) {
    iVar8 = 0;
    iVar4 = param_1;
    if (uVar10 != 0) {
      do {
        puVar3 = *(undefined2 **)(iVar4 + 0xc0);
        iVar8 = iVar8 + 1;
        puVar3->sub_type = *puVar6;
        *puVar3 = puVar6->flags;
        puVar3->flags = puVar6->kind;
        uVar2 = puVar6->sub_type;
        puVar6 = puVar6 + 4;
        puVar3[0x1c] = 0x1000;
        puVar3[0x1d] = 0x1000;
        puVar3[0x1e] = 0x1000;
        puVar3->state = 0;
        puVar3->behavior_state = 0;
        puVar3->action_state = 0;
        puVar3->kind = uVar2;
        puVar3->prev = iVar5 + *piVar12;
        piVar12 = piVar12 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar8 < (int)uVar10);
    }
    if (param_1->counter2 == uVar10) goto LAB_80058268;
    if (uVar10 < param_1->counter2) {
      iVar5 = uVar10 * 4 + param_1;
      do {
        _DAT_800ed098 = _DAT_800ed098 + 1;
        puVar1 = (undefined4 *)(_DAT_800e7e74 + -4);
        _DAT_800e7e74 = _DAT_800e7e74 + -4;
        *puVar1 = iVar5->sprite_ptr1;
        uVar10 = uVar10 + 1;
        iVar5 = iVar5 + 4;
      } while ((int)uVar10 < (int)(uint)param_1->counter2);
    }
  }
  else {
    iVar8 = 0;
    iVar7 = 0;
    iVar4 = param_1;
    if (uVar10 != 0) {
      do {
        if (iVar7 < (int)(uint)param_1->counter2) {
          puVar3 = *(undefined2 **)(iVar4 + 0xc0);
        }
        else {
          puVar3 = (undefined2 *)FUN_8007aae8();
          *(undefined2 **)(iVar4 + 0xc0) = puVar3;
          if (uVar11 == 2) {
            uVar11 = 0;
            iVar8 = 0x15;
          }
        }
        iVar7 = iVar7 + 1;
        puVar3->sub_type = *puVar6;
        *puVar3 = puVar6->flags;
        puVar3->flags = puVar6->kind;
        uVar2 = puVar6->sub_type;
        puVar3[0x1c] = 0x1000;
        puVar3[0x1d] = 0x1000;
        puVar3[0x1e] = 0x1000;
        puVar3->state = 0;
        puVar3->behavior_state = 0;
        puVar3->action_state = 0;
        puVar3->kind = uVar2;
        puVar3->prev = iVar5 + piVar12[iVar8];
        puVar6 = puVar6 + 4;
        iVar4 = iVar4 + 4;
        iVar8 = iVar8 + 1;
      } while (iVar7 < (int)uVar10);
      param_1->counter2 = uVar9;
      goto LAB_80058268;
    }
  }
  param_1->counter2 = uVar9;
LAB_80058268:
  if ((param_1->entity_flags & 0x200) != 0) {
    *(undefined4 *)(param_1->sprite_ptr1 + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 200) + 0x40) = 0;
    *(undefined4 *)(param_1->anim_ptr + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xf4) + 0x40) = 0;
  }
  return 1;
}
