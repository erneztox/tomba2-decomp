// FUN_000047b4

void FUN_000047b4(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x000047ec */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6f98))();
    return;
  }
  return;
}

