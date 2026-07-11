// FUN_080126b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080126b0(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4c) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x080126e0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4c) * 4 + -0x7fef9ccc))();
    return;
  }
  return;
}

