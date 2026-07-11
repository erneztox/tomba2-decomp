// FUN_08047010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08047010(int param_1)

{
  int iVar1;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar1 = 0;
  _DAT_1f800090 = 0;
  do {
    func_0x00031ac4(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48);
    func_0x00027768(*(undefined4 *)(param_1 + 0x3c),0,(int)*(short *)(param_1 + 0x32),0);
    iVar1 = iVar1 + 1;
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x400;
  } while (iVar1 < 4);
  return;
}

