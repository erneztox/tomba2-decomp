
void FUN_8004d714(int param_1,char param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  param_1 = param_1 + (iVar1 >> 3) * -8;
  sVar2 = (short)(iVar1 >> 3);
  if (param_2 == '\0') {
    *(byte *)(sVar2 + -0x7ff4034c) =
         *(byte *)(sVar2 + -0x7ff4034c) | (byte)(1 << (param_1 * 0x10000 >> 0x10 & 0x1fU));
    return;
  }
  *(byte *)(sVar2 + -0x7ff402cc) =
       *(byte *)(sVar2 + -0x7ff402cc) | (byte)(1 << (param_1 * 0x10000 >> 0x10 & 0x1fU));
  return;
}

