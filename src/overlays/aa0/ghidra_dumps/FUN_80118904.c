// FUN_80118904

void FUN_80118904(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x80072ddc(param_1,3,2,7);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 0x1c) = &DAT_8011d988;
    *(undefined1 *)(iVar1 + 3) = *(undefined1 *)(param_1 + 3);
    *(undefined2 *)(iVar1 + 0x6c) = *(undefined2 *)(param_1 + 8);
    *(int *)(param_1 + 0xc) = iVar1;
    uVar2 = 0x546;
    if (*(char *)(param_1 + 3) == '\x03') {
      uVar2 = 0x1e;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  return;
}

