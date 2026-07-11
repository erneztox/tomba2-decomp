/**
 * @brief GTE sprite projector: loads matrix, projects sprite vertices
 * @note Original: func_800281EC at 0x800281EC
 */
// GTE_ProjectSprite



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800281ec(int param_1)

{
  bool bVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(char *)(param_1 + 3) == '!') {
      setCopControlWord(2,0,_DAT_1f8000f8);
      setCopControlWord(2,0x800,_DAT_1f8000fc);
      setCopControlWord(2,0x1000,_DAT_1f800100);
      setCopControlWord(2,0x1800,_DAT_1f800104);
      setCopControlWord(2,0x2000,_DAT_1f800108);
      setCopControlWord(2,0x2800,_DAT_1f80010c);
      setCopControlWord(2,0x3000,_DAT_1f800110);
      setCopControlWord(2,0x3800,_DAT_1f800114);
      uVar2 = 4;
      setCopControlWord(2,0xd800,4);
    }
    else {
      setCopControlWord(2,0,_DAT_1f8000f8);
      setCopControlWord(2,0x800,_DAT_1f8000fc);
      setCopControlWord(2,0x1000,_DAT_1f800100);
      setCopControlWord(2,0x1800,_DAT_1f800104);
      setCopControlWord(2,0x2000,_DAT_1f800108);
      setCopControlWord(2,0x2800,_DAT_1f80010c);
      setCopControlWord(2,0x3000,_DAT_1f800110);
      setCopControlWord(2,0x3800,_DAT_1f800114);
      uVar2 = 6;
      setCopControlWord(2,0xd800,6);
    }
    setCopControlWord(2,0xe000,0);
    iVar4 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x50);
    _DAT_1f800090 = 0;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    FUN_80031780(param_1,&DAT_1f800090,uVar2);
    uVar2 = extraout_at;
    do {
      setCopReg(2,in_zero,*puVar3);
      setCopReg(2,uVar2,puVar3[1]);
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
        _DAT_1f800084 = _DAT_1f800084 * *(short *)((int)puVar3 + 6) >> 8;
        _DAT_1f800088 = _DAT_1f800084;
        FUN_80027a4c(uVar5,*(undefined4 *)(param_1 + 0x44));
        uVar2 = extraout_at_00;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar4 * 0x10000 >> 0x10 < (int)*(short *)(param_1 + 0x4e));
  }
  return;
}
