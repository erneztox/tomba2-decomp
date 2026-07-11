// FUN_08012440

undefined4 FUN_08012440(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x158);
  uVar2 = 0;
  if ((*(char *)(iVar1 + 0xc) == '\x04') && (*(char *)(iVar1 + 2) == '\x17')) {
    uVar2 = func_0x0010ac84(param_1,iVar1,param_2);
  }
  return uVar2;
}

