// FUN_8013c994

void FUN_8013c994(void)

{
  undefined4 in_v0;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined4 *)(unaff_s0 + 0x10) = in_v0;
  *(undefined4 *)(unaff_s0 + 0x14) = 0;
  *(ushort *)(unaff_s1 + 2) = *(ushort *)(unaff_s1 + 2) | 1;
  *(undefined2 *)(unaff_s0 + 0x50) = 0;
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
                    /* WARNING: Subroutine does not return */
  FUN_801402b8();
}

