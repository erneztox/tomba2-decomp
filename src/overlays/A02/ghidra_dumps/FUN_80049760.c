// FUN_80049760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80049760(int param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_1f8001a0 =
       FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                    (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
  _DAT_1f8001a0 = _DAT_1f8001a0 & 0xfff;
  iVar1 = FUN_80083f50();
  iVar2 = FUN_80083e80((int)(short)_DAT_1f8001a0);
  _DAT_1f8001a2 = 0;
  *(short *)(param_1 + 0x48) = (short)(iVar1 >> 4);
  *(short *)(param_1 + 0x4c) = (short)(iVar2 >> 4);
  _DAT_1f8001a0 = -_DAT_1f8001a0 & 0xfff;
  return;
}

