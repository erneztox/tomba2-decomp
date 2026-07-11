// FUN_8013b768

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013b768(void)

{
  int in_v1;
  int unaff_s0;
  
  if (in_v1 == 0) {
    *(undefined2 *)(unaff_s0 + 6) = 1;
  }
  else if (in_v1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(unaff_s0 + 7) == '\0') {
                    /* WARNING: Subroutine does not return */
    *(ushort *)(unaff_s0 + 0x62) = *(ushort *)(unaff_s0 + 0x62) & 0xfffb;
    FUN_801402b8();
  }
  if (*(byte *)(unaff_s0 + 7) < 2) {
    FUN_80144788();
    return;
  }
  *(byte *)(unaff_s0 + 7) = *(byte *)(unaff_s0 + 7) - 1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  FUN_801448fc();
  return;
}

