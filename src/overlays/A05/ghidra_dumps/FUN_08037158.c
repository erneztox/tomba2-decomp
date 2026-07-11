// FUN_08037158

/* WARNING: Control flow encountered bad instruction data */

void FUN_08037158(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 0x12) {
                    /* WARNING: Could not emulate address calculation at 0x08037634 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef60d0))();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    if (*(byte *)(param_1 + 3) < 0x12) {
                    /* WARNING: Could not emulate address calculation at 0x080371d0 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6118))();
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

