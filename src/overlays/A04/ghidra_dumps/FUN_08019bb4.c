// FUN_08019bb4

void FUN_08019bb4(int param_1)

{
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08019bec */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef63c4))();
    return;
  }
  return;
}

