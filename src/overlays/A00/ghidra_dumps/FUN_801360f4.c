// FUN_801360f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801360f4(int param_1)

{
  ushort uVar1;
  int in_v1;
  int unaff_s0;
  uint uVar2;
  int unaff_s5;
  int in_hi;
  
  uVar1 = thunk_EXT_FUN_80000400(param_1 >> 0x10,((in_hi >> 8) - in_v1) * 0x10000 >> 0x10);
  _DAT_8014c800 = uVar1 & 0xf;
  if (_DAT_8014c800 != 4) {
    if (_DAT_8014c800 < 5) {
      if ((_DAT_8014c800 < 3) && ((uVar1 & 0xf) != 0)) {
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
    uVar2 = 0xfffffe39U - (int)_DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar2);
    func_0x80083f50(uVar2);
    uVar2 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar2);
    func_0x80083f50(uVar2);
    func_0x80083e80((int)_DAT_1f8000f0);
    func_0x80083e80(-(int)_DAT_1f8000f2);
    func_0x80083f50(-(int)_DAT_1f8000f2);
    *(undefined1 *)(unaff_s5 + 6) = 0;
    FUN_8013f4dc();
    return;
  }
}

