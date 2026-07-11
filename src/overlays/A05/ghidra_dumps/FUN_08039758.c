// FUN_08039758

void FUN_08039758(void)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0x82,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80132418;
    *(undefined2 *)(iVar1 + 0x2e) = 0x39e0;
    *(undefined2 *)(iVar1 + 0x32) = 0xe7b4;
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined2 *)(iVar1 + 0x36) = 0x1f00;
  }
  return;
}

