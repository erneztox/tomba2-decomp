// FUN_0801b180

void FUN_0801b180(int param_1)

{
  *(undefined1 *)(param_1 + 0x16a) = 6;
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801b1b8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6344))();
    return;
  }
  func_0x000551c4(param_1);
  return;
}

