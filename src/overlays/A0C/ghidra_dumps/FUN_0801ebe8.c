// FUN_0801ebe8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0801ebe8(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = func_0x00085690((int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000)
                          >> 0x10,(int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) *
                                       0x10000) >> 0x10);
  iVar2 = func_0x00077768((int)-sVar1,(int)*(short *)(param_1 + 0x56),0);
  return iVar2 != 0;
}

