// FUN_80111304

void FUN_80111304(undefined4 param_1,int param_2,int param_3)

{
  undefined2 in_v0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s1 + 0x2e) = in_v0;
  *(undefined2 *)(unaff_s1 + 0x36) = 0x19cd;
  *(undefined1 *)(unaff_s2 + 7) = 0;
  *(char *)(unaff_s0 + 6) = (char)unaff_s1;
  func_0x80040cdc(param_1,param_2 + -0x1b14,param_3 + -0x67ac);
  *(char *)(unaff_s0 + 0x70) = (char)unaff_s1;
  FUN_8012348c();
  return;
}

