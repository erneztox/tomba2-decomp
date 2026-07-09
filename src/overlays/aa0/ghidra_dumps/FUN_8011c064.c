// FUN_8011c064

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011c064(void)

{
  undefined1 in_v0;
  undefined2 uVar1;
  undefined1 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  *(undefined1 *)(unaff_s2 + 8) = in_v0;
  *(undefined2 *)(unaff_s2 + 0x88) = 0x18;
  *(undefined1 *)(unaff_s2 + 0x47) = 0;
  *(undefined2 *)(unaff_s2 + 0x8a) = 0x50;
  *(undefined2 *)(unaff_s2 + 0x8c) = 0;
  uVar1 = 1;
  if (unaff_s0[0x3f] == '\0') {
    *(undefined1 *)(unaff_s2 + 0x29) = 0;
  }
  else {
    *(undefined1 *)(unaff_s3 + 1) = 1;
    func_0x80077e7c();
    unaff_s1 = 0x1f800000;
    unaff_s0 = &DAT_1f8000c0;
    func_0x80051d90();
    *(undefined2 *)(unaff_s3 + 0x2e) = _DAT_1f8000c0;
    *(undefined2 *)(unaff_s3 + 0x32) = _DAT_1f8000c2;
    *(undefined2 *)(unaff_s3 + 0x36) = _DAT_1f8000c4;
    uVar1 = func_0x80077b5c();
    *(undefined1 *)(unaff_s2 + 0x29) = 0;
  }
  *(undefined2 *)(unaff_s0 + 0x60) = uVar1;
  *(undefined2 *)(unaff_s0 + 0x62) = 0x30;
  *(undefined2 *)(unaff_s0 + 100) = 0;
  func_0x8004bd64(unaff_s0,2,0,*(undefined4 *)(unaff_s1 + 0xd0));
  unaff_s0[1] = *(undefined1 *)(unaff_s1 + 1);
  if (DAT_800bf9b5 == '\x06') {
    func_0x8004d4c4(0x23,1);
    func_0x8004b0d8(unaff_s0);
    unaff_s0[4] = 3;
  }
  return;
}

