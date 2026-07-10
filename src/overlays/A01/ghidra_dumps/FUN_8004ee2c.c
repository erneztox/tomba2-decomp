// FUN_8004ee2c

void FUN_8004ee2c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xb;
  iVar1 = (int)param_1 + 0x16;
  do {
    *(undefined2 *)(iVar1 + 4) = 0xffff;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -2;
  } while (-1 < iVar2);
  *param_1 = 0;
  return;
}

