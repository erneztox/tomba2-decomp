// FUN_8010ab34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010ab34(void)

{
  undefined1 uVar1;
  int in_v1;
  int unaff_s0;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  
  uVar1 = (undefined1)(in_v1 >> 4);
  *(undefined1 *)(unaff_s0 + 0x46) = uVar1;
  if (*(char *)(unaff_s3 + 0x5e) != '\0') {
    *(undefined1 *)(unaff_s0 + 0x2b) = 0x81;
    *(undefined1 *)(unaff_s0 + 0x7a) = uVar1;
    func_0x80040cdc();
    *(undefined1 *)(unaff_s0 + 0x70) = 2;
    *(undefined1 *)(unaff_s0 + 5) = 2;
    *(undefined2 *)(unaff_s0 + 0x2e) = _DAT_0000002e;
    *(undefined2 *)(unaff_s0 + 0x36) =
         *(undefined2 *)(*(int *)(unaff_s2 + (uint)*(byte *)(unaff_s0 + 0x5f) * 4 + 0xc0) + 0x34);
    *(short *)(unaff_s0 + 0x32) =
         *(short *)(unaff_s0 + 0x32) + (short)(char)((ushort)*(undefined2 *)(unaff_s0 + 0x4a) >> 8);
    *(ushort *)(unaff_s0 + 0x54) =
         *(short *)(unaff_s0 + 0x54) + (*(short *)(unaff_s0 + 0x44) >> 4) & 0xfff;
    FUN_80126040();
    *(short *)(unaff_s0 + 0xb8) = *(short *)(unaff_s0 + 0xb8) + -0x40;
    *(short *)(unaff_s0 + 0xbc) = *(short *)(unaff_s0 + 0xbc) + -0x40;
    *(short *)(unaff_s0 + 0xba) = *(short *)(unaff_s0 + 0xba) + -0x40;
    FUN_80125c1c();
    return;
  }
  *(undefined1 *)(unaff_s5 + 0x182) = 0;
  FUN_80113c08();
  return;
}

