// FUN_8013a184

/* WARNING: Control flow encountered bad instruction data */

int FUN_8013a184(void)

{
  ushort uVar1;
  undefined2 in_v1;
  int unaff_s0;
  short unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x32) = in_v1;
  FUN_801406e4();
  uVar1 = *(ushort *)(unaff_s0 + 0x42);
  *(ushort *)(unaff_s0 + 0x42) = uVar1 - 1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    unaff_s1 = 1;
  }
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_s0 + 0x2c) =
       *(int *)(unaff_s0 + 0x2c) +
       (int)*(short *)(unaff_s0 + 0x48) * (int)*(short *)(unaff_s0 + 0x4e);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
  return (int)unaff_s1;
}

