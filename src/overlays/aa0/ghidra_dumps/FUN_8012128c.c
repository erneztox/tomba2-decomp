// FUN_8012128c

void FUN_8012128c(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined2 *in_v0;
  undefined2 in_v1;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x2e) = in_v1;
  *(undefined2 *)(unaff_s1 + 0x32) = *in_v0;
  param_2 = param_1 * 10 + param_2;
  sVar1 = *(short *)(param_2 + 4);
  sVar2 = *(short *)(param_2 + 8);
  *(undefined2 *)(unaff_s1 + 0x4e) = *(undefined2 *)(unaff_s1 + 0x2e);
  *(short *)(unaff_s1 + 0x36) = (short)(((int)sVar1 + (int)sVar2) / 2);
  *(undefined2 *)(unaff_s1 + 0x50) = *(undefined2 *)(unaff_s1 + 0x32);
  *(undefined2 *)(unaff_s1 + 0x52) = *(undefined2 *)(unaff_s1 + 0x32);
  FUN_80129e8c();
  FUN_8012a2c4();
  return;
}

