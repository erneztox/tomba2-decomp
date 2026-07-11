// FUN_80113200

void FUN_80113200(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(char *)(param_1 + 3) == '\x01') {
      iVar4 = 0;
      uVar3 = func_0x8003116c(0x202,0,0);
      if (uVar3 != 0) {
        *(int *)(uVar3 + 0x10) = param_1;
        *(uint *)(param_1 + 0x10) = uVar3;
        *(undefined2 *)(uVar3 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
        *(short *)(uVar3 + 0x2e) = *(short *)(param_1 + 0x32) + -0x30;
        uVar1 = *(ushort *)(param_1 + 0x36);
        *(undefined1 *)(uVar3 + 7) = 1;
        if (uVar3 != uVar1) {
          *(undefined1 *)(iVar4 + 5) = 0;
        }
        return;
      }
    }
    else {
      iVar4 = func_0x8003116c(0x201,0,0);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x10) = param_1;
        *(int *)(param_1 + 0x10) = iVar4;
        *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
        *(short *)(iVar4 + 0x2e) = *(short *)(param_1 + 0x32) + -0x30;
        uVar2 = *(undefined2 *)(param_1 + 0x36);
        *(undefined1 *)(iVar4 + 7) = 0;
        *(undefined2 *)(iVar4 + 0x30) = uVar2;
      }
    }
  }
  return;
}

