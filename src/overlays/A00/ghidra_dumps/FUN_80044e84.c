// FUN_80044e84

void FUN_80044e84(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *param_1;
  if (0 < iVar5) {
    psVar4 = (short *)((int)param_1 + -2);
    piVar6 = param_1 + 0x200;
    do {
      iVar5 = iVar5 + -1;
      piVar3 = param_1 + 1;
      param_1 = param_1 + 3;
      iVar1 = *param_1;
      iVar2 = param_2 + (int)psVar4[5] * (int)psVar4[6] * -2;
      FUN_80044d8c(piVar3,iVar2,piVar6);
      FUN_80081218(piVar3,iVar2);
      FUN_80080f6c(0);
      psVar4 = psVar4 + 6;
      piVar6 = (int *)((int)piVar6 + iVar1);
    } while (0 < iVar5);
  }
  return;
}

