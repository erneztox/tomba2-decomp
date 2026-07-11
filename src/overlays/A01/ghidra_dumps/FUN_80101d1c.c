// FUN_80101d1c

undefined4 FUN_80101d1c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x158);
  uVar2 = 0;
  if ((*(char *)(iVar1 + 0xc) == '\x04') && (*(char *)(iVar1 + 2) == '\x17')) {
    uVar2 = FUN_8010a530(param_1,iVar1,param_2);
  }
  return uVar2;
}

