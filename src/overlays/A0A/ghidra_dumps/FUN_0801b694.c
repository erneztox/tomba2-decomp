// FUN_0801b694

void FUN_0801b694(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = func_0x0007a980(2,4,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x80114b38;
    *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(param_1 + 2);
    uVar1 = *(undefined1 *)(param_1 + 3);
    *(undefined1 *)(iVar2 + 0x47) = 1;
    *(undefined1 *)(iVar2 + 3) = uVar1;
    iVar3 = func_0x0007a980(1,4,0);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x1c) = 0x80115df0;
      *(undefined1 *)(iVar3 + 2) = 0x17;
      uVar1 = *(undefined1 *)(param_1 + 3);
      *(undefined1 *)(iVar3 + 0x47) = 0;
      *(undefined1 *)(iVar3 + 3) = uVar1;
      iVar4 = func_0x0007a980(1,4,0);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x1c) = 0x80115df0;
        *(undefined1 *)(iVar4 + 2) = 0x17;
        uVar1 = *(undefined1 *)(param_1 + 3);
        *(undefined1 *)(iVar4 + 0x47) = 1;
        *(undefined1 *)(iVar4 + 3) = uVar1;
        iVar5 = func_0x0007a980(1,4,0);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x1c) = 0x80115df0;
          *(undefined1 *)(iVar5 + 2) = 0x17;
          uVar1 = *(undefined1 *)(param_1 + 3);
          *(undefined1 *)(iVar5 + 0x47) = 2;
          *(undefined1 *)(iVar5 + 3) = uVar1;
          *(int *)(param_1 + 0x10) = iVar2;
          *(int *)(iVar2 + 0x10) = param_1;
          *(int *)(param_1 + 0x14) = iVar3;
          *(int *)(iVar2 + 0x14) = iVar4;
          *(int *)(iVar3 + 0x10) = param_1;
          *(int *)(iVar4 + 0x10) = iVar2;
          *(int *)(iVar5 + 0x10) = iVar4;
          *(int *)(iVar5 + 0x14) = iVar3;
          *(int *)(iVar5 + 0x3c) = iVar2;
          *(int *)(iVar3 + 0x14) = iVar4;
          *(int *)(iVar3 + 0x3c) = iVar5;
          *(int *)(iVar4 + 0x14) = iVar3;
          *(int *)(iVar4 + 0x3c) = iVar5;
        }
      }
    }
  }
  return;
}

