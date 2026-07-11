// FUN_08010820

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08010820(byte *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar5 = iVar9 * 0x10000 >> 0x10;
  iVar8 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar6 = iVar8 * 0x10000 >> 0x10;
  uVar4 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar4) {
    return 0xffffffff;
  }
  iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
  if ((int)(iVar5 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff)
      <= (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
    if (iVar5 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar7 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
            (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar8,(int)(short)iVar9);
    iVar5 = (int)sVar7 - (int)(short)iVar5;
    if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar4 <
        iVar5) {
      if ((*param_1 & 4) == 0) {
        iVar6 = func_0x00083f50(_DAT_1f80009c);
        sVar7 = *(short *)(param_1 + 0x80);
        sVar1 = *(short *)(param_2 + 0x80);
        iVar8 = func_0x00083e80(_DAT_1f80009c);
        sVar2 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_3 + 0x2c) + (short)(iVar6 * ((int)sVar7 + (int)sVar1) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_3 + 0x34) -
             (short)(iVar8 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
      }
      cVar3 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      param_1[0x5f] = cVar3 + 2;
      if (0x91 < iVar5) {
        param_1[0x60] = 1;
      }
    }
    else {
      iVar5 = (int)sVar7;
      if (0 < iVar5) {
        if (_DAT_1f800098 != 0) {
          return 3;
        }
        DAT_1f800253 = 4;
        *(int *)(param_1 + 0x30) = (*(short *)(param_3 + 0x30) + iVar5) * 0x10000;
        if (param_1[0x145] != 1) {
          return 3;
        }
        if (-1 < *(short *)(param_1 + 0x4a)) {
          return 3;
        }
        param_1[0x4a] = 0;
        param_1[0x4b] = 0;
        return 3;
      }
      if ((param_1[0x145] & 1) == 0) {
        *(undefined1 *)(param_2 + 0x29) = 1;
        *(int *)(param_1 + 0x30) = (*(short *)(param_3 + 0x30) + iVar5) * 0x10000;
        func_0x00022c78();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

