// FUN_080259ec

void FUN_080259ec(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08025a2c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6134))(param_1,0x800e8008);
    return;
  }
  return;
}

