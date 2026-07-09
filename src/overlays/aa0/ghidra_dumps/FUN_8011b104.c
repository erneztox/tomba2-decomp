// FUN_8011b104

void FUN_8011b104(void)

{
  short sVar1;
  uint uVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  int unaff_s0;
  
  uVar2 = in_v0 / 3;
  if (in_v0 != uVar2 * 3) {
    *(undefined2 *)(unaff_s0 + 0x4a) = 0xf400;
    *(undefined2 *)(unaff_s0 + 0x50) = 0x200;
    sVar1 = *(short *)(unaff_s0 + 0x4a);
    iVar3 = (uint)*(ushort *)(unaff_s0 + 0x4a) + (uint)*(ushort *)(unaff_s0 + 0x50);
    *(short *)(unaff_s0 + 0x4a) = (short)iVar3;
    *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + sVar1 * 0x100;
    if (iVar3 * 0x10000 < 1) {
      func_0x80077b5c();
      return;
    }
    iVar3 = *(byte *)(unaff_s0 + 5) + 1;
    *(char *)(unaff_s0 + 5) = (char)iVar3;
code_r0x801241a4:
    if (iVar3 == 0) {
      func_0x8009a450();
      return;
    }
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x4a) = 0xec00;
  uVar4 = (uint)*(byte *)(unaff_s0 + 6);
  if (uVar4 != uVar2) {
    if (1 < uVar4) {
      if (uVar4 != 2) {
        return;
      }
      iVar3 = func_0x80083f50((int)*(short *)(unaff_s0 + 0x4a));
      *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x5a) + (short)((iVar3 << 7) >> 0xc);
      *(ushort *)(unaff_s0 + 0x4a) =
           *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50) * 2 & 0xfff;
      iVar3 = (int)*(short *)(unaff_s0 + 0x4a);
      goto code_r0x801241a4;
    }
    if (uVar4 != 0) {
      return;
    }
    *(char *)(unaff_s0 + 6) = (char)uVar2;
    *(undefined2 *)(unaff_s0 + 0x4a) = 0;
    *(short *)(unaff_s0 + 0x5a) = *(short *)(unaff_s0 + 0x56) + 0x300;
  }
  iVar3 = func_0x80083f50((int)*(short *)(unaff_s0 + 0x4a));
  *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x5a) + (short)((iVar3 << 8) >> 0xc);
  *(ushort *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50) & 0xfff;
  return;
}

