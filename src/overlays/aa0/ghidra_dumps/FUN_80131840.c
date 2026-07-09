// FUN_80131840

void FUN_80131840(void)

{
  undefined4 in_v1;
  int unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  
  *(undefined4 *)(unaff_s0 + 0x30) = in_v1;
  while (FUN_80139c2c(), *(short *)(unaff_s0 + 0x32) < unaff_s1) {
    *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
    func_0x800517f8();
  }
  *(undefined4 *)(unaff_s0 + 0x30) = unaff_s2;
  return;
}

