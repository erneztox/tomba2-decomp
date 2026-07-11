// FUN_8011897c

void FUN_8011897c(undefined4 param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,3,2,7);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 0x1c) = &DAT_8011d988;
    *(undefined1 *)(iVar1 + 3) = 6;
    *(undefined2 *)(iVar1 + 0x68) = param_2;
    *(undefined1 *)(iVar1 + 0x5e) = param_3;
  }
  return;
}

