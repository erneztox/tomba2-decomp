// FUN_08020004

void FUN_08020004(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00040b48(0x85);
  if (-1 < iVar1) {
    func_0x0004d4c4(0x94,1);
    func_0x0004b0d8(param_1);
    DAT_800bf939 = DAT_800bf939 | 0x10;
  }
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}

