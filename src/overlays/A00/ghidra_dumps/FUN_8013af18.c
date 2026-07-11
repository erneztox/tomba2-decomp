// FUN_8013af18

void FUN_8013af18(void)

{
  int unaff_s0;
  int unaff_s1;
  
  *(ushort *)(unaff_s1 + 2) = *(ushort *)(unaff_s1 + 2) ^ 1;
                    /* WARNING: Subroutine does not return */
  *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x56) + 0x800;
  FUN_801402b8();
}

