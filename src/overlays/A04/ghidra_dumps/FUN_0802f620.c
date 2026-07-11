// FUN_0802f620

void FUN_0802f620(int param_1)

{
  if (*(byte *)(param_1 + 6) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0802f650 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5f64))();
    return;
  }
  return;
}

