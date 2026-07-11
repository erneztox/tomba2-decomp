// FUN_8011aaac

void FUN_8011aaac(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x8003116c(0x201,0,0);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x10) = param_1;
    *(undefined1 *)(iVar1 + 7) = 0;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  *(undefined2 *)(param_1 + 0x80) = 100;
  *(undefined2 *)(param_1 + 0x82) = 200;
  *(undefined2 *)(param_1 + 0x84) = 0x100;
  *(undefined2 *)(param_1 + 0x86) = 0x100;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  return;
}

