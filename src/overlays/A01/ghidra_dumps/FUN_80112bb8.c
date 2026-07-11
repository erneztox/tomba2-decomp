// FUN_80112bb8

void FUN_80112bb8(undefined4 param_1,char param_2)

{
  char in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0xbc) = 0x1000;
  *(undefined2 *)(unaff_s0 + 0xba) = 0x1000;
  *(undefined2 *)(unaff_s0 + 0xb8) = 0x1000;
  *(char *)(unaff_s0 + 4) = in_v1 + param_2;
  *(undefined1 *)(unaff_s0 + 0xd) = 0;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0xfc00;
  func_0x8004130c();
  *(undefined1 *)(unaff_s0 + 0x46) = *(undefined1 *)(unaff_s0 + 0xbe);
  thunk_FUN_80124efc();
  return;
}

