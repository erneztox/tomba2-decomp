// FUN_80121518

void FUN_80121518(undefined4 param_1)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s4;
  
  *(undefined2 *)(unaff_s1 + 0xc2) = *(undefined2 *)(unaff_s4 + 0x30);
  *(undefined2 *)(unaff_s1 + 0xc4) = *(undefined2 *)(unaff_s4 + 0x34);
  func_0x80084110(param_1,unaff_s4 + 0x18);
  func_0x80084220(unaff_s1 + 0xc0,unaff_s0 + 0x14);
  *(int *)(unaff_s0 + 0x14) = *(int *)(unaff_s0 + 0x14) + *(int *)(unaff_s2 + 0x14);
  iVar1 = *(int *)(unaff_s2 + 0x1c);
  *(int *)(unaff_s0 + 0x18) = *(int *)(unaff_s0 + 0x18) + *(int *)(unaff_s2 + 0x18);
  *(int *)(unaff_s0 + 0x1c) = *(int *)(unaff_s0 + 0x1c) + iVar1;
  func_0x80084660();
  func_0x80084690();
  FUN_8012a2d8();
  return;
}

