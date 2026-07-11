// FUN_80125800

void FUN_80125800(undefined4 param_1,undefined4 param_2,short param_3,int param_4)

{
  undefined2 in_v0;
  short sVar1;
  short in_v1;
  int unaff_s0;
  int in_lo;
  
  *(undefined2 *)(unaff_s0 + 0x32) = in_v0;
  *(short *)(unaff_s0 + 0x54) = in_v1 + param_3;
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + param_4;
  *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + in_lo;
  sVar1 = FUN_8012e87c();
  if (sVar1 != 0) {
    FUN_8012e7ec();
  }
  return;
}

