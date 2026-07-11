// FUN_08030968

void FUN_08030968(int param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = (int)((uint)param_2 << 0x10) >> 0xe;
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(iVar1 + -0x7febe6ec);
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(iVar1 + -0x7febe6ea);
  iVar1 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 100) = (short)(-iVar1 * (int)*(short *)(param_1 + 0x60) >> 0xc);
  iVar1 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  *(ushort *)(param_1 + 0x6c) = param_2;
  *(short *)(param_1 + 0x60) = (short)(iVar1 * *(short *)(param_1 + 0x60) >> 0xc);
  return;
}

