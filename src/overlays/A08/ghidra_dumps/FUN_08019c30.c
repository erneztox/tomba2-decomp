// FUN_08019c30

void FUN_08019c30(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x08019c64 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6af8))();
    return;
  }
  return;
}

