// FUN_00001450

void FUN_00001450(int param_1)

{
  if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00001484 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef7004))(&DAT_800e7e80);
    return;
  }
  return;
}

