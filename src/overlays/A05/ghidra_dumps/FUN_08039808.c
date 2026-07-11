// FUN_08039808

void FUN_08039808(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0x82,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80132418;
    *(undefined1 *)(iVar1 + 3) = 1;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return;
}

