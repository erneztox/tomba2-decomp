// FUN_080428a8

uint FUN_080428a8(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = *(ushort *)(param_1 + 0x2e);
  uVar3 = *(ushort *)(param_2 + 6);
  uVar4 = *(ushort *)(param_1 + 0x32);
  uVar5 = *(ushort *)(param_2 + 10);
  uVar6 = *(ushort *)(param_1 + 0x36);
  iVar7 = func_0x00083f50(-(int)*(short *)(param_1 + 0x60));
  iVar8 = func_0x00083e80(-(int)*(short *)(param_1 + 0x60));
  uVar9 = func_0x00085690((int)(((uint)uVar3 - (uint)uVar4) * 0x10000) >> 0x10,
                          iVar7 * ((int)(((uint)uVar1 - (uint)uVar2) * 0x10000) >> 0x10) +
                          iVar8 * ((int)(((uint)uVar5 - (uint)uVar6) * 0x10000) >> 0x10) >> 0xc);
  return uVar9 & 0xfff;
}

