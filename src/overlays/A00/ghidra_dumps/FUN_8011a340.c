// FUN_8011a340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8011a340(int param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int iVar10;
  int unaff_s5;
  int unaff_s6;
  int iVar11;
  int unaff_s7;
  
  bVar3 = *(byte *)(param_1 + 6);
  if (bVar3 == 1) {
    func_0x80041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar3 < 2) {
    if (bVar3 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x80040cdc(param_1,&DAT_8014e4ec,0x80149794);
      *(undefined1 *)(param_1 + 0x70) = 1;
      DAT_800bf9eb = 0;
    }
  }
  else if (bVar3 == 2) {
    if (_DAT_800bf830 != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 3;
    DAT_800bf9dd = 1;
    func_0x80042310();
  }
  else if (bVar3 == 3) {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  while( true ) {
    iVar6 = func_0x8003116c();
    unaff_s3 = unaff_s3 + 1;
    *(byte *)(iVar6 + 0x28) = *(byte *)(iVar6 + 0x28) | 0x80;
    iVar6 = unaff_s4 << 0x10;
    if (4 < unaff_s3) break;
    func_0x80083f50(iVar6 >> 0x10);
    func_0x80083e80(iVar6 >> 0x10);
    unaff_s4 = unaff_s4 + 0x199;
  }
  _DAT_00000013 = 0xfff4;
  _DAT_00000011 = 4;
  _DAT_00000017 = _DAT_00000017 + 1;
  *(undefined1 *)(unaff_s5 + 0x2b) = 1;
  func_0x80054dac(&DAT_800e7e80,0xb4,0);
  while( true ) {
    unaff_s2 = unaff_s2 + 1;
    iVar11 = unaff_s6 + 0x10;
    if ((*(short *)(unaff_s5 + 0x40) < unaff_s2) || ((int)(*(byte *)(unaff_s5 + 8) - 2) <= unaff_s2)
       ) break;
    iVar9 = *(int *)(unaff_s5 + unaff_s2 * 4 + 0xc0);
    *(short *)(iVar9 + 2) = *(short *)(iVar9 + 2) + *(short *)(iVar9 + 0x12);
    *(short *)(iVar9 + 0x12) = *(short *)(iVar9 + 0x12) + *(short *)(iVar9 + 0x10);
    psVar1 = (short *)(unaff_s6 + 0x14);
    puVar2 = (undefined2 *)(unaff_s6 + 0x14);
    unaff_s6 = iVar11;
    if ((*psVar1 < *(short *)(iVar9 + 2)) &&
       (*(undefined2 *)(iVar9 + 2) = *puVar2, *(short *)(iVar9 + 0x16) == 0)) {
      uVar7 = func_0x80074590(0x85,0xfffffff6,0x1b);
      return uVar7;
    }
  }
  iVar11 = 2;
  if (1 < *(short *)(unaff_s5 + 0x40)) {
    do {
      if ((int)(*(byte *)(unaff_s5 + 8) - 2) <= iVar11) break;
      iVar9 = *(int *)(unaff_s5 + iVar11 * 4 + 0xc0);
      sVar5 = *(short *)(iVar9 + 0x16);
      if (sVar5 != 0) {
        if (sVar5 == 1) {
          uVar4 = *(ushort *)(iVar9 + 0x14);
          iVar11 = uVar4 - 0x40;
          *(short *)(iVar9 + 0x14) = (short)iVar11;
          *(ushort *)(iVar9 + 0xc) = *(short *)(iVar9 + 0xc) + uVar4;
          if (iVar11 * 0x10000 >> 0x10 < -0x40) {
            *(undefined2 *)(iVar9 + 0x14) = 0x20;
            *(short *)(iVar9 + 0x16) = *(short *)(iVar9 + 0x16) + 1;
            uVar7 = FUN_8012c584();
            return uVar7;
          }
LAB_801235e8:
          *(undefined1 *)(unaff_s5 + 0x2b) = 1;
          iVar11 = func_0x80083e80();
          *(short *)(iVar9 + 0x32) =
               *(short *)(iVar9 + 0x60) + (short)(iVar11 * *(short *)(iVar9 + 0x4a) >> 0xc);
          *(undefined2 *)(iVar6 + 0x4e) = *(undefined2 *)(iVar9 + 0x2e);
          *(short *)(iVar6 + 0x50) = *(short *)(iVar9 + 0x32) + 0x3c;
          *(undefined2 *)(iVar6 + 0x52) = *(undefined2 *)(iVar9 + 0x36);
          uVar7 = FUN_8013ecf8();
          return uVar7;
        }
        if (sVar5 == 2) {
          sVar5 = *(short *)(iVar9 + 0x14);
          sVar8 = sVar5 + -0x20;
          *(short *)(iVar9 + 0x14) = sVar8;
          *(short *)(iVar9 + 0xc) = *(short *)(iVar9 + 0xc) + sVar5;
          if (sVar8 < -0x20) {
            iVar10 = 0x400;
            if (iVar11 < 6) {
              iVar11 = 0;
              iVar6 = 0x4000000;
              do {
                func_0x80083f50(iVar6 >> 0x10);
                func_0x80083e80(iVar6 >> 0x10);
                iVar10 = iVar10 + 0x199;
                iVar6 = func_0x8003116c(0,&stack0xfffffff0,0xffffff9c);
                iVar11 = iVar11 + 1;
                *(byte *)(iVar6 + 0x28) = *(byte *)(iVar6 + 0x28) | 0x80;
                iVar6 = iVar10 * 0x10000;
              } while (iVar11 < 5);
            }
            *(short *)(iVar9 + 0x16) = *(short *)(iVar9 + 0x16) + 1;
          }
          goto LAB_801235e8;
        }
        if (iVar11 == *(byte *)(unaff_s5 + 8) - 3) {
          *(char *)(unaff_s5 + 6) = *(char *)(unaff_s5 + 6) + '\x01';
          DAT_800bf9de = 0x14;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 <= *(short *)(unaff_s5 + 0x40));
  }
  uVar4 = *(short *)(unaff_s5 + 0x42) + 1;
  *(ushort *)(unaff_s5 + 0x42) = uVar4;
  if ((uVar4 & *(ushort *)(unaff_s5 + 0x62)) == 0) {
    sVar5 = *(short *)(unaff_s5 + 0x40) + 1;
    *(short *)(unaff_s5 + 0x40) = sVar5;
    if (7 < sVar5) {
      uVar7 = FUN_8012c610();
      return uVar7;
    }
    if (4 < sVar5) {
      *(undefined2 *)(unaff_s5 + 0x62) = 0xf;
    }
  }
  if (*(char *)(unaff_s5 + 0x2b) != '\0') {
    if (*(short *)(unaff_s5 + 0x60) == 0) {
      *(undefined1 *)(unaff_s7 + 0x76) = 1;
      *(undefined2 *)(unaff_s5 + 0x60) = 1;
    }
    *(undefined1 *)(unaff_s5 + 0x2b) = 0;
    uVar7 = FUN_8012c6ac();
    return uVar7;
  }
  if (*(char *)(unaff_s7 + 0x76) != '\0') {
    *(undefined1 *)(unaff_s7 + 0x76) = 3;
    uVar7 = FUN_8012c090();
    return uVar7;
  }
  *(undefined2 *)(unaff_s5 + 0x60) = 0;
  uVar7 = FUN_8012c6ac();
  return uVar7;
}

