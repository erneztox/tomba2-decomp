// FUN_00007114

void FUN_00007114(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    func_0x00117f2c(param_1,0);
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
  }
  sVar1 = *(short *)(param_1 + 0x42);
  *(short *)(param_1 + 0x42) = sVar1 + -1;
  if (sVar1 == 1) {
    func_0x00117f2c(param_1,1);
    *(undefined2 *)(param_1 + 0x42) = 0x20;
  }
  return;
}

