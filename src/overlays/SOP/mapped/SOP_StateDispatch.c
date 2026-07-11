// SOP_StateDispatch (SOP_StateDispatch) - Jump table dispatcher: 5 sub-states via param+0x50, dispatches to sub-functions

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_StateDispatch(void)

{
  if (*(ushort *)(_DAT_1f800138 + 0x50) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x000004f0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(ushort *)(_DAT_1f800138 + 0x50) * 4 + -0x7fef7060))();
    return;
  }
  return;
}

