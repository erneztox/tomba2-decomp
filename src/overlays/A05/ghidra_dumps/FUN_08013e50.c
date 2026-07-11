// FUN_08013e50

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_08013e50(undefined1 *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar8 = iVar12 * 0x10000 >> 0x10;
  iVar11 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar9 = iVar11 * 0x10000 >> 0x10;
  uVar10 = func_0x00084080(iVar8 * iVar8 + iVar9 * iVar9);
  uVar4 = *(ushort *)(param_1 + 0x80);
  uVar5 = *(ushort *)(param_2 + 0x80);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uVar10 & 0xffff)) {
    return 0xffffffff;
  }
  iVar8 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
  if ((int)(iVar8 + (((uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x86)) -
                    (uint)*(ushort *)(param_1 + 0x84)) & 0xffff) <=
      (int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
    if (iVar8 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar9 = (uint)*(ushort *)(param_1 + 0x84) +
            ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar11,(int)(short)iVar12);
    iVar11 = (int)((((uint)uVar4 + (uint)uVar5) - uVar10) * 0x10000) >> 0x10;
    iVar8 = (iVar9 - iVar8) * 0x10000 >> 0x10;
    uVar6 = (undefined1)(_DAT_1f80009c >> 4);
    if (iVar8 <= iVar11) {
      if (iVar9 * 0x10000 < 1) {
        uVar10 = (byte)param_1[0xbf] & 1;
        if ((param_1[0xbf] & 1) == 0) {
          if (iVar8 < 0x29) {
            sVar1 = *(short *)(param_2 + 0x32);
            param_1[0x29] = 1;
            *(short *)(param_1 + 0x32) = sVar1 + (short)iVar9;
            halt_baddata();
          }
          param_1[0x2b] = uVar6;
          *param_1 = 2;
          param_1[4] = 2;
          param_1[5] = 2;
          param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (0x28 < iVar8) {
          param_1[0x2b] = uVar6;
          *param_1 = 2;
          param_1[4] = 2;
          param_1[5] = 2;
          param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x32) + (short)iVar9;
        uVar10 = 3;
      }
      return uVar10;
    }
    if (0x28 < iVar11) {
      param_1[0x2b] = uVar6;
      *param_1 = 2;
      param_1[4] = 2;
      param_1[5] = 2;
      param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar8 = func_0x00083f50();
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar9 = func_0x00083e80(_DAT_1f80009c);
    sVar3 = *(short *)(param_2 + 0x80);
    iVar11 = (int)_DAT_1f80009c;
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_2 + 0x2e) + (short)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) -
         (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    cVar7 = func_0x00077768(iVar11,(int)*(short *)(param_1 + 0x60),1);
    param_1[0x5f] = cVar7 + '\x02';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

