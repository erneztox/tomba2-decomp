
void FUN_8004d79c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  iVar2 = (int)(short)(iVar1 >> 3);
  *(byte *)(iVar2 + -0x7ff4024c) =
       *(byte *)(iVar2 + -0x7ff4024c) |
       (byte)(1 << ((param_1 + (iVar1 >> 3) * -8) * 0x10000 >> 0x10 & 0x1fU));
  return;
}

