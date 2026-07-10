// FUN_80045cac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80045cac(int param_1,ushort param_2,short param_3,short param_4)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  short unaff_s6;
  ushort local_38;
  int local_30;
  
  iVar10 = (int)param_4;
  iVar6 = FUN_80083e80(iVar10);
  local_38 = 0;
  local_30 = 10;
  uVar11 = -iVar6 * (int)(short)param_2 >> 0xc;
  iVar6 = FUN_80083f50(iVar10);
  uVar5 = 0;
  iVar12 = 0;
  sVar2 = (short)uVar11;
  _DAT_1f8001be = *(short *)(param_1 + 0x32) + param_3;
  iVar7 = iVar6 * (short)param_2 >> 0xc;
  iVar6 = -iVar7;
  while( true ) {
    do {
      _DAT_1f8001bc = *(short *)(param_1 + 0x2e) + (short)iVar7;
      _DAT_1f8001c0 = *(short *)(param_1 + 0x36) + (short)uVar11;
      iVar8 = FUN_800498c8(param_1);
      if (iVar8 == 0) {
        return false;
      }
      sVar4 = FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                           (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
      if (uVar5 == 0) {
        if (iVar12 == 0) {
          uVar9 = (-param_4 - sVar4) + 0x400U & 0xfff;
          if ((int)((uint)param_2 << 0x10) < 0) {
            param_2 = -param_2;
            uVar9 = uVar9 + 0x800 & 0xfff;
          }
          unaff_s6 = 4;
          if (0x7ff < uVar9) {
            unaff_s6 = 8;
          }
        }
        else {
          bVar1 = unaff_s6 == 4;
          unaff_s6 = 4;
          if (bVar1) {
            unaff_s6 = 8;
          }
        }
      }
      uVar5 = FUN_8004602c((int)unaff_s6,0,(int)(short)uVar5);
      sVar4 = _DAT_1f8001c6;
      if ((int)(short)uVar5 == 0) {
        uVar11 = (uint)(ushort)-sVar2;
        iVar7 = iVar6;
      }
      else {
        local_38 = uVar5 & 0x7fff;
        uVar9 = _DAT_1f8001bc & 0xffc0;
        *(ushort *)(param_1 + 0x36) = _DAT_1f8001c0 & 0xffc0;
        sVar3 = _DAT_1f8001c2;
        *(ushort *)(param_1 + 0x2e) = uVar9;
        *(ushort *)(param_1 + 0x2e) = uVar9 + sVar3;
        bVar1 = ((int)(short)uVar5 & 0x8000U) != 0;
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + sVar4;
        if (bVar1) {
          local_30 = local_30 + -1;
        }
        uVar5 = (ushort)bVar1;
        if (uVar5 == 0) {
          if (iVar7 << 0x10 < 1) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar7 = iVar7 + -1;
          }
          if ((int)(uVar11 << 0x10) < 1) {
            uVar11 = uVar11 + 1;
          }
          else {
            uVar11 = uVar11 - 1;
          }
          *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)iVar7;
          *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)uVar11;
        }
        else {
          *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)iVar7;
          *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)uVar11;
          iVar7 = FUN_80083f50(iVar10);
          iVar7 = iVar7 * (short)param_2 >> 0xc;
          iVar8 = FUN_80083e80(iVar10);
          uVar11 = (uint)(-iVar8 * (int)(short)param_2) >> 0xc;
          if (iVar7 << 0x10 < 1) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar7 = iVar7 + -1;
          }
          if ((int)(uVar11 << 0x10) < 1) {
            uVar11 = uVar11 + 1;
          }
          else {
            uVar11 = uVar11 - 1;
          }
          if (iVar12 != 0) {
            uVar11 = -uVar11;
            iVar7 = -iVar7;
          }
        }
      }
    } while ((local_30 != 0) && (uVar5 != 0));
    if (local_38 != 0) break;
    iVar12 = iVar12 + 1;
    if (1 < iVar12) {
      return false;
    }
  }
  DAT_1f800258 = 1;
  return iVar12 == 0;
}

