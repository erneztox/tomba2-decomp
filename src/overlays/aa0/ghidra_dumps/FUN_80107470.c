// FUN_80107470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80107470(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
  iVar2 = func_0x80083e80((int)*(short *)(param_2 + 0x56));
  iVar5 = (int)(short)(iVar1 * 0x6e >> 0xc);
  iVar1 = func_0x80083f50((int)*(short *)(param_2 + 0x56));
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x14c) -
                ((uint)*(ushort *)(param_3 + 0x2c) - (iVar1 * iVar5 >> 0xc))) * 0x10000) >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x150) -
                ((uint)*(ushort *)(param_3 + 0x34) + (iVar2 * iVar5 >> 0xc))) * 0x10000) >> 0x10;
  uVar3 = func_0x80084080(iVar1 * iVar1 + iVar2 * iVar2);
  uVar4 = 0;
  if ((int)(uVar3 & 0xffff) <= *(short *)(param_2 + 0x80) + _DAT_1f800088) {
    iVar1 = func_0x80083f50((int)*(short *)(param_3 + 0xc));
    uVar4 = 0;
    if ((int)(((uint)*(ushort *)(param_1 + 0x14e) -
              ((iVar1 * 0x6e >> 0xc) + (uint)*(ushort *)(param_3 + 0x30))) +
              (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x68) & 0xffff) <=
        (int)*(short *)(param_2 + 0x86) + ((int)((uint)*(ushort *)(param_1 + 0x68) << 0x10) >> 0xf))
    {
      uVar4 = 1;
      *(undefined2 *)(param_1 + 0x156) = 0x6e;
      _DAT_1f800084 = param_3;
    }
  }
  return uVar4;
}

