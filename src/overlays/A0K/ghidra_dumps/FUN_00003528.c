// FUN_00003528

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00003528(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  
  *(undefined2 *)(param_1 + 0x6a) = 0;
  if (*(char *)(param_1 + 0x29) == '\0') {
    iVar8 = param_1 + 0x2c;
    if (-1 < *(short *)(param_1 + 0x17e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x80) << 0x10;
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
    _DAT_1f8000c4 = 0;
    cVar2 = func_0x00117b24(iVar8,&DAT_1f8000c0,1);
    *(char *)(param_1 + 0x29) = cVar2;
    if (cVar2 == '\0') {
      iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      iVar7 = (int)(short)((uint)((iVar4 >> 0x10) - (iVar4 >> 0x1f)) >> 1);
      iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      sVar6 = (short)(iVar4 * iVar7 >> 0xc);
      _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
      sVar9 = (short)(-iVar5 * iVar7 >> 0xc);
      _DAT_1f8000c0 = sVar6;
      _DAT_1f8000c4 = sVar9;
      cVar2 = func_0x00117b24(iVar8,&DAT_1f8000c0,1);
      *(char *)(param_1 + 0x29) = cVar2;
      if (cVar2 == '\0') {
        _DAT_1f8000c0 = -sVar6;
        _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
        _DAT_1f8000c4 = -sVar9;
        cVar2 = func_0x00117b24(iVar8,&DAT_1f8000c0,1);
        *(char *)(param_1 + 0x29) = cVar2;
        if (cVar2 == '\0') {
          _DAT_1f80019e = _DAT_1f8001a4;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    _DAT_1f80019e = _DAT_1f8001a4;
    bVar1 = *(byte *)(param_1 + 0x29);
    bVar3 = bVar1 & 1;
    *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
    *(byte *)(param_1 + 0x29) = bVar3;
    if ((bVar1 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x50) = 0;
      *(byte *)(param_1 + 0x29) = bVar3 | 0x80;
    }
  }
  return *(undefined1 *)(param_1 + 0x29);
}

