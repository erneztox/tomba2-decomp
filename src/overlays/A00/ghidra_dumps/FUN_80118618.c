// FUN_80118618

bool FUN_80118618(int param_1,uint param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (ushort *)
           (*(int *)((uint)*(byte *)(param_1 + 3) * 4 + -0x7feb6ba0) +
           *(short *)(param_1 + 0x6c) * 6);
  sVar3 = puVar2[1] - *(short *)(param_1 + 0x32);
  if ((param_2 & 1) != 0) {
    sVar3 = sVar3 + -200;
  }
  iVar6 = (int)(((uint)*puVar2 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
  iVar5 = (int)sVar3;
  iVar4 = (int)(((uint)puVar2[2] - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
  iVar1 = func_0x80084080(iVar6 * iVar6 + iVar5 * iVar5 + iVar4 * iVar4);
  if ((param_2 & 2) != 0) {
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar6 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar5 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar4 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 0x48) = (short)((iVar6 << 8) / iVar1);
    *(short *)(param_1 + 0x4a) = (short)((iVar5 << 8) / iVar1);
    *(short *)(param_1 + 0x4c) = (short)((iVar4 << 8) / iVar1);
  }
  return iVar1 < param_3;
}

