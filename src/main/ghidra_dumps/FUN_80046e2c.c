
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80046e2c(int param_1,short param_2,short param_3,short param_4)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  short unaff_s4;
  uint uVar13;
  int iVar14;
  
  iVar11 = (int)param_4;
  iVar7 = FUN_80083e80(iVar11);
  iVar10 = (int)param_2;
  uVar13 = (uint)(-iVar7 * iVar10) >> 0xc;
  iVar7 = FUN_80083f50(iVar11);
  uVar6 = 0;
  iVar14 = 10;
  uVar12 = (uint)(iVar7 * iVar10) >> 0xc;
  while( true ) {
    sVar9 = (short)uVar12;
    _DAT_1f8001bc = *(short *)(param_1 + 0x2e) + sVar9;
    _DAT_1f8001be = *(short *)(param_1 + 0x32) + param_3;
    sVar2 = (short)uVar13;
    _DAT_1f8001c0 = *(short *)(param_1 + 0x36) + sVar2;
    iVar7 = FUN_800498c8(param_1);
    if (iVar7 == 0) {
      return 0;
    }
    if (uVar6 == 0) {
      sVar4 = FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                           (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
      uVar5 = (-param_4 - sVar4) + 0x400U & 0xfff;
      if (iVar10 < 0) {
        uVar5 = uVar5 + 0x800 & 0xfff;
      }
      unaff_s4 = 4;
      if (0x7ff < uVar5) {
        unaff_s4 = 8;
      }
    }
    uVar6 = FUN_8004720c((int)unaff_s4,(int)(short)uVar6);
    sVar4 = _DAT_1f8001c6;
    if (uVar6 == 0) {
      return 0;
    }
    uVar5 = _DAT_1f8001a6 & 0xf;
    if (uVar5 == 2) break;
    if (uVar5 < 3) {
      uVar8 = _DAT_1f8001a6 & 0xf00;
      if (uVar5 == 1) {
        if (uVar8 == 0x600) {
          return -1;
        }
        if (uVar8 < 0x601) {
          if (uVar8 == 0x100) {
            if (DAT_800bf873 == '\0') {
              return -1;
            }
            _DAT_1f8001a6 = _DAT_1f8001a6 & 0xff;
            *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + _DAT_1f8001c4;
            return 1;
          }
        }
        else if (uVar8 == 0x700) {
          return -1;
        }
        sVar9 = *(short *)(param_1 + 0x32);
        iVar7 = 1;
        goto LAB_8004708c;
      }
    }
    else if ((uVar5 == 4) || (uVar5 == 8)) {
      uVar5 = _DAT_1f8001bc & 0xffc0;
      *(ushort *)(param_1 + 0x36) = _DAT_1f8001c0 & 0xffc0;
      sVar3 = _DAT_1f8001c2;
      *(ushort *)(param_1 + 0x2e) = uVar5;
      *(ushort *)(param_1 + 0x2e) = uVar5 + sVar3;
      bVar1 = (uVar6 & 0x8000) != 0;
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + sVar4;
      if (bVar1) {
        iVar14 = iVar14 + -1;
      }
      uVar6 = (ushort)bVar1;
      if (uVar6 == 0) {
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - sVar9;
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - sVar2;
        return (int)unaff_s4;
      }
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - sVar9;
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - sVar2;
      iVar7 = FUN_80083f50(iVar11);
      uVar12 = iVar7 * (iVar10 + -1) >> 0xc;
      iVar7 = FUN_80083e80(iVar11);
      uVar13 = -iVar7 * (iVar10 + -1) >> 0xc;
      uVar5 = param_4 + 0x200U & 0xfff;
      if (uVar5 < 0x401) {
        uVar12 = uVar12 - 1;
      }
      else if (uVar5 < 0x800) {
        uVar13 = uVar13 + 1;
      }
      else if (uVar5 < 0xc01) {
        uVar12 = uVar12 + 1;
      }
      else {
        uVar13 = uVar13 - 1;
      }
    }
    if (iVar14 == 0) {
      return (int)unaff_s4;
    }
    if (uVar6 == 0) {
      return 0;
    }
  }
  if ((_DAT_1f8001a6 & 0xf00) == 0x100) {
    return -2;
  }
  sVar9 = *(short *)(param_1 + 0x32);
  iVar7 = 2;
LAB_8004708c:
  *(short *)(param_1 + 0x32) = sVar9 + _DAT_1f8001c4;
  return iVar7;
}

