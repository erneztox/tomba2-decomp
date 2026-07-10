// FUN_00008ed4

void FUN_00008ed4(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 5) == '\0') && (iVar1 = func_0x0007e038(0x32,3), iVar1 != 0)) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    DAT_800bf841 = 0;
    func_0x00074bf8(0xb);
    func_0x0004fb20();
  }
  func_0x000517f8(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

