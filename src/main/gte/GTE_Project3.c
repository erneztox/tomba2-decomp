/**
 * @brief GTE project variant 3: loads matrix, projects, reads screen XY
 * @note Original: func_8002DD88 at 0x8002DD88
 */
// GTE_Project3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002dd88(int param_1)

{
  bool bVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 uVar2;
  
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
  setCopReg(2,in_at,param_1->pos_y_fixed);
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
  if (!bVar1) {
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    _DAT_1f800090 = *(undefined4 *)(param_1 + 0x50);
    _DAT_1f800088 = _DAT_1f800084 * *(int *)(param_1 + 0x58) >> 8;
    _DAT_1f800084 = _DAT_1f800084 * *(int *)(param_1 + 0x54) >> 8;
    uVar2 = FUN_80027a4c(param_1->scale_y,*(undefined4 *)(param_1 + 0x44));
    param_1->anim_data = uVar2;
  }
  return;
}
