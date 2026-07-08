
void FUN_80052694(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x44) + -0x40;
  *(short *)(param_1 + 0x44) = sVar1;
  if (sVar1 < 0xa00) {
    *(undefined2 *)(param_1 + 0x44) = 0xa00;
  }
  sVar1 = *(short *)(param_1 + 0x4a) + 0xa0;
  *(short *)(param_1 + 0x4a) = sVar1;
  if (0x1000 < sVar1) {
    *(undefined2 *)(param_1 + 0x4a) = 0x1000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  if (*(short *)(param_1 + 0x66) < *(short *)(param_1 + 0x32)) {
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x66);
  }
  return;
}

