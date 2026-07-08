
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80092b00(ushort param_1)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  
  bVar1 = (int)((uint)param_1 << 0x10) < 0;
  if (bVar1) {
    param_1 = -param_1;
  }
  if (param_1 < 10) {
    _DAT_80105bf8 = 1;
    uVar2 = param_1;
    if (bVar1) {
      uVar2 = param_1 | 0x100;
    }
    _DAT_80105bfc = (int)(short)uVar2;
    iVar3 = (int)(short)param_1;
    if (iVar3 == 0) {
      FUN_80098150(0);
    }
    FUN_80098330(&DAT_80105bf8);
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}

