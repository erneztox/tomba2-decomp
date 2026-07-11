// FUN_8011dc4c

void FUN_8011dc4c(void)

{
  int iVar1;
  int unaff_s0;
  undefined2 *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    unaff_s2 = unaff_s2 + 1;
    if ((int)(uint)*(byte *)(unaff_s3 + 8) <= unaff_s2) {
      *(undefined2 *)(unaff_s3 + 0x60) = 0;
      return;
    }
    iVar1 = func_0x8007aae8();
    *(int *)(unaff_s0 + 0xc4) = iVar1;
    *(undefined2 *)(iVar1 + 6) = *unaff_s1;
    **(undefined2 **)(unaff_s0 + 0xc4) = unaff_s1[1];
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 2) = unaff_s1[2];
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 4) = unaff_s1[3];
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 10) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 0xc) = 0;
    func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc4),0xc,(int)(short)unaff_s1[4]);
    if (unaff_s2 == 2) break;
    *(undefined1 *)(*(int *)(unaff_s0 + 0xc4) + 0x3f) = 0;
    unaff_s1 = unaff_s1 + 5;
    unaff_s0 = unaff_s0 + 4;
  }
  *(undefined1 *)(*(int *)(unaff_s3 + 200) + 0x3f) = 0x40;
  FUN_80126be4();
  return;
}

