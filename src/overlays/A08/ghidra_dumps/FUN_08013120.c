// FUN_08013120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013120(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar6 = (int)((*(ushort *)(param_1 + 0x36) - 0x1040) * 0x10000) >> 0x10;
  uVar5 = func_0x00084080(iVar7 * iVar7 + iVar6 * iVar6);
  if (((int)(uVar5 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
     && ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
               (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
         (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    _DAT_1f80009c = func_0x00085690(-iVar6,iVar7);
    cVar4 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
    param_1[0x5f] = cVar4 + 2;
    if ((*param_1 & 4) == 0) {
      iVar6 = func_0x00083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar7 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           0x1040 - (short)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    }
  }
  return;
}

