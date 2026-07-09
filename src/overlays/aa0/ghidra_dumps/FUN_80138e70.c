// FUN_80138e70

void FUN_80138e70(void)

{
  ushort uVar1;
  int in_v0;
  int iVar2;
  int unaff_s0;
  undefined2 uStack00000012;
  short sStack00000016;
  undefined2 uStack0000001a;
  
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
    FUN_80141e64();
    return;
  }
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + in_v0 * *(short *)(unaff_s0 + 0x4e);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  uVar1 = *(short *)(unaff_s0 + 0x42) - 1;
  *(ushort *)(unaff_s0 + 0x42) = uVar1;
  if (((int)((uint)uVar1 << 0x10) < 1) || ((DAT_800e7e80 & 2) != 0)) {
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  }
  uVar1 = *(short *)(unaff_s0 + 0x40) - 1;
  *(ushort *)(unaff_s0 + 0x40) = uVar1;
  if ((int)((uint)uVar1 << 0x10) < 0) {
    uStack00000012 = *(undefined2 *)(unaff_s0 + 0x2e);
    sStack00000016 = *(short *)(unaff_s0 + 0x32) + 0x1e;
    uStack0000001a = *(undefined2 *)(unaff_s0 + 0x36);
    func_0x8003116c(0,&stack0x00000010,0xffffffce);
    func_0x8009a450();
    return;
  }
  if (0x800 < (*(ushort *)(unaff_s0 + 0x58) & 0xfff)) {
    uVar1 = *(ushort *)(unaff_s0 + 0x4e);
    iVar2 = (*(ushort *)(unaff_s0 + 0x58) & 0xfff) - 0xc00;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    *(ushort *)(unaff_s0 + 0x4e) = uVar1 - 0x100;
    iVar2 = (uVar1 - 0x200) + (0x400 - iVar2 >> 6) * -0x100;
    *(short *)(unaff_s0 + 0x4e) = (short)iVar2;
    if (iVar2 * 0x10000 < 1) {
      *(undefined2 *)(unaff_s0 + 0x4e) = 0;
      FUN_80142120();
      return;
    }
  }
  return;
}

