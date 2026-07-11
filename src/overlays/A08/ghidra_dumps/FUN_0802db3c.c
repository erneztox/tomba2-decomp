// FUN_0802db3c

void FUN_0802db3c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0802db6c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6134))();
    return;
  }
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x000517f8(param_1);
  }
  return;
}

