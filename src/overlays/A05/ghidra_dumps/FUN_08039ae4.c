// FUN_08039ae4

int FUN_08039ae4(void)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80132418;
    *(undefined1 *)(iVar1 + 3) = 8;
  }
  return iVar1;
}

