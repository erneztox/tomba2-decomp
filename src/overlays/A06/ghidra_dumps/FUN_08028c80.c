// FUN_08028c80

void FUN_08028c80(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08028cc0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6338))();
    return;
  }
  return;
}

