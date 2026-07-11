// FUN_0801e180

void FUN_0801e180(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00083f50((int)*(short *)(param_1 + 0x76));
  *(short *)(param_1 + 0x2e) = (short)(iVar1 * 0x4b0 >> 0xc) + 0x1600;
  iVar1 = func_0x00083e80((int)*(short *)(param_1 + 0x76));
  *(short *)(param_1 + 0x36) = 0x12c0 - (short)(iVar1 * 0x4b0 >> 0xc);
  return;
}

