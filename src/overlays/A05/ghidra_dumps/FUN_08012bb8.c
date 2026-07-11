// FUN_08012bb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012bb8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar4 = func_0x00084080(iVar6 * iVar6 + iVar5 * iVar5);
  if (((int)(uVar4 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
     && ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
               (uint)*(ushort *)(param_2 + 0x84) +
               ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) & 0xffff) <=
         (int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    *(undefined1 *)(param_1 + 0x2b) = 1;
    _DAT_1f80009c = func_0x00085690(-iVar5,iVar6);
    iVar5 = func_0x00083f50();
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar6 = func_0x00083e80(_DAT_1f80009c);
    sVar3 = *(short *)(param_2 + 0x80);
    DAT_1f800182 = 0;
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) -
         (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
  }
  return;
}

