// FUN_08028c04

void FUN_08028c04(int param_1)

{
  if (*(byte *)(param_1 + 5) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08028c38 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6484))();
    return;
  }
  return;
}

