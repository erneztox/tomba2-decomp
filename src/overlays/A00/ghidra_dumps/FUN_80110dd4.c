// FUN_80110dd4

void FUN_80110dd4(void)

{
  undefined1 in_v0;
  undefined2 uVar1;
  short *unaff_s0;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 0x70) = in_v0;
  func_0x80041b08();
  uVar1 = func_0x800782b0(unaff_s1 + 0x2c,(int)*unaff_s0,(int)unaff_s0[2]);
  *(undefined2 *)(unaff_s1 + 0x42) = uVar1;
  *(char *)(unaff_s1 + 7) = *(char *)(unaff_s1 + 7) + '\x01';
  FUN_80119e84();
  return;
}

