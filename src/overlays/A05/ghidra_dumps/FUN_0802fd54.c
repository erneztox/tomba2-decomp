// FUN_0802fd54

void FUN_0802fd54(int param_1)

{
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802fd88 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6318))(&DAT_800e7e80);
    return;
  }
  return;
}

