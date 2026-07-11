// FUN_08014f88

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08014f88(byte *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  
  iVar14 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar10 = iVar14 * 0x10000 >> 0x10;
  iVar13 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar11 = iVar13 * 0x10000 >> 0x10;
  uVar9 = func_0x00084080(iVar10 * iVar10 + iVar11 * iVar11);
  uVar12 = 0xffffffff;
  if ((int)(uint)uVar9 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    uVar4 = *(ushort *)(param_2 + 0x84);
    uVar5 = *(ushort *)(param_1 + 0x84);
    iVar10 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
    uVar6 = *(ushort *)(param_1 + 0x86);
    uVar7 = *(ushort *)(param_2 + 0x86);
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar10 + (uint)uVar4 + (uint)uVar5 & 0xffff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar10 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar13,(int)(short)iVar14);
    iVar10 = ((int)((((uint)uVar7 - (uint)uVar4) + ((uint)uVar6 - (uint)uVar5)) * 0x10000) >> 0x10)
             - (int)(short)iVar10;
    if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar9 <
        iVar10) {
      if ((*param_1 & 4) == 0) {
        iVar11 = func_0x00083f50(_DAT_1f80009c);
        sVar1 = *(short *)(param_1 + 0x80);
        sVar2 = *(short *)(param_2 + 0x80);
        iVar13 = func_0x00083e80(_DAT_1f80009c);
        sVar3 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_3 + 0x2c) + (short)(iVar11 * ((int)sVar1 + (int)sVar2) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_3 + 0x34) -
             (short)(iVar13 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
      }
      if (0x91 < iVar10) {
        param_1[0x60] = 1;
      }
      cVar8 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      param_1[0x5f] = cVar8 + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar12 = 1;
    if ((*param_1 & 4) == 0) {
      iVar10 = func_0x00083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      iVar11 = func_0x00083e80(_DAT_1f80009c);
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar10 * sVar1 >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_1 + 0x36) - (short)(iVar11 * *(short *)(param_1 + 0x80) >> 0xc);
      uVar12 = 1;
    }
  }
  return uVar12;
}

