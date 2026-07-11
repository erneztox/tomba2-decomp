// FUN_0801d2ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801d2ec(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_1[5] == '\0') {
    param_1[5] = 1;
    *param_1 = 1;
  }
  else if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar1 + 200) + 0x2c);
  *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar1 + 200) + 0x30) + -200;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar1 + 200) + 0x34);
  func_0x0007778c();
  return;
}

