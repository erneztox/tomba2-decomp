// FUN_801317e8

void FUN_801317e8(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 3) == '\0') {
    (*(code *)0x0)();
    return;
  }
  sVar1 = *(short *)(param_1 + 0x62);
  do {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
    func_0x800517f8(param_1);
    FUN_80139c2c(param_1);
  } while ((int)*(short *)(param_1 + 0x32) < (int)sVar1);
  *(int *)(param_1 + 0x30) = (int)sVar1 << 0x10;
  return;
}

