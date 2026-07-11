// FUN_08023b04

bool FUN_08023b04(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = func_0x00085690((int)(((uint)*(ushort *)(param_1 + 100) -
                                (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10,
                          (int)(((uint)*(ushort *)(param_1 + 0x62) -
                                (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10);
  iVar2 = func_0x00077768((int)-sVar1,(int)*(short *)(param_1 + 0x56),0);
  return iVar2 != 0;
}

