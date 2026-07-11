// FUN_0801aa58

void FUN_0801aa58(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x0801aa90 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6384))();
    return;
  }
  return;
}

