// FUN_8010d108

int FUN_8010d108(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801156a4;
    *(undefined1 *)(iVar1 + 3) = 9;
    *(undefined1 *)(iVar1 + 0x5e) = param_2;
  }
  return iVar1;
}

