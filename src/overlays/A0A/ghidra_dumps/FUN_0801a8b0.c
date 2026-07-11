// FUN_0801a8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a8b0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = 0;
  bVar1 = *(byte *)(param_1 + 0x53);
  iVar2 = 0;
  do {
    func_0x0003265c(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48);
    func_0x00027768(0x8011e870,bVar1 & 1,(int)*(short *)(param_1 + 0x32),bVar1 & 0xe0);
    iVar2 = iVar2 + 1;
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x400;
  } while (iVar2 < 4);
  return;
}

