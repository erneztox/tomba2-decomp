// FUN_08036ad0

void FUN_08036ad0(void)

{
  int iVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x80) = 0x60;
  *(undefined2 *)(unaff_s0 + 0x82) = 0xc0;
  *(undefined2 *)(unaff_s0 + 0x84) = 0xa0;
  *(undefined2 *)(unaff_s0 + 0x86) = 0x100;
  func_0x00041ac0();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  func_0x0004130c();
  *(undefined1 *)(unaff_s0 + 0x5f) = 0;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  *(undefined1 *)(unaff_s0 + 0xbf) = 0;
  iVar1 = func_0x00136c10();
  *(int *)(unaff_s0 + 0x10) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_s0 + 5) = 5;
    *(undefined1 *)(unaff_s0 + 7) = 0;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    *(undefined1 *)(unaff_s0 + 4) = 1;
  }
  return;
}

