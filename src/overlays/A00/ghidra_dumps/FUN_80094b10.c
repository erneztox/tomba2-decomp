// FUN_80094b10

void FUN_80094b10(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 & 0xff) * 0x38;
  (&DAT_801054e5)[iVar1] = 0;
  *(undefined2 *)(iVar1 + -0x7fefab38) = 0;
  *(undefined2 *)(iVar1 + -0x7fefab34) = 0;
  return;
}

