// FUN_08017534

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017534(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 extraout_at_02;
  undefined4 extraout_at_03;
  undefined4 extraout_at_04;
  undefined4 extraout_at_05;
  undefined4 extraout_at_06;
  undefined4 extraout_at_07;
  undefined4 extraout_at_08;
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  ushort local_30;
  
  func_0x000329e0(6);
  iVar13 = 4;
  _DAT_1f800090 = 0;
  if (*(short *)(param_1 + 0x2c) < 0x234f) {
    iVar13 = 8;
  }
  local_30 = 0;
  uVar1 = extraout_at;
  do {
    piVar12 = (int *)((short)local_30 * 4 + -0x7fed9794);
    iVar6 = (short)local_30 * 8;
    psVar9 = (short *)(iVar6 + -0x7feda414);
    iVar8 = *piVar12;
    psVar10 = (short *)(iVar6 + -0x7fed9dd4);
    if (iVar8 != 0) {
      *psVar9 = *psVar9 + *psVar10;
      *(short *)(iVar6 + -0x7feda412) =
           *(short *)(iVar6 + -0x7feda412) + *(short *)(iVar6 + -0x7fed9dd2);
      *(short *)(iVar6 + -0x7feda410) =
           *(short *)(iVar6 + -0x7feda410) + *(short *)(iVar6 + -0x7fed9dd0);
      *(short *)(iVar6 + -0x7fed9dd2) = *(short *)(iVar6 + -0x7fed9dd2) + 0x19;
      setCopReg(2,in_zero,*(undefined4 *)psVar9);
      setCopReg(2,uVar1,*(undefined4 *)(iVar6 + -0x7feda410));
      iVar13 = func_0x000317cc(0xffffffce);
      if (iVar13 == 0) {
        _DAT_1f800090 = 0;
        _DAT_1f800088 = _DAT_1f800084;
        iVar13 = func_0x00027a4c(iVar8,_DAT_8011b224);
        *piVar12 = iVar13;
      }
      else {
        *piVar12 = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x2c) < 0x234f) {
      if (0 < iVar13) {
        _DAT_8011ce58 = _DAT_8011ce58 + 1;
        if (9 < _DAT_8011ce58) {
          _DAT_8011ce58 = 0;
        }
        iVar13 = iVar13 + -1;
        if (_DAT_8011ce58 == 0) {
          func_0x0009a450();
          func_0x0009a450();
          uVar1 = extraout_at_00;
          if (*(ushort *)(param_1 + 0x2c) - 0x1e79 < 499) {
            *(undefined2 *)(iVar6 + -0x7feda412) = 0xf28a;
            sVar3 = *(short *)(param_1 + 0x2c);
            *(undefined2 *)(iVar6 + -0x7feda410) = 0x26a3;
            *psVar9 = sVar3;
            uVar2 = func_0x0009a450();
            *(ushort *)(iVar6 + -0x7fed9dd2) = -(uVar2 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (_DAT_8011ce58 == 1) {
          func_0x0009a450();
          func_0x0009a450();
          uVar1 = extraout_at_01;
          if (*(ushort *)(param_1 + 0x2c) - 0x1e79 < 499) {
            *(undefined2 *)(iVar6 + -0x7feda412) = 0xf30a;
            sVar3 = *(short *)(param_1 + 0x2c);
            *(undefined2 *)(iVar6 + -0x7feda410) = 0x23ba;
            *psVar9 = sVar3;
            uVar2 = func_0x0009a450();
            *(ushort *)(iVar6 + -0x7fed9dd2) = -(uVar2 & 0x1f);
            halt_baddata();
          }
        }
        else if (_DAT_8011ce58 == 2) {
          func_0x0009a450();
          func_0x0009a450();
          uVar1 = extraout_at_02;
          if (*(ushort *)(param_1 + 0x2c) - 0x1d4d < 0x6a3) {
            *(undefined2 *)(iVar6 + -0x7feda412) = 0xf48a;
            sVar3 = *(short *)(param_1 + 0x2c);
            *(undefined2 *)(iVar6 + -0x7feda410) = 0x29f0;
            *psVar9 = sVar3;
            uVar2 = func_0x0009a450();
            *(ushort *)(iVar6 + -0x7fed9dd2) = -(uVar2 & 0x1f);
            halt_baddata();
          }
        }
        else if (_DAT_8011ce58 == 3) {
          func_0x0009a450();
          func_0x0009a450();
          uVar1 = extraout_at_03;
          if (*(ushort *)(param_1 + 0x2c) - 0x1d4d < 0x6a3) {
            *(undefined2 *)(iVar6 + -0x7feda412) = 0xf2ca;
            sVar3 = *(short *)(param_1 + 0x2c);
            *(undefined2 *)(iVar6 + -0x7feda410) = 0x2ae9;
            *psVar9 = sVar3;
            uVar2 = func_0x0009a450();
            *(ushort *)(iVar6 + -0x7fed9dd2) = -(uVar2 & 0x1f);
            halt_baddata();
          }
        }
        else if (_DAT_8011ce58 == 4) {
          func_0x0009a450();
          func_0x0009a450();
          uVar1 = extraout_at_04;
          if (*(ushort *)(param_1 + 0x2c) - 0x1d4d < 0x6a3) {
            *(undefined2 *)(iVar6 + -0x7feda412) = 0xf40a;
            sVar3 = *(short *)(param_1 + 0x2c);
            *(undefined2 *)(iVar6 + -0x7feda410) = 0x2190;
            *psVar9 = sVar3;
            uVar2 = func_0x0009a450();
            *(ushort *)(iVar6 + -0x7fed9dd2) = -(uVar2 & 0x1f);
            halt_baddata();
          }
        }
        else if (_DAT_8011ce58 == 5) {
          func_0x0009a450();
          func_0x0009a450();
          uVar1 = extraout_at_05;
          if (*(ushort *)(param_1 + 0x2c) - 0x1d4d < 0x6a3) {
            *(undefined2 *)(iVar6 + -0x7feda412) = 0xf2ca;
            sVar3 = *(short *)(param_1 + 0x2c);
            *(undefined2 *)(iVar6 + -0x7feda410) = 0x203f;
            *psVar9 = sVar3;
            uVar2 = func_0x0009a450();
            *(ushort *)(iVar6 + -0x7fed9dd2) = -(uVar2 & 0x1f);
            halt_baddata();
          }
        }
        else if (_DAT_8011ce58 < 7) {
          if (_DAT_8011ce58 == 6) {
            uVar4 = func_0x0009a450();
            iVar8 = (uVar4 & 0x7ff) - 0x400;
            uVar4 = func_0x0009a450();
            uVar1 = extraout_at_07;
            if (*(ushort *)(param_1 + 0x2c) - 0x1d4d < 0x6a3) {
              *(undefined2 *)(iVar6 + -0x7feda412) = 0xf2ca;
              *psVar9 = *(short *)(param_1 + 0x2c);
              uVar2 = func_0x0009a450();
              *(ushort *)(iVar6 + -0x7feda410) = (uVar2 & 0x3ff) + 0x1b23;
              uVar2 = func_0x0009a450();
              *(ushort *)(iVar6 + -0x7fed9dd2) = -0x20 - (uVar2 & 0x1f);
              iVar13 = func_0x00083f50(iVar8);
              iVar8 = func_0x00083e80(iVar8);
              *psVar9 = *psVar9 + (short)(iVar13 * 100 >> 0xc);
              *(short *)(iVar6 + -0x7feda410) =
                   *(short *)(iVar6 + -0x7feda410) + (short)(iVar8 * 100 >> 0xc);
              *psVar10 = (short)((int)(iVar13 * ((uVar4 & 0x1f) + 9)) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
        else {
          uVar4 = func_0x0009a450();
          iVar8 = (uVar4 & 0x7ff) + 0x800;
          uVar4 = func_0x0009a450();
          iVar11 = (uVar4 & 0x1f) + 9;
          uVar1 = extraout_at_06;
          if (0x1d4c < *(short *)(param_1 + 0x2c)) {
            *(undefined2 *)(iVar6 + -0x7feda412) = 0xf2ca;
            *psVar9 = *(short *)(param_1 + 0x2c);
            uVar2 = func_0x0009a450();
            *(ushort *)(iVar6 + -0x7feda410) = (uVar2 & 0x3ff) + 0x2b03;
            uVar2 = func_0x0009a450();
            sVar3 = -0x30 - (uVar2 & 0x3f);
            *(short *)(iVar6 + -0x7fed9dd2) = sVar3;
            *(short *)(iVar6 + -0x7feda412) = *(short *)(iVar6 + -0x7feda412) - sVar3;
            iVar13 = func_0x00083f50(iVar8);
            iVar8 = func_0x00083e80(iVar8);
            *psVar9 = *psVar9 + (short)(iVar13 * 100 >> 0xc);
            *(short *)(iVar6 + -0x7feda410) =
                 *(short *)(iVar6 + -0x7feda410) + (short)(iVar8 * 100 >> 0xc);
            *psVar10 = (short)(iVar13 * iVar11 >> 0xc);
            *(short *)(iVar6 + -0x7fed9dd0) = (short)(iVar8 * iVar11 >> 0xc);
            *piVar12 = -0x7fee4dd8;
            halt_baddata();
          }
        }
      }
    }
    else if (0 < iVar13) {
      _DAT_8011ce5c = _DAT_8011ce5c + 1;
      if (3 < _DAT_8011ce5c) {
        _DAT_8011ce5c = 0;
      }
      iVar13 = iVar13 + -1;
      if (_DAT_8011ce5c == 0) {
        func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (_DAT_8011ce5c == 1) {
        func_0x0009a450();
        halt_baddata();
      }
      if (_DAT_8011ce5c == 2) {
        func_0x0009a450();
        func_0x0009a450();
        halt_baddata();
      }
      if (*(ushort *)(param_1 + 0x2c) - 0x2613 < 0xfe) {
        uVar4 = func_0x0009a450();
        iVar8 = (uVar4 & 0x7ff) - 0x400;
        uVar2 = func_0x0009a450();
        uVar7 = 0xf452;
        if (_DAT_8011ce5c < 3) {
          sVar3 = *(short *)(param_1 + 0x2c);
          uVar7 = 0xf40a;
          if (((0x24dc < sVar3) && (uVar7 = 0xf2ca, 0x25f7 < sVar3)) &&
             (uVar7 = 0xf04a, sVar3 < 0x27fd)) {
            uVar7 = 0xf18a;
          }
        }
        *(undefined2 *)(iVar6 + -0x7feda412) = uVar7;
        sVar3 = *(short *)(param_1 + 0x2c);
        *(ushort *)(iVar6 + -0x7feda410) = (uVar2 & 0xff) + 0x2dd6;
        *psVar9 = sVar3;
        uVar2 = func_0x0009a450();
        *(ushort *)(iVar6 + -0x7fed9dd2) = -(uVar2 & 0x1f);
        iVar11 = func_0x00083f50(iVar8);
        iVar8 = func_0x00083e80(iVar8);
        uVar4 = func_0x0009a450();
        iVar5 = (uVar4 & 0x1f) + 9;
        *psVar10 = (short)(iVar11 * iVar5 >> 0xc);
        *(short *)(iVar6 + -0x7fed9dd0) = (short)(iVar8 * iVar5 >> 0xc);
        *(undefined4 *)(((int)((uint)local_30 << 0x10) >> 0xe) + -0x7fed9794) = 0x8011b228;
        uVar1 = extraout_at_08;
      }
    }
    local_30 = local_30 + 1;
    if (199 < (short)local_30) {
      return;
    }
  } while( true );
}

