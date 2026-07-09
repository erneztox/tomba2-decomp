// FUN_801390d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_801390d8(void)

{
  int in_v0;
  int unaff_s0;
  
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
    FUN_801420cc();
    return;
  }
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + in_v0 * *(short *)(unaff_s0 + 0x4e);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

