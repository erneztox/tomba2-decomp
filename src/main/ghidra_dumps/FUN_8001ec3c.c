
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8001ec3c(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  
  iVar11 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar7 = iVar11 * 0x10000 >> 0x10;
  iVar9 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar8 = iVar9 * 0x10000 >> 0x10;
  uVar4 = FUN_80084080(iVar7 * iVar7 + iVar8 * iVar8);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar4) {
    return 0xffffffff;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
  sVar10 = (short)iVar7;
  iVar8 = (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84);
  sVar6 = (short)iVar8;
  if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
      (int)(iVar7 + iVar8 & 0xffffU)) {
    return 0xffffffff;
  }
  if (iVar7 * 0x10000 < 0) {
    sVar10 = -sVar10;
    sVar5 = -sVar6;
  }
  else {
    sVar5 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
            (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
    sVar6 = sVar5;
  }
  _DAT_1f80009c = FUN_80085690(-(int)(short)iVar9,(int)(short)iVar11);
  if ((sVar5 < 0) && ((int)sVar6 - (int)sVar10 < 0x1a)) {
    if ((param_1[0x145] & 1) != 0) {
      return 0xffffffff;
    }
    sVar10 = *(short *)(param_2 + 0x32);
    *(undefined1 *)(param_2 + 0x29) = 1;
    param_1[0x29] = 1;
    param_1[0x145] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x148] = 0;
    *(int *)(param_1 + 0x30) = ((int)sVar10 + (int)sVar5) * 0x10000;
    if (param_1[0x78] != 0) {
      return 2;
    }
    if (DAT_800bf816 != '\0') {
      return 2;
    }
    if (-1 < *(short *)(param_1 + 0x17e)) {
      sVar10 = *(short *)(param_1 + 0x84);
      if (*(short *)(param_1 + 0x84) == 0x8c) {
        return 2;
      }
      sVar6 = *(short *)(param_1 + 0x32) + -0x8c;
      goto LAB_8001efc8;
    }
  }
  else {
    if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar4 <
        (int)sVar6 - (int)sVar10) {
      if ((*param_1 & 4) == 0) {
        iVar7 = FUN_80083f50(_DAT_1f80009c);
        sVar5 = *(short *)(param_1 + 0x80);
        sVar1 = *(short *)(param_2 + 0x80);
        iVar8 = FUN_80083e80(_DAT_1f80009c);
        sVar2 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_2 + 0x2e) + (short)(iVar7 * ((int)sVar5 + (int)sVar1) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_2 + 0x36) -
             (short)(iVar8 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
      }
      if (0x91 < (int)sVar6 - (int)sVar10) {
        param_1[0x60] = 1;
      }
      cVar3 = FUN_80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      param_1[0x5f] = cVar3 + 2;
      return 1;
    }
    iVar7 = (int)sVar5;
    if (0 < iVar7) {
      if (_DAT_1f800098 != 0) {
        return 3;
      }
      DAT_1f800253 = 4;
      *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x32) + iVar7) * 0x10000;
      if (param_1[0x145] == 1) {
        if (*(short *)(param_1 + 0x4a) < 0) {
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          return 3;
        }
        return 3;
      }
      return 3;
    }
    if ((param_1[0x145] & 1) != 0) {
      return 0xffffffff;
    }
    sVar10 = *(short *)(param_2 + 0x32);
    *(undefined1 *)(param_2 + 0x29) = 1;
    param_1[0x29] = 1;
    param_1[0x145] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x148] = 0;
    *(int *)(param_1 + 0x30) = (sVar10 + iVar7) * 0x10000;
    if (param_1[0x78] != 0) {
      return 2;
    }
    if (DAT_800bf816 != '\0') {
      return 2;
    }
    if (-1 < *(short *)(param_1 + 0x17e)) {
      sVar10 = *(short *)(param_1 + 0x84);
      if (*(short *)(param_1 + 0x84) == 0x8c) {
        return 2;
      }
      sVar6 = *(short *)(param_1 + 0x32) + -0x8c;
      goto LAB_8001efc8;
    }
  }
  sVar10 = *(short *)(param_1 + 0x84);
  if (*(short *)(param_1 + 0x84) == 0x46) {
    return 2;
  }
  sVar6 = *(short *)(param_1 + 0x32) + -0x46;
LAB_8001efc8:
  *(short *)(param_1 + 0x32) = sVar10 + sVar6;
  return 2;
}

