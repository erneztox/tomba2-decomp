// FUN_080162f0

void FUN_080162f0(int param_1)

{
  if (*(byte *)(param_1 + 6) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08016328 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6e58))();
    return;
  }
  return;
}

