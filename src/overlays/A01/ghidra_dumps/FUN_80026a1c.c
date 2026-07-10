// FUN_80026a1c

void FUN_80026a1c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(short *)(param_1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) != 0) {
        *(undefined1 *)(*(int *)(iVar1 + 0xc) + 4) = 3;
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(short *)(param_1 + 8));
  }
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}

