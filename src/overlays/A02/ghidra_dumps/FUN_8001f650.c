// FUN_8001f650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8001f650(byte *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar8 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar6 = FUN_80084080(iVar9 * iVar9 + iVar8 * iVar8);
  bVar4 = false;
  if (((int)(uVar6 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
     && (bVar4 = false,
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    _DAT_1f80009c = FUN_80085690(-iVar8,iVar9);
    bVar4 = true;
  }
  uVar7 = 0;
  if (bVar4) {
    if ((*param_1 & 4) == 0) {
      iVar8 = FUN_80083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar9 = FUN_80083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_3 + 0x2c) + (short)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_3 + 0x34) -
           (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    }
    param_1[0x60] = 1;
    cVar5 = FUN_80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
    param_1[0x5f] = cVar5 + 2U;
    if (param_1[0x164] == 0) {
      uVar7 = 1;
      if (((param_1[0x149] & 4) == 0) && (uVar7 = 1, param_1[0x147] == (cVar5 + 2U & 1))) {
        param_1[0x44] = 0;
        param_1[0x45] = 0;
      }
    }
    else {
      uVar7 = 2;
    }
  }
  return uVar7;
}

