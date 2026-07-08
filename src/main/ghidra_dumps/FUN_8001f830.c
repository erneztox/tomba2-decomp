
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8001f830(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar8 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar6 = FUN_80084080(iVar9 * iVar9 + iVar8 * iVar8);
  bVar4 = false;
  if (((int)(uint)uVar6 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) &&
     (bVar4 = false,
     (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
           (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
     (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    _DAT_1f80008c = (int)(short)uVar6;
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
           *(short *)(param_2 + 0x2e) + (short)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    }
    cVar5 = FUN_80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
    uVar7 = 1;
    param_1[0x5f] = cVar5 + 2;
  }
  return uVar7;
}

