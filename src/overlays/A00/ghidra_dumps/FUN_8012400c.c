// FUN_8012400c

void FUN_8012400c(undefined1 param_1)

{
  short in_v0;
  int iVar1;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 6) = param_1;
  *(undefined2 *)(unaff_s0 + 0x4a) = 0;
  *(short *)(unaff_s0 + 0x5a) = in_v0 + 0x700;
  iVar1 = func_0x80083f50((int)*(short *)(unaff_s0 + 0x4a));
  *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x5a) + (short)((iVar1 << 9) >> 0xc);
  *(ushort *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50) & 0xfff;
  FUN_8012d028();
  return;
}

