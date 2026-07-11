// FUN_08027184

void FUN_08027184(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080271b4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6730))();
    return;
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  *(char *)(param_1 + 8) = *(char *)(param_1 + 9);
  if (*(char *)(param_1 + 9) == '\x10') {
    *(undefined2 *)(*(int *)(param_1 + 0xfc) + 10) = 0x40;
    *(undefined2 *)(*(int *)(param_1 + 0xfc) + 0xc) = 0xe10;
  }
  return;
}

