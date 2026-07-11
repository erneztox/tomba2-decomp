// FUN_080290c8

void FUN_080290c8(void)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,1,2,0xce);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8013ddd4;
    *(undefined2 *)(iVar1 + 0x2e) = 0x445c;
    *(undefined2 *)(iVar1 + 0x32) = 0xead7;
    *(undefined2 *)(iVar1 + 0x36) = 0x1040;
  }
  return;
}

