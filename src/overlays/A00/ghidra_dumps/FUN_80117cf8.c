// FUN_80117cf8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80117cf8(void)

{
  ushort uVar1;
  int in_v0;
  int unaff_s0;
  
  if (*(char *)(in_v0 + -0x5b9) == '\x01') {
    *(ushort *)(unaff_s0 + 0x40) = (*(ushort *)(unaff_s0 + 0x68) & 1) * -0x14 + 0x1e;
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    FUN_80120f2c();
    return;
  }
  if (DAT_800e7eaa == '\x03') {
    uVar1 = *(short *)(unaff_s0 + 0x40) - 1;
    *(ushort *)(unaff_s0 + 0x40) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 1) {
      if (*(char *)(unaff_s0 + 1) != '\0') {
        func_0x8009a450();
        return;
      }
      func_0x8009a450();
      return;
    }
  }
  else if ((DAT_800e7eaa != '\n') || (0x170c < _DAT_1f800160)) {
    *(undefined1 *)(unaff_s0 + 4) = 3;
    FUN_80120f2c();
    return;
  }
  return;
}

