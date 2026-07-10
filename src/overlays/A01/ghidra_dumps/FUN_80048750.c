// FUN_80048750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80048750(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  _DAT_1f8001bc = *(undefined2 *)(param_1 + 0x2e);
  _DAT_1f8001be = *(undefined2 *)(param_1 + 0x32);
  _DAT_1f8001c0 = *(undefined2 *)(param_1 + 0x36);
  do {
    FUN_80047778(param_1);
    FUN_80049968(*(undefined1 *)(param_1 + 0x2a));
    iVar3 = FUN_80047cbc();
    if (iVar3 == 0) {
      return 0;
    }
  } while (((*_DAT_1f8001e0 & 0x4000) != 0) &&
          (*(char *)(param_1 + 0x2a) = (char)*_DAT_1f8001e0, (*_DAT_1f8001e0 & 0x4000) != 0));
  FUN_80048034();
  cVar1 = _DAT_1f8001e8[1];
  iVar4 = (int)_DAT_1f8001e8[2];
  iVar3 = (int)*_DAT_1f8001e8;
  sVar2 = FUN_80085690(iVar4,iVar3);
  _DAT_1f8001a0 = -sVar2 & 0xfff;
  sVar2 = FUN_80084080(iVar3 * iVar3 + iVar4 * iVar4);
  _DAT_1f8001a2 = FUN_80085690((int)(short)cVar1,(int)sVar2);
  return 1;
}

