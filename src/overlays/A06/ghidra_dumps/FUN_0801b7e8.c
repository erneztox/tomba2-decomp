// FUN_0801b7e8

undefined4 FUN_0801b7e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(*(int *)(param_1 + 0x158) + 0xc) == '\x04') &&
     (uVar1 = 0, *(char *)(*(int *)(param_1 + 0x158) + 2) == ';')) {
    uVar1 = func_0x00113c30();
  }
  return uVar1;
}

