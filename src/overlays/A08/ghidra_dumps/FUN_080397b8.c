// FUN_080397b8

undefined4 FUN_080397b8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00031220(0x919,0,0xffffffe2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return 1;
}

