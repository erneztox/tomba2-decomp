// FUN_00008fa0

int FUN_00008fa0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80111744;
    *(undefined1 *)(iVar1 + 3) = 6;
    *(undefined1 *)(iVar1 + 0x5e) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return iVar1;
}

