// FUN_08039a80

void FUN_08039a80(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,2,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80132418;
    *(undefined1 *)(iVar1 + 3) = 5;
    *(undefined1 *)(iVar1 + 0x5e) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return;
}

