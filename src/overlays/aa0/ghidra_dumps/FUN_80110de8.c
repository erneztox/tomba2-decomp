// FUN_80110de8

void FUN_80110de8(void)

{
  undefined2 uVar1;
  int unaff_s1;
  
  uVar1 = func_0x800782b0(unaff_s1 + 0x2c);
  *(undefined2 *)(unaff_s1 + 0x42) = uVar1;
  *(char *)(unaff_s1 + 7) = *(char *)(unaff_s1 + 7) + '\x01';
  FUN_80119e84();
  return;
}

