// FUN_80041194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80041194(int param_1,short param_2,byte param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_8004766c();
  if (iVar4 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    FUN_80048894(param_1);
    if (_DAT_1f8001a4 == 0) {
      return 0;
    }
    iVar4 = (int)*(short *)(param_1 + 0x32) - (int)_DAT_1f8001a4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0xc7f < iVar4) {
      return 0;
    }
    *(short *)(param_1 + 0x32) = _DAT_1f8001a4 - param_2;
  }
  else {
    iVar4 = 0;
    do {
      iVar5 = FUN_80049250(param_1,0,(int)param_2);
      if (iVar5 != 0) break;
      iVar4 = iVar4 + 1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x20;
    } while (iVar4 < 100);
    if (iVar4 == 100) {
      return 0;
    }
  }
  FUN_80049674(param_1);
  uVar2 = _DAT_1f8001a2;
  sVar1 = _DAT_1f8001a0;
  *(byte *)(param_1 + 0xbe) = param_3 & 1;
  *(short *)(param_1 + 0x60) = sVar1;
  *(undefined2 *)(param_1 + 0x62) = uVar2;
  if ((param_3 & 1) == 0) {
    uVar3 = *(ushort *)(param_1 + 0x60);
  }
  else {
    uVar3 = sVar1 - 0x800U & 0xfff;
  }
  *(ushort *)(param_1 + 0x56) = uVar3;
  return 1;
}

