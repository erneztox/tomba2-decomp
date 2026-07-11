/**
 * @brief Entity follow state: entity[0x62] target, follows
 * @note Original: func_800702C0 at 0x800702C0
 */
// Entity_State_Follow



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800702c0(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  
  sVar6 = param_1->angle_delta;
  iVar4 = param_1->parent;
  sVar5 = iVar4->rot_y;
  switch(param_1->flag_5E) {
  case 0:
    param_1->pos_y =
         (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
    *(short *)(param_1 + 0x32) =
         (short)((_DAT_800e7f50->pos_y_fixed + _DAT_800e7f5c->pos_y_fixed) / 2);
    iVar4 = _DAT_800e7f50->scale_y;
    iVar2 = _DAT_800e7f5c->scale_y;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + param_1->draw_x;
    param_1->pos_z = (short)((iVar4 + iVar2) / 2);
    sVar6 = 0x20;
    sVar5 = _DAT_800e7ed6;
    goto switchD_8007030c_default;
  case 1:
    param_1->pos_y = *(undefined2 *)(iVar4->data_ptr + 0x2c);
    sVar1 = *(short *)(iVar4->data_ptr + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = iVar4->data_ptr;
    break;
  case 2:
    param_1->pos_y =
         (short)((*(int *)(iVar4->target_ptr + 0x2c) + *(int *)(iVar4->data_ptr + 0x2c))
                / 2);
    *(short *)(param_1 + 0x32) =
         (short)((*(int *)(iVar4->target_ptr + 0x30) + *(int *)(iVar4->data_ptr + 0x30))
                / 2);
    iVar2 = *(int *)(iVar4->target_ptr + 0x34);
    iVar4 = *(int *)(iVar4->data_ptr + 0x34);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + param_1->draw_x;
    param_1->pos_z = (short)((iVar2 + iVar4) / 2);
    goto switchD_8007030c_default;
  case 3:
    iVar2 = FUN_80083f50((int)iVar4->rot_y);
    iVar2 = iVar2 * iVar4->bounds_min_x;
    param_1->pos_y =
         *(short *)(iVar4->sprite_ptr1 + 0x2c) - (short)(iVar2 - (iVar2 >> 0x1f) >> 0xd);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar4->sprite_ptr1 + 0x30);
    iVar2 = FUN_80083e80((int)iVar4->rot_y);
    iVar2 = iVar2 * iVar4->bounds_min_x;
    sVar3 = *(short *)(iVar4->sprite_ptr1 + 0x34);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + param_1->draw_x;
    sVar3 = sVar3 + (short)(iVar2 - (iVar2 >> 0x1f) >> 0xd);
    goto LAB_800705dc;
  case 4:
    param_1->pos_y = *(undefined2 *)(iVar4->target_ptr + 0x2c);
    sVar1 = *(short *)(iVar4->target_ptr + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = iVar4->target_ptr;
    break;
  case 5:
    param_1->pos_y = _DAT_800e7f5c->pos_x;
    sVar1 = *(short *)(_DAT_800e7f5c + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = _DAT_800e7f5c;
    break;
  case 6:
    param_1->pos_y = _DAT_800e7f50->pos_x;
    sVar1 = *(short *)(_DAT_800e7f50 + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = _DAT_800e7f50;
    break;
  case 7:
    param_1->pos_y = *(undefined2 *)(*(int *)(iVar4 + 0xe4) + 0x2c);
    sVar1 = *(short *)(*(int *)(iVar4 + 0xe4) + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = *(int *)(iVar4 + 0xe4);
    break;
  default:
    goto switchD_8007030c_default;
  }
  sVar3 = *(short *)(iVar4 + 0x34);
  *(short *)(param_1 + 0x32) = sVar1 + param_1->draw_x;
LAB_800705dc:
  param_1->pos_z = sVar3;
switchD_8007030c_default:
  iVar4 = FUN_80083f50((int)sVar5);
  param_1->pos_y = param_1->pos_y + (short)(iVar4 * sVar6 >> 0xc);
  iVar4 = FUN_80083e80((int)sVar5);
  param_1->pos_z = param_1->pos_z + (short)(-iVar4 * (int)sVar6 >> 0xc);
  return;
}
