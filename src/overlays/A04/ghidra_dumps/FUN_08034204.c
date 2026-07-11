// FUN_08034204

void FUN_08034204(int param_1)

{
  func_0x0012f054();
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08034238 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5e98))();
    return;
  }
  return;
}

