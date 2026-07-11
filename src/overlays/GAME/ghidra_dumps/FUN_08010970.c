// FUN_08010970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010970(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4e) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x080109a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4e) * 4 + -0x7fef9d94))();
    return;
  }
  return;
}

