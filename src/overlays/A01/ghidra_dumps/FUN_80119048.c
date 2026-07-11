// FUN_80119048

void FUN_80119048(void)

{
  undefined1 in_v0;
  int unaff_s0;
  undefined1 unaff_s2;
  
  *(undefined1 *)(unaff_s0 + 0x5e) = in_v0;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  func_0x80074590(0x93,0,0);
  func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc0),0xc,0x2d);
  *(undefined2 *)(unaff_s0 + 0xe) = 0;
  if ((*(char *)(unaff_s0 + 3) != '\0') && (*(char *)(unaff_s0 + 3) != '\x03')) {
    return;
  }
  *(undefined2 *)(unaff_s0 + 0xe) = 0;
  *(undefined1 *)(unaff_s0 + 3) = unaff_s2;
  FUN_80122114();
  return;
}

