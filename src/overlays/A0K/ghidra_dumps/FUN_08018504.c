// FUN_08018504

void FUN_08018504(int param_1)

{
  if (*(byte *)(param_1 + 0x5e) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08018538 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fef6d40))();
    return;
  }
  return;
}

