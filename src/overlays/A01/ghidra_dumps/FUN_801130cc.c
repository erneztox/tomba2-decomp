// FUN_801130cc

void FUN_801130cc(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_0x80072ddc(param_1,0,3,0x13);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x8011bed0;
    *(undefined1 *)(iVar2 + 3) = 0;
    *(ushort *)(iVar2 + 0x60) = (ushort)*(byte *)(param_1 + 3);
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    uVar1 = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar2 + 0x5e) = 0;
    *(undefined2 *)(iVar2 + 0x36) = uVar1;
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return;
}

