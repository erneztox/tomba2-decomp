
void FUN_80051d20(int param_1,undefined4 param_2,short *param_3)

{
  FUN_800844c0(param_1 + 0x98);
  *param_3 = *param_3 + *(short *)(param_1 + 0xac);
  param_3[1] = param_3[1] + *(short *)(param_1 + 0xb0);
  param_3[2] = param_3[2] + *(short *)(param_1 + 0xb4);
  return;
}

