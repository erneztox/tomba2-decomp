// FUN_08011fe8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08011fe8(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar7 = iVar12 * 0x10000 >> 0x10;
  iVar11 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar8 = iVar11 * 0x10000 >> 0x10;
  uVar5 = func_0x00084080(iVar7 * iVar7 + iVar8 * iVar8);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar5) {
    return 0xffffffff;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
  if ((int)(iVar7 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff)
      <= (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
    if (iVar7 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar8 = ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
            ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar11,(int)(short)iVar12);
    sVar6 = (short)iVar8;
    sVar10 = (short)iVar7;
    if ((*(byte *)(param_2 + 0x29) & 1) != 0) {
      if ((*param_1 & 4) == 0) {
        iVar7 = func_0x00083f50();
        sVar6 = *(short *)(param_1 + 0x80);
        sVar1 = *(short *)(param_2 + 0x80);
        iVar11 = func_0x00083e80(_DAT_1f80009c);
        sVar2 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_2 + 0x2e) + (short)(iVar7 * ((int)sVar6 + (int)sVar1) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_2 + 0x36) -
             (short)(iVar11 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
      }
      if (0x91 < (iVar8 * 0x10000 >> 0x10) - (int)sVar10) {
        param_1[0x60] = 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((sVar6 < 0) && ((int)sVar6 - (int)sVar10 < 0x18)) {
      if ((param_1[0x145] & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if ((int)sVar6 - (int)sVar10 <=
          ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar5) {
        if (sVar6 < 1) {
          uVar9 = 0xffffffff;
          if ((param_1[0x145] & 1) == 0) {
            if ((*(byte *)(param_2 + 0x29) & 1) != 0) {
              halt_baddata();
            }
            *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | 1;
            *(int *)(param_1 + 0x30) = ((int)*(short *)(param_2 + 0x32) + (int)sVar6) * 0x10000;
            func_0x00022c78();
            halt_baddata();
          }
        }
        else {
          if (((((*(byte *)(param_2 + 0x29) & 0x80) == 0) && (param_1[0x78] == 0)) &&
              (param_1[0x164] == 0)) && (*(short *)(param_1 + 0x44) != 0)) {
            if (-1 < *(short *)(param_1 + 0x44)) {
              _DAT_1f80009c = *(short *)(param_1 + 0x140) + 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            _DAT_1f80009c = (int)*(short *)(param_1 + 0x140);
          }
          uVar9 = 3;
          if ((*param_1 & 4) == 0) {
            iVar7 = func_0x00083f50(_DAT_1f80009c);
            sVar6 = *(short *)(param_1 + 0x80);
            sVar10 = *(short *)(param_2 + 0x80);
            iVar8 = func_0x00083e80(_DAT_1f80009c);
            sVar1 = *(short *)(param_2 + 0x80);
            *(short *)(param_1 + 0x2e) =
                 *(short *)(param_2 + 0x2e) + (short)(iVar7 * ((int)sVar6 + (int)sVar10) >> 0xc);
            *(short *)(param_1 + 0x36) =
                 *(short *)(param_2 + 0x36) -
                 (short)(iVar8 * ((int)*(short *)(param_1 + 0x80) + (int)sVar1) >> 0xc);
            uVar9 = 3;
          }
        }
        return uVar9;
      }
      if ((*param_1 & 4) == 0) {
        iVar7 = func_0x00083f50(_DAT_1f80009c);
        sVar1 = *(short *)(param_1 + 0x80);
        sVar2 = *(short *)(param_2 + 0x80);
        iVar8 = func_0x00083e80(_DAT_1f80009c);
        sVar3 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_2 + 0x2e) + (short)(iVar7 * ((int)sVar1 + (int)sVar2) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_2 + 0x36) -
             (short)(iVar8 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
      }
      if (0x91 < (int)sVar6 - (int)sVar10) {
        param_1[0x60] = 1;
      }
      cVar4 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      param_1[0x5f] = cVar4 + 2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

