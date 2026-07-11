// FUN_08032f04

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032f04(void)

{
  int unaff_s0;
  int unaff_s2;
  
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined1 *)(unaff_s0 + 0x5f) = 0;
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  *(undefined1 *)(unaff_s0 + 0xbf) = 0;
  *(undefined2 *)(unaff_s0 + 0x58) = 0;
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(undefined2 *)(unaff_s0 + 100) = 0;
  *(undefined2 *)(unaff_s0 + 0x66) = 0;
  *(undefined2 *)(unaff_s0 + 0x68) = 0;
  *(undefined2 *)(unaff_s0 + 0x6c) = 0;
  if (*(char *)(unaff_s0 + 3) != '\x04') {
    *(short *)(unaff_s0 + 0x6a) = *(short *)(unaff_s2 + 0x80) + *(short *)(unaff_s0 + 0x80);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

