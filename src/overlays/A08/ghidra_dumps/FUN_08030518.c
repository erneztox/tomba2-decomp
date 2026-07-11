// FUN_08030518

void FUN_08030518(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801280d0;
    *(undefined1 *)(iVar1 + 3) = 0x12;
    *(undefined2 *)(iVar1 + 0x60) = param_1;
  }
  return;
}

