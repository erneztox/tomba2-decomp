// FUN_8013d1a8

void FUN_8013d1a8(void)

{
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x4e) = 0;
  *(undefined1 *)(unaff_s0 + 7) = 1;
  if (*(short *)(*(int *)(unaff_s0 + 0x38) + 4) != 0) {
    *(ushort *)(unaff_s1 + 2) = *(ushort *)(unaff_s1 + 2) ^ 1;
                    /* WARNING: Subroutine does not return */
    *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x56) + 0x800;
    FUN_801402b8();
  }
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  return;
}

