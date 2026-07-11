// FUN_08012490

undefined4 FUN_08012490(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(*(int *)(param_1 + 0x158) + 0xc) == '\x04') &&
     (uVar1 = 0, *(char *)(*(int *)(param_1 + 0x158) + 2) == '\x16')) {
    uVar1 = func_0x0010b0fc();
  }
  return uVar1;
}

