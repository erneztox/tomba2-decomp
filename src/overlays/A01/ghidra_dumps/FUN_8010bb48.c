// FUN_8010bb48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010bb48(void)

{
  short sVar1;
  undefined2 in_v0;
  int iVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s0 + 0x44) = in_v0;
  sVar1 = *(short *)(unaff_s0 + 0x42);
  *(short *)(unaff_s0 + 0x42) = sVar1 + -1;
  *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + unaff_s1 * -0x100;
  if (sVar1 == 1) {
    func_0x80074590(0x8d,0,0);
    iVar2 = unaff_s2 << 0x10;
    if (0x2000 < unaff_s1) {
      iVar2 = 0x20000000;
    }
    *(short *)(unaff_s0 + 0x42) = (short)((uint)(0x3000 - (iVar2 >> 0x10)) >> 8);
  }
  iVar3 = 1;
  iVar2 = unaff_s0;
  if (1 < *(byte *)(unaff_s0 + 8)) {
    do {
      *(short *)(*(int *)(iVar2 + 0xc4) + 0xc) =
           *(short *)(*(int *)(iVar2 + 0xc4) + 0xc) + (*(short *)(unaff_s0 + 0x44) >> 3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(unaff_s0 + 8));
  }
  if ((int)*(short *)(unaff_s0 + 0x36) < *(short *)(unaff_s0 + 0x60) + 300) {
    _DAT_1f8000d2 = _DAT_1f8000d2 + -8;
    if (_DAT_1f8000d2 < 0x2d71) {
      _DAT_1f8000d2 = 0x2d71;
    }
    _DAT_1f8000d6 = _DAT_1f8000d6 + -8;
    if (_DAT_1f8000d6 < -0x12a9) {
      _DAT_1f8000d6 = -0x12a9;
    }
    _DAT_1f8000da = _DAT_1f8000da + 0x10;
    if (0x409f < _DAT_1f8000da) {
      _DAT_1f8000da = 0x409f;
    }
  }
  if (*(short *)(unaff_s0 + 0x60) <= *(short *)(unaff_s0 + 0x36)) {
    _DAT_800e7eb6 = *(undefined2 *)(unaff_s0 + 0x36);
    func_0x8006cba8(unaff_s0 + 0x2c);
    return;
  }
  *(undefined2 *)(unaff_s0 + 0x36) = *(undefined2 *)(unaff_s0 + 0x60);
  FUN_80114c88();
  return;
}

