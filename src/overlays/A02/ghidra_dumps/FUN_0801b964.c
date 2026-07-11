// FUN_0801b964

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b964(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (0xc < *(byte *)(param_1 + 3)) {
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x0801bb84 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6b0c))();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      if (0xc < *(byte *)(param_1 + 3)) {
        return;
      }
                    /* WARNING: Could not emulate address calculation at 0x0801b9d8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6b44))();
      return;
    }
  }
  else if (bVar1 == 2) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

