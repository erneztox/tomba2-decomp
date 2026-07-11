// FUN_80125c6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125c6c(int param_1)

{
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = *(undefined4 *)(param_1 + 0x50);
  func_0x800318a0(param_1 + 0x2c,0x800a1cd4,param_1 + 0x48);
  func_0x80027768(0x80137d94,(int)*(short *)(param_1 + 0x4e),(int)*(short *)(param_1 + 0x32),0);
  return;
}

