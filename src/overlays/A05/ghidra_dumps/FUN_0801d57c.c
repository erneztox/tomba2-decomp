// FUN_0801d57c

void FUN_0801d57c(int param_1)

{
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x100;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x800;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x100;
  func_0x000313a0(0x606,param_1 + 0x2c,0xfffffff6,param_1 + 0x54);
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0x800;
  func_0x0003116c(0x607,param_1 + 0x2c,0xfffffff6);
  return;
}

