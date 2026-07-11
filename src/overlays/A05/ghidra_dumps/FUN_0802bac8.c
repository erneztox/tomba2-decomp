// FUN_0802bac8

void FUN_0802bac8(int param_1)

{
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802bb00 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef643c))(&DAT_800e7e80);
    return;
  }
  return;
}

