// FUN_08022170

void FUN_08022170(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080221b0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef68f0))(param_1,0x800e8008);
    return;
  }
  return;
}

