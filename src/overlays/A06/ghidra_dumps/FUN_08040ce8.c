// FUN_08040ce8

void FUN_08040ce8(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08040d1c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5cac))();
    return;
  }
  return;
}

