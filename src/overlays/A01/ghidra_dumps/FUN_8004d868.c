// FUN_8004d868

uint FUN_8004d868(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  return (uint)*(byte *)((short)(iVar1 >> 3) + -0x7ff4024c) &
         1 << ((param_1 + (iVar1 >> 3) * -8) * 0x10000 >> 0x10 & 0x1fU);
}

