// FUN_8013d294

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013d294(void)

{
  int unaff_s0;
  undefined1 unaff_s1;
  
  *(undefined1 *)(unaff_s0 + 7) = unaff_s1;
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  if (*(byte *)(unaff_s0 + 7) < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_s0 + 7) = *(byte *)(unaff_s0 + 7) - 1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  return;
}

