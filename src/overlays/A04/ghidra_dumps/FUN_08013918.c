// FUN_08013918

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013918(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar6 = iVar10 * 0x10000 >> 0x10;
  iVar9 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar7 = iVar9 * 0x10000 >> 0x10;
  uVar4 = func_0x00084080(iVar6 * iVar6 + iVar7 * iVar7);
  uVar8 = 0xffffffff;
  if ((int)(uint)uVar4 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar6 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar6 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff
             )) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar6 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar5 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
            (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar9,(int)(short)iVar10);
    if ((sVar5 < 0) && ((int)sVar5 - (int)(short)iVar6 < 0x1a)) {
      uVar8 = 0xffffffff;
      if ((param_1[0x145] & 1) == 0) {
        *(undefined1 *)(param_2 + 0x29) = 1;
        func_0x00022c78(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      iVar6 = (int)sVar5 - (int)(short)iVar6;
      if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar4 <
          iVar6) {
        if ((*param_1 & 4) == 0) {
          iVar7 = func_0x00083f50(_DAT_1f80009c);
          sVar5 = *(short *)(param_1 + 0x80);
          sVar1 = *(short *)(param_2 + 0x80);
          iVar9 = func_0x00083e80(_DAT_1f80009c);
          sVar2 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar7 * ((int)sVar5 + (int)sVar1) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
        }
        if (0x91 < iVar6) {
          param_1[0x60] = 1;
        }
        cVar3 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
        param_1[0x5f] = cVar3 + 2;
        halt_baddata();
      }
      iVar6 = (int)sVar5;
      if (iVar6 < 1) {
        uVar8 = 0xffffffff;
        if ((param_1[0x145] & 1) == 0) {
          *(undefined1 *)(param_2 + 0x29) = 1;
          func_0x00022c78(param_1);
          *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x32) + iVar6) * 0x10000;
          halt_baddata();
        }
      }
      else {
        uVar8 = 3;
        if (_DAT_1f800098 == 0) {
          DAT_1f800253 = 4;
          *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x32) + iVar6) * 0x10000;
          uVar8 = 3;
          if ((param_1[0x145] == 1) && (uVar8 = 3, *(short *)(param_1 + 0x4a) < 0)) {
            param_1[0x4a] = 0;
            param_1[0x4b] = 0;
          }
        }
      }
    }
  }
  return uVar8;
}

