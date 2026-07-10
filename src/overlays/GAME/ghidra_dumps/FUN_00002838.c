// FUN_00002838

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002838(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4c) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00002868 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4c) * 4 + -0x7fef9cac))();
    return;
  }
  return;
}

