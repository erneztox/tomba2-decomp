// FUN_08020c54

/* WARNING: Control flow encountered bad instruction data */

void FUN_08020c54(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(iVar1 + 0x5e) != '\x01') goto LAB_08020ce0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + -10;
    *(short *)(param_1 + 0x7c) = *(short *)(param_1 + 0x7c) + -0x200;
    *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + '\x10';
    *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + '\x10';
    *(char *)(param_1 + 0x1a) = *(char *)(param_1 + 0x1a) + '\x10';
    if (*(char *)(param_1 + 0x18) == '\0') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
LAB_08020ce0:
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar1 + 0x2e);
    *(short *)(param_1 + 0x32) = *(short *)(iVar1 + 0x32) - *(short *)(param_1 + 0x60);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar1 + 0x36);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar1 + 1);
    func_0x00077b5c();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

