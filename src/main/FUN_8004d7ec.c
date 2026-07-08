
uint FUN_8004d7ec(int param_1,char param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 < 0) {
    iVar2 = param_1 + 7;
  }
  param_1 = param_1 + (iVar2 >> 3) * -8;
  sVar1 = (short)(iVar2 >> 3);
  if (param_2 != '\0') {
    return (uint)*(byte *)(sVar1 + -0x7ff402cc) & 1 << (param_1 * 0x10000 >> 0x10 & 0x1fU);
  }
  return (uint)*(byte *)(sVar1 + -0x7ff4034c) & 1 << (param_1 * 0x10000 >> 0x10 & 0x1fU);
}

