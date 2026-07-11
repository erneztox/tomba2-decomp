// FUN_0802d9cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0802d9cc(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e);
  iVar5 = (uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36);
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar5 = iVar5 * 0x10000 >> 0x10;
    iVar4 = iVar4 * 0x10000 >> 0x10;
    uVar1 = func_0x00085690(-iVar5,iVar4);
    *(ushort *)(param_1 + 100) = uVar1 & 0xfff;
    if ((uVar1 & 0xfff) != *(ushort *)(param_1 + 0x72)) {
      uVar2 = func_0x00084080(iVar4 * iVar4 + iVar5 * iVar5);
      *(undefined2 *)(param_1 + 0x66) = uVar2;
      iVar4 = (uint)*(ushort *)(param_1 + 0x72) + (uint)*(ushort *)(param_1 + 0x74);
      iVar5 = iVar4 * 0x10000 >> 0x10;
      if ((0x1000 < iVar5) && ((int)*(short *)(param_1 + 100) <= iVar5 + -0x1000)) {
        *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + 0x1000;
      }
      iVar5 = (int)*(short *)(param_1 + 100);
      if ((*(short *)(param_1 + 0x72) < iVar5) && (iVar5 <= iVar4 * 0x10000 >> 0x10)) {
        *(short *)(param_1 + 0x76) = -*(short *)(param_1 + 0x76);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar4 * 0x10000 >> 0x10 < iVar5) {
        *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + -0x1000;
      }
      DAT_800e7e85 = 0x27;
      DAT_800e7e86 = 0;
      _DAT_800e7ec4 = 10;
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (*(char *)(param_1 + 0x78) == '\x01') {
    sVar3 = *(short *)(param_1 + 100) + *(short *)(param_1 + 0x76);
    *(short *)(param_1 + 100) = sVar3;
    if (-1 < *(short *)(param_1 + 0x76)) {
      if (*(short *)(param_1 + 0x72) <= sVar3) {
        *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x72);
        _DAT_800e7ec4 = 0;
      }
      func_0x00085690(-(iVar5 * 0x10000 >> 0x10),iVar4 * 0x10000 >> 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (sVar3 <= *(short *)(param_1 + 0x72)) {
      *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x72);
      _DAT_800e7ec4 = 0;
    }
    _DAT_800e7ed6 = func_0x00085690(-(iVar5 * 0x10000 >> 0x10),iVar4 * 0x10000 >> 0x10);
    _DAT_800e7ed6 = _DAT_800e7ed6 + -0x400;
    iVar4 = func_0x00083f50(-(int)*(short *)(param_1 + 100));
    iVar4 = iVar4 * *(short *)(param_1 + 0x66);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    _DAT_800e7eae = *(short *)(param_1 + 0x2e) + (short)(iVar4 >> 0xc);
    iVar4 = func_0x00083e80(-(int)*(short *)(param_1 + 100));
    iVar4 = iVar4 * *(short *)(param_1 + 0x66);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    _DAT_800e7eb6 = *(short *)(param_1 + 0x36) + (short)(iVar4 >> 0xc);
    return _DAT_800e7ec4 == 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

