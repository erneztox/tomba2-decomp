// FUN_800468ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_800468ac(int param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = FUN_80083e80((int)param_4);
  iVar5 = (int)param_2;
  uVar8 = (uint)(-iVar3 * iVar5) >> 0xc;
  iVar3 = FUN_80083f50((int)param_4);
  iVar6 = 0;
  _DAT_1f8001be = *(short *)(param_1 + 0x32) + param_3;
  uVar7 = (uint)(iVar3 * iVar5) >> 0xc;
  do {
    _DAT_1f8001bc = *(short *)(param_1 + 0x2e) + (short)uVar7;
    _DAT_1f8001c0 = *(short *)(param_1 + 0x36) + (short)uVar8;
    iVar3 = FUN_800498c8(param_1);
    if (iVar3 == 0) {
      return false;
    }
    sVar1 = FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                         (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
    if (iVar6 == 0) {
      uVar2 = (-sVar1 - *(short *)(param_1 + 0x56)) + 0x400U & 0xfff;
      if (iVar5 < 0) {
        uVar2 = uVar2 + 0x800 & 0xfff;
      }
      uVar4 = 4;
      if (0x7ff < uVar2) {
        uVar4 = 8;
      }
    }
    else {
      uVar4 = 4;
      if (-sVar1 == 4) {
        uVar4 = 8;
      }
    }
    sVar1 = FUN_8004602c(uVar4,0,0);
    uVar7 = -uVar7;
    if (sVar1 != 0) break;
    iVar6 = iVar6 + 1;
    uVar8 = -uVar8;
  } while (iVar6 < 2);
  return sVar1 != 0 && iVar6 == 0;
}

