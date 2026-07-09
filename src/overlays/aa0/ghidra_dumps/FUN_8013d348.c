// FUN_8013d348

int FUN_8013d348(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(0,3,2,3);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80145230;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = param_1;
  }
  return iVar1;
}

