// FUN_0803e16c

void FUN_0803e16c(int param_1)

{
  undefined1 uVar1;
  
  if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0803e19c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5cec))();
    return;
  }
  if (*(char *)(param_1 + 0xbf) == '\0') {
    uVar1 = func_0x00076d68(param_1);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
  }
  return;
}

