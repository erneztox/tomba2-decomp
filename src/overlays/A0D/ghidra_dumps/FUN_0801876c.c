// FUN_0801876c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801876c(int param_1)

{
  uint uVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar12 = _DAT_800bf544;
  puVar14 = (undefined4 *)&DAT_8012594c;
  puVar13 = (uint *)&DAT_80125a4c;
  local_30 = (uint)*(byte *)(param_1 + 5) << 6;
  local_2c = local_30;
  local_28 = local_30;
  func_0x00085480(param_1 + 0x48,0x1f800000);
  func_0x00084520(0x1f800000,&local_30);
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
  copFunction(2,0x49e012);
  uVar6 = getCopReg(2,0x4800);
  uVar8 = getCopReg(2,0x5000);
  uVar10 = getCopReg(2,0x5800);
  setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
  setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
  setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
  copFunction(2,0x49e012);
  uVar7 = getCopReg(2,0x4800);
  uVar9 = getCopReg(2,0x5000);
  uVar11 = getCopReg(2,0x5800);
  _DAT_1f800000 = CONCAT22((short)uVar7,(short)uVar6);
  _DAT_1f80000c = CONCAT22((short)uVar11,(short)uVar10);
  setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
  copFunction(2,0x49e012);
  uVar6 = getCopReg(2,0x4800);
  uVar7 = getCopReg(2,0x5000);
  uVar10 = getCopReg(2,0x5800);
  _DAT_1f800004 = CONCAT22((short)uVar8,(short)uVar6);
  _DAT_1f800008 = CONCAT22((short)uVar7,(short)uVar9);
  _DAT_1f800010 = CONCAT22(DAT_1f800010_2,(short)uVar10);
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
  uVar5 = (uint)(*(byte *)(param_1 + 6) >> 2);
  if (uVar5 != 0) {
    puVar4 = puVar12 + 2;
    do {
      setCopReg(2,in_zero,*puVar14);
      setCopReg(2,extraout_at,puVar14[1]);
      copFunction(2,0x180001);
      _DAT_1f800080 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800080) {
        _DAT_1f800080 = getCopReg(2,0x13);
        iVar2 = _DAT_1f800080 >> 2;
        if (0 < _DAT_1f800080) {
          _DAT_1f800080 = iVar2;
          if (iVar2 < 4) {
            _DAT_1f800080 = 4;
          }
          _DAT_1f800080 =
               (_DAT_1f800080 >> (_DAT_1f800080 >> 10 & 0x1fU)) + (_DAT_1f800080 >> 10) * 0x200;
          if (0x7fb < _DAT_1f800080 - 4U) {
            _DAT_1f800080 = -1;
          }
          uVar1 = getCopReg(2,0xe);
          *puVar4 = uVar1;
          puVar4[-1] = *puVar13 | 0x6a000000;
          puVar3 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
          *puVar12 = *puVar3 | 0x2000000;
          *puVar3 = (uint)puVar12;
          puVar4 = puVar4 + 3;
          puVar12 = puVar12 + 3;
        }
      }
      uVar5 = uVar5 - 1;
      puVar14 = puVar14 + 2;
      puVar13 = puVar13 + 1;
    } while (0 < (int)uVar5);
  }
  _DAT_800bf544 = puVar12;
  return;
}

