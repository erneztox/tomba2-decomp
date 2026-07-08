
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80048654(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                       (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
  _DAT_1f8001a0 = -sVar2 & 0xfff;
  iVar3 = (int)*_DAT_1f8001e8;
  iVar4 = (int)_DAT_1f8001e8[2];
  cVar1 = _DAT_1f8001e8[1];
  sVar2 = FUN_80084080(iVar3 * iVar3 + iVar4 * iVar4);
  _DAT_1f8001a2 = FUN_80085690((int)(short)cVar1,(int)sVar2);
  *(short *)(param_1 + 0x48) = (short)(iVar3 << 2);
  *(short *)(param_1 + 0x4a) = (short)cVar1 << 2;
  *(short *)(param_1 + 0x4c) = (short)(iVar4 << 2);
  return;
}

