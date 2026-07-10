// FUN_80091120

void FUN_80091120(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  iVar1 = *(int *)(iVar3 + 0x90);
  iVar2 = iVar1 - *(short *)(iVar3 + 0x54);
  if (iVar2 < 1) {
    if (*(short *)(iVar3 + 0x54) < iVar1) {
      return;
    }
    do {
      do {
        FUN_80091460((param_1 << 0x10) >> 0x10,(int)param_2);
      } while (*(int *)(iVar3 + 0x90) == 0);
      iVar1 = iVar1 + *(int *)(iVar3 + 0x90);
      iVar2 = iVar1 - *(short *)(iVar3 + 0x54);
    } while (iVar1 < *(short *)(iVar3 + 0x54));
  }
  else {
    if (0 < *(short *)(iVar3 + 0x52)) {
      *(short *)(iVar3 + 0x52) = *(short *)(iVar3 + 0x52) + -1;
      return;
    }
    if (*(short *)(iVar3 + 0x52) != 0) {
      *(int *)(iVar3 + 0x90) = iVar2;
      return;
    }
    *(undefined2 *)(iVar3 + 0x52) = *(undefined2 *)(iVar3 + 0x54);
    iVar2 = *(int *)(iVar3 + 0x90) + -1;
  }
  *(int *)(iVar3 + 0x90) = iVar2;
  return;
}

