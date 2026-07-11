// FUN_08012698

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_08012698(int param_1)

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
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x20;
    if (-1 < *(short *)(param_1 + 0x17e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x80) << 0x10;
    iVar8 = param_1 + 0x2c;
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
    _DAT_1f8000c4 = 0;
    cVar2 = func_0x00125c5c(iVar8,&DAT_1f8000c0,1);
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
      cVar2 = func_0x00125c5c(iVar8,&DAT_1f8000c0,1);
      *(char *)(param_1 + 0x29) = cVar2;
      if (cVar2 == '\0') {
        _DAT_1f8000c0 = -sVar6;
        _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
        _DAT_1f8000c4 = -sVar9;
        cVar2 = func_0x00125c5c(iVar8,&DAT_1f8000c0,1);
        *(char *)(param_1 + 0x29) = cVar2;
        if (cVar2 == '\0') {
          _DAT_1f80019e = _DAT_1f8001a4;
          halt_baddata();
        }
      }
    }
    if (*(char *)(param_1 + 0x29) == -1) {
      *(undefined2 *)(param_1 + 0x32) = 0xf7f4;
      _DAT_1f80019e = 0xf880;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f80019e = _DAT_1f8001a4;
    if ((((DAT_1f800137 == '\0') && (*(char *)(param_1 + 4) != '\x04')) &&
        (*(byte *)(param_1 + 5) < 2)) && (_DAT_1f8001a6 == 0x2009)) {
      if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\a')) {
        *(undefined1 *)(param_1 + 5) = 6;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 1;
      }
      _DAT_1f8001a6 = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x29);
    bVar3 = bVar1 & 1;
    *(short *)(param_1 + 0x6a) = _DAT_1f8001a6;
    *(byte *)(param_1 + 0x29) = bVar3;
    if ((bVar1 & 1) != 0) {
      *(undefined2 *)(param_1 + 0x50) = 0;
      *(byte *)(param_1 + 0x29) = bVar3 | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (11000 < *(short *)(param_1 + 0x36)) {
    *(undefined2 *)(param_1 + 0x6a) = 0x800;
  }
  return *(undefined1 *)(param_1 + 0x29);
}

