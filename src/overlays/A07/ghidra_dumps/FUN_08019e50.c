// FUN_08019e50

void FUN_08019e50(int param_1)

{
  if (*(byte *)(param_1 + 2) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08019e98 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef6bac))();
    return;
  }
  return;
}

