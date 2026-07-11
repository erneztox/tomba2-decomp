// FUN_0801ce50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ce50(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  _DAT_800a3f90 = 32000;
  _DAT_800a3f94 = 0x25e;
  local_2c = (int)_DAT_1f8000da;
  uVar2 = 0xfffffda2U - (int)_DAT_1f8000f2 & 0xfff;
  local_30 = (int)_DAT_1f8000d2;
  iVar1 = func_0x00083e80(uVar2);
  local_28 = local_30 + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083f50(uVar2);
  uVar2 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
  local_24 = local_2c + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083e80(uVar2);
  local_20 = local_30 + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083f50(uVar2);
  local_1c = local_2c + (iVar1 * _DAT_800a3f90 >> 0xc);
  local_30 = local_30 / 0x280;
  local_2c = local_2c / 0x280;
  local_28 = local_28 / 0x280;
  local_24 = local_24 / 0x280;
  local_20 = local_20 / 0x280;
  local_1c = local_1c / 0x280;
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x00115ff4(param_1,&local_30,&local_28,&local_20);
  return;
}

