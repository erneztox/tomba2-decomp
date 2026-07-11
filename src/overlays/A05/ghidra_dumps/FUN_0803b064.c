// FUN_0803b064

void FUN_0803b064(int param_1)

{
  uint uVar1;
  
  *(undefined2 *)(param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  uVar1 = (*(byte *)(param_1 + 3) & 0x1f) - 4;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  if (uVar1 < 0x17) {
                    /* WARNING: Could not emulate address calculation at 0x0803b0c0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar1 * 4 + -0x7fef5fac))();
    return;
  }
  return;
}

