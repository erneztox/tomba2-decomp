// FUN_80049674

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80049674(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = _DAT_1f8001e8[1];
  iVar4 = (int)_DAT_1f8001e8[2];
  iVar3 = (int)*_DAT_1f8001e8;
  sVar2 = FUN_80085690(iVar4,iVar3);
  _DAT_1f8001a0 = -sVar2 & 0xfff;
  sVar2 = FUN_80084080(iVar3 * iVar3 + iVar4 * iVar4);
  _DAT_1f8001a2 = FUN_80085690((int)(short)cVar1,(int)sVar2);
  *(short *)(param_1 + 0x48) = (short)(iVar3 << 2);
  *(short *)(param_1 + 0x4a) = (short)cVar1 << 2;
  *(short *)(param_1 + 0x4c) = (short)(iVar4 << 2);
  return;
}

