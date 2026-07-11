/**
 * @brief Entity door behavior variant 2: entity->state=1, transition
 * @note Original: func_80068698 at 0x80068698
 */
// Entity_Behavior_Door2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80068698(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->state = 1;
    *(undefined4 *)(param_1 + 0x50) = 0;
    param_1->normal_x = 0;
    param_1->velocity_y = 0;
    param_1->normal_z = (ushort)param_1->collision_dir << 6;
    *(undefined2 *)(param_1 + 0x70) = 0;
    iVar3 = (uint)param_1->collision_dir * 4;
    param_1->angle_delta = (short)(char)(&DAT_800a49e0)[iVar3];
    param_1->target_angle = (short)(char)(&DAT_800a49e1)[iVar3];
    *(short *)(param_1 + 0x6c) = (short)((int)((uint)(byte)(&DAT_800a49e2)[iVar3] << 0x18) >> 0x14);
    *(ushort *)(param_1 + 0x6e) =
         _DAT_1f800168 + (short)((int)((uint)(byte)(&DAT_800a49e3)[iVar3] << 0x18) >> 0x14) & 0xfff;
    iVar3 = FUN_80083f50();
    param_1->draw_x = (short)((uint)(iVar3 * 3) >> 0xb);
    iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x6e));
    *(short *)(param_1 + 100) = (short)(iVar3 * -6 >> 0xc);
    return;
  }
  param_1->flags = 1;
  FUN_80068610(param_1,param_1->draw_x);
  if (param_1->behavior_state == '\0') {
    sVar2 = param_1->angle_delta + 1;
    param_1->angle_delta = sVar2;
    if (8 < sVar2) {
      param_1->angle_delta = 8;
    }
    sVar2 = param_1->pos_y + param_1->angle_delta;
    param_1->pos_y = sVar2;
    if ((_DAT_1f800162 + -0x8c < (int)sVar2) &&
       (sVar2 = param_1->target_angle, param_1->target_angle = sVar2 + -1, sVar2 == 1)) {
      param_1->behavior_state = param_1->behavior_state + '\x01';
      param_1->event_id = _DAT_1f800162 - param_1->pos_y;
    }
    if (param_1->angle_delta < 0) {
      param_1->pos_x = param_1->pos_x + param_1->draw_x;
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 100);
      goto LAB_800688bc;
    }
  }
  else {
    if (param_1->behavior_state != '\x01') {
      return;
    }
LAB_800688bc:
    if (param_1->angle_delta < 0) goto LAB_800689e8;
  }
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x30) - (uint)_DAT_1f800164) * 0x10000) >> 0x10;
  iVar3 = (int)(((uint)param_1->pos_x - (uint)_DAT_1f800160) * 0x10000) >> 0x10;
  sVar2 = FUN_80085690(-iVar5,iVar3);
  uVar4 = *(short *)(param_1 + 0x70) + sVar2 & 0xfff;
  iVar3 = FUN_80084080(iVar3 * iVar3 + iVar5 * iVar5);
  iVar5 = _DAT_800e7efa + -0xbe;
  if (iVar5 < 0x96) {
    iVar6 = iVar3 + 2;
    if (0x95 < iVar3) {
      iVar6 = 0x96;
    }
  }
  else {
    iVar6 = iVar3 + 4;
    if (iVar5 <= iVar3) {
      iVar6 = iVar5;
    }
  }
  sVar2 = *(short *)(param_1 + 0x70) + 8;
  *(short *)(param_1 + 0x70) = sVar2;
  if (*(short *)(param_1 + 0x6c) < sVar2) {
    *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_1 + 0x6c);
  }
  iVar3 = FUN_80083f50(uVar4);
  iVar5 = FUN_80083e80(uVar4);
  param_1->pos_x = _DAT_1f800160 + (short)(iVar3 * iVar6 >> 0xc);
  *(ushort *)(param_1 + 0x30) = _DAT_1f800164 - (short)(iVar5 * iVar6 >> 0xc);
LAB_800689e8:
  if (param_1->behavior_state == '\x01') {
    param_1->velocity_y = param_1->velocity_y + 0x40;
    if ((param_1->collision_dir & 1) == 0) {
      sVar2 = param_1->event_id;
    }
    else {
      sVar2 = param_1->event_id + _DAT_800e7efc * -2;
    }
    iVar3 = FUN_80083e80((int)param_1->type_flags);
    param_1->pos_y = _DAT_1f800162 + sVar2 + (short)(iVar3 >> 6);
    param_1->type_flags =
         param_1->type_flags + (*(short *)(param_1 + 0x6c) >> 3) & 0xfff;
  }
  return;
}
