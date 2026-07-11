/**
 * @brief Entity hang state: entity->action_state state, hanging/climbing
 * @note Original: func_80070BD0 at 0x80070BD0
 */
// Entity_State_Hang



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80070bd0(int param_1,short param_2,int param_3,char param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 100) + 0x20;
    *(short *)(param_1 + 100) = sVar2;
    if (0x3ff < sVar2) {
      *(undefined2 *)(param_1 + 100) = 0x400;
    }
    sVar2 = FUN_80083e80((int)*(short *)(param_1 + 100));
    iVar6 = (int)sVar2;
    iVar3 = iVar6 * param_1->sprite_x;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    iVar7 = iVar6 * param_1->angle_offset;
    param_1->pos_y = _DAT_1f800160 + (short)(iVar3 >> 0xc);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xfff;
    }
    iVar6 = iVar6 * param_1->sprite_y;
    *(short *)(param_1 + 0x32) = _DAT_1f800162 + (short)(iVar7 >> 0xc);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    param_1->pos_z = _DAT_1f800164 + (short)(iVar6 >> 0xc);
    sVar2 = *(short *)(param_1 + 100) * 3;
    param_1->scale_z = sVar2;
    param_1->scale_y = sVar2;
    param_1->scale_x = sVar2;
    if (sVar2 != 0xc00) {
      return;
    }
    if (param_4 != '\0') {
      param_1->action_state = param_1->action_state + '\x01';
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->anim_id = 0;
      FUN_80077c40(param_1,&PTR_DAT_8001b860,0);
      *(undefined2 *)(param_1 + 100) = 0;
      iVar3 = FUN_80083e80((int)-param_2);
      uVar4 = FUN_80083f50((int)-param_2);
      sVar2 = FUN_80085690(-iVar3,uVar4);
      uVar5 = *(short *)(param_3 + 10) + sVar2 & 0xfff;
      param_1->rot_y = uVar5 - 0x800 & 0xfff;
      iVar3 = FUN_80083f50(uVar5);
      iVar3 = iVar3 * *(short *)(param_3 + 2);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      param_1->sprite_x = (short)(iVar3 >> 0xc);
      param_1->angle_offset = -0x46 - *(short *)(param_3 + 6);
      iVar3 = FUN_80083e80(uVar5);
      iVar3 = -iVar3 * (int)*(short *)(param_3 + 2);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      param_1->sprite_y = (short)(iVar3 >> 0xc);
      param_1->scale_z = 0;
      param_1->scale_y = 0;
      param_1->scale_x = 0;
      param_1->action_state = param_1->action_state + '\x01';
      return;
    }
    if (bVar1 != 2) {
      return;
    }
    iVar3 = FUN_80041438(param_1,(int)_DAT_800e7ed6,0x180);
    if (iVar3 == 0) {
      return;
    }
  }
  FUN_800708cc(param_1);
  return;
}
