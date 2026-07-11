// FUN_08013eb4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013eb4(byte *param_1,int param_2,short param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = 0;
  uVar8 = param_4 & 0x7fff;
  if ((param_4 & 0x8000) == 0) {
    iVar9 = 200;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2c);
  iVar3 = iVar7 * 0x10000 >> 0x10;
  iVar9 = iVar9 + (uint)*(ushort *)(param_2 + 0x34);
  iVar6 = (uint)*(ushort *)(param_1 + 0x36) - iVar9;
  iVar4 = iVar6 * 0x10000 >> 0x10;
  uVar2 = func_0x00084080(iVar3 * iVar3 + iVar4 * iVar4);
  if ((int)*(short *)(param_1 + 0x80) + (int)param_3 < (int)(uint)uVar2) {
    return 0xffffffff;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x30);
  if ((int)(iVar3 + uVar8 + *(ushort *)(param_1 + 0x84) & 0xffff) <=
      (int)((int)*(short *)(param_1 + 0x86) + uVar8 * 2)) {
    if (iVar3 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar5 = (short)uVar8 + (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar6,(int)(short)iVar7);
    iVar4 = (int)param_3;
    if ((*(short *)(param_1 + 0x80) + iVar4) - (int)(short)uVar2 < (int)sVar5 - (int)(short)iVar3) {
      if ((*param_1 & 4) == 0) {
        iVar3 = func_0x00083f50(_DAT_1f80009c);
        sVar5 = *(short *)(param_1 + 0x80);
        iVar6 = func_0x00083e80(_DAT_1f80009c);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_2 + 0x2c) + (short)(iVar3 * (sVar5 + iVar4) >> 0xc);
        *(short *)(param_1 + 0x36) =
             (short)iVar9 - (short)(iVar6 * (*(short *)(param_1 + 0x80) + iVar4) >> 0xc);
      }
      cVar1 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      param_1[0x5f] = cVar1 + 2;
    }
    else {
      iVar9 = (int)sVar5;
      if (0 < iVar9) {
        if (_DAT_1f800098 != 0) {
          return 3;
        }
        DAT_1f800253 = 4;
        *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x30) + iVar9) * 0x10000;
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
        *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x30) + iVar9) * 0x10000;
        func_0x00022c78();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

