// FUN_00024bd8

/* WARNING: Control flow encountered bad instruction data */

void FUN_00024bd8(void)

{
  int in_v0;
  int unaff_s0;
  
  if (0 < in_v0) {
    *(ushort *)(unaff_s0 + 0x54) = *(short *)(unaff_s0 + 0x54) + 0x100U & 0xfff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_s0 + 0x80) = 0x8c;
  *(undefined2 *)(unaff_s0 + 0x82) = 0x118;
  *(undefined2 *)(unaff_s0 + 0x84) = 0x88;
  *(undefined2 *)(unaff_s0 + 0x86) = 0xc4;
  *(undefined1 *)(unaff_s0 + 6) = 0;
  FUN_00041194();
  func_0x00077c40();
  return;
}

