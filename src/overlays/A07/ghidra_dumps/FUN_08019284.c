// FUN_08019284

void FUN_08019284(int param_1)

{
  if (*(byte *)(param_1 + 4) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080192bc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 4) * 4 + -0x7fef6bc0))();
    return;
  }
  return;
}

