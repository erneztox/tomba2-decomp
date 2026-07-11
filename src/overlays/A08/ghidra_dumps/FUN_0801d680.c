// FUN_0801d680

void FUN_0801d680(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00040b48(0x89);
  if (-1 < iVar1) {
    func_0x0004a3d4(param_1);
    DAT_800bf93d = DAT_800bf93d | 0x80;
  }
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}

