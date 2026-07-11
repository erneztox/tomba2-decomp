// FUN_08011d14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011d14(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4e) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08011d44 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4e) * 4 + -0x7fef9d34))();
    return;
  }
  return;
}

