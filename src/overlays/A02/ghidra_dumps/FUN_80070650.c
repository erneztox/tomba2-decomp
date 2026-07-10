// FUN_80070650

void FUN_80070650(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 0x60) != 0) {
    sVar1 = *(short *)(param_1 + 0x2e) + 8;
    *(short *)(param_1 + 0x2e) = sVar1;
    if (*(short *)(param_1 + 0x60) <= sVar1) {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x60);
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}

