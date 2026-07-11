// FUN_08018e78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018e78(void)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  
  iVar3 = 0xfedcb7;
  if (_DAT_8011ce60 != 0) {
    iVar9 = 0;
    puVar7 = (ushort *)&DAT_80126f4c;
    do {
      iVar2 = iVar3 >> 0xf;
      iVar4 = iVar3 * 5 + 1;
      iVar5 = iVar4 * 5 + 1;
      iVar6 = iVar5 * 5 + 1;
      iVar3 = iVar6 * 5 + 1;
      *puVar7 = (ushort)iVar2 & 0x7fff;
      puVar7[1] = ((ushort)(iVar5 >> 0xf) & 0x7ff) + 2000;
      puVar7[2] = (ushort)(iVar4 >> 0xf) & 0x7fff;
      puVar7[3] = (ushort)(iVar6 >> 0xe);
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 4;
    } while (iVar9 < 8);
    _DAT_8011ce60 = 0;
  }
  func_0x000329e0(6);
  uVar10 = 0;
  puVar8 = (undefined4 *)&DAT_80126f4c;
  uVar1 = extraout_at;
  do {
    setCopReg(2,in_zero,*puVar8);
    setCopReg(2,uVar1,puVar8[1]);
    copFunction(2,0x180001);
    _DAT_1f800080 = getCopControlWord(2,0xf800);
    if (-1 < _DAT_1f800080) {
      _DAT_1f800080 = getCopReg(2,0x13);
      if (0 < _DAT_1f800080) {
        _DAT_1f80008c = getCopReg(2,0xe);
        _DAT_1f800084 = getCopReg(2,0x18);
        _DAT_1f800080 = 0x7fe;
        _DAT_1f800090 = 0;
        _DAT_1f800084 = _DAT_1f800084 << 4;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x00027a4c(0x8011b8ec,_DAT_8011b8e8);
        uVar1 = extraout_at_00;
      }
    }
    uVar10 = uVar10 + 1;
    puVar8 = puVar8 + 2;
  } while (uVar10 < 8);
  return;
}

