// FUN_08023ed4

void FUN_08023ed4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x0011cedc();
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  iVar1 = func_0x0011c848(param_1,1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  func_0x0011c974(param_1);
  return;
}

