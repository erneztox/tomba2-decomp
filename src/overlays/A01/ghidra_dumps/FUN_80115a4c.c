// FUN_80115a4c

void FUN_80115a4c(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x2b) == '\x03') {
    func_0x80040d68(param_1,0x800a3d40);
    uVar1 = (uint)*(byte *)(param_1 + 0x5e);
    *(undefined1 *)(param_1 + 0x70) = 1;
    if ((uVar1 == 4) || (uVar1 == 6)) {
                    /* WARNING: Could not emulate address calculation at 0x8011ea48 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar1 * 4 + 6))(1,3);
      return;
    }
    func_0x80042354(1,1);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

