// FUN_08021a48

/* WARNING: Control flow encountered bad instruction data */

void FUN_08021a48(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (8 < *(byte *)(param_1 + 3)) {
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x08021e44 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef61d8))();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      if (8 < *(byte *)(param_1 + 3)) {
        return;
      }
                    /* WARNING: Could not emulate address calculation at 0x08021ab8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6200))();
      return;
    }
  }
  else if (bVar1 == 2) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

