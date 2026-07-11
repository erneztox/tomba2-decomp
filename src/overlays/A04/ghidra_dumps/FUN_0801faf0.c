// FUN_0801faf0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801faf0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801fd14 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef627c))();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    if (*(byte *)(param_1 + 3) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801fb68 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6294))();
      return;
    }
  }
  else if (bVar1 == 2) {
    if (*(byte *)(param_1 + 3) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801fdb4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6264))();
      return;
    }
  }
  else {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

