// FUN_0801183c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0801183c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  sVar1 = *(short *)(param_1 + 0x80);
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  _DAT_1f8000c0 = (undefined2)(iVar3 * *(short *)(param_1 + 0x80) >> 0xc);
  _DAT_1f8000c4 = (undefined2)(-iVar2 * (int)sVar1 >> 0xc);
  _DAT_1f8000c2 = *(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84);
  iVar2 = func_0x001258a4(param_1 + 0x2c);
  return iVar2 != 0;
}

