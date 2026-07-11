// FUN_0802822c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802822c(int param_1)

{
  if ((DAT_800e7eaa == '\f') && (_DAT_800e7eb6 < 0x4298)) {
    _DAT_800e7eb6 = 0x4298;
  }
  if (*(byte *)(param_1 + 7) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08028298 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef64e4))();
    return;
  }
  return;
}

