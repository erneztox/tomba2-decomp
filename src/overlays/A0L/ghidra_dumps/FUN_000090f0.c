// FUN_000090f0

void FUN_000090f0(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x60);
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x66));
  iVar2 = (iVar2 << 4) >> 0xc;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x62) - (short)iVar2;
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x66));
  *(short *)(param_1 + 0x36) =
       *(short *)(param_1 + 100) + (short)(iVar2 * *(short *)(param_1 + 0x68) >> 0xc);
  uVar1 = func_0x0009a450();
  *(ushort *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + 4 + (uVar1 & 3);
  *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + 0x30;
  return;
}

