// FUN_08030704

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030704(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0803073c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef61f0))();
    return;
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 100);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x66) + -0x100;
  iVar1 = func_0x00083f50((int)*(short *)(param_1 + 0x44));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1 * 0x1000;
  if (*(char *)(param_1 + 0x46) == '\0') {
    func_0x00083e80((int)*(short *)(param_1 + 0x44));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = func_0x00083e80((int)*(short *)(param_1 + 0x44));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar1 * -0x1000;
  return;
}

