// FUN_80048894

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80048894(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  _DAT_1f8001bc = *(undefined2 *)(param_1 + 0x2e);
  _DAT_1f8001be = *(undefined2 *)(param_1 + 0x32);
  _DAT_1f8001c0 = *(undefined2 *)(param_1 + 0x36);
  do {
    FUN_80047778(param_1);
    FUN_80049968(*(undefined1 *)(param_1 + 0x2a));
    iVar3 = FUN_80047cbc();
    if (iVar3 == 0) {
      return false;
    }
  } while (((*_DAT_1f8001e0 & 0x4000) != 0) &&
          (*(char *)(param_1 + 0x2a) = (char)*_DAT_1f8001e0, (*_DAT_1f8001e0 & 0x4000) != 0));
  iVar3 = FUN_80048b30();
  if (iVar3 != 0) {
    cVar1 = _DAT_1f8001e8[1];
    iVar5 = (int)_DAT_1f8001e8[2];
    iVar4 = (int)*_DAT_1f8001e8;
    sVar2 = FUN_80085690(iVar5,iVar4);
    _DAT_1f8001a0 = -sVar2 & 0xfff;
    sVar2 = FUN_80084080(iVar4 * iVar4 + iVar5 * iVar5);
    _DAT_1f8001a2 = FUN_80085690((int)(short)cVar1,(int)sVar2);
  }
  return iVar3 != 0;
}

