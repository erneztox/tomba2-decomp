// FUN_80132020

void FUN_80132020(void)

{
  undefined2 in_v0;
  undefined2 *in_v1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  
  while( true ) {
    *in_v1 = in_v0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(undefined2 *)(unaff_s2 + 4);
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = *(undefined2 *)(unaff_s2 + 6);
    unaff_s3 = unaff_s3 + 1;
    if (2 < unaff_s3) {
      *(char *)(unaff_s6 + 0x5e) = (char)unaff_s5;
      return;
    }
    if (unaff_s5 == 0) break;
    func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc4));
    in_v1 = *(undefined2 **)(unaff_s0 + 0xc4);
    in_v0 = *(undefined2 *)(unaff_s2 + 10);
    unaff_s0 = unaff_s0 + 4;
    unaff_s1 = unaff_s1 + 8;
    unaff_s2 = unaff_s2 + 8;
  }
  func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc4));
  **(undefined2 **)(unaff_s0 + 0xc4) = *(undefined2 *)(unaff_s1 + 10);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 2) = *(undefined2 *)(unaff_s1 + 0xc);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 4) = *(undefined2 *)(unaff_s1 + 0xe);
  FUN_8013afe0();
  return;
}

