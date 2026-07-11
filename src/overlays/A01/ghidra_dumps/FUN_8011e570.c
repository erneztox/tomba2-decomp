// FUN_8011e570

void FUN_8011e570(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x47) = 0;
  iVar1 = func_0x80072ddc(param_1,1,4,0x15);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80127af8;
    *(int *)(param_1 + 0x3c) = iVar1;
  }
  FUN_80126608(param_1);
  return;
}

