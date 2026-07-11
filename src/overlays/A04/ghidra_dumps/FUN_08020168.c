// FUN_08020168

void FUN_08020168(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00040c00(0x66);
  if (-1 < iVar1) {
    func_0x0004d4c4(0x3f,1);
    func_0x0004b0d8(param_1);
    DAT_800bf9ec = DAT_800bf9ec + (char)(1 << ((*(byte *)(param_1 + 3) & 0xf) << 1));
  }
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}

