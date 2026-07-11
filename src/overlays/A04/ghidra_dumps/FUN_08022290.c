// FUN_08022290

void FUN_08022290(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,1,0x13);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x54) = 0x400;
    *(undefined2 *)(param_1 + 0x56) = 0x800;
    *(undefined2 *)(param_1 + 0x58) = 0xff00;
    *(undefined2 *)(param_1 + 0x40) = 100;
  }
  return;
}

