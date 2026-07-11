// FUN_08023ba8

void FUN_08023ba8(int param_1)

{
  uint uVar1;
  
  uVar1 = (int)((*(ushort *)(param_1 + 0x74) - 1) * 0x10000) >> 0x10;
  if (uVar1 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08023be4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar1 * 4 + -0x7fef64f8))();
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xd8) + 0x3e) = 0;
  return;
}

