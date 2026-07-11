// FUN_8011c090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011c090(void)

{
  undefined1 in_v0;
  int unaff_s2;
  int unaff_s3;
  
  *(undefined1 *)(unaff_s3 + 1) = in_v0;
  func_0x80077e7c();
  func_0x80051d90();
  *(undefined2 *)(unaff_s3 + 0x2e) = _DAT_1f8000c0;
  *(undefined2 *)(unaff_s3 + 0x32) = _DAT_1f8000c2;
  *(undefined2 *)(unaff_s3 + 0x36) = _DAT_1f8000c4;
  _DAT_1f800120 = func_0x80077b5c();
  *(undefined1 *)(unaff_s2 + 0x29) = 0;
  _DAT_1f800122 = 0x30;
  _DAT_1f800124 = 0;
  func_0x8004bd64(&DAT_1f8000c0,2,0,_DAT_1f8000d0);
  _DAT_1f8000c0 = CONCAT11(DAT_1f800001,DAT_1f8000c0);
  if (DAT_800bf9b5 == '\x06') {
    func_0x8004d4c4(0x23,1);
    func_0x8004b0d8(&DAT_1f8000c0);
    _DAT_1f8000c4 = CONCAT11(DAT_1f8000c4_1,3);
  }
  return;
}

