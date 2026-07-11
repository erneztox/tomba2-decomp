// FUN_08017a78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017a78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort local_30;
  ushort local_2e;
  ushort local_28;
  ushort local_26;
  ushort local_20;
  ushort local_1e;
  
  _DAT_800a3f90 = 0x5000;
  _DAT_800a3f94 = 0x25e;
  uVar7 = 0xfffffda2U - (int)_DAT_1f8000f2 & 0xfff;
  local_2e = _DAT_1f8000da;
  local_30 = _DAT_1f8000d2;
  iVar1 = func_0x00083e80(uVar7);
  local_28 = local_30 + (short)(iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083f50(uVar7);
  uVar7 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
  local_26 = local_2e + (short)(iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083e80(uVar7);
  local_20 = local_30 + (short)(iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083f50(uVar7);
  local_1e = local_2e + (short)(iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083e80((int)_DAT_1f8000f0);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = func_0x00083e80(-(int)_DAT_1f8000f2);
  iVar3 = func_0x00083f50(-(int)_DAT_1f8000f2);
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
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x00110cf8(param_1,&local_30,&local_28,&local_20);
  return;
}

