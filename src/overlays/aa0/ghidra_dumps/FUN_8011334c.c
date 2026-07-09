// FUN_8011334c

void FUN_8011334c(void)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int unaff_s0;
  int iVar4;
  int unaff_s2;
  undefined2 unaff_s3;
  
  iVar3 = func_0x80077870();
  iVar4 = 1;
  if (iVar3 != 0) {
    bVar1 = *(byte *)(unaff_s0 + 6);
    if (bVar1 == 1) {
      FUN_8011bc3c();
      *(undefined1 *)(unaff_s0 + 0x29) = 0;
      FUN_8011c5f8();
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        *(undefined1 *)(unaff_s0 + 0x29) = 0;
        FUN_8011c5f8();
        return;
      }
      func_0x8009a450();
      return;
    }
    if (bVar1 != 2) {
      *(undefined1 *)(unaff_s0 + 0x29) = 0;
      FUN_8011c5f8();
      return;
    }
    func_0x80077b5c();
    if (*(char *)(unaff_s0 + 7) == '\0') {
      func_0x80077b38();
      func_0x8009a450();
      return;
    }
    if (*(char *)(unaff_s0 + 7) != '\x01') {
      *(undefined1 *)(unaff_s0 + 0x29) = 0;
      FUN_8011c5f8();
      return;
    }
    sVar2 = *(short *)(unaff_s0 + 0x40);
    *(short *)(unaff_s0 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *(undefined1 *)(unaff_s0 + 6) = 0;
      *(undefined1 *)(unaff_s0 + 7) = 0;
      while( true ) {
        **(undefined2 **)(unaff_s0 + 0xc0) = 0;
        if (iVar4 == 0) {
          *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0xff86;
          FUN_8012552c();
          return;
        }
        *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0;
        *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = 0;
        *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
        *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38) = unaff_s3;
        *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) = unaff_s3;
        iVar3 = iVar4 + 0x50;
        *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3c) = unaff_s3;
        iVar4 = iVar4 + 1;
        *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3f) = 0;
        func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc0),0xc,iVar3);
        if ((int)(uint)*(byte *)(unaff_s2 + 8) <= iVar4) break;
        iVar3 = func_0x8007aae8();
        *(int *)(unaff_s0 + 0xc4) = iVar3;
        *(undefined2 *)(iVar3 + 6) = 0xffff;
        unaff_s0 = unaff_s0 + 4;
      }
      *(undefined1 *)(unaff_s2 + 0x5e) = 0;
      return;
    }
  }
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  FUN_8011c5f8();
  return;
}

