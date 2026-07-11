// FUN_08026c4c

void FUN_08026c4c(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08026c80 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef643c))(&DAT_800e7e80);
    return;
  }
  return;
}

