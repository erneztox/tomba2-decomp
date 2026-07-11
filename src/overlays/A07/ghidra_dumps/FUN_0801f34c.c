// FUN_0801f34c

void FUN_0801f34c(int param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0801f39c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6a08))();
    return;
  }
  return;
}

