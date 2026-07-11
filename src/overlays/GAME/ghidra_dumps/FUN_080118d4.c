// FUN_080118d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080118d4(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4e) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08011908 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4e) * 4 + -0x7fef9d4c))();
    return;
  }
  return;
}

