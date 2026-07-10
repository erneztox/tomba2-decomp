// FUN_000059c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000059c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  _DAT_800a3f90 = 16000;
  _DAT_800a3f94 = 0x1c7;
  local_2c = (int)_DAT_1f8000da;
  uVar9 = 0xfffffe39U - (int)_DAT_1f8000f2 & 0xfff;
  local_30 = (int)_DAT_1f8000d2;
  iVar1 = func_0x00083e80(uVar9);
  local_28 = local_30 + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083f50(uVar9);
  uVar9 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
  local_24 = local_2c + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083e80(uVar9);
  local_20 = local_30 + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083f50(uVar9);
  local_1c = local_2c + (iVar1 * _DAT_800a3f90 >> 0xc);
  iVar1 = func_0x00083e80((int)_DAT_1f8000f0);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = func_0x00083e80(-(int)_DAT_1f8000f2);
  iVar3 = func_0x00083f50(-(int)_DAT_1f8000f2);
  iVar8 = (iVar2 * iVar1 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  iVar2 = (local_30 - iVar8) + 0x8000;
  iVar7 = (local_20 - iVar8) + 0x8000;
  iVar6 = (local_28 - iVar8) + 0x8000;
  iVar5 = (iVar3 * iVar1 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  iVar3 = (local_24 - iVar5) + 0x8000;
  iVar4 = (local_1c - iVar5) + 0x8000;
  iVar1 = (local_2c - iVar5) + 0x8000;
  if (iVar2 < 0) {
    iVar2 = (local_30 - iVar8) + 0x83ff;
  }
  local_30 = iVar2 >> 10;
  if (iVar1 < 0) {
    iVar1 = (local_2c - iVar5) + 0x83ff;
  }
  local_2c = iVar1 >> 10;
  if (iVar6 < 0) {
    iVar6 = (local_28 - iVar8) + 0x83ff;
  }
  local_28 = iVar6 >> 10;
  if (iVar3 < 0) {
    iVar3 = (local_24 - iVar5) + 0x83ff;
  }
  local_24 = iVar3 >> 10;
  if (iVar7 < 0) {
    iVar7 = (local_20 - iVar8) + 0x83ff;
  }
  local_20 = iVar7 >> 10;
  if (iVar4 < 0) {
    iVar4 = (local_1c - iVar5) + 0x83ff;
  }
  local_1c = iVar4 >> 10;
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x0010ec34(param_1,&local_30,&local_28,&local_20);
  return;
}

