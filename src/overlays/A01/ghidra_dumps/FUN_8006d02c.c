// FUN_8006d02c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006d02c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = (int)_DAT_1f8000de - (int)_DAT_1f8000d2;
  iVar5 = (int)_DAT_1f8000e6 - (int)_DAT_1f8000da;
  iVar4 = (int)_DAT_1f8000e2 - (int)_DAT_1f8000d6;
  iVar3 = iVar6 * iVar6 + iVar5 * iVar5;
  uVar1 = FUN_80077fb0(iVar3 + iVar4 * iVar4);
  uVar1 = uVar1 & 0xffff;
  uVar2 = FUN_80077fb0(iVar3);
  uVar2 = uVar2 & 0xffff;
  *(uint *)(param_1 + 0x5c) = uVar1;
  *(uint *)(param_1 + 0x60) = uVar2;
  if (uVar1 != 0) {
    FUN_80051794(&DAT_1f8000f8);
    iVar3 = (iVar4 * 0x1000) / (int)uVar1;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar1 == 0xffffffff) && (iVar4 * 0x1000 == -0x80000000)) {
      trap(0x1800);
    }
    uVar7 = (uVar2 << 0xc) / uVar1;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar1 == 0xffffffff) && (uVar2 == 0x80000)) {
      trap(0x1800);
    }
    _DAT_1f8000f0 = FUN_80085690(iVar3,uVar7);
    _DAT_1f800106 = (short)iVar3;
    _DAT_1f800102 = -_DAT_1f800106;
    _DAT_1f800100 = (undefined2)uVar7;
    _DAT_1f800108 = _DAT_1f800100;
    if (uVar2 != 0) {
      iVar3 = (iVar6 * -0x1000) / (int)uVar2;
      if (uVar2 == 0) {
        trap(0x1c00);
      }
      if ((uVar2 == 0xffffffff) && (iVar6 * -0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      iVar4 = (iVar5 * 0x1000) / (int)uVar2;
      if (uVar2 == 0) {
        trap(0x1c00);
      }
      if ((uVar2 == 0xffffffff) && (iVar5 * 0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      _DAT_1f8000f2 = FUN_80085690(iVar3,iVar4);
      FUN_80051794(0x1f800000);
      _DAT_1f800000 = (undefined2)iVar4;
      _DAT_1f800004 = (short)iVar3;
      _DAT_1f80000c = -_DAT_1f800004;
      _DAT_1f800010 = _DAT_1f800000;
      FUN_80084250(&DAT_1f8000f8);
    }
  }
  _DAT_1f8000c0 = -_DAT_1f8000d2;
  _DAT_1f8000ea = _DAT_1f800106;
  _DAT_1f8000e8 = _DAT_1f800104;
  _DAT_1f8000ec = _DAT_1f800108;
  _DAT_1f8000c2 = -_DAT_1f8000d6;
  _DAT_1f8000c4 = -_DAT_1f8000da;
  FUN_80084470(&DAT_1f8000f8,&DAT_1f8000c0,&DAT_1f80010c);
  FUN_800847b0(&DAT_1f8000f8,0x1f800118);
  return;
}

