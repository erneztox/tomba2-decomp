// FUN_8013a008

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8013a034) */

int FUN_8013a008(int param_1)

{
  int unaff_s0;
  short unaff_s1;
  
  if ((*(ushort *)(param_1 + 2) & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_801406e4();
  if (*(char *)(unaff_s0 + 0x29) == '\0') {
    if ((*(ushort *)(unaff_s0 + 0x62) & 1) == 0) {
      *(int *)(unaff_s0 + 0x2c) =
           *(int *)(unaff_s0 + 0x2c) +
           (int)*(short *)(unaff_s0 + 0x48) * (int)*(short *)(unaff_s0 + 0x4e);
      *(int *)(unaff_s0 + 0x34) =
           *(int *)(unaff_s0 + 0x34) +
           (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
      return (int)unaff_s1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_s0 + 0x4e) = 0xf600;
  *(undefined2 *)(unaff_s0 + 0x42) = 0x1e;
  *(undefined2 *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x50) = 0xffc4;
                    /* WARNING: Subroutine does not return */
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  FUN_801402b8();
}

