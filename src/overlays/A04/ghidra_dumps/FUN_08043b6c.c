// FUN_08043b6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08043b6c(int param_1)

{
  int iVar1;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x54);
  iVar1 = 0;
  do {
    func_0x00031d24(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48);
    iVar1 = iVar1 + 1;
    func_0x00027768(*(undefined4 *)(param_1 + 0x3c),*(undefined2 *)(param_1 + 0x44),
                    (int)*(short *)(param_1 + 0x32),*(undefined1 *)(param_1 + 0x29));
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x200;
  } while (iVar1 < 8);
  return;
}

