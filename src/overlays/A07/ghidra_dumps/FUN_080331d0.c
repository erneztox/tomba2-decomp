// FUN_080331d0

void FUN_080331d0(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08033200 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6500))();
    return;
  }
  return;
}

