// FUN_80109f60

void FUN_80109f60(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x80040c00(0x65);
  if (-1 < iVar1) {
    func_0x8004d4c4(0x3e,1);
    func_0x8004b0d8(param_1);
    DAT_800bf9ec = DAT_800bf9ec + (char)(1 << ((*(byte *)(param_1 + 3) & 1) << 1));
  }
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}

