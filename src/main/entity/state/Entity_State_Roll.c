/**
 * @brief Entity roll state: entity->action_state state machine, rolling movement
 * @note Original: func_8006271C at 0x8006271C
 */
// Entity_State_Roll



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8006271c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = param_1->parent;
  iVar7 = param_1->state_ptr;
  iVar8 = 0x20;
  if (-1 < param_1->entity_flags) {
    iVar8 = 0x40;
  }
  iVar2 = param_1->rot_y + 0x800;
  iVar5 = iVar2 * 0x10000 >> 0x10;
  iVar3 = FUN_80083f50(iVar5);
  param_1->pos_y = iVar6->pos_x + (short)(iVar3 * iVar8 >> 0xc);
  iVar3 = FUN_80083e80(iVar5);
  param_1->pos_z = *(short *)(iVar6 + 0x34) - (short)(iVar3 * iVar8 >> 0xc);
  iVar3 = param_2;
  if (param_1->state_165 != '\0') {
    iVar3 = param_2 + 3;
  }
  if (param_2 == 0) {
    sVar1 = param_1->speed2 + (short)(char)(&DAT_800a4700)[iVar3];
    param_1->speed2 = sVar1;
    if ((int)sVar1 < -(int)iVar7->bounds_min_y) {
      param_1->speed2 = -iVar7->bounds_min_y;
    }
  }
  else if (param_2 == 1) {
    param_1->speed2 = param_1->speed2 + (short)(char)(&DAT_800a4700)[iVar3];
  }
  *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x30) + param_1->speed2;
  FUN_80024af0(param_1);
  sVar1 = (short)iVar2;
  if (DAT_800bf870 == '\0') {
    iVar7 = func_0x801148d8(param_1,iVar7);
    iVar6 = _DAT_1f800084;
    if (iVar7 == 0) {
LAB_800629f0:
      param_1->action_flag = 0;
      param_1->state_ptr = 0;
      FUN_80056d44(param_1,0);
      return 0;
    }
    param_1->parent = _DAT_1f800084;
    iVar7 = FUN_80083f50((int)sVar1);
    param_1->pos_y = iVar6->pos_x + (short)(iVar7 * iVar8 >> 0xc);
    iVar7 = FUN_80083e80((int)sVar1);
    param_1->pos_z = *(short *)(iVar6 + 0x34) - (short)(iVar7 * iVar8 >> 0xc);
    *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x30) + param_1->speed2;
    uVar4 = FUN_8005444c(param_1);
    if ((uVar4 & 1) != 0) {
      param_1->action_flag = 0;
      param_1->state_ptr = 0;
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      FUN_80054d14(param_1,2,3);
      return 0;
    }
  }
  else {
    if ((DAT_800bf870 != '\x06') ||
       (iVar7 = func_0x80110e60(param_1,iVar7), iVar6 = _DAT_1f800084, iVar7 == 0))
    goto LAB_800629f0;
    param_1->parent = _DAT_1f800084;
    iVar7 = FUN_80083f50((int)sVar1);
    param_1->pos_y = iVar6->pos_x + (short)(iVar7 * iVar8 >> 0xc);
    iVar7 = FUN_80083e80((int)sVar1);
    param_1->pos_z = *(short *)(iVar6 + 0x34) - (short)(iVar7 * iVar8 >> 0xc);
    *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x30) + param_1->speed2;
    uVar4 = FUN_8005444c(param_1);
    if ((uVar4 & 1) != 0) {
      param_1->action_flag = 0;
      param_1->state_ptr = 0;
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      FUN_80054d14(param_1,2,3);
      return 0;
    }
  }
  return 1;
}
