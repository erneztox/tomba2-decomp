// FUN_08013970

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013970(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = *(int *)(param_2 + 0xcc);
  iVar12 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar11 + 0x2c)) * 0x10000)
           >> 0x10;
  iVar10 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar11 + 0x34)) * 0x10000)
           >> 0x10;
  uVar7 = func_0x00084080(iVar12 * iVar12 + iVar10 * iVar10);
  bVar4 = false;
  if (((int)(uVar7 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x28) &&
     (bVar4 = false,
     (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(iVar11 + 0x30)) +
           *(ushort *)(param_1 + 0x84) + 0x19 & 0xffff) <= *(short *)(param_1 + 0x86) + 0x32)) {
    _DAT_1f80009c = func_0x00085690(-iVar10,iVar12);
    bVar4 = true;
  }
  if (bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar9 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar10 = iVar9 * 0x10000 >> 0x10;
  iVar12 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar11 = iVar12 * 0x10000 >> 0x10;
  uVar6 = func_0x00084080(iVar10 * iVar10 + iVar11 * iVar11);
  uVar8 = 0;
  if ((int)(uint)uVar6 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar10 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar10 + (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) &
             0xffff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar10 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
             ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x00085690(-(int)(short)iVar12,(int)(short)iVar9);
    if ((iVar11 * 0x10000 < 0) && ((int)(short)iVar11 - (int)(short)iVar10 < 0x1a)) {
      if ((param_1[0x145] & 1) != 0) {
        halt_baddata();
      }
    }
    else if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar6
             < (int)(short)iVar11 - (int)(short)iVar10) {
      if ((*param_1 & 4) == 0) {
        iVar10 = func_0x00083f50(_DAT_1f80009c);
        sVar3 = *(short *)(param_1 + 0x80);
        sVar1 = *(short *)(param_2 + 0x80);
        iVar11 = func_0x00083e80(_DAT_1f80009c);
        sVar2 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_2 + 0x2e) + (short)(iVar10 * ((int)sVar3 + (int)sVar1) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_2 + 0x36) -
             (short)(iVar11 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
      }
      cVar5 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      param_1[0x5f] = cVar5 + 2;
      param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
      func_0x00022d08(param_1,0,1,1);
      halt_baddata();
    }
    iVar10 = iVar11 * 0x10000 >> 0x10;
    if (iVar10 < 1) {
      uVar8 = 0;
      if ((param_1[0x145] & 1) == 0) {
        param_1[0x29] = 1;
        sVar3 = *(short *)(param_2 + 0x32);
        param_1[0x4a] = 0;
        param_1[0x4b] = 0;
        *(int *)(param_1 + 0x30) = (sVar3 + iVar10) * 0x10000;
        *(undefined1 *)(param_2 + 0x29) = 1;
        if (1 < param_1[4]) {
          func_0x00022c78(param_1);
          halt_baddata();
        }
        if (param_1[5] == 0x18) {
          halt_baddata();
        }
        param_1[0x29] = 1;
        param_1[0x145] = 0;
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        param_1[0x148] = 0;
        param_1[5] = 0x18;
        param_1[6] = 0xe;
        param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (_DAT_1f800098 == 0) {
        DAT_1f800253 = 4;
        *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x32) + iVar10) * 0x10000;
        if ((param_1[0x145] == 1) && (*(short *)(param_1 + 0x4a) < 0)) {
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
        }
      }
      param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
      func_0x00022d08(param_1,0,1,1);
      uVar8 = 3;
    }
  }
  return uVar8;
}

