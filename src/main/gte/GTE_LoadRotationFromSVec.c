/**
 * @brief Loads rotation matrix from short angle vector
 * @note Original address: 0x800847F0
 */
// GTE_LoadRotationFromSVec

undefined2 * GTE_LoadRotationFromSVec(short *param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar6 = (uint)*param_1;
  if ((int)uVar6 < 0) {
    iVar7 = *(int *)(&DAT_800a6490 + (-uVar6 & 0xfff) * 4);
    iVar1 = -(int)(short)iVar7;
  }
  else {
    iVar7 = *(int *)(&DAT_800a6490 + (uVar6 & 0xfff) * 4);
    iVar1 = (int)(short)iVar7;
  }
  iVar7 = iVar7 >> 0x10;
  uVar6 = (uint)param_1->flags;
  if ((int)uVar6 < 0) {
    iVar8 = *(int *)(&DAT_800a6490 + (-uVar6 & 0xfff) * 4);
    iVar2 = (int)(short)iVar8;
    sVar4 = -(short)iVar8;
  }
  else {
    iVar8 = *(int *)(&DAT_800a6490 + (uVar6 & 0xfff) * 4);
    sVar4 = (short)iVar8;
    iVar2 = -(int)sVar4;
  }
  iVar8 = iVar8 >> 0x10;
  uVar6 = (uint)param_1->kind;
  param_2->kind = sVar4;
  param_2->behavior_state = (short)(-(iVar8 * iVar1) >> 0xc);
  uVar5 = (undefined2)(iVar8 * iVar7 >> 0xc);
  if ((int)uVar6 < 0) {
    param_2->counter1 = uVar5;
    iVar9 = *(int *)(&DAT_800a6490 + (-uVar6 & 0xfff) * 4);
    iVar3 = -(int)(short)iVar9;
  }
  else {
    param_2->counter1 = uVar5;
    iVar9 = *(int *)(&DAT_800a6490 + (uVar6 & 0xfff) * 4);
    iVar3 = (int)(short)iVar9;
  }
  iVar9 = iVar9 >> 0x10;
  *param_2 = (short)(iVar9 * iVar8 >> 0xc);
  param_2->flags = (short)(-(iVar3 * iVar8) >> 0xc);
  iVar8 = iVar9 * iVar2 >> 0xc;
  param_2->sub_type = (short)(iVar3 * iVar7 >> 0xc) - (short)(iVar8 * iVar1 >> 0xc);
  param_2->action_state = (short)(iVar3 * iVar1 >> 0xc) + (short)(iVar8 * iVar7 >> 0xc);
  iVar2 = iVar3 * iVar2 >> 0xc;
  param_2->state = (short)(iVar9 * iVar7 >> 0xc) + (short)(iVar2 * iVar1 >> 0xc);
  param_2->sub_action = (short)(iVar9 * iVar1 >> 0xc) - (short)(iVar2 * iVar7 >> 0xc);
  return param_2;
}

