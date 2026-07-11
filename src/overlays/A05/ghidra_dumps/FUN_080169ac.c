// FUN_080169ac

void FUN_080169ac(int param_1)

{
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080169e0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef69e4))();
    return;
  }
  func_0x000551c4(param_1);
  return;
}

