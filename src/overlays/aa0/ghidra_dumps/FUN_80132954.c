// FUN_80132954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80132954(void)

{
  undefined1 uVar1;
  short sVar2;
  uint in_v0;
  int unaff_s0;
  
  if ((in_v0 & 3) == 3) {
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    sVar2 = func_0x80085690(-((int)(((uint)*(ushort *)(unaff_s0 + 0x36) - (uint)_DAT_800e7eb6) *
                                   0x10000) >> 0x10),
                            (int)(((uint)*(ushort *)(unaff_s0 + 0x2e) - (uint)_DAT_800e7eae) *
                                 0x10000) >> 0x10);
    uVar1 = func_0x80077768((int)sVar2,(int)*(short *)(unaff_s0 + 0x60),0);
    *(undefined1 *)(unaff_s0 + 0x46) = uVar1;
    func_0x80074590(0x17,0xffffffee,0x1e);
    return;
  }
  return;
}

