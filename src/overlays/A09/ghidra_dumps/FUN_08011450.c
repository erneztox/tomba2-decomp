// FUN_08011450

void FUN_08011450(int param_1)

{
  if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08011484 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef7004))(&DAT_800e7e80);
    return;
  }
  return;
}

