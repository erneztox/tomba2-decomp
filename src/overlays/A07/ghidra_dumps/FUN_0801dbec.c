// FUN_0801dbec

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801dbec(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    uVar2 = *(byte *)(param_1 + 3) - 1;
    if (uVar2 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0801de30 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar2 * 4 + -0x7fef6a2c))();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = *(byte *)(param_1 + 3) - 1;
    *(undefined1 *)(param_1 + 4) = 1;
    if (uVar2 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0801dc6c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar2 * 4 + -0x7fef6a54))();
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

