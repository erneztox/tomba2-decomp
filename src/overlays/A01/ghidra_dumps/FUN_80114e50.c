// FUN_80114e50

void FUN_80114e50(void)

{
  int in_v0;
  int iVar1;
  int unaff_s1;
  int unaff_s3;
  
  iVar1 = unaff_s1 + unaff_s3 * 2;
  if (in_v0 >> 0x14 != (int)*(short *)(iVar1 + 0x60)) {
    func_0x80051b04(*(undefined4 *)(unaff_s1 + 200),0x15);
    *(short *)(iVar1 + 0x60) = (short)(in_v0 >> 0x14);
  }
  return;
}

