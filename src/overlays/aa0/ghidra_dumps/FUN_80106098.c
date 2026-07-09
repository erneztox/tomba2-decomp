// FUN_80106098

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80106098(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar6 = iVar11 * 0x10000 >> 0x10;
  iVar10 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar7 = iVar10 * 0x10000 >> 0x10;
  uVar4 = func_0x80084080(iVar6 * iVar6 + iVar7 * iVar7);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar4) {
    return 0;
  }
  iVar6 = 0;
  if ((*(char *)(param_1 + 5) != '\x0f') && (iVar6 = 0x24, -1 < *(short *)(param_1 + 0x17e))) {
    iVar6 = 0x48;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
  if ((int)*(short *)(param_1 + 0x86) + iVar6 * -2 + (int)*(short *)(param_2 + 0x86) <
      (int)(iVar7 + (uint)*(ushort *)(param_2 + 0x84) + ((uint)*(ushort *)(param_1 + 0x84) - iVar6)
           & 0xffff)) {
    iVar6 = 0;
  }
  else {
    if (iVar7 * 0x10000 < 0) {
      uVar9 = FUN_8010f168();
      return uVar9;
    }
    iVar7 = (((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
            ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) - iVar6;
    sVar5 = func_0x80085690(-(int)(short)iVar10,(int)(short)iVar11);
    if ((int)*(short *)(param_2 + 0x80) + (int)*(short *)(param_1 + 0x80) + -0x14 <
        (int)(short)uVar4) {
      iVar6 = func_0x80077768((int)sVar5,(int)*(short *)(param_2 + 0x56),0);
      if (iVar6 != 0) {
        uVar9 = func_0x80083f50(*(short *)(param_2 + 0x56) + 0x800);
        return uVar9;
      }
      iVar6 = func_0x80083f50((int)*(short *)(param_2 + 0x56));
      sVar5 = *(short *)(param_1 + 0x80);
      sVar1 = *(short *)(param_2 + 0x80);
      iVar7 = func_0x80083e80((int)*(short *)(param_2 + 0x56));
      sVar2 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_3 + 0x2c) + (short)((uint)(iVar6 * ((int)sVar5 + (int)sVar1)) >> 0xc);
      sVar5 = *(short *)(param_3 + 0x34);
      iVar6 = 1;
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(short *)(param_1 + 0x36) =
           sVar5 - (short)((uint)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2)) >> 0xc);
    }
    else {
      sVar1 = (short)iVar7;
      if (0 < iVar7 * 0x10000) {
        DAT_1f800253 = 4;
        *(short *)(param_1 + 0x32) = *(short *)(param_3 + 0x30) + sVar1;
        if ((*(char *)(param_1 + 0x145) == '\x01') && (*(short *)(param_1 + 0x4a) < 0)) {
          *(undefined2 *)(param_1 + 0x4a) = 0;
        }
        return 3;
      }
      if ((*(byte *)(param_1 + 0x145) & 1) != 0) {
        return 0;
      }
      func_0x80022c78(param_1);
      if (*(char *)(param_1 + 0x78) == '\0') {
        iVar6 = func_0x80077768((int)sVar5,(int)*(short *)(param_2 + 0x56),0);
        uVar3 = 3;
        if (iVar6 == 0) {
          uVar3 = 2;
        }
        *(undefined1 *)(param_1 + 0x16a) = uVar3;
        iVar6 = param_1;
        func_0x80054e24(param_1,0,0);
        if (*(char *)(param_1 + 5) == '\x0f') {
          uVar9 = FUN_8010f320();
          return uVar9;
        }
        iVar7 = 0x37;
        if (-1 < *(short *)(param_1 + 0x17e)) {
          iVar7 = 0x6e;
        }
        uVar8 = iVar7 + (uint)*(ushort *)(param_2 + 0x84);
        *(short *)(param_1 + 0x32) = *(short *)(param_3 + 0x30) - (short)uVar8;
        goto code_r0x8011845c;
      }
      *(short *)(param_1 + 0x32) = (*(short *)(param_3 + 0x30) + sVar1) - (short)iVar6;
      iVar6 = 2;
    }
  }
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(iVar6 + -0x3080);
  func_0x80077b38();
  *(undefined2 *)(param_2 + 0x80) = 0x14;
  *(undefined2 *)(param_2 + 0x82) = 0x28;
  *(undefined2 *)(param_2 + 0x84) = 0x14;
  uVar8 = (uint)DAT_1f800137;
  iVar6 = param_2;
code_r0x8011845c:
  uVar9 = 0x1f800000;
  if (((uVar8 == 0) && (uVar9 = 0x1401, (ushort)(_DAT_1f800162 + 0x9c3U) < 0x3e9)) &&
     (*(short *)(iVar6 + 4) == 0x1401)) {
    uVar9 = func_0x8007e038(0x66,2);
    *(undefined4 *)(param_1 + 0x28) = uVar9;
    *(undefined4 *)(param_1 + 0x2c) = 0x46;
    uVar9 = FUN_8012149c();
    return uVar9;
  }
  return uVar9;
}

