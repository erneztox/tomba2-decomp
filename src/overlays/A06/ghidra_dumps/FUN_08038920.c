// FUN_08038920

void FUN_08038920(int param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  
  if ((param_2 == 8) &&
     ((*(ushort *)(param_1 + 0x66) - 0xb00 < 0x201 || (*(ushort *)(param_1 + 0x66) - 0x100 < 0x401))
     )) {
    param_2 = 10;
  }
  sVar2 = *(short *)(param_1 + 0x42) + 0x1f;
  *(short *)(param_1 + 0x42) = sVar2;
  iVar1 = func_0x00083e80((int)sVar2);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar1 >> (param_2 & 0x1f));
  return;
}

