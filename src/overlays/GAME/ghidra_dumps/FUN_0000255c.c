// FUN_0000255c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000255c(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x4a) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0000258c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x4a) * 4 + -0x7fef9ce4))();
    return;
  }
  return;
}

