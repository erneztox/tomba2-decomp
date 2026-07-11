// OPN_CalcDistance (OPN_CalcDistance) - Distance/angle calculation: atan2 between 2 points, returns dist < 0x50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool OPN_CalcDistance(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(short *)(param_2 + 0x72) * 8;
  iVar5 = (int)(((uint)*(ushort *)(iVar6 + -0x7fe72c6c) - (uint)_DAT_1f8000da) * 0x10000) >> 0x10;
  iVar4 = (int)(((uint)*(ushort *)(iVar6 + -0x7fe72c70) - (uint)_DAT_1f8000d2) * 0x10000) >> 0x10;
  sVar1 = func_0x00085690(iVar5,iVar4);
  *(short *)(param_2 + 0x66) = sVar1 + -0x400;
  iVar5 = iVar4 * iVar4 + iVar5 * iVar5;
  uVar3 = func_0x00084080(iVar5);
  iVar4 = (int)(((uint)*(ushort *)(iVar6 + -0x7fe72c6e) - (uint)_DAT_1f8000d6) * 0x10000) >> 0x10;
  uVar2 = func_0x00085690(iVar4,uVar3);
  *(undefined2 *)(param_2 + 0x68) = uVar2;
  *(undefined2 *)(param_2 + 0x7a) = *(undefined2 *)(iVar6 + -0x7fe72c6a);
  iVar4 = func_0x00084080(iVar5 + iVar4 * 2);
  *(int *)(param_1 + 0x5c) = iVar4;
  return iVar4 < 0x50;
}

