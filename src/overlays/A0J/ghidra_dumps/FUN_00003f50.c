// FUN_00003f50

void FUN_00003f50(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 != '\0') {
    func_0x0010d1f0();
  }
  func_0x00077b5c(param_1);
  return;
}

