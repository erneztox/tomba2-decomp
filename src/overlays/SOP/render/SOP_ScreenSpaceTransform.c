// SOP_ScreenSpaceTransform (SOP_ScreenSpaceTransform) - 2D screen-space coordinate transform: computes perspective projection from 3D points

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_ScreenSpaceTransform(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  *(s16 *)(param_1 + 8) = **(s16 **)(param_1 + 0xc);
  _DAT_800a3f90 = 0x5780;
  *(s16 *)(param_1 + 10) = (*(s16 **)(param_1 + 0xc))[1];
  _DAT_800a3f94 = 0x1c7;
  local_2c = (int)_g_GTE_Matrix12;
  uVar4 = 0xfffffe39U - (int)_g_GTE_RotY & 0xfff;
  local_30 = (int)_g_GTE_Matrix01;
  iVar1 = Math_Cos(uVar4);
  local_28 = local_30 + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = Math_CosGTE(uVar4);
  uVar4 = _DAT_800a3f94 - _g_GTE_RotY & 0xfff;
  local_24 = local_2c + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = Math_Cos(uVar4);
  local_20 = local_30 + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = Math_CosGTE(uVar4);
  local_1c = local_2c + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = Math_Cos((int)_g_GTE_RotX);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = Math_Cos(-(int)_g_GTE_RotY);
  iVar3 = Math_CosGTE(-(int)_g_GTE_RotY);
  iVar2 = (iVar2 * iVar1 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  iVar1 = (iVar3 * iVar1 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  local_30 = (local_30 - iVar2) / 0x280;
  local_28 = (local_28 - iVar2) / 0x280;
  local_20 = (local_20 - iVar2) / 0x280;
  local_2c = (local_2c - iVar1) / 0x280;
  local_24 = (local_24 - iVar1) / 0x280;
  local_1c = (local_1c - iVar1) / 0x280;
  param_1->action_state = 0;
  func_0x0010a3ac(param_1,&local_30,&local_28,&local_20);
  return;
}

