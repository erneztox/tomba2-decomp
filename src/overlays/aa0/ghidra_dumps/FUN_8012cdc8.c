// FUN_8012cdc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012cdc8(undefined1 *param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_v1;
  int in_t0;
  undefined1 *unaff_s0;
  int iVar7;
  undefined2 *unaff_s1;
  short *psVar8;
  undefined2 *unaff_s3;
  int unaff_s4;
  undefined2 *puVar9;
  int unaff_s5;
  
  uVar6 = (uint)(byte)param_1[4];
  if (uVar6 == 1) {
    bVar3 = false;
    if ((param_1[3] == '\0') && (_DAT_800e7e84 == 0x302)) {
      bVar3 = _DAT_1f800160 < _DAT_8014a7ba;
    }
    if ((DAT_800e7eaa == 0x1c) || (DAT_800e7eaa == 0x26)) {
      bVar3 = true;
    }
    if (bVar3) {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feb5860);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feb585e);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feb585c);
    }
    if (DAT_1f800207 < 0x16) {
      return;
    }
    if ((DAT_1f800207 == 0x17) && (_DAT_1f8000da < 11000)) {
      return;
    }
    if (0x1f < DAT_800e7eaa) {
      return;
    }
    iVar5 = func_0x8007778c(param_1);
    if (iVar5 == 0) {
      return;
    }
    FUN_80135414(param_1);
    func_0x800517f8(param_1);
    uVar6 = extraout_v1;
  }
  else if (uVar6 < 2) {
    if (uVar6 == 0) {
      if ((byte)param_1[3] < 2) {
        iVar5 = 3;
        if (_DAT_800ed098 < 4) {
          param_1[4] = 3;
          while( true ) {
            *unaff_s1 = (short)iVar5;
            puVar9 = unaff_s3 + 4;
            if (0xe < (int)param_1) break;
            iVar5 = (int)param_1 * 0x1000;
            param_1 = param_1 + 1;
            iVar7 = ((int)((ulonglong)((longlong)iVar5 * (longlong)unaff_s4) >> 0x20) + iVar5 >> 3)
                    - (iVar5 >> 0x1f);
            iVar5 = func_0x80083f50(iVar7);
            *puVar9 = (short)(iVar5 >> 4);
            unaff_s1[3] = 0;
            iVar5 = func_0x80083e80(iVar7);
            iVar5 = iVar5 >> 4;
            unaff_s1 = unaff_s1 + 4;
            unaff_s3 = puVar9;
          }
          *puVar9 = _DAT_8014c780;
          unaff_s3[5] = _DAT_8014c782;
          unaff_s3[6] = _DAT_8014c784;
          return;
        }
        puVar9 = (undefined2 *)&DAT_8014a780;
        param_1[8] = 4;
        iVar5 = 0;
        param_1[9] = 4;
        psVar8 = (short *)&DAT_8014a786;
        unaff_s0 = param_1;
        do {
          iVar5 = iVar5 + 1;
          iVar7 = func_0x8007aae8();
          *(int *)(unaff_s0 + 0xc0) = iVar7;
          *(undefined2 *)(iVar7 + 6) = 0xffff;
          **(undefined2 **)(unaff_s0 + 0xc0) = *puVar9;
          *(short *)(*(int *)(unaff_s0 + 0xc0) + 2) = psVar8[-2];
          puVar9 = puVar9 + 4;
          *(short *)(*(int *)(unaff_s0 + 0xc0) + 4) = psVar8[-1];
          *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 8) = 0;
          *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
          sVar1 = *psVar8;
          psVar8 = psVar8 + 4;
          func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc0),0xc,(int)sVar1);
          unaff_s0 = unaff_s0 + 4;
        } while (iVar5 < (int)(uint)(byte)param_1[8]);
      }
      param_1[4] = 1;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x80) = 0x1e;
      *(undefined2 *)(param_1 + 0x82) = 0x3c;
      *(undefined2 *)(param_1 + 0x84) = 0x32;
      *(undefined2 *)(param_1 + 0x86) = 100;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[0xd] = 0;
      param_1[0xb] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feb5860);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feb585e);
      uVar2 = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feb585c);
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x36) = uVar2;
      uVar2 = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feb585a);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = uVar2;
      if ((param_1[3] == '\0') && (*(short *)(param_1 + 0x2e) < _DAT_1f800160)) {
        *(short *)(param_1 + 0x2e) = _DAT_8014a7ba;
      }
      *(undefined2 *)(param_1 + 0x48) = 0x200;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0x32;
      *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x32);
      param_1 = (undefined1 *)((uint)param_1 | 0x6667);
      param_2 = (uint)_DAT_00000192 << 0x10;
      in_t0 = (int)((ulonglong)((longlong)(param_2 >> 0x10) * (longlong)(int)param_1) >> 0x20);
      uVar6 = (uint)_DAT_1f800164;
    }
  }
  else {
    if (uVar6 == 2) {
      return;
    }
    if (uVar6 == 3) {
      func_0x8007a624(param_1);
      return;
    }
  }
  uVar4 = thunk_EXT_FUN_80000400
                    (((in_t0 >> 8) - (param_2 >> 0x1f)) * 0x10000 >> 0x10,
                     ((int)((longlong)((int)(uVar6 << 0x10) >> 0x10) * (longlong)(int)param_1 >>
                           0x28) - ((int)(uVar6 << 0x10) >> 0x1f)) * 0x10000 >> 0x10);
  _DAT_8014c800 = uVar4 & 0xf;
  if (_DAT_8014c800 != 4) {
    if (_DAT_8014c800 < 5) {
      if ((_DAT_8014c800 < 3) && ((uVar4 & 0xf) != 0)) {
        if ((undefined1 *)0xc00 < unaff_s0 + -0x200) {
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

