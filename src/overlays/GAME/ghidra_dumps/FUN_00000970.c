// FUN_00000970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000970(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4e) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x000009a4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4e) * 4 + -0x7fef9d94))();
    return;
  }
  return;
}

