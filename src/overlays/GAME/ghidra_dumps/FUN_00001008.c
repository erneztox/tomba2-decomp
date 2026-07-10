// FUN_00001008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001008(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4e) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00001040 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4e) * 4 + -0x7fef9d64))();
    return;
  }
  return;
}

