// FUN_08012a60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08012a60(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar7 = iVar10 * 0x10000 >> 0x10;
  iVar9 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar8 = iVar9 * 0x10000 >> 0x10;
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
    sVar6 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
            (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar9,(int)(short)iVar10);
    if ((-1 < sVar6) || (0x19 < (int)sVar6 - (int)(short)iVar7)) {
      iVar8 = 0xa0;
      if (*(short *)(param_2 + 0x2e) < *(short *)(param_1 + 0x2e)) {
        iVar8 = 0x50;
      }
      if (iVar8 << 0x10 <= iVar7 * 0x10000) {
        iVar7 = (int)sVar6 - (iVar7 * 0x10000 >> 0x10);
        if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar5
            < iVar7) {
          if ((*param_1 & 4) == 0) {
            iVar8 = func_0x00083f50(_DAT_1f80009c);
            sVar6 = *(short *)(param_1 + 0x80);
            sVar1 = *(short *)(param_2 + 0x80);
            iVar9 = func_0x00083e80(_DAT_1f80009c);
            sVar2 = *(short *)(param_2 + 0x80);
            *(short *)(param_1 + 0x2e) =
                 *(short *)(param_2 + 0x2e) + (short)(iVar8 * ((int)sVar6 + (int)sVar1) >> 0xc);
            *(short *)(param_1 + 0x36) =
                 *(short *)(param_2 + 0x36) -
                 (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
          }
          if (0x91 < iVar7) {
            param_1[0x60] = 1;
          }
          cVar4 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
          param_1[0x5f] = cVar4 + 2;
        }
        else {
          if ((param_1[0x145] & 1) != 0) {
            return 0xffffffff;
          }
          *(int *)(param_1 + 0x30) = ((int)*(short *)(param_2 + 0x32) + (int)sVar6) * 0x10000;
          func_0x00022c78();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x4a) < 0) {
        param_1[0x4a] = 0;
        param_1[0x4b] = 0;
      }
      if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) + -0x32 <=
          (int)(short)uVar5) {
        return 2;
      }
      if (*(char *)(param_2 + 0x29) != '\0') {
        return 2;
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x32) - *(short *)(param_1 + 0x84);
      func_0x00022c78(param_1);
      if (*(short *)(param_1 + 0x16e) == 0) {
        halt_baddata();
      }
      if (DAT_1f800137 == '\0') {
        DAT_1f800137 = '\x02';
        *(undefined1 *)(param_2 + 0x46) = 2;
      }
      func_0x00053d90(param_1);
      param_1[4] = 4;
      param_1[0x146] = 0;
      param_1[5] = 0x21;
      param_1[6] = 0;
      param_1[7] = 0;
      func_0x00054d14(param_1,4,3);
      uVar3 = 3;
      if (*(short *)(param_1 + 0x2e) <= *(short *)(param_2 + 0x2e)) {
        uVar3 = 2;
      }
      *(undefined1 *)(param_2 + 0x29) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((param_1[0x145] & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}

