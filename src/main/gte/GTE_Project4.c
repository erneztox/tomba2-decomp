/**
 * @brief GTE project variant 4: loads from _DAT_1f8000f8, projects
 * @note Original: func_8002801C at 0x8002801C
 */
// GTE_Project4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002801c(int param_1)

{
  bool bVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x34) != 0) {
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
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,in_at,*(undefined4 *)(param_1 + 0x30));
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
      _DAT_1f800088 = (_DAT_1f800084 >> 8) * (int)*(short *)(param_1 + 0x4a);
      _DAT_1f800084 = (_DAT_1f800084 >> 8) * (int)*(short *)(param_1 + 0x48);
      _DAT_1f800090 = 0;
      uVar2 = FUN_80027a4c(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x38) = uVar2;
    }
  }
  return;
}
