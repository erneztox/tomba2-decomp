/**
 * @brief GTE projection main: full projection pipeline
 * @note Original: func_8002BC9C at 0x8002BC9C
 */
// GTE_ProjectMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002bc9c(int param_1)

{
  bool bVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int local_38;
  int local_34;
  int local_30;
  
  _DAT_1f800090 = 0;
  pbVar2 = *(byte **)(param_1 + 0x3c);
  if (pbVar2 != (byte *)0x0) {
    uVar3 = (uint)*pbVar2;
    if ((*pbVar2 & 0x80) == 0) {
      *(byte **)(param_1 + 0x40) = pbVar2 + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar3 = uVar3 & 0x7f;
    }
    uVar11 = *(undefined4 *)(uVar3 * 4 + *(int *)(param_1 + 0x50));
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar10 = 0;
    do {
      FUN_80085480(param_1 + 0x48,0x1f800000);
      local_38 = (uint)DAT_800a1cd4 << 2;
      local_34 = (uint)DAT_800a1cd5 << 2;
      local_30 = (uint)DAT_800a1cd6 << 2;
      FUN_80084520(0x1f800000,&local_38);
      setCopControlWord(2,0,_DAT_1f8000f8);
      setCopControlWord(2,0x800,_DAT_1f8000fc);
      setCopControlWord(2,0x1000,_DAT_1f800100);
      setCopControlWord(2,0x1800,_DAT_1f800104);
      setCopControlWord(2,0x2000,_DAT_1f800108);
      setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
      setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
      setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
      copFunction(2,0x49e012);
      uVar4 = getCopReg(2,0x4800);
      uVar6 = getCopReg(2,0x5000);
      uVar8 = getCopReg(2,0x5800);
      setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
      setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
      setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
      copFunction(2,0x49e012);
      uVar5 = getCopReg(2,0x4800);
      uVar7 = getCopReg(2,0x5000);
      uVar9 = getCopReg(2,0x5800);
      _DAT_1f800000 = CONCAT22((short)uVar5,(short)uVar4);
      _DAT_1f80000c = CONCAT22((short)uVar9,(short)uVar8);
      setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
      setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
      setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
      copFunction(2,0x49e012);
      uVar4 = getCopReg(2,0x4800);
      uVar5 = getCopReg(2,0x5000);
      uVar8 = getCopReg(2,0x5800);
      _DAT_1f800004 = CONCAT22((short)uVar6,(short)uVar4);
      _DAT_1f800008 = CONCAT22((short)uVar5,(short)uVar7);
      _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar8);
      setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
      setCopReg(2,extraout_at,*(undefined4 *)(param_1 + 0x30));
      copFunction(2,0x486012);
      _DAT_1f800014 = getCopReg(2,0x19);
      _DAT_1f800018 = getCopReg(2,0x1a);
      _DAT_1f80001c = getCopReg(2,0x1b);
      _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
      _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
      _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
      setCopControlWord(2,0,_DAT_1f800000);
      setCopControlWord(2,0x800,_DAT_1f800004);
      setCopControlWord(2,0x1000,_DAT_1f800008);
      setCopControlWord(2,0x1800,_DAT_1f80000c);
      setCopControlWord(2,0x2000,_DAT_1f800010);
      setCopControlWord(2,0x2800,_DAT_1f800014);
      setCopControlWord(2,0x3000,_DAT_1f800018);
      setCopControlWord(2,0x3800,_DAT_1f80001c);
      FUN_80027768(uVar11,0,(int)*(short *)(param_1 + 0x32),0);
      iVar10 = iVar10 + 1;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
      in_at = extraout_at_00;
    } while (iVar10 < 4);
  }
  if ((*(byte *)(param_1 + 3) - 0x14 < 2) && (*(int *)(param_1 + 0x34) != 0)) {
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    setCopControlWord(2,0xd800,6);
    setCopControlWord(2,0xe000,0);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x58));
    setCopReg(2,in_at,*(undefined4 *)(param_1 + 0x5c));
    copFunction(2,0x180001);
    _DAT_1f800080 = getCopControlWord(2,0xf800);
    bVar1 = true;
    if (-1 < _DAT_1f800080) {
      _DAT_1f800080 = getCopReg(2,0x13);
      if (0 < _DAT_1f800080) {
        _DAT_1f800080 = (_DAT_1f800080 >> 2) + (int)*(short *)(param_1 + 0x32);
        if (_DAT_1f800080 < 4) {
          _DAT_1f800080 = 4;
        }
        _DAT_1f800080 =
             (_DAT_1f800080 >> (_DAT_1f800080 >> 10 & 0x1fU)) + (_DAT_1f800080 >> 10) * 0x200;
        if (0x7fb < _DAT_1f800080 - 4U) {
          _DAT_1f800080 = -1;
        }
        bVar1 = true;
        if (-1 < _DAT_1f800080) {
          _DAT_1f80008c = getCopReg(2,0xe);
          _DAT_1f800084 = getCopReg(2,0x18);
          bVar1 = false;
        }
      }
    }
    if (bVar1) {
      FUN_80031780(param_1);
    }
    else {
      _DAT_1f800088 = _DAT_1f800084;
      uVar11 = FUN_80027a4c(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x38) = uVar11;
    }
  }
  return;
}
