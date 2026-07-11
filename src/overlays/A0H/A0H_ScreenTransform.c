// A0H_ScreenTransform - Screen-space transform

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0H_ScreenTransform(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  u16 local_30;
  u16 local_2e;
  u16 local_28;
  u16 local_26;
  u16 local_20;
  u16 local_1e;
  
  _DAT_800a3f90 = 0x2f80;
  uVar7 = -_DAT_800a3f94 - (int)_g_GTE_RotY & 0xfff;
  local_30 = _g_GTE_Matrix01;
  local_2e = _g_GTE_Matrix12;
  iVar1 = Math_Cos(uVar7);
  local_28 = local_30 + (short)(iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = Math_CosGTE(uVar7);
  uVar7 = _DAT_800a3f94 - _g_GTE_RotY & 0xfff;
  local_26 = local_2e + (short)(iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = Math_Cos(uVar7);
  local_20 = local_30 + (short)(iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = Math_CosGTE(uVar7);
  local_1e = local_2e + (short)(iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = Math_Cos((int)_g_GTE_RotX);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = Math_Cos(-(int)_g_GTE_RotY);
  iVar3 = Math_CosGTE(-(int)_g_GTE_RotY);
  iVar6 = (iVar2 * iVar1 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  iVar4 = ((uint)local_30 - iVar6) * 0x10000;
  iVar2 = (iVar3 * iVar1 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  iVar5 = ((uint)local_2e - iVar2) * 0x10000;
  iVar3 = ((uint)local_28 - iVar6) * 0x10000;
  iVar6 = ((uint)local_20 - iVar6) * 0x10000;
  iVar1 = ((uint)local_26 - iVar2) * 0x10000;
  iVar2 = ((uint)local_1e - iVar2) * 0x10000;
  local_30 = (short)((ulonglong)((longlong)(iVar4 >> 0x10) * 0x66666667) >> 0x28) -
             (short)(iVar4 >> 0x1f);
  local_28 = (short)((ulonglong)((longlong)(iVar3 >> 0x10) * 0x66666667) >> 0x28) -
             (short)(iVar3 >> 0x1f);
  local_20 = (short)((ulonglong)((longlong)(iVar6 >> 0x10) * 0x66666667) >> 0x28) -
             (short)(iVar6 >> 0x1f);
  local_2e = (short)((ulonglong)((longlong)(iVar5 >> 0x10) * 0x66666667) >> 0x28) -
             (short)(iVar5 >> 0x1f);
  local_26 = (short)((ulonglong)((longlong)(iVar1 >> 0x10) * 0x66666667) >> 0x28) -
             (short)(iVar1 >> 0x1f);
  local_1e = (short)((ulonglong)((longlong)(iVar2 >> 0x10) * 0x66666667) >> 0x28) -
             (short)(iVar2 >> 0x1f);
  param_1->action_state = 0;
  func_0x0010bfbc(param_1,&local_30,&local_28,&local_20);
  return;
}

