// FUN_0802e7e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802e7e8(int param_1)

{
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = *(undefined4 *)(param_1 + 0x58);
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
  func_0x000318a0(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48);
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -0x400;
  func_0x00027768(0x801386bc,0,0xffffffec,*(undefined4 *)(param_1 + 0x5c));
  if (*(char *)(param_1 + 0x2b) != '\0') {
    func_0x000318a0(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48);
    func_0x00027768(0x80138794,0,0xffffffec,*(undefined4 *)(param_1 + 0x5c));
  }
  return;
}

