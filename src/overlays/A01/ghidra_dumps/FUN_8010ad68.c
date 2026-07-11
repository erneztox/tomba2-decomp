// FUN_8010ad68

int FUN_8010ad68(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,0,3,0xf);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80113b40;
    *(undefined1 *)(iVar1 + 3) = 0;
  }
  return iVar1;
}

