// FUN_8011aba4

void FUN_8011aba4(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar2 + 0x2e);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar2 + 0x32);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar2 + 0x36);
  cVar1 = *(char *)(iVar2 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 != '\0') {
    func_0x80077e7c();
  }
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
  *(short *)(iVar2 + 0x2e) = *(short *)(param_1 + 0x32) + -0x40;
  *(undefined2 *)(iVar2 + 0x30) = *(undefined2 *)(param_1 + 0x36);
  return;
}

