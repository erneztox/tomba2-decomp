// FUN_08029cd4

void FUN_08029cd4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,4,0x53);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80122998;
    *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_1 + 3);
  }
  return;
}

