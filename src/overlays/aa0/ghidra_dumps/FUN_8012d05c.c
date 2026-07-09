// FUN_8012d05c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012d05c(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int extraout_v1;
  int in_t0;
  int unaff_s0;
  int unaff_s2;
  uint uVar3;
  int unaff_s5;
  
  *(undefined2 *)(unaff_s2 + 0x2e) =
       *(undefined2 *)((uint)*(byte *)(unaff_s2 + 3) * 8 + -0x7feb5860);
  *(undefined2 *)(unaff_s2 + 0x32) =
       *(undefined2 *)((uint)*(byte *)(unaff_s2 + 3) * 8 + -0x7feb585e);
  *(undefined2 *)(unaff_s2 + 0x36) =
       *(undefined2 *)((uint)*(byte *)(unaff_s2 + 3) * 8 + -0x7feb585c);
  if (((DAT_1f800207 < 0x16) ||
      (((DAT_1f800207 == 0x17 && (_DAT_1f8000da < 11000)) || (0x1f < DAT_800e7eaa)))) ||
     (iVar2 = func_0x8007778c(), iVar2 == 0)) {
    return;
  }
  FUN_80135414();
  func_0x800517f8();
  uVar1 = thunk_EXT_FUN_80000400
                    (((in_t0 >> 8) - (param_2 >> 0x1f)) * 0x10000 >> 0x10,
                     ((int)((longlong)((extraout_v1 << 0x10) >> 0x10) * (longlong)unaff_s2 >> 0x28)
                     - ((extraout_v1 << 0x10) >> 0x1f)) * 0x10000 >> 0x10);
  _DAT_8014c800 = uVar1 & 0xf;
  if (_DAT_8014c800 != 4) {
    if (_DAT_8014c800 < 5) {
      if ((_DAT_8014c800 < 3) && ((uVar1 & 0xf) != 0)) {
        if (unaff_s0 - 0x200U < 0xc01) {
          _DAT_800a3f90 = 0x2580;
          FUN_8013f130();
          return;
        }
        FUN_8013f118();
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

