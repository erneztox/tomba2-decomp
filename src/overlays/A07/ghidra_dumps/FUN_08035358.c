// FUN_08035358

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08035358(int param_1)

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
  
  _DAT_800a3f90 = 0x4b00;
  _DAT_800a3f94 = 0x1c7;
  local_2c = (int)_DAT_1f8000da;
  uVar4 = 0xfffffe39U - (int)_DAT_1f8000f2 & 0xfff;
  local_30 = (int)_DAT_1f8000d2;
  iVar1 = func_0x00083e80(uVar4);
  local_28 = local_30 + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083f50(uVar4);
  uVar4 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
  local_24 = local_2c + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083e80(uVar4);
  local_20 = local_30 + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083f50(uVar4);
  local_1c = local_2c + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083e80(-(int)_DAT_1f8000f2);
  local_30 = local_30 - (iVar1 * 0x640 >> 0xc);
  iVar1 = func_0x00083f50(-(int)_DAT_1f8000f2);
  local_2c = local_2c - (iVar1 * 0x640 >> 0xc);
  iVar1 = func_0x00083e80((int)_DAT_1f8000f0);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = func_0x00083e80(-(int)_DAT_1f8000f2);
  iVar3 = func_0x00083f50(-(int)_DAT_1f8000f2);
  iVar2 = (iVar2 * iVar1 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  iVar1 = (iVar3 * iVar1 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  local_30 = (local_30 - iVar2) / 0x280;
  local_28 = (local_28 - iVar2) / 0x280;
  local_20 = (local_20 - iVar2) / 0x280;
  local_2c = (local_2c - iVar1) / 0x280;
  local_24 = (local_24 - iVar1) / 0x280;
  local_1c = (local_1c - iVar1) / 0x280;
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x0012e610(param_1,&local_30,&local_28,&local_20);
  return;
}

