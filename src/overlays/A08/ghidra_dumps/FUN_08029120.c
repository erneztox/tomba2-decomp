// FUN_08029120

void FUN_08029120(void)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801280d0;
    *(undefined1 *)(iVar1 + 3) = 0x11;
  }
  return;
}

