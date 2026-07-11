// FUN_080389ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080389ec(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08038a24 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6088))();
    return;
  }
  if ((_DAT_1f80017c & 0xf) == 0) {
    func_0x000310f4(0x613,0xffffffce);
  }
  return;
}

