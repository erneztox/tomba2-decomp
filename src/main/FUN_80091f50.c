
void FUN_80091f50(short param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_80104c30 + param_1 * 4);
  if (*(int *)(iVar1 + 0x98) == 1) {
    FUN_80095530((int)param_1,param_2,param_3,1);
  }
  else {
    *(undefined2 *)(iVar1 + 0x58) = param_2;
    *(undefined2 *)(iVar1 + 0x5a) = param_3;
  }
  return;
}

