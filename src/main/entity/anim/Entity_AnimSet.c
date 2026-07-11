/**
 * @brief Entity animation setter: sets params, loads animation data
 * @note Original: func_80064358 at 0x80064358
 */
// Entity_AnimSet



void FUN_80064358(int param_1,byte param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  
  param_3->collision_state = 0;
  iVar4 = (uint)param_2 * 6;
  param_1->state_flag144 = 0;
  param_1->sub_action = 0;
  param_1->action_state = param_1->action_state + '\x01';
  sVar7 = *(short *)(&DAT_800a47c4 + iVar4);
  uVar6 = *(ushort *)(&DAT_800a47c6 + iVar4);
  sVar1 = *(short *)(&DAT_800a47c8 + iVar4);
  if (param_2 == 0) {
    FUN_80055f48(param_1,0);
    uVar6 = param_1->velocity_y + 0xa80;
  }
  FUN_80054d14(param_1,(int)sVar1,0);
  if (sVar7 != 0) {
    sVar7 = sVar7 + (ushort)*(byte *)(param_1 + 0x168) * 0x400;
  }
  if ((int)((uint)uVar6 << 0x10) < 0) {
    uVar6 = uVar6 + (ushort)*(byte *)(param_1 + 0x168) * -0x400;
  }
  if (param_1->direction == '\0') {
    param_1->anim_counter = sVar7;
  }
  else {
    param_1->anim_counter = -sVar7;
  }
  uVar2 = param_1->rot_z;
  param_1->velocity_y = uVar6;
  uVar5 = uVar2 & 0xfff;
  param_1->rot_z = (short)uVar5;
  if ((uVar2 & 0xfff) != 0) {
    if (uVar5 < 0x801) {
      param_1->rot_z = (short)(uVar5 - 0x100);
      if ((int)((uVar5 - 0x100) * 0x10000) < 0) {
        param_1->rot_z = 0;
      }
    }
    else {
      param_1->rot_z = (short)(uVar5 + 0x100);
      if (0xfff < uVar5 + 0x100) {
        param_1->rot_z = 0;
      }
    }
  }
  if (param_2 == 0) {
    iVar4 = FUN_80083f50((int)param_1->rot_y);
    sVar7 = param_3->bounds_min_x;
    iVar3 = FUN_80083e80((int)param_1->rot_y);
    sVar1 = param_3->bounds_min_x;
    param_1->pos_y = param_1->pos_y - (short)(iVar4 * sVar7 >> 0xc);
    param_1->pos_z = param_1->pos_z + (short)(iVar3 * sVar1 >> 0xc);
  }
  return;
}
