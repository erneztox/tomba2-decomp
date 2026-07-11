// FUN_08013010

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013010(byte *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  
  if (*(short *)(param_2 + 0x62) == 0) {
    func_0x0001ec3c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar12 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar8 = iVar12 * 0x10000 >> 0x10;
  iVar11 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar9 = iVar11 * 0x10000 >> 0x10;
  uVar6 = func_0x00084080(iVar8 * iVar8 + iVar9 * iVar9);
  uVar10 = 0;
  if ((int)(uint)uVar6 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar8 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar8 + (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff
             )) {
      halt_baddata();
    }
    if (iVar8 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar7 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
            (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar11,(int)(short)iVar12);
    iVar9 = ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar6;
    if ((iVar9 < (int)sVar7 - (int)(short)iVar8) || (iVar9 < 3)) {
      iVar8 = func_0x00083f50();
      sVar7 = *(short *)(param_1 + 0x80);
      sVar1 = *(short *)(param_2 + 0x80);
      iVar9 = func_0x00083e80(_DAT_1f80009c);
      sVar2 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_3 + 0x2c) + (short)(iVar8 * ((int)sVar7 + (int)sVar1) >> 0xc);
      sVar7 = *(short *)(param_3 + 0x34);
      param_1[0x60] = 1;
      iVar8 = (int)_DAT_1f80009c;
      *(short *)(param_1 + 0x36) =
           sVar7 - (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
      cVar4 = func_0x00077768(iVar8,(int)*(short *)(param_1 + 0x140));
      param_1[0x5f] = cVar4 + 2;
      iVar8 = func_0x00077768((int)*(short *)(param_1 + 0x56),(int)_DAT_1f80009c,0);
      if (iVar8 == 0) {
        halt_baddata();
      }
      bVar5 = (byte)((int)_DAT_1f80009c >> 4);
      if (*(char *)(param_2 + 0x5f) == '\x01') {
        uVar10 = 1;
        if ((param_1[4] == 1) && (uVar10 = 1, param_1[5] != 0x13)) {
          param_1[5] = 0x13;
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[0x2b] = bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (param_1[0x165] == 0) {
          halt_baddata();
        }
        uVar10 = 1;
        if (_DAT_1f800098 == 1) {
          sVar7 = *(short *)(param_1 + 0x44);
          if (*(short *)(param_1 + 0x44) < 0) {
            sVar7 = -sVar7;
          }
          uVar10 = 1;
          if ((0x1a00 < sVar7) && (param_1[4] == 1)) {
            if (param_1[5] == 0x13) {
              halt_baddata();
            }
            param_1[5] = 0x13;
            param_1[6] = 0;
            param_1[7] = 0;
            param_1[0x2b] = bVar5;
            _DAT_1f80009c = _DAT_1f80009c - 0x400 & 0xfff;
            if (0x7ff < _DAT_1f80009c) {
              *(undefined1 *)(param_2 + 0x2b) = 3;
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    else {
      uVar10 = 0;
      if ((param_1[0x145] & 1) == 0) {
        param_1[0x29] = 1;
        *(int *)(param_1 + 0x30) = (*(int *)(param_3 + 0x30) + (int)sVar7) * 0x10000;
        uVar3 = *(undefined2 *)(param_1 + 0x44);
        *(undefined1 *)(param_2 + 0x29) = 1;
        *(undefined2 *)(param_2 + 0x44) = uVar3;
        if ((((*(short *)(param_2 + 0x62) != 0) && ((*param_1 & 4) == 0)) && (param_1[0x145] == 2))
           && (param_1[4] < 2)) {
          iVar8 = func_0x00055844();
          if (iVar8 != 0) {
            param_1[0x145] = 0;
            *(undefined1 *)(param_2 + 0x5e) = 2;
            param_1[0x148] = 0;
            param_1[0x50] = 0;
            param_1[0x51] = 0;
            param_1[5] = 0x17;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((param_1[5] != 0x17) || (0x2c00 < *(short *)(param_1 + 0x4a))) {
            param_1[0x145] = 0;
            *(undefined1 *)(param_2 + 0x5e) = 1;
            param_1[0x148] = 0;
            param_1[0x50] = 0;
            param_1[0x51] = 0;
            param_1[5] = 0x17;
            param_1[6] = 0;
            param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        func_0x00022c78(param_1);
        *(undefined1 *)(param_2 + 0x5e) = 0;
        uVar10 = 2;
      }
    }
  }
  return uVar10;
}

