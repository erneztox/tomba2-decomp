// FUN_80116274

void FUN_80116274(undefined1 param_1,int param_2)

{
  byte bVar1;
  int unaff_s0;
  
  func_0x80040d68(param_1,param_2 + 0x6a7c);
  bVar1 = *(byte *)(unaff_s0 + 5);
  *(undefined1 *)(unaff_s0 + 0x70) = 2;
  *(byte *)(unaff_s0 + 5) = bVar1 + 1;
  *(undefined1 *)(bVar1 + 0xc0) = param_1;
  *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  FUN_801282dc();
  return;
}

