// FUN_08030704

void FUN_08030704(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x6e);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
  }
  return;
}

