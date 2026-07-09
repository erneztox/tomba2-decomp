// FUN_80139580

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_80139580(void)

{
  int unaff_s0;
  
  if (*(char *)(unaff_s0 + 4) == '\x02') {
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  return 1;
}

