
void FUN_8005262c(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x44) + 0x200;
  *(short *)(param_1 + 0x44) = sVar1;
  if (0x1800 < sVar1) {
    *(undefined2 *)(param_1 + 0x44) = 0x1800;
  }
  sVar1 = *(short *)(param_1 + 0x4a) + 0x200;
  *(short *)(param_1 + 0x4a) = sVar1;
  if (0x1000 < sVar1) {
    *(undefined2 *)(param_1 + 0x4a) = 0x1000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * -0x100;
  return;
}

