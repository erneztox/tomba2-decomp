// FUN_800847f0

undefined2 * FUN_800847f0(short *param_1,undefined2 *param_2)

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
  uVar6 = (uint)param_1[1];
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
  uVar6 = (uint)param_1[2];
  param_2[2] = sVar4;
  param_2[5] = (short)(-(iVar8 * iVar1) >> 0xc);
  uVar5 = (undefined2)(iVar8 * iVar7 >> 0xc);
  if ((int)uVar6 < 0) {
    param_2[8] = uVar5;
    iVar9 = *(int *)(&DAT_800a6490 + (-uVar6 & 0xfff) * 4);
    iVar3 = -(int)(short)iVar9;
  }
  else {
    param_2[8] = uVar5;
    iVar9 = *(int *)(&DAT_800a6490 + (uVar6 & 0xfff) * 4);
    iVar3 = (int)(short)iVar9;
  }
  iVar9 = iVar9 >> 0x10;
  *param_2 = (short)(iVar9 * iVar8 >> 0xc);
  param_2[1] = (short)(-(iVar3 * iVar8) >> 0xc);
  iVar8 = iVar9 * iVar2 >> 0xc;
  param_2[3] = (short)(iVar3 * iVar7 >> 0xc) - (short)(iVar8 * iVar1 >> 0xc);
  param_2[6] = (short)(iVar3 * iVar1 >> 0xc) + (short)(iVar8 * iVar7 >> 0xc);
  iVar2 = iVar3 * iVar2 >> 0xc;
  param_2[4] = (short)(iVar9 * iVar7 >> 0xc) + (short)(iVar2 * iVar1 >> 0xc);
  param_2[7] = (short)(iVar9 * iVar1 >> 0xc) - (short)(iVar2 * iVar7 >> 0xc);
  return param_2;
}

