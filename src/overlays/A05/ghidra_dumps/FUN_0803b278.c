// FUN_0803b278

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803b278(void)

{
  int unaff_s0;
  uint unaff_s4;
  
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  if (unaff_s4 < 10) {
    *(undefined2 *)(unaff_s0 + 0x70) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_s0 + 0x70) = 2;
  func_0x00077c40();
  if ((unaff_s4 & 1) != 0) {
    *(undefined1 *)(unaff_s0 + 0xbe) = 1;
    *(ushort *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x56) + 0x800U & 0xfff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

