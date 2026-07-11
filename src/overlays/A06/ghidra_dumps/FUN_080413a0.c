// FUN_080413a0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080413a0(void)

{
  int unaff_s0;
  
  if (*(char *)(unaff_s0 + 0x70) != -1) {
    return 0;
  }
  if (DAT_800bfb03 == '\0') {
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
    func_0x00040cdc();
    *(undefined1 *)(unaff_s0 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_s0 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

