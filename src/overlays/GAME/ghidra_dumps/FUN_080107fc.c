// FUN_080107fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080107fc(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4c) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801082c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4c) * 4 + -0x7fef9dac))();
    return;
  }
  return;
}

