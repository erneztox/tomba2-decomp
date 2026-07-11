// FUN_08013b4c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013b4c(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar5 = iVar10 * 0x10000 >> 0x10;
  iVar9 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar6 = iVar9 * 0x10000 >> 0x10;
  uVar4 = func_0x00084080(iVar5 * iVar5 + iVar6 * iVar6);
  uVar7 = 0;
  if ((int)(uint)uVar4 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar5 + (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff
             )) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar5 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar8 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
            (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar9,(int)(short)iVar10);
    iVar6 = ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar4;
    iVar5 = (int)sVar8 - (int)(short)iVar5;
    if ((iVar6 < iVar5) || (iVar6 < 3)) {
      iVar6 = func_0x00083f50();
      sVar8 = *(short *)(param_1 + 0x80);
      sVar1 = *(short *)(param_2 + 0x80);
      iVar9 = func_0x00083e80(_DAT_1f80009c);
      sVar2 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_3 + 0x2c) + (short)(iVar6 * ((int)sVar8 + (int)sVar1) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_3 + 0x34) -
           (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
      if (0x91 < iVar5) {
        *(undefined1 *)(param_1 + 0x60) = 1;
      }
      cVar3 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      *(char *)(param_1 + 0x5f) = cVar3 + '\x02';
      iVar5 = _DAT_1f80009c;
      uVar7 = 1;
      if ((1 < *(byte *)(param_2 + 0x5e)) && (*(char *)(param_1 + 4) == '\x01')) {
        if (*(char *)(param_1 + 5) == '\x13') {
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 5) = 0x13;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        *(char *)(param_1 + 0x2b) = (char)(iVar5 >> 4);
        halt_baddata();
      }
    }
    else {
      iVar5 = (int)sVar8;
      if (iVar5 < 1) {
        uVar7 = 0;
        if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
          *(int *)(param_1 + 0x30) = (*(int *)(param_3 + 0x30) + iVar5) * 0x10000;
          func_0x00022c78();
          if (0x50 < (short)uVar4) {
            halt_baddata();
          }
          _DAT_1f80018c =
               *(short *)(param_2 + 0x56) + *(short *)(*(int *)(param_2 + 0xc4) + 10) + 0x400U &
               0xfff;
          _DAT_1f800184 = param_2;
          _DAT_1f800188 = *(undefined2 *)(param_3 + 0x2c);
          _DAT_1f80018a = *(undefined2 *)(param_3 + 0x34);
          _DAT_1f80018e = 1;
          _DAT_1f800196 = _DAT_1f80018c;
          halt_baddata();
        }
      }
      else {
        uVar7 = 3;
        if (_DAT_1f800098 == 0) {
          DAT_1f800253 = 4;
          *(int *)(param_1 + 0x30) = (*(int *)(param_3 + 0x30) + iVar5) * 0x10000;
          if (*(short *)(param_1 + 0x4a) < 0) {
            *(undefined2 *)(param_1 + 0x4a) = 0;
          }
          uVar7 = 3;
        }
      }
    }
  }
  return uVar7;
}

