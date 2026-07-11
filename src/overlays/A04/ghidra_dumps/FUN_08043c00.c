// FUN_08043c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08043c00(int param_1)

{
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x54);
  func_0x00031d24(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48);
  func_0x00027768(*(undefined4 *)(param_1 + 0x3c),*(undefined2 *)(param_1 + 0x44),
                  (int)*(short *)(param_1 + 0x32),*(undefined1 *)(param_1 + 0x29));
  return;
}

