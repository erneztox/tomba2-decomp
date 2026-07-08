
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_80046a44(int param_1,ushort param_2,short param_3,short param_4)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  short unaff_s4;
  char cVar11;
  uint uVar12;
  uint uVar13;
  
  iVar6 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
  uVar13 = (uint)(-iVar6 * (int)(short)param_2) >> 0xc;
  iVar7 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
  cVar11 = '\0';
  iVar6 = 10;
  iVar10 = (int)param_4;
  iVar9 = iVar10 + -1;
  uVar12 = (uint)(iVar7 * (short)param_2) >> 0xc;
  do {
    _DAT_1f8001bc = *(short *)(param_1 + 0x2e) + (short)uVar12;
    _DAT_1f8001be = *(short *)(param_1 + 0x32) + param_3;
    _DAT_1f8001c0 = *(short *)(param_1 + 0x36) + (short)uVar13;
    iVar7 = FUN_800498c8(param_1);
    if (iVar7 == 0) {
      return 0;
    }
    sVar4 = FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                         (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
    sVar4 = -sVar4;
    if (cVar11 == '\0') {
      uVar8 = (sVar4 - *(short *)(param_1 + 0x56)) + 0x400U & 0xfff;
      if ((int)((uint)param_2 << 0x10) < 0) {
        uVar8 = uVar8 + 0x800 & 0xfff;
      }
      unaff_s4 = 4;
      if (0x7ff < uVar8) {
        unaff_s4 = 8;
      }
    }
    sVar5 = FUN_8004602c((int)unaff_s4,1,cVar11);
    sVar3 = _DAT_1f8001c6;
    if ((int)sVar5 == 0) {
      return 0;
    }
    uVar8 = _DAT_1f8001bc & 0xffc0;
    *(ushort *)(param_1 + 0x36) = _DAT_1f8001c0 & 0xffc0;
    sVar2 = _DAT_1f8001c2;
    *(ushort *)(param_1 + 0x2e) = uVar8;
    *(ushort *)(param_1 + 0x2e) = uVar8 + sVar2;
    bVar1 = ((int)sVar5 & 0x8000U) != 0;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + sVar3;
    if (bVar1) {
      iVar6 = iVar6 + -1;
      if (unaff_s4 == 8) {
        iVar7 = FUN_80083f50((int)sVar4);
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar7 * iVar10 >> 0xc);
        iVar7 = FUN_80083e80((int)sVar4);
        sVar4 = *(short *)(param_1 + 0x36) + (short)(-iVar7 * iVar10 >> 0xc);
LAB_80046cc8:
        *(short *)(param_1 + 0x36) = sVar4;
      }
      else if (unaff_s4 == 4) {
        iVar7 = FUN_80083f50((int)sVar4);
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar7 * iVar10 >> 0xc);
        iVar7 = FUN_80083e80((int)sVar4);
        sVar4 = *(short *)(param_1 + 0x36) - (short)(-iVar7 * iVar10 >> 0xc);
        goto LAB_80046cc8;
      }
      iVar7 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
      uVar12 = (uint)(iVar7 * iVar9) >> 0xc;
      iVar7 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
      uVar13 = (uint)(-iVar7 * iVar9) >> 0xc;
    }
    else {
      if (unaff_s4 == 8) {
        iVar7 = FUN_80083f50((int)sVar4);
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar7 * iVar9 >> 0xc);
        iVar7 = FUN_80083e80((int)sVar4);
        sVar4 = *(short *)(param_1 + 0x36) + (short)(-iVar7 * iVar9 >> 0xc);
      }
      else {
        if (unaff_s4 != 4) goto LAB_80046db0;
        iVar7 = FUN_80083f50((int)sVar4);
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar7 * iVar9 >> 0xc);
        iVar7 = FUN_80083e80((int)sVar4);
        sVar4 = *(short *)(param_1 + 0x36) - (short)(-iVar7 * iVar9 >> 0xc);
      }
      *(short *)(param_1 + 0x36) = sVar4;
    }
LAB_80046db0:
    if ((iVar6 == 0) || (cVar11 = '\x01', !bVar1)) {
      if ((_DAT_1f8001a6 & 0x400) != 0) {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + _DAT_1f8001c4;
      }
      return _DAT_1f8001a6 >> 9 & 3;
    }
  } while( true );
}

