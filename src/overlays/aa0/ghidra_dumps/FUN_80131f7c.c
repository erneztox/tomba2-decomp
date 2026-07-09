// FUN_80131f7c

void FUN_80131f7c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = -0x7feb552c;
  iVar2 = -0x7feb5544;
  iVar1 = param_1;
  do {
    if (param_2 == 0) {
      func_0x80051b04(*(undefined4 *)(iVar1 + 0xc0),param_3,iVar4);
      **(undefined2 **)(iVar1 + 0xc0) = *(undefined2 *)(iVar2 + 2);
      *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 2) = *(undefined2 *)(iVar2 + 4);
      *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 4) = *(undefined2 *)(iVar2 + 6);
      FUN_8013afe0();
      return;
    }
    func_0x80051b04(*(undefined4 *)(iVar1 + 0xc0),param_3,iVar4 + 3);
    **(undefined2 **)(iVar1 + 0xc0) = *(undefined2 *)(iVar3 + 2);
    *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 2) = *(undefined2 *)(iVar3 + 4);
    *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 4) = *(undefined2 *)(iVar3 + 6);
    iVar3 = iVar3 + 8;
    iVar1 = iVar1 + 4;
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 8;
  } while (iVar4 < 3);
  *(char *)(param_1 + 0x5e) = (char)param_2;
  return;
}

