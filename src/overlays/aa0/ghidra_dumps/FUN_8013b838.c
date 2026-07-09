// FUN_8013b838

void FUN_8013b838(void)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 == 0) {
                    /* WARNING: Subroutine does not return */
    *(ushort *)(unaff_s0 + 0x62) = *(ushort *)(unaff_s0 + 0x62) & 0xfffb;
    FUN_801402b8();
  }
  if (*(byte *)(unaff_s0 + 7) < 2) {
    FUN_8014482c();
    return;
  }
  *(byte *)(unaff_s0 + 7) = *(byte *)(unaff_s0 + 7) - 1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  FUN_801448fc();
  return;
}

