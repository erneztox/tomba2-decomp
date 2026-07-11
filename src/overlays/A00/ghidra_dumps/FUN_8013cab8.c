// FUN_8013cab8

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013cab8(void)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 < 1) {
    *(undefined2 *)(unaff_s0 + 0x40) = 0x10;
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_801406e4();
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x14;
  return;
}

