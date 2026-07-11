// FUN_08036824

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036824(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = func_0x0009a450();
  iVar3 = (uint)*(ushort *)(param_1 + 0x7c) + (uVar2 & 0x7ff);
  *(short *)(param_1 + 0x7c) = (short)iVar3;
  iVar3 = func_0x00083e80(iVar3 * 0x10000 >> 0x10);
  *(short *)(*(int *)(param_1 + 0xf0) + 8) = (short)(iVar3 * *(short *)(param_1 + 0x7a) >> 0xc);
  sVar1 = func_0x00070698(8);
  *(short *)(param_1 + 0x2e) = sVar1 + 0x3080;
  sVar1 = func_0x00070698(8);
  *(short *)(param_1 + 0x32) = sVar1 + -0x2f40;
  sVar1 = func_0x00070698(8);
  *(short *)(param_1 + 0x36) = sVar1 + 0x4580;
  if ((DAT_800bf9c6 < 0x12) && ((_DAT_1f80017c & *(ushort *)(param_1 + 0x7e)) == 0)) {
    iVar3 = func_0x000310f4(0x601,0xffffffec);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    }
    iVar3 = func_0x000310f4(0x609,0xffffffec);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    }
    iVar3 = func_0x000310f4(0x60b,0xffffffec);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    }
  }
  return;
}

