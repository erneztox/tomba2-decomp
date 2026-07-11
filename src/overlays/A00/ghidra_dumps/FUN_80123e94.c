// FUN_80123e94

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80123e94(undefined1 *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  undefined1 *unaff_s2;
  int unaff_s3;
  uint uVar6;
  undefined2 *unaff_s4;
  int unaff_s5;
  undefined8 uVar7;
  
  uVar7 = func_0x8003116c((int)*(short *)(param_3 * 2 + -0x7feb5dc0),param_2,0xffffff9c);
  iVar4 = (int)uVar7;
  if (iVar4 != 0) {
    *(undefined1 **)(iVar4 + 0x10) = param_1;
    *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
    return;
  }
  unaff_s2[9] = 0;
  if ((int)((ulonglong)uVar7 >> 0x20) != 0) {
    psVar5 = unaff_s4 + 3;
    param_1 = unaff_s2;
    do {
      unaff_s3 = unaff_s3 + 1;
      iVar4 = func_0x8007aae8();
      *(int *)(param_1 + 0xc0) = iVar4;
      *(undefined2 *)(iVar4 + 6) = 0xffff;
      **(undefined2 **)(param_1 + 0xc0) = *unaff_s4;
      *(short *)(*(int *)(param_1 + 0xc0) + 2) = psVar5[-2];
      unaff_s4 = unaff_s4 + 4;
      *(short *)(*(int *)(param_1 + 0xc0) + 4) = psVar5[-1];
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
      sVar1 = *psVar5;
      psVar5 = psVar5 + 4;
      func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc,(int)sVar1);
      param_1 = param_1 + 4;
    } while (unaff_s3 < (int)(uint)(byte)unaff_s2[8]);
  }
  unaff_s2[4] = 1;
  *unaff_s2 = 1;
  *(undefined2 *)(unaff_s2 + 0x80) = 0x1e;
  *(undefined2 *)(unaff_s2 + 0x82) = 0x3c;
  *(undefined2 *)(unaff_s2 + 0x84) = 0x32;
  *(undefined2 *)(unaff_s2 + 0x86) = 100;
  unaff_s2[5] = 0;
  unaff_s2[6] = 0;
  unaff_s2[0xd] = 0;
  unaff_s2[0xb] = 0;
  unaff_s2[0x29] = 0;
  *(undefined2 *)(unaff_s2 + 0x2e) = *(undefined2 *)((uint)(byte)unaff_s2[3] * 8 + -0x7feb5860);
  *(undefined2 *)(unaff_s2 + 0x32) = *(undefined2 *)((uint)(byte)unaff_s2[3] * 8 + -0x7feb585e);
  uVar2 = *(undefined2 *)((uint)(byte)unaff_s2[3] * 8 + -0x7feb585c);
  *(undefined2 *)(unaff_s2 + 0x54) = 0;
  *(undefined2 *)(unaff_s2 + 0x36) = uVar2;
  uVar2 = *(undefined2 *)((uint)(byte)unaff_s2[3] * 8 + -0x7feb585a);
  *(undefined2 *)(unaff_s2 + 0x58) = 0;
  *(undefined2 *)(unaff_s2 + 0x56) = uVar2;
  if ((unaff_s2[3] == '\0') && (*(short *)(unaff_s2 + 0x2e) < _DAT_1f800160)) {
    *(undefined2 *)(unaff_s2 + 0x2e) = _DAT_8014a7ba;
  }
  *(undefined2 *)(unaff_s2 + 0x48) = 0x200;
  *(undefined2 *)(unaff_s2 + 0x4a) = 0;
  *(undefined2 *)(unaff_s2 + 0x4a) = 0x32;
  *(undefined2 *)(unaff_s2 + 0x60) = *(undefined2 *)(unaff_s2 + 0x32);
  uVar3 = thunk_EXT_FUN_80000400
                    (((int)((longlong)((int)((uint)_DAT_00000192 << 0x10) >> 0x10) *
                            (longlong)(int)((uint)unaff_s2 | 0x6667) >> 0x28) -
                     ((int)((uint)_DAT_00000192 << 0x10) >> 0x1f)) * 0x10000 >> 0x10,
                     ((int)((longlong)((int)((uint)_DAT_1f800164 << 0x10) >> 0x10) *
                            (longlong)(int)((uint)unaff_s2 | 0x6667) >> 0x28) -
                     ((int)((uint)_DAT_1f800164 << 0x10) >> 0x1f)) * 0x10000 >> 0x10);
  _DAT_8014c800 = uVar3 & 0xf;
  if (_DAT_8014c800 != 4) {
    if (_DAT_8014c800 < 5) {
      if ((_DAT_8014c800 < 3) && ((uVar3 & 0xf) != 0)) {
        if ((undefined1 *)0xc00 < param_1 + -0x200) {
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
    uVar6 = 0xfffffe39U - (int)_DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar6);
    func_0x80083f50(uVar6);
    uVar6 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar6);
    func_0x80083f50(uVar6);
    func_0x80083e80((int)_DAT_1f8000f0);
    func_0x80083e80(-(int)_DAT_1f8000f2);
    func_0x80083f50(-(int)_DAT_1f8000f2);
    *(undefined1 *)(unaff_s5 + 6) = 0;
    FUN_8013f4dc();
    return;
  }
}

