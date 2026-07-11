// FUN_8011a168

void FUN_8011a168(void)

{
  undefined1 in_v0;
  ushort uVar1;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 5) = in_v0;
  if (*(char *)(unaff_s0 + 6) == '\0') {
    uVar1 = *(short *)(unaff_s0 + 0x40) - 1;
    *(ushort *)(unaff_s0 + 0x40) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 0) {
      func_0x80041718();
      *(undefined2 *)(unaff_s0 + 0x40) = 0;
      *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
      FUN_8012320c();
      return;
    }
  }
  else {
    if (*(char *)(unaff_s0 + 6) != '\x01') {
      FUN_8012320c();
      return;
    }
    if ((*(short *)(unaff_s0 + 0x40) == 0) && (*(short *)(*(int *)(unaff_s0 + 0x38) + 4) != 0)) {
      func_0x80074590(0x31,0xfffffffd,0xfffffff6);
      *(short *)(unaff_s0 + 0x40) = *(short *)(unaff_s0 + 0x40) + 1;
    }
    if (*(char *)(unaff_s0 + 0x79) == '\x01') {
      func_0x80041718();
      uVar1 = func_0x8009a450();
      *(ushort *)(unaff_s0 + 0x40) = (uVar1 & 0x1f) + 0x18;
      *(undefined1 *)(unaff_s0 + 6) = 0;
      FUN_8012320c();
      return;
    }
  }
  func_0x80041098();
  func_0x8004190c();
  return;
}

