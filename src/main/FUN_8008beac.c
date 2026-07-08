
int FUN_8008beac(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = -0x7fefd28c;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(iVar3 + -0x7fefd294) == 0) {
      return -1;
    }
    if ((*(int *)(iVar3 + -0x7fefd294) == param_1) &&
       (iVar1 = FUN_8009a540(param_2,iVar4), iVar1 == 0)) break;
    iVar4 = iVar4 + 0x2c;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x2c;
    if (0x7f < iVar2) {
      return -1;
    }
  }
  return iVar2 + 1;
}

