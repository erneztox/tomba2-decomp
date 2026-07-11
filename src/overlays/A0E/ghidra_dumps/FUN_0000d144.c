// FUN_0000d144

bool FUN_0000d144(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) * 0x10000)
          >> 0x10;
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = -iVar3;
  }
  sVar1 = (short)(iVar2 + -0x30);
  if ((iVar2 + -0x30) * 0x10000 < 0) {
    sVar1 = 0;
  }
  if (iVar3 < 0) {
    sVar1 = -sVar1;
  }
  *(ushort *)(param_2 + 0x32) = *(ushort *)(param_2 + 0x32) + sVar1;
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  iVar2 = func_0x00084080(iVar4 * iVar4 + iVar3 * iVar3);
  if (iVar2 >= 0x40) {
    sVar1 = func_0x00085690(-iVar3,iVar4);
    iVar3 = func_0x00083f50((int)sVar1);
    iVar4 = func_0x00083e80((int)sVar1);
    *(short *)(param_2 + 0x2e) = *(short *)(param_2 + 0x2e) + (short)(iVar3 * 0x30 >> 0xc);
    *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0x36) + (short)(iVar4 * -0x30 >> 0xc);
  }
  return iVar2 < 0x40;
}

