// FUN_8013ada8

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013ada8(void)

{
  int unaff_s0;
  
  if (0x13 < *(byte *)(unaff_s0 + 7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(unaff_s0 + 7) = *(byte *)(unaff_s0 + 7) + 1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  FUN_801448fc();
  return;
}

