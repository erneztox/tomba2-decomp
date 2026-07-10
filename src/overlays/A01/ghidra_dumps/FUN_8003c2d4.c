// FUN_8003c2d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003c2d4(int param_1)

{
  byte bVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_80051794(0x1f800000);
    FUN_80051794(&DAT_1f800020);
    FUN_80085050((int)*(short *)(param_1 + 0x5a),&DAT_1f800020);
    bVar1 = *(byte *)(param_1 + 0x47);
    FUN_80084110(&DAT_1f800020,0x1f800000,&DAT_1f800040);
    _DAT_1f8000c0 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
    _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,*(undefined2 *)(param_1 + 0x36));
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,in_zero,_DAT_1f8000c0);
    setCopReg(2,extraout_at,_DAT_1f8000c4);
    copFunction(2,0x486012);
    _DAT_1f800054 = getCopReg(2,0x19);
    _DAT_1f800058 = getCopReg(2,0x1a);
    _DAT_1f80005c = getCopReg(2,0x1b);
    _DAT_1f800054 = _DAT_1f800054 + _DAT_1f80010c;
    _DAT_1f800058 = _DAT_1f800058 + _DAT_1f800110;
    _DAT_1f80005c = _DAT_1f80005c + _DAT_1f800114;
    setCopControlWord(2,0,_DAT_1f800040);
    setCopControlWord(2,0x800,_DAT_1f800044);
    setCopControlWord(2,0x1000,_DAT_1f800048);
    setCopControlWord(2,0x1800,_DAT_1f80004c);
    setCopControlWord(2,0x2000,_DAT_1f800050);
    setCopControlWord(2,0x2800,_DAT_1f800054);
    setCopControlWord(2,0x3000,_DAT_1f800058);
    setCopControlWord(2,0x3800,_DAT_1f80005c);
    FUN_8003c8f4(param_1,bVar1 & 1);
  }
  return;
}

