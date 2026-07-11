/**
 * @brief Entity anim loader variant 4: entity->action_state=0, loads anim data
 * @note Original: func_80071260 at 0x80071260
 */
// Entity_AnimLoad4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80071260(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1->action_state == '\0') {
    FUN_80077cfc(param_1,&PTR_DAT_8001b860,0,8);
    *(undefined2 *)(param_1 + 100) = 0x400;
    sVar2 = param_1->pos_y - _DAT_1f800160;
    param_1->angle_offset = *(short *)(param_1 + 0x32) - _DAT_1f800162;
    param_1->sprite_x = sVar2;
    param_1->sprite_y = param_1->pos_z - _DAT_1f800164;
    param_1->action_state = param_1->action_state + '\x01';
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (param_1->action_state == '\x01') {
      uVar1 = *(short *)(param_1 + 100) - 0x40;
      *(ushort *)(param_1 + 100) = uVar1;
      if ((int)((uint)uVar1 << 0x10) < 0) {
        *(undefined2 *)(param_1 + 100) = 0;
      }
      sVar2 = FUN_80083e80((int)*(short *)(param_1 + 100));
      iVar5 = (int)sVar2;
      iVar4 = iVar5 * param_1->sprite_x;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      iVar6 = iVar5 * param_1->angle_offset;
      param_1->pos_y = _DAT_1f800160 + (short)(iVar4 >> 0xc);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      iVar5 = iVar5 * param_1->sprite_y;
      *(short *)(param_1 + 0x32) = _DAT_1f800162 + (short)(iVar6 >> 0xc);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      param_1->pos_z = _DAT_1f800164 + (short)(iVar5 >> 0xc);
      sVar2 = *(short *)(param_1 + 100) * 3;
      param_1->scale_z = sVar2;
      param_1->scale_y = sVar2;
      param_1->scale_x = sVar2;
      uVar3 = 0;
      if (sVar2 == 0) {
        param_1->behavior_state = 0;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}
