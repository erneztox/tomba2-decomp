// FUN_0803ea38

void FUN_0803ea38(int param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077e7c();
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803ea74 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5dbc))();
    return;
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

