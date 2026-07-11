// FUN_08013180

void FUN_08013180(int param_1)

{
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080131b0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6fe0))();
    return;
  }
  return;
}

