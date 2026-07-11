// FUN_0802100c

void FUN_0802100c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0802103c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef623c))();
    return;
  }
  return;
}

