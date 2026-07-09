// FUN_8013a548

void FUN_8013a548(void)

{
  undefined2 in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x32) = in_v1;
  if (-1 < *(short *)(unaff_s0 + 0x50)) {
    FUN_8014357c();
    return;
  }
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
    FUN_801436a4();
    return;
  }
  *(int *)(unaff_s0 + 0x2c) =
       *(int *)(unaff_s0 + 0x2c) +
       (int)*(short *)(unaff_s0 + 0x48) * (int)*(short *)(unaff_s0 + 0x4e);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
  return;
}

