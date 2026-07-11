// FUN_080104b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080104b4(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x50) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080104f0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x50) * 4 + -0x7fef7060))();
    return;
  }
  return;
}

