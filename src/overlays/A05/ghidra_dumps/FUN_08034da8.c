// FUN_08034da8

void FUN_08034da8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = *(short *)(param_1 + 0x58);
  iVar2 = func_0x00083e80((int)sVar1);
  iVar3 = func_0x00083f50((int)sVar1);
  sVar1 = *(short *)(param_1 + 0x68);
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x62) + (short)(iVar3 * *(short *)(param_1 + 0x68) >> 0xc);
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  iVar4 = (int)(short)(-iVar2 * (int)sVar1 >> 0xc);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 100) + (short)(-iVar3 * iVar4 >> 0xc);
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x60) + (short)(-iVar2 * iVar4 >> 0xc);
  return;
}

