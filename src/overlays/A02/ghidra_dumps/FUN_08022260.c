// FUN_08022260

void FUN_08022260(int param_1)

{
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802229c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6914))();
    return;
  }
  return;
}

