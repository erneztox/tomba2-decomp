// FUN_8012cdfc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012cdfc(uint param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint in_v1;
  int in_t0;
  undefined1 *unaff_s0;
  int iVar5;
  undefined2 *unaff_s1;
  short *psVar6;
  undefined1 *unaff_s2;
  undefined2 *unaff_s3;
  uint uVar7;
  int unaff_s4;
  undefined2 *puVar8;
  int unaff_s5;
  
  if (in_v1 == 0) {
    if ((byte)unaff_s2[3] < 2) {
      iVar4 = 3;
      if (_DAT_800ed098 < 4) {
        unaff_s2[4] = 3;
        while( true ) {
          *unaff_s1 = (short)iVar4;
          puVar8 = unaff_s3 + 4;
          if (0xe < (int)unaff_s2) break;
          iVar4 = (int)unaff_s2 * 0x1000;
          unaff_s2 = unaff_s2 + 1;
          iVar5 = ((int)((ulonglong)((longlong)iVar4 * (longlong)unaff_s4) >> 0x20) + iVar4 >> 3) -
                  (iVar4 >> 0x1f);
          iVar4 = func_0x80083f50(iVar5);
          *puVar8 = (short)(iVar4 >> 4);
          unaff_s1[3] = 0;
          iVar4 = func_0x80083e80(iVar5);
          iVar4 = iVar4 >> 4;
          unaff_s1 = unaff_s1 + 4;
          unaff_s3 = puVar8;
        }
        *puVar8 = _DAT_8014c780;
        unaff_s3[5] = _DAT_8014c782;
        unaff_s3[6] = _DAT_8014c784;
        return;
      }
      puVar8 = (undefined2 *)&DAT_8014a780;
      unaff_s2[8] = 4;
      iVar4 = 0;
      unaff_s2[9] = 4;
      psVar6 = (short *)&DAT_8014a786;
      unaff_s0 = unaff_s2;
      do {
        iVar4 = iVar4 + 1;
        iVar5 = func_0x8007aae8();
        *(int *)(unaff_s0 + 0xc0) = iVar5;
        *(undefined2 *)(iVar5 + 6) = 0xffff;
        **(undefined2 **)(unaff_s0 + 0xc0) = *puVar8;
        *(short *)(*(int *)(unaff_s0 + 0xc0) + 2) = psVar6[-2];
        puVar8 = puVar8 + 4;
        *(short *)(*(int *)(unaff_s0 + 0xc0) + 4) = psVar6[-1];
        *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 8) = 0;
        *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
        sVar1 = *psVar6;
        psVar6 = psVar6 + 4;
        func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc0),0xc,(int)sVar1);
        unaff_s0 = unaff_s0 + 4;
      } while (iVar4 < (int)(uint)(byte)unaff_s2[8]);
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
    param_1 = (uint)unaff_s2 | 0x6667;
    param_2 = (uint)_DAT_00000192 << 0x10;
    in_t0 = (int)((ulonglong)((longlong)(param_2 >> 0x10) * (longlong)(int)param_1) >> 0x20);
    in_v1 = (uint)_DAT_1f800164;
  }
  uVar3 = thunk_EXT_FUN_80000400
                    (((in_t0 >> 8) - (param_2 >> 0x1f)) * 0x10000 >> 0x10,
                     ((int)((longlong)((int)(in_v1 << 0x10) >> 0x10) * (longlong)(int)param_1 >>
                           0x28) - ((int)(in_v1 << 0x10) >> 0x1f)) * 0x10000 >> 0x10);
  _DAT_8014c800 = uVar3 & 0xf;
  if (_DAT_8014c800 != 4) {
    if (_DAT_8014c800 < 5) {
      if ((_DAT_8014c800 < 3) && ((uVar3 & 0xf) != 0)) {
        if (unaff_s0 + -0x200 < (undefined1 *)0xc01) {
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
    uVar7 = 0xfffffe39U - (int)_DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar7);
    func_0x80083f50(uVar7);
    uVar7 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar7);
    func_0x80083f50(uVar7);
    func_0x80083e80((int)_DAT_1f8000f0);
    func_0x80083e80(-(int)_DAT_1f8000f2);
    func_0x80083f50(-(int)_DAT_1f8000f2);
    *(undefined1 *)(unaff_s5 + 6) = 0;
    FUN_8013f4dc();
    return;
  }
}

