// FUN_0000082c

void FUN_0000082c(int param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x00076d68();
  }
  if (*(byte *)(param_1 + 6) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00000878 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef7040))();
    return;
  }
  return;
}

