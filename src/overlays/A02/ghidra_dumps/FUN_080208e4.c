// FUN_080208e4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080208e4(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
    if (*(byte *)(param_1 + 3) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08020974 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef698c))();
      return;
    }
    func_0x000518fc(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x00118880(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

