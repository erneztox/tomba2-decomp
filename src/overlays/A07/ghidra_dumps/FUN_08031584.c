// FUN_08031584

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08031584(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x71) == -1) {
    if (*(byte *)(param_1 + 0x5e) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x080315c4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fef6570))();
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)(param_1 + 0x5e) == '\t') {
    uVar1 = *(byte *)(param_1 + 6) - 1;
    if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x080316b8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar1 * 4 + -0x7fef6548))(0x800e8008);
      return;
    }
    if (*(char *)(param_1 + 0x5f) != '\0') {
      func_0x0006cba8(param_1 + 0x2c);
      _DAT_800e7ed6 =
           func_0x00085690((int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36),
                           (int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160);
      _DAT_800e7ed6 = _DAT_800e7ed6 & 0xfff;
    }
  }
  return;
}

