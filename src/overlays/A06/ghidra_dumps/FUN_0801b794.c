// FUN_0801b794

void FUN_0801b794(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x158);
  if ((*(char *)(iVar1 + 0xc) == '\x04') &&
     ((*(char *)(iVar1 + 2) == '\0' || (*(char *)(iVar1 + 2) == '<')))) {
    func_0x001134e4(param_1,iVar1,param_2);
  }
  return;
}

