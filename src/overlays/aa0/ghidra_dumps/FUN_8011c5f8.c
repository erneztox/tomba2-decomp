// FUN_8011c5f8

void FUN_8011c5f8(void)

{
  int iVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  undefined2 unaff_s3;
  
  while( true ) {
    if ((int)(uint)*(byte *)(unaff_s2 + 8) <= unaff_s1) {
      *(undefined1 *)(unaff_s2 + 0x5e) = 0;
      return;
    }
    iVar1 = func_0x8007aae8();
    *(int *)(unaff_s0 + 0xc4) = iVar1;
    *(undefined2 *)(iVar1 + 6) = 0xffff;
    **(undefined2 **)(unaff_s0 + 0xc4) = 0;
    if (unaff_s1 == 0) break;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 2) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 4) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 10) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0xc) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x38) = unaff_s3;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x3a) = unaff_s3;
    iVar1 = unaff_s1 + 0x50;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0x3c) = unaff_s3;
    unaff_s1 = unaff_s1 + 1;
    *(undefined1 *)(*(int *)(unaff_s0 + 0xc4) + 0x3f) = 0;
    func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc4),0xc,iVar1);
    unaff_s0 = unaff_s0 + 4;
  }
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 2) = 0xff86;
  FUN_8012552c();
  return;
}

