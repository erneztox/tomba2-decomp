// FUN_08028130

void FUN_08028130(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08028170 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef63b8))();
    return;
  }
  return;
}

