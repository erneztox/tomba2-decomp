// FUN_8012cf4c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012cf4c(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int in_v0;
  int unaff_s0;
  uint unaff_s2;
  uint uVar3;
  int unaff_s5;
  
  *(undefined1 *)(unaff_s2 + 0xd) = 0;
  *(undefined1 *)(unaff_s2 + 0xb) = 0;
  *(undefined1 *)(unaff_s2 + 0x29) = 0;
  *(undefined2 *)(unaff_s2 + 0x2e) = *(undefined2 *)(in_v0 * 8 + param_1);
  *(undefined2 *)(unaff_s2 + 0x32) =
       *(undefined2 *)((uint)*(byte *)(unaff_s2 + 3) * 8 + param_1 + 2);
  uVar1 = *(undefined2 *)((uint)*(byte *)(unaff_s2 + 3) * 8 + param_1 + 4);
  *(undefined2 *)(unaff_s2 + 0x54) = 0;
  *(undefined2 *)(unaff_s2 + 0x36) = uVar1;
  uVar1 = *(undefined2 *)((uint)*(byte *)(unaff_s2 + 3) * 8 + param_1 + 6);
  *(undefined2 *)(unaff_s2 + 0x58) = 0;
  *(undefined2 *)(unaff_s2 + 0x56) = uVar1;
  if ((*(char *)(unaff_s2 + 3) == '\0') && (*(short *)(unaff_s2 + 0x2e) < _DAT_1f800160)) {
    *(undefined2 *)(unaff_s2 + 0x2e) = _DAT_8014a7ba;
  }
  *(undefined2 *)(unaff_s2 + 0x48) = 0x200;
  *(undefined2 *)(unaff_s2 + 0x4a) = 0;
  *(undefined2 *)(unaff_s2 + 0x4a) = 0x32;
  *(undefined2 *)(unaff_s2 + 0x60) = *(undefined2 *)(unaff_s2 + 0x32);
  uVar2 = thunk_EXT_FUN_80000400
                    (((int)((longlong)((int)((uint)_DAT_00000192 << 0x10) >> 0x10) *
                            (longlong)(int)(unaff_s2 | 0x6667) >> 0x28) -
                     ((int)((uint)_DAT_00000192 << 0x10) >> 0x1f)) * 0x10000 >> 0x10,
                     ((int)((longlong)((int)((uint)_DAT_1f800164 << 0x10) >> 0x10) *
                            (longlong)(int)(unaff_s2 | 0x6667) >> 0x28) -
                     ((int)((uint)_DAT_1f800164 << 0x10) >> 0x1f)) * 0x10000 >> 0x10);
  _DAT_8014c800 = uVar2 & 0xf;
  if (_DAT_8014c800 != 4) {
    if (_DAT_8014c800 < 5) {
      if ((_DAT_8014c800 < 3) && ((uVar2 & 0xf) != 0)) {
        if (0xc00 < unaff_s0 - 0x200U) {
          FUN_8013f118();
          return;
        }
        _DAT_800a3f90 = 0x2580;
        FUN_8013f130();
        return;
      }
      goto LAB_801361a8;
    }
    if (_DAT_8014c800 != 8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  _DAT_800a3f90 = 0x2d00;
  _DAT_800a3f94 = 0x155;
LAB_801361a8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_1f800207) {
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    _DAT_800a3f90 = 0x3200;
    _DAT_800a3f94 = 0x1c7;
    uVar3 = 0xfffffe39U - (int)_DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar3);
    func_0x80083f50(uVar3);
    uVar3 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar3);
    func_0x80083f50(uVar3);
    func_0x80083e80((int)_DAT_1f8000f0);
    func_0x80083e80(-(int)_DAT_1f8000f2);
    func_0x80083f50(-(int)_DAT_1f8000f2);
    *(undefined1 *)(unaff_s5 + 6) = 0;
    FUN_8013f4dc();
    return;
  }
}

